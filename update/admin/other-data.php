<?php

ini_set("display_errors", "off");

include("../access.php");

$per_page = 15; 

session_start();
if($_GET)
{
$page=$_GET['page'];
}

if(isset($_SESSION['hash']) )

{

$bywho= $_SESSION['hash'];



}


//get table contents
$start = ($page-1)*$per_page;
$sqlme = mysql_query("SELECT * FROM articles WHERE category='Others' ORDER BY title ASC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row4 = mysql_fetch_array($sqlme))
		{
			
			$idload = $row4["id"];
			$titleload = $row4["title"];
			$contentload = $row4["contents"];
			$hashload = $row4["hash"];
			
			

		?>



			<tr>
           <td><div class="zipone"><?php echo $titleload; ?></div></td>
           <td><div class="ziptwo"><a class="btn" href="other-edit.php?code=<?php echo $hashload; ?>&user=<?php echo $bywho; ?>">Edit &raquo;</a></div></td>
           </tr>
         
 <?php
		}
	 ?>