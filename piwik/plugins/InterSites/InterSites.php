<?php
/**
 * Piwik - free/libre analytics platform
 *
 * @link http://piwik.org
 * @license http://www.gnu.org/licenses/gpl-3.0.html GPL v3 or later
 *
 */
namespace Piwik\Plugins\InterSites;

/**
 */
class InterSites extends \Piwik\Plugin
{
    /**
     * @see Piwik\Plugin::getListHooksRegistered
     */
    public function getListHooksRegistered()
    {
        return array(
            'AssetManager.getStylesheetFiles' => 'getStylesheetFiles',
            'AssetManager.getJavaScriptFiles' => 'getJsFiles',
            'Translate.getClientSideTranslationKeys' => 'getClientSideTranslationKeys'
        );
    }

    public function getStylesheetFiles(&$files)
    {
        $files[] = 'plugins/InterSites/javascripts/angularjs/compareVisitorsTool/compareVisitorsTool.less';
    }

    public function getJsFiles(&$jsFiles)
    {
        $jsFiles[] = 'plugins/InterSites/javascripts/all-websites-common-visitors-addition.js';
        $jsFiles[] = 'plugins/InterSites/javascripts/angularjs/compareVisitorsTool/controller.js';
        $jsFiles[] = 'plugins/InterSites/javascripts/angularjs/compareVisitorsTool/directive.js';
    }

    public function getClientSideTranslationKeys(&$keys)
    {
        $keys[] = "InterSites_SharedVisitors";
        $keys[] = "InterSites_CommonVisitorsToolIntro";
        $keys[] = "InterSites_CommonVisitorsTool_SiteStatsDesc";
        $keys[] = "InterSites_CommonVisitorsTool_SiteStatsNoVisits";
        $keys[] = "InterSites_CommonVisitorsTool_AllSitesStatsDesc";
        $keys[] = "InterSites_CommonVisitorsTool_AllSitesNoVisits";
        $keys[] = "InterSites_CommonVisitorsTool_LaunchLinkText";
        $keys[] = "InterSites_Go";
        $keys[] = "InterSites_AddSite";
    }
}
