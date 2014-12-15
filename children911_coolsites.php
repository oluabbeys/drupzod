<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">


<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-Library in Nigeria|Library Services|Children 9-11 years- Cool Sites</title>


<link rel="stylesheet" type="text/css" href="css/explore.css" />
<link href="images/favicon.ico" rel="shortcut icon" />
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
<script type="text/javascript">
var addthis_config = {
     data_track_clickback: True
} 
<!-- AddThis Button END -->

</head>



<body>

<div style="width:1015px; margin:0px auto; height:absolute;">
<div class="top"><div id="backhome"><a href="index.php">ZODML <img src="images/fun_games/home.png"/></a></div>
</div>



<div id="site_container">


<!-- start of top section -->
<table width="1016">

<tr><td>
<div id="page_title">Children (9 - 11 years)</div><br>
</td></tr>


<!-- End of top section -->




<!-- Start of Menu section -->
<tr><td><div id="menu_container">
<a class="explore_link" href="children911_explore.php"><div id="dino_menu"><div class="link_positioning">Explore</div></div></a>
<a class="explore_link" href="children911_coolsites.php"><div id="lion_menu"><div class="link_positioning">Cool Sites</div></div></a>
<a class="explore_link" href="children911_homework.php"><div id="owl_menu"><div class="link_positioning">Howework<br> Help</div></div></a>
<a class="explore_link" href="children911_gbooks.php"><div id="tortoise_menu"><div class="link_positioning">Great Books</div></div></a>
</div>
</td></tr>
<!-- End of Menu section -->




<!-- start of main content section -->
<tr><td><div id="main_text_title">Cool Sites</div><div id="thumb"></td></tr>

<tr><td>



<div id="content_wrapper">

<div id="smiley" style="margin-top:20px;"><img src="images/girl.png" height="50" width="50"/></div>
<div id="oma_main_text">Find sites we think make the internet fun for  kids like you. We hope you find this useful.</div>



<div id="text_wrapper">
<div id="menu_badges_container">

<a href="children911_fungames.php"><img class="menu_badges" src="images/cool_sites_badge01.png"></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="children911_coolsitesgirls.php"><img class="menu_badges" src="images/cool_sites_badge02.png"></a>&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="children911_coolsitesboys.php"><img class="menu_badges" src="images/cool_sites_badge03.png"></a>&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="children911_entertainment.php"><img class="menu_badges" src="images/cool_sites_badge04.png"></a><!-- end content wrapper-->

</div>

</div>
</td></tr>
<tr><td>
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