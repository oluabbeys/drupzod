// JavaScript Document

 $(document).ready(function(){
	$("#newsletter_button3").click(function(){
		var valid = '';
		var isr = ' is required.';
		var url = $("#url").val();
		//var mail = $("#mail").val();
		//var newsletter = $("#newsletter").val();
		
		//validating	
		if (url.length<1) {
			valid += '<br />Web page url'+isr;
		}
		//if (!mail.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			//valid += '<br />A valid Email'+isr;
		//}
		//if (newsletter.length<1){
			//valid += '<br />Newsletter'+isr;
		//}
		
		//if (!isCheckedById("us"))
//			{
//				valid += '<br / >Category'+isr;
//			}
			
		if (valid!='') {
			$("#shortresponse").fadeIn("slow");
			$("#shortresponse").html(valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			var datastr ='url=' + url; //+ '&name=' + name + '&newsletter=' + newsletter; //+ '&text=' + text + '&category=' + category;
			$("#shortresponse").css("display", "block");
			$("#shortresponse").html("Sending, please wait.... ");
			$("#shortresponse").fadeIn("slow");
			setTimeout("send('"+datastr+"')",2000);
			document.getElementById('formail').reset();
		}
		return false;
	});
	
	//picking the values for the checkbox
	//function isCheckedById(id) 
//    { 
//        var category = $("input[@id="+id+"]:checked").val();
//        if (category == 0) 
//        { 
//            return false; 
//        } 
//        else 
//        { 
//            return true; 
//        } 
//    } 
	
	    //function isCheckedById(id)  {
//			
//          return $('#' + id).is(':checked');
//    } 
});

//ajax call
function send(datastr){
	$.ajax({	
		type: "POST",
		url: "shorten.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#shortresponse").fadeIn("slow");
		$("#shortresponse").html(html);
		//setTimeout('$("#shortresponse").fadeOut("slow")',100000);
	}
	});
}

 