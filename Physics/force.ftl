<#import "template.ftl" as layout />
<@layout.template title="Force" js="/js/force.js" css="/css/force.css">

    <h3 class = "text-center">Total Force</h3>
    <hr>

    <div class="col-md-6 col-md-offset-3 col-xs-8 col-xs-offset-2">
        <div class="force-selector input_fields_wrap">
            <a id = 'add' href="#" class="btn btn-primary col-md-5">Add Force</a>
            <a id = 'remove' href="#" class="btn btn-warning col-md-5 col-md-offset-2">Remove Force</a>
        </div>
    </div>
    <div class="col-md-6 col-md-offset-">
        <div class="col-xs-12">
            <div class = "well" id="force-input">
                <form id = "forceForm" class = "form-horizontal" method = "POST" autocomplete="off">
                    <fieldset>
                        <h4 class="text-center" id="form-title"><strong>Input</strong></h4>
                        <div class="form-group force-group">
                            <label class = "control-label col-md-2"><b>Force 1</b></label>
                            <label class = "control-label col-md-2">Magnitude</label>
                            <div class = "col-md-3 force-info">
                                <input type = "text" class="form-control" name="0force" autocomplete="off">
                            </div>
                            <label class = "control-label col-md-2">Angle</label>
                            <div class = "col-md-3 force-info">
                                <input type = "text" class="form-control" name="0angle" autocomplete="off">
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
                <th class="head-pad">Total Force</th>
            </tr>
            </thead>
            <tbody>
            <tr class="table">
                <td class="pad">Net Force:</td>
            </tr>
            </tbody>
            </thead>
            <tbody>
            <tr class="table">
                <td class="pad">Direction:</td>
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
