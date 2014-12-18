<?php
ini_set("display_errors", "off");
include("scripts/config.php");

//captcha start
require_once('recaptchalib.php');
  $privatekey = "6LeaNe0SAAAAAH0pLWCU2isfUyLk87vkWLbS2KwS";
  $resp = recaptcha_check_answer ($privatekey,
                                $_SERVER["REMOTE_ADDR"],
                                $_POST["recaptcha_challenge_field"],
                                $_POST["recaptcha_response_field"]);

 

$name=(mysql_real_escape_string(strip_tags(trim(strtoupper($_POST['add_name'])))));
$email=(mysql_real_escape_string(strip_tags(trim(strtolower($_POST['add_email'])))));
$title=(mysql_real_escape_string(strip_tags(trim(ucfirst($_POST['add_title'])))));
$category=($_POST['add_category']);
$content=(mysql_real_escape_string((strip_tags(trim($_POST['five'])))));
$source=(mysql_real_escape_string((strip_tags(trim($_POST['add_content2'])))));
$date=date('Y-m-d');
$time = date('H:i:s');

//code for email formatting
$result=ereg("^[^@ ]+@[^@ ]+\.[^@ ]+$",$email,$trashed);

//Code to query out the existing title in the database
$sqlcontrolywm="select title from add_articles where title='$title'";
$querycontrolywm=mysql_query($sqlcontrolywm);
	 $rowcontrolywm=mysql_fetch_array($querycontrolywm); 
	 $gettitle=$rowcontrolywm['title'];
	
	//code to query last row in the database before the insertion 
 $sqlcontrol="select id from add_articles order by id desc limit 1";
$querycontrol=mysql_query($sqlcontrol);
	 $rowcontrol=mysql_fetch_array($querycontrol); 
	 $getd=$rowcontrol['id']; 
	 
	 //variable for new row id
	 $sumgetd = ($getd + 1);
//condition statement for action incase the processing page is been loaded directly
if (!isset ($_POST['stepone']))
{
	$messag="CLICK SUBMIT BUTTON TO CARRY OUT THE PROCESS";
	include("add-article.php");
	exit();
}


/*
***---------------------------------------------------------------------------------------------------------------------****

*********----------------------------------------FIRST PART OF THE CODE -------------------------------------------------------****

               WHEN THE CONTENT IS NOT EMPTY

*****----------------------------------------------------------------------------------------------------------------------****

*/


