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
<title>EDITING FORM</title>
<link href="../images/favicon.ico" rel="shortcut icon" />
</head>

<body>

<?php

$code = $_GET['code'];
include_once("connect.php");
$query="SELECT * FROM books2 WHERE clzbookid='$code'";
$sql=mysql_query($query);
$row=mysql_fetch_array($sql);
?>


<form action="editvalue2.php" method="post">
<table align="center" style="margin-top:30px; font-family:Verdana, Geneva, sans-serif; font-size:10px;">
<input type="hidden" name="code2" value="<?php echo $code; ?>"/>
<tr><td>Title</td><td><input type="text" name="title" value="<?php echo $row['Title']; ?>"  style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Author</td><td><input type="text" name="author" value="<?php echo $row['FullName']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Names</td><td><input type="text" name="names" value="<?php echo $row['Names']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Publisher</td><td><input type="text" name="publisher" value="<?php echo $row['Publishers']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Subject</td><td><input type="text" name="subject" value="<?php echo $row['Subject']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Accession Number</td><td><input type="text" name="assertion" value="<?php echo $row['assertion']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Year</td><td><input type="text" name="year" value="<?php echo $row['Year']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>ISBN</td><td><input type="text" name="isbn" value="<?php echo $row['isbn']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Class Number</td><td><input type="text" name="class_numba" value="<?php echo $row['Class_Numba']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Genre</td><td><input type="text" name="genre" value="<?php echo $row['Genre']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Copies</td><td><input type="text" name="copies" value="<?php echo $row['Copies']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr>
  <td>No of Pages</td>
  <td><input type="text" name="pagecount" value="<?php echo $row['Pagecount']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td>
</tr>
<!--<tr><td>Region</td><td><input type="text" name="region" value="<?php //echo $row['Region']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>-->
<tr><td>Region</td><td><select name="region" style="width:300px; height:22px; border:1px solid #cccccc;"><option selected="selected">Select</option><option>US/Canada</option><option>Latin America</option><option>Africa</option><option>Nigeria</option><option>UK</option><option>Europe</option><option>Middle East</option><option>Asia</option><option>Oceania</option></select></td></tr>
<tr><td>Availability</td><td><input type="text" name="avail" value="<?php echo $row['Availability']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Front cover</td><td><input type="text" name="frontcover" value="<?php echo $row['coverfront']; ?>"   style="width:300px; height:22px; border:1px solid #cccccc;" /></td></tr>
<tr><td>Summary</td><td><textarea name="summary"  style="width:400px; height:180px; border:1px solid #cccccc;"><?php echo $row['Summary']; ?></textarea></td></tr>
<tr><td><input type="submit" name="editvals" value="Update" /></td><td><input type="submit" name="deletevals" value="Delete" /></td></tr>
</table>
</form>
<table align="center" style="margin-top:10px; font-family:Verdana, Geneva, sans-serif; font-size:10px;">
<tr><th>Front Cover</th><th>Back Cover</th></tr>
<tr><td><img src="Images/<?php echo $row['coverfront']; ?>" width="300" height="300" /></td><td><img src="Images/<?php echo $row['coverback']; ?>" width="300" height="300" /></td></tr>
</table>
<a href="correction.php">Go back one step</a><br />
<a href="editpix.php?code=<?php echo $code; ?>">Edit image</a>
</body>
</html>

    