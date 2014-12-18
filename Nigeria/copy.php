<?php

ini_set("display_errors", "off");

$one = $_POST['one'];
$two = $_POST['two'];
$three = $_POST['three'];
$four = $_POST['four'];
$five = $_POST['five'];
$six = $_POST['six'];
$date2 = date('Y-m-d');
$time2 = date('H:i:s');
		 
		 
		  include("scripts/config.php");
	$sqlcopy = mysql_query("INSERT INTO add_articles(name,email,title,category,contents,source,date,time) VALUES('$one','$two','$three','$four','$five','$six','$date2','$time2')");
	
	if($sqlcopy){
	echo "Your Article has been submitted, Thank you!!!";
	}else{
		echo "There was an error uploading the file, please try again...";
	}
	
	

//Sending to email
$to = "editorial@zodml.org";
$message .="Details of Submit an Article\r\n\r\nName: ".$one."\r\n\r\nEmail: ".$two."\r\n\r\nTitle: ".$three."\r\n\r\nCategory: ".$four;
// create email headers
$headers = 'From: '.$two."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($to, $one,$message, $headers);

//auto response
$from_email ="editorial@zodml.org";
$respond_subject = "Add Article to Discover Nigeria section";
$respond_message = "Thank you for submitting an article for ZODML’s Discover Nigeria section. We depend on efforts such as yours to develop quality content and resources.\r\n \r\nOur team of editors will review your article to determine if it meets our requirements and will follow up with you directly regarding its status. If you have any questions, please email editorial@zodml.org. \r\n \r\nRegards \r\n \r\nFrom ZODML Team";
 // create email headers
$headers = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($one, $respond_subject,$respond_message, $headers); 



?>