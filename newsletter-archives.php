<?php  header( 'Location: http://www.zodml.org/about-us/zodml-newsroom/newsletters' ) ;  ?>
<?php
error_reporting(0);
include("Nigeria/scripts/config.php");
$per_page = 10; 

//getting number of rows and calculating no of pages
$sql = "SELECT * FROM archives ORDER BY id DESC";
$rsd = mysql_query($sql);
$count = mysql_num_rows($rsd);
$pages = ceil($count/$per_page)

?>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="Zaccheus Onumba Dibiaezue Memorial Libraries, ZODML, zodml.org, Newsletter Archives" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta property="fb:admins" content="100003994871719" />
<title>ZODML | Newsletter Archives</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/example-newsletter.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<link href="css/pagination.css" type="text/css" rel="stylesheet" media="screen" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript" src="js/tabber.js"></script>
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

<!--code that link Addthis to google analytics-->
<script type="text/javascript">
      var addthis_config = {
         data_ga_property: 'UA-33455239-1'
      }; 
</script>
<!--end code that link Addthis to google analytics-->
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
                        <div id="aboutus_content_layer_catalogue">
                        <div style="width:400px; height:35px; float:left;"><a href="http://www.zodml.org/our-story.php">Our Story</a> > Newsletter Archives</font></div>
                        <div style="font-size:14px; font-family:Verdana; line-height:25px; width:250px; height:35px; float:right; text-align:right;"><span id="findbook" style="cursor:pointer;"><a href="newsletter.php"><button class="findabook2">Sign Up For ZODML Newsletter</button></a></span></div>
                       
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="oma_oma2">
                        <table>
                        <tr><td valign="top">
                        			<div id="newsletterlisting">
                                        	<div class="tabber">
                                           			 <!--CATEGORY FOR NEWS FROM THE LIBRARY-->
                                            		<div class="tabbertab">
	  													<h2>New from the Library</h2>
                                                        <?php
															include_once("db.php");
															$newsquery = mysql_query("SELECT * FROM newsletterstories WHERE category = 'News from the Library' ORDER BY id DESC");
															while ($row = mysql_fetch_array($newsquery)){
																$month = $row['month'];
																$topic = $row['topic'];
																$hash = $row['hash'];
														?>
                                                   	  <div style="width:700px; padding:5px; margin:10px 0px 30px 5px;">
                                                            	<div style="width:110px; float:left; margin-right:5px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:12px; font-weight:800; letter-spacing:0px;"><?php echo $month; ?></div>
                                                                <div style="width:8px; float:left; margin-right:10px;"><img src="images/icon.png" width="7" height="10" /></div>
         														<div style="width:555px; float:left; margin-right:5px; font-family:Verdana, Geneva, sans-serif; font-size:12px;"><?php echo "<a href=\"newsletter-news.php?news=".$hash."\">$topic</a>"; ?></div>
                                                            </div>
                                                        <?php } ?>
                                                     </div>
                                                     <!--END CATEGORY FOR NEWS FROM THE LIBRARY-->
                                                     <!--CATEGORY FOR BOOK RECOMMENDATION-->
                                                     <div class="tabbertab">
	  													<h2>Book Recommendation</h2>
                                                        <?php
															include_once("db.php");
															$newsquery = mysql_query("SELECT * FROM newsletterstories WHERE category = 'Book Recommendation' ORDER BY id DESC");
															while ($row = mysql_fetch_array($newsquery)){
																$month = $row['month'];
																$topic = $row['topic'];
																$hash = $row['hash'];
														?>
                                                   	  <div style="width:700px; padding:5px; margin:10px 0px 30px 5px;">
                                                            	<div style="width:110px; float:left; margin-right:5px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:12px; font-weight:800; letter-spacing:0px;"><?php echo $month; ?></div>
                                                                <div style="width:8px; float:left; margin-right:10px;"><img src="images/icon.png" width="7" height="10" /></div>
         														<div style="width:555px; float:left; margin-right:5px; font-family:Verdana, Geneva, sans-serif; font-size:12px;"><?php echo "<a href=\"newsletter-news.php?news=".$hash."\">$topic</a>"; ?></div>
                                                            </div>
                                                        <?php } ?>
                                                     </div>
                                                     <!--END OF CATEGORY FOR BOOK RECOMMENDATION-->
                                                     <!--CATEGORY FOR SPOTLIGHT-->
                                                     <div class="tabbertab">
	  													<h2>Spotlight</h2>
                                                        <?php
															include_once("db.php");
															$newsquery = mysql_query("SELECT * FROM newsletterstories WHERE category = 'Spotlight' ORDER BY id DESC");
															while ($row = mysql_fetch_array($newsquery)){
																$month = $row['month'];
																$topic = $row['topic'];
																$hash = $row['hash'];
														?>
                                                   	  <div style="width:700px; padding:5px; margin:10px 0px 30px 5px;">
                                                            	<div style="width:110px; float:left; margin-right:5px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:12px; font-weight:800; letter-spacing:0px;"><?php echo $month; ?></div>
                                                                <div style="width:8px; float:left; margin-right:10px;"><img src="images/icon.png" width="7" height="10" /></div>
         														<div style="width:555px; float:left; margin-right:5px; font-family:Verdana, Geneva, sans-serif; font-size:12px;"><?php echo "<a href=\"newsletter-news.php?news=".$hash."\">$topic</a>"; ?></div>
                                                            </div>
                                                        <?php } ?>
                                                     </div>
                                                     <!--END OF CATEGORY FOR SPOTLIGHT-->
                                                     <!--CATEGORY FOR SHORT STORY-->
                                                     <div class="tabbertab">
	  													<h2>Short Story</h2>
                                                        <?php
															include_once("db.php");
															$newsquery = mysql_query("SELECT * FROM newsletterstories WHERE category = 'Short Story' ORDER BY id DESC");
															while ($row = mysql_fetch_array($newsquery)){
																$month = $row['month'];
																$topic = $row['topic'];
																$hash = $row['hash'];
														?>
                                                   	  <div style="width:700px; padding:5px; margin:10px 0px 30px 5px;">
                                                            	<div style="width:110px; float:left; margin-right:5px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:12px; font-weight:800; letter-spacing:0px;"><?php echo $month; ?></div>
                                                                <div style="width:8px; float:left; margin-right:10px;"><img src="images/icon.png" width="7" height="10" /></div>
         														<div style="width:555px; float:left; margin-right:5px; font-family:Verdana, Geneva, sans-serif; font-size:12px;"><?php echo "<a href=\"newsletter-news.php?news=".$hash."\">$topic</a>"; ?></div>
                                                            </div>
                                                        <?php } ?>
                                                     </div>
                                                     <!--END OF CATEGORY FOR SHORT STORY-->
                                            </div>
                         			</div>
                                    
                                 <p>&nbsp;</p>   
                           </td>
                           <td width="302" valign="top">         
                                    <?php include("rotator.php"); ?>
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
<script type="text/javascript" src="js/loading.js"></script>
<!--<script type="text/javascript">
	
	$(document).ready(function(){
		
	//Display Loading Image
	function Display_Load()
	{
	    $("#loading").fadeIn(900,0);
		$("#loading").html("<img src='images/loader.gif' />");
	}
	//Hide Loading Image
	function Hide_Load()
	{
		$("#loading").fadeOut('slow');
	};
	

   //Default Starting Page Results
   
	$("#pagination dt:first").css({'color' : '#EC9F00'});//.css({'border' : 'none'});
	
	Display_Load();
	
	$("#newsletterlisting").load("newsletter-archive-data.php?page=1", Hide_Load());



	//Pagination Click
	$("#pagination dt").click(function(){
			
		Display_Load();
		
		//CSS Styles
		$("#pagination dt")
		.css({'border' : 'solid #CCC 1px'})
		.css({'color' : '#EC9F00'});
		
		$(this)
		.css({'color' : '#EC9F00'})
		.css({'border' : 'none'});

		//Loading Data
		var pageNum = this.id;
		
		$("#newsletterlisting").load("newsletter-archive-data.php?page=" + pageNum, Hide_Load());
	});
	
	
});
	</script>-->

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