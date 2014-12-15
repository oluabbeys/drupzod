<?php


$clzcode=$_GET['clzcode'];
$page=$_GET['Page'];
include_once("connect.php");
$query="update books2 set Status='Edited' where clzbookid='$clzcode'";
$sql=mysql_query($query);
if($sql)
header("location:correction.php?page=".$page);
?>