<?php
ini_set("display_errors", "off");
include_once("../Nigeria/scripts/config.php");
$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=65");
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
<title>ZODML | Discover Nigeria | Facts about Nigeria | Nigerian Photographs</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>

<!--Photo Gallery-->
<link href="../css_pirobox/style_1/style.css" rel="stylesheet" type="text/css" />
<link rel="stylesheet" type="text/css" href="../css/css.css"/>
<link rel="stylesheet" href="../css/example.css" TYPE="text/css" MEDIA="screen">
<link href="../images/favicon.ico" rel="shortcut icon" />
<link rel="stylesheet" type="text/css" href="../css/jkmegamenu.css" />
<script type="text/javascript" src="../js2/megamenu.js"></script>
<script type="text/javascript" src="../js2/jkmegamenu.js"></script>
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="../js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript" src="../js/contact.js"></script>
<script type="text/javascript" src="../js/tabber.js"></script>

<!--Pirobox-->
<!--<script type="text/javascript" src="../js/jquery.min.js"></script>-->
<script type="text/javascript" src="../js/jquery-ui-1.8.2.custom.min.js"></script>
<script type="text/javascript" src="../js/pirobox_extended.js"></script>
<script type="text/javascript">
$(document).ready(function() {
	$().piroBox_ext({
	piro_speed : 700,
		bg_alpha : 0.5,
		piro_scroll : true // pirobox always positioned at the center of the page
	});
});
<!--Pirobox-->

</script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<script type="text/javascript">
jkmegamenu.definemenu("megaanchor", "megamenu1", "mouseover")
</script>


<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>

<SCRIPT TYPE="text/javascript">
<!--
//Disable right click script
//visit http://www.rainbow.arch.scriptmania.com/scripts/
var message="Sorry, right-click has been disabled";
///////////////////////////////////
function clickIE() {if (document.all) {(message);return false;}}
function clickNS(e) {if
(document.layers||(document.getElementById&&!document.all)) {
if (e.which==2||e.which==3) {(message);return false;}}}
if (document.layers)
{document.captureEvents(Event.MOUSEDOWN);document.onmousedown=clickNS;}
else{document.onmouseup=clickNS;document.oncontextmenu=clickIE;}
document.oncontextmenu=new Function("return false")
// -->
</SCRIPT> 

<script type="text/javascript">

/* Optional: Temporarily hide the "tabber" class so it does not "flash"
   on the page as plain HTML. After tabber runs, the class is changed
   to "tabberlive" and it will appear. */

document.write('<style type="text/css">.tabber{display:none;}<\/style>');
</script>

<!--GOOGLE PAGE-TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33455239-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->

</head>
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
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-521f68de301bc049"></script>
<!-- AddThis Button END -->

<body>


<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <a href="http://zodml.org"><div id="logo-link"></div></a>
                
                <div id="subheader">
                <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
                <br />
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">

                
                <!--CONTENT LAYER 2-->
                <div id="discover_nig_content_layer2_sample">
                <div id="browse_by_sample">
                <?php //include("browse2.php"); ?>
                	<!--SAMPLE DIV-->
                	<div id="s_sample">
                    	<div style="width:325px; height:40px; float:left; margin-right:10px; font-size:15px;"><a href="http://zodml.org">Home</a> > <a href="http://zodml.org/Nigeria">Nigeria </a> > Photography</div><div style="width:400px; height:40px; float:left; margin-right:0px;"><table><tr><td valign="middle"><form action="search.php" method="GET"><input type="text" name="search_term" id="search_article_input" value="Search for articles" onfocus="if(this.value=='Search for articles'){this.value=''};" onblur="if(this.value==''){this.value=='Search for articles'};" /> <input name="search_button" type="submit" value="Search" id="search_button2"></form></td></tr></table></div> 
                        		<div style="width:260px; height:40px; float:left; margin:10px 0px 20px 0px;">
                                	<span id="megaanchor" style="cursor:pointer;"><img src="../images/more-categories.png" width="162" height="32" /></span>
                                    <div id="megamenu1" class="megamenu">
                                        <div class="column">
                                            <ul>
                                            <li><a href="Geography/">Geography</a></li>
                                            <li><a href="nigeria_people_category_articles.php">People</a></li>
                                            <li><a href="nigeria_the_diaspora_articles.php">The Diaspora</a></li>
                                            <li><a href="add-article.php">Submit an Article</a></li>
                                            </ul>
                                        </div>
                                      </div>
                        		</div>
       			  </div>
                            <!--END OF SAMPLE DIV-->
                		
                </div>
                </div>
                <!--END OF CONTENT LAYER 2-->

               
          			
                <!--CONTENT LAYER 3-->
   				
                <?php echo $content2; ?>
                
                <!--END OF CONTENT LAYER 3-->
                
                

<!--END OF CONTENT-->
</div>
<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->
</div>
<!--END OF THE BODY HOLDER-->
<form id="contactForm" action="../processForm.php" method="post">

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
  <li>
    <center>
<?php
          require_once('../recaptchalib.php');
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
    var d=document, g=d.createElement("script"), s=d.getElementsByTagName("script")[0]; 

g.type="text/javascript";
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