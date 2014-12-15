<?php 
ini_set('display_errors','off');
include('connect2.php');

//if ($_POST['parse_var'] == "new"){
	
if(isset($_COOKIE['dlcuseridcookie']) )

{

$bywho=$_COOKIE['dlcuseridcookie'];

$byname=$_COOKIE['dlcfullnamecookie'];

}

$title = $_POST['title'];
$des = $_POST['des'];
$des = mysql_real_escape_string($des);

 $sqlcreate = mysql_query("INSERT INTO dlcstudylog (memberid, membername, studytitle, studycontents, date, time) VALUES ('$bywho','$byname','$title','$des',CURRENT_TIMESTAMP, CURRENT_TIMESTAMP)");

//$sql = mysql_query("INSERT INTO dlcstudylog (studytitle, studycontents, date, time) VALUES ('$title', '$des') ");

if($sqlcreate){
	echo "Your study log has been created";
}
else{
	echo "Problem connecting to server, please try again later";
}

//}




?>