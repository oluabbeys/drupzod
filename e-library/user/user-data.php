<?php

ini_set("display_errors", "off");

include("../../Nigeria/scripts/config2.php");

$per_page = 10; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM ebookuser ORDER BY date DESC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row = mysql_fetch_array($sql))
		{
			
			$id = $row["id"];
			$name = $row["name"];
			$email = $row["email"];
			$country = $row["country"];
			$date = $row["date"];
			$time = $row["time"];
			
			

		?>
	<div style="width:1000px; height:70px; padding:5px; margin-bottom:10px; border:solid 1px #CCC;">
		<div style="width:1000px; height:60px;">
        	<div style="width:250px; height:40px; padding:3px; float:left; margin:5px 5px 0px 0px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; font-size:12px;"><b>Name:</b>&nbsp;<?php echo $name; ?></div>
            <div style="width:500px; height:40px; padding:3px; float:left; margin:5px 5px 0px 0px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif;"><b>Email:</b>&nbsp;<?php echo $email; ?></div>
            <div style="width:180px; height:40px; padding:3px; float:left; margin:5px 5px 0px 0px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif;"><?php echo $country; ?><br/><br/><?php echo $date; ?>/<?php echo $time; ?></div>
        </div>
        
        
     </div>    
 <?php
		}
	 ?>