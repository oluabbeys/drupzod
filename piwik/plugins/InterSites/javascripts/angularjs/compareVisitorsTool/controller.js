/*!
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 */

angular.module('piwikApp').controller('InterSitesCompareVisitorsTool', function ($scope, piwikApi) {

    /**
     * List of sites to check whenthe 'Go' button is clicked. Bound each displayed
     * site selector.
     *
     * @type {object[]}
     */
    $scope.sitesToCheck = [{id: 1}, {id: 1}];

    /**
     * List of site specific statistics to display. Each element is an object with
     * a siteName property and the nb_uniq_visitors metric for the current period/segment.
     *
     * @type {object[]}
     */
    $scope.siteStats = [];

    /**
     * The total number of visitors shared among all of the sites that were checked.
     *
     * @type {number}
     */
    $scope.nbSharedVisitors;

    /**
     * The total number of visitors that visited at least one of the sites that were
     * checked.
     *
     * @type {number}
     */
    $scope.nbTotalVisitors;

    /**
     * Queries the InterSites API to find the number of shared and total visitors for
     * a set of sites. Also queries the VisitsSummary API to get the unique visitors for
     * the set of sites.
     *
     * @param {object[]} sites The sites to check. Each element must be an object containing
     *                         id and name properties. The name is necessary so we can display
     *                         them later.
     */
    $scope.findSharedVisitors = function (sites) {
        sites = angular.copy(sites); // copy sites so it is not overwritten during the query below

        var siteIds = sites.map(function (s) { return s.id; }),
            requestOptions = {placeat: '.compare-visitors-tool .notification-area'};

        $scope.isLoadingStats = true;
        piwikApi.bulkFetch([
                {
                    method: "InterSites.getCommonVisitors",
                    idSite: siteIds.join(',')
                },
                {
                    method: "VisitsSummary.get",
                    idSite: siteIds.join(','),
                    showColumns: 'nb_uniq_visitors'
                }
            ],
            requestOptions
        ).then(function (response) {
            var commonVisitorsStats = response[0][0], // see https://github.com/piwik/piwik/issues/6203
                sitesTotalVisits = response[1];

            // if the site IDs are all the same, the API will just return one number
            if (!(sitesTotalVisits instanceof Array)) {
                var visitors = siteTotalVisits,
                    siteTotalVisits = {};
                siteTotalVisits[siteIds[0]] = {nb_uniq_visitors: visitors};
            }

            $scope.nbSharedVisitors = parseInt(commonVisitorsStats.nb_shared_visitors);
            $scope.nbTotalVisitors = parseInt(commonVisitorsStats.nb_total_visitors);

            var siteStats = [];
            for (var index in siteIds) {
                var idSite = siteIds[index];

                if (sitesTotalVisits[idSite] !== undefined) {
                    var uniqueVisitors = parseInt(sitesTotalVisits[idSite]) || 0; // see https://github.com/piwik/piwik/issues/6206
                    siteStats.push({siteName: sites[index].name, nb_uniq_visitors: uniqueVisitors});
                } else {
                    siteStats.push(null);
                }
            }
            $scope.siteStats = siteStats;
        })['finally'](function () {
            $scope.isLoadingStats = false;
        });
    };
});
