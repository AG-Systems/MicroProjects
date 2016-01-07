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
    var numOfForces = 1;
    var MAX_FORCES = 10, MIN_FORCES = 1;

    $('#add').on('click', function(e) {
        e.preventDefault();
        if (numOfForces < MAX_FORCES) {
            numOfForces ++;
            var clone = $('.force-group').first().clone();
            clone.children().children('b').text('Force ' + numOfForces);
            $.each(clone.children().children('input'), function(i){
                $(this).attr('name', $(this).attr('name').slice(0, $(this).attr('name').length-1) + (numOfForces - 1));
            });
            $('#forceForm').append(clone);
        };
    });

    $('#remove').on('click', function(e) {
        if (numOfForces > MIN_FORCES) {
            numOfForces--;
            $('.force-group').last().remove();
        };
    });

    $('#calculate').on('click', function(e) {
        e.preventDefault();
        $('#forceForm').submit();
    });
    var tableElements = $('#dvatChart').find('tr');
    $('#forceForm').on('submit', function(e){
        e.preventDefault();
        var forceJSON = $('#forceForm').serializeObject();
        forceJSON.numOfForces = numOfForces;
        $.post('/force/solve', forceJSON, function(res){
            console.log(res);
            var JsonObject= JSON.parse(res);
            var mangi = JsonObject.magnitude;
            var dir = JsonObject.direction;
         tableElements.eq(1).append('<b>  ' + mangi + '</b>');
         tableElements.eq(2).append('<b>  ' + dir + '</b>');;


        });
    });
});
