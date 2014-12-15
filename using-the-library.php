<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="ZODML, zodml.org, Borrowing rules, Borrowing, Membership card" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<title>ZODML | Borrowing Rules</title>
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
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>

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
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->

</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
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
                        Services > BORROWING</div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table width="1013">
                        <tr><td width="704" valign="top">
                        			<div id="aboutus_content_holder3">
                                        
                                        <div id="zodml_cathy_text">
                                          
                                            <p><strong>Borrowing Materials </strong></p>
                                            <p>
                                            At ZODML, patrons are allowed to borrow books and audiobooks for <b>two weeks</b>, and are allowed to borrow DVDs for <b>three days</b>. In order to borrow items from the Main Library, you have to fill and submit the <a href="http://www.zodml.org/joining_the_library.php" target="_blank">online membership form</a>. If you are under 18 years of age, information about your parent or guardian must be filled in and they must accept our membership rules on your behalf.
                                            </p>
                                          <p>
                                            After we have verified your name and address we will give you a borrower’s ticket. In order to receive a borrower’s ticket, you will need to provide a N2000 non-refundable deposit to cover the cost of any books which may be lost, stolen or damaged.
                                          </p>
                                          <p>
                                            Your borrower’s ticket allows you to borrow up to four books or four audiobooks (or a combination of both not exceeding a total of four). Books and audiobooks can be borrowed for a maximum period of two weeks. You may also borrow up to four DVDs (for which there is an extra charge of N100 each) for no more than three days at a time.
                                          </p>
                                          
                                          
                                          <p><strong>Renewing Materials</strong></p>
                                          <p>Patrons can renew items an unlimited number of times before or on their due date. Items must be renewed in person at the Library.</p>
                                          
                                          <p><strong>When are materials considered late?</strong></p>
                                          <p>All materials must be returned on or before the due date, which is stamped on the slip attached to the item. If they have not been renewed, the borrower is liable to pay a fee. </p>
                                          <p>Please note that borrowers are responsible for any fines that may accumulate before an overdue item is renewed or returned. The Library cannot consider an item as having successfully been renewed if we have no record of the transaction.</p>
                                          
                                          <p><strong>What are the fees for late materials?</strong></p>
                                          <p>
                                           <table width="573" border="1px" align="center" cellspacing="10" bordercolor="#666666">
                                              
                                              <tr>
                                              <td width="200"><span>Books and audiobooks</span></td>
                                              <td>N20 per item for each day past the due date</td>
                                              </tr>
                                              <tr>
                                              <td width="200">DVDs</td>
                                              <td width="353">N100 per item for each 3-day period past the due date </td>
                                              </tr>
                                              </table>
                                              <br/><i>*Charges are also incurred on weekends and public holidays except the due date falls on days the library is closed.</i>
                                          </p>
                                          
                                          <p><strong>How do I know whether you have a book I want?</strong></p>
                                          <p>The easiest way to know which books are available at the Library is by using <a href="http://www.zodml.org/catalogue.php" target="_blank">our online catalogue</a> which holds information on our collection. Currently, there are over 8000 items in our online catalogue and the number is growing every day. If you have questions or cannot find a particular book, please ask a Librarian.</p>
                                          
                                          <p><strong>How do I access your free e-books?</strong></p>
                                          <p>To download free e-books from our <a href="http://www.zodml.org/e-library/" target="_blank">e-library</a>, simply sign up and you are free to read as many books as you want!</p>
                                          
                                          <p><b>How can I find out more about ZODML (your projects, updates on your work etc)?</b><br />
                                            At the top-right of every page on this website is a search bar which you can use to find books in our catalogue or other information such as:</p>
                                          
                                          <ul>
                                            <li>Information on the Main Library operations</li>
                                            <li>Past and current projects</li>
                                            <li>News from the library</li>
                                            <li>Blog posts</li>
                                          </ul>
                                      </div>
                                       
                         			</div>
                                    <p>&nbsp;</p>
                                    <p>&nbsp;</p>
                           </td>
                           <td width="297" valign="top">         
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
<?php include("footer.php");?>
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

</body>
</html>