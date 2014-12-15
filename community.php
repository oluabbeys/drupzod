<?php 
include("server.php");
ini_set('display_errors', 'off');
session_start();
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library services|Digital Learning Community</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link type="text/css" rel="stylesheet" href="css/jquery.autocomplete.css" media="screen" />
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript" src="js/javascript/jquery.js"></script>
<script type="text/javascript" src="js/javascript/jquery.autocomplete.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<script type="text/javascript">
	javascript:window.history.forward(1);
    window.history.forward(1);
    function noBack() { window.history.forward(1); }
	//window.history.forward()
</script>
<!--autocomplete-->


<!--end of autocomplete-->
<!-- Piwik -->
<script type="text/javascript">
var pkBaseURL = (("https:" == document.location.protocol) ? "https://zodml.org/piwik/" : "http://zodml.org/piwik/");
document.write(unescape("%3Cscript src='" + pkBaseURL + "piwik.js' type='text/javascript'%3E%3C/script%3E"));
</script><script type="text/javascript">
try {
var piwikTracker = Piwik.getTracker(pkBaseURL + "piwik.php", 1);
piwikTracker.trackPageView();
piwikTracker.enableLinkTracking();
} catch( err ) {}
</script><noscript><p><img src="http://zodml.org/piwik/piwik.php?idsite=1" style="border:0" alt="" /></p></noscript>
<!-- End Piwik Tracking Code -->
<!--<script src="https://www.google.com/jsapi" type="text/javascript"></script>
<script type="text/javascript">
	google.load('jquery', '1.4.1');
</script>-->
<!--Sign up script-->
<script type="text/javascript">
$(document).ready(function(){
	$('#newsletter-signup').submit(function(){
		
		//check the form is not currently submitting
		if($(this).data('formstatus') !== 'submitting'){
		
			//setup variables
			var form = $(this),
				formData = form.serialize(),
				formUrl = form.attr('action'),
				formMethod = form.attr('method'), 
				responseMsg = $('#signup-response');
			
			//add status data to form
			form.data('formstatus','submitting');
			
			//show response message - waiting
			responseMsg.hide()
					   .addClass('response-waiting')
					   .text('Please Wait...')
					   .fadeIn(30);
					   
			document.getElementById('newsletter-signup').reset();
			//send data to server for validation
			$.ajax({
				url: formUrl,
				type: formMethod,
				data: formData,
				success:function(data){
					
					//setup variables
					var responseData = jQuery.parseJSON(data), 
						klass = '';
					
					//response conditional
					switch(responseData.status){
						case 'error':
							klass = 'response-error';
						break;
						case 'success':
							klass = 'response-success';
						break;	
					}
					
					//show reponse message
					responseMsg.fadeOut(500,function(){
						$(this).removeClass('response-waiting')
							   .addClass(klass)
							   .text(responseData.message)
							   .fadeIn(300,function(){
								   //set timeout to hide response message
								   setTimeout(function(){
									   responseMsg.fadeOut(1000,function(){
									       $(this).removeClass(klass);
										   form.data('formstatus','idle');
									   });
								   },5000)
								});
					});
				}
			});
		}
		
		//prevent form from submitting
		return false;
		document.getElementById('newsletter-signup').reset();
	});
});
</script>
<!--End of sign up script-->

<!-- Start of Woopra Code -->
<script>
(function(){
    var t,i,e,n=window,o=document,a=arguments,s="script",r=["config","track","identify","visit","push","call"],c=function(){var t,i=this;for(i._e=[],t=0;r.length>t;t++)(function(t){i[t]=function(){return i._e.push([t].concat(Array.prototype.slice.call(arguments,0))),i}})(r[t])};for(n._w=n._w||{},t=0;a.length>t;t++)n._w[a[t]]=n[a[t]]=n[a[t]]||new c;i=o.createElement(s),i.async=1,i.src="//static.woopra.com/js/w.js",e=o.getElementsByTagName(s)[0],e.parentNode.insertBefore(i,e)
})("woopra");

woopra.config({
    domain: 'zodml.org'
});
woopra.track();
</script>
<!-- End of Woopra Code -->

</head>

