<?php



$db_host = "localhost"; //your host Database adress quite often localhost
$db_username = "zodmlorg"; //your username
$db_pass = "npy7T?jnQ!tq"; //your password
$db_name = "zodmlorg_zodmel"; //your database name
@mysql_connect("$db_host","$db_username","$db_pass") or die ("could not connect to mysql");
@mysql_select_db("$db_name") or die ("no database");



/*

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'zodmlorg_zodmel',
      'username' => 'zodmlorg',
      'password' => 'npy7T?jnQ!tq',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

*/

?>