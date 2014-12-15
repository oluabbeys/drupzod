<?php
//ini_set('display_errors','off');
function myTruncate($string, $limit, $break=".", $pad="....") { 
// return with no change if string is shorter than $limit 
if(strlen($string) <= $limit) return $string; 
// is $break present between $limit and the end of the string? 
if(false !== ($breakpoint = strpos($string, $break, $limit))) { if($breakpoint < strlen($string) - 1) { $string = substr($string, 0, $breakpoint) . $pad; } } return $string; }


include("scripts/config.php");

$per_page = 6; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM articles WHERE category ='Education' ORDER BY title ASC limit $start,$per_page");
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
			$intro = $row["intro"];
			$hash = $row["hash"];

		?>
         <div id="discover_nigeria_category_people_article_topic"><?php echo "<a href=\"nigeria_education_content_articles.php?article_id=".$hash."\">$title</a>"; ?></div>
        <div id="discover_nigeria_category_people_article_content"><?php echo myTruncate($intro, 150)." "."<a href=\"nigeria_education_content_articles.php?article_id=".$hash."\">Read More</a>"; ?></div>
        <div id="discover_nigeria_category_people_article_dateposted_author_hold"><div id="discover_nigeria_category_people_article_author"><?php echo "Date posted: $date"; ?></div>
        </div>
		
		<?php
		} //while
		?>
	</div>
