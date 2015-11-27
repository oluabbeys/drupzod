<?php
//The groups that is defined 
$config['group']['admin']   = 'Administrators';     //Has all the rights
$config['group']['ap']      = 'Access Providers';   //Has selected right
$config['group']['user']    = 'Permanent Users';              //Has very limited rights

$config['language']['default']    = '4_4';     //This is the id 4 of Languages and id 4 of countries (GB_en)

$config['commands']['msgcat'] = '/usr/bin/msgcat';

//Define the connection types and if they are active or not
$config['conn_type'][0]     = array('name' => __('Direct (Fixed IP)'),  'id' => 'direct',   'active' => true);
$config['conn_type'][1]     = array('name' => __('OpenVPN'),            'id' => 'openvpn',  'active' => false);
$config['conn_type'][2]     = array('name' => __('PPTP'),               'id' => 'pptp',     'active' => false);
$config['conn_type'][3]     = array('name' => __('Dynamic Client'),     'id' => 'dynamic',  'active' => true);

//Define the location of ccd (client config directory)
//FIXME This value does not get read by the OpenvpnClients Model - investigate
$config['openvpn']['ccd_dir_location']  = '/etc/openvpn/ccd/';
$config['openvpn']['ip_half']           = '10.8.';

//Define pptp specific settings
$config['pptp']['start_ip']                        = '10.20.30.2';
$config['pptp']['server_ip']                       = '10.20.30.1';
$config['pptp']['chap_secrets']                    = '/etc/ppp/chap-secrets';

//Define dynamic specific settings
$config['dynamic']['start_ip']                     = '10.120.0.1'; //Make this a Class B subnet (64000) which will never include a value also specified for a FIXED client

//Dictionary files to include for profiles...
$config['freeradius']['path_to_dictionary_files']   = '/usr/local/share/freeradius/';
$config['freeradius']['main_dictionary_file']       = '/usr/local/etc/raddb/dictionary';
$config['freeradius']['radclient']                  = '/usr/local/bin/radclient';


//Define the configured dynamic attributes
$config['dynamic_attributes'][0]     = array('name' => 'Called-Station-Id',  'id' => 'Called-Station-Id',   'active' => true);
$config['dynamic_attributes'][1]     = array('name' => 'Mikrotik-Realm',     'id' => 'Mikrotik-Realm',      'active' => true);
$config['dynamic_attributes'][2]     = array('name' => 'NAS-Identifier',     'id' => 'NAS-Identifier',      'active' => true);

//Define nas types
$config['nas_types'][0]     = array('name' => 'Other',                  'id' => 'other',                    'active' => true);
$config['nas_types'][1]     = array('name' => 'CoovaChilli',            'id' => 'CoovaChilli',              'active' => true);
$config['nas_types'][2]     = array('name' => 'CoovaChilli-Heartbeat',  'id' => 'CoovaChilli-Heartbeat',    'active' => true);
$config['nas_types'][3]     = array('name' => 'Mikrotik',               'id' => 'Mikrotik',                 'active' => true);
$config['nas_types'][3]     = array('name' => 'Mikrotik-Heartbeat',     'id' => 'Mikrotik-Heartbeat',       'active' => true);

//Define Voucher format types
$config['voucher_formats'][0]     = array('name' => 'Generic A4',               'id' => 'a4',               'active' => true);
$config['voucher_formats'][1]     = array('name' => 'Generic A4 Page/Voucher',  'id' => 'a4_page',          'active' => true);
$config['voucher_formats'][2]     = array('name' => 'Avery 5160',               'id' => '5160',             'active' => true);
$config['voucher_formats'][3]     = array('name' => 'Avery 5161',               'id' => '5161',             'active' => true);
$config['voucher_formats'][4]     = array('name' => 'Avery 5162',               'id' => '5162',             'active' => true);
$config['voucher_formats'][5]     = array('name' => 'Avery 5163',               'id' => '5163',             'active' => true);
$config['voucher_formats'][6]     = array('name' => 'Avery 5164',               'id' => '5164',             'active' => false); //gives trouble
$config['voucher_formats'][7]     = array('name' => 'Avery 8600',               'id' => '8600',             'active' => true); 
$config['voucher_formats'][8]     = array('name' => 'Avery L7160',              'id' => 'L7160',            'active' => true); 
$config['voucher_formats'][9]     = array('name' => 'Avery L7161',              'id' => 'L7161',            'active' => true); 
$config['voucher_formats'][10]    = array('name' => 'Avery L7163',              'id' => 'L7163',            'active' => true); 


