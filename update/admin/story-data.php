<?php

ini_set("display_errors", "off");

include("../access.php");

$per_page = 10; 

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
$sqlme = mysql_query("SELECT * FROM shortstory ORDER BY id ASC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row = mysql_fetch_array($sqlme))
		{
			
			$id = $row["id"];
			$name = $row["name"];
			$email = $row["email"];
			$bio = $row["bio"];
			$doc = $row["doc"];
			$date = $row["date"];
			$time = $row["time"];
			
			

		?>
	<div style="width:1000px; height:230px; padding:5px; margin-bottom:10px; border-bottom:dashed 1px #CCC;">
		<div style="width:1000px; height:50px;">
        	<div style="width:400px; height:40px; padding:3px; float:left; margin:5px 5px 0px 0px; font:Verdana, Geneva, sans-serif; font-size:11px;"><b>Name:</b>&nbsp;<?php echo $name; ?></div>
            <div style="width:400px; height:40px; padding:3px; float:left; margin:5px 5px 0px 0px; font:Verdana, Geneva, sans-serif; font-size:11px;"><b>Email:</b>&nbsp;<?php echo $email; ?></div>
            <div style="width:150px; height:40px; padding:3px; float:left; margin:5px 5px 0px 0px; font:Verdana, Geneva, sans-serif; font-size:11px;"><a href="../../shortstory/<?php echo $doc; ?>">Download Short Story</a><br/><br/><?php echo $date; ?>/<?php echo $time; ?></div>
        </div>
        
        <div style="width:1000px; height:150px;">
        	<div style="width:50px; height:20px; margin:5px 5px 0px 0px; font:Verdana, Geneva, sans-serif; font-size:11px; float:left;"><b>Bio</b></div>
        	<div style="width:480px; height:150px; overflow:scroll; padding:2px; border:solid 1px #CCC; line-height:20px; font-family:Verdana, Geneva, sans-serif; font-size:11px; float:left;"><?php echo $bio; ?></div>
        </div>
     </div>    
 <?php
		}
	 ?>