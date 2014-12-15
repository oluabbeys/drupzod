<?php
$mysql_hostname = "localhost";
$mysql_user = "zodmlorg";
$mysql_password = "npy7T?jnQ!tq";
$mysql_database = "zodmlorg_zodmel";


$connect= mysql_connect($mysql_hostname, $mysql_user, $mysql_password) or die("Opps some thing went wrong");
mysql_select_db($mysql_database, $connect) or die("Opps some thing went wrong");

?>