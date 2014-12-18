<?php


include_once("connect.php");
if(isset($_POST['editfront'])){
	$code2=$_POST['code2'];
	$target_path="Images/";
	$target_path=$target_path.basename($_FILES['frontcover']['name']);
	if(move_uploaded_file($_FILES['frontcover']['tmp_name'],$target_path)){
	include_once("connect.php");
	mysql_query("update books2 set coverfront='".basename($_FILES['frontcover']['name'])."' where clzbookid='$code2'");
	echo "The file ".basename($_FILES['frontcover']['name'])." has been uploaded";
	}else{
	echo "There was an error uploading the file, please try again";
	}
	
}

if(isset($_POST['deletefront'])){
	$code2=$_POST['code2'];
	include_once("connect.php");
	$sql=mysql_query("update books2 set coverfront='' where clzbookid='$code2'");
	if($sql)
        echo "Success";
	
}


if(isset($_POST['editback'])){
	$code3=$_POST['code3'];
	$target_path="Images/";
	$target_path=$target_path.basename($_FILES['backcover']['name']);
	if(move_uploaded_file($_FILES['backcover']['tmp_name'],$target_path)){
	include_once("connect.php");
	mysql_query("update books2 set coverback='".basename($_FILES['backcover']['name'])."' where clzbookid='$code3'");
	echo "The file ".basename($_FILES['backcover']['name'])." has been uploaded";
	}else{
	echo "There was an error uploading the file, please try again";
	}
	
}
?>
<br />
<a href="correction.php">Go back to start</a><br />
