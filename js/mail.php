<?php
	$mail = $_POST['mail'];
	$name = $_POST['name'];
	//$subject = $_POST['subject'];
	//$text = $_POST['text'];
	$category = $_POST['category'];
	
 $to = "speaktoehis77@gmail.com";
 $message .=" You received  a mail from ".$mail;
 //$message .=" Text of the message : ".$text;
 $message .=" category : ".$category;
	//$headers = "From: " . $name . " <" . $mail . ">";
 if(mail($to,$message)){
	
	echo "email sent successfully";
} 
else{ 
	echo "There are some errors to send the mail, verify your server options";
}
?>