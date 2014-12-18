<?php

include("Nigeria/scripts/config.php");

$per_page = 10; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM recentevents ORDER BY id DESC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row = mysql_fetch_array($sql))
		{
			
			$topic = $row['topic'];
			$id = $row['id'];
			$hash = $row['hash'];
			

		?>
      <div id="eventslistingstyle">
										  <?php echo "<img src=\"images/icon.png\" width=\"7\" height=\"10\" />&nbsp;&nbsp;<a href=\"recent_events.php?recent=".$hash."\">$topic</a>"; echo "<br/>"; ?>
                                          
                                         </div>
                                         <?php } ?>


