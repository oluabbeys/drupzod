<?php

header("Cache-Control: must-revalidate, post-check=0, pre-check=0");
header("Cache-Control: private"); 
session_start();

if(isset($_SESSION['hash']) || isset($_SESSION['id'])){
	
	//delete sessions
	
	unset($_SESSION['id']);
	unset($_SESSION['username']);
	unset($_SESSION['password']);
	unset($_SESSION['hash']);
	
	session_unset();
	session_destroy();

//Deactivate the cookies
	
//setcookie("websiteeditnamecookie",'',time()-3600, '/','');
//setcookie("websiteeditpasswordcookie",'',time()-3600, '/','');
//setcookie("websiteeditidcookie", '',time()-3600, '/', '');
//setcookie("websiteedithashcookie",'',time()-3600, '/','');


header("Location: index.php");

}
?>

