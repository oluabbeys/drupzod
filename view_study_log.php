<?php

session_start();

if (!isset($_COOKIE['dlcusernamecookie']) && !isset($_COOKIE['dlcpassword2cookie']))

{

header("Location: community.php");

} 



if ($_COOKIE['dlcuseridcookie'] != $_GET['_zodml'])

{

header("Location: view_study_log.php?_zodml=" . $_COOKIE['dlcuseridcookie']);

} 



include('connect2.php');



if(isset($_GET['_zodml']))

{

$profileid = $_GET['_zodml'];

}



$query= mysql_query("select * from dlcmember where id = '$profileid'");

$r = mysql_fetch_array($query);

$profilename = $r['firstname'] . ' ' . $r['lastname'];

$whoid = $r['id'];

$id = $_GET['_zodml']; 



?>



<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library services|Digital Learning Community::Create Study Log</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu4.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/comment.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/site-CSS.css" rel="stylesheet" type="text/css">
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript" src="create_study.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});  
});
</script>
<!-- Piwik -->
<script type="text/javascript">
var pkBaseURL = (("https:" == document.location.protocol) ? "https://zodml.org/piwik/" : "http://zodml.org/piwik/");
document.write(unescape("%3Cscript src='" + pkBaseURL + "piwik.js' type='text/javascript'%3E%3C/script%3E"));
</script><script type="text/javascript">
try {
var piwikTracker = Piwik.getTracker(pkBaseURL + "piwik.php", 1);
piwikTracker.trackPageView();
piwikTracker.enableLinkTracking();
} catch( err ) {}
</script><noscript><p><img src="http://zodml.org/piwik/piwik.php?idsite=1" style="border:0" alt="" /></p></noscript>
<!-- End Piwik Tracking Code -->
<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>


</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
               
                	<div id="searchhold">
                <form name="form1" action="findbook2.php">
                <table>
               <tr>
               <td>
                <select name="catalogue" id="select_box"><option selected="selected">Keyword</option><option>Title</option><option>Author</option><option>Subject</option></select>
               <!-- <input type="text" name="catalogue" />-->
               </td>
               <td>
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search" />
          		</div>
                </td>
                <td>
                <div id="submit_button"><button id="search_button">Search</button></div>
                </td>
                </tr>
                </table>
                 <label>zodml.org</label><input name="search" type="radio" value="1" onclick="chooseOne();" />&nbsp;&nbsp;<label>Catalogue</label><input name="search" type="radio" value="other" onclick="chooseOne();"/>
                
                 </form>
                	</div>
                </div>	
                </div>
		<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">
	<!--COMMENT HOLD-->
	<div id="coment_hold">
    <table width="1015">
    	<tr>
        <td width="213" valign="top">
    <!--COMMENT HOLD LEFT-->
    	<div id="comment_left">
        	<!--<table cellspacing="0" align="center">
            <tr>
            	 <td width="100" height="100" align="center" valign="top" id="pix_dp">-->
                 <div id="pix_dp_hold">
                 <div id="pix_dp">
							   <?php

							

$rquery= mysql_query("select * from dlcmember where id = " . $profileid);

$rq=mysql_fetch_array($rquery);



$senderpics=$rq['mypics'];







if ($senderpics != ';' && $senderpics != '' && $senderpics != 'null')

{

?>

                                                  <?php

																		

																

									$image = "images/" . $profileid . "/$senderpics";

																		

									$max_width = 100;

									if(!$max_width)

									$max_width = 100;

									

									$max_height = 100;

									if(!$max_height)

									$max_height = 100;

									

									$size = GetImageSize($image);

									$width = $size[0];

									$height = $size[1];

									

									$x_ratio = $max_width / $width;

									$y_ratio = $max_height / $height;

									

									//if ( ($width <= $max_width) && ($height <= $max_height) )

									//{

									$tn_width = $max_width;

									$tn_height = ($height/$width) * $max_width;



												

									

									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style=''   vspace='' border='0'>";

									

									}

									else

									{

									echo "<font face='trebuchet ms' size='4' color='#80869b'><a href='upload_image.php?_zodml=$profileid'>Add Your Profile Picture</a></font>";

									

									}

									?>

                               </div>
                               </div>
							  
							  <!--</td>
                              </tr>
                              </table>-->
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:12px; line-height:20px; letter-spacing:2px; font-weight:900; ">
                              <span style="color:#EC9F00;"><?php echo $profilename ?></span>
                              </div>
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; ">
	                              <div style="width:23px; height:auto; float:left;"><img src="images/community.png" width="24" height="24" /></div><div id="links"><a href="welcome.php?profileid=<?php echo $_GET['_zodml'] ?>">Community page</a></div>
                              </div>
                              <!--<div style="width:150px; height:20px; margin-left:15px; padding:5px; font-size:11px; ">
                              		 <div style="width:23px; height:auto; float:left;"><img src="images/Create Syudy Log.png" width="20" height="16" /></div><div style="width:120px; float:right; margin-left:5px; height:auto;"><a href="">Create Study Log</a></div>
                              </div>-->
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; margin-top:5px; ">
                              		 <div style="width:23px; height:auto; float:left;"><img src="images/Update_Study_Log.png" width="24" height="24" /></div><div id="links"><a href="create_study_log.php?profileid=<?php echo $_GET['_zodml'] ?>">Create Study Log</a></div>
                              </div>
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; margin-top:5px; ">
                              <div style="width:23px; height:auto; float:left;"><img src="images/logout.png" width="20" height="22" /></div><div id="links"> <a href="logout_process.php?profileid=<?php echo $_GET['_zodml'] ?>">Sign out</a></div>
                             
              </div>
        </div>

        <!--END OF COMMENT HOLD LEFT-->
        </td>
        <td valign="top">
        <!--COMMENT HOLD RIGHT-->
        <div id="comment_right2">
        <div style="padding:5px; font-size:12px; font-weight:800; color:#444;  margin-bottom:3px;">View your study log(s)</div>
        <?php
ini_set('display_errors', 'off');

//fetches data from the database
$getquery = mysql_query("SELECT * FROM dlcstudylog WHERE memberid = '$profileid' order by id ASC");
while($row = mysql_fetch_array($getquery)){
	//$title = $row['studytitle'];
	//$study = $row['studycontents'];
	//$date = $row['date'];
	//$time = $row['time'];
	//$studyid = $row['id'];
	
	//setcookie("studyid",$studyid,0,'/','');
	
	//displays the data
	



?>
        	
            <div style="padding:5px; font-size:14px; color:#EC9F00; letterspacing:10px; margin-bottom:6px;"><?php $row['studytitle']; ?></div>
            <div style="width:750px; height:auto;">
            <table>
            <tr>
            <td><div style="padding:8px; width:680px; height:auto; border-top:solid 1px #CCC; border-bottom:solid 1px #CCC; margin-bottom:10px; font-size:11px;"><?php echo $row['studycontents']; ?></div></td><td><div style="padding:8px; width:30px; height:10px; margin-bottom:10px; font-size:11px;"><a href="edit_log.php?code=<?php echo $row['id']; ?>">Edit</a></div></td>
            </tr>
            </table>
            </div>
            
          <div style="font-size:10px; width:750px; height:15px;">Posted: <?php echo $row['date']; ?><?php echo $row['time']; ?></div>
        	<?php }?>
            <p>&nbsp;</p>
        </div>
        <!--END OF COMMENT HOLD RIGHT-->
    	</td>
        </tr>
        </table>
    </div>
    <!--END OF COMMENT HOLD-->
</div>
<!--END OF CONTENT-->

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