<body onload="noBack();" onpageshow="if (event.persisted) noBack();" onunload="">
<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
                	<div id="searchhold">
                <form name="form1" action="findbook2.php">
                <table>
               <tr>
               <td>
                <select name="catalogue" id="select_box"><option selected="selected">Keyword</option><option>Title</option><option>Author</option><option>Subject</option></select>
               <!-- <input type="text" name="catalogue" />-->
               </td>
               <td>
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search" />
          		</div>
                </td>
                <td>
                <div id="submit_button"><button id="search_button">Search</button></div>
                </td>
                </tr>
                </table>
                 <label>zodml.org</label><input name="search" type="radio" value="1" onclick="chooseOne();" />&nbsp;&nbsp;<label>Catalogue</label><input name="search" type="radio" value="other" onclick="chooseOne();"/>
                
                 </form>
                	</div>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
           	<?php include("menu.php");?>
  </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder2">

                <!--CONTENNT LAYER 1-->
    <div id="dlc_one">Digital Learning Community</div>
    <!--END OF CONTENT LAYER 1-->
                
                <!--CONTENT LAYER 2-->
                
                <!--<span>Sign in</span>-->
                <div style="height:100px;">
                <!--Sign in section-->
                <div style="padding:10px; float:right;">
                        	<form action="login_process.php" method="post">
                        	<table cellpadding="10">
                            <tr><td>Email&nbsp;&nbsp;<input type="text" name="email_signin" id="comment_form_input3" placeholder="Email" /></td><td>Password&nbsp;&nbsp;<input type="password" name="password_signin" id="comment_form_input3" placeholder="Password" />&nbsp;&nbsp;&nbsp;&nbsp;<input type="submit" value="Sign in" id="search_button2" /></td></tr>
                            </table>
                            </form>
                            <div style="height:20px; text-align:center;"><span style="font-size:10px"><a href="forgot_password.php">Forgot Password?</a></span></div>
                        </div>
                <!--End of Sign in section-->
                        </div>
                        
                        <div id="dlc_two">
                	<div id="dlc_two_left"></div>
                    
                    <!--sign up section-->
                    <div id="dlc_two_right">
                    <div style="padding:0px; color:#EC9F00; font-size:12px; margin:0px 0px 10px 0px; text-align:left;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Don't have an account? Fill the form below to join the DLC</div>
                    <div id="signup-response"></div>
                    	<form id="newsletter-signup" action="?action=signup" method="post">
                      <table cellspacing="20">
                      <tr>
                      <td><label>Email</label></td>
                      <td><input type="text" name="email_signup" id="comment_form_input3" placeholder="Email"/></td>
                      </tr>
                      <tr>
                      <td><label>Password</label></td>
                      <td><input type="password" name="password_signup" id="comment_form_input3" placeholder="Password"/></td>
                      </tr>
                      <tr>
                      <td><label>Confirm Password</label></td>
                      <td><input type="password" name="confpwd_signup" id="comment_form_input3" placeholder="Confirm Password"/></td>
                      </tr>
                      <tr>
                      <td><label>First name</label></td>
                      <td><input type="text" name="fname_signup" id="comment_form_input3" placeholder="First Name"/></td>
                      </tr>
                      <tr>
                      <td><label>Last name</label></td>
                      <td><input type="text" name="lname_signup" id="comment_form_input3" placeholder="Last Name"/></td>
                      </tr>
                      <tr>
                      <td><label>Gender</label></td>
                      <td><select id="select_box3" name="gender_signup"><option selected="selected">Select</option><option>Male</option><option>Female</option></select></td>
                      </tr>
                      <tr>
                      <td><label>Name of school</label></td>
                      <td><input type="text" name="nameofschool_signup" id="comment_form_input5" class="ac_input" placeholder="Name of School"/></td>
                      </tr>
                      <tr>
                      <td><label>Mobile Number</label></td>
                      <td><input type="text" name="mobnum_signup" id="comment_form_input3" placeholder="Mobile Number"/></td>
                      </tr>
                      <tr>
                      <td><label>State</label></td>
                      <td><input type="text" name="state_signup" id="comment_form_input6" placeholder="State"/></td>
                      </tr>
                      <tr>
                      <td colspan="2" align="center"><input type="submit" name="submit_signup" id="search_button3" value="Sign up" /></td>
                      <td></td>
                      </tr>
                      </table>  
                      </form>
                      <script type="text/javascript">
							  function findValue(li) {
								if( li == null ) return alert("No match!");
							
								// if coming from an AJAX call, let's use the CityId as the value
								if( !!li.extra ) var sValue = li.extra[0];
							
								// otherwise, let's just display the value in the text box
								else var sValue = li.selectValue;
							
								//alert("The value you selected was: " + sValue);
							  }
							
							  function selectItem(li) {
									findValue(li);
							  }
							
							  function formatItem(row) {
									return row[0]; //+ " (" + row[1] + ")";
							  }
							
							  function lookupAjax(){
								var oSuggest = $("#comment_form_input5")[0].autocompleter;
								oSuggest.findValue();
								return false;
							  }
							  //function lookupLocal(){
									//var oSuggest = $("#CityLocal")[0].autocompleter;
									//oSuggest.findValue();
									//return false;
							  //}
								$("#comment_form_input5").autocomplete(
								  "schools.php",  
								  {
										delay:10,
										minChars:2,
										matchSubset:1,
										matchContains:1,
										cacheLength:10,
										onItemSelect:selectItem,
										onFindValue:findValue,
										formatItem:formatItem,
										autoFill:true
									}
								);
  
