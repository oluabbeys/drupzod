<?php
//echo("great");
include_once("../db_books.php");
$file_handle=fopen("list.csv","r");
while(!feof($file_handle)){
$line_of_text=fgetcsv($file_handle, 1024);
$parameter=$line_of_text[0];

	$parameter2 = $line_of_text[5];
	//$serial = str_shuffle("serialid12345");
$query = mysql_query("select * from ebooks where serial='$parameter2'");
//$sql=mysql_query($query);
$num = mysql_num_rows($query);
if($num<1){
	$bookcode = str_shuffle("ebooks1234567890");
	$query2 = mysql_query("insert into ebooks(title,author,category,keywords,image,pdf,htm,serial,bookcode) values(\"$line_of_text[0]\",\"$line_of_text[1]\",\"$line_of_text[2]\",\"$line_of_text[3]\",\"$line_of_text[4]\",\"$line_of_text[5]\",\"$line_of_text[6]\",\"$line_of_text[7]\",\"$bookcode\")");
	//$sql2 = mysql_query($query2);
	if($query2)
	echo "success";
}
if($num>0){
	$row=mysql_fetch_array($sql);
	if($row['title']=="")
	mysql_query("update ebooks set title=\"$line_of_text[0]\" where serial='$parameter2'");
	
	if($row['author']=="")
		mysql_query("update ebooks set author=\"$line_of_text[1]\" where serial='$parameter2'");
		
	if($row['category']=="")
		mysql_query("update ebooks set category=\"$line_of_text[2]\" where serial='$parameter2'");
		
	if($row['keywords']=="")
		mysql_query("update ebooks set keywords=\"$line_of_text[3]\" where serial='$parameter2'");
}

echo $line_of_text[0].",".$line_of_text[1].",".$line_of_text[2].",".$line_of_text[3].",".$line_of_text[4].",".$line_of_text[5].",".$line_of_text[6].",".$line_of_text[7].","."<br />";





//print $line_of_text[0].$line_of_text[1].$line_of_text[2]."<br>";
}
fclose($file_handle);

?>