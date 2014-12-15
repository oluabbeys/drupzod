<?php
header("Cache-Control: must-revalidate, post-check=0, pre-check=0");
header("Cache-Control: private"); 
session_start();

//if(isset($_COOKIE['ebookidcookie']) || isset($_SESSION['ebookid'])){
	if(isset($_COOKIE['ebookhashcookie'])){
	
//delete sesssions
	unset($_SESSION['ebookid']);
	
	
	session_unset();
	session_destroy();


//delete cookies

setcookie("ebookhashcookie",'',time()-28800, '/','');


header("Location: index.php");

}

?>

