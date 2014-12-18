<?php
include("../function.php");
page_protect();

if (!isset($_SESSION['hash']))
{
header("Location: ../index.php");
} 

if ($_SESSION['hash'] != $_GET['user'])
{
header("Location: upload-archives.php?user=".$_SESSION['hash']);

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
        $date = $_POST['date'];
		$date = mysql_real_escape_string(stripslashes($date));
	   $content = $_POST['content'];
	   $content = mysql_real_escape_string(stripslashes($content));
	   $hashin = str_shuffle("didyouknowarchives098765432/=");
	   
//This bit places the php variables into the correct columns in your database
//Now() generates the current date
        $sqlcreate = mysql_query("INSERT INTO archives (contents, date, hash)
		VALUES('$content','$date', '$hashin')");
//produces a message to let you know if the data has been successfully submited or not.
        if ($sqlcreate){
            $msg = '<font color="#009900">Did You Know Archive has been uploaded!</font>';
        } else {
			$msg = '<font color="#FF0000">Problems connecting to server, please try again later.</font>';
		}
}

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Upload Did You Know</title>
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
              <li><a href="edit-discover-nigeria.php?user=<?php echo $profile; ?>">Edit Discover Nigeria Article</a></li>
              <li><a href="short-story.php?user=<?php echo $profile; ?>">Short Story</a></li>
              <li><a href="upload-newsletter.php?user=<?php echo $profile; ?>">Newsletter</a></li>
              <li><a href="edit-newsletter.php?user=<?php echo $profile; ?>">Edit Newsletter Articles</a></li>
              <li><a href="upload-events.php?user=<?php echo $profile; ?>">Events</a></li>
              <li class="active"><a href="upload-archives.php?user=<?php echo $profile; ?>">Did You Know</a></li>
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
            <h2>Upload Did You Know Archive</h2>
            
            <br />
          <p><?php echo $msg; ?></p>
           <form class="form-signin" action="upload-archives.php?user=<?php echo $profile; ?>" method="post" name="new">
        
        <label> Date</label><input name="date" type="text" class="input-block-level" title="Title of the article" value="Date" size="26" onfocus="if(this.value=='Date'){this.value=''};" onblur="if(this.value==''){this.value=='Date'};"/>
        
        <label>Content</label><textarea name="content" rows="8" cols="24" onfocus="if(this.value=='Content'){this.value=''};" onblur="if(this.value==''){this.value=='Content'};" style="width:930px; height:300px;" title="Content of the article" >Content</textarea>
        
        
        
        
        
        <input name="parse_var" type="hidden" value="new" />
        
        <br />
        <button class="btn btn-large btn-primary" type="submit">Upload</button>
      </form>
           <p>&nbsp;</p>
           <p style="color:#FF0000;">Note: The content for Did You Know Archive for past week(s) should be typed out in this format before uploading.</p>
           <textarea style="width:600px; height:150px;">
           Date format: Jan 3 - 27 2090 
           
           <ul>
           <li>Did you know 1</li>
           <li>Did you know 2</li>
           <li>Did you know 3</li>
           </ul>
           </textarea>
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