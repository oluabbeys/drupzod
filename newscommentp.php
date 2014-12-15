<?php
//captcha start
require_once('recaptchalib.php');
  $privatekey = "6LeaNe0SAAAAAH0pLWCU2isfUyLk87vkWLbS2KwS";
  $resp = recaptcha_check_answer ($privatekey,
                                $_SERVER["REMOTE_ADDR"],
                                $_POST["recaptcha_challenge_field"],
                                $_POST["recaptcha_response_field"]);

//end of captcha
session_start();
$cu=$_SESSION['book'];
include("db.php");
$ucode = $_GET['u'];

$name=(mysql_real_escape_string(strip_tags(trim(strtoupper($_POST['name'])))));
$email=(mysql_real_escape_string(strip_tags(trim(strtolower($_POST['email'])))));
$comment=(mysql_real_escape_string(strip_tags(trim($_POST['comment']))));

$result=ereg("^[^@ ]+@[^@ ]+\.[^@ ]+$",$email,$trashed);

if (!isset ($_POST['comment']))
{
	
	include("newscomment.php");
	exit();
}

if (isset ($_POST['comment']))
{
	
	if ($email=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 350px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER AN E-MAIL ADDRESS  </div> ";
		include("newscomment.php");
		exit();
	}
	
	elseif(!$result)
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 350px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER A VALID EMAIL ADDRESS </div> ";
		include("newscomment.php");
		exit();
	}
	
	elseif($name=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 350px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR NAME  </div> ";
		include("newscomment.php");
		exit();
	}

	elseif($comment=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 350px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR COMMENT  </div> ";
		include("newscomment.php");
		exit();
	}
	
	elseif(!$resp->is_valid)
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 350px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:The CAPTCHA wasn't entered correctly. Please try again.  </div> ";
		include("newscomment.php");
		exit();
	}
	
	
	else
	{
		
		$q="INSERT INTO `bookscomment` ( `Bookid` , `Name` , `Email` , `Comment` , `CommentCode`  )
VALUES ('','$name','$email','$comment','$cu')";
		$r=mysql_query($q)or die (mysql_error());
		
		$sqlcontrol="select topic from newsletterstories where hash = '$cu'";
$querycontrol=mysql_query($sqlcontrol);
	 $rowcontrol=mysql_fetch_array($querycontrol); 
	 $title=$rowcontrol['topic'];  
	 
	 
	 //mail to the editorial unit or commnent reviewing unit
$content_to_email ="editorial@zodml.org";
$content_subject = "Comment on a book from ZODML Newsletter";
$content_msge = 'NAME: '.$name."\r\n".
"\r\n" .
'EMAIL: '.$email."\r\n" .
"\r\n" .
'NEWS LETTER TITLE: '.$title."\r\n" .
"\r\n" .
'COMMENT: '.$comment."\r\n" .





 // email headers
$headerss = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($content_to_email, $content_subject,$content_msge, $headerss); 

//auto response
$from_email ="info@zodml.org";
$respond_subject = "ZODML NEWSLETTER";
$respond_message = "Thank you for your comment on  ZODML News Letter section. \r\n \r\nRegards \r\n \r\nFrom ZODML Team";
 // create email headers
$headerd = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headerd); 

	 
		if($r)
		{
		session_unset();
			//header("location: newsletter-news.php?news=".$cu);
		header("Refresh: 1; URL=newsletter-news.php?news=".$cu);
			exit();
		}
	} 
}
?>