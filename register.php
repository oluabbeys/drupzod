<?php

ini_set("display_errors", "off");

$taskname = stripslashes($_POST['taskname']);
$taskdue = stripslashes($_POST['taskdue']);
$taskcountry = stripslashes($_POST['taskcountry']);
$hash = str_shuffle("zodmlebooks2013");

include("../Nigeria/scripts/config2.php");

$sql = mysql_query("SELECT * FROM ebookuser WHERE email='$taskdue'");

if (mysql_affected_rows() == 0){
	
			$date = date('Y-m-d');
			$time = date('H:i:s');
	
	include("../Nigeria/scripts/config2.php");
	$sql2 = mysql_query("INSERT INTO ebookuser(name, email, country, hash, date, time) VALUES ('$taskname', '$taskdue', '$taskcountry', '$hash', '$date', '$time')");
		if($sql2){
			//echo "Thank you for submitting your details, <a href=\"e-books.php\">click here</a> to continue";
			
			//auto response
			$headers_tag = "ZODML";
			$from_email ="info@zodml.org";
			$respond_subject = "ZODML e-Books catalogue";
			$respond_message = "Thank you for registering on our e-Library page. Monthly updates on new additions to our catalogue will be sent to you. \r\n\r\n Regards \r\n \r\n From the ZODML Team";
			 // create email headers
			$headers = 'From: '.$from_email."\r\n".
			'Reply-To: ' .
			'X-Mailer: PHP/' . phpversion();
			mail($taskdue, $respond_subject,$respond_message, $headers); 
			
			echo "Thank you for submitting your details. You can now login with your email to access our collections of e-books";
			
			

		}else{
			echo "Problem connecting to the server, please try again";
		}
}
else{
	//echo "Your email exists, <a href=\"e-books.php\">click here</a> to continue";
	echo "Your email exists, please log in with your email.";
}




?>