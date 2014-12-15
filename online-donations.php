<?php
$randomnumber = ZODML.rand(1,9).rand(1,9).rand(1,9).rand(1,9).rand(1,9).rand(1,9);
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="<?php //echo $tags; ?>" zodml online donations/>
<meta name="title" content="<?php //echo $metatitle; ?>" zodml online donations/>
<meta name="description" content="<?php //echo $description; ?>" zodml online donations/>
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
<title>ZODML | Online Donations</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link rel="stylesheet" type="text/css" href="bookcounter.css"> 
<link href="images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<script language="javascript">
  function toggleDiv(divid){
    if(document.getElementById(divid).style.display == 'none'){
      document.getElementById(divid).style.display = 'block';
    }else{
      document.getElementById(divid).style.display = 'none';
    }
  }
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

<script type="text/javascript">
function validateForm() {
    var y = document.forms["upay_form"]["currCode"].value;
    var x = document.forms["upay_form"]["amt"].value;
    var q = document.forms["upay_form"]["amt"].value;
    var z = document.forms["upay_form"]["email"].value;
     var p = document.forms["upay_form"]["email"].value;
    // var m = document.forms["upay_form"]["mercId"].value;
    if (y == "Select") {
        alert("Please select currency Type");
        return false;
    }
    if (x == null || x == "") {
        alert("Amount must be filled out");
        return false;
    }
    
    if (!q.match(/^[0-9]+$/)) {
        alert("Please enter numeric value in amount to donate field");
        return false;
    }
    
    if (z == null || z == "") {
        alert("Email must be filled out");
        return false;
    }
    if (!p.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
        alert("Please enter valid email");
        return false;
    }
    
      
    if (y == "566") {
        
        document.getElementById("mercId").value = "00845";
    }
    if (y == "840") {
        
        document.getElementById("mercId").value = "07449";
    }
    if (y == "826") {
         
        document.getElementById("mercId").value = "07256";
    }
   
}
</script>



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
                        <a href="#">Support ZODML</a> > Online Donations</div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table cellspacing="15">
                        <tr><td align="center" valign="top">
                        			<div id="aboutus_content_holder4_cathy">
<div id="aboutus_cathy_hold">


<div id="zodml_cathy_text">
<form id="upay_form" name="upay_form" method="post" action="https://cipg.stanbicibtcbank.com/MerchantServices/MakePayment.aspx" target="_top" onsubmit="return validateForm()">
  <input type="hidden" name="mercId" id="mercId">
  <input type="hidden" name="orderId" value="<?php echo $randomnumber; ?>">
  <input type="hidden" name="prod" value="Donations">
  <table width="900" border="0">
  
   <tr><td>
  
  <table width="492" border="0">
  
   <tr>
      <td colspan="2">Thank you for considering making an online donation to support ZODML’s library and literacy projects. We rely on generous individuals like you to keep our resources free for Nigerians young and old. 
If you would like to learn about other ways to get involved with ZODML’s work, <a href="http://zodml.org/donations.php">please click here.</a></td>
    </tr>
    <tr>
      <td>Currency Type</td>
      <td><label>
        <select name="currCode" id="currCode">
          <option value="Select" selected="selected">Select</option>
          <option value="566">NAIRA</option>
          <option value="840">USD</option>
          <option value="826">GBP</option>
         </select>
      </label></td>
    </tr>
    <tr>
      <td>Amount to Donate</td>
      <td><label>
        <input boder= "10px" type="text" name="amt" id="amt" />
      </label></td>
    </tr>
    <tr>
      <td>Your E-mail Address</td>
      <td><label>
        <input type="text" name="email" id="email"/>
      </label></td>
    </tr>
    <tr>
      <td colspan="2"><input type="submit" name="submit" value="Donate"></td>
    </tr>
    <tr>
      <td colspan="2">The following payment types are supported:</td>
    </tr>
   
  </table></td>
  <tr><td style="margin:40px">
  <img src="https://cipg.stanbicibtcbank.com/PaymentGateways/Logos/etranzact.png" width="129" height="58" />
   <img  src=" https://cipg.stanbicibtcbank.com/PaymentGateways/Logos/visa_icon.png" width="129" height="58" />
    <img src="https://cipg.stanbicibtcbank.com/PaymentGateways/Logos/master.png" width="129" height="58" />

<img src="https://cipg.stanbicibtcbank.com/PaymentGateways/Logos/Interswitchverve.png" width="129" height="58" /></td></tr></table>
</form>
</div>
</div>
</div>
									  
                           </td>
                           <td valign="top">         
                                    <?php include("rotator.php"); ?>






                            </td>
                            </tr>
                            </table>        
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
          
			</div>
<!--END OF CONTENT HOLDER-->
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

  if ( !$('#senderName').val() || !$('#senderEmail').val() || !$('#message').val() ) {

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
    $('#senderEmail').val( "" );
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

<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->
<!--leave a comment form-->
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
<!--end of leave a comment form-->


</div>
<!--END OF THE BODY HOLDER-->
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