</script>
	<script type="text/javascript">
							  function findValue(li) {
								if( li == null ) return alert("No match!");
							
								// if coming from an AJAX call, let's use the CityId as the value
								if( !!li.extra ) var sValue = li.extra[0];
							
								// otherwise, let's just display the value in the text box
								else var sValue = li.selectValue;
							
								//alert("The value you selected was: " + sValue);
							  }
							
							  function selectItem(li) {
									findValue(li);
							  }
							
							  function formatItem(row) {
									return row[0]; //+ " (" + row[1] + ")";
							  }
							
							  function lookupAjax(){
								var oSuggest = $("#comment_form_input6")[0].autocompleter;
								oSuggest.findValue();
								return false;
							  }
							  //function lookupLocal(){
									//var oSuggest = $("#CityLocal")[0].autocompleter;
									//oSuggest.findValue();
									//return false;
							  //}
								$("#comment_form_input6").autocomplete(
								  "states.php",  
								  {
										delay:10,
										minChars:2,
										matchSubset:1,
										matchContains:1,
										cacheLength:10,
										onItemSelect:selectItem,
										onFindValue:findValue,
										formatItem:formatItem,
										autoFill:true
									}
								);
  
</script>
                      <p>&nbsp;</p>
                      <div id="signup-response"></div>
                    </div>
                	<!--end of sign up section-->
               
                    
                </div>
                <!--END OF CONTENT LAYER 2-->
          			
                <!--CONTENT LAYER 3-->
                	
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<div id="footer">

<table align="center">
<tr>
<td align="center">Privacy Policy | Disclaimer | Careers | Contact Us</td>
</tr>
<tr>
<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>
</tr>
</table>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
<script type="text/javascript">

					  function findValue(li) {
						if( li == null ) return alert("No match!");
					
						// if coming from an AJAX call, let's use the CityId as the value
						if( !!li.extra ) var sValue = li.extra[0];
					
						// otherwise, let's just display the value in the text box
						else var sValue = li.selectValue;
					
						//alert("The value you selected was: " + sValue);
					  }
					
					  function selectItem(li) {
							findValue(li);
					  }
					
					  function formatItem(row) {
							return row[0]; //+ " (" + row[1] + ")";
					  }
					
					  function lookupAjax(){
						var oSuggest = $("#comment_form_input5")[0].autocompleter;
						oSuggest.findValue();
						return false;
					  }
					  //function lookupLocal(){
							//var oSuggest = $("#CityLocal")[0].autocompleter;
							//oSuggest.findValue();
							//return false;
					  //}
						$("#comment_form_input5").autocomplete(
						  "schools.php",  
						  {
								delay:10,
								minChars:2,
								matchSubset:1,
								matchContains:1,
								cacheLength:10,
								onItemSelect:selectItem,
								onFindValue:findValue,
								formatItem:formatItem,
								autoFill:true
							}
						);
					  
			</script>
</body>
</html>