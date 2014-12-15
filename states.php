<?php
//checks for the value entered into the text field
$q = strtolower($_GET["q"]);

//connects to the database
$conn = mysql_connect('localhost','zodmlorg','w7fpgiE)#itg');

if (!$conn){
	
	exit('Connect Error('.mysqli_connect_errno().')'.mysqli_connect_error());
}

mysql_select_db('zodmlorg_sec_school');

//fetches data from the database's table
//$sql = mysql_query("SELECT * FROM tbl_sec_schl");
$sql = mysql_query("select DISTINCT state_name as state_name from tbl_sec_state where state_name LIKE '%$q%'");
//$sql = mysql_query("SELECT * FROM tbl_sec_schl WHERE school_name LIKE '%$q%'");
while($result = mysql_fetch_array($sql)){
	echo $result['state_name']."\n";
}




//$conn = mysql_connect('localhost','root','');
//
//if (!$conn){
//	exit('Connect Error('.mysqli_connect_errno().')'.mysqli_connect_error());
//}
//
//mysql_select_db('sec_school');
//
//$q = strtolower($_GET["q"]);
//
//if (!$q) return;
//
//$sql = mysql_query("select DISTINCT school_name as school_name from tbl_sec_schl where school_name LIKE '%$q%'");
////$rsd = mysql_query($sql);
//while($rs = mysql_fetch_array($sql)) {
//	$cname = $rs['school_name'];
//	echo "$cname\n";
//}

?>