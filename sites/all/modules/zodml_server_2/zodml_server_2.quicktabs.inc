<?php
/**
 * @file
 * zodml_server_2.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function zodml_server_2_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'cibng';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'CIBNG';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_67',
      'hide_title' => 1,
      'title' => 'General Information and Syllabi',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('CIBNG');
  t('General Information and Syllabi');

  $export['cibng'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'cisb';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'CISB';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_68',
      'hide_title' => 1,
      'title' => 'Derivatives Valuation Analysis; Portfolio Management; Commodity Trading and Futures',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_69',
      'hide_title' => 1,
      'title' => 'Financial Accounting and Financial Statement Analysis',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_70',
      'hide_title' => 1,
      'title' => 'Corporate Finance; Equity Valuation and Analysis; Fixed Income Valuation and Analysis',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_71',
      'hide_title' => 1,
      'title' => 'Ethics and Professional Standards; Law relating to Securities and Investments; Regulations of Securities and Corporate Finance',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('CISB');
  t('Corporate Finance; Equity Valuation and Analysis; Fixed Income Valuation and Analysis');
  t('Derivatives Valuation Analysis; Portfolio Management; Commodity Trading and Futures');
  t('Ethics and Professional Standards; Law relating to Securities and Investments; Regulations of Securities and Corporate Finance');
  t('Financial Accounting and Financial Statement Analysis');

  $export['cisb'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'citls';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'CITLS';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_72',
      'hide_title' => 1,
      'title' => 'Prelim Test',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_74',
      'hide_title' => 1,
      'title' => ' International Import/Export Institute',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_73',
      'hide_title' => 1,
      'title' => 'Mid Term Key',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_75',
      'hide_title' => 1,
      'title' => 'Pre-Certification Preparatory/Speed Test',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_76',
      'hide_title' => 1,
      'title' => 'Supply Chain Management Test',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t(' International Import/Export Institute');
  t('CITLS');
  t('Mid Term Key');
  t('Pre-Certification Preparatory/Speed Test');
  t('Prelim Test');
  t('Supply Chain Management Test');

  $export['citls'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'citn';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'CITN';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_63',
      'hide_title' => 1,
      'title' => 'General Information and Syllabi',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_64',
      'hide_title' => 1,
      'title' => 'Foundation',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_66',
      'hide_title' => 1,
      'title' => 'Taxation Technician Scheme I',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_81',
      'hide_title' => 1,
      'title' => 'Taxation Technician Scheme II',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_65',
      'hide_title' => 1,
      'title' => 'Professional I',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_biology_waec-block_80',
      'hide_title' => 1,
      'title' => 'Professional II',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('CITN');
  t('Foundation');
  t('General Information and Syllabi');
  t('Professional I');
  t('Professional II');
  t('Taxation Technician Scheme I');
  t('Taxation Technician Scheme II');

  $export['citn'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'donors';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Donors';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '82',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => '2013',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'nid' => '83',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => '2014',
      'weight' => '-99',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Garland';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('2013');
  t('2014');
  t('Donors');

  $export['donors'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ican';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'ICAN';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_51',
      'hide_title' => 1,
      'title' => 'General Information and Syllabi',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_52',
      'hide_title' => 1,
      'title' => 'ATSWA',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_53',
      'hide_title' => 1,
      'title' => 'Foundation',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_77',
      'hide_title' => 1,
      'title' => 'Intermediate',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_78',
      'hide_title' => 1,
      'title' => 'Professional I',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_biology_waec-block_79',
      'hide_title' => 1,
      'title' => 'Professional II',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('ATSWA');
  t('Foundation');
  t('General Information and Syllabi');
  t('ICAN');
  t('Intermediate');
  t('Professional I');
  t('Professional II');

  $export['ican'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'interns_and_volunteer';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'interns and volunteer';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'webform_delta_client-block-25',
      'hide_title' => 1,
      'title' => 'Internship',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'webform_delta_client-block-26',
      'hide_title' => 1,
      'title' => 'Volunteer',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Garland';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Internship');
  t('Volunteer');
  t('interns and volunteer');

  $export['interns_and_volunteer'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'neco';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'NECO';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_43',
      'hide_title' => 1,
      'title' => 'Biology',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_44',
      'hide_title' => 1,
      'title' => 'Chemistry',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_45',
      'hide_title' => 1,
      'title' => 'Economics',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_46',
      'hide_title' => 1,
      'title' => 'English Language',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_47',
      'hide_title' => 1,
      'title' => 'Government',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_biology_waec-block_48',
      'hide_title' => 1,
      'title' => 'Literature-in-English',
      'weight' => '-95',
      'type' => 'block',
    ),
    6 => array(
      'bid' => 'views_delta_biology_waec-block_49',
      'hide_title' => 1,
      'title' => 'Mathematics',
      'weight' => '-94',
      'type' => 'block',
    ),
    7 => array(
      'bid' => 'views_delta_biology_waec-block_50',
      'hide_title' => 1,
      'title' => 'Physics',
      'weight' => '-93',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Biology');
  t('Chemistry');
  t('Economics');
  t('English Language');
  t('Government');
  t('Literature-in-English');
  t('Mathematics');
  t('NECO');
  t('Physics');

  $export['neco'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'nim';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'NIM';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_54',
      'hide_title' => 1,
      'title' => 'Business Ethics and Social Responsibility',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_55',
      'hide_title' => 1,
      'title' => 'Communication Skills for Managers',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_56',
      'hide_title' => 1,
      'title' => 'Corporate Law and NIM Acts',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_57',
      'hide_title' => 1,
      'title' => 'Entrepreneurship',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_58',
      'hide_title' => 1,
      'title' => 'Financial Management',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_biology_waec-block_59',
      'hide_title' => 1,
      'title' => 'Management Case Analysis',
      'weight' => '-95',
      'type' => 'block',
    ),
    6 => array(
      'bid' => 'views_delta_biology_waec-block_60',
      'hide_title' => 1,
      'title' => 'Management Principles and Techniques',
      'weight' => '-94',
      'type' => 'block',
    ),
    7 => array(
      'bid' => 'views_delta_biology_waec-block_61',
      'hide_title' => 1,
      'title' => 'Marketing Management',
      'weight' => '-93',
      'type' => 'block',
    ),
    8 => array(
      'bid' => 'views_delta_biology_waec-block_62',
      'hide_title' => 1,
      'title' => 'Small Business Management',
      'weight' => '-92',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Business Ethics and Social Responsibility');
  t('Communication Skills for Managers');
  t('Corporate Law and NIM Acts');
  t('Entrepreneurship');
  t('Financial Management');
  t('Management Case Analysis');
  t('Management Principles and Techniques');
  t('Marketing Management');
  t('NIM');
  t('Small Business Management');

  $export['nim'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'professional_pq_tabs';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Professional PQ Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'ican',
      'title' => 'ICAN',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'machine_name' => 'nim',
      'title' => 'NIM',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
    2 => array(
      'machine_name' => 'citn',
      'title' => 'CITN',
      'weight' => '-98',
      'type' => 'qtabs',
    ),
    3 => array(
      'machine_name' => 'cibng',
      'title' => 'CIB',
      'weight' => '-97',
      'type' => 'qtabs',
    ),
    4 => array(
      'machine_name' => 'cisb',
      'title' => 'CIS',
      'weight' => '-96',
      'type' => 'qtabs',
    ),
    5 => array(
      'machine_name' => 'citls',
      'title' => 'CITLS',
      'weight' => '-95',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Garland';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('CIB');
  t('CIS');
  t('CITLS');
  t('CITN');
  t('ICAN');
  t('NIM');
  t('Professional PQ Tabs');

  $export['professional_pq_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'secondary_school_past_question';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Secondary School Past Question';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'waec_tab',
      'title' => 'WAEC',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'machine_name' => 'ume',
      'title' => 'UTME/JAMB',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
    2 => array(
      'machine_name' => 'neco',
      'title' => 'NECO',
      'weight' => '-98',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Garland';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('NECO');
  t('Secondary School Past Question');
  t('UTME/JAMB');
  t('WAEC');

  $export['secondary_school_past_question'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'state_tabs';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 4;
  $quicktabs->title = 'state tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'dn_state_quick_fact',
      'display' => 'block_3',
      'args' => '%3',
      'title' => 'Introduction',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'dn_state_quick_fact',
      'display' => 'block_2',
      'args' => '%3',
      'title' => 'History and People',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'dn_state_quick_fact',
      'display' => 'block',
      'args' => '%3',
      'title' => 'Adminstration',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'dn_state_quick_fact',
      'display' => 'block_1',
      'args' => '%3',
      'title' => 'Economy and Education',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'bid' => 'views_delta_zod_story_slide-block_2',
      'hide_title' => 1,
      'title' => 'Tourism and Culture',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Garland';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Adminstration');
  t('Economy and Education');
  t('History and People');
  t('Introduction');
  t('Tourism and Culture');
  t('state tabs');

  $export['state_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ume';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'UTME/JAMB';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_31',
      'hide_title' => 1,
      'title' => 'Biology',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block_34',
      'hide_title' => 1,
      'title' => 'Chemistry',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_35',
      'hide_title' => 1,
      'title' => 'Commerce',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_36',
      'hide_title' => 1,
      'title' => 'CRK',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_37',
      'hide_title' => 1,
      'title' => 'Economics',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_biology_waec-block_1',
      'hide_title' => 1,
      'title' => 'English Language',
      'weight' => '-95',
      'type' => 'block',
    ),
    6 => array(
      'bid' => 'views_delta_biology_waec-block_38',
      'hide_title' => 1,
      'title' => 'Government',
      'weight' => '-94',
      'type' => 'block',
    ),
    7 => array(
      'bid' => 'views_delta_biology_waec-block_39',
      'hide_title' => 1,
      'title' => 'Islamic Studies',
      'weight' => '-93',
      'type' => 'block',
    ),
    8 => array(
      'bid' => 'views_delta_biology_waec-block_40',
      'hide_title' => 1,
      'title' => 'Mathematics',
      'weight' => '-92',
      'type' => 'block',
    ),
    9 => array(
      'bid' => 'views_delta_biology_waec-block_41',
      'hide_title' => 1,
      'title' => 'Physics',
      'weight' => '-91',
      'type' => 'block',
    ),
    10 => array(
      'bid' => 'views_delta_biology_waec-block_42',
      'hide_title' => 1,
      'title' => 'Principles of Accounting',
      'weight' => '-90',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Biology');
  t('CRK');
  t('Chemistry');
  t('Commerce');
  t('Economics');
  t('English Language');
  t('Government');
  t('Islamic Studies');
  t('Mathematics');
  t('Physics');
  t('Principles of Accounting');
  t('UTME/JAMB');

  $export['ume'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'waec_tab';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'WAEC';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_biology_waec-block_2',
      'hide_title' => 1,
      'title' => 'Agricultural Science',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_biology_waec-block',
      'hide_title' => 1,
      'title' => 'Biology',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_biology_waec-block_3',
      'hide_title' => 1,
      'title' => 'Chemistry',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_biology_waec-block_4',
      'hide_title' => 1,
      'title' => 'Civic Education',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_biology_waec-block_5',
      'hide_title' => 1,
      'title' => 'Commerce',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_biology_waec-block_6',
      'hide_title' => 1,
      'title' => 'Computer Studies',
      'weight' => '-95',
      'type' => 'block',
    ),
    6 => array(
      'bid' => 'views_delta_biology_waec-block_7',
      'hide_title' => 1,
      'title' => 'CRK',
      'weight' => '-94',
      'type' => 'block',
    ),
    7 => array(
      'bid' => 'views_delta_biology_waec-block_8',
      'hide_title' => 1,
      'title' => 'Data Processing',
      'weight' => '-93',
      'type' => 'block',
    ),
    8 => array(
      'bid' => 'views_delta_biology_waec-block_9',
      'hide_title' => 1,
      'title' => 'Economics',
      'weight' => '-92',
      'type' => 'block',
    ),
    9 => array(
      'bid' => 'views_delta_biology_waec-block_10',
      'hide_title' => 1,
      'title' => 'Edo',
      'weight' => '-91',
      'type' => 'block',
    ),
    10 => array(
      'bid' => 'views_delta_biology_waec-block_11',
      'hide_title' => 1,
      'title' => 'Efik',
      'weight' => '-90',
      'type' => 'block',
    ),
    11 => array(
      'bid' => 'views_delta_biology_waec-block_12',
      'hide_title' => 1,
      'title' => 'English Language',
      'weight' => '-89',
      'type' => 'block',
    ),
    12 => array(
      'bid' => 'views_delta_biology_waec-block_13',
      'hide_title' => 1,
      'title' => 'Financial Accounting',
      'weight' => '-88',
      'type' => 'block',
    ),
    13 => array(
      'bid' => 'views_delta_biology_waec-block_14',
      'hide_title' => 1,
      'title' => 'Food Nutrition',
      'weight' => '-87',
      'type' => 'block',
    ),
    14 => array(
      'bid' => 'views_delta_biology_waec-block_15',
      'hide_title' => 1,
      'title' => 'Further Mathematics',
      'weight' => '-86',
      'type' => 'block',
    ),
    15 => array(
      'bid' => 'views_delta_biology_waec-block_16',
      'hide_title' => 1,
      'title' => 'Geography',
      'weight' => '-85',
      'type' => 'block',
    ),
    16 => array(
      'bid' => 'views_delta_biology_waec-block_18',
      'hide_title' => 1,
      'title' => 'Government',
      'weight' => '-84',
      'type' => 'block',
    ),
    17 => array(
      'bid' => 'views_delta_biology_waec-block_19',
      'hide_title' => 1,
      'title' => 'Hausa',
      'weight' => '-83',
      'type' => 'block',
    ),
    18 => array(
      'bid' => 'views_delta_biology_waec-block_20',
      'hide_title' => 1,
      'title' => 'Health Science',
      'weight' => '-82',
      'type' => 'block',
    ),
    19 => array(
      'bid' => 'views_delta_biology_waec-block_21',
      'hide_title' => 1,
      'title' => 'History',
      'weight' => '-81',
      'type' => 'block',
    ),
    20 => array(
      'bid' => 'views_delta_biology_waec-block_17',
      'hide_title' => 1,
      'title' => 'Home Management',
      'weight' => '-80',
      'type' => 'block',
    ),
    21 => array(
      'bid' => 'views_delta_biology_waec-block_22',
      'hide_title' => 1,
      'title' => 'Ibibio',
      'weight' => '-79',
      'type' => 'block',
    ),
    22 => array(
      'bid' => 'views_delta_biology_waec-block_23',
      'hide_title' => 1,
      'title' => 'Igbo',
      'weight' => '-78',
      'type' => 'block',
    ),
    23 => array(
      'bid' => 'views_delta_biology_waec-block_24',
      'hide_title' => 1,
      'title' => 'Islamic Studies',
      'weight' => '-77',
      'type' => 'block',
    ),
    24 => array(
      'bid' => 'views_delta_biology_waec-block_25',
      'hide_title' => 1,
      'title' => 'Literature-in-English',
      'weight' => '-76',
      'type' => 'block',
    ),
    25 => array(
      'bid' => 'views_delta_biology_waec-block_26',
      'hide_title' => 1,
      'title' => 'Office Practice',
      'weight' => '-75',
      'type' => 'block',
    ),
    26 => array(
      'bid' => 'views_delta_biology_waec-block_27',
      'hide_title' => 1,
      'title' => 'Painting and Decorating',
      'weight' => '-74',
      'type' => 'block',
    ),
    27 => array(
      'bid' => 'views_delta_biology_waec-block_28',
      'hide_title' => 1,
      'title' => 'Physical Education',
      'weight' => '-73',
      'type' => 'block',
    ),
    28 => array(
      'bid' => 'views_delta_biology_waec-block_29',
      'hide_title' => 1,
      'title' => 'Physics ',
      'weight' => '-72',
      'type' => 'block',
    ),
    29 => array(
      'bid' => 'views_delta_biology_waec-block_30',
      'hide_title' => 1,
      'title' => 'Technical Drawing',
      'weight' => '-71',
      'type' => 'block',
    ),
    30 => array(
      'bid' => 'views_delta_biology_waec-block_32',
      'hide_title' => 1,
      'title' => 'Visual Arts',
      'weight' => '-70',
      'type' => 'block',
    ),
    31 => array(
      'bid' => 'views_delta_biology_waec-block_33',
      'hide_title' => 1,
      'title' => 'Yoruba',
      'weight' => '-69',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Agricultural Science');
  t('Biology');
  t('CRK');
  t('Chemistry');
  t('Civic Education');
  t('Commerce');
  t('Computer Studies');
  t('Data Processing');
  t('Economics');
  t('Edo');
  t('Efik');
  t('English Language');
  t('Financial Accounting');
  t('Food Nutrition');
  t('Further Mathematics');
  t('Geography');
  t('Government');
  t('Hausa');
  t('Health Science');
  t('History');
  t('Home Management');
  t('Ibibio');
  t('Igbo');
  t('Islamic Studies');
  t('Literature-in-English');
  t('Office Practice');
  t('Painting and Decorating');
  t('Physical Education');
  t('Physics ');
  t('Technical Drawing');
  t('Visual Arts');
  t('WAEC');
  t('Yoruba');

  $export['waec_tab'] = $quicktabs;

  return $export;
}
