<?php //include("server2.php"); ?>
<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=81");
								while($row2 = mysql_fetch_array($sql2)){
								$id2 = $row2["id"];
								$content2 = $row2["contents"];
								$title2 = $row2["title"];
								$tags = $row2["metatags"];
								$description = $row2["metadescription"];
								$metatitle = $row2["metatitle"];
								}
					 			?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="<?php echo $tags; ?>" />
<meta name="title" content="<?php echo $metatitle; ?>" />
<meta name="description" content="<?php echo $description; ?>" />
<meta name="googlebot" content="index, follow" />
<meta name="robots" content="index, follow" />
<meta name="Revisit-After" content="7 days" />
<meta name="city" content="Lagos" />
<meta name="country" content="Nigeria(NGA)" />
<meta name="state" content="LA" />
<meta name="zip code" content="101233" />
<meta name="subject" content="Online Library in Nigeria, Learning Resources" />
<meta name="author" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta property="fb:admins" content="100003994871719" />
<title>ZODML | Joining The Library - Online Form</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="js/search.js"></script>
<!--<script type="text/javascript" src="jquery_form.js"></script>-->
<script type="text/javascript" src="join.js"></script>
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.js"></script>-->
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<!--<script src="https://www.google.com/jsapi" type="text/javascript"></script>
<script type="text/javascript">
	google.load('jquery', '1.4.1');
</script>-->


<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>


<!--GOOGLE PAGE-TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33455239-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://' : 'http://') + 'stats.g.doubleclick.net/dc.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->

<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_buffer"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-

521f68de301bc049"></script>
<!-- AddThis Button END -->


<style type="text/css">

#mask {
  position:absolute;
  left:0px;
  top:0px;
  z-index:9000;
  background-color:#000;
  display:none;
}  
#boxes .window {
  position:absolute;
  left:0;
  top:0;
  width:440px;
  height:200px;
  display:none;
  z-index:9999;
  padding:20px;

}
#boxes #dialog {
  width:500px; 
  height:270px;
  padding:0px;
  background:url(images/newimages/pop2.png) repeat-x;
  border-right:solid 2px #EC9F00;
  border-left:solid 2px #EC9F00;
  border-bottom:solid 2px #EC9F00;
}
#modalhead{height:30px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; background-color:#99FF66; background:url(images/newimages/pop.png) repeat-x;}
#modalhead a{color:#fff; text-decoration:none;}
#modalhead a:hover{color:none; text-decoration:none;}

select{
-webkit-appearance: none;
border: 0;
width:305px;
font-size:13px;
border:solid 1px #CCC;
padding:8px;
}
</style>


