<?php
include("../function.php");
page_protect();

if (!isset($_SESSION['hash']))
{
header("Location: ../index.php");
} 

if ($_SESSION['hash'] != $_GET['user'])
{
header("Location: edit-discover-nigeria.php?user=".$_SESSION['hash']);

} 

if(isset($_GET['user'])){
	$profile = $_GET['user'];
}

include("../access.php");
$sql = mysql_query("SELECT * FROM admin WHERE hash='$profile'");
$row = mysql_fetch_array($sql);
$name = $row['username'];
$id = $row['id'];


?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Edit Discover Nigeria</title>
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
              <li><a href="upload-discover-nigeria.php?user=<?php echo $profile; ?>">Upload Discover Nigeria Article</a></li>
              <li class="active"><a href="edit-discover-nigeria.php?user=<?php echo $profile; ?>">Edit Discover Nigeria Article</a></li>
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
        <div class="span9">
         
            <h2>Categories</h2>
          <div style="width:1015px;height:250px;">
               		<div id="discover_nig_content_layer1_sample_pix"><a href="state.php"><img src="../../images/geography_category_articles.png" width="230" height="230" /></a></div>
                  <div id="discover_nig_content_layer1_sample_pix"><a href="people.php"><img src="../../images/people_category2.png" width="230" height="230" /></a></div>
                  <div id="discover_nig_content_layer1_sample_pix"><a href="diaspora.php"><img src="../../images/diaspora_category2.png" width="230" height="230" /></a></div>
                  <div id="discover_nig_content_layer1_sample_pix"><a href="other.php"><img src="../../images/geography_category_others.png" width="230" height="230" /></a></div>
                  <div id="discover_nig_content_layer1_sample_pix"><a href="page.php"><img src="../../images/geography_category_pages.png" width="230" height="230" /></a></div>
                  
  
          
          
          
        </div><!--/span-->
      </div><!--/row-->

      

      

    </div><!--/.fluid-container-->
    <p>&nbsp;</p>
    <hr>
    <footer>
        <p>&copy; ZODML 2013</p>
      </footer>

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