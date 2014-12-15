<?php
/**
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 *
 */
namespace Piwik\Plugins\InterSites\Model;

use Piwik\Common;
use Piwik\Date;
use Piwik\Db;
use Piwik\Log;
use Piwik\Piwik;
use Piwik\Segment;
use Exception;

/**
 * DAO class that contains log aggregation methods that have to be run on demand.
 * In other words, there is no efficient way to cache the metrics calculated
 * by this class, so the aggregation cannot happen during archiving.
 *
 * The methods in this class aggregate distinct metrics (ie, unique visitors)
 * across many sites.
 */
class DistinctMetricsAggregator
{
    /**
     * Computes the total number of unique visitors who visited at least one site in,
     * a set of sites and the number of unique visitors that visited all of the sites
     * in the set.
     *
     * Performance: The SQL query this method executes was tested on a Piwik instance
     *              with 13 million visits total. Computing data for 4 sites with no
     *              date limit took 13s to complete.
     *
     * @param int[] $idSites The IDs of the sites for whom unique visitor counts should be
     *                       computed.
     * @param Date $startDate The lower bound of the date range of the visits to check.
     * @param Date $endDate The upper bound of the date range of the visits to check.
     * @param Segment $segment An optional segment to apply to the visits set before aggregation.
     *                         To supply no segment, use `new Segment()`.
     * @return int[] Returns two metrics: **nb_total_visitors** and **nb_shared_visitors**.
     *
     *               **nb_total_visitors** is the total number of unique visitors who visited
     *               at least one site in the list.
     *
     *               **nb_shared_visitors** is the total number of unique visitors who visited
     *               every site in the list.
     */
    public function getCommonVisitorCount($idSites, Date $startDate, Date $endDate, Segment $segment)
    {
        Log::debug("%s::%s('%s', '%s', '%s', '%s') called", "Model\\DistinctMetricsAggregator",
            __FUNCTION__, $idSites, $startDate, $endDate, $segment);

        if (count($idSites) == 1) {
            throw new Exception(Piwik::translate('InterSites_PleasSupplyAtLeastTwoDifferentSites'));
        }

        $select = "config_id, COUNT(DISTINCT idsite) AS sitecount";
        $from = array('log_visit');
        $where = 'visit_last_action_time >= ? AND visit_last_action_time <= ? AND idsite IN ('
               . Common::getSqlStringFieldsArray($idSites) . ')';
        $orderBy = false;
        $groupBy = 'config_id';
        $bind = array_merge(array($startDate->toString(), $endDate->toString()), $idSites);

        $innerQuery = $segment->getSelectQuery($select, $from, $where, $bind, $orderBy, $groupBy);

        $wholeQuery = "SELECT COUNT(sitecount_by_config.config_id) AS nb_total_visitors,
                              SUM(IF(sitecount_by_config.sitecount >= " . count($idSites) . ", 1, 0)) AS nb_shared_visitors
                         FROM ( {$innerQuery['sql']} ) AS sitecount_by_config";

        $result = Db::fetchRow($wholeQuery, $innerQuery['bind']);

        // nb_shared_visitors can be NULL if there are no visits
        if ($result['nb_shared_visitors'] === null) {
            $result['nb_shared_visitors'] = 0;
        }

        Log::debug("%s::%s() returned '%s'", "Model\\DistinctMetricsAggregator", __FUNCTION__, $result);

        return $result;
    }
}
