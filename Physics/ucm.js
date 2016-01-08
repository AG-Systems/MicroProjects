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

    var form = $('.ucm-group');
    var inputLengthInCol = 10;

    $('#calculate').on('click', function(e) {
        e.preventDefault();
        $('#ucmForm').submit();
    });

    $('#ucmForm').on('submit', function(e) {
        e.preventDefault();
        var forceJSON = $('#ucmForm').serializeObject();
        $.post('/motion/ucm', forceJSON, function(res) {
            if (res.indexOf('error') == -1) {
                var um = JSON.parse(res);
                console.log(res);
                $('#velocity').text(um.velocity);
                $('#radius').text(um.radius);
                $('#acceleration').text(um.acceleration);
                $('#time').text(um.time);
            }
        });
    });
});
