<?php

header("Cache-Control: must-revalidate, post-check=0, pre-check=0");
header("Cache-Control: private"); 
session_start();

if(isset($_COOKIE['hashcookie']) || isset($_SESSION['hash'])){
	
	//delete sessions
	
	unset($_SESSION['id']);
	unset($_SESSION['username']);
	unset($_SESSION['password']);
	unset($_SESSION['hash']);
	
	session_unset();
	session_destroy();
	
setcookie("usernamecookie",'',time()-3600, '/','');

setcookie("passwordcookie",'',time()-3600, '/','');

setcookie("hashcookie",'',time()-3600, '/','');

//setcookie("dlcfullnamecookie",'',time()-3600, '/','');
//
//setcookie("dlcuseridcookie",'',time()-3600, '/','');



header("Location: index.php");
}
?>

