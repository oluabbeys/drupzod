<?php
ini_set("display_errors", "off");
if(!isset($_COOKIE['usernamecookie'])){
	
	header("Location: index.php");
	
}

if( !isset($_COOKIE['passwordcookie'])){
	
	header("Location: index.php");
	
}

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<form method="post" action="search-correction-result.php">
<table width="407" align="center">
<tr><td>Title</td></tr>
<tr><td><input type="text" name="title" style="width:100%;" /></td></tr>
<tr><td>ISBN</td></tr>
<tr><td><input type="text" name="isbn" style="width:100%;" /></td></tr>
<tr><td>Author</td></tr>
<tr><td><input type="text" name="author" style="width:100%;" /></td></tr>
<tr><td><input type="submit" name="search" /></td></tr>

</table>
</form>
</body>
</html>