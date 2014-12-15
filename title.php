<?php
//captcha start
require_once('recaptchalib.php');
  $privatekey = "6LeaNe0SAAAAAH0pLWCU2isfUyLk87vkWLbS2KwS";
  $resp = recaptcha_check_answer ($privatekey,
                                $_SERVER["REMOTE_ADDR"],
                                $_POST["recaptcha_challenge_field"],
                                $_POST["recaptcha_response_field"]);

  if (!$resp->is_valid) {
    // What happens when the CAPTCHA was entered incorrectly
    die ("The reCAPTCHA wasn't entered correctly. Go back and try it again." .
         "(reCAPTCHA said: " . $resp->error . ")");
  } else {
    // Your code here to handle a successful verification
  }

//end of captcha
// Define some constants
define( "RECIPIENT_NAME", "ZODML" );
define( "RECIPIENT_EMAIL", "librarian@zodml.org" );
define( "EMAIL_SUBJECT", "Recommend a Book Title" );

// Read the form values
//$success = false;
$senderName = isset( $_POST['senderName2'] ) ? preg_replace( "/[^\.\-\' a-zA-Z0-9]/", "", $_POST['senderName2'] ) : "";
$senderEmail = isset( $_POST['senderEmail2'] ) ? preg_replace( "/[^\.\-\_\@a-zA-Z0-9]/", "", $_POST['senderEmail2'] ) : "";
$message = isset( $_POST['message2'] ) ? preg_replace( "/(From:|To:|BCC:|CC:|Subject:|Content-Type:)/", "", $_POST['message2'] ) : "";

// If all values exist, send the email
if ( $senderName && $senderEmail && $message ) {
  $recipient = RECIPIENT_NAME . " <" . RECIPIENT_EMAIL . ">";
  $headers = "From: " . $senderName . " <" . $senderEmail . ">";
  $success = mail( $recipient, EMAIL_SUBJECT, $message, $headers );
}

//auto response
$from_email ="librarian@zodml.org";
$respond_subject = "Recommend a Book Title on ZODML Website";
$respond_message = "Your recommendation has been received.  \r\n \r\n The ZODML Team.";
 // create email headers
$headers = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($senderEmail, $respond_subject,$respond_message, $headers); 



// Return an appropriate response to the browser
if ( isset($_GET["ajax"]) ) {
  echo $success ? "success" : "error";
} else {
?>
<html>
  <head>
    <title>Thanks!</title>
  </head>
  <body>
  <?php if ( $success ) echo "<p>Thanks for Recommending a Title!</p>" ?>
  <?php if ( !$success ) echo "<p>There was a problem sending your message. Please try again.</p>" ?>
  <p>Click your browser's Back button to return to the page.</p>
  </body>
</html>
<?php
}
?>


