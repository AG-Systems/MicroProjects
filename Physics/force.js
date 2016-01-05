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
    var form = $('.force-group');

    $('#add').on('click', function(e) {
        if (counter < MAX_FIELDS) {
            //$(".form-group").clone().appendTo("#forceForm");
            $.each(form, function(i) {
                var clone = $('.force-group').first().clone();
                clone.children().val("");

                $(this).parent().append(clone);
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
        if (counter > MAX_FIELDS) {
            e.preventDefault();
            $(".form-group").last().remove;
            $.each(form, function(i) {
                $(this).children().last().remove();
            });
            counter--;
        };
    });
    $('#calculate').on('click', function(e) {
        e.preventDefault();
        $('#forceForm').submit();
    });
});
