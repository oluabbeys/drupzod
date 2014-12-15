<?php
//ini_set('display_errors','off');

include("scripts/config.php");

$per_page = 6; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM articles WHERE category ='Business' ORDER BY id limit $start,$per_page");
//$rsd = mysql_query($sql);
?>


	<div id="discover_nigeria_category_people_article_hold">
		
		<?php
		//Print the contents
		
		while($row = mysql_fetch_array($sql))
		{
			
			$title = $row["title"];
			$id = $row["id"];
			$author = $row["author"];
			$contents = $row["contents"];
			$date = $row["date"];
			$category = $row["category"];

		?>
        <div id="discover_nigeria_category_people_article_topic"><?php echo $title; ?></div>
        <div id="discover_nigeria_category_people_article_dateposted_author_hold"><div id="discover_nigeria_category_people_article_author"><?php echo "Date posted: $date"; ?></div>
        </div>
		
		<?php
		} //while
		?>
	</div>
