<?php

error_reporting(0);
//captcha start
require_once('recaptchalib.php');
  $privatekey = "6LeaNe0SAAAAAH0pLWCU2isfUyLk87vkWLbS2KwS";
  $resp = recaptcha_check_answer ($privatekey,
                                $_SERVER["REMOTE_ADDR"],
                                $_POST["recaptcha_challenge_field"],
                                $_POST["recaptcha_response_field"]);


//end of captcha
session_start();
$mustid=$_SESSION['must'];  //not use for now

include("../db.php");

$name=(mysql_real_escape_string(strip_tags(trim(strtoupper($_POST['name'])))));
$email=(mysql_real_escape_string(strip_tags(trim(strtolower($_POST['email'])))));
$comment=(mysql_real_escape_string(strip_tags(trim($_POST['comment']))));
$bookid = (mysql_real_escape_string(strip_tags(trim($_POST['numb']))));
$now = new DateTime(null, new DateTimeZone('Africa/Lagos'));
$datecommment=$now->format('Y-m-d H:i:s');

$sey=$_GET['code'];

$name = str_replace( '_', '_', $name );  

$result=ereg("^[^@ ]+@[^@ ]+\.[^@ ]+$",$email,$trashed);

if (!isset ($_POST['comment']))
{
	
	include("nigeria-comment.php");
	exit();
}

if (isset ($_POST['comment']))
{
	
	if ($email=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER AN E-MAIL ADDRESS  </div> ";
		include("nigeria-comment.php");
		exit();
	}
	
	elseif(!$result)
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER A VALID EMAIL ADDRESS </div> ";
		include("nigeria-comment.php");
		exit();
	}
	
	elseif($name=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER YOUR NAME  </div> ";
		include("nigeria-comment.php");
		exit();
	}

	elseif($comment=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER YOUR COMMENT  </div> ";
		include("nigeria-comment.php");
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
		if(isset($_GET['code']))
{
	$code = $_GET['code'];
}
		
		$parentreplycode = $name.rand(1,9).rand(1,9).rand(1,9);
		
		$q="INSERT INTO `articlescomment` ( `Bookid` , `Name` , `Email` , `Comment`, `ParentReply` , `ChildReply`, `DateComment` )
VALUES ('$bookid','$name','$email','$comment','$parentreplycode','','$datecommment')";
		$r=mysql_query($q)or die (mysql_error());
		
		include("scripts/config.php");
		
		$sqlcontrol="select title from articles where id = '$bookid'";
$querycontrol=mysql_query($sqlcontrol);
	 $rowcontrol=mysql_fetch_array($querycontrol); 
	 $title=$rowcontrol['title'];  
	 
	 $sqlcontrol4="select url from articles where id = '$bookid'";
$querycontrol4=mysql_query($sqlcontrol4);
	 $rowcontrol4=mysql_fetch_array($querycontrol4); 
	 $url=$rowcontrol4['url'];  
	 
	 
	 //mail to the editorial unit or commnent reviewing unit
$content_to_email ="editorial@zodml.org";
$content_subject = "Comment on Discover Nigeria Article";
$content_msge = 'NAME: '.$name."\r\n".
"\r\n" .
'EMAIL: '.$email."\r\n" .
"\r\n" .
'ARTICLE TITLE: '.$title."\r\n" .
"\r\n" .
'ARTICLE LINK: '.$url."\r\n" .
"\r\n" .
'COMMENT: '.$comment."\r\n" .





 // email headers
$headerss = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($content_to_email, $content_subject,$content_msge, $headerss); 

//auto response
$from_email ="editorial@zodml.org";
$respond_subject = "ZODML DISCOVER NIGERIA ARTICLE";
$respond_message = "Thank you for your comment on  ZODML Discover Nigeria. \r\n \r\nRegards \r\n \r\nFrom ZODML Team \r\n \r\nZaccheus Onumba Dibiaezue Memorial Libraries (ZODML - www.zodml.org)\r\n \r\n 196 Awolowo Road, Ikoyi, Lagos, Nigeria. \r\n \r\n Community Library: (234)-1-4631787 \r\n \r\n Corporate Office: (234)-1-4605700 \r\n \r\n Copyright © ZODML 2013 All Rights Reserved.";
 // create email headers
$headerd = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headerd); 

	 
		if($r)
		{
			
		session_unset();
			//header("location: must-read.php?id=".$must);
		header("Refresh: 1; URL=nigeria-comment.php?msg=THANK YOU");
		
		
		?>
            
            <script>
window.opener.location.reload(true);
    
   
        
      
    </script>
            
            <?php
			exit();
			
			
		}
	} 
}

?>