</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <div id="subheader">
               <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">
                
          
                <!--CONTENT LAYER 3-->
                <div id="join_page_hold">
                <div id="join_page">
                <!--left column-->
                	<div id="join_page_right">
                	<div style="color: #363636; font-size:20px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; letter-spacing:3px; padding:10px; margin-bottom:10px;">Joining The Library</div>
                    <div style="padding:10px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:13px; height:1000px;">
                    	<span>Please fill the form below</span><br/>
                        <form id="formail" method="post" action="">
                        <table cellspacing="20px">
                       
                         <tr>
                             <td colspan="2"><font color="#EC9F00">Library Rules</font></td>
                         <?php   // <td rowspan="3"><div id="response"></div></td> ?>
                             </tr>
                             <tr>
                             <td colspan="2"><?php echo $content2; ?></td>
                             </tr>
                             <tr>
                             <td colspan="2"><input name="accept" id="accept" type="checkbox" value="Accept Library Rules" />&nbsp;&nbsp;I accept the Library rules.</td>
                             </tr>
                        		<tr>
                            <td width="142">
                             <label>First Name</label></td><td width="547"><input type="text" id="name" name="name" class="comment_form_input" placeholder="First Name"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Last Name</label></td><td width="547"><input type="text" id="lname" name="lname" class="comment_form_input" placeholder="Last Name"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Date of Birth</label></td><td width="547"><input type="date" id="dob" name="dob" class="comment_form_input" placeholder="00-00-0000"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Home Address </label></td><td width="547"><input type="text" id="address1" name="address1" class="comment_form_input" placeholder="Home Address"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Occupation</label></td><td width="547"><input type="text" id="occupation" name="occupation" class="comment_form_input" placeholder="Occupation"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Office Address </label></td><td width="547"><input type="text" id="address2" name="address2" class="comment_form_input" placeholder="Office Address"/>
                             </td>
                             </tr>
                        	<tr>
                            <td width="142">
                             <label>Email</label></td><td><input type="email" id="mail" name="mail" class="comment_form_input" placeholder="Valid Email Address"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Mobile Phone Number</label></td><td><input type="text" id="mob" name="mob" class="comment_form_input" placeholder="Phone Number"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>I am joining as</label></td><td><select id="apply" name="apply" class=""><option selected="selected" disabled="disabled">Select</option><option>a standard member</option><option>a friend of the Library</option></select>
                             </td>
                             </tr>
                             <tr>
                             <td colspan="2">
                             <tr>
                            <td width="142">
                             <label>How did you find us?</label></td><td><select id="hear" name="hear" class=""><option selected="selected" disabled="disabled">Select</option><option >Website/Blog</option><option>Email</option><option>Search Engine(Google/Bing/Yahoo)</option><option>Online Advert</option><option>Friend/family</option><option>Social Media (Facebook/Twitter/Google+ etc.)</option><option>Offline Sources (Flyer/Radio/TV)</option></select>
                             </td>
                             </tr>
                             
                            
                             <span style="font-size:11px;"><a href="Friends_of_the_library.php" target="_blank">To join as a Friend of the Library, patrons must make a donation of at least N5,000.</a></span>
                             </td>
                             <td></td>
                             </tr>
                             <tr>
                             <td colspan="2"><font color="#EC9F00">If you are under 18 years of age</font></td>
                             <td></td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Name of Parent/Guardian</label></td><td width="547"><input type="text" id="nameofp" name="nameofp" class="comment_form_input" placeholder="Name of Parent/Guardian"/>
                             </td>
                             </tr>
                              <tr>
                            <td width="142">
                             <label>Address of Parent/Guardian</label></td><td width="547"><input type="text" id="addressofp" name="addressofp" class="comment_form_input" placeholder="Address of Parent/Guardian"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Email address of Parent/Guardian</label></td><td><input type="email" id="mailofp" name="mailofp" class="comment_form_input" placeholder="Email address of Parent/Guardian"/>
                             </td>
                             </tr>
                             <tr>
                            <td width="142">
                             <label>Mobile Phone Number of Parent/Guardian</label></td><td><input type="text" id="mobofp" name="mobofp" class="comment_form_input" placeholder="Mobile Phone Number of Parent/Guardian"/>
                             </td>
                             </tr>
                          
                             <td align="left" valign="top"><input type="submit" value="Sign-up" id="join_button" /></td>
                             <td><div id="response"> </td>
                               </tr>
                         </table>
                       		</form>
                         
                            <!--<div id="response"></div>-->
                    	
                    </div>
                
                	</div>
                <!--end of left column-->
                <!--right column-->
                
                <div id="newsletter_page_left">
                <!--zodml services-->
                	<div style="padding:5px; font-size:14px; border-bottom:dotted 1px #ccc; margin-bottom:5px; width:150px; color:#EC9F00;">ZODML Services</div>
                    <div>
                    	<table cellspacing="10">
                            <!--<tr><td><a href="#">Main Library</a></td></tr>-->
                          <!--  <tr><td><a href="#">Joining the library</a></td></tr>-->
                            <tr><td><a href="ask_a_librarian.php">Ask a Librarian</a></td></tr>
                            <tr><td><a href="borrowing.php">Borrowing</a></td></tr>
                        </table>
                    </div>
              <!--end of zodml services-->
               <!--New and noteworthy-->
                    <div style="padding:5px; font-size:14px; border-bottom:dotted 1px #ccc; margin-bottom:5px; width:150px; color:#EC9F00;">More from our Catalogue</div>
                    <div>
                    	<table cellspacing="10">
                            <tr><td><a href="recent_events.php">Recent Events</a></td></tr>
                            <tr><td><a href="newsletter.php">New Titles</a></td></tr>
                            <tr><td><a href="most-borrowed.php">Most Borrowed</a></td></tr>
                        </table>
                    </div>
                <!--end of new and noteworthy-->
                 <!--Collections-->
                 	<div style="padding:5px; font-size:14px; border-bottom:dotted 1px #ccc; margin-bottom:5px; width:150px; color:#EC9F00;">Collection</div>
                    <div>
                    	<table cellspacing="10">
                            <tr><td><a href="catalogue.php">Catalogue</a></td></tr>
                            <tr><td><a href="e-library.php">e-Library</a></td></tr>
                        </table>
                    </div>
                 <!--End of collections-->
                </div>
                <!--end of right column-->
                </div>
                </div>
                <!--END OF CONTENT LAYER 3-->
                
               
               

</div>
<!--END OF CONTENT-->
<br />
<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->


</div>
<!--END OF THE BODY HOLDER-->
<!--comment form-->
<form id="contactForm" action="processForm.php" method="post">

  <h2>Send us an email...</h2>

  <ul>

    <li>
      <label for="senderName" class="label">Your Name</label>
      <input type="text" name="senderName" id="senderName" placeholder="Please type your name" required maxlength="40" class="input" />
    </li>

    <li>
      <label for="senderEmail" class="label">Your Email Address</label>
      <input type="email" name="senderEmail" id="senderEmail" placeholder="Please type your email address" required maxlength="50" class="input" />
    </li>

    <li>
      <label for="message" style="padding-top: .5em;" class="label">Your Message</label>
      <textarea name="message" id="message" placeholder="Please type your message" required cols="80" rows="10" maxlength="10000" class="textarea"></textarea>
    </li>
  <li> <center>
   <?php
          require_once('recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?></center>
        </li>
  </ul>

  <div id="formButtons">
    <input type="submit" id="sendMessage" name="sendMessage" value="Send Email" />
    <input type="button" id="cancel" name="cancel" value="Cancel" />
  </div>

</form>

<div id="sendingMessage" class="statusMessage"><p>Sending your message. Please wait...</p></div>
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We'll get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>
<!-- Piwik -->
<script type="text/javascript">
  var _paq = _paq || [];
  _paq.push(["setDocumentTitle", document.domain + "/" + document.title]);
  _paq.push(["trackPageView"]);
  _paq.push(["enableLinkTracking"]);

  (function() {
    var u=(("https:" == document.location.protocol) ? "https" : "http") + "://zodml.org/piwik/";
    _paq.push(["setTrackerUrl", u+"piwik.php"]);
    _paq.push(["setSiteId", "1"]);
    var d=document, g=d.createElement("script"), s=d.getElementsByTagName("script")[0]; g.type="text/javascript";
    g.defer=true; g.async=true; g.src=u+"piwik.js"; s.parentNode.insertBefore(g,s);
  })();
</script>
<!-- End Piwik Code -->

<!-- Piwik Image Tracker -->
<noscript>
<img src="http://zodml.org/piwik/piwik.php?idsite=1&amp;rec=1" style="border:0" alt="" />
</noscript>
<!-- End Piwik -->
</body>
</html>