<?php
//connecting to the database
include("../Nigeria/scripts/config2.php");



//getting post values from the login form
$email = htmlspecialchars(trim(addslashes($_POST['loginemail'])),1);

//quering the database to check if username and password matches
$query = mysql_query("SELECT * FROM ebookuser WHERE email='$email'");

//if query does not match, redirect to the error login page
if(!$query){
	
	header("Location:index.php");
}

//if the query matches, get the rows of the username and password
$count = mysql_num_rows($query);

if ($count > 0){
	
	$row = mysql_fetch_array($query);
	
	$username = stripslashes($row['email']);
	$id = $row['id'];
	$hash = $row['hash'];
	
	
	session_start();
	$_SESSION['ebookid'] = $id;
	$_SESSION['hash'] = $hash;
	//$_SESSION['ebookusername'] = $username;

	//setcookie("ebookusernamecookie",$username,0,'/','');
	setcookie("ebookidcookie",$id,time()+28800,'/','');
	setcookie("ebookhashcookie",$hash,time()+28800,'/','');
	
//redirect to the welcome page
	header("Location:e-books.php?ebook=$hash");
	
}

//redirect to the error login page
else{
	header("Location:index.php");
}




?>