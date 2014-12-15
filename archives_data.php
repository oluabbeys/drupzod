<?php

include("Nigeria/scripts/config.php");

$per_page = 10; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM archives ORDER BY id DESC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row = mysql_fetch_array($sql))
		{
			
			$contents = $row["contents"];
			$date = $row["date"];
			

		?>
       <div style="width:700px; height:auto;">
       	<div style="width:200px; float:left; margin-right:10px; height:auto; font-family:Verdana, Geneva, sans-serif; font-size:12px; font-weight:bold; padding-top:15px;"><?php echo $date; ?></div>
        <div style="width:478px; float:left; margin-right:10px; height:auto; font-family:Verdana, Geneva, sans-serif; font-size:12px; line-height:25px; border-bottom:2px #CCC dashed;"><?php echo $contents; ?></div>
       </div>
		
		<?php
		} //while
		?>
