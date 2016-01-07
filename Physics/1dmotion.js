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

$(document).ready(function(){

    var MAX_FIELDS = 5, MIN_FIELDS = 1;
    var form = $('.dvat-group');
    var numOfStages = 1;
    var inputLengthInCol = 10;

    $('#add').on('click', function(e){
        e.preventDefault();
        if(numOfStages < MAX_FIELDS){
            $.each(form, function(i){
                var clone = $(this).children('.dvat-info').first().clone();
                clone.children().attr('name', numOfStages + clone.children().attr('name').slice(1));
                clone.children().val("");
                $(this).append(clone);
            });
            numOfStages++;
        }
        $('.dvat-info').removeClass('col-md-' + Math.floor(inputLengthInCol/(numOfStages - 1)));
        $('.dvat-info').addClass('col-md-' + Math.floor(inputLengthInCol/(numOfStages)));
    });

    $('#remove').on('click', function(e){
         e.preventDefault();
         if(numOfStages > MIN_FIELDS){
            $.each(form, function(i){
                $(this).children().last().remove();
            });
            numOfStages--;
        }

        $('.dvat-info').removeClass('col-md-' + Math.floor(inputLengthInCol/(numOfStages + 1)));
        $('.dvat-info').addClass('col-md-' + Math.floor(inputLengthInCol/(numOfStages)));
    });

    $('#calculate').on('click', function(e){
        e.preventDefault();
        $('#dvatForm').submit();
    });

    $('#dvatForm').on( 'submit', function(e){
        e.preventDefault();

        var dvat = $('#dvatForm').serializeObject();
        dvat.stages = numOfStages;
        $.post('/motion/onedimension', dvat, function(res){
            if (res !== "error"){
                var dvat = JSON.parse(res);
                var tableElements = $('#dvatChart').find('tr');

                for (var i = 0; i < tableElements.length; i++){
                    tableElements.eq(i).children().slice(1).remove();
                }

                for (var i = 0; i < dvat.length; i++){
                    tableElements.eq(0).append('<th class="head-pad">' + "Stage " + (i+1) +'</th>');
                    tableElements.eq(1).append('<td class="pad">' + dvat[i].distance + '</td>');
                    tableElements.eq(2).append('<td class="pad">' + dvat[i].initialVelocity + '</td>');
                    tableElements.eq(3).append('<td class="pad">' + dvat[i].finalVelocity + '</td>');
                    tableElements.eq(4).append('<td class="pad">' + dvat[i].acceleration + '</td>');
                    tableElements.eq(5).append('<td class="pad">' + dvat[i].time + '</td>');
                }
                $('.dvat-info').parent().removeClass('has-error');
            }else{
                var tableElements = $('#dvatChart').find('tr');

                for (var i = 0; i < tableElements.length; i++){
                    tableElements.eq(i).children().slice(1).remove();
                }
                $('.dvat-info').parent().addClass('has-error');
            }
        })
    })
})
