<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">


<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="ZODML, zodml.org, ZODML Learning JSS, ZODML Achieve More JSS, JSS Mathematics, Free Download Mathematics books, Mathemathics e-books, Free e-books" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<title>JSS- Mathematics</title>
<link rel="stylesheet" type="text/css" href="css/menu.css"/>
<link rel="stylesheet" type="text/css" href="css/past_questions.css"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type="text/javascript" src="js/contact.js"></script>

<!--Modal Window-->

<script type="text/javascript" src="http://code.jquery.com/jquery-latest.pack.js"></script>
<script>

$(document).ready(function() {	

	//select all the a tag with name equal to modal
	$('a[name=modal]').click(function(e) {
		//Cancel the link behavior
		e.preventDefault();
		
		//Get the A tag
		var id = $(this).attr('href');
	
		//Get the screen height and width
		var maskHeight = $(document).height();
		var maskWidth = $(window).width();
	
		//Set heigth and width to mask to fill up the whole screen
		$('#mask').css({'width':maskWidth,'height':maskHeight});
		
		//transition effect		
		$('#mask').fadeIn(300);	
		$('#mask').fadeTo("fast",0.8);	
	
		//Get the window height and width
		var winH = $(window).height();
		var winW = $(window).width();
              
		//Set the popup window to center
		$(id).css('top',  winH/2-$(id).height()/2);
		$(id).css('left', winW/2-$(id).width()/2);
	
		//transition effect
		$(id).fadeIn(300); 
	
	});
	
	//if close button is clicked
	$('.window .close').click(function (e) {
		//Cancel the link behavior
		e.preventDefault();
		
		$('#mask').hide();
		$('.window').hide();
	});		
	
	//if mask is clicked
	$('#mask').click(function () {
		$(this).hide();
		$('.window').hide();
	});			

	$(window).resize(function () {
	 
 		var box = $('#boxes .window');
 
        //Get the screen height and width
        var maskHeight = $(document).height();
        var maskWidth = $(window).width();
      
        //Set height and width to mask to fill up the whole screen
        $('#mask').css({'width':maskWidth,'height':maskHeight});
               
        //Get the window height and width
        var winH = $(window).height();
        var winW = $(window).width();

        //Set the popup window to center
        box.css('top',  winH/2 - box.height()/2);
        box.css('left', winW/2 - box.width()/2);
	 
	});
	
});

</script>
<!--End of Modal WIndow-->

<!--GOOGLE PAGE-TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33455239-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->

</head>



<body background="images/bear_footprint.png">
<div style="width:100%; height:auto;">

<div class="top"><a href="index.php"><div class="card"></div></a></div>


<div id="site_container" style="border:2px solid #093">
<table width="1015">
<tr>
<td valign="top">
<div id="content_container">

<!-- start of top section -->

<div id="achieve_container">
  <div style=" margin: 30px 0px 0px 10px; float:right; height inherit; width:200px;"><b><a href="jss_home.php">back to ZODML Learning</font></a></b></div>

<div class="main_title">Achieve More- Mathematics</div>

<div id="content_wrapper">

	<div id="page_navigation">

<div id="minitabs" ><a href="get_more.php"><img src="images/getmore_mini.png"/></a></div>
<div id="minitabs" ><a href="study_more.php"><img src="images/studymore_mini.png"/></a></div>
<div id="minitabs"><a href="learn_more.php"><img src="images/learnmore_mini.png"/></a></div>
</div>


  </div>
 
</div>
 
</td>
</tr>
<tr>
<td>
<!-- End of top section -->


<div id="shelf_stack">
<div id="top_shelf"></div>
<div id="middle_shelf">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="zodml_mathjss/MasterMathSolvingWordProblems.pdf" target="_blank"><img class="books" src="images/learning_images/maths_book01.png" border="0" alt="Master Math: Solving Word Problems" title="Master Math: Solving Word Problems"style="cursor:pointer; cursor:none;"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="zodml_mathjss/Math Wonders to Inspire Teachers and Students.pdf" target="_blank"><img class="books" src="images/learning_images/maths_book02.png" border="0" alt="Math Wonders to Inspire Students and Teachers" title="Math Wonders to Inspire Students and Teachers" style="cursor:pointer; cursor:none;"></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="zodml_mathjss/Cambridge University Press Maths A Students Survival Guide 2nd(2).pdf" target="_blank"><img class="books" src="images/learning_images/maths_book03.png" border="0" alt="Cambridge University Press Maths, A Survival Guide, 2nd Edition" title="Cambridge University Press Maths, A Survival Guide, 2nd Edition" style="cursor:pointer; cursor:none;"></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="zodml_mathjss/InstantRevisionASmaths.pdf" target="_blank"><img class="books" src="images/learning_images/maths_book04.png" border="0" alt="Instant Revision: GCSE Maths" title="Instant Revision: GCSE Maths" style="cursor:pointer; cursor:none;"></a><br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="zodml_mathjss/InstantRevisionASmaths.pdf" target="_blank"><img class="books" src="images/learning_images/maths_book05.png" border="0" alt="Instant Revision: AS Maths" title="Instant Revision: AS Maths" style="cursor:pointer; cursor:none;"></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="zodml_mathjss/the_book_of_numbers.pdf" target="_blank"><img class="books" src="images/learning_images/maths_book06.png" border="0" alt="The Book of Numbers" title="The Book of Numbers" style="cursor:pointer; cursor:none;"></a>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/msmath_algebra/index.html" target="_blank"><img src="images/learning_images/maths_book07.png" alt="Algebra" width="86" height="103" border="0" class="books" style="cursor:pointer; cursor:none;" title="Algebra"></a>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/msmath_exponents/index.html" target="_blank"><img src="images/learning_images/maths_book09.png" alt="Exponents and Scientific Notations" width="84" height="106" border="0" class="books"style="cursor:pointer; cursor:none;" title="Exponents and Scientific Notations"></a>
</div>

