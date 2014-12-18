<?php 
ini_set("display_errors", "off");
include("../../Nigeria/scripts/config.php");
if ($_POST['parse_var'] == "new"){
//The next 3 lines gather the information entered into form and turns them into php variables so they can be entered into the database
        $title = $_POST['title'];
		$title = mysql_real_escape_string($title);
	   $contents = $_POST['contents'];
	   $contents = mysql_real_escape_string(stripslashes($contents));
	   
	   $hashin = str_shuffle("websiteedits12345");
	   $upload = 'uploaded';
	   //$search = mysql_real_escape_string($search);
//This bit places the php variables into the correct columns in your database
//Now() generates the current date
        $sqlcreate = mysql_query("INSERT INTO contentsupdate (title, contents, hash, status) VALUES('$title','$contents','$hashin','$upload')");
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
<title>Upload Contents</title>
<link href="../../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../../images/favicon.ico" rel="shortcut icon" />
</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                	
                </div>
		<!--END OF HEADER-->



<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="blog_content_layer1">
                        Upload Website Contents
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        
                        <div>
                        <?php
                        //this is where the response message will be printed
						 print"$msg";
 						?>
                        </div>
                        <div>
                        <form action="create_article.php" method="post" name="new">
                            <table>
                            <tr>
                            <td colspan="2">
                             <input name="title" type="text" value="Title" size="26" onfocus="if(this.value=='Title'){this.value=''};" onblur="if(this.value==''){this.value=='Title'};"/>
                            <span class="small_print contents style1"> Article</span><span class="contents style1"> title<br />
                            <br /></span></td></tr>
                            
                            <tr><td><textarea name="contents" rows="8" cols="24" onfocus="if(this.value=='Content'){this.value=''};" onblur="if(this.value==''){this.value=='Content'};" >Content</textarea></td>
                             
                            </tr>
                             
                            
                            
                            
                            <tr>
                            <td colspan="2">
                            <input name="parse_var" type="hidden" value="new" />
                            <input type="submit" name="button3" id="button3" value="Submit" />
                            <!--<input type="reset" name="Reset" id="button" value="Reset" />-->
                            </td>
                            </tr>
                            </table>
                        </form>
                        </div>

          
  </div>
<!--END OF CONTENT HOLDER-->

<!--FOOTER-->
<div id="footer">

<table align="center">
<tr>
<td align="center">Privacy Policy | Disclaimer | Careers | Contact Us</td>
</tr>
<tr>
<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>
</tr>
</table>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
</body>
</html>