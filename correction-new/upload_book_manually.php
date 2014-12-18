<?php
ini_set('display_errors','off');

if(!isset($_COOKIE['usernamecookie'])){
	
	header("Location: index.php");
	
}

if( !isset($_COOKIE['passwordcookie'])){
	
	header("Location: index.php");
	
}

include_once("connect.php");
if ($_POST['parse_var'] == "new"){
$title = $_POST['title'];
$pagecount = $_POST['pagecount'];
$fullname = $_POST['fullname'];
$names = $_POST['name'];
$summary = $_POST['summary'];
$summary = mysql_escape_string($summary);
$publisher = $_POST['publisher'];
$year = $_POST['year'];
$isbn = $_POST['isbn'];
$subject = $_POST['subject'];
//$coverfront = $_POST['coverfront'];
$genre = $_POST['genre'];
$copies = $_POST['copies'];
$region = $_POST['region'];
$bookcode=str_shuffle("bookcode1234567890");
$clzbookid = str_shuffle("clz12345");

$sqlcreate = mysql_query("INSERT INTO books2(Title,Pagecount,FullName,Names,Summary,Publishers,Year,isbn,Subject,Genre,Copies,Region,clzbookid,Bookcode) VALUES('$title', '$pagecount', '$fullname', '$names', '$summary', '$publisher', '$year','$isbn', '$genre', '$copies', '$region', '$subject', '$clzbookid', '$bookcode')");

 if ($sqlcreate){
            $msg = '<font color="#009900">A new book has been added.</font>';
        } else {
			$msg = '<font color="#FF0000">Problems connecting to server, please try again later.</font>';
		}



}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Upload Books Manually</title>
<link href="../images/favicon.ico" rel="shortcut icon" />
</head>

<body>
<h3 align="center">Fill the form completely before clicking the submit button</h3>
<div style="text-align:center;"><?php print "$msg"; ?></div>
<table align="center" cellspacing="20">
<form action="upload_book_manually.php" method="post">
<tr>
<td width="116"><label>Title</label></td>
<td width="189"><input type="text" name="title" /></td>
</tr>
<tr>
<td><label>Pagecount</label></td>
<td><input type="text" name="pagecount" /></td>
</tr>
<tr>
<td><label>Fullname</label></td>
<td><input type="text" name="fullname" /></td>
</tr>
<tr>
<td><label>Names</label></td>
<td><input type="text" name="names" /></td>
</tr>
<!--<tr>
<td><label>Firstname</label></td>
<td><input type="text" name="firstname" /></td>
</tr>-->
<tr>
<td valign="top"><label>Summary</label></td>
<td><textarea name="summary" rows="5"></textarea></td>
</tr>
<tr>
<td><label>Publisher</label></td>
<td><input type="text" name="publisher" /></td>
</tr>
<tr>
<td><label>Year</label></td>
<td><input type="text" name="year" /></td>
</tr>

<tr>
<td><label>Isbn</label></td>
<td><input type="text" name="isbn" /></td>
</tr>
<tr>
<td><label>Subject</label></td>
<td><input type="text" name="subject" /></td>
</tr>
<tr>
<td><label>Genre</label></td>
<td><input type="text" name="genre" /></td>
</tr>
<tr>
<td><label>Copies</label></td>
<td><input type="text" name="copies" /></td>
</tr>
<tr>
<td><label>Region</label></td>
<td><input type="text" name="region" /></td>
</tr>
<!--<tr>
<td><label>Coverfront</label></td>
<td><input type="text" name="coverfront" /></td>
</tr>-->
<tr>
<td>
 <input name="parse_var" type="hidden" value="new" />
<input type="submit" value="Submit" /></td>
</tr>
</form>
</table>

<div style="text-align:center; margin-top:10px;"><a href="http://zodml.org/correction-new/menu.php">Go to first page</a></div>
</body>
</html>