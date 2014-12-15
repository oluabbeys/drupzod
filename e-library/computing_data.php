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
$sql = mysql_query("SELECT * FROM ebooks WHERE category='Computing' ORDER BY title ASC limit $start,$per_page");
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
                                                    	<div style="padding:10px 0px 5px 5px; height:25px; background:url(../images/title_ebook.png) left no-repeat;"><div style="width:50px; float:left;">&nbsp;&nbsp;&nbsp;&nbsp;<b>Title:</b></div> <div style="width:330px; height:35px; float:right; font-size:11px;"><?php echo $title; ?></div></div>
                                                        <div style="padding:10px 0px 5px 5px; height:25px; background:url(../images/author.png) left no-repeat;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b>Author:</b> <span style="font-size:11px;"><?php echo $author; ?></span></div>
                                                        <div style="padding:8px 0px 5px 5px; height:35px; background:url(../images/tag.png) left no-repeat;"><div style="width:50px; float:left;">&nbsp;&nbsp;&nbsp;&nbsp;<b>Tags:</b></div> <div style="width:330px; height:35px; float:right; font-size:10px;"><?php echo $keywords; ?></div></div>
                                                        <a href="pdf_server.php?file=../513zodml005/<?php echo $pdf; ?>" title="Click to download" onClick="javascript: _gaq.push(['_trackPageview', '/downloads/<?php echo $q; ?>']);"><div style="height:30px; width:110px; float:left; margin:0px 10px 0px 0px; background:url(../images/download.png) left no-repeat;"></div></a> <a href="../513zodml005/<?php echo $htm;; ?>" title="Click to preview" target="_blank"><div style="height:30px; width:110px; float:left; margin:0px 10px 0px 0px; background:url(../images/preview.png) left no-repeat;"></div></a>
                                                    </div>
                                    
                                    			</div>	
                                                </div>
         
 <?php
		}
	 ?>