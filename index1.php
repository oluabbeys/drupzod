<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=1");
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
<title>ZODML | The Premier Free Online Library in Nigeria</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu_new.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<link href="https://plus.google.com/115203125112204504987" rel="publisher" />
<meta property="fb:admins" content="100003994871719" />

<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="js/search.js"></script>

<script type="text/javascript">
$("#target").ezpz_tooltip({contentId:"content"});
</script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>

<script language="javascript">
			$(document).ready(
				function (){
					$("#pikame").PikaChoose({carousel:true});
				});
</script>
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

<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"tw:via="@zodml"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_buffer"></a>
<a class="addthis_button_compact"></a>
</div>

<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>

<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>

<script language="javascript">
  function toggleDiv(divid){
    if(document.getElementById(divid).style.display == 'none'){
      document.getElementById(divid).style.display = 'block';
    }else{
      document.getElementById(divid).style.display = 'none';
    }
  }
</script>

</head>
<body >


<div id="body_hold">

<!--HEADER-->
               
            <div id="header2_new" title="Turning Pages Changing Lives">
                <a href="http://zodml.org"><div id="logo-link"></div></a>

				<div id="subheader2_new">
     			 <br />
      			<?php include("search_bar.php"); ?>
                </div>
			</div>
                
<!--END OF HEADER-->

<!--MENU-->
            <div id="menu_ba22">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->
<!--CONTENT-->
<div id="index_content_holder">

				<!--CONTENT LAYER 2-->
                <div id="content_layer2_bars">
                <table>
                <tr>
                <td valign="top">
                	<div id="welcome_new_bars2">
               		  
                      
                      <div id="welcome_bar_join">
                   	    <a href="http://www.zodml.org/catalogue.php"><img src="images/HomeBook.png" width="200" height="30" title="Book Search" /></a></div>
                     
                        <div id="welcome_bar_join">
                   	    <a href="joining_the_library.php"><img src="images/HomeJoin.png" width="200" height="30" title="Join the Library" /></a></div>
                        
                        <div id="welcome_bar_newsletter">
                   	    <a href="newsletter.php"><img src="images/HomeSign.png" width="200" height="30" title="Sign up for the ZODML Newsletter" /></a></div>
                        
                        <div id="welcome_bar_newsletter">
                   	    <a href="donations.php"><img src="images/HomeDonate.png" width="200" height="30" title="Donate to ZODML" /></a></div>
                        
                        <div style="padding-left:10px; font-size:12px; font-weight:800; color:#444; margin-top:10px;">Recent Blog posts</div>
                        	<div id="welcome_bar_newandnote">
                        	
                     		<?php 
							
							include("autoblogpost.php");
							
					 			?>
                     
                     		<?php //} ?>	
                            
                            </div>  
                        		
           		  </div> 
                </td>
                
                <td valign="top">
                <?php include("pixtransit.php"); ?>
                </td>
                <td  valign="top">
                <?php include("botw.php"); ?>
     

                </td>
                
                </tr>
                </table>
                </div>
                <!--END OF CONTENT LAYER 2-->
				
                
                
                <!--CONTENT LAYER 3-->
                <?php include("aotw-quote.php"); ?>
                <!--END OF CONTENT LAYER 3-->
                
   
</div>



<!--END OF CONTENT-->
<!--FOOTER-->

<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->



<script type="text/javascript">

var messageDelay = 2000;  
$( init );


function init() {

  
  $('#contactForm').hide().submit( submitForm ).addClass( 'positioned' );

  
  $('a[href="#contactForm"]').click( function() {
    $('#content').fadeTo( 'slow', .2 );
    $('#contactForm').fadeIn( 'slow', function() {
      $('#senderName').focus();
    } )

    return false;
  } );
  
  
  $('#cancel').click( function() { 
    $('#contactForm').fadeOut();
    $('#content').fadeTo( 'slow', 1 );
  } );  

  
  $('#contactForm').keydown( function( event ) {
    if ( event.which == 27 ) {
      $('#contactForm').fadeOut();
      $('#content').fadeTo( 'slow', 1 );
    }
  } );

}

function submitForm() {
  var contactForm = $(this);

  if ( !$('#senderName').val() || !$('#senderEmail').val() || !$('#message').val() ) {

    $('#incompleteMessage').fadeIn().delay(messageDelay).fadeOut();
    contactForm.fadeOut().delay(messageDelay).fadeIn();

  } else {

    $('#sendingMessage').fadeIn();
    contactForm.fadeOut();

    $.ajax( {
      url: contactForm.attr( 'action' ) + "?ajax=true",
      type: contactForm.attr( 'method' ),
      data: contactForm.serialize(),
      success: submitFinished
    } );
  }
  return false;
}
function submitFinished( response ) {
  response = $.trim( response );
  $('#sendingMessage').fadeOut();

  if ( response == "success" ) {

   
    $('#successMessage').fadeIn().delay(messageDelay).fadeOut();
    $('#senderName').val( "" );
    $('#senderEmail').val( "" );
    $('#message').val( "" );

    $('#content').delay(messageDelay+80).fadeTo( 'slow', 1 );

  } else {

   
    $('#failureMessage').fadeIn().delay(messageDelay).fadeOut();
    $('#contactForm').delay(messageDelay+80).fadeIn();
  }
}

</script>


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
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We will get back to you shortly.</p></div>
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



<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<!--code that link Addthis to google analytics-->
<script type="text/javascript">
      var addthis_config = {
         data_ga_property: 'UA-33455239-1',
         data_ga_social : true
      }; 
</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-521f68de301bc049"></script>


<!-- AddThis Button END -->

</body>
</html>