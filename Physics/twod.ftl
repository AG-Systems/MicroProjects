<#import "/template.ftl" as layout />
<@layout.template title="Motion" js="/js/motion.js" css="/css/motion.css">

    <hr class = "col-md-12">
    <h3 class = "text-center col-md-12">Motion in Two Dimensions</h3>
    <hr class = "col-md-12">
    <div class="col-md-5 col-md-offset-1">
        <div class="col-xs-12">
            <div class = "well" id="2d-motion-input">
                <form id = "2d-dvatForm" class = "form-horizontal" method = "POST" autocomplete="off">
                    <fieldset>
                        <h4 class="text-center" id="2d-form-title"><strong>Input</strong></h4>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">&#916;x</label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0distance" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">&#916;y</label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0distance" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">v<sub>x</sub><sub>0</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0initialVelocity" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">v<sub>y</sub><sub>0</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0initialVelocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">v<sub>x</sub><sub>f</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0finalVelocity" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">v<sub>y</sub><sub>f</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0finalVelocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">a<sub>x</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="0acceleration" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">a<sub>y</sub></label>
                            <div class = "col-md-4 dvat-info">
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
    <div class = "col-md-5">
        <table id = "dvatChart" class="table table-striped table-hover">
            <thead>
            <tr class="table">
                <th class="head-pad">Variable</th>
                <th class="head-pad">X</th>
                <th class="head-pad">Y</th>
            </tr>
            </thead>
            <tbody>
            <tr class="table">
                <td class="pad">&#916;x</td>
            </tr>
            <tr class="table">
                <td class="pad">v<sub>0</sub></td>
            </tr>
            <tr class="table">
                <td class="pad">v<sub>f</sub></td>
            </tr>
            <tr class="table">
                <td class="pad">a</td>
            </tr>
            <tr class="table">
                <td class="pad">&#916;t</td>
            </tr>
            </tbody>
            <tfoot></tfoot>
        </table>
    </div>
    <div class = "col-md-4 col-md-offset-4 col-xs-6 col-xs-offset-3">
        <div class="form-group">
            <div class = "col-md-6 col-xs-offset-3">
                <input id = "2d-calculate" class = "btn btn-success btn-block" type="submit" value="Calculate!">
            </div>
        </div>
    </div>

</@layout.template>
