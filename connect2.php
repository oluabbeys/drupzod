<?php

$mysql_hostname = "localhost";

$mysql_user = "zodmlorg";

$mysql_password = "npy7T?jnQ!tq";

$mysql_database = "zodmlorg_zodmel";





$bd = mysql_connect($mysql_hostname, $mysql_user, $mysql_password) or die("Op some thing went wrong");

mysql_select_db($mysql_database, $bd) or die("Opps some thing went wrong");



?>