<?php 
ini_set("display_errors", "off");

include_once("function.php");

page_protect();

session_start();



if(!isset($_COOKIE['usernamecookie']) && !isset($_COOKIE['passwordcookie'])){
	
	header("Location: index.php");
	
}

if ($_COOKIE['hashcookie'] != $_GET['user']){
	
	header("Location: menu.php?user=".$_COOKIE['hashcookie']);
}

if(isset($_GET['user']))
{
	$profileid = $_GET['user'];
}



?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Login Panel</title>
<link type="text/css" rel="stylesheet" href="../css/styles.css"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
</head>

<body>
<div id="body_hold">
<!--HEADER-->
                <div id="header2">
                 <div id="subheader2">
                	<font size="+2"><a href="logout_proc.php?user=<?php echo $profileid; ?>">Log out</a></font>
                    </div>
                </div>
<!--END OF HEADER-->

<div id="index_content_holder">
<h2>Click on the page you would like to go</h2>

<table cellspacing="30">
<tr>
<td><a href="correction.php" target="_blank">Correction page</a></td>
</tr>
<tr>
<td><a href="edited.php" target="_blank">Edited books page</a></td>
</tr>
<!--<tr>
<td><a href="edit.php?user=<?php //echo $profileid; ?>">Edit page</a></td>
</tr>-->
<!--<tr>
<td><a href="editpix.php" target="_blank">Edit picture page</a></td>
</tr>-->
<!--<tr>
<td><a href="editpix2.php?user=<?php //echo $profileid; ?>">Edit picture2 page</a></td>
</tr>-->
<!--<tr>
<td><a href="editvalue.php" target="_blank">Edit value page</a></td>
</tr>-->
<!--<tr>
<td><a href="editvalue2.php?user=<?php //echo $profileid; ?>">Edit value2 page</a></td>
</tr>-->
<tr>
<td><a href="search.php" target="_blank">Search page</a></td>
</tr>
<tr>
<td><a href="upload_book_manually.php" target="_blank">Upload books manually</a></td>
</tr>

</table>
</div>
</div>
</body>
</html>