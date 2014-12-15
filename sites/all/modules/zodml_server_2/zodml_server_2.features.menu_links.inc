<?php
/**
 * @file
 * zodml_server_2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function zodml_server_2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_4000-childrens-book-drive:node/5861
  $menu_links['main-menu_4000-childrens-book-drive:node/5861'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5861',
    'router_path' => 'node/%',
    'link_title' => '4000 Children\'s Book Drive',
    'options' => array(
      'identifier' => 'main-menu_4000-childrens-book-drive:node/5861',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_special-projects:node/4154',
  );
  // Exported menu link: main-menu_about-us:node/14
  $menu_links['main-menu_about-us:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about-us:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_and-i-spied-reasons-to-vote-with-obi-and-his-friends-librarian-book-picks:node/5707
  $menu_links['main-menu_and-i-spied-reasons-to-vote-with-obi-and-his-friends-librarian-book-picks:node/5707'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5707',
    'router_path' => 'node/%',
    'link_title' => '...And I spied, Reasons to Vote with Obi and His Friends– Librarian Book Picks',
    'options' => array(
      'identifier' => 'main-menu_and-i-spied-reasons-to-vote-with-obi-and-his-friends-librarian-book-picks:node/5707',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blog',
  );
  // Exported menu link: main-menu_annual-reports-and-financials:node/27
  $menu_links['main-menu_annual-reports-and-financials:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Annual Reports and Financials',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_annual-reports-and-financials:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:http://stage.zodml.org/blog
  $menu_links['main-menu_blog:http://stage.zodml.org/blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://stage.zodml.org/blog',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:http://stage.zodml.org/blog',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_board-of-trustees:node/29
  $menu_links['main-menu_board-of-trustees:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Board of Trustees',
    'options' => array(
      'identifier' => 'main-menu_board-of-trustees:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: main-menu_book-fair-excursions:node/7
  $menu_links['main-menu_book-fair-excursions:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Book Fair Excursions',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_book-fair-excursions:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_bookcorner:node/3
  $menu_links['main-menu_bookcorner:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'BookCorner',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_bookcorner:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_career-guide:node/136
  $menu_links['main-menu_career-guide:node/136'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/136',
    'router_path' => 'node/%',
    'link_title' => 'Career Guide',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_career-guide:node/136',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_catch-them-young-cathy:node/4
  $menu_links['main-menu_catch-them-young-cathy:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Catch Them Young (CATHY)',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_catch-them-young-cathy:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_community-library:node/22
  $menu_links['main-menu_community-library:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Community Library',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_community-library:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/11
  $menu_links['main-menu_contact-us:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_contact-us:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_discover-nigeria:node/67
  $menu_links['main-menu_discover-nigeria:node/67'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'Discover Nigeria',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_discover-nigeria:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_donate-to-zodml:node/58
  $menu_links['main-menu_donate-to-zodml:node/58'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Donate to ZODML',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_donate-to-zodml:node/58',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:node/44',
  );
  // Exported menu link: main-menu_elibrary:http://www.zodml.org/e-library
  $menu_links['main-menu_elibrary:http://www.zodml.org/e-library'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.zodml.org/e-library',
    'router_path' => '',
    'link_title' => 'eLibrary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_elibrary:http://www.zodml.org/e-library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_eresources:node/66
  $menu_links['main-menu_eresources:node/66'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/66',
    'router_path' => 'node/%',
    'link_title' => 'eResources',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_eresources:node/66',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_faqs:faq-page
  $menu_links['main-menu_faqs:faq-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faqs:faq-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community-library:node/22',
  );
  // Exported menu link: main-menu_for-kids:node/132
  $menu_links['main-menu_for-kids:node/132'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'For Kids',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_for-kids:node/132',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_for-parents:node/1253
  $menu_links['main-menu_for-parents:node/1253'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1253',
    'router_path' => 'node/%',
    'link_title' => 'For Parents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_for-parents:node/1253',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_for-secondary-school-students:node/1027
  $menu_links['main-menu_for-secondary-school-students:node/1027'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1027',
    'router_path' => 'node/%',
    'link_title' => 'For Secondary School Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_for-secondary-school-students:node/1027',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_friends-of-the-library:node/48
  $menu_links['main-menu_friends-of-the-library:node/48'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Friends of the Library',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_friends-of-the-library:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:node/44',
  );
  // Exported menu link: main-menu_get-involved:node/44
  $menu_links['main-menu_get-involved:node/44'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_get-involved:node/44',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_internet-learning-centre:node/8
  $menu_links['main-menu_internet-learning-centre:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Internet Learning Centre',
    'options' => array(
      'identifier' => 'main-menu_internet-learning-centre:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_jobs-and-internships:node/24
  $menu_links['main-menu_jobs-and-internships:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Jobs and Internships',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_jobs-and-internships:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: main-menu_join-the-library:node/143
  $menu_links['main-menu_join-the-library:node/143'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/143',
    'router_path' => 'node/%',
    'link_title' => 'Join the Library',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_join-the-library:node/143',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community-library:node/22',
  );
  // Exported menu link: main-menu_location-and-hours:node/23
  $menu_links['main-menu_location-and-hours:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Location and Hours',
    'options' => array(
      'identifier' => 'main-menu_location-and-hours:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community-library:node/22',
  );
  // Exported menu link: main-menu_my-blog:blog/%
  $menu_links['main-menu_my-blog:blog/%'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(
      'identifier' => 'main-menu_my-blog:blog/%',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blog',
  );
  // Exported menu link: main-menu_newsletters:node/62
  $menu_links['main-menu_newsletters:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Newsletters',
    'options' => array(
      'identifier' => 'main-menu_newsletters:node/62',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_zodml-newsroom:node/61',
  );
  // Exported menu link: main-menu_newspaper-clippings:node/1198
  $menu_links['main-menu_newspaper-clippings:node/1198'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1198',
    'router_path' => 'node/%',
    'link_title' => 'Newspaper Clippings',
    'options' => array(
      'identifier' => 'main-menu_newspaper-clippings:node/1198',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_zodml-newsroom:node/61',
  );
  // Exported menu link: main-menu_oasis-libraries:node/2
  $menu_links['main-menu_oasis-libraries:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Oasis Libraries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_oasis-libraries:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_of-animal-rights-and-independent-minds-my-zodml-reading-programme-experience:node/5660
  $menu_links['main-menu_of-animal-rights-and-independent-minds-my-zodml-reading-programme-experience:node/5660'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5660',
    'router_path' => 'node/%',
    'link_title' => 'Of Animal Rights and Independent Minds: My ZODML Reading Programme Experience',
    'options' => array(
      'identifier' => 'main-menu_of-animal-rights-and-independent-minds-my-zodml-reading-programme-experience:node/5660',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blog',
  );
  // Exported menu link: main-menu_online-catalogue:http://www.zodml.org/catalogue.php
  $menu_links['main-menu_online-catalogue:http://www.zodml.org/catalogue.php'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.zodml.org/catalogue.php',
    'router_path' => '',
    'link_title' => 'Online Catalogue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_online-catalogue:http://www.zodml.org/catalogue.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community-library:node/22',
  );
  // Exported menu link: main-menu_our-donors-and-partners:node/50
  $menu_links['main-menu_our-donors-and-partners:node/50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Our Donors and Partners',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_our-donors-and-partners:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:node/44',
  );
  // Exported menu link: main-menu_our-story:node/13
  $menu_links['main-menu_our-story:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Our Story',
    'options' => array(
      'identifier' => 'main-menu_our-story:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: main-menu_our-team:node/28
  $menu_links['main-menu_our-team:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Our Team',
    'options' => array(
      'identifier' => 'main-menu_our-team:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: main-menu_poems-through-a-broken-mirror-by-olajide-salawu:node/5662
  $menu_links['main-menu_poems-through-a-broken-mirror-by-olajide-salawu:node/5662'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5662',
    'router_path' => 'node/%',
    'link_title' => 'Poems: Through a Broken Mirror by Olajide Salawu',
    'options' => array(
      'identifier' => 'main-menu_poems-through-a-broken-mirror-by-olajide-salawu:node/5662',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blog',
  );
  // Exported menu link: main-menu_press-releases:node/1223
  $menu_links['main-menu_press-releases:node/1223'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1223',
    'router_path' => 'node/%',
    'link_title' => 'Press Releases',
    'options' => array(
      'identifier' => 'main-menu_press-releases:node/1223',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_zodml-newsroom:node/61',
  );
  // Exported menu link: main-menu_prison-libraries:node/9
  $menu_links['main-menu_prison-libraries:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Prison Libraries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_prison-libraries:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_professional-exam-past-papers:node/133
  $menu_links['main-menu_professional-exam-past-papers:node/133'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/133',
    'router_path' => 'node/%',
    'link_title' => 'Professional Exam Past Papers',
    'options' => array(
      'identifier' => 'main-menu_professional-exam-past-papers:node/133',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_project-avalanche-book-donation-request-form:node/1221
  $menu_links['main-menu_project-avalanche-book-donation-request-form:node/1221'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1221',
    'router_path' => 'node/%',
    'link_title' => 'Project Avalanche Book Donation Request Form',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_project-avalanche-book-donation-request-form:node/1221',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_special-projects:node/4154',
  );
  // Exported menu link: main-menu_project-fireworks:node/4155
  $menu_links['main-menu_project-fireworks:node/4155'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4155',
    'router_path' => 'node/%',
    'link_title' => 'Project Fireworks',
    'options' => array(
      'identifier' => 'main-menu_project-fireworks:node/4155',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_special-projects:node/4154',
  );
  // Exported menu link: main-menu_projects:node/1
  $menu_links['main-menu_projects:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_projects:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research-guide:node/135
  $menu_links['main-menu_research-guide:node/135'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/135',
    'router_path' => 'node/%',
    'link_title' => 'Research Guide',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_research-guide:node/135',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_eresources:node/66',
  );
  // Exported menu link: main-menu_secondary-school-reading-programmes:node/6
  $menu_links['main-menu_secondary-school-reading-programmes:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Secondary School Reading Programmes',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_secondary-school-reading-programmes:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_special-projects:node/4154
  $menu_links['main-menu_special-projects:node/4154'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4154',
    'router_path' => 'node/%',
    'link_title' => 'Special Projects',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_special-projects:node/4154',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:node/1',
  );
  // Exported menu link: main-menu_using-the-library:node/64
  $menu_links['main-menu_using-the-library:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Using the Library',
    'options' => array(
      'identifier' => 'main-menu_using-the-library:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community-library:node/22',
  );
  // Exported menu link: main-menu_zaccheus-onumba-dibiaezue:node/15
  $menu_links['main-menu_zaccheus-onumba-dibiaezue:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Zaccheus Onumba Dibiaezue',
    'options' => array(
      'identifier' => 'main-menu_zaccheus-onumba-dibiaezue:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: main-menu_zodml-at-a-glance:node/63
  $menu_links['main-menu_zodml-at-a-glance:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'ZODML at a Glance',
    'options' => array(
      'identifier' => 'main-menu_zodml-at-a-glance:node/63',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_zodml-newsroom:node/61',
  );
  // Exported menu link: main-menu_zodml-newsroom:node/61
  $menu_links['main-menu_zodml-newsroom:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'ZODML Newsroom',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_zodml-newsroom:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:node/14',
  );
  // Exported menu link: management_about-us:admin/structure/menu/manage/menu-about-us
  $menu_links['management_about-us:admin/structure/menu/manage/menu-about-us'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-about-us',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'management_about-us:admin/structure/menu/manage/menu-about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_administration:admin/config/administration
  $menu_links['management_administration:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
      'identifier' => 'management_administration:admin/config/administration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_apache-solr-search-index:admin/reports/apachesolr
  $menu_links['management_apache-solr-search-index:admin/reports/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/apachesolr',
    'router_path' => 'admin/reports/apachesolr',
    'link_title' => 'Apache Solr search index',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about the contents of the index on the server',
      ),
      'identifier' => 'management_apache-solr-search-index:admin/reports/apachesolr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_apache-solr-search:admin/config/search/apachesolr
  $menu_links['management_apache-solr-search:admin/config/search/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/apachesolr',
    'router_path' => 'admin/config/search/apachesolr',
    'link_title' => 'Apache Solr search',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Apache Solr.',
      ),
      'identifier' => 'management_apache-solr-search:admin/config/search/apachesolr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_available-updates:admin/reports/updates
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database and files or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_blocks:admin/structure/block
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_captcha:admin/config/people/captcha
  $menu_links['management_captcha:admin/config/people/captcha'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/captcha',
    'router_path' => 'admin/config/people/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer how and where CAPTCHAs are used.',
      ),
      'identifier' => 'management_captcha:admin/config/people/captcha',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_community-library:admin/structure/menu/manage/menu-library
  $menu_links['management_community-library:admin/structure/menu/manage/menu-library'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-library',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Community Library',
    'options' => array(
      'identifier' => 'management_community-library:admin/structure/menu/manage/menu-library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_content-authoring:admin/config/content
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_content:admin/content
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Find and manage content.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_context:admin/structure/context
  $menu_links['management_context:admin/structure/context'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/context',
    'router_path' => 'admin/structure/context',
    'link_title' => 'Context',
    'options' => array(
      'attributes' => array(
        'title' => 'Associate menus, views, blocks, etc. with different contexts to structure your site.',
      ),
      'identifier' => 'management_context:admin/structure/context',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_cron:admin/config/system/cron
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_dashboard:admin/dashboard
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_delta-blocks:admin/config/user-interface/delta-blocks
  $menu_links['management_delta-blocks:admin/config/user-interface/delta-blocks'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/delta-blocks',
    'router_path' => 'admin/config/user-interface/delta-blocks',
    'link_title' => 'Delta blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the Delta blocks module.',
      ),
      'identifier' => 'management_delta-blocks:admin/config/user-interface/delta-blocks',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_development:admin/config/development
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_discover-nigeria-menu:admin/structure/menu/manage/menu-discover-nigeria-menu
  $menu_links['management_discover-nigeria-menu:admin/structure/menu/manage/menu-discover-nigeria-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-discover-nigeria-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'discover nigeria menu',
    'options' => array(
      'identifier' => 'management_discover-nigeria-menu:admin/structure/menu/manage/menu-discover-nigeria-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_easy-breadcrumb:admin/config/user-interface/easy-breadcrumb
  $menu_links['management_easy-breadcrumb:admin/config/user-interface/easy-breadcrumb'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/easy-breadcrumb',
    'router_path' => 'admin/config/user-interface/easy-breadcrumb',
    'link_title' => 'Easy Breadcrumb',
    'options' => array(
      'attributes' => array(
        'title' => 'Controls settings for the module Easy Breadcrumb',
      ),
      'identifier' => 'management_easy-breadcrumb:admin/config/user-interface/easy-breadcrumb',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_eresources:admin/structure/menu/manage/menu-e-resources-menu
  $menu_links['management_eresources:admin/structure/menu/manage/menu-e-resources-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-e-resources-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'eResources',
    'options' => array(
      'identifier' => 'management_eresources:admin/structure/menu/manage/menu-e-resources-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_features:admin/structure/features
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_feed-aggregator:admin/config/services/aggregator
  $menu_links['management_feed-aggregator:admin/config/services/aggregator'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/aggregator',
    'router_path' => 'admin/config/services/aggregator',
    'link_title' => 'Feed aggregator',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure which content your site aggregates from other sites, how often it polls them, and how they\'re categorized.',
      ),
      'identifier' => 'management_feed-aggregator:admin/config/services/aggregator',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_field-list:admin/reports/fields
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_flexslider:admin/config/media/flexslider
  $menu_links['management_flexslider:admin/config/media/flexslider'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/flexslider',
    'router_path' => 'admin/config/media/flexslider',
    'link_title' => 'FlexSlider',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer FlexSlider presets.',
      ),
      'identifier' => 'management_flexslider:admin/config/media/flexslider',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_flickr:admin/config/media/flickr
  $menu_links['management_flickr:admin/config/media/flickr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/flickr',
    'router_path' => 'admin/config/media/flickr',
    'link_title' => 'Flickr',
    'options' => array(
      'attributes' => array(
        'title' => 'Change settings for the flickr module.',
      ),
      'identifier' => 'management_flickr:admin/config/media/flickr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_for-kids-menu:admin/structure/menu/manage/menu-kids-menu
  $menu_links['management_for-kids-menu:admin/structure/menu/manage/menu-kids-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-kids-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'For Kids menu',
    'options' => array(
      'identifier' => 'management_for-kids-menu:admin/structure/menu/manage/menu-kids-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_frequently-asked-questions:admin/config/content/faq
  $menu_links['management_frequently-asked-questions:admin/config/content/faq'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/faq',
    'router_path' => 'admin/config/content/faq',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows the user to configure the layout of questions and answers on a FAQ page.',
      ),
      'identifier' => 'management_frequently-asked-questions:admin/config/content/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_get-involved:admin/structure/menu/manage/menu-get-involved
  $menu_links['management_get-involved:admin/structure/menu/manage/menu-get-involved'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-get-involved',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Get Involved',
    'options' => array(
      'identifier' => 'management_get-involved:admin/structure/menu/manage/menu-get-involved',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_google-analytics:admin/config/system/googleanalytics
  $menu_links['management_google-analytics:admin/config/system/googleanalytics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/googleanalytics',
    'router_path' => 'admin/config/system/googleanalytics',
    'link_title' => 'Google Analytics',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure tracking behavior to get insights into your website traffic and marketing effectiveness.',
      ),
      'identifier' => 'management_google-analytics:admin/config/system/googleanalytics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_help:admin/help
  $menu_links['management_help:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
      'identifier' => 'management_help:admin/help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_image-block-settings:admin/structure/block/imageblock_configure
  $menu_links['management_image-block-settings:admin/structure/block/imageblock_configure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block/imageblock_configure',
    'router_path' => 'admin/structure/block/imageblock_configure',
    'link_title' => 'Image block settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Image block settings.',
      ),
      'identifier' => 'management_image-block-settings:admin/structure/block/imageblock_configure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_blocks:admin/structure/block',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_imce:admin/config/media/imce
  $menu_links['management_imce:admin/config/media/imce'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imce',
    'router_path' => 'admin/config/media/imce',
    'link_title' => 'IMCE',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your image/file browser works.',
      ),
      'identifier' => 'management_imce:admin/config/media/imce',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_juicebox:admin/config/media/juicebox
  $menu_links['management_juicebox:admin/config/media/juicebox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/juicebox',
    'router_path' => 'admin/config/media/juicebox',
    'link_title' => 'Juicebox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust global Juicebox settings.',
      ),
      'identifier' => 'management_juicebox:admin/config/media/juicebox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_livefyre:admin/config/livefyre
  $menu_links['management_livefyre:admin/config/livefyre'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/livefyre',
    'router_path' => 'admin/config/livefyre',
    'link_title' => 'Livefyre',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure livefyre comments',
      ),
      'identifier' => 'management_livefyre:admin/config/livefyre',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_media:admin/config/media
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_menus:admin/structure/menu
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_metatag:admin/config/search/metatags
  $menu_links['management_metatag:admin/config/search/metatags'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/metatags',
    'router_path' => 'admin/config/search/metatags',
    'link_title' => 'Metatag',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Metatag defaults.',
      ),
      'identifier' => 'management_metatag:admin/config/search/metatags',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_migrate:admin/content/migrate
  $menu_links['management_migrate:admin/content/migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/migrate',
    'router_path' => 'admin/content/migrate',
    'link_title' => 'Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Monitor the creation of Drupal content from source data',
      ),
      'identifier' => 'management_migrate:admin/content/migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_module-filter:admin/config/user-interface/modulefilter
  $menu_links['management_module-filter:admin/config/user-interface/modulefilter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/modulefilter',
    'router_path' => 'admin/config/user-interface/modulefilter',
    'link_title' => 'Module filter',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how the modules page looks and acts.',
      ),
      'identifier' => 'management_module-filter:admin/config/user-interface/modulefilter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_modules:admin/modules
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_people:admin/config/people
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_people:admin/people
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_piwik:admin/config/system/piwik
  $menu_links['management_piwik:admin/config/system/piwik'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/piwik',
    'router_path' => 'admin/config/system/piwik',
    'link_title' => 'Piwik',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the settings used to generate your Piwik tracking code.',
      ),
      'identifier' => 'management_piwik:admin/config/system/piwik',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_projects:admin/structure/menu/manage/menu-project-sidebar-menu
  $menu_links['management_projects:admin/structure/menu/manage/menu-project-sidebar-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-project-sidebar-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Projects',
    'options' => array(
      'identifier' => 'management_projects:admin/structure/menu/manage/menu-project-sidebar-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_quicktabs:admin/structure/quicktabs
  $menu_links['management_quicktabs:admin/structure/quicktabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/quicktabs',
    'router_path' => 'admin/structure/quicktabs',
    'link_title' => 'Quicktabs',
    'options' => array(
      'attributes' => array(
        'title' => 'Create blocks of tabbed content.',
      ),
      'identifier' => 'management_quicktabs:admin/structure/quicktabs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_read-more-link:admin/config/content/read_more
  $menu_links['management_read-more-link:admin/config/content/read_more'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/read_more',
    'router_path' => 'admin/config/content/read_more',
    'link_title' => 'Read More link',
    'options' => array(
      'attributes' => array(
        'title' => 'Configures the <strong>Read More</strong> link that appears in node teasers.',
      ),
      'identifier' => 'management_read-more-link:admin/config/content/read_more',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_reports:admin/reports
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_request:admin/structure/tb-megamenu/request
  $menu_links['management_request:admin/structure/tb-megamenu/request'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/tb-megamenu/request',
    'router_path' => 'admin/structure/tb-megamenu/request',
    'link_title' => 'Request',
    'options' => array(
      'identifier' => 'management_request:admin/structure/tb-megamenu/request',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_tb-mega-menu:admin/structure/tb-megamenu',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_rules:admin/config/workflow/rules
  $menu_links['management_rules:admin/config/workflow/rules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
      'identifier' => 'management_rules:admin/config/workflow/rules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workflow:admin/config/workflow',
  );
  // Exported menu link: management_scroll-to-top:admin/config/user-interface/scrolltotop
  $menu_links['management_scroll-to-top:admin/config/user-interface/scrolltotop'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/scrolltotop',
    'router_path' => 'admin/config/user-interface/scrolltotop',
    'link_title' => 'Scroll to top',
    'options' => array(
      'attributes' => array(
        'title' => 'Scroll To Top settings',
      ),
      'identifier' => 'management_scroll-to-top:admin/config/user-interface/scrolltotop',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_secondary-school:admin/structure/menu/manage/menu-secondary-school
  $menu_links['management_secondary-school:admin/structure/menu/manage/menu-secondary-school'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-secondary-school',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Secondary School',
    'options' => array(
      'identifier' => 'management_secondary-school:admin/structure/menu/manage/menu-secondary-school',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_site-map:admin/config/search/sitemap
  $menu_links['management_site-map:admin/config/search/sitemap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/sitemap',
    'router_path' => 'admin/config/search/sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Control what should be displayed on the site map.',
      ),
      'identifier' => 'management_site-map:admin/config/search/sitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_status-report:admin/reports/status
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_structure:admin/structure
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_system:admin/config/system
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_tb-mega-menu:admin/structure/tb-megamenu
  $menu_links['management_tb-mega-menu:admin/structure/tb-megamenu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/tb-megamenu',
    'router_path' => 'admin/structure/tb-megamenu',
    'link_title' => 'TB Mega Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'TB Mega Menu',
      ),
      'identifier' => 'management_tb-mega-menu:admin/structure/tb-megamenu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_user-protect:admin/config/people/userprotect
  $menu_links['management_user-protect:admin/config/people/userprotect'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/userprotect',
    'router_path' => 'admin/config/people/userprotect',
    'link_title' => 'User protect',
    'options' => array(
      'attributes' => array(
        'title' => 'Protect inidividual users and/or roles from editing operations.',
      ),
      'identifier' => 'management_user-protect:admin/config/people/userprotect',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_web-services:admin/config/services
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_webform-settings:admin/config/content/webform
  $menu_links['management_webform-settings:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
      'identifier' => 'management_webform-settings:admin/config/content/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_wordpress-migration:admin/content/wordpress
  $menu_links['management_wordpress-migration:admin/content/wordpress'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/wordpress',
    'router_path' => 'admin/content/wordpress',
    'link_title' => 'WordPress migration',
    'options' => array(
      'attributes' => array(
        'title' => 'Migrate WordPress content into Drupal',
      ),
      'identifier' => 'management_wordpress-migration:admin/content/wordpress',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_workflow:admin/config/workflow
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_wysiwyg-profiles:admin/config/content/wysiwyg
  $menu_links['management_wysiwyg-profiles:admin/config/content/wysiwyg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/wysiwyg',
    'router_path' => 'admin/config/content/wysiwyg',
    'link_title' => 'Wysiwyg profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
      'identifier' => 'management_wysiwyg-profiles:admin/config/content/wysiwyg',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: menu-about-us_annual-reports-and-financials:node/27
  $menu_links['menu-about-us_annual-reports-and-financials:node/27'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Annual Reports and Financials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_annual-reports-and-financials:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_board-of-trustees:node/29
  $menu_links['menu-about-us_board-of-trustees:node/29'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Board of Trustees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_board-of-trustees:node/29',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_jobs-and-internships:node/24
  $menu_links['menu-about-us_jobs-and-internships:node/24'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Jobs and Internships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_jobs-and-internships:node/24',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_newsletters:node/62
  $menu_links['menu-about-us_newsletters:node/62'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Newsletters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_newsletters:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_zodml-newsroom:node/61',
  );
  // Exported menu link: menu-about-us_newspaper-clippings:node/1198
  $menu_links['menu-about-us_newspaper-clippings:node/1198'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/1198',
    'router_path' => 'node/%',
    'link_title' => 'Newspaper Clippings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_newspaper-clippings:node/1198',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_zodml-newsroom:node/61',
  );
  // Exported menu link: menu-about-us_our-story:node/13
  $menu_links['menu-about-us_our-story:node/13'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Our Story',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_our-story:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_our-team:node/28
  $menu_links['menu-about-us_our-team:node/28'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Our Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_our-team:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_press-releases:node/1223
  $menu_links['menu-about-us_press-releases:node/1223'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/1223',
    'router_path' => 'node/%',
    'link_title' => 'Press Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_press-releases:node/1223',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_zodml-newsroom:node/61',
  );
  // Exported menu link: menu-about-us_zaccheus-onumba-dibiaezue:node/15
  $menu_links['menu-about-us_zaccheus-onumba-dibiaezue:node/15'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Zaccheus Onumba Dibiaezue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_zaccheus-onumba-dibiaezue:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_zodml-at-a-glance:node/63
  $menu_links['menu-about-us_zodml-at-a-glance:node/63'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'ZODML at a Glance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_zodml-at-a-glance:node/63',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_zodml-newsroom:node/61',
  );
  // Exported menu link: menu-about-us_zodml-newsroom:node/61
  $menu_links['menu-about-us_zodml-newsroom:node/61'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'ZODML Newsroom',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_zodml-newsroom:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_abia-state:node/118
  $menu_links['menu-discover-nigeria-menu_abia-state:node/118'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/118',
    'router_path' => 'node/%',
    'link_title' => 'Abia State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_abia-state:node/118',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_abubakar-tafawa-balewa:node/107
  $menu_links['menu-discover-nigeria-menu_abubakar-tafawa-balewa:node/107'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/107',
    'router_path' => 'node/%',
    'link_title' => 'Abubakar Tafawa Balewa',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_abubakar-tafawa-balewa:node/107',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_adamawa-state:node/1067
  $menu_links['menu-discover-nigeria-menu_adamawa-state:node/1067'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1067',
    'router_path' => 'node/%',
    'link_title' => 'Adamawa State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_adamawa-state:node/1067',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_adolphus-opara:node/1115
  $menu_links['menu-discover-nigeria-menu_adolphus-opara:node/1115'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1115',
    'router_path' => 'node/%',
    'link_title' => 'Adolphus Opara',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_adolphus-opara:node/1115',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_ahmadu-bello:node/102
  $menu_links['menu-discover-nigeria-menu_ahmadu-bello:node/102'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/102',
    'router_path' => 'node/%',
    'link_title' => 'Ahmadu Bello',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_ahmadu-bello:node/102',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_akwa-ibom-state:node/1068
  $menu_links['menu-discover-nigeria-menu_akwa-ibom-state:node/1068'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1068',
    'router_path' => 'node/%',
    'link_title' => 'Akwa Ibom State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_akwa-ibom-state:node/1068',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_alhassan-dantata:node/1029
  $menu_links['menu-discover-nigeria-menu_alhassan-dantata:node/1029'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1029',
    'router_path' => 'node/%',
    'link_title' => 'Alhassan Dantata',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_alhassan-dantata:node/1029',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_aminu-kano:node/1056
  $menu_links['menu-discover-nigeria-menu_aminu-kano:node/1056'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1056',
    'router_path' => 'node/%',
    'link_title' => 'Aminu Kano',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_aminu-kano:node/1056',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_amos-tutuola:node/108
  $menu_links['menu-discover-nigeria-menu_amos-tutuola:node/108'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/108',
    'router_path' => 'node/%',
    'link_title' => 'Amos Tutuola',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_amos-tutuola:node/108',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_anambra-state:node/1069
  $menu_links['menu-discover-nigeria-menu_anambra-state:node/1069'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1069',
    'router_path' => 'node/%',
    'link_title' => 'Anambra State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_anambra-state:node/1069',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_anthony-enahoro:node/1064
  $menu_links['menu-discover-nigeria-menu_anthony-enahoro:node/1064'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1064',
    'router_path' => 'node/%',
    'link_title' => 'Anthony Enahoro',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_anthony-enahoro:node/1064',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_bauchi-state:node/1070
  $menu_links['menu-discover-nigeria-menu_bauchi-state:node/1070'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1070',
    'router_path' => 'node/%',
    'link_title' => 'Bauchi State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_bauchi-state:node/1070',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_bayelsa-state:node/1078
  $menu_links['menu-discover-nigeria-menu_bayelsa-state:node/1078'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1078',
    'router_path' => 'node/%',
    'link_title' => 'Bayelsa State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_bayelsa-state:node/1078',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_benue-state:node/1079
  $menu_links['menu-discover-nigeria-menu_benue-state:node/1079'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1079',
    'router_path' => 'node/%',
    'link_title' => 'Benue State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_benue-state:node/1079',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_biyi-bandele:node/1032
  $menu_links['menu-discover-nigeria-menu_biyi-bandele:node/1032'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1032',
    'router_path' => 'node/%',
    'link_title' => 'Biyi Bandele',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_biyi-bandele:node/1032',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_bola-agbaje:node/105
  $menu_links['menu-discover-nigeria-menu_bola-agbaje:node/105'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/105',
    'router_path' => 'node/%',
    'link_title' => 'Bola Agbaje',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_bola-agbaje:node/105',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_borno-state:node/1080
  $menu_links['menu-discover-nigeria-menu_borno-state:node/1080'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1080',
    'router_path' => 'node/%',
    'link_title' => 'Borno State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_borno-state:node/1080',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_buchi-emecheta:node/1031
  $menu_links['menu-discover-nigeria-menu_buchi-emecheta:node/1031'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1031',
    'router_path' => 'node/%',
    'link_title' => 'Buchi Emecheta',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_buchi-emecheta:node/1031',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_chika-unigwe:node/1042
  $menu_links['menu-discover-nigeria-menu_chika-unigwe:node/1042'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1042',
    'router_path' => 'node/%',
    'link_title' => 'Chika Unigwe',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_chika-unigwe:node/1042',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_chimamanda-adichie:node/1034
  $menu_links['menu-discover-nigeria-menu_chimamanda-adichie:node/1034'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1034',
    'router_path' => 'node/%',
    'link_title' => 'Chimamanda Adichie',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_chimamanda-adichie:node/1034',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_chinua-achebe:node/106
  $menu_links['menu-discover-nigeria-menu_chinua-achebe:node/106'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/106',
    'router_path' => 'node/%',
    'link_title' => 'Chinua Achebe',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_chinua-achebe:node/106',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_chiwetel-ejiofor:node/1045
  $menu_links['menu-discover-nigeria-menu_chiwetel-ejiofor:node/1045'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1045',
    'router_path' => 'node/%',
    'link_title' => 'Chiwetel Ejiofor',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_chiwetel-ejiofor:node/1045',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_chris-abani:node/1047
  $menu_links['menu-discover-nigeria-menu_chris-abani:node/1047'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1047',
    'router_path' => 'node/%',
    'link_title' => 'Chris Abani',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_chris-abani:node/1047',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_christine-ohuruogu:node/1046
  $menu_links['menu-discover-nigeria-menu_christine-ohuruogu:node/1046'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1046',
    'router_path' => 'node/%',
    'link_title' => 'Christine Ohuruogu',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_christine-ohuruogu:node/1046',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_chuka-umunna:node/1048
  $menu_links['menu-discover-nigeria-menu_chuka-umunna:node/1048'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1048',
    'router_path' => 'node/%',
    'link_title' => 'Chuka Umunna',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_chuka-umunna:node/1048',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_cross-river-state:node/1081
  $menu_links['menu-discover-nigeria-menu_cross-river-state:node/1081'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1081',
    'router_path' => 'node/%',
    'link_title' => 'Cross River State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_cross-river-state:node/1081',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_cyprian-ekwensi:node/1066
  $menu_links['menu-discover-nigeria-menu_cyprian-ekwensi:node/1066'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1066',
    'router_path' => 'node/%',
    'link_title' => 'Cyprian Ekwensi',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_cyprian-ekwensi:node/1066',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_delta-state:node/1082
  $menu_links['menu-discover-nigeria-menu_delta-state:node/1082'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1082',
    'router_path' => 'node/%',
    'link_title' => 'Delta State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_delta-state:node/1082',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_did-you-know:http://zodml.org/archives.php
  $menu_links['menu-discover-nigeria-menu_did-you-know:http://zodml.org/archives.php'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'http://zodml.org/archives.php',
    'router_path' => '',
    'link_title' => 'Did You Know?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_did-you-know:http://zodml.org/archives.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_diran-adebayo:node/1055
  $menu_links['menu-discover-nigeria-menu_diran-adebayo:node/1055'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1055',
    'router_path' => 'node/%',
    'link_title' => 'Diran Adebayo',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_diran-adebayo:node/1055',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_ebonyi-state:node/1083
  $menu_links['menu-discover-nigeria-menu_ebonyi-state:node/1083'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1083',
    'router_path' => 'node/%',
    'link_title' => 'Ebonyi State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_ebonyi-state:node/1083',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_edo-state:node/1084
  $menu_links['menu-discover-nigeria-menu_edo-state:node/1084'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1084',
    'router_path' => 'node/%',
    'link_title' => 'Edo State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_edo-state:node/1084',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_ekiti-state:node/1085
  $menu_links['menu-discover-nigeria-menu_ekiti-state:node/1085'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1085',
    'router_path' => 'node/%',
    'link_title' => 'Ekiti State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_ekiti-state:node/1085',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_elizabeth-ofili:node/75
  $menu_links['menu-discover-nigeria-menu_elizabeth-ofili:node/75'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/75',
    'router_path' => 'node/%',
    'link_title' => 'Elizabeth Ofili',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_elizabeth-ofili:node/75',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_enugu-state:node/1086
  $menu_links['menu-discover-nigeria-menu_enugu-state:node/1086'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1086',
    'router_path' => 'node/%',
    'link_title' => 'Enugu State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_enugu-state:node/1086',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_fatimah-tuggar:node/1176
  $menu_links['menu-discover-nigeria-menu_fatimah-tuggar:node/1176'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1176',
    'router_path' => 'node/%',
    'link_title' => 'Fatimah Tuggar',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_fatimah-tuggar:node/1176',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_fct-abuja:node/1065
  $menu_links['menu-discover-nigeria-menu_fct-abuja:node/1065'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1065',
    'router_path' => 'node/%',
    'link_title' => 'FCT Abuja',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_fct-abuja:node/1065',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_femi-oke:node/1037
  $menu_links['menu-discover-nigeria-menu_femi-oke:node/1037'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1037',
    'router_path' => 'node/%',
    'link_title' => 'Femi Oke',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_femi-oke:node/1037',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_flora-nwapa:node/1030
  $menu_links['menu-discover-nigeria-menu_flora-nwapa:node/1030'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1030',
    'router_path' => 'node/%',
    'link_title' => 'Flora Nwapa',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_flora-nwapa:node/1030',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_funmilayo-ransome-kuti:node/1062
  $menu_links['menu-discover-nigeria-menu_funmilayo-ransome-kuti:node/1062'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1062',
    'router_path' => 'node/%',
    'link_title' => 'Funmilayo Ransome-Kuti',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_funmilayo-ransome-kuti:node/1062',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_george-osodi:node/119
  $menu_links['menu-discover-nigeria-menu_george-osodi:node/119'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/119',
    'router_path' => 'node/%',
    'link_title' => 'George Osodi',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_george-osodi:node/119',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_gobarau-minaret:node/114
  $menu_links['menu-discover-nigeria-menu_gobarau-minaret:node/114'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/114',
    'router_path' => 'node/%',
    'link_title' => 'Gobarau Minaret',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_gobarau-minaret:node/114',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_heritage-and-culture:node/72',
  );
  // Exported menu link: menu-discover-nigeria-menu_gombe-state:node/1173
  $menu_links['menu-discover-nigeria-menu_gombe-state:node/1173'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1173',
    'router_path' => 'node/%',
    'link_title' => 'Gombe State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_gombe-state:node/1173',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_hakeem-olajuwon:node/1043
  $menu_links['menu-discover-nigeria-menu_hakeem-olajuwon:node/1043'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1043',
    'router_path' => 'node/%',
    'link_title' => 'Hakeem Olajuwon',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_hakeem-olajuwon:node/1043',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_helon-habila:node/1049
  $menu_links['menu-discover-nigeria-menu_helon-habila:node/1049'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1049',
    'router_path' => 'node/%',
    'link_title' => 'Helon Habila',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_helon-habila:node/1049',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_herbert-macaulay:node/1044
  $menu_links['menu-discover-nigeria-menu_herbert-macaulay:node/1044'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1044',
    'router_path' => 'node/%',
    'link_title' => 'Herbert Macaulay',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_herbert-macaulay:node/1044',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_heritage-and-culture:node/72
  $menu_links['menu-discover-nigeria-menu_heritage-and-culture:node/72'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/72',
    'router_path' => 'node/%',
    'link_title' => 'Heritage and Culture',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_heritage-and-culture:node/72',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_home:node/67
  $menu_links['menu-discover-nigeria-menu_home:node/67'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/67',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_home:node/67',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_hubert-ogunde:node/1063
  $menu_links['menu-discover-nigeria-menu_hubert-ogunde:node/1063'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1063',
    'router_path' => 'node/%',
    'link_title' => 'Hubert Ogunde',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_hubert-ogunde:node/1063',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_imo-state:node/1174
  $menu_links['menu-discover-nigeria-menu_imo-state:node/1174'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1174',
    'router_path' => 'node/%',
    'link_title' => 'Imo State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_imo-state:node/1174',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_jigawa-state:node/1199
  $menu_links['menu-discover-nigeria-menu_jigawa-state:node/1199'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1199',
    'router_path' => 'node/%',
    'link_title' => 'Jigawa State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_jigawa-state:node/1199',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_john-dabiri:node/1052
  $menu_links['menu-discover-nigeria-menu_john-dabiri:node/1052'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1052',
    'router_path' => 'node/%',
    'link_title' => 'John Dabiri',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_john-dabiri:node/1052',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_jumoke-sanwo:node/1142
  $menu_links['menu-discover-nigeria-menu_jumoke-sanwo:node/1142'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1142',
    'router_path' => 'node/%',
    'link_title' => 'Jumoke Sanwo',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_jumoke-sanwo:node/1142',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_kaduna-state:node/1219
  $menu_links['menu-discover-nigeria-menu_kaduna-state:node/1219'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1219',
    'router_path' => 'node/%',
    'link_title' => 'Kaduna State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_kaduna-state:node/1219',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_kehinde-wiley:node/1187
  $menu_links['menu-discover-nigeria-menu_kehinde-wiley:node/1187'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1187',
    'router_path' => 'node/%',
    'link_title' => 'Kehinde Wiley',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_kehinde-wiley:node/1187',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_lagos-state:node/115
  $menu_links['menu-discover-nigeria-menu_lagos-state:node/115'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/115',
    'router_path' => 'node/%',
    'link_title' => 'Lagos State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_lagos-state:node/115',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_lagosphoto-festival:node/1130
  $menu_links['menu-discover-nigeria-menu_lagosphoto-festival:node/1130'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1130',
    'router_path' => 'node/%',
    'link_title' => 'LagosPhoto Festival',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_lagosphoto-festival:node/1130',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_lawrence-okoye:node/1053
  $menu_links['menu-discover-nigeria-menu_lawrence-okoye:node/1053'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1053',
    'router_path' => 'node/%',
    'link_title' => 'Lawrence Okoye',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_lawrence-okoye:node/1053',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_nigeria-fact-file:node/70
  $menu_links['menu-discover-nigeria-menu_nigeria-fact-file:node/70'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/70',
    'router_path' => 'node/%',
    'link_title' => 'Nigeria Fact File',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_nigeria-fact-file:node/70',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_nnamdi-azikiwe:node/109
  $menu_links['menu-discover-nigeria-menu_nnamdi-azikiwe:node/109'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/109',
    'router_path' => 'node/%',
    'link_title' => 'Nnamdi Azikiwe',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_nnamdi-azikiwe:node/109',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_nnedi-okorafor:node/1051
  $menu_links['menu-discover-nigeria-menu_nnedi-okorafor:node/1051'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1051',
    'router_path' => 'node/%',
    'link_title' => 'Nnedi Okorafor',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_nnedi-okorafor:node/1051',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_obafemi-awolowo:node/1028
  $menu_links['menu-discover-nigeria-menu_obafemi-awolowo:node/1028'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1028',
    'router_path' => 'node/%',
    'link_title' => 'Obafemi Awolowo',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_obafemi-awolowo:node/1028',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_ogun-state:node/121
  $menu_links['menu-discover-nigeria-menu_ogun-state:node/121'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/121',
    'router_path' => 'node/%',
    'link_title' => 'Ogun State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_ogun-state:node/121',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_ondo-state:node/131
  $menu_links['menu-discover-nigeria-menu_ondo-state:node/131'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/131',
    'router_path' => 'node/%',
    'link_title' => 'Ondo State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_ondo-state:node/131',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_osun-osogbo-grove:node/113
  $menu_links['menu-discover-nigeria-menu_osun-osogbo-grove:node/113'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/113',
    'router_path' => 'node/%',
    'link_title' => 'Osun-Osogbo Grove',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_osun-osogbo-grove:node/113',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_heritage-and-culture:node/72',
  );
  // Exported menu link: menu-discover-nigeria-menu_oyo-state:node/1175
  $menu_links['menu-discover-nigeria-menu_oyo-state:node/1175'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1175',
    'router_path' => 'node/%',
    'link_title' => 'Oyo State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_oyo-state:node/1175',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_people:node/69
  $menu_links['menu-discover-nigeria-menu_people:node/69'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/69',
    'router_path' => 'node/%',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_people:node/69',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_plateau-state:node/1222
  $menu_links['menu-discover-nigeria-menu_plateau-state:node/1222'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1222',
    'router_path' => 'node/%',
    'link_title' => 'Plateau State',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_plateau-state:node/1222',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_states:node/71',
  );
  // Exported menu link: menu-discover-nigeria-menu_sade-adu:node/1040
  $menu_links['menu-discover-nigeria-menu_sade-adu:node/1040'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1040',
    'router_path' => 'node/%',
    'link_title' => 'Sade Adu',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_sade-adu:node/1040',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_samuel-ajayi-crowther:node/1061
  $menu_links['menu-discover-nigeria-menu_samuel-ajayi-crowther:node/1061'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1061',
    'router_path' => 'node/%',
    'link_title' => 'Samuel Ajayi Crowther',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_samuel-ajayi-crowther:node/1061',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_seal:node/1041
  $menu_links['menu-discover-nigeria-menu_seal:node/1041'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1041',
    'router_path' => 'node/%',
    'link_title' => 'Seal',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_seal:node/1041',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_states:node/71
  $menu_links['menu-discover-nigeria-menu_states:node/71'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/71',
    'router_path' => 'node/%',
    'link_title' => 'States',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_states:node/71',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_submit-a-photo:node/74
  $menu_links['menu-discover-nigeria-menu_submit-a-photo:node/74'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/74',
    'router_path' => 'node/%',
    'link_title' => 'Submit a Photo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_submit-a-photo:node/74',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_sulayman-afose:node/1092
  $menu_links['menu-discover-nigeria-menu_sulayman-afose:node/1092'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1092',
    'router_path' => 'node/%',
    'link_title' => 'Sulayman Afose',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_sulayman-afose:node/1092',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
  );
  // Exported menu link: menu-discover-nigeria-menu_teju-cole:node/1050
  $menu_links['menu-discover-nigeria-menu_teju-cole:node/1050'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1050',
    'router_path' => 'node/%',
    'link_title' => 'Teju Cole',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_teju-cole:node/1050',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_visual-arts:node/73
  $menu_links['menu-discover-nigeria-menu_visual-arts:node/73'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/73',
    'router_path' => 'node/%',
    'link_title' => 'Visual Arts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-discover-nigeria-menu_visual-arts:node/73',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-discover-nigeria-menu_yewande-akinola:node/1054
  $menu_links['menu-discover-nigeria-menu_yewande-akinola:node/1054'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1054',
    'router_path' => 'node/%',
    'link_title' => 'Yewande Akinola',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_yewande-akinola:node/1054',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-discover-nigeria-menu_zulu-sofola:node/1057
  $menu_links['menu-discover-nigeria-menu_zulu-sofola:node/1057'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'link_path' => 'node/1057',
    'router_path' => 'node/%',
    'link_title' => 'Zulu Sofola',
    'options' => array(
      'identifier' => 'menu-discover-nigeria-menu_zulu-sofola:node/1057',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-discover-nigeria-menu_people:node/69',
  );
  // Exported menu link: menu-e-resources-menu_career-guide:node/136
  $menu_links['menu-e-resources-menu_career-guide:node/136'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'node/136',
    'router_path' => 'node/%',
    'link_title' => 'Career Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_career-guide:node/136',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-e-resources-menu_elibrary:http://www.zodml.org/e-library/
  $menu_links['menu-e-resources-menu_elibrary:http://www.zodml.org/e-library/'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'http://www.zodml.org/e-library/',
    'router_path' => '',
    'link_title' => 'eLibrary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_elibrary:http://www.zodml.org/e-library/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-e-resources-menu_for-kids:node/132
  $menu_links['menu-e-resources-menu_for-kids:node/132'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'For Kids',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_for-kids:node/132',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-e-resources-menu_for-parents:node/1253
  $menu_links['menu-e-resources-menu_for-parents:node/1253'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'node/1253',
    'router_path' => 'node/%',
    'link_title' => 'For Parents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_for-parents:node/1253',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-e-resources-menu_for-secondary-school-students:node/1027
  $menu_links['menu-e-resources-menu_for-secondary-school-students:node/1027'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'node/1027',
    'router_path' => 'node/%',
    'link_title' => 'For Secondary School Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_for-secondary-school-students:node/1027',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-e-resources-menu_professional-past-questions:node/133
  $menu_links['menu-e-resources-menu_professional-past-questions:node/133'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'node/133',
    'router_path' => 'node/%',
    'link_title' => 'Professional Past Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_professional-past-questions:node/133',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-e-resources-menu_research-guide:node/135
  $menu_links['menu-e-resources-menu_research-guide:node/135'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'link_path' => 'node/135',
    'router_path' => 'node/%',
    'link_title' => 'Research Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-e-resources-menu_research-guide:node/135',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_donate-online:node/1220
  $menu_links['menu-get-involved_donate-online:node/1220'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => 'node/1220',
    'router_path' => 'node/%',
    'link_title' => 'Donate Online',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-get-involved_donate-online:node/1220',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-get-involved_donate-to-zodml:node/58',
  );
  // Exported menu link: menu-get-involved_donate-to-zodml:node/58
  $menu_links['menu-get-involved_donate-to-zodml:node/58'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => 'node/58',
    'router_path' => 'node/%',
    'link_title' => 'Donate to ZODML',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-get-involved_donate-to-zodml:node/58',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_friends-of-the-library:node/48
  $menu_links['menu-get-involved_friends-of-the-library:node/48'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Friends of the Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-get-involved_friends-of-the-library:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_our-donors-and-partners:node/50
  $menu_links['menu-get-involved_our-donors-and-partners:node/50'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Our Donors and Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-get-involved_our-donors-and-partners:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-kids-menu_agricultural-science:node/5893
  $menu_links['menu-kids-menu_agricultural-science:node/5893'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5893',
    'router_path' => 'node/%',
    'link_title' => 'Agricultural Science',
    'options' => array(
      'identifier' => 'menu-kids-menu_agricultural-science:node/5893',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_agricultural-science:node/5894
  $menu_links['menu-kids-menu_agricultural-science:node/5894'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5894',
    'router_path' => 'node/%',
    'link_title' => 'Agricultural Science',
    'options' => array(
      'identifier' => 'menu-kids-menu_agricultural-science:node/5894',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-4---6:node/5882',
  );
  // Exported menu link: menu-kids-menu_basic-science-and-technology:node/5887
  $menu_links['menu-kids-menu_basic-science-and-technology:node/5887'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5887',
    'router_path' => 'node/%',
    'link_title' => 'Basic Science and Technology',
    'options' => array(
      'identifier' => 'menu-kids-menu_basic-science-and-technology:node/5887',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_basic-science-and-technology:node/5888
  $menu_links['menu-kids-menu_basic-science-and-technology:node/5888'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5888',
    'router_path' => 'node/%',
    'link_title' => 'Basic Science and Technology',
    'options' => array(
      'identifier' => 'menu-kids-menu_basic-science-and-technology:node/5888',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-4---6:node/5882',
  );
  // Exported menu link: menu-kids-menu_books:node/1016
  $menu_links['menu-kids-menu_books:node/1016'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1016',
    'router_path' => 'node/%',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-kids-menu_books:node/1016',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-kids-menu_civic-education:node/5904
  $menu_links['menu-kids-menu_civic-education:node/5904'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5904',
    'router_path' => 'node/%',
    'link_title' => 'Civic Education',
    'options' => array(
      'identifier' => 'menu-kids-menu_civic-education:node/5904',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_computer-studies:node/1010
  $menu_links['menu-kids-menu_computer-studies:node/1010'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1010',
    'router_path' => 'node/%',
    'link_title' => 'Computer Studies',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-kids-menu_computer-studies:node/1010',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_websites:node/1036',
  );
  // Exported menu link: menu-kids-menu_computer-studies:node/1011
  $menu_links['menu-kids-menu_computer-studies:node/1011'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1011',
    'router_path' => 'node/%',
    'link_title' => 'Computer Studies',
    'options' => array(
      'identifier' => 'menu-kids-menu_computer-studies:node/1011',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_primary-4---6:node/5882',
  );
  // Exported menu link: menu-kids-menu_computer-studies:node/1060
  $menu_links['menu-kids-menu_computer-studies:node/1060'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1060',
    'router_path' => 'node/%',
    'link_title' => 'Computer Studies',
    'options' => array(
      'identifier' => 'menu-kids-menu_computer-studies:node/1060',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_connect-to-zodml:node/5718
  $menu_links['menu-kids-menu_connect-to-zodml:node/5718'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5718',
    'router_path' => 'node/%',
    'link_title' => 'Connect to ZODML',
    'options' => array(
      'identifier' => 'menu-kids-menu_connect-to-zodml:node/5718',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_for-parents:node/1253',
  );
  // Exported menu link: menu-kids-menu_e-books:node/147
  $menu_links['menu-kids-menu_e-books:node/147'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/147',
    'router_path' => 'node/%',
    'link_title' => 'e-Books',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-kids-menu_e-books:node/147',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-kids-menu_education-in-nigeria:node/5720
  $menu_links['menu-kids-menu_education-in-nigeria:node/5720'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5720',
    'router_path' => 'node/%',
    'link_title' => 'Education in Nigeria',
    'options' => array(
      'identifier' => 'menu-kids-menu_education-in-nigeria:node/5720',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_useful-websites:node/5719',
  );
  // Exported menu link: menu-kids-menu_educational-videos:node/5721
  $menu_links['menu-kids-menu_educational-videos:node/5721'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5721',
    'router_path' => 'node/%',
    'link_title' => 'Educational Videos',
    'options' => array(
      'identifier' => 'menu-kids-menu_educational-videos:node/5721',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_useful-websites:node/5719',
  );
  // Exported menu link: menu-kids-menu_english-language:node/5902
  $menu_links['menu-kids-menu_english-language:node/5902'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5902',
    'router_path' => 'node/%',
    'link_title' => 'English Language',
    'options' => array(
      'identifier' => 'menu-kids-menu_english-language:node/5902',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_for-parents:node/1253
  $menu_links['menu-kids-menu_for-parents:node/1253'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1253',
    'router_path' => 'node/%',
    'link_title' => 'For Parents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-kids-menu_for-parents:node/1253',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-kids-menu_get-your-child-a-library-card:node/1255
  $menu_links['menu-kids-menu_get-your-child-a-library-card:node/1255'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1255',
    'router_path' => 'node/%',
    'link_title' => 'Get Your Child a Library Card',
    'options' => array(
      'identifier' => 'menu-kids-menu_get-your-child-a-library-card:node/1255',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_for-parents:node/1253',
  );
  // Exported menu link: menu-kids-menu_home-economics:node/5890
  $menu_links['menu-kids-menu_home-economics:node/5890'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5890',
    'router_path' => 'node/%',
    'link_title' => 'Home Economics',
    'options' => array(
      'identifier' => 'menu-kids-menu_home-economics:node/5890',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_home-economics:node/5891
  $menu_links['menu-kids-menu_home-economics:node/5891'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5891',
    'router_path' => 'node/%',
    'link_title' => 'Home Economics',
    'options' => array(
      'identifier' => 'menu-kids-menu_home-economics:node/5891',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-4---6:node/5882',
  );
  // Exported menu link: menu-kids-menu_home:node/132
  $menu_links['menu-kids-menu_home:node/132'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/132',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-kids-menu_home:node/132',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-kids-menu_interactive-e-books-for-kids:node/5725
  $menu_links['menu-kids-menu_interactive-e-books-for-kids:node/5725'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5725',
    'router_path' => 'node/%',
    'link_title' => 'Interactive e-Books for Kids',
    'options' => array(
      'identifier' => 'menu-kids-menu_interactive-e-books-for-kids:node/5725',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_e-books:node/147',
  );
  // Exported menu link: menu-kids-menu_internet-safety-for-kids:node/5717
  $menu_links['menu-kids-menu_internet-safety-for-kids:node/5717'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5717',
    'router_path' => 'node/%',
    'link_title' => 'Internet Safety for Kids',
    'options' => array(
      'identifier' => 'menu-kids-menu_internet-safety-for-kids:node/5717',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_for-parents:node/1253',
  );
  // Exported menu link: menu-kids-menu_mathematics:node/5884
  $menu_links['menu-kids-menu_mathematics:node/5884'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5884',
    'router_path' => 'node/%',
    'link_title' => 'Mathematics',
    'options' => array(
      'identifier' => 'menu-kids-menu_mathematics:node/5884',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_mathematics:node/5885
  $menu_links['menu-kids-menu_mathematics:node/5885'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5885',
    'router_path' => 'node/%',
    'link_title' => 'Mathematics',
    'options' => array(
      'identifier' => 'menu-kids-menu_mathematics:node/5885',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-4---6:node/5882',
  );
  // Exported menu link: menu-kids-menu_physical-and-health-education:node/5898
  $menu_links['menu-kids-menu_physical-and-health-education:node/5898'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5898',
    'router_path' => 'node/%',
    'link_title' => 'Physical and Health Education',
    'options' => array(
      'identifier' => 'menu-kids-menu_physical-and-health-education:node/5898',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-4---6:node/5882',
  );
  // Exported menu link: menu-kids-menu_physical-health-education:node/5897
  $menu_links['menu-kids-menu_physical-health-education:node/5897'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5897',
    'router_path' => 'node/%',
    'link_title' => 'Physical Health Education',
    'options' => array(
      'identifier' => 'menu-kids-menu_physical-health-education:node/5897',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_primary-1---3:node/1059
  $menu_links['menu-kids-menu_primary-1---3:node/1059'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1059',
    'router_path' => 'node/%',
    'link_title' => 'Primary 1 - 3',
    'options' => array(
      'identifier' => 'menu-kids-menu_primary-1---3:node/1059',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_websites:node/1036',
  );
  // Exported menu link: menu-kids-menu_primary-4---6:node/5882
  $menu_links['menu-kids-menu_primary-4---6:node/5882'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5882',
    'router_path' => 'node/%',
    'link_title' => 'Primary 4 - 6',
    'options' => array(
      'identifier' => 'menu-kids-menu_primary-4---6:node/5882',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_websites:node/1036',
  );
  // Exported menu link: menu-kids-menu_social-studies:node/5900
  $menu_links['menu-kids-menu_social-studies:node/5900'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5900',
    'router_path' => 'node/%',
    'link_title' => 'Social Studies',
    'options' => array(
      'identifier' => 'menu-kids-menu_social-studies:node/5900',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-kids-menu_primary-1---3:node/1059',
  );
  // Exported menu link: menu-kids-menu_useful-websites:node/5719
  $menu_links['menu-kids-menu_useful-websites:node/5719'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/5719',
    'router_path' => 'node/%',
    'link_title' => 'Useful Websites',
    'options' => array(
      'identifier' => 'menu-kids-menu_useful-websites:node/5719',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-kids-menu_for-parents:node/1253',
  );
  // Exported menu link: menu-kids-menu_websites:node/1036
  $menu_links['menu-kids-menu_websites:node/1036'] = array(
    'menu_name' => 'menu-kids-menu',
    'link_path' => 'node/1036',
    'router_path' => 'node/%',
    'link_title' => 'Websites',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-kids-menu_websites:node/1036',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-library_faqs:faq-page
  $menu_links['menu-library_faqs:faq-page'] = array(
    'menu_name' => 'menu-library',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library_faqs:faq-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-library_join-the-library:node/143
  $menu_links['menu-library_join-the-library:node/143'] = array(
    'menu_name' => 'menu-library',
    'link_path' => 'node/143',
    'router_path' => 'node/%',
    'link_title' => 'Join the Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library_join-the-library:node/143',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-library_location-and-hours:node/23
  $menu_links['menu-library_location-and-hours:node/23'] = array(
    'menu_name' => 'menu-library',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Location and Hours',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library_location-and-hours:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-library_online-catalogue:http://www.zodml.org/catalogue.php
  $menu_links['menu-library_online-catalogue:http://www.zodml.org/catalogue.php'] = array(
    'menu_name' => 'menu-library',
    'link_path' => 'http://www.zodml.org/catalogue.php',
    'router_path' => '',
    'link_title' => 'Online Catalogue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library_online-catalogue:http://www.zodml.org/catalogue.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-library_using-the-library:node/64
  $menu_links['menu-library_using-the-library:node/64'] = array(
    'menu_name' => 'menu-library',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Using the Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library_using-the-library:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_4000-childrens-book-drive:node/5861
  $menu_links['menu-project-sidebar-menu_4000-childrens-book-drive:node/5861'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/5861',
    'router_path' => 'node/%',
    'link_title' => '4000 Children\'s Book Drive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_4000-childrens-book-drive:node/5861',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-project-sidebar-menu_special-projects:http://zodml.org/projects/special-projects',
  );
  // Exported menu link: menu-project-sidebar-menu_book-fair-excursions:node/7
  $menu_links['menu-project-sidebar-menu_book-fair-excursions:node/7'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Book Fair Excursions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_book-fair-excursions:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_bookcorner:node/3
  $menu_links['menu-project-sidebar-menu_bookcorner:node/3'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'BookCorner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_bookcorner:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_catch-them-young-cathy:node/4
  $menu_links['menu-project-sidebar-menu_catch-them-young-cathy:node/4'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Catch Them Young (CATHY)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_catch-them-young-cathy:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_internet-learning-centre:node/8
  $menu_links['menu-project-sidebar-menu_internet-learning-centre:node/8'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Internet Learning Centre',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_internet-learning-centre:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_oasis-libraries:node/2
  $menu_links['menu-project-sidebar-menu_oasis-libraries:node/2'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Oasis Libraries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_oasis-libraries:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_prison-libraries:node/9
  $menu_links['menu-project-sidebar-menu_prison-libraries:node/9'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Prison Libraries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_prison-libraries:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_project-avalanche-book-donation-request-form:node/1221
  $menu_links['menu-project-sidebar-menu_project-avalanche-book-donation-request-form:node/1221'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/1221',
    'router_path' => 'node/%',
    'link_title' => 'Project Avalanche Book Donation Request Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_project-avalanche-book-donation-request-form:node/1221',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-project-sidebar-menu_special-projects:http://zodml.org/projects/special-projects',
  );
  // Exported menu link: menu-project-sidebar-menu_project-fireworks:node/4155
  $menu_links['menu-project-sidebar-menu_project-fireworks:node/4155'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/4155',
    'router_path' => 'node/%',
    'link_title' => 'Project Fireworks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_project-fireworks:node/4155',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-project-sidebar-menu_special-projects:http://zodml.org/projects/special-projects',
  );
  // Exported menu link: menu-project-sidebar-menu_secondary-school-reading-programmes:node/6
  $menu_links['menu-project-sidebar-menu_secondary-school-reading-programmes:node/6'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Secondary School Reading Programmes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_secondary-school-reading-programmes:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-project-sidebar-menu_special-projects:http://zodml.org/projects/special-projects
  $menu_links['menu-project-sidebar-menu_special-projects:http://zodml.org/projects/special-projects'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'link_path' => 'http://zodml.org/projects/special-projects',
    'router_path' => '',
    'link_title' => 'Special Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-project-sidebar-menu_special-projects:http://zodml.org/projects/special-projects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-school_agricultural-science:node/5906
  $menu_links['menu-secondary-school_agricultural-science:node/5906'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5906',
    'router_path' => 'node/%',
    'link_title' => 'Agricultural Science',
    'options' => array(
      'identifier' => 'menu-secondary-school_agricultural-science:node/5906',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_auto-mechanics:node/5908
  $menu_links['menu-secondary-school_auto-mechanics:node/5908'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5908',
    'router_path' => 'node/%',
    'link_title' => 'Auto Mechanics',
    'options' => array(
      'identifier' => 'menu-secondary-school_auto-mechanics:node/5908',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_basic-science:node/1254
  $menu_links['menu-secondary-school_basic-science:node/1254'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1254',
    'router_path' => 'node/%',
    'link_title' => 'Basic Science',
    'options' => array(
      'identifier' => 'menu-secondary-school_basic-science:node/1254',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_basic-technology:node/5726
  $menu_links['menu-secondary-school_basic-technology:node/5726'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5726',
    'router_path' => 'node/%',
    'link_title' => 'Basic Technology',
    'options' => array(
      'identifier' => 'menu-secondary-school_basic-technology:node/5726',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_biology:node/5910
  $menu_links['menu-secondary-school_biology:node/5910'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5910',
    'router_path' => 'node/%',
    'link_title' => 'Biology',
    'options' => array(
      'identifier' => 'menu-secondary-school_biology:node/5910',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_business-studies:node/1231
  $menu_links['menu-secondary-school_business-studies:node/1231'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1231',
    'router_path' => 'node/%',
    'link_title' => 'Business Studies',
    'options' => array(
      'identifier' => 'menu-secondary-school_business-studies:node/1231',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_chemistry:node/5912
  $menu_links['menu-secondary-school_chemistry:node/5912'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5912',
    'router_path' => 'node/%',
    'link_title' => 'Chemistry',
    'options' => array(
      'identifier' => 'menu-secondary-school_chemistry:node/5912',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_computer-studies:node/1230
  $menu_links['menu-secondary-school_computer-studies:node/1230'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1230',
    'router_path' => 'node/%',
    'link_title' => 'Computer Studies',
    'options' => array(
      'identifier' => 'menu-secondary-school_computer-studies:node/1230',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_computer-studies:node/5913
  $menu_links['menu-secondary-school_computer-studies:node/5913'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5913',
    'router_path' => 'node/%',
    'link_title' => 'Computer Studies',
    'options' => array(
      'identifier' => 'menu-secondary-school_computer-studies:node/5913',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_english-language:node/1234
  $menu_links['menu-secondary-school_english-language:node/1234'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1234',
    'router_path' => 'node/%',
    'link_title' => 'English Language',
    'options' => array(
      'identifier' => 'menu-secondary-school_english-language:node/1234',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_financial-accounting:node/5915
  $menu_links['menu-secondary-school_financial-accounting:node/5915'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5915',
    'router_path' => 'node/%',
    'link_title' => 'Financial Accounting',
    'options' => array(
      'identifier' => 'menu-secondary-school_financial-accounting:node/5915',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_for-parents:node/1253
  $menu_links['menu-secondary-school_for-parents:node/1253'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1253',
    'router_path' => 'node/%',
    'link_title' => 'For Parents',
    'options' => array(
      'identifier' => 'menu-secondary-school_for-parents:node/1253',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-school_home-economics:node/5896
  $menu_links['menu-secondary-school_home-economics:node/5896'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5896',
    'router_path' => 'node/%',
    'link_title' => 'Home Economics',
    'options' => array(
      'identifier' => 'menu-secondary-school_home-economics:node/5896',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_home-management:node/5917
  $menu_links['menu-secondary-school_home-management:node/5917'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5917',
    'router_path' => 'node/%',
    'link_title' => 'Home Management',
    'options' => array(
      'identifier' => 'menu-secondary-school_home-management:node/5917',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_home:node/1027
  $menu_links['menu-secondary-school_home:node/1027'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1027',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-secondary-school_home:node/1027',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-school_insurance:node/5919
  $menu_links['menu-secondary-school_insurance:node/5919'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5919',
    'router_path' => 'node/%',
    'link_title' => 'Insurance',
    'options' => array(
      'identifier' => 'menu-secondary-school_insurance:node/5919',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_junior-secondary-school-sss:node/1227
  $menu_links['menu-secondary-school_junior-secondary-school-sss:node/1227'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1227',
    'router_path' => 'node/%',
    'link_title' => 'Junior Secondary School (SSS)',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_useful-and-cool-sites:node/1074',
  );
  // Exported menu link: menu-secondary-school_literature-in-english:node/5921
  $menu_links['menu-secondary-school_literature-in-english:node/5921'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5921',
    'router_path' => 'node/%',
    'link_title' => 'Literature-in-English',
    'options' => array(
      'identifier' => 'menu-secondary-school_literature-in-english:node/5921',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_mathematics:node/5848
  $menu_links['menu-secondary-school_mathematics:node/5848'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5848',
    'router_path' => 'node/%',
    'link_title' => 'Mathematics',
    'options' => array(
      'identifier' => 'menu-secondary-school_mathematics:node/5848',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_mathematics:node/5923
  $menu_links['menu-secondary-school_mathematics:node/5923'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5923',
    'router_path' => 'node/%',
    'link_title' => 'Mathematics',
    'options' => array(
      'identifier' => 'menu-secondary-school_mathematics:node/5923',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_past-exams-and-downloads:node/1073
  $menu_links['menu-secondary-school_past-exams-and-downloads:node/1073'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1073',
    'router_path' => 'node/%',
    'link_title' => 'Past Exams and Downloads',
    'options' => array(
      'identifier' => 'menu-secondary-school_past-exams-and-downloads:node/1073',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-school_physical-and-health-education:node/5929
  $menu_links['menu-secondary-school_physical-and-health-education:node/5929'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5929',
    'router_path' => 'node/%',
    'link_title' => 'Physical and Health Education',
    'options' => array(
      'identifier' => 'menu-secondary-school_physical-and-health-education:node/5929',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_junior-secondary-school-sss:node/1227',
  );
  // Exported menu link: menu-secondary-school_physics:node/5925
  $menu_links['menu-secondary-school_physics:node/5925'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5925',
    'router_path' => 'node/%',
    'link_title' => 'Physics',
    'options' => array(
      'identifier' => 'menu-secondary-school_physics:node/5925',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_senior-secondary-school:node/5878
  $menu_links['menu-secondary-school_senior-secondary-school:node/5878'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5878',
    'router_path' => 'node/%',
    'link_title' => 'Senior Secondary School',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-secondary-school_useful-and-cool-sites:node/1074',
  );
  // Exported menu link: menu-secondary-school_textbooks-and-more:node/1072
  $menu_links['menu-secondary-school_textbooks-and-more:node/1072'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1072',
    'router_path' => 'node/%',
    'link_title' => 'Textbooks and More',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-secondary-school_textbooks-and-more:node/1072',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-school_useful-and-cool-sites:node/1074
  $menu_links['menu-secondary-school_useful-and-cool-sites:node/1074'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1074',
    'router_path' => 'node/%',
    'link_title' => 'Useful and Cool Sites',
    'options' => array(
      'identifier' => 'menu-secondary-school_useful-and-cool-sites:node/1074',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-school_woodwork:node/5927
  $menu_links['menu-secondary-school_woodwork:node/5927'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/5927',
    'router_path' => 'node/%',
    'link_title' => 'Woodwork',
    'options' => array(
      'identifier' => 'menu-secondary-school_woodwork:node/5927',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-secondary-school_senior-secondary-school:node/5878',
  );
  // Exported menu link: menu-secondary-school_zodml-resources:node/1075
  $menu_links['menu-secondary-school_zodml-resources:node/1075'] = array(
    'menu_name' => 'menu-secondary-school',
    'link_path' => 'node/1075',
    'router_path' => 'node/%',
    'link_title' => 'ZODML Resources',
    'options' => array(
      'identifier' => 'menu-secondary-school_zodml-resources:node/1075',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_article:node/add/article
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_blog-entry:node/add/blog
  $menu_links['navigation_blog-entry:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for multi-user blogs. Every user gets a personal blog.',
      ),
      'identifier' => 'navigation_blog-entry:node/add/blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_book-child:node/add/book-child
  $menu_links['navigation_book-child:node/add/book-child'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book-child',
    'router_path' => 'node/add/book-child',
    'link_title' => 'Book Child',
    'options' => array(
      'identifier' => 'navigation_book-child:node/add/book-child',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_book-page:node/add/book
  $menu_links['navigation_book-page:node/add/book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Book page',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.',
      ),
      'identifier' => 'navigation_book-page:node/add/book',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_books:book
  $menu_links['navigation_books:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'navigation_books:book',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_discover-nigeria-main:node/add/discover-nigeria-main
  $menu_links['navigation_discover-nigeria-main:node/add/discover-nigeria-main'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/discover-nigeria-main',
    'router_path' => 'node/add/discover-nigeria-main',
    'link_title' => 'discover-nigeria-main',
    'options' => array(
      'identifier' => 'navigation_discover-nigeria-main:node/add/discover-nigeria-main',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_discover-nigeria:node/add/discover-nigeria
  $menu_links['navigation_discover-nigeria:node/add/discover-nigeria'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/discover-nigeria',
    'router_path' => 'node/add/discover-nigeria',
    'link_title' => 'discover-nigeria',
    'options' => array(
      'identifier' => 'navigation_discover-nigeria:node/add/discover-nigeria',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_faq:node/add/faq
  $menu_links['navigation_faq:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'A frequently asked question and its answer.',
      ),
      'identifier' => 'navigation_faq:node/add/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_feed-aggregator:aggregator
  $menu_links['navigation_feed-aggregator:aggregator'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'aggregator',
    'router_path' => 'aggregator',
    'link_title' => 'Feed aggregator',
    'options' => array(
      'identifier' => 'navigation_feed-aggregator:aggregator',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
  );
  // Exported menu link: navigation_for-kids-main:node/add/for-kids-main
  $menu_links['navigation_for-kids-main:node/add/for-kids-main'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/for-kids-main',
    'router_path' => 'node/add/for-kids-main',
    'link_title' => 'for kids main',
    'options' => array(
      'identifier' => 'navigation_for-kids-main:node/add/for-kids-main',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_frequently-asked-questions:faq-page
  $menu_links['navigation_frequently-asked-questions:faq-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'identifier' => 'navigation_frequently-asked-questions:faq-page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: navigation_general-image-uploading:node/add/general-image-uploading
  $menu_links['navigation_general-image-uploading:node/add/general-image-uploading'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/general-image-uploading',
    'router_path' => 'node/add/general-image-uploading',
    'link_title' => 'general-image-uploading',
    'options' => array(
      'identifier' => 'navigation_general-image-uploading:node/add/general-image-uploading',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_glossary:discover-nigeria/glossary
  $menu_links['navigation_glossary:discover-nigeria/glossary'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'discover-nigeria/glossary',
    'router_path' => 'discover-nigeria/glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'identifier' => 'navigation_glossary:discover-nigeria/glossary',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_glossary:glossary
  $menu_links['navigation_glossary:glossary'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'glossary',
    'router_path' => 'glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'identifier' => 'navigation_glossary:glossary',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_main-site-content:node/add/main-site-content
  $menu_links['navigation_main-site-content:node/add/main-site-content'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/main-site-content',
    'router_path' => 'node/add/main-site-content',
    'link_title' => 'main-site-content',
    'options' => array(
      'identifier' => 'navigation_main-site-content:node/add/main-site-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_past-quesstions:node/add/past-quesstions
  $menu_links['navigation_past-quesstions:node/add/past-quesstions'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/past-quesstions',
    'router_path' => 'node/add/past-quesstions',
    'link_title' => 'Past Quesstions',
    'options' => array(
      'identifier' => 'navigation_past-quesstions:node/add/past-quesstions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_semantic-views-demo:semantic-views-demo
  $menu_links['navigation_semantic-views-demo:semantic-views-demo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'semantic-views-demo',
    'router_path' => 'semantic-views-demo',
    'link_title' => 'Semantic Views demo',
    'options' => array(
      'identifier' => 'navigation_semantic-views-demo:semantic-views-demo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_site-map:sitemap
  $menu_links['navigation_site-map:sitemap'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
      'identifier' => 'navigation_site-map:sitemap',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_sources:aggregator/sources
  $menu_links['navigation_sources:aggregator/sources'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'aggregator/sources',
    'router_path' => 'aggregator/sources',
    'link_title' => 'Sources',
    'options' => array(
      'identifier' => 'navigation_sources:aggregator/sources',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_feed-aggregator:aggregator',
  );
  // Exported menu link: navigation_webform:node/add/webform
  $menu_links['navigation_webform:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'navigation_webform:node/add/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('...And I spied, Reasons to Vote with Obi and His Friends– Librarian Book Picks');
  t('4000 Children\'s Book Drive');
  t('Abia State');
  t('About Us');
  t('Abubakar Tafawa Balewa');
  t('Account settings');
  t('Actions');
  t('Adamawa State');
  t('Add content');
  t('Administration');
  t('Administration menu');
  t('Adolphus Opara');
  t('Agricultural Science');
  t('Ahmadu Bello');
  t('Akwa Ibom State');
  t('Alhassan Dantata');
  t('Aminu Kano');
  t('Amos Tutuola');
  t('Anambra State');
  t('Annual Reports and Financials');
  t('Anthony Enahoro');
  t('Apache Solr search');
  t('Apache Solr search index');
  t('Appearance');
  t('Article');
  t('Auto Mechanics');
  t('Available updates');
  t('Backup and Migrate');
  t('Basic Science');
  t('Basic Science and Technology');
  t('Basic Technology');
  t('Basic page');
  t('Bauchi State');
  t('Bayelsa State');
  t('Benue State');
  t('Biology');
  t('Biyi Bandele');
  t('Blocks');
  t('Blog');
  t('Blog entry');
  t('Board of Trustees');
  t('Bola Agbaje');
  t('Book Child');
  t('Book Fair Excursions');
  t('Book page');
  t('BookCorner');
  t('Books');
  t('Borno State');
  t('Buchi Emecheta');
  t('Business Studies');
  t('CAPTCHA');
  t('Career Guide');
  t('Catch Them Young (CATHY)');
  t('Chemistry');
  t('Chika Unigwe');
  t('Chimamanda Adichie');
  t('Chinua Achebe');
  t('Chiwetel Ejiofor');
  t('Chris Abani');
  t('Christine Ohuruogu');
  t('Chuka Umunna');
  t('Civic Education');
  t('Clean URLs');
  t('Community Library');
  t('Compose tips');
  t('Computer Studies');
  t('Configuration');
  t('Connect to ZODML');
  t('Contact Us');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Context');
  t('Cron');
  t('Cross River State');
  t('Cyprian Ekwensi');
  t('Dashboard');
  t('Date and time');
  t('Delta State');
  t('Delta blocks');
  t('Development');
  t('Did You Know?');
  t('Diran Adebayo');
  t('Discover Nigeria');
  t('Donate Online');
  t('Donate to ZODML');
  t('Easy Breadcrumb');
  t('Ebonyi State');
  t('Edo State');
  t('Education in Nigeria');
  t('Educational Videos');
  t('Ekiti State');
  t('Elizabeth Ofili');
  t('English Language');
  t('Enugu State');
  t('FAQ');
  t('FAQs');
  t('FCT Abuja');
  t('Fatimah Tuggar');
  t('Features');
  t('Feed aggregator');
  t('Femi Oke');
  t('Field list');
  t('File system');
  t('Financial Accounting');
  t('FlexSlider');
  t('Flickr');
  t('Flora Nwapa');
  t('For Kids');
  t('For Kids menu');
  t('For Parents');
  t('For Secondary School Students');
  t('Frequently Asked Questions');
  t('Friends of the Library');
  t('Funmilayo Ransome-Kuti');
  t('George Osodi');
  t('Get Involved');
  t('Get Your Child a Library Card');
  t('Glossary');
  t('Gobarau Minaret');
  t('Gombe State');
  t('Google Analytics');
  t('Hakeem Olajuwon');
  t('Helon Habila');
  t('Help');
  t('Herbert Macaulay');
  t('Heritage and Culture');
  t('Home');
  t('Home Economics');
  t('Home Management');
  t('Hubert Ogunde');
  t('IMCE');
  t('IP address blocking');
  t('Image block settings');
  t('Image styles');
  t('Image toolkit');
  t('Imo State');
  t('Insurance');
  t('Interactive e-Books for Kids');
  t('Internet Learning Centre');
  t('Internet Safety for Kids');
  t('Jigawa State');
  t('Jobs and Internships');
  t('John Dabiri');
  t('Join the Library');
  t('Juicebox');
  t('Jumoke Sanwo');
  t('Junior Secondary School (SSS)');
  t('Kaduna State');
  t('Kehinde Wiley');
  t('Lagos State');
  t('LagosPhoto Festival');
  t('Lawrence Okoye');
  t('Literature-in-English');
  t('Livefyre');
  t('Location and Hours');
  t('Log out');
  t('Logging and errors');
  t('Main menu');
  t('Maintenance mode');
  t('Management');
  t('Mathematics');
  t('Media');
  t('Menus');
  t('Metatag');
  t('Migrate');
  t('Module filter');
  t('Modules');
  t('My blog');
  t('Navigation');
  t('Newsletters');
  t('Newspaper Clippings');
  t('Nigeria Fact File');
  t('Nnamdi Azikiwe');
  t('Nnedi Okorafor');
  t('Oasis Libraries');
  t('Obafemi Awolowo');
  t('Of Animal Rights and Independent Minds: My ZODML Reading Programme Experience');
  t('Ogun State');
  t('Ondo State');
  t('Online Catalogue');
  t('Osun-Osogbo Grove');
  t('Our Donors and Partners');
  t('Our Story');
  t('Our Team');
  t('Oyo State');
  t('Past Exams and Downloads');
  t('Past Quesstions');
  t('People');
  t('Performance');
  t('Physical Health Education');
  t('Physical and Health Education');
  t('Physics');
  t('Piwik');
  t('Plateau State');
  t('Poems: Through a Broken Mirror by Olajide Salawu');
  t('Press Releases');
  t('Primary 1 - 3');
  t('Primary 4 - 6');
  t('Prison Libraries');
  t('Professional Exam Past Papers');
  t('Professional Past Questions');
  t('Project Avalanche Book Donation Request Form');
  t('Project Fireworks');
  t('Projects');
  t('Quicktabs');
  t('RSS publishing');
  t('Read More link');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Reports');
  t('Request');
  t('Research Guide');
  t('Rules');
  t('Sade Adu');
  t('Samuel Ajayi Crowther');
  t('Scroll to top');
  t('Seal');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Secondary School');
  t('Secondary School Reading Programmes');
  t('Semantic Views demo');
  t('Senior Secondary School');
  t('Shortcuts');
  t('Site information');
  t('Site map');
  t('Social Studies');
  t('Sources');
  t('Special Projects');
  t('States');
  t('Status report');
  t('Structure');
  t('Submit a Photo');
  t('Sulayman Afose');
  t('System');
  t('TB Mega Menu');
  t('Taxonomy');
  t('Teju Cole');
  t('Text formats');
  t('Textbooks and More');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('URL aliases');
  t('Useful Websites');
  t('Useful and Cool Sites');
  t('User account');
  t('User interface');
  t('User menu');
  t('User protect');
  t('Using the Library');
  t('Views');
  t('Views plugins');
  t('Visual Arts');
  t('Web services');
  t('Webform');
  t('Webform settings');
  t('Websites');
  t('Woodwork');
  t('WordPress migration');
  t('Workflow');
  t('Wysiwyg profiles');
  t('Yewande Akinola');
  t('ZODML Newsroom');
  t('ZODML Resources');
  t('ZODML at a Glance');
  t('Zaccheus Onumba Dibiaezue');
  t('Zulu Sofola');
  t('discover nigeria menu');
  t('discover-nigeria');
  t('discover-nigeria-main');
  t('e-Books');
  t('eLibrary');
  t('eResources');
  t('for kids main');
  t('general-image-uploading');
  t('main-site-content');


  return $menu_links;
}
