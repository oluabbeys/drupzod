<?php 
ini_set('display_errors', 'off');
include("../scripts/config.php");

function myTruncate($string, $limit, $break=".", $pad=".....") { 
// return with no change if string is shorter than $limit 
if(strlen($string) <= $limit) return $string; 
// is $break present between $limit and the end of the string? 
if(false !== ($breakpoint = strpos($string, $break, $limit))) { if($breakpoint < strlen($string) - 1) { $string = substr($string, 0, $breakpoint) . $pad; } } return $string; }
 

$do = mysql_query("SELECT * FROM articles where category ='Geography' ORDER BY id ASC");
while($row = mysql_fetch_array($do)){ 
	$category = $row["category"];
}
?>
<?php

//ini_set("display_errors", "off");
include_once("../scripts/config.php");
$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=59");
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
<title>ZODML | Discover Nigeria | Facts about Nigeria | Geography</title>
<link href="http://zodml.org/css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="http://zodml.org/css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="http://zodml.org/css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="http://zodml.org/css/pagination.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="http://zodml.org/images/favicon.ico" rel="shortcut icon" />
<link rel="stylesheet" type="text/css" href="http://zodml.org/css/jkmegamenu.css" />
<meta property="fb:admins" content="100003994871719" />
<script type="text/javascript" src="http://zodml.org/js2/megamenu.js"></script>
<script type="text/javascript" src="http://zodml.org/js2/jkmegamenu.js"></script>
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="http://zodml.org/js/pixreg1.js"></script>
<script type='text/javascript' src="http://zodml.org/js/pixreg2.js"></script>
<script type='text/javascript' src='http://zodml.org/js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='http://zodml.org/js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="http://zodml.org/js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="http://zodml.org/js/search.js"></script>
<script type="text/javascript" src="http://zodml.org/js/contact.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
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

<script type="text/javascript">
jkmegamenu.definemenu("megaanchor", "megamenu1", "mouseover")
</script>

<script type="text/javascript" src="../js/loading.js"></script>

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

<!--END OF SCRIPT FOR LOADING CONTENTS FROM THE DATABASE-->
</head>

<body>


<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <a href="http://zodml.org"><div id="logo-link"></div></a>
                
                <div id="subheader">
                <br />
                	<?php include("../search_bar.php"); ?>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<?php include("../menu.php");?>
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
                    	<div style="width:225px; height:40px; float:left; margin-right:10px;"><?php echo 'Category:'.' '.$category; ?></div><div style="width:600px; height:40px; float:left; margin-right:0px;"><table><tr><td valign="middle"><form action="../search.php" method="GET"><input type="text" name="search_term" id="search_article_input" value="Search for articles" onfocus="if(this.value=='Search for articles'){this.value=''};" onblur="if(this.value==''){this.value=='Search for articles'};" /> <input name="search_button" type="submit" value="Search" id="search_button2"></form></td></tr></table></div> 
                        		<div style="width:160px; height:40px; float:left; margin:10px 0px 20px 0px;">
                                	<span id="megaanchor" style="cursor:pointer;"><img src="http://zodml.org/images/more-categories.png" width="162" height="32" /></span>
                                    <div id="megamenu1" class="megamenu">
                                        <div class="column">
                                            <ul>
                                            <li><a href="http://zodml.org/Nigeria/nigeria_people_category_articles.php">People</a></li>
                                            <li><a href="http://zodml.org/Nigeria/nigeria_photos.php">Photography</a></li>
                                            <li><a href="http://zodml.org/Nigeria/nigeria_the_diaspora_articles.php">The Diaspora</a></li>
                                            <li><a href="http://zodml.org/Nigeria/add-article.php">Submit an Article</a></li>
                                            </ul>
                                        </div>
                                      </div>
                        		</div>
       			  </div>
                            <!--END OF SAMPLE DIV-->
                            
                	</div>
                </div>
                
                <!--CONTENNT LAYER CATEGORY-->
                
                <!--END OF CONTENT LAYER CATEGORY-->
          			<!--<div id="discover_nig_content_category_article_topic"></div>-->
                <!--CONTENT LAYER 3-->
                <!--DIV FOR DISPLAYING DATA FROM THE JQUERY API-->
                	<!--<div id="loading" ></div>-->
                	<?php echo $content2; ?>
                    
                    
                    
                 <!--END OF DIV FOR DISPLAYING DATA FRO THE JQUERY API-->
                 <!--DIV FOR PAGINATION-->
                    <!--<div style="width:1015px; margin:0px auto; padding:3px;">
                    	
							<dl id="pagination">-->
								<?php
									//Show page links
									//for($i=1; $i<=$pages; $i++)
									//{
										//echo '<dt id="'.$i.'">'.$i.'</dt>';
									//}
								?>
							<!--</dl>	
					</div>-->
                  <!--END OF DIV FOR PAGINATION-->
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("../footer.php"); ?>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
<form id="contactForm" action="http://zodml.org/processForm.php" method="post">

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
    </li> <li>
    <center>
<?php
          require_once('../../recaptchalib.php');
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