<?php
//connecting to the database
include("connect2.php");

//getting post values from the login form
$username = htmlspecialchars(trim(addslashes($_POST['username'])),1);
$password = htmlspecialchars(trim(addslashes($_POST['password'])),1);

//quering the database to check if username and password matches
$query = mysql_query("SELECT * from admin WHERE username='$username' and password = '$password'");

//if query does not match, redirect to the error login page
if(!$query){
	
	header("Location:index.php");
}

//if the query matches, get the rows of the username and password
$count = mysql_num_rows($query);

if ($count > 0){
	
	$row = mysql_fetch_array($query);
	
	$username = stripslashes($row['username']);
	$password2 = stripslashes($row['password']);
	$id = $row['id'];
	$hash = $row['hash'];
	
	//session start
	
	session_start();
	$_SESSION['username'] = $username;
	$_SESSION['password'] = $password;
	$_SESSION['id'] = $id;
	$_SESSION['hash'] = $hash;
	
	setcookie("usernamecookie",$username,0,'/','');
	setcookie("passwordcookie",$password,0,'/','');
	//setcookie("dlcfullnamecookie",$fullname,0,'/','');
	setcookie("useridcookie",$id,0,'/','');
	setcookie("hashcookie",$hash,0,'/','');
	
//redirect to the welcome page
	header("Location:menu.php?user=$hash");
	
}

//redirect to the error login page
else{
	header("Location:index.php");
}




?>