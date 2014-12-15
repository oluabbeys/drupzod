<?php
include_once("db.php");
$cmd=$_GET['cmd'];
if($cmd=="0_1"){
$searchtext=$_GET['searchtext'];
$criteria=$_GET['criteria'];
$query="select * from books2 where ".$criteria." like '%$searchtext%'";
$sql=mysql_query($query);
$num=mysql_num_rows($sql);
if($num>0){
	
	$retval="";
	while($row=mysql_fetch_array($sql)){
		$id1=$row['Id'];
		if($id1!==""){
		$retval .=$row['Id']."|".$row['Title']."|".$row['FullName']."|".$row['Publishers']."|".$row['coverfront']."|".$row['Summary']."|".$row['Subject']."~";
		}
	}
	echo $retval;
	
	
}
}
if($cmd=="0_2"){
$resid=$_GET['resid'];
$query="select * from bookstore where Id='$resid'";
$sql=mysql_query($query);
$row=mysql_fetch_array($sql);
echo $row['BackPage']."|".$row['Summary']."|".$row['Genre/Subject'];
}

$cmd=$_GET['cmd'];
if($cmd=="0_3"){
$id=$_GET['bookid'];
$email=$_GET['email'];
$name=$_GET['name'];
$comment=$_GET['comment'];
$comment = (mysql_real_escape_string($comment));

$code=str_shuffle("comment1234567890");

$query1="insert into bookscomment values('','$id','$email','$name','$comment','$code')";
$sql1=mysql_query($query1);

if($sql1){
$query="select * from bookscomment where CommentCode='$code'";
$sql=mysql_query($query);
$retval="";
	$row=mysql_fetch_array($sql);
		$retval .=$row['Name']."|".$row['Comment']."~";
		
	
	echo $retval;
	
	//seyi query/code start
	
	include_once("../db_books.php");
	
	$sqlcontrol="select Title from books2 where Id = '$id'";
$querycontrol=mysql_query($sqlcontrol);
	 $rowcontrol=mysql_fetch_array($querycontrol); 
	 $title=$rowcontrol['Title']; 
	
	 //mail to the editorial unit or commnent reviewing unit
$content_to_email ="info@zodml.org";
$content_subject = "Comment on a book from ZODML Catalogue section";
$content_msge = 'NAME: '.$name."\r\n".
"\r\n" .
'EMAIL: '.$email."\r\n" .
"\r\n" .
'TITLE: '.$title."\r\n" .
"\r\n" .
'COMMENT: '.$comment."\r\n" .





 // email headers
$headerss = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($content_to_email, $content_subject,$content_msge, $headerss); 

	
	
	
	//auto response
$from_email ="info@zodml.org";
$respond_subject = "ZODML Catalogue";
$respond_message = "Thank you for your comment on  ZODML Book Catalogue section. \r\n \r\nRegards \r\n \r\nFrom ZODML Team";
 // create email headers
$headerd = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headerd); 
	
	//seyi query/code end
	
	
}
}


include_once("db.php");

if($cmd=="0_4"){
	$par=$_GET['par'];
	$id=$_GET['id'];
	$query3="insert into rating values('','$par','$id')";
	$sql3=mysql_query($query3);
	if($sql3)
	echo "successfully submitted";
}

?>