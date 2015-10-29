<?php /* -*- mode: php; -*- */
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

require_once drupal_get_path('module', 'hotspot').'/hotspot.inc';

function hotspot_check_smartclient() {
  if ($_GET['res'] == 'smartclient' || $_GET['res'] == 'wispr') {
    $url = false;
    $username = hotspot_get_username($_GET);
    $password = hotspot_get_password($_GET);
    if (($item = module_invoke_all('hotspot_smartclient', $username, $password)) && 
	is_array($item) && isset($item['url'])) {
      $url = $item['url'];
    } else {
      if ($username && $password) {
	$url = hotspot_login_url($username, $password);
      }
      else if ($_GET['WISPrVersion'] == '2.0') {
	$login = 'http://' . 
	  hotspot_get_param('uamip') . ':' . 
	  hotspot_get_param('uamport') . '/logon';
	
	$url = $login.'?username='.$username.'&WISPrEAPMsg='.$_GET['WISPrEAPMsg'].'&WISPrVersion=2.0';
      }
    }
    if ($url) {
      header('Location: '. $url, TRUE, 302);
      print hotspot_wispr_xml($url);
      exit();
    }
  }
}

function hotspot_render() {
  //
  // Allow for the complete interception of the hotspot_render function
  //

  if ($rendered = module_invoke_all('hotspot_intercept') && $rendered[0]) {
    return $rendered[0];
  }

  if (isset($_COOKIE['__HOTSPOT__'])) {
    $array = unserialize(gzuncompress($_COOKIE['__HOTSPOT__']));
  }

  if (isset($_GET['uamip']) && isset($_GET['uamport'])) {

    $string = gzcompress(serialize($_GET), 9);
    setcookie('__HOTSPOT__', $string);

    $_SESSION['hotspot'] = 'true';
    $_SESSION['controller'] = 'chilli';

    $_SESSION['uamqs'] = $_SERVER['QUERY_STRING'];
    $_SESSION['logouturl'] = "http://".$_GET['uamip'].":".$_GET['uamport']."/logout";
    $_SESSION['loginurl'] = '';
    hotspot_set_session('ssl');
    hotspot_set_session('uamip');
    hotspot_set_session('uamport');
    hotspot_set_session('challenge');
    hotspot_set_session('userurl');
    hotspot_set_session('called');
    hotspot_set_session('mac');
    hotspot_set_session('res');

    hotspot_check_smartclient();

    //
    // Hook to prepare login page, pre- md5 checksum check on URL
    // (so that you can load a network specific uamsecret for md check)
    //
    module_invoke_all('hotspot_loginpage');

    if (hotspot_setting('check_url_md', 'true') == 'true') {
      $md = $_GET['md'];

      $uamsecret = hotspot_get_uamsecret();

      $check = (empty($_SERVER['HTTPS']) ? 'http' : 'https').'://'.
	$_SERVER['SERVER_NAME'].preg_replace('/&md=[^&=]+$/', '', $_SERVER['REQUEST_URI']);

      $match = strtoupper(md5($check.$uamsecret));

      if ($md != $match) {

	/**
	 *  Special exception for smart clients that are logging in.
	 */

	drupal_goto('badquery');
	return;
      }
    }

    /**
     *  Save important session variables to Cookie as well
     */
    hotspot_save_cookie();
  }

  /**
   *  If not using the JavaScript controller, and with auto-provisioning on,
   *  then kick-off authentication. 
   */

  if ($_GET['res'] == 'notyet') {
    if (hotspot_setting('method', 'redir') != 'js') {
      if (hotspot_setting('provisioning', 'none') == 'anonymoususer') {
	$username = hotspot_setting('auto_username', '');
	$password = hotspot_setting('auto_password', '');
      }
    }
  }
  
  if ($_GET['res'] == 'splash') {
  }
  
  if ($item = module_invoke_all('hotspot_dologin')) {
    if (is_array($item)) {
      $username = $item['username'];
      $password = $item['password'];
    }
  }
  
  /**
   *  If this is a login attempt, we'll process that here so that
   *  we can issue a redirect back to CoovaChilli. (Not used by
   *  JavaScript controller)
   */
  
  if (!$username) {
    $username = hotspot_get_username($_GET);
  }
  
  if ($username) {
    
    if (!$password) {
      $password = hotspot_get_password($_GET);
    }
    
    $url = hotspot_login_url($username, $password);
    
    header('Location: '. $url, TRUE, 302);
    
    print hotspot_wispr_xml($url);
    
    exit();
  }
  
  if ($_GET['res'] == 'notyet') {
    if (hotspot_setting('initial_redirect', '') != '') {
      drupal_goto(hotspot_setting('initial_redirect', ''));
    }
  }
  
  if ($_GET['res'] == 'success') {
    $success_redirect = hotspot_setting('success_redirect', '');
    if ($success_redirect != '') {
      if ($success_redirect == '<original>') {
	drupal_goto(hotspot_get_param('userurl'));
	return;
      } else if ($success_redirect != '<popup>') {
	drupal_goto(hotspot_setting('success_redirect', ''));
	return;
      }
    }
  }

  $clean_url = hotspot_setting('clean_url', 'true');

  //if ($clean_url == 'true' && $_GET['res'] != '') {
  //drupal_goto('hotspot');
  //}

  if (is_numeric($_SESSION['renderNode'])) {
    $node = node_load($_SESSION['renderNode']);
    print theme('hotspot_page', &$node);
    return;
  }
  
  print theme('page', hotspot_render_loginform());
}