//FIXME To incorporate
$config['paths']['wallpaper_location']  = "/rd/resources/images/wallpapers/";

$config['paths']['dynamic_photos']      = "/cake2/rd_cake/webroot/img/dynamic_photos/";   
$config['paths']['dynamic_detail_icon'] = "/cake2/rd_cake/webroot/img/dynamic_details/";

//Define default settings for the users:
$config['user_settings']['wallpaper']       = "9.jpg";
$config['user_settings']['map']['type']     = "ROADMAP";
$config['user_settings']['map']['zoom']     = 18;
$config['user_settings']['map']['lng']      = -71.0955740216735;
$config['user_settings']['map']['lat']      = 42.3379770178396;


//====== Mobile devices that do not support Sencha Touch =====
//ID your device by visiting: http://127.0.0.1/cake2/rd_cake/dynamic_details/id_me
$config['DynamicLogin']['use_jquery']       = array(
   //array('type' => 'contain',  'value' => 'Ubuntu'),
   //array('type' => 'match',    'value' => 'Mozilla/5.0 (X11; Linux i686) AppleWebKit/535.19 (KHTML, like Gecko) Ubuntu/10.04 Chromium/18.0.1025.151 Chrome/18.0.1025.151 Safari/535.19'),
);

//The location of the mobile and desktop login pages for CoovaChilli
//$config['CoovaDynamicLogin']['mobile']      = '/rd_login_pages/mobile/CoovaChilli/index.html';

$config['CoovaDynamicLogin']['mobile']          = '/rd_login_pages/mobile/CoovaChilli/build/production/CoovaChilli/index.html';
$config['CoovaDynamicLogin']['jquery_mobile']   = '/rd_login_pages/jquery_mobile/CoovaChilli/index.html';

//$config['CoovaDynamicLogin']['desktop']     = '/rd_login_pages/desktop/CoovaChilli/index.html';
$config['CoovaDynamicLogin']['desktop']     = '/rd_login_pages/desktop/CoovaChilli/build/production/CoovaChilli/index.html';


//The location of the mobile and desktop login pages for Mikrotik
//$config['MikrotikDynamicLogin']['mobile']      = '/rd_login_pages/mobile/Mikrotik/index.html';

$config['MikrotikDynamicLogin']['mobile']       = '/rd_login_pages/mobile/Mikrotik/build/production/Mikrotik/index.html';
$config['MikrotikDynamicLogin']['jquery_mobile']= '/rd_login_pages/jquery_mobile/Mikrotik/index.html';


//$config['MikrotikDynamicLogin']['desktop']     = '/rd_login_pages2/desktop/Mikrotik/index.html';
$config['MikrotikDynamicLogin']['desktop']     = '/rd_login_pages/desktop/Mikrotik/build/production/Mikrotik/index.html';


//Set to true to allow  the user to remove their device out of the realm it has been assigned to
$config['UserCanRemoveDevice']              = true;

//SMTP configs are defined in the Config/email.php file. Here we specify which one to use application wide
$config['EmailServer']						= 'default';


