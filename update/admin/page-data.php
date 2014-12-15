<?php

ini_set("display_errors", "off");

include("../access.php");

$per_page = 15; 

if($_GET)
{
$page=$_GET['page'];
}

session_start();
if(isset($_SESSION['hash']))

{

$bywhopage = $_SESSION['hash'];



}


//get table contents
$start = ($page-1)*$per_page;
$sqlpage = mysql_query("SELECT * FROM contentsupdate WHERE contents='Content' ORDER BY title ASC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row4 = mysql_fetch_array($sqlpage))
		{
			
			$idpage = $row4["id"];
			$titlepage = $row4["title"];
			$contentpage = $row4["contents"];
			$hashpage = $row4["hash"];
			
			

		?>



			<tr>
           <td><div class="zipone"><?php echo $titlepage; ?></div></td>
           <td><div class="ziptwo"><a class="btn" href="page-edit.php?code=<?php echo $hashpage; ?>&user=<?php echo $bywhopage; ?>">Add S.E.O &raquo;</a></div></td>
           </tr>
         
 <?php
		}
	 ?>