<#import "/template.ftl" as layout />
<@layout.template title="Motion" js="/js/ucm.js" css="/css/motion.css">
    <h3 class="text-center"> Universal Circular Motion </h3>
    <hr>
    <div class="col-md-6 col-md-offset-3 col-xs-8 col-xs-offset-2">
        <div class="stage-selector input_fields_wrap">
        </div>
    </div>
    <div class="col-md-5 col-md-offset-1">
        <div class="col-xs-12">
            <div class="well" id="motion-input">
                <form id="ucmForm" class="form-horizontal" method="POST" autocomplete="off">
                    <fieldset>
                        <h4 class="text-center" id="form-title"><strong>Input</strong></h4>
                        <div class="form-group ucm-group">
                            <label class="control-label col-md-2"> V </label>
                            <div class="col-md-10 ucm-info">
                                <input type="text" class="form-control" name="velocity" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group ucm-group">
                            <label class="control-label col-md-2"> R </label>
                            <div class="col-md-10 ucm-info">
                                <input type="text" class="form-control" name="radius" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group ucm-group">
                            <label class="control-label col-md-2"> A </label>
                            <div class="col-md-10 ucm-info">
                                <input type="text" class="form-control" name="acceleration" autocomplete="off">
                            </div>
                        </div>
                        <div class="form-group ucm-group">
                            <label class="control-label col-md-2"> T </label>
                            <div class="col-md-10 ucm-info">
                                <input type="text" class="form-control" name="time" autocomplete="off">
                            </div>
                        </div>
            </div>
            </fieldset>
            </form>
        </div>
    </div>
    </div>
    <div class="col-md-5">
        <table id="dvatChart" class="table table-striped table-hover">
            <thead>
                <tr class="table">
                    <th class="head-pad">Variable</th>
                </tr>
            </thead>
            <tbody>
                <tr class="table">
                    <td class="pad"> V </td>
                    <td class="pad" id="velocity"> </td>
                </tr>
                <tr class="table">
                    <td class="pad"> R </td>
                    <td class="pad" id="radius"> </td>
                </tr>
                <tr class="table">
                    <td class="pad"> A </td>
                    <td class="pad" id="acceleration"> </td>
                </tr>
                <tr class="table">
                    <td class="pad"> T </td>
                    <td class="pad" id="time"> </td>
                </tr>
            </tbody>
            <tfoot></tfoot>
        </table>
    </div>
    <div class="col-md-4 col-md-offset-4 col-xs-6 col-xs-offset-3">
        <div class="form-group">
            <div class="col-md-6 col-xs-offset-3">
                <input id="calculate" class="btn btn-success btn-block" type="submit" value="Calculate!">
            </div>
        </div>
    </div>

</@layout.template>
