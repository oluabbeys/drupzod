<?php
	ini_set("display_errors", "off");
     include_once("Nigeria/scripts/config.php");
	$name = $_POST['name'];
	$lname = $_POST['lname'];
	$dob = $_POST['dob'];
	$address1 = $_POST['address1'];
	$occupation = $_POST ['occupation'];
	$address2 = $_POST['address2'];
	$mail = $_POST['mail'];
	$mob = $_POST['mob'];
	$apply = $_POST['apply'];
	$hear = $_POST['hear'];
	$nameofp = $_POST['nameofp'];
	$addressofp = $_POST['addressofp'];
	$mailofp = $_POST['mailofp'];
	$mobofp = $_POST['mobofp'];
	$accept = $_POST['accept'];
	$code = str_shuffle("zodml12345");
	//
//	if (isset($_POST['category'])){
//		$category = implode(',', $_POST['category']);
//	}  



 $to = "members@zodml.org";
 $message .="Details of new member joining the library\r\n\r\nFirst Name: ".$name."\r\n\r\nLast Name: ".$lname."\r\n\r\nDate of birth: ".$dob."\r\n\r\nHome Address: ".$address1."\r\n\r\noccupation: ".$occupation."\r\n\r\nOffice Adress: ".$address2."\r\n\r\nEmail: ".$mail."\r\n\r\nMobile Number: ".$mob."\r\n\r\nJoining as: ".$apply."\r\n\r\nHow did you find us: ".$hear."\r\n\r\nLibrary code: ".$code."\r\n\r\n\r\n\r\nDetails if below 18 years of age\r\n\r\nName of Parent/Guardian: ".$nameofp."\r\n\r\nAddress of Parent/Guardian: ".$addressofp."\r\n\r\nEmail of Parent/Guardian: ".$mailofp."\r\n\r\nMobile Number of Parent/Guardian: ".$mobofp;

// $message .=" Your preferred category : ".$newsletter;
 
 // create email headers
$headers = 'From: '.$mail."\r\n".
'Reply-To: '.$mail."\r\n" .
'X-Mailer: PHP/' . phpversion();
//mail($to, $name,$message, $headers); 
	
 if(mail($to, $name, $message, $headers)){
	
	echo "Thank you for joining ZODML, Check your email for the next step";
	
} 
else{ 
	echo "There are some errors to send the mail, verify your server options";
}

//auto response
$from_email ="members@zodml.org";
$respond_subject = "Joining Z.O.D.M. Libraries";
$respond_message = "Thank you for filling in the ZODML Community Library card application form on our website zodml.org.\r\n \r\nYour library code is : ".$code." \r\n \r\nPlease come to the Community Library at 196B Awolowo Road, Ikoyi, Lagos with two passport photographs, your code and the N200 administrative fee to complete the application process. If you wish to borrow items from the Library, you will need to apply for a borrower’s ticket in person. If you have any questions, please email librarian@zodml.org.\r\n \r\nRegards, \r\n \r\n The ZODML Team";
 // create email headers
$headers = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($mail, $respond_subject,$respond_message, $headers); 

?>