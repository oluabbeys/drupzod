<?php
//connecting to the database
include('connect2.php');

//getting post values from the login form
$username = htmlspecialchars(trim(addslashes($_POST['email_signin'])),1);
$password = htmlspecialchars(trim(addslashes($_POST['password_signin'])),1);

//quering the database to check if username and password matches
$query = mysql_query("SELECT * from dlcmember WHERE email='$username' and password = '$password'");

//if query does not match, redirect to the error login page
if(!$query){
	
	header("Location:error_login.php");
}

//if the query matches, get the rows of the username and password
$count = mysql_num_rows($query);

if ($count > 0){
	
	$row = mysql_fetch_array($query);
	
	$username = stripslashes($row['email']);
	$password2 = stripslashes($row['password']);
	$fullname = stripslashes($row['firstname'])." ".stripslashes($row['lastname']);
	$id = $row['id'];
	
	setcookie("dlcusernamecookie",$username,0,'/','');
	setcookie("dlcpassword2cookie",$password2,0,'/','');
	setcookie("dlcfullnamecookie",$fullname,0,'/','');
	setcookie("dlcuseridcookie",$id,0,'/','');
	
//redirect to the welcome page
	header("Location:welcome.php?_zodml=$id");
	
}

//redirect to the error login page
else{
	header("Location:error_login.php");
}




?>