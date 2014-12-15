// JavaScript Document

function chooseOne() {
	var val = 0;
	for (i = 0; i < document.form1.search.length; i++)
	{
		if (document.form1.search[i].checked == true)
		{
		val = document.form1.search[i].value;
		if ( val == 'other')
		{
			document.form1.catalogue.disabled = false;
			document.form1.catalogue.focus();
			document.form1.search_word.placeholder = "Search for a Book";
		}
		else
		{
			document.form1.catalogue.disabled = true;
			document.form1.search_word.placeholder = "ZODML Events and more";
		}
		}
	}
}