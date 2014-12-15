<?php


include_once("connect.php");
if(isset($_POST['editvals'])){
	$code2= $_POST['code2'];
	$title= $_POST['title'];
	$author= $_POST['author'];
	$names = $_POST['names'];
	$publisher= $_POST['publisher'];
	$subject= $_POST['subject'];
	$assertion = $_POST['assertion'];
	$year = $_POST['year'];
	$isbn = $_POST['isbn'];
	$class_numba = $_POST['class_numba'];
	$genre = $_POST['genre'];
	$copies = $_POST['copies'];
	$pagecount = $_POST['pagecount'];
	$region = $_POST['region'];
	$avail = $_POST['avail'];
	$front= $_POST['frontcover'];
	$summary= $_POST['summary'];
	

	$query22 = "UPDATE books2 SET Title=\"$title\", FullName=\"$author\", Names=\"$names\", Summary=\"$summary\", Publishers=\"$publisher\", Year=\"$year\", isbn=\"$isbn\", Subject=\"$subject\", Class_Numba=\"$class_numba\", assertion=\"$assertion\", Genre=\"$genre\", Copies=\"$copies\", Pagecount=\"$pagecount\", Region=\"$region\", Availability=\"$avail\", coverfront=\"$front\" WHERE clzbookid='$code2'";
	$sql22 = mysql_query($query22);
	if($sql22)
	echo "Success";
}

if(isset($_POST['deletevals'])){
	$code2=$_POST['code2'];
	$title=$_POST['title'];
	$author=$_POST['author'];
	$publisher=$_POST['publisher'];
	$subject=$_POST['subject'];
	$assertion = $_POST['assertion'];
	$front=$_POST['frontcover'];
	$year = $_POST['year'];
	$isbn = $_POST['isbn'];
	$class_numba = $_POST['class_numba'];
	$genre = $_POST['genre'];
	$copies = $_POST['copies'];
	$pagecount = $_POST['pagecount'];
	$region = $_POST['region'];
	$avail = $_POST['avail'];
	$names = $_POST['name'];
	//$summary=$_POST['summary'];
	$query2= "delete from books2 where clzbookid='$code2'";
	$sql2=mysql_query($query2);
	if($sql2)
	echo "Success";
}
?>
<br />
<a href="correction.php">Go to Correction category</a><br />
<!--<a href="editvalue.php?code=<?php //echo $code; ?>">Go back one step</a><br />-->
<a href="edited.php">Go to Edited books category</a><br />