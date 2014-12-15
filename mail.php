<?php
	$mail = $_POST['mail'];
	$name = $_POST['name'];
	$newsletter = $_POST['newsletter'];
	//
//	if (isset($_POST['category'])){
//		$category = implode(',', $_POST['category']);
//	}
 $to = "newsletters@zodml.org";
 $message .=" You received  a mail from ".$mail;

 $message .=" Your preferred category : ".$newsletter;
 
 // create email headers
$headers = 'From: '.$mail."\r\n".
'Reply-To: '.$mail."\r\n" .
'X-Mailer: PHP/' . phpversion();
//mail($to, $name,$message, $headers); 
	
 if(mail($to, $name, $message, $headers)){
	
	echo "Your subscription was successfull";
	
} 
else{ 
	echo "There are some errors to send the mail, verify your server options";
}

//auto response
$from_email ="newsletters@zodml.org";
$respond_subject = "ZODML Newsletter Subscription";
$respond_message = "Thank you for subscribing to ZODML's Newsletter. The Newsletter is published monthly and the most recent edition will be sent to you soon.\r\n \r\n Regards \r\n \r\n From the Newsletter Team";
 // create email headers
$headers = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($mail, $respond_subject,$respond_message, $headers); 

?>