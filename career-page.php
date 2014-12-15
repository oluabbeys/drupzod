<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=9");
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
<meta name="description" content="Our Story" />
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
<title>ZODML | Career at ZODML</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript" src="js/flowplayer-3.2.11.min.js"></script>
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
                      <a href="http://www.zodml.org/our-team.php">Our Team</a> > Careers at ZODML</div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table width="1013" cellspacing="15">
                        <tr>
                        <td valign="top">
                        		<div id="aboutus_content_holder3_story">
<div id="aboutus_history_story">
<div id="zodml_story_body">
  <p>ZODML is a tight-knit and community-oriented organisation dedicated to a Nigeria in which everyone can freely access information to acquire knowledge and develop themselves. We offer challenging and rewarding job opportunities to people passionate about our mission, alongside comprehensive pay and benefits packages, and a welcoming and diverse workplace.</p>
  <p>These are the current job openings we have.</p>
  <p>1.  <strong><a href="#reg1">Accountant </a></strong></p>
  <p>2.  <strong><a href="#reg2">Editorial Assistant/Social Media Coordinator</a></strong></p>
  <p>3.  <strong><a href="#reg3">Human Resource Officer</a></strong></p>
  <p><strong><a href="#reg4">How to Apply</a></strong></p>
  <p>1. <strong><a name="reg1"></a>Job Title: Accountant</strong></p>
  <p><strong>Job Description</strong></p>
  <p>ZODML is seeking an Accountant to work from our Corporate Office at 7 Taofeek Lawal Street, Ikoyi, Lagos. The successful applicant for this position will be expected to manage, process, analyse, and document all financial transactions and information according to ZODML's policies and procedures, as well as determine and maintain records of assets and prepare financial reports. The applicant will:</p>
  <ul>
    <li>Be the first point of contact for all accounts-related matters</li>
    <li>Ensure that all financial transactions and data are correctly implemented according to set policies and procedures</li>
    <li>Liaise and deal with external auditors</li>
    <li>Support the development and updating of financial policies, procedures, and standards</li>
  </ul>
  <strong><p>The position requires:</p></strong>
  <ul>
    <li>In-depth knowledge of Quickbooks</li>
    <li>Strong reporting skills</li>
    <li>Excellent administrative and planning skills</li>
    <li>In-depth knowledge of Nigerian accounting rules and laws</li>
    <li>Strong knowledge of accounting software packages as well as MS Office</li>
    <li>A strong sense of ethics and integrity</li>
    <li>Ability to keep to deadlines and keen attention to detail</li>
    <li>Ability to maintain confidentiality</li>
    <li>General mathematics skills</li>
    <li>Strong time management skills</li>
    <li>Strong data entry skills</li>
    <li>(For Nigerian citizens) Must have completed National Service</li>
    <li>A minimum of a second-class degree (3.0 GPA on the American scale) in accounting or financial management</li>
  </ul>
<p>2. <strong><a name="reg2"></a>Job Title: Editorial Assistant/Social Media Coordinator</strong></p>
<p><strong>Job Description</strong></p>
<p>ZODML is seeking an Editorial Assistant/Social Media Coordinator to edit and generate content for our website (www.zodml.org) and oversee and generate traffic through the organisation's social media accounts. The job is based at our Corporate Office at 7 Taofeek Lawal, Ikoyi, Lagos.</p>
<p>The successful applicant:</p>
<ul>
  <li>Must have excellent writing skills</li>
  <li>Must have good blogging skills and experience with creating content for websites</li>
  <li>Must have strong social media skills (familiarity wth Facebook and Twitter for organisations is a necessity; experience with networks such as Instagram, Pinterest and LinkedIn is a plus)</li>
  <li>Must show interest in books and the literary world (both Nigerian and international)</li>
  <li>Must be able to meet deadlines and work with little supervision</li>
  <li>(For Nigerian citizens) Must have completed National Service</li>
  <li>Should hold a minimum of a second-class degree (3.0 GPA on the American scale) in English Language or a related discipline</li>
  </ul>
<p>3. <strong><a name="reg3"></a>Job Title: Human Resource Officer</strong></p>
<p>ZODML is seeking a Human Resource Officer to work from our Corporate Office at 7 Taofeek Lawal Street, Ikoyi, Lagos. The successful applicant for this position will be expected to maintain and enhance our organisation's human resources by planning, implementing, and evaluating employee relations and human resource policies, programmes, and practices. The applicant will:</p>
<ul>
  <li>Be the first point of contact for all HR-related matters</li>
  <li>Administer all HR-related documentation, such as contracts of employment</li>
  <li>Ensure that all relevant HR databases are up to date, accurate and comply with labour laws and other legislation</li>
  <li>Assist in the recruitment of new hires</li>
  <li>Propose and manage employee benefits scheme</li>
</ul>
<p><strong>The position requires:</strong></p>
<ul>
  <li>High level knowledge of human resource management</li>
  <li>Strong administration skills</li>
  <li>Strong hiring skills</li>
  <li>Strong knowledge of benefits administration</li>
  <li>In-depth knowledge of performance management</li>
  <li>Strong knowledge of Nigerian employment law and laws against sexual harassment</li>
  <li>Ability to classify employees and set up compensation and wage structure</li>
  <li>Excellent interpersonal skills</li>
  <li>Strong communication skills (both written and verbal)</li>
  <li>Flexibility and willingness to learn</li>
  <li>Enjoying working with people</li>
  <li>Ability to work as part of a team</li>
  <li>Ability to work accurately with attention to detail</li>
  <li>(For Nigerian citizens) Must have completed National Service</li>
  <li>A minimum of a second-class degree (3.0 GPA on the American scale) in the humanities or any relevant discipline</li>
</ul>
<p><strong><a name="reg4"></a>How to Apply</a></strong></p>
<p>Interested applicants should send resumes and cover letters to <a href="mailto:kenechi.uzor@zodml.org">kenechi.uzor@zodml.org</a></p>
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

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->
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