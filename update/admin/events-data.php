<?php

ini_set("display_errors", "off");

include("../access.php");

$per_page = 10; 

if($_GET)
{
$page=$_GET['page'];
}

session_start();
if(isset($_SESSION['hash']) )

{

$bywho= $_SESSION['hash'];



}


//get table contents
$start = ($page-1)*$per_page;
$sqleve = mysql_query("SELECT * FROM recentevents ORDER BY id DESC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($roweve = mysql_fetch_array($sqleve))
		{
			
			$ideve = $roweve["id"];
			$topiceve = $roweve["topic"];
			$hasheve = $roweve["hash"];
			$contentseve = $roweve["story"];
			

		?>



			<tr>
           <td><div class="zipone"><?php echo $topiceve; ?></div></td>
           <td><div class="ziptwo"><a class="btn" href="events-edit.php?code=<?php echo $hasheve; ?>&user=<?php echo $bywho; ?>">Edit &raquo;</a></div></td>
           </tr>
         
 <?php
		}
	 ?>