$.fn.serializeObject = function() {
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

$(document).ready(function() {
    var counter = 0;
    var MAX_FIELDS = 3;
    var MIN_FIELDS = 1;
    var form = $('.force-group');

    $('#add').on('click', function(e) {
        if (counter < MAX_FIELDS) {
            //$(".form-group").clone().appendTo("#forceForm");
            $.each(form, function(i) {
                var clone = $('.force-group').first().clone();
                clone.children().val("");

                $(this).parent().append(clone);
                $('input').eq(0).attr('name', '0force');
                $('input').eq(1).attr('name', '0angle');
                $('input').eq(2).attr('name', '1force');
                $('input').eq(3).attr('name', '1angle');
                $('input').eq(4).attr('name', '2force');
                $('input').eq(5).attr('name', '2angle');
                $('input').eq(6).attr('name', '3force');
                $('input').eq(7).attr('name', '3angle');

                if (counter == 0) {
                    $("b:eq(1)").html("<b> Force 2</b>");
                };
                if (counter == 1) {
                    $("b:eq(3)").html("<b> Force 3</b>");
                };
                if (counter == 2) {
                    $("b:eq(5)").html("<b> Force 4</b>");
                };

            });
            counter++;
        };
    });
    $('#remove').on('click', function(e) {
        e.preventDefault();
        if(counter >= MIN_FIELDS){
            $.each(form, function(i){
            $('#forceForm').children().children().last().remove();
        });
        counter--;
        }
    });
    $('#calculate').on('click', function(e) {
        e.preventDefault();
        $('#forceForm').submit();
    });
       $('#forceForm').on( 'submit', function(e){
           e.preventDefault();

           var forced = $('#forceForm').serializeObject();
           forced.stages = counter;
           $.post('/force/solve', forced, function(res){
               if (res !== "error"){
                   var forced = JSON.parse(res);
                   var tableElements = $('#forceChart').find('tr');

                   for (var i = 0; i < tableElements.length; i++){
                       tableElements.eq(i).children().slice(1).remove();
                   }

                   for (var i = 0; i < forced.length; i++){
                       tableElements.eq(0).append('<th class="head-pad">' + "Stage " + (i+1) +'</th>');
                       tableElements.eq(1).append('<td class="pad">' + forced[i].magnitude + '</td>');
                       tableElements.eq(2).append('<td class="pad">' + forced[i].angle + '</td>');
                       //tableElements.eq(3).append('<td class="pad">' + dvat[i].finalVelocity + '</td>');
                       //tableElements.eq(4).append('<td class="pad">' + dvat[i].acceleration + '</td>');
                       //tableElements.eq(5).append('<td class="pad">' + dvat[i].time + '</td>');
                   }
                   $('.force-info').parent().removeClass('has-error');
               }else{
                   var tableElements = $('#forceChart').find('tr');

                   for (var i = 0; i < tableElements.length; i++){
                       tableElements.eq(i).children().slice(1).remove();
                   }
                   $('.force-info').parent().addClass('has-error');
               }
           })
       })
});
