<?php
//ini_set('display_errors','off');

function myTruncate($string, $limit, $break=".", $pad="....") { 
// return with no change if string is shorter than $limit 
if(strlen($string) <= $limit) return $string; 
// is $break present between $limit and the end of the string? 
if(false !== ($breakpoint = strpos($string, $break, $limit))) { if($breakpoint < strlen($string) - 1) { $string = substr($string, 0, $breakpoint) . $pad; } } return $string; }

include("scripts/config.php");

$per_page = 10; 

if($_GET)
{
$page=$_GET['page'];
}



//get table contents
$start = ($page-1)*$per_page;
$sql = mysql_query("SELECT * FROM articles WHERE category ='The Diaspora' ORDER BY title ASC limit $start,$per_page");
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
			$pix = $row["pix"];

		?>
        <table cellspacing="20">
        <tr>
        <td valign="top">
        <div style="width:150px; height:120px; margin:0px 10px 0px 0px; padding:2px; border:solid 1px #CCC; box-shadow:2px 2px 2px 2px #555;"><img src="../images/<?php echo $pix; ?>" height="120" width="150" title="<?php echo $title; ?>" /></div>
        </td>
        <td valign="top">
        <div id="discover_nigeria_category_people_article_topic"><?php echo "<a href=\"nigeria_the_diaspora_content_articles.php?article_id=".$title."\">$title</a>"; ?></div>
        <div id="discover_nigeria_category_people_article_content"><?php echo $intro." ... "."<a href=\"nigeria_the_diaspora_content_articles.php?article_id=".$title."\">Read more</a>"; ?></div>
        <div id="discover_nigeria_category_people_article_dateposted_author_hold"><?php echo "Date posted: $date"; ?></div>
        </td>
        </tr>
        </table>
		
		<?php
		} //while
		?>
	</div>
