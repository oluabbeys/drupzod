<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="ZODML, zodml.org, Free Online Library in Nigeria, Free e-Books, Learning Resources, e-Library, free pdf, download pdf" />
<meta name="description" content="We offer free access to educational resources in our Library to aid self-learning where people can educate and empower themselves." />
<meta name="googlebot" content="index, follow" />
<meta name="robots" content="index, follow" />
<meta name="Revisit-After" content="7 days" />
<meta name="city" content="Lagos" />
<meta name="country" content="Nigeria(NGA)" />
<meta name="state" content="LA" />
<meta name="zip code" content="101233" />
<meta name="subject" content="Online Library in Nigeria, Learning Resources" />
<meta name="author" content="Ehis Anthony" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<title>ZODML | e-Library | Free e-Books | Download pdf</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/slider.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="../js/jcarousellite1.0.1_min.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript" src="../js/contact.js"></script>
<script type="text/javascript">
$(function() {
    $("#slidertext").jCarouselLite({
        btnNext: ".next",
        btnPrev: ".prev"
    });
});

</script>
<script type="text/javascript">
$(function() {
    $("#slidertext2").jCarouselLite({
        btnNext: ".next2",
        btnPrev: ".prev2"
    });
});

</script>
<script type="text/javascript">
$(function() {
    $("#slidertext3").jCarouselLite({
        btnNext: ".next3",
        btnPrev: ".prev3"
    });
});

</script>
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

<!--facebook javascript-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<!--end of facebook javascript-->

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
<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_buffer"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-

521f68de301bc049"></script>
<!-- AddThis Button END -->
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
<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->
<br />

