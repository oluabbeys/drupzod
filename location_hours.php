<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>zodml.org .::: Blog</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
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
                <form name="form1" action="#">
                <select name="catalogue" id="select_box"><option selected="selected">Keyword</option><option>Title</option><option>Author</option><option>Subject</option></select>
               <!-- <input type="text" name="catalogue" />-->
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search"/>
          
          <label>zodml.org</label><input name="search" type="radio" value="1" onclick="chooseOne();" />&nbsp;&nbsp;<label>Catalogue</label><input name="search" type="radio" value="other" onclick="chooseOne();"/> 
                </div>
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

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer1">
                        About The Library > Location Hours
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table>
                        <tr><td>
                        			<div id="aboutus_content_holder3">
                                        <div id="aboutus_cathy">
                                        CONTENTS  TO FILL THIS SPACE
                                        
                                        </div>
                         			</div>
                           </td>
                           <td valign="top">         
                                    <div id="aboutus_others_hold">
                               
                            			<div id="aboutus_shortlinks">
                                        	<div id="aboutus_shortlinks_title"">Other links</div>
                                        </div>	
                            
                            	</div>
                            </td>
                            </tr>
                            </table>        
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
          
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