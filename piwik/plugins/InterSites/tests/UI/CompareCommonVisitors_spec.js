/*!
 * Piwik - free/libre analytics platform
 *
 * InterSites CompareCommonVisitors dialog tests.
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 */

describe("CompareCommonVisitors", function () {
    this.timeout(0);
    this.fixture = "Piwik\\Plugins\\InterSites\\Tests\\Fixtures\\ThreeSitesWithSharedVisitors";

    var url = "?module=MultiSites&action=index&idSite=1&period=month&date=2010-03-06";

    it("should load correctly", function (done) {
        expect.screenshot('loaded').to.be.captureSelector('.ngdialog-content', function (page) {
            page.load(url);
            page.click('a.piwik-inter-sites-launch-compare');
        }, done);
    });

    it("should update stats correctly", function (done) {
        expect.screenshot('stats').to.be.captureSelector('.ngdialog-content', function (page) {
            page.click('.submit[value="Add Site"]');
            page.evaluate(function () {
                angular.element('[piwik-siteselector]:eq(1)>div').scope().switchSite({idsite: 2, name: "Site 2"});
                angular.element('[piwik-siteselector]:eq(2)>div').scope().switchSite({idsite: 3, name: "Site 3"});
            });
            page.click('.submit[value="Go"]');
        }, done);
    });
});
