<?php
	$email2 = $_POST['email2'];
	$name2 = $_POST['name2'];
	$school2 = $_POST['school2'];
	$course2 = $_POST['course2'];
	$helping2 = $_POST['helping2'];
	//
//	if (isset($_POST['category'])){
//		$category = implode(',', $_POST['category']);
//	}
 $to = "info@zodml.org";
 $subject2 = "Message from our Internship-volunteer form";
 //$message .=" You received  a mail from ".$mail;

 $message2 .=$name2."\r\n\r\n School: ".$school2."\r\n\r\n Course:".$course2."\r\n\r\n Why do I want to help:".$helping2;
 
 // create email headers
$headers = 'From: '.$email2."\r\n".
'Reply-To: '.$email2."\r\n" .
'X-Mailer: PHP/' . phpversion();
//mail($to, $name,$message, $headers); 
	
 mail($to, $subject2, $message2, $headers);
 
 if(mail){
	
	echo "Your details has been sent";
} 
else{ 
	echo "There are some errors to send the mail, verify your server options";
}

//auto response
$from_email2 ="info@zodml.org";
$respond_subject2 = "Interested Volunteers";
$respond_message2 = "Thank you for filling the volunteer's form on our website. We will get in touch with you soon.\r\n Regards \r\n \r\n From the ZODML Team";
 // create email headers
$headers = 'From: '.$from_email2."\r\n".
'Reply-To: '.$from_email2."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email2, $respond_subject2,$respond_message2, $headers); 

?>