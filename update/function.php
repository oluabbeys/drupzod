<?php


function page_protect(){
	session_start();
	
	if(!isset($_SESSION['hash']) && !isset($_SESSION['id'])){
		
		
			header("location: index.php");
	}


}





?>