//code to process the form
if (isset ($_POST['stepone']) && ($content!=''))
{
	//To ensure that the field name is not left empty
	if($name=='')
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR NAME </div>";
		include("add-article.php");
		exit();
	}
	//To ensure that  the e-mail field is not left empty
	elseif ($email=='')
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR E-MAIL ADDDRESS </div>";
		include("add-article.php");
		exit();
	}
	//To validate email address follow the standard format 
	elseif (!$result)
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER A VALID E-MAIL  </div> ";
		include("add-article.php");
		exit();
	}
	//To ensure that the title field is not left empty
	elseif ($title=='')
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE YOUR ARTICLE TITLE </div>";
		include("add-article.php");
		exit();
	}
	//To avoid duplicity in the submission
	elseif ($title == $gettitle)
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:SORRY YOU CANNOT SUBMIT THE SAME ARTICLE TWICE, THANK YOU </div>";
		include("add-article.php");
		exit();
	}
	//To ensure that the category group is not empty
	elseif ($category=='')
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'> ATTENTION:PLEASE SELECT YOUR ARTICLE CATEGORY </div>";
		include("add-article.php");
		exit();
	}
	//To ensure that the source field in not ommitted or left empty
		elseif ($source=='')
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR ARTICLE SOURCE(S) </div>";
		include("add-article.php");
		exit();
	}
		
	//To make sure that the page is not submit without necessary attachment or document in both sense
	elseif (($_FILES['add_pix1']['tmp_name']=='') && ($content==''))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION: YOUR MUST UPLOAD OR PASTE DOCUMENT </div>";
		include("add-article.php");
		exit();
	}
	//To make sure that the copy and paste section is not use at the same time with attached file section
	elseif (($_FILES['add_pix1']['tmp_name']!='') && ($content!=''))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION : YOU CAN EITHER UPLOAD OR PASTE THE DOCUMENT BUT NOT THE TWO AT THE SAME TIME </div>";
		include("add-article.php");
		exit();
	}
	//To validate file uploaded is word document file
	elseif (($_FILES['add_pix1']['tmp_name']!='') && (!ereg('word',$_FILES['add_pix1']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:THE FILE MUST BE IN WORD DOCUMENT FORMAT (.doc or .docx)";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix2']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix2']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN FIRST PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix3']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix3']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN SECOND PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix4']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix4']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN THIRD PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	elseif  (($_FILES['add_pix5']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix5']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN FOURTH PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix6']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix6']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN FIFTH PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	//To check for the file size (max of 25MB)
	elseif (($_FILES['add_pix1']['tmp_name']!='') && ($_FILES['add_pix1']['size']>25000000))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:FILE TOO HEAVY </div>";
		include("add-article.php");
		exit();
	}
	//To check the captcha
	elseif (!$resp->is_valid)
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION: INCORRECT-CAPTCHA</div>";
		include("add-article.php");
		exit();
	}
	else
	{
		$filename=$_FILES['add_pix1']['name'];
		$temp=$_FILES['add_pix1']['tmp_name'];
		$destination='images/'.$filename;
		move_uploaded_file($temp,$destination);
		
		$filename2=$_FILES['add_pix2']['name'];
		$temp=$_FILES['add_pix2']['tmp_name'];
		$destination2='images/'.$filename2;
		move_uploaded_file($temp,$destination2);
		
		$filename3=$_FILES['add_pix3']['name'];
		$temp=$_FILES['add_pix3']['tmp_name'];
		$destination3='images/'.$filename3;
		move_uploaded_file($temp,$destination3);
		
		$filename4=$_FILES['add_pix4']['name'];
		$temp=$_FILES['add_pix4']['tmp_name'];
		$destination4='images/'.$filename4;
		move_uploaded_file($temp,$destination4);
		
		$filename5=$_FILES['add_pix5']['name'];
		$temp=$_FILES['add_pix5']['tmp_name'];
		$destination5='images/'.$filename5;
		move_uploaded_file($temp,$destination5);
		
		$filename6=$_FILES['add_pix6']['name'];
		$temp=$_FILES['add_pix6']['tmp_name'];
		$destination6='images/'.$filename6;
		move_uploaded_file($temp,$destination6);
		
		$q="INSERT INTO add_articles(name, email, title, category, source, pictureone, picturetwo, picturethree, picturefour, picturefive, picturesix, date, time,contents 
) VALUES('$name','$email', '$title', '$category','$source','$filename','$filename2','$filename3','$filename4','$filename5','$filename6','$date','$time', '$content')";


$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>CONGRATULATION: ARTICLE SUBMITTED SUCCESSFULLY </div>";



    //mail to the editorial unit
$content_to_email ="editorial@zodml.org";
$content_subject = "Article to Discover Nigeria";
$content_msge = 'NAME: '.$name."\r\n".
"\r\n" .
'EMAIL: '.$email."\r\n" .
"\r\n" .
'TITLE: '.$title."\r\n" .
"\r\n" .
'CATEGORY: '.$category."\r\n" .
"\r\n" .
'SOURCE: '.$source."\r\n" .
"\r\n" .
'ATTACHED PICTURE: Please Click On This Link - ' .'"http://www.zodml.org/Nigeria/add-article-view.php?id='.$sumgetd.'"'."\r\n" .
"\r\n" .
'CONTENT: '.$content."\r\n";




 // email headers
$headerss = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($content_to_email, $content_subject,$content_msge, $headerss); 



//auto response
$from_email ="editorial@zodml.org";
$respond_subject = "Add Article to Discover Nigeria section";
$respond_message = "Thank you for submitting an article for ZODML’s Discover Nigeria section. We depend on efforts such as yours to develop quality content and resources.\r\n \r\nOur team of editors will review your article to determine if it meets our requirements and will follow up with you directly regarding its status. If you have any questions, please email editorial@zodml.org. \r\n \r\nRegards \r\n \r\nFrom ZODML Team";
 // create email headers
$headerd = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headerd); 


		$r=mysql_query($q) or die(mysql_error());
		if($r)
		{
		
		//use header so that processes doesnt rerun
		header("location:add-article.php?mes=CONGRATULATION: ARTICLE SUBMITTED SUCCESSFULLY");
		exit();	
	
		} 
	} 
}

/*
***---------------------------------------------------------------------------------------------------------------------****

*********----------------------------------------SECOND PART OF THE CODE -------------------------------------------------------****

               WHEN THE CONTENT IS EMPTY

*****----------------------------------------------------------------------------------------------------------------------****

*/

