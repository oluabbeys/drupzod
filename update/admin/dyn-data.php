<?php

ini_set("display_errors", "off");

include("../access.php");

$per_page = 20; 

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
$sqldyn = mysql_query("SELECT * FROM archives ORDER BY id DESC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($rowdyn = mysql_fetch_array($sqldyn))
		{
			
			$iddyn = $rowdyn["id"];
			$condyn = $rowdyn["date"];
			$hashdyn = $rowdyn["hash"];
			
			

		?>



			<tr>
           <td><div class="zipone"><?php echo $condyn; ?></div></td>
           <td><div class="ziptwo"><a class="btn" href="dyn-edit.php?code=<?php echo $hashdyn; ?>&user=<?php echo $bywho; ?>">Edit &raquo;</a></div></td>
           </tr>
         
 <?php
		}
	 ?>