//========== WORK IN PROGRES =============
//----- PayU settings ----- Change to live and your details once working
$config['payu']['soapWdslUrl']      = 'https://staging.payu.co.za/service/PayUAPI?wsdl';
$config['payu']['payuRppUrl']       = 'https://staging.payu.co.za/rpp.do?PayUReference=';
$config['payu']['notificationUrl']  = 'http://41.134.95.22/cake2/rd_cake/fin_pay_u_transactions/payu_ipn';
$config['payu']['apiVersion']       = 'ONE_ZERO';
$config['payu']['safeKey']          = '{45D5C765-16D2-45A4-8C41-8D6F84042F8C}';
$config['payu']['soapUsername']     = 'Staging Integration Store 1';
$config['payu']['soapPassword']     = '78cXrW1W';

//--- PayU Vouchers-----
$config['payu']['vouchers']['a']['data_175m'] = array(
    'name'      => '175MB',  
    'price'     => '129.00',
    'currency'  => 'R', 
    'position'  => 'pre',
    'voucher'   => array(
        'activate_on_login' => '1',
        'time_valid'        => '0-02-00-00',
        'expire'            => '05/31/2014',
        'precede'           => '',
        'profile_id'        => 7,
        'pwd_length'        => 5,
        'realm_id'          => 34,
        'sel_language'      => '4_4',
        'user_id'           => '44'
    )
);

$config['payu']['vouchers']['a']['data_400m'] = array(
    'name'      => '400MB',  
    'price'     => '165.00',
    'currency'  => 'R', 
    'position'  => 'pre',
    'voucher'   => array(
        'activate_on_login' => '1',
        'time_valid'        => '2-22-22-00',
        'expire'            => '05/31/2014',
        'precede'           => '',
        'profile_id'        => 7,
        'pwd_length'        => 5,
        'realm_id'          => 34,
        'sel_language'      => '4_4',
        'user_id'           => '44'
    )
);


//From Paypal data 'item_name' (RDVoucher') 'item_number' (rd_v1) option_selection1 ('2Hours')
$config['paypal']['RDVoucher']['rd_v1']['2Hours'] = array(
                                                        'activate_on_login' => '1',
                                                        'time_valid'        => '0-02-00-00',
                                                        'expire'            => '06/31/2014',
                                                        'precede'           => '',
                                                        'profile_id'        => 7,
                                                        'pwd_length'        => 5,
                                                        'realm_id'          => 34,
                                                        'sel_language'      => '4_4',
                                                        'user_id'           => '44'
                                                    ); 

$config['paypal']['RDVoucher']['rd_v1']['4Hours'] = array(
                                                        'activate_on_login' => '1',
                                                        'time_valid'        => '0-04-00-00',
                                                        'expire'            => '06/31/2014',
                                                        'precede'           => '',
                                                        'profile_id'        => 7,
                                                        'pwd_length'        => 5,
                                                        'realm_id'          => 34,
                                                        'sel_language'      => '4_4',
                                                        'user_id'           => '44'
                                                    ); 

$config['paypal']['RDVoucher']['rd_v1']['12Hours'] = array(
                                                        'activate_on_login' => '1',
                                                        'time_valid'        => '0-12-00-00',
                                                        'expire'            => '06/31/2014',
                                                        'precede'           => '',
                                                        'profile_id'        => 7,
                                                        'pwd_length'        => 5,
                                                        'realm_id'          => 34,
                                                        'sel_language'      => '4_4',
                                                        'user_id'           => '44'
                                                    );

//== Premium SMS ==

$config['premium_sms']['50MB'] = array(
                                    'precede'           => '',
                                    'profile_id'        => 9,
									'profile'			=> 'Data-Standard-1G',
                                    'realm_id'          => 34,
									'realm'				=> 'Residence Inn',
                                    'sel_language'      => '4_4',
                                    'user_id'           => '44'
                                );


//======== END WORK IN PROGRESS ==========


    //Original for extjs4.x