function hotspot_render_loginform() {

  if (hotspot_get_param('uamip') == '') {

    $content = hotspot_content('nochilli');

  } else if (hotspot_setting('enabled', 'true') != 'true') {

    $content = hotspot_content('disabled');

  } else if (hotspot_setting('method', 'redir') == 'js') {

    $content = hotspot_content('jshtml');

  } else {

    $content = hotspot_content(hotspot_get_param('res'));

  }

  return $content;
}

function hotspot_render_status() {
  echo '<html><title>Hotspot Status</title>';
  echo '<head>';
  echo '<script src="'.url(drupal_get_path('module', 'hotspot').'/ChilliLibrary.js', array('absolute'=>true)).'"></script>';
  echo '<script src="'.url(drupal_get_path('module', 'hotspot').'/chilliController.js', array('absolute'=>true)).'"></script>';
  echo '<style>';
  echo _get_include_contents(drupal_get_path('module', 'hotspot').'/chillicss.php');
  echo '</style>';
  echo '</head>';
  echo '<body id="statusPopup">';
  echo theme_hotspot_status();
  echo '<script>';
  echo _get_include_contents(drupal_get_path('module', 'hotspot').'/chillijs.php');
  echo '</script>';
  echo '</body>';
  echo '</html>';
  exit;
}

function theme_hotspot_status() {
  return '<div id="chilliPage">
  <div id="logonPage" style="display:none;">
    <form onSubmit="return false;" name="logon">
       Your session has expired. 
    </form>
  </div>
  '. theme_hotspot_jsstatus() . '
  <div id="errorPage" style="display:none;">
    <span id="errorMessage">Error</span>
  </div>
</div>';
}

function theme_hotspot_page($node) {
  return node_view(&$node, false, true);
}

function theme_hotspot_disabled() {
  return '<p id="hotDisabled">HotSpot services are currently not available.</p>';
}

function theme_hotspot_notyet() {
  $userAgent = $_SERVER['HTTP_USER_AGENT'];

  if (preg_match("/profile\/midp/i", $userAgent) || preg_match("/configuration\/cldc/i", $userAgent)) {

    return theme_hotspot_loginform();

  } else {
    $html = theme('hotspot_loginform');

    if ($a = module_invoke_all('hotspot_links'))
      foreach ($a as $b) $html .= $b;

    return $html;
  }
}

function theme_hotspot_failed() {
  $reply = $_GET['reply'];
  if ($reply == '') $reply = 'Authentication failed';
  return '<p id="hotReply">'.$reply.'</p>'.theme('hotspot_loginform');
}

function theme_hotspot_already() {
  return theme('hotspot_success');
}

function theme_hotspot_success() {
  $url = hotspot_get_param('userurl');
  $content = '<p>You are now on-line!</p>';
  if ($url != '') {
    $content .= '<p>Original URL: <a href="'.$url.'">'.$url.'</a></p>';
  }
  return $content;
}

