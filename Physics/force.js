
$.fn.serializeObject = function()
{
    var o = {};
    var a = this.serializeArray();
    $.each(a, function() {
        if (o[this.name] !== undefined) {
            if (!o[this.name].push) {
                o[this.name] = [o[this.name]];
            }
            o[this.name].push(this.value || '');
        } else {
            o[this.name] = this.value || '';
        }
    });
    return o;
};

$(document).ready(function()
{
    var counter = 0;
 $('#add').on('click', function(e)
 {
        if(counter < 3)
        {
            counter++;
            $("#forceForm").clone().appendTo(".col-xs-12");
        };
    });
 $('#remove').on('click', function(e)
 {
        if(counter > 0)
        {
          counter--;
          $("#forceForm").remove();
        };
    });
        $('#calculate').on('click', function(e){
         e.preventDefault();
         $('#dvatForm').submit();
     });
});
