<?php
include("../Nigeria/scripts/config2.php");
$per_page = 10; 

//getting number of rows and calculating no of pages
$sql = "SELECT * FROM ebooks WHERE category='Law' ORDER BY title ASC";
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
header("Location: law.php?ebook=".$_COOKIE['ebookhashcookie']);

} 

if(isset($_GET['ebook']))
{
$serialid = $_GET['ebook'];
}

ini_set("display_errors", "off");
include_once("../Nigeria/scripts/config.php");
$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=51");
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
<meta name="googlebot" content="index, follow" />
<meta name="robots" content="index, follow" />
<meta name="Revisit-After" content="7 days" />
<meta name="city" content="Lagos" />
<meta name="country" content="Nigeria(NGA)" />
<meta name="state" content="LA" />
<meta name="zip code" content="101233" />
<meta name="subject" content="Online Library in Nigeria, Learning Resources" />
<meta name="author" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta property="fb:admins" content="100003994871719" />
<title>ZODML | e-Library | Free e-Books | Law category</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
<link href="../css/pagination.css" type="text/css" rel="stylesheet" media="screen" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<!--<script