function theme_hotspot_loginform() 
{
  $html = '<div id="hotLoginForm">';

  if (hotspot_setting('loginform', 'true') == 'true') {
    $html .= '
<form id="hotForm" name="form1" method="get">
  <input type="hidden" name="q" value="hotspot">
  <input type="hidden" name="res" value="notyet">
  <input type="hidden" name="challenge" value="' . hotspot_get_param('challenge') . '">
  <input type="hidden" name="userurl" value="' .hotspot_get_param('userurl') . '">
  <table id="hotLoginFormTable" border="0" cellpadding="5" cellspacing="0">
  <tbody>
  <tr>
    <td class="hotLoginFormLabel hotUsernameLabel">Username:</td>
    <td class="hotLoginFormInput hotUsernameInput"><input id="hotUsername" type="text" name="username" size="20" maxlength="255"></td>
  </tr>
  <tr>
    <td class="hotLoginFormLabel hotPasswordLabel">Password:</td>
    <td class="hotLoginFormInput hotPasswordInput"><input id="hotPassword" type="password" name="password" size="20" maxlength="255"></td>
  </tr>
  <tr>
    <td class="hotLoginFormSubmit" colspan="2"><input id="hotSubmit" type="submit" name="login" value="login"></td>
  </tr>
  </tbody>
</table>
</form>';
  }

  if (hotspot_setting('code_enabled', 'false') == 'true') {
    $html .= '
<form name="form2" method="get">
  <input type="hidden" name="q" value="hotspot">
  <input type="hidden" name="res" value="notyet">
  <input type="hidden" name="challenge" value="' . hotspot_get_param('challenge') . '">
  <input type="hidden" name="userurl" value="' .hotspot_get_param('userurl') . '">
  <input type="hidden" name="realm" value="' .hotspot_setting('code_realm', '') . '">
  <table border="0" cellpadding="5" cellspacing="0" style="width: 217px;">
  <tbody>
  <tr>
    <td nowrap="nowrap" align="right">Access code:</td>
    <td><input type="text" name="UserName" size="8" maxlength="10"></td>
    <td>-</td>
    <td><input type="text" name="Password" size="8" maxlength="10"></td>
  </tr>
  <tr>
    <td align="center" colspan="3" height="23"><input type="submit" name="login" value="login"></td>
  </tr>
  </tbody>
  </table>
</form>';
  }

  $html .= '</div>';

  return $html;
}

function theme_hotspot_nochilli() 
{
  return '<p id="hotNoChilli">You are not at a hotspot location.</p>';
}

function theme_hotspot_jshtml() 
{
  $loginTab = '';
  $codeTab = '';
  $selected = '-selected';
  $u = '';
  $p = '';

  if (hotspot_setting('loginform', 'true') == 'true') {
    $loginTab='<td class="tableTabItem'.$selected.'" id="tabAccount" onClick="javascript:return tab(\'Account\');">User Login</td>';
    $u='Username';
    $p='Password';
    $selected = '';
  }

  if (hotspot_setting('code_enabled', 'false') == 'true') {
    $codeTab='<td class="tableTabItem'.$selected.'" id="tabCode" onClick="javascript:return tab(\'Code\');">Access Code</td>';
    if ($u == '') {
      $u='Code';
    }
  }

  return '<div id="chilliPage">
  <div id="logonPage" style="display:none;">
    <form onSubmit="return false;" name="logon">
      <table id="tableTab" cellpadding="0" cellspacing="0">
	<tr>
	  <td nowrap="nowrap" class="navRow">
	    <table cellpadding="0" cellspacing="0" border="0" width="100%">
	      <tr>
		<td class="tableTabFirst">&nbsp;</td>
		'.$loginTab.$codeTab.'
		<td class="tableTabLast">&nbsp;</td>
	      </tr>
	    </table>
	  </td>
	</tr>
	<tr>
	  <td class="tableTabBottom">
	    <div class="usernameRow">
	      <span id="usernameLabel">'.$u.'</span>
	      <input name="username" type="text" id="username" size="10"/>
	      <span id="passwordField"><span id="passwordLabel">'.$p.'</span>
		<input name="password" type="password" id="password" size="10"/></span>
	    </div>
	    
	    <div class="connectRow">
	      <input id="connectButton" type="submit" value="Connect" onClick="connect();"/><span id="logonMessage">Click \'Connect\' to login</span>
	    </div>
	  </td>
	</tr>
	<tr>
	  <td align="right" style="font-size: 8px;padding: 0px 2px 1px 0px;">Powered by <a href="http://www.coova.org/" target="_blank">coova</a>&nbsp;<a href="http://www.coova.org/" target="_blank"><span id="coova-icon"></span></a>&nbsp;</td>
	</tr>
      </table>
    </form>
  </div>
  '.theme_hotspot_jsstatus().'
  <div id="errorPage" style="display:none;">
    <span id="errorMessage">Error</span>
  </div>
</div>
';
}

