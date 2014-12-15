<?php

ini_set("display_errors", "off");

include("../access.php");

$per_page = 15; 

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
$sqlme = mysql_query("SELECT * FROM newsletterstories ORDER BY id DESC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row4 = mysql_fetch_array($sqlme))
		{
			
			$idload = $row4["id"];
			$titleload = $row4["topic"];
			$hashload = $row4["hash"];
			
			

		?>



			<tr>
           <td><div class="zipone"><?php echo $titleload; ?></div></td>
           <td><div class="ziptwo"><a class="btn" href="newsletter-edit.php?code=<?php echo $hashload; ?>&user=<?php echo $bywho; ?>">Edit &raquo;</a></div></td>
           </tr>
         
 <?php
		}
	 ?>