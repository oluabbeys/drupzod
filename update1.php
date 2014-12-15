<?php



include('connect2.php');



$result = mysql_query('SELECT * FROM dlcupdates order by ms_id desc limit 0,1');



$row=mysql_fetch_array($result);

$ms_id = $row['ms_id'];



$msgcount =  mysql_num_rows($result);


  


setcookie('dlcmsgcookie2', $ms_id);



?>

  

