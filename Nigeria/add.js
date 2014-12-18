// JavaScript Document

 $(document).ready(function(){
	$("#add_button").click(function(){
		var valid = '';
		var isr = ' is required.';
		var name = $("#add_name").val();
		var email = $("#add_email").val();
		var title = $("#add_title").val();
		var category = $("#add_category").val();
		//var content = $("#add_content").val();
		var source = $("#add_content2").val();
	    var picture1 = $("#add_pix1").val();
       //var picture2 = $("#add_pix2").val();
       //var picture3 = $("#add_pix3").val();
		
		//validating	
		if (name.length<1) {
			valid += '<br />Name'+isr;
		}
		if (!email.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		if (title.length<1){
			valid += '<br />Title for the article'+isr;
		}
		if (category.length<1 ){
			valid += '<br />A category must be selected'+isr;
		}
		//if (content.length<1){
//			valid += '<br />Content'+isr;
//		}
		if (source.length<1){
			valid += '<br />Source of article'+isr
		}
		if (picture1.length<1){
			valid += '<br />A Document'+isr
		}
		
		
		//if (!isCheckedById("us"))
//			{
//				valid += '<br / >Category'+isr;
//			}
			
		if (valid!='') {
			$("#response").fadeIn("slow");
			$("#response").html("Please fill the form:"+valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			//var datastr ='email=' + email + '&name=' + name + '&title=' + title + '&category=' + category + '&content=' + content + '&source=' + source; //+ '&picture1=' + picture1 + '&picture2=' + picture2 + '&picture3=' + picture3;
			$("#response").css("display", "block");
			$("#response").html("Sending message .... ");
			$("#response").fadeIn("slow");
			setTimeout("send('"+datastr+"')",2000);
			document.getElementById('formail_add').reset();
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
//function send(datastr){
//	$.ajax({	
//		type: "POST",
//		url: "add.php",
//		data: datastr,
//		cache: false,
//		success: function(html){
//		$("#response").fadeIn("slow");
//		$("#response").html(html);
//		setTimeout('$("#response").fadeOut("slow")',5000);
//	}
//	});
//}

 