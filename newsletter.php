<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=12");
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
<title>ZODML | Subscribe for Newsletter</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript" src="js/search.js"></script>
<!--<script type="text/javascript" src="jquery_form.js"></script>
<script type="text/javascript" src="ajax.js"></script>-->
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.js"></script>-->

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
<!--MODAL POPUP WINDOW-->
<script type="text/javascript">
$(document).ready(function() {
	
	$("#newsletter").click(function(e) {	

		var id = '#dialog';
	
		//Get the screen height and width
		var maskHeight = $(document).height();
		var maskWidth = $(window).width();
	
		//Set heigth and width to mask to fill up the whole screen
		$('#mask').css({'width':maskWidth,'height':maskHeight});
		
		//transition effect		
		$('#mask').fadeIn(1000);	
		$('#mask').fadeTo("slow",0.6);	
	
		//Get the window height and width
		var winH = $(window).height();
		var winW = $(window).width();
              
		//Set the popup window to center
		$(id).css('top',  winH/2-$(id).height()/2);
		$(id).css('left', winW/2-$(id).width()/2);
	
		//transition effect
		$(id).fadeIn(2000); 	
	
	//if close button is clicked
	$('.window .close').click(function (e) {
		//Cancel the link behavior
		e.preventDefault();
		
		$('#mask').hide();
		$('.window').hide();
		$('#newsletter').val($('input:checkbox:checked').map(function() { return $(this).val(); }).get().join(','));
	});		
	
	//if mask is clicked
	$('#mask').click(function () {
		$(this).hide();
		$('.window').hide();
		
		
	});	
	
	
	});
	
});

</script>
<!--END OF MODAL POPUP WINDOW-->


<!--GOOGLE PAGE-TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33247984-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://' : 'http://') + 'stats.g.doubleclick.net/dc.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->

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
<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-521f68de301bc049"></script>
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
</style>
<!--<link href="http://cdn-images.mailchimp.com/embedcode/classic-081711.css" rel="stylesheet" type="text/css">-->
<link href="css/mailchimp.css" rel="stylesheet" type="text/css">
<style type="text/css">
#mc_embed_signup{background:#fff; clear:left; font:14px Helvetica,Arial,sans-serif; }
/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
  We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>


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

<!--CONTENT-->
<div id="content_holder">
                
          
                <!--CONTENT LAYER 3-->
                <div id="newsletter_page_hold">
                <div id="newsletter_page">
                
				<?php echo $content2; ?>
                
                
                </div>
                </div>
                <!--END OF CONTENT LAYER 3-->
                
               
               


</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->
<!--POPUP MODAL BOXES-->
<!--<div id="boxes">
<div style="top: 199.5px; left: 551.5px; display: none;" id="dialog" class="window">
<div id="modalhead">
    <div style="padding:3px; color:#444; float:left; margin-left:7px; font-size:16px; letter-spacing:1px; color:#fff; font-weight:800;">Select your preferred Category</div>
    <div style="padding:3px; color:#fff; float:right; margin-right:7px; font-size:13px;">--><!--<a href="#" class="close">X</a>--><!--</div>
</div>-->
<!--<div style="margin-top:10px; padding:10px; text-align:justify; font-size:13px; line-height:25px; font-family:Verdana, Geneva, sans-serif; color:#444;">
							<form>
							<table>
							<td><label>Please select the newsletter you wish to receive</label></td>
                             </tr>
                             <tr>
                             <td><input type="checkbox" name="zodml[]" id="us" value="News" />&nbsp;&nbsp;&nbsp;&nbsp;<label for="News">News</label></td>
                             </tr>
                             <tr>
                             <td><input type="checkbox" name="zodml[]" id="us" value="Projects" />&nbsp;&nbsp;&nbsp;&nbsp;<label for="Projects">Projects</label></td>
                             </tr>
                             <tr>
                             <td><input type="checkbox" name="zodml[]" id="us" value="Learning" />&nbsp;&nbsp;&nbsp;&nbsp;<label for="Learning">Learning</label></td>
                             </tr>
                             <tr>
                             <td><input type="checkbox" name="zodml[]" id="us" value="Library news"/>&nbsp;&nbsp;&nbsp;&nbsp;<label for="Library news">Library news</label></td>
                             </tr>
                             <tr>
                             <td align="left"><input type="submit" value="Select" class="close" id="newsletter_button3" /></td>
                             </tr>
                             </table>
                             </form>
</div>
</div>-->
<!-- Mask to cover the whole screen -->
<!--<div style="width: 1478px; height: 602px; display: none; opacity: 0.6;" id="mask"></div>
</div>-->
<!--END OF POPUP MODAL BOX-->


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