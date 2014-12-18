<?php
ini_set("display_errors", "off");
include("../../Nigeria/scripts/config2.php");
$per_page = 10; 

//getting number of rows and calculating no of pages
$sql = "SELECT * FROM ebookuser ORDER BY id ASC";
$rsd = mysql_query($sql);
$count = mysql_num_rows($rsd);
$pages = ceil($count/$per_page)

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML | e-Library | Users</title>
<link href="../../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../../css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../../images/favicon.ico" rel="shortcut icon" />
<link href="../../css/pagination.css" type="text/css" rel="stylesheet" media="screen" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../../js/pixreg1.js"></script>
<script type='text/javascript' src="../../js/pixreg2.js"></script>
<script type='text/javascript' src='../../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../../js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="../../js/search.js"></script>
<script type="text/javascript" src="../../js/contact.js"></script>
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
	
	$("#shortstory_content_slider2").load("user-data.php?page=1", Hide_Load());



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
		
		$("#shortstory_content_slider2").load("user-data.php?page=" + pageNum, Hide_Load());
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
                <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
		<!--END OF HEADER-->
<br />

<br />

<!--CONTENT HOLDER-->
<div id="content_holder">
					
                   
                        <div id="elibrary_content_holder">
                        	<!--Category list on the left-->
                        	<?php //include("category.php"); ?>
                        	<!--End of category list-->
                            
                        		<!--Content slider on the right-->
                                <h1 style="color:#EC9F00; font-size:14px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; margin-bottom:10px;">USERS SIGNED UP FOR THE e-Library SECTION</h1>
                                
                        		<div id="shortstory_content_slider2">
                                	
                                
                        
                        
                                                 
                        		</div>
                       <!--END OF CONTENT LAYER 2-->
                        <!--PAGINATION-->
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
                                 <!--END OF PAGINATION-->  
                        
          
</div>
<!--END OF CONTENT HOLDER-->
</div>
<!--END OF THE BODY HOLDER-->





</body>
</html>