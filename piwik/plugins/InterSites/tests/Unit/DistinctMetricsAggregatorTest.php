<?php
/**
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 */
namespace Piwik\Plugins\InterSites\tests\Unit;

use DatabaseTestCase;
use Piwik\Common;
use Piwik\Db\BatchInsert;
use Piwik\Plugins\InterSites\Model\DistinctMetricsAggregator;

/**
 * @group InterSites
 * @group InterSites_Unit
 * @group InterSites_DistinctMetricsAggregatorTest
 */
class DistinctMetricsAggregatorTest extends DatabaseTestCase
{
    /**
     * @var DistinctMetricsAggregator
     */
    private $instance;

    public function setUp()
    {
        parent::setUp();

        // TODO: this test case is waiting for https://github.com/piwik/piwik/issues/6207

        $this->instance = new DistinctMetricsAggregator();
    }

    public function testGetCommonVisitorCountFailsWithOneSiteAndDateRange()
    {
        // TODO
    }

    public function testGetCommonVisitorCountSucceedsWithMultipleSitesAndDateRange()
    {
        // TODO
    }

    public function testGetCommonVisitorCountSucceedsWithMultipleSitesAndDateRangeAndSegment()
    {
        // TODO
    }

    public function testGetCommonVisitorCountSucceedsWhenThereAreNoVisits()
    {
        // TODO
    }
}