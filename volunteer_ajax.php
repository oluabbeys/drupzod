<?php
	$email = $_POST['email'];
	$name = $_POST['name'];
	$skills = $_POST['skills'];
	$roles = $_POST['roles'];
	$help = $_POST['help'];
	//
//	if (isset($_POST['category'])){
//		$category = implode(',', $_POST['category']);
//	}
 $to = "volunteer@zodml.org";
 $subject = "Message from our volunteer form";
 //$message .=" You received  a mail from ".$mail;

 $message .= "Volunteer's Name:".$name."\r\n\r\nWhat I can do:".$skills."\r\n\r\nHow I can help:".$roles."\r\n\r\nWhy do I want to help:".$help;
 
 // create email headers
$headers = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
//mail($to, $name,$message, $headers); 
	
 mail($to,$subject, $message, $headers);
 
	if(mail){
	echo "Your details has been sent";
} 
else{ 
	echo "There are some errors to send the mail, verify your server options";
}

//auto response
$from_email ="volunteer@zodml.org";
$respond_subject = "Interested Volunteers";
$respond_message = "Thank you for filling the Volunteer form on our website. We will get in touch with you soon.\r\n \r\nRegards \r\n \r\n From the ZODML Team";
 // create email headers
$headers = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headers); 

?>