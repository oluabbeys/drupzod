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
error_reporting(0);
session_start();
$mustid=$_SESSION['must'];

include("db.php");

$name=(mysql_real_escape_string(strip_tags(trim(strtoupper($_POST['name'])))));
$email=(mysql_real_escape_string(strip_tags(trim(strtolower($_POST['email'])))));
$comment=(mysql_real_escape_string(strip_tags(trim($_POST['comment']))));
$firstreplyid = (mysql_real_escape_string(strip_tags(trim($_POST['firstreplyid']))));

$now = new DateTime(null, new DateTimeZone('Africa/Lagos'));
$datecommment=$now->format('Y-m-d H:i:s');

$name = str_replace( '_', '_', $name );  

$result=ereg("^[^@ ]+@[^@ ]+\.[^@ ]+$",$email,$trashed);

if (!isset ($_POST['comment']))
{
	
	include("mustcomment-reply.php");
	exit();
}

if (isset ($_POST['comment']))
{
	
	if ($email=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER AN E-MAIL ADDRESS  </div> ";
		include("mustcomment-reply.php");
		exit();
	}
	
	elseif(!$result)
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER A VALID EMAIL ADDRESS </div> ";
		include("mustcomment-reply.php");
		exit();
	}
	
	elseif($name=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER YOUR NAME  </div> ";
		include("mustcomment-reply.php");
		exit();
	}

	elseif($comment=='')
	{
		$message=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 280px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>PLEASE ENTER YOUR COMMENT  </div> ";
		include("mustcomment-reply.php");
		exit();
	}
	
	
	else
	{
		if(isset($_GET['code']))
{
	$code = $_GET['code'];
}
		

		
		$q="INSERT INTO `mustreadcomment` ( `Bookid` , `Name` , `Email` , `Comment`, `ParentReply` , `ChildReply`, `DateComment` )
VALUES ('$mustid','$name','$email','$comment','','$firstreplyid','$datecommment')";
		$r=mysql_query($q)or die (mysql_error());
		
		include_once("db_books.php");
		
		$sqlcontrol="select title from mustread where id = '$mustid'";
$querycontrol=mysql_query($sqlcontrol);
	 $rowcontrol=mysql_fetch_array($querycontrol); 
	 $title=$rowcontrol['title'];  
	 
	 
	 //mail to the editorial unit or commnent reviewing unit
$content_to_email ="editorial@zodml.org";
$content_subject = "Comment on a book from ZODML Must read Book Section";
$content_msge = 'NAME: '.$name."\r\n".
"\r\n" .
'BOOK ID: http://www.zodml.org/must-read.php?id='.$mustid."\r\n" .
"\r\n" .
'EMAIL: '.$email."\r\n" .
"\r\n" .
'BOOK TITLE: '.$title."\r\n" .
"\r\n" .
'COMMENT: '.$comment."\r\n" .





 // email headers
$headerss = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($content_to_email, $content_subject,$content_msge, $headerss); 

//auto response
$from_email ="editorial@zodml.org";
$respond_subject = "ZODML MUST READ";
$respond_message = "Thank you for your comment on  ZODML Must Book section. \r\n \r\nRegards \r\n \r\nFrom ZODML Team\r\n \r\nZaccheus Onumba Dibiaezue Memorial Libraries (ZODML - www.zodml.org)\r\n \r\n 196 Awolowo Road, Ikoyi, Lagos, Nigeria. \r\n \r\n Community Library: (234)-1-4631787 \r\n \r\n Corporate Office: (234)-1-4605700 \r\n \r\n Copyright © ZODML 2013 All Rights Reserved.";
 // create email headers
$headerd = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headerd); 

	 
		if($r)
		{
			
		session_unset();
			//header("location: must-read.php?id=".$must);
		header("Refresh: 1; URL=mustcomment-reply.php?msg=THANK YOU");
		
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