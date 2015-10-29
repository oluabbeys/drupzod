var currentTab = 'Account';

function getElem(e) {
	if (document.getElementById) {
		return document.getElementById(e);
	} else if (document.all){
		return document.all[e];
	}
}

function hideElem(page) {
    var e = getElem(page);
    if (e != null) e.style.display='none';
}

function showElem(page) {
    var e = getElem(page);
    if (e != null) e.style.display='inline';
}

function setElementValue(elem, val, forceHTML) {
    var e = document.getElementById(elem);
    if (e != null && val != null) {
        var node = e;
        if (!forceHTML && node.firstChild) {
            node = node.firstChild;
            node.nodeValue = val;
        } else {
            node.innerHTML = val;
        }
    }
}

chilliClock.onChange = function ( newval ) {
    setElementValue("duration", chilliController.formatTime(newval));
}

chilliController.logonCount = 0;

var delayTimer;

function updateUI (cmd ) {
    log ( "Update UI is called. chilliController.clientState = " + chilliController.clientState ) ;

    clearTimeout ( delayTimer );

    if ( chilliController.redir ) {
        if (chilliController.redir.originalURL != null && chilliController.redir.originalURL != '') {
            setElementValue('originalURL', '<'+'a target="_blank" href="'+chilliController.redir.originalURL+
                            '">'+chilliController.redir.originalURL+'<'+'/a>', true);
        }
        if (chilliController.redir.redirectionURL != null && chilliController.redir.redirectionURL != '') {
            setElementValue('redirectionURL', chilliController.redir.redirectionURL);
        }
    }

    if ( chilliController.message ) {
        setElementValue('logonMessage', chilliController.message);
    }

    if ( chilliController.location ) {
        setElementValue('locationName', chilliController.location.name);
    }

    if ( chilliController.clientState == 0 ) {
	if (chilliController.previousState) {
	    chilliController.loggedOut();
	}
	chilliController.previousState = 0;
        if (chilliController.message) { showLogonPage(); }
        else {
	  if (c_username != null && chilliController.logonCount < 4) {
	    chilliController.logonCount++;
	    chilliController.logon( c_username, c_password ) ;
	  }
          else {
            showLogonPage();
          }
        }
    }

    if ( chilliController.clientState == 1 ) {
	chilliController.previousState = 1;

        if ( chilliController.statusURL ) {
	    chilliController.statusWindow = window.open(chilliController.statusURL, "Hotspot Status", "status=0,toolbar=0,width=550,height=350,scrollbars=0,location=0" );
	   window.location = chilliController.redir.redirectionURL ? chilliController.redir.redirectionURL : chilliController.redir.originalURL;
        } else {
           showStatusPage();
        }
    } else {
	    if (chilliController.message && 
	    	chilliController.message == 'Redirecting for authentication' &&
	    	!chilliController.redir.redirectionURL)
	    	chilliController.refresh();
    }

    if ( chilliController.clientState == 2 ) {
      showWaitPage();
    }

    chilliController.message = null;

    var url = chilliController.redir.redirectionURL;
    if (url && url.length > 0) {
        chilliController.redir.redirectionURL = null;
        if (url != top.location.href.substring(0,url.length)) 
        	top.location.href = url;
    }
    
    if ( chilliController.clientState == 3 ) {
      if (c_username != null && chilliController.logonCount < 4) {
	chilliController.logonCount++;
	chilliController.logon( c_username, c_password ) ;
      }
      showStatusPage();
    }
}

chilliController.formatBytes = function ( b , zeroReturn ) {

    if ( typeof(b) == 'undefined' ) {
        b = 0;
    } else {
        b = parseInt ( b , 10 ) ;
    }

    if ( (typeof (zeroReturn) !='undefined') && ( b === 0 ) ) {
		return zeroReturn;
    }

    var kb = Math.round(b  / 10) / 100;
    if (kb < 1) return b  + ' B';

    var mb = Math.round(kb / 10) / 100;
    if (mb < 1)  return kb + ' KB';

    var gb = Math.round(mb / 10) / 100;
    if (gb < 1)  return mb + ' MB';

    return gb + ' GB';
};

function handleError( code ) {
    clearTimeout(delayTimer);
    //showErrorPage(code);
}

function connect() {
    var username =  getElem('username').value ;
    var password =  getElem('password').value ;

    if (username == null || username == '')
        return setElementValue('logonMessage', 
			       getElem('usernameLabel').innerHTML + ' is required');

    if (currentTab == 'Account' && chilliController.realm) {
		username = chilliController.realm + "/" + username;
    }
    if (currentTab == 'Code' && chilliController.codeRealm) {
		username = chilliController.codeRealm + "/" + username;
    }

    showWaitPage(1000);
    chilliController.logon( username , password ) ;
}