//==== Define glyphs -> We'll use glyphs insteadd of icons
$config['icnLock']      = 57495;
$config['icnYes']       = 57605;
$config['icnMenu']      = 57594;
$config['icnInfo']      = 57479;
$config['icnPower']     = 57541;
$config['icnSpanner']   = 57583;
$config['icnHome']      = 57473;
$config['icnDynamic']   = 57392;
$config['incVoucher']   = 57606;
$config['icnReload']    = 57374;
$config['icnAdd']       = 57537;
$config['icnEdit']      = 57524;
$config['icnDelete']    = 57610;
$config['icnPdf']       = 57447;
$config['icnCsv']       = 57415;
$config['icnRadius']    = 57444;
$config['icnLight']     = 57487;
$config['icnNote']      = 57531;
$config['icnKey']       = 57485;
$config['icnRealm']     = 57557;
$config['icnNas']       = 57589;
$config['icnTag']       = 57592;
$config['icnProfile']   = 57468;
$config['icnComponent'] = 57544;
$config['icnLight']     = 57487;
$config['icnActivity']  = 57408;
$config['icnLog']       = 57438;
$config['icnTranslate'] = 57466;
$config['icnConfigure'] = 57583;
$config['icnUser']      = 57618;
$config['icnVoucher']   = 57606;
$config['icnDevice']    = 57432;
$config['icnMesh']      = 57460;
$config['icnBug']       = 57344;
$config['icnMobile']    = 57431;
$config['icnDesktop']   = 57429;
$config['icnView']      = 57650;
$config['icnMeta']      = 57630;
$config['icnMap']       = 57645;
$config['icnConnect']   = 57489;
$config['icnGraph']     = 57410;
$config['icnKick']      = 57535;
$config['icnClose']     = 57609;
$config['icnFinance']   = 57586;
$config['icnOnlineShop']= 57554;
$config['icnEmail']     = 57378;
$config['icnAttach']    = 57380;
$config['icnCut']       = 57551;
$config['icnTopUp']     = 57419;
$config['icnSubtract']  = 57520;
$config['icnWatch']     = 57628;
$config['icnStar']      = 57585;
$config['icnGrid']      = 57600;
$config['icnFacebook']	= 57558;
$config['icnGoogle']	= 57614;
$config['icnTwitter']	= 57574;
$config['icnWifi']		= 57550;
$config['icnIP']		= 57479;
$config['icnThumbUp']   = 57603;
$config['icnThumbDown']	= 57602;
$config['icnCPU']		= 57452;
$config['icnNotify']	= 57624;
$config['icnCamera']    = 57399;
$config['icnRedirect']  = 57372;


