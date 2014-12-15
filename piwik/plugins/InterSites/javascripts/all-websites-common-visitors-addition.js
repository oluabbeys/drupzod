/*!
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 */

// adds a link to the multisites dashboard that launchesthe compare common visitors tool in
// a dialog. uses an angular decorator to do so.
angular.module('piwikApp').config(function ($provide) {
    $provide.decorator('piwikMultisitesDashboardDirective', function ($delegate, $filter) {
        var directive = $delegate[0],
            link = directive.link;

        directive.compile = function (element) {
            var launcherText = $filter('translate')('InterSites_CommonVisitorsTool_LaunchLinkText');
            element.find('h2[piwik-enriched-headline]').after(
                '<a class="piwik-inter-sites-launch-compare" piwik-dialogtoggler ng-click="persist(\'piwik-inter-sites-compare-visitors-tool\')">' +
                launcherText + '</a>'
            );
            return link;
        };

        return $delegate;
    });
});
