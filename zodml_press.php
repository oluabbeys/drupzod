<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>zodml.org .::: Blog</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
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

<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>
<!--GOOGLE TRACKING CODE-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-33455239-1', 'zodml.org');
  ga('send', 'pageview');

</script>
<!--END OF GOOGLE TRACKING CODE-->

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

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer1">
                        Our Team > CONTACTS
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table>
                        <tr><td>
                        			<div id="aboutus_content_holder3">
                                        <div id="aboutus_cathy">
                                        CONTENTS ABOUT CATHY TO FILL THIS SPACE
                                        
                                        </div>
                         			</div>
                           </td>
                           <td valign="top">         
                                    <div id="aboutus_others_hold">
                               
                            			<div id="aboutus_shortlinks">
                                        	<div id="aboutus_shortlinks_title">Other links</div>
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

<!-- Piwik -->
<script type="text/javascript">
  var _paq = _paq || [];
  _paq.push(["setDocumentTitle", document.domain + "/" + document.title]);
  _paq.push(["trackPageView"]);
  _paq.push(["enableLinkTracking"]);

  (function() {
    var u=(("https:" == document.location.protocol) ? "https" : "http") + "://zodml.org/piwik/";
    _paq.push(["setTrackerUrl", u+"piwik.php"]);
    _paq.push(["setSiteId", "1"]);
    var d=document, g=d.createElement("script"), s=d.getElementsByTagName("script")[0]; g.type="text/javascript";
    g.defer=true; g.async=true; g.src=u+"piwik.js"; s.parentNode.insertBefore(g,s);
  })();
</script>
<!-- End Piwik Code -->

<!-- Piwik Image Tracker -->
<noscript>
<img src="http://zodml.org/piwik/piwik.php?idsite=1&amp;rec=1" style="border:0" alt="" />
</noscript>
<!-- End Piwik -->
</body>
</html>