<?php


function page_protect(){
	session_start();
	
	if(!isset($_COOKIE['ebookidcookie']) && !isset($_SESSION['ebookid'])){
		
		
			header("location: index.php");
	}


}





?>