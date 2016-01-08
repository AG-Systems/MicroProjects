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

                $('#deltax').html(td[0].distance);
                $('#deltay').html(td[1].distance);
                $('#introx').html(td[0].initialVelocity);
                $('#introy').html(td[1].initialVelocity);
                $('#vx').html(td[0].finalVelocity);
                $('#vy').html(td[1].finalVelocity);
                $('#accelerationx').html(td[0].acceleration);
                $('#accelerationy').html(td[1].acceleration);
                $('#timex').html(td[0].time);
                $('#timey').html(td[1].time);

            }
        })
    })
})
