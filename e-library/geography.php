<?php
include("../Nigeria/scripts/config2.php");
$per_page = 10; 

//getting number of rows and calculating no of pages
$sql = "SELECT * FROM ebooks WHERE category='Geography and Travel' ORDER BY title ASC";
$rsd = mysql_query($sql);
$count = mysql_num_rows($rsd);
$pages = ceil($count/$per_page)

?>
<?php
ini_set("display_errors", "off");
//checking for valid users
include_once("function.php");
page_protect();

if (!isset($_COOKIE['ebookhashcookie']))
{
header("Location: index.php");
} 

if ($_COOKIE['ebookhashcookie'] != $_GET['ebook'])
{
header("Location: geography.php?ebook=".$_COOKIE['ebookhashcookie']);

} 

if(isset($_GET['ebook']))
{
$serialid = $_GET['ebook'];
}

ini_set("display_errors", "off");
include_once("../Nigeria/scripts/config.php");
$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=48");
while($row2 = mysql_fetch_array($sql2)){
$id2 = $row2["id"];
$content2 = $row2["contents"];
$title2 = $row2["title"];
$tags = $row2["metatags"];
$description = $row2["metadescription"];
$metatitle = $row2["metatitle"];
}

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta name="keywords" content="<?php echo $tags; ?>" />
<meta name="title" content="<?php echo $metatitle; ?>" />
<meta name="description" content="<?php echo $description; ?>" />
<met