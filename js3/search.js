$(function(){
	var searchval=$("#search");
	$("#searchbutton").click(function(){
		$("#loading").show();
		var searchtext=searchval.val();
		var criteria=$("input:radio[name='criteria']:checked").val();
		if(searchtext !==""){
		$.get("../server/fetch.php?cmd=0_1&searchtext="+searchtext+"&criteria="+criteria, function(data){
			if(data==""){
			$("#resultdiv").hide();
			$("#noresult").show();
			$("#loading").hide();	
			}
			else{
				$("#noresult").hide();
				$("#resulttable tbody").html("");
				var list1=new Array();
				list1=data.split("~");
				for(var i=0; i<list1.length-1; i++){
				var list2=new Array();
				list2=list1[i].split("|");
				/*$("#resultdiv").append('<div><div style="float:left; width:70px; height:70px;"><img src="books/'+list2[4]+'.jpg" id="result'+list2[0]+'" height="70" width="70" class="resimg"/></div><div style="float:left; width:580px; padding-left:10px;"><div style="width:100%;"><input type="hidden" value="'+list2[0]+'" id="resid'+i+'"/> <font face="trebuchet ms" size="3" color="#850000"><strong>'+list2[1]+'</strong></font></div><div style="width:100%"><font face="trebuchet ms" size="2" color="#000000"><strong>Author : </strong>'+list2[2]+'</font>&nbsp; &nbsp; &nbsp; <font face="trebuchet ms" size="2" color="#000000"><strong>Publisher : </strong>'+list2[3]+'</font></div></div></div>');*/
				$("#resulttable").append('<tr><td><div id="res'+list2[0]+'"><a href="../correction/Images/'+list2[4]+'" title="'+list2[5]+'"><img src="../correction/Images/'+list2[4]+'" id="result'+list2[0]+'" height="70" width="70"/></a></div><br /></td><td><input type="hidden" value='+list2[0]+'" id="resid'+i+'"/>&nbsp;&nbsp;&nbsp;</td><td><font face="trebuchet ms" size="3" color="#850000"><strong><a href="eachbook.php?id='+list2[0]+'">'+list2[1]+'</a></strong></font><br /><font face="trebuchet ms" size="2" color="#000000"><strong>Author : </strong>'+list2[2]+'</font</tr>');
				
				$("#resultdiv").show();
				$("#loading").hide();
				
				$(function() {
        $('#res'+list2[0]+' a').lightBox();
    });
				}
				/* $(function() {
        $('#res'+list2[0]+' a').lightBox();
    }); */
				 
				 
				$(function(){
	$('.resimg').each(function(intIndex){
	$(this).bind(
	"click",
	
	function(event){
		$("#loading").show();
				var code=$('#resid'+intIndex).val();
				$("#bookdisplay").html("");
				
					$.get("../server/fetch.php?cmd=0_2&resid="+code, function(data){
						$("#bookdisplay").html("");
						var relist=new Array();
						relist=data.split("|");
						
						$("#bookdisplay").append('<img src="books2/'+relist[0]+'.jpg" width="450" height="450">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;'+relist[1]);
						$("#bookdisplay").append('<br /><br /><div width="100%"><b>Genre/Subject:</b> '+relist[2]+'</div>');
						$("#loading").hide();
						$("#bookdisplay").dialog({
			
						resizable: false,
						width:500,
						modal: true,
						buttons: {
						Close: function() {
					$( this ).dialog( "close" );
				}
			}
			
		});	
					});
	});
	});
				});
				
				
			}
		});
		}
	});
});


$(function(){
		$('#postbutton').click(function(){
			var bookid=$('#bookid').val();
			var email=$('#email').val();
			var name=$('#name').val();
			var comment='<pre>'+$('#comment').val()+'</pre>';
			if(email=="" || name=="" || comment==""){
				if(email=="")
				$('#emailerror').show();
				
			
			if(name=="")
				$('#nameerror').show();
				
			
			if(comment=="")
				$('#commenterror').show();
				
			}
			else{
				$('#loading2').show();
				var par="email="+email+"&name="+name+"&comment="+comment+"&bookid="+bookid;
			$.get("../server/fetch.php?cmd=0_3&"+par, function(data){
				var list1=new Array();
				list1=data.split("~");
				for(var i=0; i<list1.length-1; i++){
					var list2=new Array();
					list2=list1[i].split("|");
					$('#commentadd').append('<tr><td colspan="3" style="border-bottom:#AFB3C0 1px solid;"><font face="trebuchet ms" size="3" color="#850000"><strong>Posted By: '+list2[0]+'</strong></font><br /><font face="verdana" size="3">'+list2[1]+'</font></td></tr>');
						$('#loading2').hide();
						$('#emailerror').hide();
						$('#nameerror').hide();
						$('#commenterror').hide();
						$('#email').val("");
						$('#name').val("");
						$('#comment').val("");
						$('#commentbox').dialog("close");
				}
			});
				
			}
		});
		
});


$(function(){
	$("search_button").click(function(){
		var kword=$("#select_box").val();
		if(kword=="Author")
		kword="FullName";
		var searchtext=$("#searchbox").val();
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="other"){
			window.location.href = "findbook2.php?searchtext="+searchtext+"&keyword="+kword+"";
		}
	});
		
});