function disconnect() {
    if (confirm("Are you sure you want to disconnect now?")) {
        chilliClock.stop();
        showWaitPage(1000);
        chilliController.logoff();
    }
    return false;
}

function showLogonPage() {
    showElem("logonPage");
    hideElem("statusPage");
    hideElem("waitPage");
    hideElem("errorPage");
}

function timediff(m, c, s) { 
    setElementValue(s, chilliController.formatTime(c));
    var tm = chilliController.formatTime(m, '');
    if (tm != '') {
      setElementValue(s + 'limit', ' / '+tm);
      tm = chilliController.formatTime(m - c, '');
      setElementValue(s + 'left', '  ('+tm+' left)');
    }
}

function datadiff(m, c, s) { 
    setElementValue(s, chilliController.formatBytes(c));
    var tm = chilliController.formatBytes(m, '');
    if (tm != '') {
      setElementValue(s + 'limit', ' / '+tm);
      tm = chilliController.formatBytes(m - c, '');
      setElementValue(s + 'left', '  ('+tm+' left)');
    }
}

function showStatusPage() {
    hideElem("logonPage");
    showElem("statusPage");
    hideElem("waitPage");
    hideElem("errorPage");

    if ( chilliController.message ) {
        setElementValue("statusMessage", chilliController.message);
    }

    setElementValue("sessionId",
                    chilliController.session.sessionId ?
                    chilliController.session.sessionId :
                    "Not available");

    setElementValue("startTime",
                    chilliController.session.startTime ?
                    chilliController.session.startTime :
                    "Not available");

    timediff(chilliController.session.sessionTimeout, chilliController.accounting.sessionTime, 'time');
    timediff(chilliController.session.idleTimeout, chilliController.accounting.idleTime, 'idle');
    
    if (chilliController.acctRFC) {
	    datadiff(chilliController.session.maxInputOctets, chilliController.accounting.inputOctets, 'up');
	    datadiff(chilliController.session.maxOutputOctets, chilliController.accounting.outputOctets, 'down');
    } else {
	    datadiff(chilliController.session.maxInputOctets, chilliController.accounting.inputOctets, 'down');
	    datadiff(chilliController.session.maxOutputOctets, chilliController.accounting.outputOctets, 'up');
    }

    chilliClock.resync (chilliController.accounting.sessionTime);
}

function showWaitPage(delay) {
    clearTimeout(delayTimer);
    if (typeof(delay) == 'number' && (delay > 10)) {
        delayTimer= setTimeout('showWaitPage(0)' , delay);
        return;
    }

    hideElem("logonPage");
    hideElem("statusPage");
    showElem("waitPage");
    hideElem("errorPage");
}

function showErrorPage( str )  {
    setTimeout('chilliController.refresh()', 15000);

    hideElem("logonPage");
    hideElem("statusPage");
    hideElem("waitPage");
    showElem("errorPage");
    setElementValue("errorMessage", str);
}

function changeClass(el, c) {
    var e = getElem(el);
    if (e != null) e.className = c;
}

function tab( t ) {
    if (t!=null) currentTab = t;
    if (currentTab == 'Account') {
      changeClass('tabAccount', 'tableTabItem-selected');
      changeClass('tabCode', 'tableTabItem');
      changeClass('tabOpenID', 'tableTabItem');
      getElem('usernameLabel').innerHTML = 'Username';
      getElem('passwordLabel').innerHTML = 'Password';
      showElem('passwordField');
      getElem('username').size = 10;
    } else if (currentTab == 'Code') {
      changeClass('tabCode', 'tableTabItem-selected');
      changeClass('tabAccount', 'tableTabItem');
      changeClass('tabOpenID', 'tableTabItem');
      getElem('usernameLabel').innerHTML = 'Code';
      getElem('passwordLabel').innerHTML = '-';
      showElem('passwordField');
      getElem('username').size = 10;
    } else if (currentTab == 'OpenID') {
      changeClass('tabOpenID', 'tableTabItem-selected');
      changeClass('tabCode', 'tableTabItem');
      changeClass('tabAccount', 'tableTabItem');
      getElem('usernameLabel').innerHTML = 'OpenID URL';
      hideElem('passwordField');
      getElem('username').size = 25;
    }    
}

function statusTab( t ) {
}
