<?php
include_once("db.php");
$file_handle=fopen("17-12-12(2).csv","r");
while(!feof($file_handle)){
$line_of_text=fgetcsv($file_handle, 1024);
$parameter=$line_of_text[0];

	//$parameter2=$line_of_text[11];
	$clzbookid = str_shuffle("clz12345678new");
$query="select * from books2 where clzbookid='$clzbookid'";
$sql=mysql_query($query);
$num=mysql_num_rows($sql);
if($num<1){
	
	$bookcode=str_shuffle("bookcode1234567890new");
	$query2="insert into books2 values(\"\",\"$line_of_text[0]\",\"$line_of_text[1]\",\"$line_of_text[2]\",\"$line_of_text[3]\",\"$line_of_text[4]\",\"$line_of_text[5]\",\"$line_of_text[6]\",\"$line_of_text[7]\",\"$line_of_text[8]\",\"$line_of_text[9]\",\"$line_of_text[10]\",\"$line_of_text[11]\",\"$line_of_text[12]\",\"$line_of_text[13]\",\"$clzbookid\",\"$line_of_text[15]\",\"$line_of_text[16]\",\"$bookcode\",\"\")";
	$sql2=mysql_query($query2);
	if($sql2)
	echo "success";
}
if($num>0){
	$row=mysql_fetch_array($sql);
	if($row['Title']=="")
	mysql_query("update books2 set Title=\"$line_of_text[0]\" where clzbookid='$clzbookid'");
	
	if($row['FullName']=="")
		mysql_query("update books2 set FullName=\"$line_of_text[2]\" where clzbookid='$clzbookid'");
		
	if($row['Names']=="")
		mysql_query("update books2 set Names=\"$line_of_text[3]\" where clzbookid='$clzbookid'");
		
	//if($row['Firstname']=="")
//		mysql_query("update books2 set Firstname=\"$line_of_text[2]\" where clzbookid='$clzbookid'");
//		
	if($row['Summary']=="")
		mysql_query("update books2 set Summary=\"$line_of_text[4]\" where clzbookid='$clzbookid'");
		if($row['Pagecount']==0)
		mysql_query("update books2 set Pagecount='$line_of_text[1]' where clzbookid='$clzbookid'");
        if($row['Subject']=="")
		mysql_query("update books2 set Subject=\"$line_of_text[8]\" where clzbookid='$clzbookid'");
		
		
		
}

echo $line_of_text[0]." , ".$line_of_text[1]." , ".$line_of_text[2]." , ".$line_of_text[5]." , ".$line_of_text[6]." , ".$line_of_text[7]." , ".$line_of_text[8]." , ".$line_of_text[15]." , ".$line_of_text[9]." , ".$line_of_text[10]." , ".$line_of_text[11]." , ".$line_of_text[12]." , ".$line_of_text[13]." , ".$line_of_text[16].", "."<br />";





//print $line_of_text[0].$line_of_text[1].$line_of_text[2]."<br>";
}
fclose($file_handle);

?>