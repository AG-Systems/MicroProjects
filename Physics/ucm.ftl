<#import "/template.ftl" as layout />
<@layout.template title="Motion" js="/js/motion.js" css="/css/motion.css">

    <hr class = "col-md-12">
    <h3 class = "text-center col-md-12">Universal Circular Motion</h3>
    <hr class = "col-md-12">
    <div class="col-md-5 col-md-offset-1">
        <div class="col-xs-12">
            <div class = "well" id="motion-input">
                <form id = "dvatForm" class = "form-horizontal" method = "POST" autocomplete="off">
                    <fieldset>
                        <h4 class="text-center" id="form-title"><strong>Input</strong></h4>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">v</label>
                            <div class = "col-md-10 dvat-info">
                                <input type = "text" class="form-control" name="0initialVelocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">r</label>
                            <div class = "col-md-10 dvat-info">
                                <input type = "text" class="form-control" name="0finalVelocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">a</label>
                            <div class = "col-md-10 dvat-info">
                                <input type = "text" class="form-control" name="0acceleration" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">&#916;t</label>
                            <div class = "col-md-10 dvat-info">
                                <input type = "text" class="form-control" name="0time" autocomplete="off">
                            </div>
                        </div>
                    </fieldset>
                </form>
            </div>
        </div>
    </div>
    <div class = "col-md-4 col-md-offset-4 col-xs-6 col-xs-offset-3">
        <div class="form-group">
            <div class = "col-md-6 col-xs-offset-3">
                <input id = "2d-calculate" class = "btn btn-success btn-block" type="submit" value="Calculate!">
            </div>
        </div>
    </div>
</@layout.template>
