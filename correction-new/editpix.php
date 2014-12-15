<?php
ini_set("display_errors", "off");
if(!isset($_COOKIE['usernamecookie'])){
	
	header("Location: index.php");
	
}

if( !isset($_COOKIE['passwordcookie'])){
	
	header("Location: index.php");
	
}

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>

<?php
$code=$_GET['code'];
include_once("connect.php");
$query="select * from books2 where clzbookid='$code'";
$sql=mysql_query($query);
$row=mysql_fetch_array($sql);
?>


<form action="editpix2.php" method="post" enctype="multipart/form-data">
<table align="center" style="margin-top:30px; font-family:Verdana, Geneva, sans-serif; font-size:10px;">
<input type="hidden" name="code2" value="<?php echo $code; ?>"/>
<tr><td>Front Cover</td><td><input type="file" name="frontcover" value="<?php echo $row['Title']; ?>"  style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>

<tr><td><input type="submit" name="editfront" value="Edit" /></td><td><input type="submit" name="deletefront" value="Delete" /></td></tr>
</table>
</form>

<form action="editpix2.php" method="post" enctype="multipart/form-data">
<table align="center" style="margin-top:30px; font-family:Verdana, Geneva, sans-serif; font-size:10px;">
<input type="hidden" name="code3" value="<?php echo $code; ?>"/>
<tr><td>Back Cover</td><td><input type="file" name="backcover" value="<?php echo $row['Title']; ?>"  style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>

<tr><td><input type="submit" name="editback" value="Edit" /></td></td><td><input type="submit" name="deleteback" value="Delete" /></td></tr>
</table>
</form>

<a href="correction.php">Go back to Book List</a><br />

</body>
</html>