//Modified for ExtJS 6
/*
$config['webFont']      = 'FontAwesome';

$config['icnLock']      = 'xf023@'.$config['webFont'];
$config['icnYes']       = 'xf00c@'.$config['webFont'];
$config['icnMenu']      = 'xf0c9@'.$config['webFont'];
$config['icnInfo']      = 'xf129@'.$config['webFont'];
$config['icnPower']     = 'xf011@'.$config['webFont'];
$config['icnSpanner']   = 'xf0ad@'.$config['webFont'];
$config['icnHome']      = 'xf015@'.$config['webFont'];
$config['icnDynamic']   = 'xf0d0@'.$config['webFont'];
$config['incVoucher']   = 'xf145@'.$config['webFont'];
$config['icnReload']    = 'xf021@'.$config['webFont'];//
$config['icnAdd']       = 'xf067@'.$config['webFont'];//
$config['icnEdit']      = 'xf040@'.$config['webFont'];//
$config['icnDelete']    = 'xf1f8@'.$config['webFont'];//
$config['icnPdf']       = 'xf1c1@'.$config['webFont'];
$config['icnCsv']       = 'xf1c3@'.$config['webFont'];
$config['icnRadius']    = 'xf10c@'.$config['webFont'];
$config['icnLight']     = 'xf204@'.$config['webFont'];
$config['icnNote']      = 'xf08d@'.$config['webFont'];//
$config['icnKey']       = 'xf084@'.$config['webFont'];
$config['icnRealm']     = 'xf17d@'.$config['webFont'];
$config['icnNas']       = 'xf1cb@'.$config['webFont'];
$config['icnTag']       = 'xf02b@'.$config['webFont'];
$config['icnProfile']   = 'xf1b3@'.$config['webFont'];
$config['icnComponent'] = 'xf12e@'.$config['webFont'];
$config['icnActivity']  = 'xf0e7@'.$config['webFont'];
$config['icnLog']       = 'xf044@'.$config['webFont'];
$config['icnTranslate'] = 'xf0ac@'.$config['webFont'];
$config['icnConfigure'] = 'xf0ad@'.$config['webFont'];
$config['icnUser']      = 'xf007@'.$config['webFont'];
$config['icnDevice']    = 'xf10a@'.$config['webFont'];
$config['icnMesh']      = 'xf20e@'.$config['webFont'];
$config['icnBug']       = 'xf188@'.$config['webFont'];
$config['icnMobile']    = 'xf10b@'.$config['webFont'];
$config['icnDesktop']   = 'xf108@'.$config['webFont'];
$config['icnView']      = 'xf002@'.$config['webFont'];
$config['icnMeta']      = 'xf0cb@'.$config['webFont'];
$config['icnMap']       = 'xf041@'.$config['webFont'];
$config['icnConnect']   = 'xf0c1@'.$config['webFont'];
$config['icnGraph']     = 'xf080@'.$config['webFont'];
$config['icnKick']      = 'xf1e6@'.$config['webFont'];
$config['icnClose']     = 'xf00d@'.$config['webFont'];
$config['icnFinance']   = 'xf09d@'.$config['webFont'];
$config['icnOnlineShop']= 'xf07a@'.$config['webFont'];
$config['icnEmail']     = 'xf0e0@'.$config['webFont'];
$config['icnAttach']    = 'xf0c6@'.$config['webFont'];
$config['icnCut']       = 'xf0c4@'.$config['webFont'];
$config['icnTopUp']     = 'xf0f4@'.$config['webFont'];
$config['icnSubtract']  = 'xf068@'.$config['webFont'];
$config['icnWatch']     = 'xf017@'.$config['webFont'];
$config['icnStar']      = 'xf005@'.$config['webFont'];
$config['icnGrid']      = 'xf00a@'.$config['webFont'];
$config['icnFacebook']	= 'xf09a@'.$config['webFont'];
$config['icnGoogle']	= 'xf1a0@'.$config['webFont'];
$config['icnTwitter']	= 'xf099@'.$config['webFont'];
$config['icnWifi']		= 'xf012@'.$config['webFont'];
$config['icnIP']		= 'xf1c0@'.$config['webFont'];
$config['icnThumbUp']   = 'xf087@'.$config['webFont'];
$config['icnThumbDown']	= 'xf088@'.$config['webFont'];
$config['icnCPU']		= 'xf085@'.$config['webFont'];
$config['icnCamera']    = 'xf030@'.$config['webFont'];
*/


//=== EXPERIMENTAL STUFF =====
//Show experimental menus
$config['experimental']['active']                   = false;

//IP Settings
$config['experimental']['defaults']['ip_mask']      = '255.255.255.0';
$config['experimental']['defaults']['ip_dns_1']     = '192.168.99.99';
$config['experimental']['defaults']['ip_dns_2']     = '192.168.99.100';
$config['experimental']['defaults']['ip_dns_2']     = '192.168.99.100';

//Wifi Settings
$config['experimental']['defaults']['wifi_active']  = true;
$config['experimental']['defaults']['channel']      = 1;
$config['experimental']['defaults']['power']        = 10;
$config['experimental']['defaults']['distance']     = 30;


