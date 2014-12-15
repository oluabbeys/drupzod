<?php 
								ini_set("display_errors", "off");
								include_once("../Nigeria/scripts/config.php");
								$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=39");
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
<title>ZODML | e-Library | Free e-Books</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/slider.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="../js/jcarousellite1.0.1_min.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript" src="../js/contact.js"></script>
<script type="text/javascript" src="register.js"></script>
<!--<script type="text/javascript" src="register2.js"></script>-->


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
<a class="addthis_button_buffer"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-

521f68de301bc049"></script>
<script type="text/javascript">
var addthis_config = {
     data_track_clickback: True
} 
<!-- AddThis Button END -->

<style type="text/css">
form ul {
margin: 0px;
padding: 6px;
list-style-type: none;
}
form ul li {
margin: 10px 0 25px 0;
-webkit-border-radius: 4px;
border: 1px solid #AAA;
padding: 10px;
width:400px;
}
form ul li.naked {
-webkit-border-radius: 0px;
border: 0;
padding: 0;
}
input, select{
-webkit-appearance: none;
border: 0;
width:100%;
font-size:13px;
}
input[type=submit] {
border: 1px solid white;
background: -webkit-gradient(linear, left top, left bottom, color-stop(0.0,
#F8F8F8), color-stop(1.0, #AAAAAA));
/*-webkit-border-radius: 2px;*/
-webkit-box-shadow: 0 0 4px #333333;
width: 30%;
padding: 8px;
border-radius:4px;
background-color: #AAA;
margin-right:150px;
font-size:12px;
position:none;
top:0px;
/*box-shadow:2px 2px 2px;*/
}
#response_here{
	display: none;
	border: 1px solid #D6D6D6;
	background-color:#FFCD9B;
	padding: 20px;
	width: 400px;
	/*height:80px;*/
	font-family:"Lucida Sans Unicode", "Lucida Grande", sans-serif;
	font-size:13px;
	border-radius:5px;
	margin:80px 0px 10px 0px;
	text-align:center;
	line-height:25px;
}
#response_here2{
	display: none;
	border: 1px solid #D6D6D6;
	background-color:#FFCD9B;
	padding: 20px;
	width: 400px;
	/*height:80px;*/
	font-family:"Lucida Sans Unicode", "Lucida Grande", sans-serif;
	font-size:13px;
	border-radius:5px;
	margin:80px 0px 10px 0px;
	text-align:center;
	line-height:25px;
}
#taskcountry{
	color:#666;
}
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
<br />
<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">

                    <!--CONTENNT LAYER 1-->
                    <div id="elibrary_layer1_sample">
                            
                    </div>
                    <br />
                    <div id="welcome_msg_elibrary">
                                <?php echo $content2; ?>
                            </div>
                    <!--END OF CONTENT LAYER 1-->
                
                        <!--CONTENT LAYER 2-->
                        <div id="elibrary_content_holder_register">
                        
                        				<?php 
											include_once("../Nigeria/scripts/config.php");
											
											function getCountry()
											{
												$result = mysql_query("SELECT DISTINCT country from country ORDER BY country ASC");
												while($row = mysql_fetch_array($result))
												{
													echo '<option value="'.$row['country'].'">'.$row['country'].'</option>';
												}
											}
											?>
                        	
                            <!--Div to the left-->
                         	<div style="width:500px; height:400px; margin:20px 0px 0px 5px; float:left;">
                            <div><img src="../images/e-library_new_user.png" width="110" height="30" /></div>
                            	<div style="font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:14px; line-height:25px; color:#EC9F00; text-align:left; width:400px; margin:0px 20px 10px 12px;">Fill out the form below to access our e-Library and receive monthly updates on new additions to our catalogue.</div>
                                    <form id="formail">
                                    <ul>
                                    
                                    <li><input type="text" name="taskname" id="taskname" placeholder="Name" title="Enter your name" /></li>
                                    
                                    
                                    <li><input type="text" name="taskdue" id="taskdue" placeholder="Email" title="Enter your email"/></li>
                                    
                                    <li>	<select type="text" name="taskcountry" id="taskcountry">
                                    		<option selected="selected" disabled="disabled">Select a country</option>
                                            <option>
											<?php 
											getCountry();
											
											?>
                                            </option>
                                            </select>
                                    </li>
                                    
                                    <li class="naked"><input type="submit" name="save" value="Submit" id="save" /></li>
                                    </ul>
                                    </form>
                                    <div id="response_here"></div>
                         	</div>
                            <!--End Div to the left-->
                            <!--Div to the right-->
                            <div style="width:420px; height:400px; margin:20px 0px 0px 10px; float:right;">
                             <div style="margin:0px 0px 0px 6px;"><img src="../images/e-library_returning_user.png" width="140" height="30" /></div>
                            	<div style="font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:14px; line-height:25px; color:#EC9F00; text-align:left; width:400px; margin:0px 20px 10px 12px;">Sign in with your email address to browse and download e-books.</div>
                                
                                    <form id="formail2" action="login.php" method="post">
                                    <ul>
                                    
                                    <li><input type="text" name="loginemail" id="loginemail" placeholder="Enter your email" title="Sign in with your email" /></li>
                                    
                                     
                                    <li class="naked"><input type="submit" name="save2" value="Log in" id="save2" /></li>
                                    </ul>
                                    </form>
                                    <div id="response_here2"></div>
                         	</div>
                            <!--End of Div to the right-->
                         		 
                         
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
<li><center>
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