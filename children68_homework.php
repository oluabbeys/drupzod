<?php  header( 'Location: http://zodml.org/kids' ) ;  ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">


<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-Library in Nigeria|Library Services|Children 3-5 years- Homework</title>


<link rel="stylesheet" type="text/css" href="css/explore.css" />
<link href="images/favicon.ico" rel="shortcut icon" />
<!--GOOGLE PAGE-TRACK CODE-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-33455239-1', 'zodml.org');
  ga('send', 'pageview');

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
<script type="text/javascript">
var addthis_config = {
     data_track_clickback: True
} 
<!-- AddThis Button END -->

</head>



<body>
<div style="width:1015px;   margin:0px auto; height:absolute;">
<div class="top"><div id="backhome"><a href="index.php">ZODML <img src="images/fun_games/home.png" /></a></div>
</div>
<div id="site_container">


<!-- start of top section -->
<table>

<tr><td>
<div id="page_title">Children (6 - 8 years)</div><br>
</td></tr>

<tr><td>&nbsp;</td></tr>
<!-- End of top section -->




<!-- Start of Menu section -->
<tr><td><div id="menu_container">
<a class="explore_link" href="children68_explore.php"><div id="dino_menu"><div class="link_positioning">Explore</div></div></a>
<a class="explore_link" href="children68_coolsites.php"><div id="lion_menu"><div class="link_positioning">Cool Sites</div></div></a>
<a class="explore_link" href="children68_homework.php"><div id="owl_menu"><div class="link_positioning">Howework<br> Help</div></div></a>
<a class="explore_link" href="children68_gbooks.php"><div id="tortoise_menu"><div class="link_positioning">Great Books</div></div></a>
</div>
</td></tr>
<!-- End of Menu section -->




<!-- start of main content section -->
<tr><td><div id="main_text_title">Homework Help</div><div id="thumb"></td></tr>

<tr><td>



<div id="content_wrapper">

<div id="smiley" style="margin-top:20px;"><img src="images/boy.png" height="50" width="50"/></div>

<div id="oma_main_text">
Learn more on your own using the sites we have put together. 
</div>



<div id="text_wrapper">
<div id="menu_badges_container">


<a href="children68_maths.php"><img border="0" class="menu_badges" src="images/homework_badge01.png"></a>

<a href="children68_english.php"><img class="menu_badges" src="images/homework_badge02.png"></a>

<a href="children68_science.php"><img class="menu_badges" src="images/homework_badge04.png"></a>

<a href="children68_hscience.php"><img class="menu_badges" src="images/homework_badge05.png"></a><br/>

<a href="children68_cscience.php"><img class="menu_badges" src="images/homework_badge06.png"></a>



<a href="children68_flanguages.php"><img class="menu_badges" src= "images/homework_badge14.png"/></a>


</div>
</div>

</div><!-- end content wrapper-->




<div id="oma_sunrise"><div id="oma_hills"></div></div>
</td></tr>

<!-- End of main content section -->



</table>


</div> <!-- end site_container-->


<div id="footer">
<table align="center">
<tr>
<td align="center"><a href="index.php">Go to ZODML.org</a> | <a href="privacy-policy.php">Privacy Policy</a> | <a href="disclaimer.php">Disclaimer</a></td>
</tr>
<tr>
<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>
</tr>
</table>
</div>
</div>
<script type="text/javascript">

var messageDelay = 2000;  // How long to display status messages (in milliseconds)

// Init the form once the document is ready
$( init );


// Initialize the form

function init() {

  // Hide the form initially.
  // Make submitForm() the form's submit handler.
  // Position the form so it sits in the centre of the browser window.
  $('#contactForm').hide().submit( submitForm ).addClass( 'positioned' );

  // When the "Send us an email" link is clicked:
  // 1. Fade the content out
  // 2. Display the form
  // 3. Move focus to the first field
  // 4. Prevent the link being followed

  $('a[href="#contactForm"]').click( function() {
    $('#content').fadeTo( 'slow', .2 );
    $('#contactForm').fadeIn( 'slow', function() {
      $('#senderName').focus();
    } )

    return false;
  } );
  
  // When the "Cancel" button is clicked, close the form
  $('#cancel').click( function() { 
    $('#contactForm').fadeOut();
    $('#content').fadeTo( 'slow', 1 );
  } );  

  // When the "Escape" key is pressed, close the form
  $('#contactForm').keydown( function( event ) {
    if ( event.which == 27 ) {
      $('#contactForm').fadeOut();
      $('#content').fadeTo( 'slow', 1 );
    }
  } );

}


// Submit the form via Ajax

function submitForm() {
  var contactForm = $(this);

  // Are all the fields filled in?

  if ( !$('#senderName').val() || !$('#message').val() ) {

    // No; display a warning message and return to the form
    $('#incompleteMessage').fadeIn().delay(messageDelay).fadeOut();
    contactForm.fadeOut().delay(messageDelay).fadeIn();

  } else {

    // Yes; submit the form to the PHP script via Ajax

    $('#sendingMessage').fadeIn();
    contactForm.fadeOut();

    $.ajax( {
      url: contactForm.attr( 'action' ) + "?ajax=true",
      type: contactForm.attr( 'method' ),
      data: contactForm.serialize(),
      success: submitFinished
    } );
  }

  // Prevent the default form submission occurring
  return false;
}


// Handle the Ajax response

function submitFinished( response ) {
  response = $.trim( response );
  $('#sendingMessage').fadeOut();

  if ( response == "success" ) {

    // Form submitted successfully:
    // 1. Display the success message
    // 2. Clear the form fields
    // 3. Fade the content back in

    $('#successMessage').fadeIn().delay(messageDelay).fadeOut();
    $('#senderName').val( "" );
    //$('#senderEmail').val( "" );
    $('#message').val( "" );

    $('#content').delay(messageDelay+80).fadeTo( 'slow', 1 );

  } else {

    // Form submission failed: Display the failure message,
    // then redisplay the form
    $('#failureMessage').fadeIn().delay(messageDelay).fadeOut();
    $('#contactForm').delay(messageDelay+80).fadeIn();
  }
}

</script>
<!--End of Conatct Form-->

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
<!--comment form-->
<form id="contactForm" action="processForm2.php" method="post">

  <h2><img src="images/boy.png" width="50" height="50"/> Suggest a Web Resource...</h2>

  <ul>

   <!-- <li>
      <label for="senderName" class="label">Your Name</label>
      <input type="text" name="senderName" id="senderName" placeholder="Please type your name" required maxlength="40" class="input" />
    </li>-->

    <li>
      <label for="senderEmail" class="label">URL (Web Address)</label>
      <input type="text" name="senderName" id="senderName" placeholder="URL (Web Address)" required maxlength="50" class="input" />
    </li>

    <li>
      <label for="message" style="padding-top: .5em;" class="label">Information about Resource</label>
      <textarea name="message" id="message" placeholder="Tell us about the resource" required cols="80" rows="10" maxlength="10000" class="textarea"></textarea>
    </li>

  </ul>

  <div id="formButtons">
    <input type="submit" id="sendMessage" name="sendMessage" value="Send" />
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