<div id="middle_shelf">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://www.gutenberg.org/files/38536/38536-h/38536-h.htm" target="_blank"><img src="images/learning_images/maths_book11.png" alt="A Review of Algebra by Romeyn Henry Rivenburgs" width="84" height="106" border="0" class="books" style="cursor:pointer; cursor:none;" title="A Review of Algebra by Romeyn Henry Rivenburg"></a>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/msmath_decimals/index.html" target="_blank"><img src="images/learning_images/maths_book08.png" alt="Decimals" width="84" height="106" border="0" class="books" style="cursor:pointer; cursor:none;" title="Decimals"></a>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/ebook-place-value/index.html" target="_blank"><img src="images/learning_images/maths_book13.png" alt="Place Value" width="84" height="106" border="0" class="books" style="cursor:pointer; cursor:none;" title="Place Value"></a>


&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/geometry_angles/index.html" target="_blank"><img src="images/learning_images/maths_book10.png" alt="Geometry" width="84" height="106" border="0" class="books"style="cursor:pointer; cursor:none;" title="Geometry"></a><br />

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/ebook-inequalities/index.html" target="_blank"><img src="images/learning_images/maths_book12.png" alt="Inequalities" width="84" height="106" border="0" class="books" style="cursor:pointer; cursor:none;" title="Inequalities"></a>


&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="http://k12opened.com/ebooks/math/msmath_statistics/index.html" target="_blank"><img src="images/learning_images/maths_book14.png" alt="Data and Statistics" width="84" height="106" border="0" class="books"style="cursor:pointer; cursor:none;" title="Data and Statistics"></a> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<a href="#dialog2" name="modal"><img src="images/learning_images/folder.png" alt="Cowbell Maths Competition: Past Questions" height="95" border="0" class="books" style="cursor:pointer; cursor:none;" title="Cowbell Maths Competition: Past Questions" /></a>
</div>

</div>

</td>
<!--<td>
<br/><br/><br/><br/><br/>
<div class="comment"></div>


</td>-->
</tr>
<tr>
<td height="253" valign="top">
<div class="othersubjects">
<div style="width:758px; background:url(images/pop2.png); padding:5px;">
&nbsp; &nbsp;&nbsp; &nbsp;&nbsp; &nbsp;&nbsp; &nbsp;Other Subjects
</div>
<div style="height:150px; float:left; margin-right: 70px; margin-top:20px;margin-left:70px;"><a href="science.php"><img src="images/Sciencetab.png" width="150px" height="150px"/></a></div>
<div style="height:150px; float:left; margin-right: 70px; margin-top:20px;"><a href="english.php"><img src="images/Englishtab.png" width="150px" height="150px"/></a></div>
<span style="height:150px; float:left; margin-right: 70px; margin-top:20px;"><a href="english_lit.php"><img src="images/EnglishLittab.png" width="150px" height="150px"/></a></span><br/><br/><br/>
</div>

</td>
</tr>
<tr>

<td valign="top"><div align="center" style="margin-top:10px;">
	<table>
    <tr>
    <td><a href="#contactForm"><div id="poppping"></div></a></td>
    <td><img src="images/facebook_follow.png" width="60" height="60"/></td>
    <td><img src="images/twitter_follow.png" width="60" height="60" /></td>
    </tr> 
    </table>
 </div>
</td>
</tr>
</table>
</div>

<!--FOOTER-->


<div id="footer">


<table align="center">
<tr>
<td align="center"><a href="index.php">Go to ZODML.org</a> | <a href="privacy-policy.php">Privacy Policy</a> | <a href="disclaimer.php">Disclaimer</a> | Contact Us</td>
</tr>
<tr>
<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>
</tr>
</table>
</div>
</div>
<!--comment form-->
<form id="contactForm" action="learning-process-form.php" method="post">

  <h2>Send us a message</h2>

  <ul>

    <li>
      <label for="senderName" class="label">Your Name</label>
      <input type="text" name="senderName" id="senderName" placeholder="Please type your name" required maxlength="40" class="input" />
    </li>

    <li>
      <label for="senderEmail" class="label">Your Email Address</label>
      <input type="email" name="senderEmail" id="senderEmail" placeholder="Please type your email address" required maxlength="50" class="input" />
    </li>

    <li>
      <label for="message" style="padding-top: .5em;" class="label">Your Message</label>
      <textarea name="message" id="message" placeholder="Please type your message" required cols="80" rows="10" maxlength="10000" class="textarea"></textarea>
    </li>
  <li> <center>
   <?php
          require_once('recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?></center>
        </li>
  </ul>

  <div id="formButtons">
    <input type="submit" id="sendMessage" name="sendMessage" value="Send Message" />
    <input type="button" id="cancel" name="cancel" value="Cancel" />
  </div>

</form>

<div id="sendingMessage" class="statusMessage"><p>Sending your message. Please wait...</p></div>
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We'll get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>


<div id="boxes">

<!-- Start of Sticky Note -->
<div id="dialog2" class="window">
 	<a href="zodml_mathjss/2009 J.pdf" target="_blank">Cowbell Junior Mathematics- 2009</a><br/><br/>
    <a href="zodml_mathjss/2010 J.pdf" target="_blank">Cowbell Junior Mathematics- 2010</a><br/><br/>
    <a href="zodml_mathjss/2011 J.pdf" target="_blank">Cowbell Junior Mathematics- 2011</a><br/>
<input type="button" value="Close it" class="close"/>
</div>
<!-- End of Sticky Note -->
</body>
</html>