$config['experimental']['defaults']['ssid_secure']  = 'RD Wireless';
$config['experimental']['defaults']['radius']       = '192.168.99.99';
$config['experimental']['defaults']['secret']       = 'testing123';

$config['experimental']['defaults']['ssid_open']    = 'RD Guest';

//OpenVPN Settings
$config['experimental']['defaults']['vpn_server']   = '192.168.99.99';

$config['experimental']['openvpn']['start_ip']      = '10.8.1.2';
$config['experimental']['openvpn']['ca']            = '-----BEGIN CERTIFICATE-----
MIIDYDCCAsmgAwIBAgIJAK+7qcW3f0W6MA0GCSqGSIb3DQEBBQUAMH4xCzAJBgNV
BAYTAlpBMRAwDgYDVQQIEwdHYXV0ZW5nMREwDwYDVQQHEwhQcmV0b3JpYTEMMAoG
A1UEChMDWUZpMRMwEQYDVQQDEwpPcGVuVlBOLUNBMScwJQYJKoZIhvcNAQkBFhhk
aXJrdmFuZGVyd2FsdEBnbWFpbC5jb20wHhcNMTMwNDE1MDgxOTM1WhcNMjMwNDEz
MDgxOTM1WjB+MQswCQYDVQQGEwJaQTEQMA4GA1UECBMHR2F1dGVuZzERMA8GA1UE
BxMIUHJldG9yaWExDDAKBgNVBAoTA1lGaTETMBEGA1UEAxMKT3BlblZQTi1DQTEn
MCUGCSqGSIb3DQEJARYYZGlya3ZhbmRlcndhbHRAZ21haWwuY29tMIGfMA0GCSqG
SIb3DQEBAQUAA4GNADCBiQKBgQDmfB1FBrjuB5xRYJGjr8fCgoxY9M99nPzMcnBQ
tFnkc7TjsoPfDTAOgecpmwfPrfxjBvi9Vae+TwiiwiLLMCewvXP47vySRhXIRUVL
OvEcgapdIGbl26JaHyUrjbsAdrc/Fp5OTmjU5EZ/BciheZJr+ZLUWg/5bkDtI3rH
g+moPQIDAQABo4HlMIHiMB0GA1UdDgQWBBTf/iG94D0pd+3z5RURkZ+43j43LDCB
sgYDVR0jBIGqMIGngBTf/iG94D0pd+3z5RURkZ+43j43LKGBg6SBgDB+MQswCQYD
VQQGEwJaQTEQMA4GA1UECBMHR2F1dGVuZzERMA8GA1UEBxMIUHJldG9yaWExDDAK
BgNVBAoTA1lGaTETMBEGA1UEAxMKT3BlblZQTi1DQTEnMCUGCSqGSIb3DQEJARYY
ZGlya3ZhbmRlcndhbHRAZ21haWwuY29tggkAr7upxbd/RbowDAYDVR0TBAUwAwEB
/zANBgkqhkiG9w0BAQUFAAOBgQCLiXXSKSPIAkMVwFq935zb8RIoEu6fVbo9nbwN
fVIBgZIqpSZT59Ueef/l5zcTabRH7cIZGe6RqBK17I2nSr4s5+Ut4lgdvu7xe3g8
t72pyVfDVfHr1sSMRGSjVt1SPI13uz3a6hzFVFxBoHWdyhXoGmvidNIm09hwPsJN
S6UMIw==
-----END CERTIFICATE-----
';
$config['experimental']['openvpn']['mask']          = '255.255.0.0';
$config['experimental']['openvpn']['broadcast']     = '10.8.255.255';

$config['experimental']['eduroam']['radius_server'] = '192.168.10.20';
$config['experimental']['eduroam']['radius_secret'] = 'eduroam';

$config['experimental']['snmp']['ro']               = 'public';
$config['experimental']['snmp']['rw']               = 'private';
$config['experimental']['snmp']['contact']          = 'radiusdesk@gmail.com';

?>
