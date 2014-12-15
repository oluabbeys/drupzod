<?php
include("../function.php");
page_protect();

if (!isset($_SESSION['hash']))
{
header("Location: ../index.php");
} 

if ($_SESSION['hash'] != $_GET['user'])
{
header("Location: upload-discover-nigeria.php?user=".$_SESSION['hash']);

} 

if(isset($_GET['user'])){
	$profile = $_GET['user'];
}

include("../access.php");
$sql = mysql_query("SELECT * FROM admin WHERE hash='$profile'");
$row = mysql_fetch_array($sql);
$name = $row['username'];
$id = $row['id'];

ini_set("display_errors", "off");

include("../access.php");
if ($_POST['parse_var'] == "new"){
//The next 3 lines gather the information entered into form and turns them into php variables so they can be entered into the database
        $title = $_POST['title'];
		$title = mysql_real_escape_string($title);
	   $contents = $_POST['contents'];
	   $contents = mysql_real_escape_string(stripslashes($contents));
	   $intro = $_POST['intro'];
	   $intro = mysql_real_escape_string(stripslashes($intro));
	   $author = $_POST['author'];
	   $category = $_POST['category'];
	   $url = $_POST['url'];
	   $search = $_POST['searchtitle'];
	   $hashin = str_shuffle("rstuvwxyzjklmonopqr");
	   $upload = 'uploaded';
	  
//This bit places the php variables into the correct columns in your database
//Now() generates the current date
        $sqlcreate = mysql_query("INSERT INTO articles (date, title, contents, intro, category, author, url, searchtitle, hash, status)
		VALUES(CURRENT_TIMESTAMP,'$title','$contents', '$intro', '$category', '$author',  '$url', '$search', '$hashin', '$upload')");
//produces a message to let you know if the data has been successfully submited or not.
        if ($sqlcreate){
            $msg = '<font color="#009900">A new article has been created.</font>';
        } else {
			$msg = '<font color="#FF0000">Problems connecting to server, please try again later.</font>';
		}
}

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Upload Discover Nigeria Article</title>
<link href="../../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../../images/favicon.ico" rel="shortcut icon" />
<link href="../../css/pagination.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../assets/css/boot.css" rel="stylesheet">
    <style type="text/css">
      body {
        padding-top: 60px;
        padding-bottom: 40px;
      }
      .sidebar-nav {
        padding: 9px 0;
      }

      @media (max-width: 980px) {
        /* Enable use of floated navbar text */
        .navbar-text.pull-right {
          float: none;
          padding-left: 5px;
          padding-right: 5px;
        }
      }
    </style>
    <link href="../assets/css/boot2.css" rel="stylesheet">
</head>

<body>
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                
                </div>
                
<!--END OF HEADER-->
<div id="content_holder">



<div class="navbar navbar-inverse navbar-fixed-top">
      <div class="navbar-inner">
        <div class="container-fluid">
          <button type="button" class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <a class="brand" href="#">ZODML Admin Panel</a>
          <div class="nav-collapse collapse">
            <p class="navbar-text pull-right">
              Logged in as <a href="#" class="navbar-link"><?php echo $name; ?></a>
            </p>
            <ul class="nav">
              <li><a href="index.php">Home</a></li>
              <li><a href="upload.php?user=<?php echo $profile; ?>">Upload Image</a></li>
              <li class="active"><a href="upload-discover-nigeria.php?user=<?php echo $profile; ?>">Upload Discover Nigeria Article</a></li>
              <li><a href="edit-discover-nigeria.php?user=<?php echo $profile; ?>">Edit Discover Nigeria Article</a></li>
              <li><a href="short-story.php?user=<?php echo $profile; ?>">Short Story</a></li>
              <li><a href="upload-newsletter.php?user=<?php echo $profile; ?>">Newsletter</a></li>
              <li><a href="edit-newsletter.php?user=<?php echo $profile; ?>">Edit Newsletter Articles</a></li>
              <li><a href="upload-events.php?user=<?php echo $profile; ?>">Events</a></li>
              <li><a href="upload-archives.php?user=<?php echo $profile; ?>">Did You Know</a></li>
              <li><a href="edit-dyn.php?user=<?php echo $profile; ?>">Edit Did You Know</a></li>
              <li><a href="edit-events.php?user=<?php echo $profile; ?>">Edit Events</a></li>
              <li><a href="../logout_proc.php">Logout</a></li>
              <!--<li><a href="#contact">Contact</a></li>-->
            </ul>
          </div><!--/.nav-collapse -->
        </div>
      </div>
    </div>

<p>&nbsp;</p>

    <div class="container-fluid">
      <div class="row-fluid">
        <!--/span-->
        
          <div class="hero-unit">
            <h2>Upload Article</h2>
            
            <br />
          <p><?php echo $msg; ?></p>
           <form class="form-signin" action="upload-discover-nigeria.php?user=<?php echo $profile; ?>" method="post" name="new">
        
        <label>Article Title</label><input name="title" type="text" class="input-block-level" title="Title of the article" value="Title" size="26" onfocus="if(this.value=='Title'){this.value=''};" onblur="if(this.value==''){this.value=='Title'};"/>
        
        <label>Category</label><select name="category" class="input-block-level"><option selected="selected" disabled="disabled" title="Select Article's category">Select</option><option>Geography</option><option>People</option><option>The Diaspora</option><option>Others</option></select>
        <label>Contents</label><textarea name="contents" rows="8" cols="24" onfocus="if(this.value=='Content'){this.value=''};" onblur="if(this.value==''){this.value=='Content'};" style="width:930px; height:300px;" title="Content of the article" >Content</textarea>
        
        <label>Intro</label><textarea name="intro" rows="8" cols="24" onfocus="if(this.value=='Intro'){this.value=''};" onblur="if(this.value==''){this.value=='Intro'};" style="width:930px; height:100px;" title="Intro of the article" >Intro</textarea>
        
        <label>Author</label><input name="author" type="text" class="input-block-level" value="Author" size="26" onfocus="if(this.value=='Author'){this.value=''};" onblur="if(this.value==''){this.value=='Author'};" title="Author of the article (The default author is ZODML)"/>
        
        <label>URL</label><input name="url" type="text" class="input-block-level" value="Url" size="26" onfocus="if(this.value=='Url'){this.value=''};" onblur="if(this.value==''){this.value=='Url'};" title="Shortened URL for the Article's web URL"/>
        
        <label>Search Title</label><input name="searchtitle" class="input-block-level" type="text" value="Search" size="26" onfocus="if(this.value=='Search'){this.value=''};" onblur="if(this.value==''){this.value=='Search'};" title="Title of displayed search results"/>
        
        <input name="parse_var" type="hidden" value="new" />
        
        <br />
        <button class="btn btn-large btn-primary" type="submit">Upload</button>
      </form>
           <p>&nbsp;</p>
           
           
          </div>
          
          
          
          
        </div><!--/span-->
      </div><!--/row-->

      <hr>

      <footer>
        <p>&copy; ZODML 2013</p>
      </footer>

    </div><!--/.fluid-container-->

    <!-- Le javascript
    ================================================== -->
    <!-- Placed at the end of the document so the pages load faster -->
    <script src="../assets/js/jquery.js"></script>
    <script src="../assets/js/boot-transition.js"></script>
    <script src="../assets/js/boot-alert.js"></script>
    <script src="../assets/js/boot-modal.js"></script>
    <script src="../assets/js/boot-dropdown.js"></script>
    <script src="../assets/js/boot-scrollspy.js"></script>
    <script src="../assets/js/boot-tab.js"></script>
    <script src="../assets/js/boot-tooltip.js"></script>
    <script src="../assets/js/boot-popover.js"></script>
    <script src="../assets/js/boot-button.js"></script>
    <script src="../assets/js/boot-collapse.js"></script>
    <script src="../assets/js/boot-carousel.js"></script>
    <script src="../assets/js/boot-typeahead.js"></script>

</div>
</div>

</body>
</html>