function theme_hotspot_jsstatus() {
  return '
<div id="statusPage" style="display:none;">
  <table id="tableTab" cellpadding="0" cellspacing="0">
    <tr>
      <td class="navRow">
	<table id="navTable" cellpadding="0" cellspacing="0" border="0" width="100%">
	  <tr>
	    <td class="tableTabFirst">&nbsp;</td>
	    <td class="tableTabItem-selected" id="tabStatus" nowrap="nowrap" onClick="javascript:return statusTab(\'Status\');">Status</td>
	    <td class="tableTabLast">&nbsp;</td>
	  </tr>
	</table>
      </td>
    </tr>
    <tr>
      <td class="tableTabBottom">
	<table border="0" id="statusTable" style="padding-top:4px;">
	  <tr id="connectRow">
	    <td><span id="statusMessage">Connected</span></td>
	    <td><a href="#" onClick="return disconnect();">logout</a></td>
	  </tr>
	  <tr id="sessionIdRow">
	    <td id="sessionIdLabel" class="chilliLabel">Session ID</td>
	    <td id="sessionId" class="chilliValue">Not available</td>
	  </tr>
	  <tr id="startTimeRow">
	    <td id="startTimeLabel" class="chilliLabel">Start Time</td>
	    <td id="startTime" class="chilliValue">Not available</td>
	  </tr>
	  <tr id="sessionTimeRow">
	    <td id="sessionTimeLabel" class="chilliLabel">Session Time</td>
	    <td id="sessionTime" class="chilliValue">
              <span id="time">Not available</span>
              <span id="timelimit">&nbsp;</span>
              <span id="timeleft">&nbsp;</span>
	    </td>
	  </tr>
	  <tr id="idleTimeRow">
	    <td id="idleTimeLabel" class="chilliLabel">Idle Time</td>
	    <td id="idleTime" class="chilliValue">
              <span id="idle">Not available</span>
              <span id="idlelimit">&nbsp;</span>
              <span id="idleleft">&nbsp;</span>
	    </td>
	  </tr>
	  <tr id="downOctetsRow">
	    <td id="downOctetsLabel" class="chilliLabel">Downloaded</td>
	    <td id="downOctets" class="chilliValue">
	      <span id="down">Not available</span>
	      <span id="downlimit">&nbsp;</span>
	      <span id="downleft">&nbsp;</span>
	    </td>
	  </tr>
	  <tr id="upOctetsRow">
	    <td id="upOctetsLabel" class="chilliLabel">Uploaded</td>
	    <td id="upOctets" class="chilliValue">
	      <span id="up">Not available</span>
	      <span id="uplimit">&nbsp;</span>
	      <span id="upleft">&nbsp;</span>
	    </td>
	  </tr>
	  <tr id="originalURLRow">
	    <td id="originalURLLabel" class="chilliLabel">Original URL</td>
	    <td id="originalURL" class="chilliValue">N/A</td>
	  </tr>
	</table>
    </td></tr>
    <tr>
      <td colspan="3" align="right" style="font-size: 8px;padding: 0px 2px 1px 0px;">Authentication services by <a href="http://www.coova.org/" target="_blank">coova</a>&nbsp;<a href="http://www.coova.org/" target="_blank"><span id="coova-icon"></span></a>&nbsp;</td>
    </tr>
  </table>
</div>

<div id="waitPage" style="display:none;">
  Please wait...
</div>
';
}
