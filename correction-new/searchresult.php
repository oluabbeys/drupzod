<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body><?php
	$title=$_POST['title'];
	$isbn=$_POST['isbn'];
	$author=$_POST['author'];
	
	?>
    <table align="center" border="1" style="font-family:Verdana, Geneva, sans-serif; font-size:11px;">
<tr><th>&nbsp;</th><th>Id</th><th>Title</th><th>Author</th><th>Subject</th><th>Summary</th><th>Publisher</th><th>&nbsp;</th><th>Status</th></tr>
<?php

include('ps_pagination.php');
include_once("connect.php");
if($title !="" && $author=="" && $isbn=="")
$query="select * from books2 where Status='Edited' and Title like '%$title%' order by Title asc";
if($title =="" && $author!="" && $isbn=="")
$query="select * from books2 where Status='Edited' and FullName like '%$author%' order by Title asc";
if($title =="" && $author=="" && $isbn!="")
$query="select * from books2 where Status='Edited' and isbn like '%$isbn%' order by Title asc";
if($title !="" && $author!="" && $isbn=="")
$query="select * from books2 where Status='Edited' and Title like '%$title%' and FullName like '%$author%' order by Title asc";
if($title !="" && $author=="" && $isbn!="")
$query="select * from books2 where Status='Edited' and Title like '%$title%' and isbn like '%$isbn%' order by Title asc";
if($title =="" && $author!="" && $isbn!="")
$query="select * from books2 where Status='Edited' and FullName like '%$author%' and isbn like '%$isbn%' order by Title asc";
if($title !="" && $author!="" && $isbn!="")
$query="select * from books2 where Status='Edited' and Title like '%$title%' and FullName like '%$author%' and isbn like '%$isbn%' order by Title asc";
$sql=mysql_query($query);
while($row= mysql_fetch_array($sql)){
			echo "<tr><td><a href=\"editvalue.php?code=".$row['clzbookid']."\" target=\"_blank\">Click to Edit</a></td><td>".$row['Id']."</td><td>".$row['Title']."</td><td>".$row['FullName']."</td><td>".$row['Subject']."</td><td>".$row['Summary']."</td><td>".$row['Publishers']."</td><td><a href=\"edit.php?clzcode=".$row['clzbookid']."\">Click to Update</a></td><td>".$row['Status']."</td></tr>";
		

}

?>
</table>

</body>
</html>