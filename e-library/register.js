// JavaScript Document

 $(document).ready(function(){
	$("#save").click(function(){
		var valid = '';
		var isr = ' is required.';
		var taskname = $("#taskname").val();
		var taskdue = $("#taskdue").val();
		var taskcountry = $("#taskcountry").val();
		
		
		
		//validating	
		if (taskname.length<1) {
			valid += '<br />Name'+isr;
		}
		
		if (!taskdue.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		 
		if (taskcountry.length<1){
			valid += '<br />Country'+isr;
		}
			
		if (valid!='') {
			$("#response_here").fadeIn("slow");
			$("#response_here").html("Please fill the above form:"+valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			var datastr ='taskname=' + taskname + '&taskdue=' + taskdue + '&taskcountry=' + taskcountry; 
			$("#response_here").css("display", "block");
			$("#response_here").html("Sending message .... ");
			$("#response_here").fadeIn("slow");
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
		url: "register.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#response_here").fadeIn("slow");
		$("#response_here").html(html);
		//setTimeout('$("#response_here").fadeOut("slow")',20000);
	}
	});
}

 