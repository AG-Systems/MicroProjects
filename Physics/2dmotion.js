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

    var MAX_FIELDS = 5,
        MIN_FIELDS = 1;
    var form = $('.dvat-group');
    var numOfStages = 1;
    var inputLengthInCol = 10;
    /*
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
    */
    $('#calculate').on('click', function(e) {
        e.preventDefault();
        $('#dvatForm').submit();
        console.log("calculated")
    });

    $('#dvatForm').on('submit', function(e) {
        e.preventDefault();

        var dvat = $('#dvatForm').serializeObject();
        $.post('/motion/twodimensions', dvat, function(res) {
            console.log(res);
            if (res !== "error") {
                //var dvat = JSON.parse(res);
                //var tableElements = $('#dvatChart').find('tr');
                console.log(res);
                var td = JSON.parse(res);

                $('#deltaxy').html("<p> Δx: " + td[0].distance + " Δy:" + td[1].distance + "</p>");
                //$('#deltaxy').append('<td class="pad">' + " Δx:" + td[0].initialVelocity + " Δy:" + td[1].initialVelocity + '</td>');
                $('#introxy').html("<p> Δx: " + td[0].initialVelocity + " Δy:" + td[1].initialVelocity + "</p>");
                $('#vxy').html("<p> Δx: " + td[0].finalVelocity + " Δy:" + td[1].finalVelocity + "</p>");
                $('#acceleration').html("<p> Δx: " + td[0].acceleration + " Δy:" + td[1].acceleration + "</p>");
                $('#time').html("<p> Δx: " + td[0].time + " Δy:" + td[1].time + "</p>");
                //$('#magnitude').text(2d.magnitude);
                //$('#direction').text(2d.direction);

                /*
                for (var i = 0; i < tableElements.length(); i++){
                    tableElements.eq(i).children().slice(1).remove();
                }
                */
                /*
                for (var i = 0; i < dvat.length; i++){
                    tableElements.eq(0).append('<th class="head-pad">' + "Stage " + (i+1) +'</th>');
                    tableElements.eq(1).append('<td class="pad">' + dvat[i].distance + '</td>');
                    tableElements.eq(2).append('<td class="pad">' + dvat[i].initialVelocity + '</td>');
                    tableElements.eq(3).append('<td class="pad">' + dvat[i].finalVelocity + '</td>');
                    tableElements.eq(4).append('<td class="pad">' + dvat[i].acceleration + '</td>');
                    tableElements.eq(5).append('<td class="pad">' + dvat[i].time + '</td>');
                }
                */
                //$('.dvat-info').parent().removeClass('has-error');
                // }else{
                //var tableElements = $('#dvatChart').find('tr');
                /*
                    for (var i = 0; i < tableElements.length(); i++){
                        tableElements.eq(i).children().slice(1).remove();
                    }
                    // $('.dvat-info').parent().addClass('has-error');
                 */
            }
        })
    })
})
