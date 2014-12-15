/*!
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 */

angular.module('piwikApp').directive('piwikInterSitesCompareVisitorsTool', function (piwik) {
    return {
        restrict: 'A',
        scope: {
        },
        templateUrl: 'plugins/InterSites/javascripts/angularjs/compareVisitorsTool/compareVisitorsTool.html?cb=' + piwik.cacheBuster,
        controller: 'InterSitesCompareVisitorsTool'
    };
});