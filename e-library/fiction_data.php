<?php

ini_set("display_errors", "off");

include("../Nigeria/scripts/config2.php");

$per_page = 10; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM ebooks WHERE category='Fiction' ORDER BY title ASC limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


<?php
		//Print the contents
		
		while($row = mysql_fetch_array($sql))
		{
			
			$id = $row["id"];
			$title = $row["title"];
			$author = $row["author"];
			$category = $row["category"];
			$keywords = $row["keywords"];
			$image = $row["image"];
			$pdf = $row["pdf"];
			$htm = $row["htm"];
			$hash = $row["bookcode"];
			
$q = explode(".", $row['pdf']);
		?>



<div style="width:510px; height:190px;">
                                    			<div id="elibrary_book_display_from_database">
                                    				<div style="width:100px; height:120px; float:left; margin:0px 5px 0px 0px;"><img src="../images/<?php echo $image; ?>" width="100" height="120" alt="<?php echo $image; ?>" title="<?php echo $image; ?>"></div>
                                    
                                    				<div style="width:390px; height:160px; float:left; font-size:11px;">
                                                    	<div style="padding:10px 0px 5px 5px; height:25px; background:url(../images/title_ebook.png) left no-repeat;"><div style="width:50p