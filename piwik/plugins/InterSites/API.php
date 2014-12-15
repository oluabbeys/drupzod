<?php
/**
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 *
 */
namespace Piwik\Plugins\InterSites;

use Exception;
use Piwik\Period;
use Piwik\Period\Factory as PeriodFactory;
use Piwik\Piwik;
use Piwik\Plugins\InterSites\Model\DistinctMetricsAggregator;
use Piwik\Segment;
use Piwik\Site;

/**
 * API for the InterSites plugin.
 *
 * @method static \Piwik\Plugins\InterSites\API getInstance()
 */
class API extends \Piwik\Plugin\API
{
    /**
     * DAO instance that calculates distinct metrics on-demand.
     *
     * @var DistinctMetricsAggregator
     */
    private $distinctMetricsAggregator;

    /**
     * Constructor.
     *
     * @param DistinctMetricsAggregator|null $distinctMetricsAggregator If null, a new one is created.
     */
    public function __construct($distinctMetricsAggregator = null)
    {
        if ($distinctMetricsAggregator == null) {
            $distinctMetricsAggregator = new DistinctMetricsAggregator();
        }

        $this->distinctMetricsAggregator = $distinctMetricsAggregator;
    }

    /**
     * Return the number of visitors that visited every site in the given list for the
     * given date range. Includes the number of visitors that visited at least one site
     * and the number that visited every site.
     *
     * This data is calculated on demand, and for very large tables can take a long time
     * to run.
     *
     * See {@link Model\DistinctMetricsAggregator} for more information.
     *
     * @param string $idSite comma separated list of site IDs, ie, `"1,2,3"`
     * @param string $period
     * @param string $date
     * @return array Metrics **nb_total_visitors** and **nb_shared_visitors**.
     * @throws Exception if $idSite references zero sites or just one site.
     */
    public function getCommonVisitors($idSite, $period, $date, $segment = false)
    {
        if (empty($idSite)) {
            throw new Exception("No sites to get common visitors for.");
        }

        $idSites = Site::getIdSitesFromIdSitesString($idSite);
        Piwik::checkUserHasViewAccess($idSites);

        $segment = new Segment($segment, $idSites);
        $period = PeriodFactory::build($period, $date);

        return $this->distinctMetricsAggregator->getCommonVisitorCount(
            $idSites, $period->getDateStart(), $period->getDateEnd(), $segment);
    }
}
