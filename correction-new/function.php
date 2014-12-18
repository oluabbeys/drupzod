<?php

function page_protect(){
	
	if(!isset($_COOKIE['hashcookie']) && !isset($_SESSION['id'])){
		
		
		header("Location: index.php");
		
	}


}
?>