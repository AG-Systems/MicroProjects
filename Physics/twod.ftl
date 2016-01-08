<#import "/template.ftl" as layout />
<@layout.template title="Motion" js="/js/2dmotion.js" css="/css/motion.css">

    <hr class = "col-md-12">
    <h3 class = "text-center col-md-12">Motion in Two Dimensions</h3>
    <hr class = "col-md-12">
    <div class="col-md-5 col-md-offset-1">
        <div class="col-xs-12">
            <div class = "well" id="motion-input">
                <form id = "dvatForm" class = "form-horizontal" method = "POST" autocomplete="off">
                    <fieldset>
                        <h4 class="text-center" id="form-title"><strong>Input</strong></h4>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">&#916;x</label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="xdistance" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">&#916;y</label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="ydistance" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">v<sub>x</sub><sub>0</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="xinitialVelocity" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">v<sub>y</sub><sub>0</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="yinitialVelocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">v<sub>x</sub><sub>f</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="xfinalVelocity" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">v<sub>y</sub><sub>f</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="yfinalVelocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">a<sub>x</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="xacceleration" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">a<sub>y</sub></label>
                            <div class = "col-md-4 dvat-info">
                                <input type = "text" class="form-control" name="yacceleration" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group dvat-group">
                            <label class = "control-label col-md-2">&#916;t</label>
                            <div class = "col-md-10 dvat-info">
                                <input type = "text" class="form-control" name="xtime" autocomplete="off">
                                <input type = "text" class="form-control" name="ytime" autocomplete="off">
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
                <td class="pad" id="deltax"> </td>
                <td class="pad" id="deltay"> </td>

            </tr>
            <tr class="table">
                <td class="pad" >v<sub>0</sub></td>
                <td class="pad" id="introx"> </td>
                <td class="pad" id="introy"> </td>
            </tr>
            <tr class="table">
                <td class="pad" >v<sub>f</sub></td>
                <td class="pad" id="vx"> </td>
                <td class="pad" id="vy"> </td>
            </tr>
            <tr class="table">
                <td class="pad" >a</td>
                <td class="pad" id="accelerationx"> </td>
                <td class="pad" id="accelerationy"> </td>
            </tr>
            <tr class="table">
                <td class="pad" id=>&#916;t</td>
                <td class="pad" id="timex"> </td>
                <td class="pad" id="timey"> </td>
            </tr>
            </tbody>
            <tfoot></tfoot>
        </table>
    </div>
    <div class = "col-md-4 col-md-offset-4 col-xs-6 col-xs-offset-3">
        <div class="form-group">
            <div class = "col-md-6 col-xs-offset-3">
                <input id = "calculate" class = "btn btn-success btn-block" type="submit" value="Calculate!">
            </div>
        </div>
    </div>

</@layout.template>
