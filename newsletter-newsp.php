<?php
ini_set("display_errors", "off");

if(isset($_GET['news'])){

$code = $_GET['news'];

}

include("Nigeria/scripts/config.php");
$sql = mysql_query("SELECT * FROM newsletterstories WHERE hash = '$code'");

$row = mysql_fetch_array($sql);
$topic = $row['topic'];
$url = $row['url'];

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="Zaccheus Onumba Dibiaezue Memorial Libraries, ZODML, zodml.org, Newsletter Articles" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<title>ZODML | Newsletter | <?php echo $topic; ?></title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<link rel="stylesheet" type="text/css" href="engine1/style.css" />
<script type="text/javascript" src="engine1/jquery.js"></script>
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript" src="js/contact.js"></script>
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

<!--facebook javascript-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<!--end of facebook javascript-->

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

<meta property="fb:admins" content="oluabbeys"/>
</head>

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
		<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer1">
                        <table width="570">
                        <tr>
                        <td width="316">
                        <div >Newsletter Articles</div>
                        </td>
                        <td width="60">
                        <!--Email a friend script-->
                        <script type="text/javascript">
function open_win(){
	window.open("send_article.php?code=<?php echo $code; ?>","_blank","menubar=no, scrollbar=no, resizable=no, width=400, height=410");
}
</script>
<!--end of Email a friend script-->
						<!--Email a friend-->
                        <div id="email_a_friend" onclick="open_win();" title="Email a friend"></div>
                        <!--End of Email a friend-->
                        </td>
                        <td width="21">
                         <!--facebook API-->
                            	<div class="fb-like" data-href="<?php echo $url; ?>" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false" data-font="verdana" style="margin:0px 0px 0px 10px;"></div><!--End of facebook API--> 
                                </td>
                                <td width="153">
                                 <!--Twitter API-->
                         <a href="https://twitter.com/share" class="twitter-share-button" data-url="<?php echo $url; ?>" data-via="zodml" data-hashtags="ZODMLNewsletters">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script><!--End of Twitter API-->
							</td>
                        </tr>
                        </table>
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="oma_oma2">
                        <table>
                        <tr><td valign="top">
                        			<div style="width:700px;">
                                    <div style="padding:5px 10px 5px 10px; font-size:16px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif;"><?php echo $row['topic']; ?></div>
                                        <div style="font-size:12px; padding:5px 10px 5px 10px; text-align:justify; margin-top:5px; font-family:Verdana, Geneva, sans-serif; line-height:30px; color:#444;">
                                        	
                                         <?php echo $row['story']; ?> 
                                         
                                          <span>&nbsp;</span>
                                          <h2 style="color:#BBB;">Comments</h2>
                                          
                                          
                                          <div class="fb-comments" data-href="http://zodml.org/newsletter-news.php?news=<?php echo "$code"; ?>" data-width="600" data-num-posts="30"></div>
                                      </div>
                         			</div>
                           </td>
                           <td width="302" valign="top">         
                                    <div id="oma_others_hold">
                               <?php include("rotator.php"); ?>
                                                      
                            	</div>
                            </td>
                         
                            
                            </tr>
                            
                            </table>        
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
          
			</div>
<!--END OF CONTENT HOLDER-->

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