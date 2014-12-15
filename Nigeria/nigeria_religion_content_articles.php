<?php 
include("scripts/config.php");
//Getting the value being passed on from people categories page
if(isset($_GET['article_id'])){
	$article_code = $_GET['article_id'];
}

				// including the scripts that gives access to the database
					

					//querying the database
					$sql4 = mysql_query("SELECT * FROM articles WHERE hash ='$article_code'");

					// fetching data from the database
					$row4 = mysql_fetch_array($sql4);
				


?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>zodml.org|e-library Nigeria.:::Discover Nigeria|<?php echo $row4['title']; ?></title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="../js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript" src="../js/contact.js"></script>
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
function open_win(){
	window.open("email_a_friend.php?code=<?php echo $article_code; ?>","_blank","menubar=no, scrollbar=no, resizable=no, width=400, height=410");
}
</script>
<!--Facebook API-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<!--end of Facebook API-->

<!--GOOGLE TRACKING CODE-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-33455239-1', 'zodml.org');
  ga('send', 'pageview');

</script>
<!--END OF GOOGLE TRACKING CODE-->

<!-- Start of StatCounter Code for Dreamweaver -->
<script type="text/javascript">
var sc_project=9060187; 
var sc_invisible=1; 
var sc_security="8717740f"; 
var scJsHost = (("https:" == document.location.protocol) ?
"https://secure." : "http://www.");
document.write("<sc"+"ript type='text/javascript' src='" +
scJsHost+
"statcounter.com/counter/counter.js'></"+"script>");
</script>
<noscript><div class="statcounter"><a title="free hit
counter" href="http://statcounter.com/" target="_blank"><img
class="statcounter"
src="http://c.statcounter.com/9060187/0/8717740f/1/"
alt="free hit counter"></a></div></noscript>
<!-- End of StatCounter Code for Dreamweaver -->
</head>

<body>
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
<div id="content_holder">

                
                
                <!--CONTENT LAYER 2-->
                <div id="discover_nig_content_layer2">
                <div id="browse_by">
                <?php include("browse.php"); ?>
                </div>
                </div>
                <!--END OF CONTENT LAYER 2-->
                <?php
					
				
				
				
				?>
          			<div id="discover_nig_content_full_story_topic">
                    <table>
                    <tr>
                    <td>
                    <div style="width:800px;"><?php print $row4['title']; ?></div>
                    </td>
                    <td valign="top" align="right"><div id="email_a_friend" onclick="open_win();" title="Email a friend"></div></td>
                    <td>
                            <!--facebook API-->
                            	<div class="fb-like" data-href="http://zodml.org/Nigeria/nigeria_religion_content_articles.php?article_id=<?php echo $article_code; ?>" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false" data-font="verdana" style="margin:0px 0px 0px 10px;"></div>
                            
                            <!--End of facebook API-->
                            </td>
                    </tr>
                    </table>
                    </div>
                <!--CONTENT LAYER 3-->
                <div id="discover_nigeria_full_story_hold">
                	<div id="discover_nigeria_full_story">
                    	<!--<div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>-->
                    	<?php print $row4['contents']; ?>
                    </div>
                    
                    <div id="discover_nigeria_full_story_icons">
                    	<!--<table style="margin-left:15px;">
                            <tr>
                            <td valign="top" align="right"><div id="email_a_friend" onclick="open_win();" title="Email a friend"></div></td>
                            <td>-->
                            <!--facebook API-->
                            	<!--<div class="fb-like" data-href="http://zodml.org/zodml_new/Nigeria/Sukur_cultural_landscape.php" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false" data-font="verdana" style="margin:0px 0px 10px 10px;"></div>-->
                            
                            <!--End of facebook API-->
                            <!--</td>
                            
                            </tr>
                            </table>-->
                    </div>
                    <p>&nbsp;</p>
                </div>    
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<?php include("footer.php"); ?>
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