if (!isset ($_POST['stepone']) && ($content==''))
{
	$messag="CLICK SUBMIT BUTTON TO CARRY OUT THE PROCESS";
	include("add-article.php");
	exit();
}
if (isset ($_POST['stepone']))
{
	//To ensure that the field name is not left empty
	if($name=='')
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR NAME </div>";
		include("add-article.php");
		exit();
	}
	//To ensure that  the e-mail field is not left empty
	elseif ($email=='')
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR E-MAIL ADDDRESS </div>";
		include("add-article.php");
		exit();
	}
	//To validate email address follow the standard format 
	elseif (!$result)
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER A VALID E-MAIL  </div> ";
		include("add-article.php");
		exit();
	}
	//To ensure that the title field is not left empty
	elseif ($title=='')
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE YOUR ARTICLE TITLE </div>";
		include("add-article.php");
		exit();
	}
	//To avoid duplicity in the submission
	elseif ($title == $gettitle)
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:SORRY YOU CANNOT SUBMIT THE SAME ARTICLE TWICE, THANK YOU </div>";
		include("add-article.php");
		exit();
	}
	//To ensure that the category group is not empty
	elseif ($category=='')
	{
		$messag=" <div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'> ATTENTION:PLEASE SELECT YOUR ARTICLE CATEGORY </div>";
		include("add-article.php");
		exit();
	}
	//To ensure that the source field in not ommitted or left empty
		elseif ($source=='')
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:PLEASE ENTER YOUR ARTICLE SOURCE(S) </div>";
		include("add-article.php");
		exit();
	}
		
	//To make sure that the page is not submit without necessary attachment or document in both sense
	elseif (($_FILES['add_pix1']['tmp_name']=='') && ($content==''))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION: YOU MUST UPLOAD OR PASTE DOCUMENT </div>";
		include("add-article.php");
		exit();
	}
	//To make sure that the copy and paste section is not use at the same time with attached file section
	elseif (($_FILES['add_pix1']['tmp_name']!='') && ($content!=''))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION : YOU CAN EITHER UPLOAD OR PASTE THE DOCUMENT BUT NOT THE TWO AT THE SAME TIME  </div>";
		include("add-article.php");
		exit();
	}
	//To validate file uploaded is word document file
	elseif (($_FILES['add_pix1']['tmp_name']!='') && (!ereg('word',$_FILES['add_pix1']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:THE FILE MUST BE IN WORD DOCUMENT FORMAT (.doc or .docx)</div>";
		include("add-article.php");
		exit();
	}
	
	
	elseif  (($_FILES['add_pix2']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix2']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN FIRST PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix3']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix3']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN SECOND PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix4']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix4']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN THIRD PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	elseif  (($_FILES['add_pix5']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix5']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN FOURTH PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	elseif  (($_FILES['add_pix6']['tmp_name']!='') && (!ereg('image',$_FILES['add_pix6']['type'])))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:IMAGE FILE MUST BE ATTACH IN FIFTH PIX (.jpg or .png or .gif)</div>";
		include("add-article.php");
		exit();
	}
	
	//To check for the file size (max of 25MB)
	elseif (($_FILES['add_pix1']['tmp_name']!='') && ($_FILES['add_pix1']['size']>25000000))
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION:FILE TOO HEAVY </div>";
		include("add-article.php");
		exit();
	}
	//To check the captcha
	elseif (!$resp->is_valid)
	{
		$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>ATTENTION: INCORRECT-CAPTCHA</div>";
		include("add-article.php");
		exit();
	}
	else
	{
		//code for uploading pictures and document
		$filename=$_FILES['add_pix1']['name'];
		$temp=$_FILES['add_pix1']['tmp_name'];
		$destination='images/'.$filename;
		move_uploaded_file($temp,$destination);
		
		$filename2=$_FILES['add_pix2']['name'];
		$temp=$_FILES['add_pix2']['tmp_name'];
		$destination2='images/'.$filename2;
		move_uploaded_file($temp,$destination2);
		
		$filename3=$_FILES['add_pix3']['name'];
		$temp=$_FILES['add_pix3']['tmp_name'];
		$destination3='images/'.$filename3;
		move_uploaded_file($temp,$destination3);
		
		$filename4=$_FILES['add_pix4']['name'];
		$temp=$_FILES['add_pix4']['tmp_name'];
		$destination4='images/'.$filename4;
		move_uploaded_file($temp,$destination4);
		
		$filename5=$_FILES['add_pix5']['name'];
		$temp=$_FILES['add_pix5']['tmp_name'];
		$destination5='images/'.$filename5;
		move_uploaded_file($temp,$destination5);
		
		$filename6=$_FILES['add_pix6']['name'];
		$temp=$_FILES['add_pix6']['tmp_name'];
		$destination6='images/'.$filename6;
		move_uploaded_file($temp,$destination6);
		
		$q="INSERT INTO add_articles(name, email, title, category, source, pictureone, picturetwo, picturethree, picturefour, picturefive, picturesix, date, time,contents 
) VALUES('$name','$email', '$title', '$category','$source','$filename','$filename2','$filename3','$filename4','$filename5','$filename6','$date','$time', '$content')";


