<?php 
ini_set("display_errors", "off");
include("../access.php");

if ($_POST['parse_var'] == "new"){
	$hashremix = $_POST['hashskit'];
	$title = $_POST['title'];
	$title = mysql_real_escape_string(stripslashes($title));
	$intro = $_POST['intro'];
	$intro = mysql_real_escape_string(stripslashes($intro));
	$content = $_POST['content'];
	$content = mysql_real_escape_string(stripslashes($content));
	$url = $_POST['url'];
	$url = mysql_real_escape_string(stripslashes($url));
	$searchtitle = $_POST['searchtitle'];
	$searchtitle = mysql_real_escape_string(stripslashes($searchtitle));
	$pix = $_POST['pix'];
	$pix = mysql_real_escape_string(stripslashes($pix));
	
	$update = mysql_query("UPDATE articles SET title='$title', contents='$content', intro='$intro', url='$url', searchtitle='$searchtitle', pix='$pix' WHERE hash='$hashremix'");
	if($update){
	$msg = "Discover Nigeria Article, <font color=\"#FF0000\">".stripslashes($title)."</font> Content has been edited. <a href=\"other.php\"><button class=\"btn btn-large btn-primary\" type=\"submit\" id=\"update\">Edit Other Category Articles</button></a>";
	}
	else{
		$msg = "Problem connecting to server, please try again later.";
	}
	
}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Edit Content Page - Others Cateory</title>
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
	  .form-signin {
        max-width: 600px;
        padding: 19px 29px 29px;
        margin: 0 auto 20px;
        background-color: #fff;
        border: 1px solid #e5e5e5;
        -webkit-border-radius: 5px;
           -moz-border-radius: 5px;
                border-radius: 5px;
        -webkit-box-shadow: 0 1px 2px rgba(0,0,0,.05);
           -moz-box-shadow: 0 1px 2px rgba(0,0,0,.05);
                box-shadow: 0 1px 2px rgba(0,0,0,.05);
      }
      .form-signin .form-signin-heading,
      .form-signin .checkbox {
        margin-bottom: 10px;
      }
      .form-signin input[type="text"],
      .form-signin input[type="password"] {
        font-size: 16px;
        height: auto;
        margin-bottom: 15px;
        padding: 7px 9px;
      }
    </style>
    <link href="../assets/css/boot2.css" rel="stylesheet">
    <script src="http://tinymce.cachefly.net/4.0/tinymce.min.js"></script>
<script>
        tinymce.init({
			selector:'textarea',
			
			plugins: "code",
			convert_urls: false
			
			});
</script>
</head>

<body>
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                
                </div>
                
<!--END OF HEADER-->
<div id="content_holder">
<p>&nbsp;</p>
<?php

if(isset($_GET['code']) && isset($_GET['user'])){
	$hashcode = $_GET['code'];
	$user = $_GET['user'];
}


?>

<div class="navbar navbar-inverse navbar-fixed-top">
      <div class="navbar-inner">
        <div class="container-fluid">
          <button type="button" class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <?php
		  include("../access.php");
		  $pull = mysql_query("SELECT * FROM admin WHERE hash='$user'");
		  $rowpull = mysql_fetch_array($pull);
		  $adminname = $rowpull['username'];
		  ?>
          <a class="brand" href="#">ZODML Admin Panel</a>
          <div class="nav-collapse collapse">
            <p class="navbar-text pull-right">
              Logged in as <a href="#" class="navbar-link"><?php echo $adminname; ?></a>
            </p>
            <ul class="nav">
             <li><a href="index.php">Home</a></li>
              <li><a href="upload.php">Upload Image</a></li>
              <li><a href="upload-discover-nigeria.php">Upload Discover Nigeria Article</a></li>
              <li><a href="edit-discover-nigeria.php">Edit Discover Nigeria Article</a></li>
              <li><a href="short-story.php">Short Story</a></li>
              <li><a href="upload-newsletter.php">Newsletter</a></li>
              <li><a href="edit-newsletter.php">Edit Newsletter Articles</a></li>
              <li><a href="upload-events.php">Events</a></li>
              <li><a href="upload-archives.php">Did You Know</a></li>
              <li><a href="edit-dyn.php">Edit Did You Know</a></li>
              <li><a href="edit-events.php">Edit Events</a></li>
              <li><a href="../logout_proc.php">Logout</a></li>
              <!--<li><a href="#contact">Contact</a></li>-->
            </ul>
          </div><!--/.nav-collapse -->
        </div>
      </div>
    </div>
    

    <div class="container-fluid">
      <div class="row-fluid">
        <!--/span-->
        <div>
        <?php
          include_once("../access.php");
		  $getcontent2 = mysql_query("SELECT * FROM articles WHERE hash='$hashcode'");
		  $rowgetcontent2 = mysql_fetch_array($getcontent2);
		  $id2 = $rowgetcontent2['id'];
		  $title2 = $rowgetcontent2['title'];
		  $contents2 = $rowgetcontent2['contents'];
		  $intro = $rowgetcontent2['intro'];
		  $url = $rowgetcontent2['url'];
		  $search = $rowgetcontent2['searchtitle'];
		  $pix = $rowgetcontent2['pix'];
		  
		?>
          <div class="hero-unit">
          <h3>Contents for <?php echo $title2; ?></h3>
           <div style="padding: 10px; width: 850px; font-family: Verdana, Geneva, sans-serif; font-size:13px; margin:10px 0px 10px 10px;"><?php echo $msg; ?></div>  
          
            <form class="form-signin" method="post" id="formail" action="other-edit.php?code=<?php echo $hashcode; ?>&user=<?php echo $user; ?>">
            <input type="hidden" name="hashskit" id="hashskit" value="<?php echo $hashcode; ?>" />
             <label>Title</label><input type="text" class="input-block-level" name="title" id="title" value="<?php echo $title2; ?>">
              
             <label>Intro</label><textarea style="width:100%; height:100px;" name="intro" id="intro"><?php echo $intro; ?></textarea>
             
             <label>Article</label><textarea style="width:100%; height:300px;" name="content" id="content"><?php echo $contents2; ?></textarea>
              <label>Url</label><input type="text" class="input-block-level" name="url" id="url" value="<?php echo $url; ?>">
             
             <label>Search Title</label><textarea style="width:100%; height:100px;" name="searchtitle" id="searchtitle"><?php echo $search; ?></textarea>
             
             <label>Landing Page Picture</label><input type="text" class="input-block-level" name="pix" id="pix" value="<?php echo $pix; ?>">
             
             <input name="parse_var" type="hidden" value="new" />
             
             <button class="btn btn-large btn-primary" type="submit" id="update">Update</button>
            </form>
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