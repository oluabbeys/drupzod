<?php
error_reporting(E_ERROR | E_WARNING | E_PARSE);
// Define path to application directory
defined('APPLICATION_PATH')
    || define('APPLICATION_PATH', realpath(dirname(__FILE__) . '/../application'));

// Define application environment
defined('APPLICATION_ENV')
    || define('APPLICATION_ENV', (getenv('APPLICATION_ENV') ? getenv('APPLICATION_ENV') : 'production'));

// Ensure library/ is on include_path
set_include_path(implode(PATH_SEPARATOR, array(
    realpath(APPLICATION_PATH . '/../library'),
    realpath(APPLICATION_PATH . '/../application/default/models/'), 
	realpath(APPLICATION_PATH .'/../application/default/models/vo'),
 	realpath(APPLICATION_PATH .'/../application/user/models/vo') ,
	realpath(APPLICATION_PATH .'/../application' ),
	realpath(APPLICATION_PATH .'/../application/default/layouts'),
    get_include_path(),
)));

/** Zend_Application */
require_once 'Zend/Application.php';
require_once "Zend/Loader.php"; 
require_once 'Zend/Loader/Autoloader.php';


$autoloader = Zend_Loader_Autoloader::getInstance();
        $autoloader->setFallbackAutoloader(true);

$root = realpath(dirname(__FILE__) . '/../');
Zend_Registry::set('root',$root);
// Create application, bootstrap, and run
$application = new Zend_Application(APPLICATION_ENV, array(
    'bootstrap'=>array(
		'path'=>APPLICATION_PATH."/Bootstrap.php",
		'class'=>'Bootstrap'
	),

));
$application->bootstrap()
            ->run();