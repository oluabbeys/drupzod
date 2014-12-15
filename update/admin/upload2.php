<?php
ini_set("display_errors", "off");
$target = "../../images/";
	$target = $target.basename($_FILES['uplo']['name']);
	$upload = ($_FILES['uplo']['name']);
	//$allowed_filetypes = array('.doc','.docx','.rtf');
	//$ext = substr($story, strpos($story,'.'), strlen($story)-1);
	
	
	  //echo "" ;
	  
	 
	  
	  if(move_uploaded_file($_FILES['uplo']['tmp_name'], $target)){
		  
		  //if(!in_array($ext,$allowed_filetypes))
//      		die("The file you attempted to upload is not allowed. We accept \".doc\" or \".docx\" or \".rtf\" formats.<br/>Click back button to fill form again");
		  
		  $date = date('Y-m-d');
		  $time = date('H:i:s');
		   
	include("../access.php");
	$sqlgo = mysql_query("INSERT INTO uploadimages (imagename, date, time) VALUES ('$upload','$date','$time')");
	
	if($sqlgo){
	$msg = "Image Uploaded";
	}else{
		$msg = "There was an error uploading the image, please try again...";
	}
	
}

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Upload Image</title>
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
<p> <a href="upload.php"><button class="btn btn-large btn-primary" type="submit" id="update">Upload another image</button></a></p>

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