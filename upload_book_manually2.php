<?php
ini_set('display_errors','off');
include_once("connect2.php");
if ($_POST['parse_var'] == "new"){
$title = $_POST['title'];
$pagecount = $_POST['pagecount'];
$fullname = $_POST['fullname'];
$lastname = $_POST['lastname'];
$firstname = $_POST['firstname'];
$summary = $_POST['summary'];
$summary = mysql_escape_string($summary);
$publisher = $_POST['publisher'];
$year = $_POST['year'];
$isbn = $_POST['isbn'];
$subject = $_POST['subject'];
$bookcode=str_shuffle("bookcode1234567890");
$clzbookid = str_shuffle("clz12345");
//$coverfront = $_POST['frontcover'];
$target_path="Images/";
$target_path = $target_path.basename($_FILES['frontcover']['name']);
if(move_uploaded_file($_FILES['frontcover']['tmp_name'],$target_path)){
//$coverfront = move_uploaded_file($_FILES['frontcover']['tmp_name'],$target_path);

$sqlcreate = mysql_query("INSERT INTO books2(Title,Pagecount,FullName,Lastname,Firstname,Summary,Publishers,Year,isbn,Subject,clzbookid,coverfront,Bookcode) VALUES('$title', '$pagecount', '$fullname', '$lastname', '$firstname', '$summary', '$publisher', '$year', '$isbn', '$subject','$clzbookid', '$target_path', '$bookcode')");
}
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
<title>Untitled Document</title>
</head>

<body>
<h3 align="center">Fill the form completely before clicking the submit button</h3>
<div style="text-align:center;"><?php print "$msg"; ?></div>
<table align="center" cellspacing="20">
<form action="upload_book_manually2.php" method="post" enctype="multipart/form-data">
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
<td><label>Lastname</label></td>
<td><input type="text" name="lastname" /></td>
</tr>
<tr>
<td><label>Firstname</label></td>
<td><input type="text" name="firstname" /></td>
</tr>
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
<td><label>Coverfront</label></td>
<td><input type="file" name="frontcover" /></td>
</tr>
<tr>
<td>
 <input name="parse_var" type="hidden" value="new" />
<input type="submit" value="Submit" /></td>
</tr>
</form>
</table>
<div style="text-align:center; margin-top:10px;"><a href="http://zodml.org/correction">Go to first page</a></div>
</body>
</html>