<!--CONTENT HOLDER-->
<div id="content_holder">
					<div id="ebooklogout2"><a href="logout.php?zodmlebooks=<?php echo $_GET['ebook']; ?>"><img src="../images/ebooklogout.png" width="100" height="25" /></a></div>
                    <!--CONTENNT LAYER 1-->
                    <!--<div id="elibrary_layer1_sample">
                            
                    </div>
                    <div id="welcome_msg_elibrary">
                                <p>Welcome to the ZODML e-Library. Browse our collection of free e-books and download PDFs on a variety of subjects, from science and engineering textbooks to classic fiction and poetry. Our selections are continuously growing, so check back often for new titles. </p>
                            </div>-->
                    <!--END OF CONTENT LAYER 1-->
                
                        <!--CONTENT LAYER 2-->
                        <div id="elibrary_content_holder">
                        	<!--Category list on the left-->
                        	<?php include("category2.php"); ?>
                        	<!--End of category list-->
                        		<!--Content slider on the right-->
                        		<div id="elibrary_content_slider">
                                <!--New addtion-->
                                	<div id="new_addition_title">New Addition</div>
                       				 <div id="elibrary_content_slider_one">
                            <div class="details">
                      <!--slider prev button-->    
                    <a class="prev" href="#"><img src="../images/prev.png" alt="" /> </a>
        
                          <div id="sliderwrap">
                                <div id="slidertext"><!-- The slider -->
                                    
                                        <ul>
                                             <li>
                                                <!--<h3>Type your email id to get the updates!</h3>-->
                                                <a href="../513zodml011/Vitruvius_on_architecture.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/On_Architecture.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Vitruvius: The Ten Books on Architecture</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml014/a-date-in-winter.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/a-date-in-winter-cover.jpg" width="100" height="101" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">A Date in Winter</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml015/Dynamic_sociology.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/DYNAMIC_SOCIOLOGY.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Dynamic Sociology</h3>
                                                </div></a>
                                                
                                            </li>
                                            
                                            
                                            
                                             <li>
                                             
                                                 <a href="../513zodml009/Dynamics_of_world_history.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/dynamics_of_world_history.jpg" width="100" height="100" alt="book 1" /></span>
                                                   <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Dynamics of World History</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml006/Education_for_modern_man.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/education_for_modern_man.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Education for Modern Man</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml013/UnderstandingFood.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/UnderstandingFood-cover.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Understanding Food</h3>
                                                </div></a>
                                                
                                             </li><!-- Slider item -->
                                         
                                            <li>
                                                 <a href="../513zodml006/SOME_THOUGHTS_CONCERNING_EDUCATION.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/some_thoughts_on education.jpg" width="100" height="100" alt="book 1" /></span>
                                                   <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Some Thoughts COncerning Education</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml012/Introduction_to_human_geography.pdf"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/An_introduction_to_human_geography.png" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">An Introduction to Human Geography</h3>
                                                </div></a>
                                                
                                               <a href="../513zodml009/Enigmas_of_history.pdf"> <div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bookimages/Enigmas_of_history.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Enigmas of History</h3>
                                                </div></a>
                                                
                                         
                                          </li><!-- Slider item -->
                                    
                                        </ul>
                                    
                         </div><!-- End of slidertext -->
            
                      </div><!-- End of sliderwrap -->
        
                            <!--slider next button-->
                        <a class="next" href="#"><img src="../images/next.png" alt=""/></a>
                          </div>
                          <!--end details-->  
                        </div>
                        <!--End of new addition-->
                        
                     
                        <!--Best seller-->
                        			<div id="best_seller_title">Classics</div>
                        			 <div id="elibrary_content_slider_one">
                            <div class="details">
                      <!--slider prev button-->    
                    <a class="prev2" href="#"><img src="../images/prev.png" alt="" /> </a>
        
                          <div id="sliderwrap">
                                <div id="slidertext2"><!-- The slider -->
                                    
                                        <ul>
                                             <li>
                                                <!--<h3>Type your email id to get the updates!</h3>-->
                                                <a href="../513zodml004/THE ILIAD OF HOMER.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/THE ILIAD OF HOMER.jpg" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Iliad of Homer</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml004/THE ODYSSEY.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/THE ODYSSEY.jpg" width="100" height="101" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Odyssey</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml004/Ethics.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/ETHICS.jpg" width="100" height="101" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Ethics</h3>
                                                </div></a>
                                                
                                            </li><!-- Slider item -->
                                            
                                             <li>
                                             
                                                 <a href="../513zodml004/EUTHYPHRO.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/EUTHYPHRO PIC.jpg" width="100" height="100" alt="book 1" /></span>
                                                   <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Euthyphro</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml004/FASTI.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/FASTI.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Fasti</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml004/THE ATHENIAN CONSTITUTION.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/THE ATHENIAN CONSTITUTION.jpg" width="100" height="101" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Athenian Constitution</h3>
                                                </div></a>
                                                
                                             </li><!-- Slider item -->
                                         
                                            <li>
                                                 <a href="../513zodml004/The_Bacchae_of_Euripides.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/THE BACCHAE OF EURIPIDES.jpg" width="100" height="100" alt="book 1" /></span>
                                                   <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Bacchae of Euripedes</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml004/THE CLOUDS.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/THE CLOUDS.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Clouds</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml004/THE FROGS.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/classics/THE FROGS.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Frogs</h3>
                                                </div></a>
                                                
                                         
                                          </li><!-- Slider item -->
                                    
                                        </ul>
                                    
                         </div><!-- End of slidertext -->
            
                      </div><!-- End of sliderwrap -->
        
                            <!--slider next button-->
                        <a class="next2" href="#"><img src="../images/next.png" alt=""/></a>
                          </div>
                          <!--end details-->  
                        </div>
                        			<div id="featured_book_title">Featured Book</div>
                        			 <div id="elibrary_content_slider_one">
                            <div class="details">
                      <!--slider prev button-->    
                    <a class="prev3" href="#"><img src="../images/prev.png" alt="" /> </a>
        
                          <div id="sliderwrap">
                                <div id="slidertext3"><!-- The slider -->
                                    
                                        <ul>
                                             <li>
                                                <!--<h3>Type your email id to get the updates!</h3>-->
                                                <a href="../513zodml008/The_Adventures_of_Sherlock_H.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/fiction/THE ADVENTURES OF SHERLOCK HOLMES.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">The Adventures of Sherlock Holmes</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml009/ABRAHAM LINCOLN - A HISTORY VOL1.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/history/ABRAHAM LINCOLN - A HISTORY VOL.1.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Abraham Lincoln</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml009/Aunt_Charlottes_Stories_of_G.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/history/AUNT CHARLOTTE'S STORIES OF GREEK HISTORY.jpg" width="100" height="101" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Aunt Charlotte's Stories of Greek History</h3>
                                                </div></a>
                                                
                                            </li><!-- Slider item -->
                                            
                                             <li>
                                             
                                                 <a href="../513zodml003/BLACK BEAUTY.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/children/BLACK BEAUTY.jpg" width="100" height="100" alt="book 1"/></span>
                                                   <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Black Beauty</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml005/A BRIEF HISTORY OF THE INTERNET.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/computing/A BRIEF HISTORY OF THE INTERNET.jpg" width="100" height="101" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">A Brief History of the Internet</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml005/FREE CULTURE.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/computing/FREE CULTURE.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Free Culture</h3>
                                                </div></a>
                                                
                                             </li><!-- Slider item -->
                                         
                                            <li>
                                                 <a href="../513zodml002/Cost_Management__Strategies_for_Business_Decisions_Third_Edi.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/bus_mgt/COST MANAGEMENT _STRATEGIES FOR BUSINESS DECISIONS.jpg" width="100" height="100" alt="book 1" /></span>
                                                   <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Cost Management Strategies for Business Decisions</h3>
                                                </div></a>
                                                
                                                <a href="../513zodml010/10_years_that_changed_medicine_forever__Cellular_health_seri.pdf" target="_blank"><div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/medicine/10 YEARS THAT CHANGED MEDICINE FOREVER.jpg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">10 Years that Changed Medicine</h3>
                                                </div></a>
                                                
                                               <a href="../513zodml001/Basic_Concepts_in_Biochemistry__A_Student__039_s_Survival_Gu.pdf" target="_blank"> <div id="book_list_slider">
                                                    <p>&nbsp;</p>
                                                    <span><img src="../images/Basic Concepts in Biochemistry  (2).jpeg" width="100" height="100" alt="book 1" /></span>
                                                  <p>&nbsp;</p>
                                                    <h3 style="color:#EC9F00; font-size:11px; cursor:pointer;">Basic Concepts in Biochemistry</h3>
                                                </div></a>
                                                
                                         
                                          </li><!-- Slider item -->
                                    
                                        </ul>
                                    

                         </div><!-- End of slidertext -->
            
                      </div><!-- End of sliderwrap -->
        
                            <!--slider next button-->
                        <a class="next3" href="#"><img src="../images/next.png" alt=""/></a>
                          </div>
                          <!--end details-->  
                        </div>
                        
                        		</div>
                                <!--End of content slider on the right-->
                         
                         
                         
                         
                        </div>
                       <!--END OF CONTENT LAYER 2-->
          
</div>
<!--END OF CONTENT HOLDER-->

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
<!--comment form-->
<form id="contactForm" action="../processForm.php" method="post">

  <h2>Send us an email...</h2>

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
<li>
    <center>
<?php
          require_once('../recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?></center>
        </li>
  </ul>

  <div id="formButtons">
    <input type="submit" id="sendMessage" name="sendMessage" value="Send Email" />
    <input type="button" id="cancel" name="cancel" value="Cancel" />
  </div>

</form>

<div id="sendingMessage" class="statusMessage"><p>Sending your message. Please wait...</p></div>
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We'll get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>
<script type="text/javascript" src="//assets.pinterest.com/js/pinit.js"></script>
<script type="text/javascript" data-pin-hover="true" src="//assets.pinterest.com/js/pinit.js"></script>
<script src="http://platform.tumblr.com/v1/share.js"></script>
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
</body>
</html>