<?php
ini_set('display_errors','off');
if(isset($_GET['code']))
{
	$news = $_GET['code'];
}

if ($_POST['parse_var'] == "new"){

$name = $_POST['name'];
$your_email = $_POST['ur_email'];
$friend_email = $_POST['friend_email'];

include("Nigeria/scripts/config.php");
$sql = mysql_query("SELECT * FROM newsletterstories WHERE hash='$news'");

$row = mysql_fetch_array($sql);

$topic = $row['topic'];
$story = $row['story'];
$hash = $row['hash'];

$subject = "ZODML Newsletter Article";
$content = "This is a message from ZODML sent to you by:\r\n\r\n".''.$name."\r\n\r\n".$your_email.''."\r\n\r\nI thought you might enjoy this article from ZODML's Newsletter Article\r\n\r\n".''."$topic - http://zodml.org/newsletter-news.php?news=$news";
$headers = "From:".''.$your_email;
'Reply-To: '.$your_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($friend_email,$subject,$content,$headers);

if(mail){
	$msg = "Email has been sent";
}
else{
	$msg = "Problem connecting to server, please try again";
}



}
//$sql = mysql_query("SELECT * FROM entries WHERE id ='$code'");
//
//$row = mysql_fetch_array($sql);

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<title>ZODML .::: Email a friend</title>
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<!--<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>-->
<!--<script type="text/javascript" src="email_a_friend.js"></script>-->
</head>

<body>
<div id="email_a_friend_form">
<div style="padding:10px; color:#EC9F00; font-size:14px;">Email this Article to a friend</div>
<form method="post" action="send_article.php?code=<?php echo $news ?>" name="new">
<table cellspacing="25">
<tr>
<td><label>Name</label></td>
<td><input type="text" name="name" id="ur_email" /></td>
</tr>
<tr>
<td><label>Your email</label></td>
<td><input type="text" name="ur_email" id="ur_email" /></td>
</tr>
<tr>
<td><label>Friend's email</label></td>
<td><input type="text" name="friend_email" id="friend_email" /></td>
</tr>
<!--<tr>
<td colspan="2"><input type="hidden" name="code" id="code" value="<?php //echo $code; ?>"/></td>
</tr>-->
<tr>
<td colspan="2"><input name="parse_var" type="hidden" value="new" /></td>
</tr>
<tr>
<td colspan="2" align="center"><input type="submit" value="Send" id="submit_friend" /></td>
</tr>
</table>
</form>

<div style="padding:6px; font-size:12px; color:#444; margin:10px 0px 0px 10px; color:#EC9F00;"><?php 
		//this is where the response message will be printed
		 print"$msg";
?></div>

<div id="response2"></div>
</div>
</body>
</html>