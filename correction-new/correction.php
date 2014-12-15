<?php
ini_set("display_errors", "off");
if(!isset($_COOKIE['usernamecookie'])){
	
	header("Location: index.php");
	
}

if( !isset($_COOKIE['passwordcookie'])){
	
	header("Location: index.php");
	
}

?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>CORRECTION CATEGORY OF BOOKS</title>
<link href="../images/favicon.ico" rel="shortcut icon" />
<script type="text/javascript" src="../js/jquery-1.5.1.min.js"></script>

<script type="text/javascript" src="../js/jquery-ui-1.8.13.custom.min.js"></script>

</head>

<body>
<div style="font-size:20px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; text-align:center; letter-spacing:1px; color:#EC9F00; margin-bottom:5px;">CORRECTION CATEGORY OF BOOKS</div>
<a href="search-correction.php" target="blank">Click here to search for a book</a>
<table align="center" border="1" style="font-family:Verdana, Geneva, sans-serif; font-size:11px;">
<tr><th>&nbsp;</th><th>Id</th><th>Title</th><th>Author</th><th>Class Number</th><th>Subject</th><th>Summary</th><th>Publisher</th><th>&nbsp;</th><th>Status</th></tr>
<?php
if(isset($_GET['page']))
$page=$_GET['page'];
else
$page="";
include('ps_pagination.php');
include_once("connect.php");
$query="select * from books2 order by Title asc";
$pager = new PS_Pagination($connect, $query, 50, 10, "param1=valu1&param2=value2");
//$sql=mysql_query($query);
$pager->setDebug(true);
	
	/*
	 * The paginate() function returns a mysql result set
	 * or false if no rows are returned by the query
	*/
	$rs = $pager->paginate();
	if(!$rs) die(mysql_error());
while($row= mysql_fetch_assoc($rs)){
if($page=="")
	$page=1;
	
	$status=$row['Status'];
	if($status=='Edited'){
		
	
	}
	else{
		echo "<tr><td><a href=\"editvalue.php?code=".$row['clzbookid']."\" target=\"_blank\">Click to Edit</a></td><td>".$row['Id']."</td><td>".$row['Title']."</td><td>".$row['FullName']."</td><td>".$row['Class_Numba']."</td><td>".$row['Subject']."</td><td>".$row['Summary']."</td><td>".$row['Publishers']."</td><td><a href=\"edit.php?clzcode=".$row['clzbookid']."&Page=".$page."\">Click to Update</a></td><td>".$row['Status']."</td></tr>";
		
	}
$i++;}
echo "<p align=\"center\">".$pager->renderFullNav()."</p>";
	
	echo "<br />\n";
?>
</table>
</body>
</html>

