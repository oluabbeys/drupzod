 $(document).ready(function(){
	$("#newsletter_button").click(function(){
		var valid = '';
		var isr = ' is required.';
		var name = $("#name").val();
		var mail = $("#mail").val();
		var newsletter = $("#newsletter").val();
		
		//validating	
		if (name.length<1) {
			valid += '<br />Name'+isr;
		}
		if (!mail.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		if (newsletter.length<1){
			valid += '<br />Newsletter'+isr;
		}
		
		//if (!isCheckedById("us"))
//			{
//				valid += '<br / >Category'+isr;
//			}
			
		if (valid!='') {
			$("#response").fadeIn("slow");
			$("#response").html("Please fill the above form:"+valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			var datastr ='mail=' + mail + '&name=' + name + '&newsletter=' + newsletter; //+ '&text=' + text + '&category=' + category;
			$("#response").css("display", "block");
			$("#response").html("Sending message .... ");
			$("#response").fadeIn("slow");
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
		url: "mail.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#response").fadeIn("slow");
		$("#response").html(html);
		setTimeout('$("#response").fadeOut("slow")',2000);
	}
	});
}

 