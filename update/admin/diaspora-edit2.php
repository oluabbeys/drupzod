<?php 
//ini_set("display_errors", "off");
include("../access.php");
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
	$msg = "Discover Nigeria Article, <font color=\"#FF0000\">".$title."</font> Content has been edited.";
	}
	else{
		$msg = "Problem connecting to server, please try again later.";
	}
	

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Success - <?php echo $title; ?> Edit</title>
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
</head>

<body>
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                
                </div>
                
<!--END OF HEADER-->
<div id="content_holder">
<p>&nbsp;</p>
<div class="container-fluid">
<div class="row-fluid">

<p><?php echo $msg; ?></p>
<p>&nbsp;</p>
<p> <a href="diaspora.php"><button class="btn btn-large btn-primary" type="submit" id="update">Edit other Diaspota Articles</button></a></p>

</div>
</div>
<hr>

      <footer>
        <p>&copy; ZODML 2013</p>
      </footer>
      </div>
      </div>
</body>
</html>