$messag="<div style='border: 1px solid #D6D6D6;background-color:#FFCD9B;padding: 10px;width: 550px;font-family:Lucida Sans Unicode, Lucida Grande, sans-serif;font-size:13px;-moz-border-radius:5px;-webkit-border-radius:5px;margin:10px 0px 10px 10px;'>CONGRATULATION: ARTICLE SUBMITTED SUCCESSFULLY </div>";



    $filetype=$_FILES["add_pix1"]["type"];
	

     
 
        $message= '
   
   
            <table cellspacing="0" cellpadding="8" border="0" width="800">
            <tr>
                <td colspan="2"></td>
            </tr>
            <tr >
                <td style="font-family:Verdana, Arial; font-size:11px; "><strong>NAME</strong></td>
                <td style="font-family:Verdana, Arial; font-size:11px; ">'.$name.'</td>
            </tr>
            
            <tr >
              <td style="font-family:Verdana, Arial; font-size:11px; "><strong>EMAIL</strong></td>
              <td style="font-family:Verdana, Arial; font-size:11px; ">'.$email.'</td>
              </tr>
           
            <tr >
              <td style="font-family:Verdana, Arial; font-size:11px; "><strong>TILE</strong></td>
              <td style="font-family:Verdana, Arial; font-size:11px; ">'.$title.'</td>
              </tr>
              
            <tr >
              <td style="font-family:Verdana, Arial; font-size:11px; "><strong>CATEGORY</strong></td>
              <td style="font-family:Verdana, Arial; font-size:11px; ">'.$category.'</td>
              </tr>
                          <tr >
              <td style="font-family:Verdana, Arial; font-size:11px; "><strong>SOURCE</strong></td>
              <td style="font-family:Verdana, Arial; font-size:11px; ">'.$source.'</td>
              </tr>
                
				<tr>
              <td style="font-family:Verdana, Arial; font-size:11px; "><strong>ATTACHED PICTURE: Please Click On This Link - </strong></td>
              
			 <td>'.'www.zodml.org/Nigeria/add-article-view.php?id='. $sumgetd.'</td>
			  
			 
              </tr>
           
         </table>


 

'; 

//<td>'.'www.zodml.org/Nigeria/add-article.php_px.php?name='.$title.'</td>


 // MAIL SUBJECT

    $subject = "ARTICLE TO DISCOVER NIGERIA";
   
    // TO MAIL ADDRESS
   
   
    $to="editorial@zodml.org";



    // MAIL HEADERS with attachment

    $fp = fopen($destination, "rb");
    $file = fread($fp, filesize($destination));
    $file = chunk_split(base64_encode($file));
	
    $num = md5(time());
   
        //Normal headers

    $headers  = 'From: '.$email."\r\n".
       $headers  .= "MIME-Version: 1.0\r\n";
       $headers  .= "Content-Type: multipart/mixed; ";
       $headers  .= "boundary=".$num."\r\n";
       $headers  .= "--$num\r\n";

        // This two steps to help avoid spam   

    $headers .= "Message-ID: <".$now." TheSystem@".$_SERVER['SERVER_NAME'].">\r\n";
    $headers .= "X-Mailer: PHP v".phpversion()."\r\n";         

        // With message
       
    $headers .= "Content-Type: text/html; charset=iso-8859-1\r\n";
       $headers .= "Content-Transfer-Encoding: 8bit\r\n";
       $headers .= "".$message."\n";
       $headers .= "--".$num."\n"; 

        // Attachment headers

    $headers  .= "Content-Type:".$filetype." ";
       $headers  .= "name=\"".$filename."\"r\n";
       $headers  .= "Content-Transfer-Encoding: base64\r\n";
       $headers  .= "Content-Disposition: attachment; ";
       $headers  .= "filename=\"".$filename."\"\r\n\n";
       $headers  .= "".$file."\r\n";
       $headers  .= "--".$num."--";

   
   
    // SEND MAIL
       
       @mail($to, $subject, $message, $headers);
	   
	   fclose($fp);


//auto response
$from_email ="editorial@zodml.org";
$respond_subject = "Add Article to Discover Nigeria section";
$respond_message = "Thank you for submitting an article for ZODML’s Discover Nigeria section. We depend on efforts such as yours to develop quality content and resources.\r\n \r\nOur team of editors will review your article to determine if it meets our requirements and will follow up with you directly regarding its status. If you have any questions, please email editorial@zodml.org. \r\n \r\nRegards \r\n \r\nFrom ZODML Team";
 // create email headers
$headerd = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headerd); 


		$r=mysql_query($q) or die(mysql_error());
		if($r)
		{
		
		//use header so that processes doesnt rerun
		header("location:add-article.php?mes=CONGRATULATION: ARTICLE SUBMITTED SUCCESSFULLY");
		exit();	
	
		} 
	} 
}
?>