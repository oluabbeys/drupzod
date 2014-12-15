<?php
include("../function.php");
page_protect();

if (!isset($_SESSION['hash']))
{
header("Location: ../index.php");
} 

if ($_SESSION['hash'] != $_GET['user'])
{
header("Location: index.php?user=".$_SESSION['hash']);

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
<?php
include("../access.php");
$per_page = 20; 

//getting number of rows and calculating no of pages
$sql = "SELECT * FROM contentsupdate WHERE status='uploaded' ORDER BY title ASC";
$rsd = mysql_query($sql);
$count = mysql_num_rows($rsd);
$pages = ceil($count/$per_page)

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML Website Edit</title>
<link href="../../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../../images/favicon.ico" rel="shortcut icon" />
<link href="../../css/pagination.css" type="text/css" rel="stylesheet" media="screen" />
<style>
#select{float:left; padding:5px; margin:0px 10px 0px 10px; width:150px;}

#select a{ color:#333; text-decoration:none;}

#select a:hover{padding:5px; -webkit-border-radius:3px; -moz-border-radius:3px; background-color:#3399FF; color:#fff;}

</style>

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
    
    <script type="text/javascript" src="../../js/loading.js"></script>
<script type="text/javascript">
	
	$(document).ready(function(){
		
	//Display Loading Image
	function Display_Load()
	{
	    $("#loading").fadeIn(900,0);
		$("#loading").html("<img src='images/loader.gif' />");
	}
	//Hide Loading Image
	function Hide_Load()
	{
		$("#loading").fadeOut('slow');
	};
	

   //Default Starting Page Results
   
	$("#pagination dt:first").css({'color' : '#EC9F00'});//.css({'border' : 'none'});
	
	Display_Load();
	
	$("#zip").load("load-data.php?page=1", Hide_Load());



	//Pagination Click
	$("#pagination dt").click(function(){
			
		Display_Load();
		
		//CSS Styles
		$("#pagination dt")
		.css({'border' : 'solid #CCC 1px'})
		.css({'color' : '#EC9F00'});
		
		$(this)
		.css({'color' : '#EC9F00'})
		.css({'border' : 'none'});

		//Loading Data
		var pageNum = this.id;
		
		$("#zip").load("load-data.php?page=" + pageNum, Hide_Load());
	});
	
	
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
<div style="padding:10px; font-size:13px; margin:20px 0px 30px 0px; color:#EC9F00; border:dashed 1px #ccc; box-shadow:3px 3px 3px #DDD; font-family:Verdana, Geneva, sans-serif; width:750px;"><h2>WELCOME TO THE ADMIN PANEL</h2></div>


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
              <li class="active"><a href="#">Home</a></li>
              <li><a href="upload.php?user=<?php echo $profile; ?>">Upload Image</a></li>
              <li><a href="upload-discover-nigeria.php?user=<?php echo $profile; ?>">Upload Discover Nigeria Article</a></li>
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

    <div class="container-fluid">
      <div class="row-fluid">
        <!--/span-->
        <div class="span9">
          <div class="hero-unit">
            <h2>Pages</h2>
           <div id="zip">
           <table>
           
           </table>
           </div>
          </div>
          
          
          <div style="width:500px; padding:1px; margin:15px 0px 15px 0px;">
                    	
									<dl id="pagination">
								<?php
									//Show page links
									for($i=1; $i<=$pages; $i++)
									{
										echo '<dt id="'.$i.'">'.$i.'</dt>';
									}
								?>
									</dl>	
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