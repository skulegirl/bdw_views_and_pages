<?php
/**
 * @file
 * bdw_views_and_pages.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function bdw_views_and_pages_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'home_page_layout';
  $layout->admin_title = 'Home Page Layout';
  $layout->admin_description = '5 regions
          1
2-1 | 2-2 | 2-3
    3-1 | 3-2
4-1|4-2|4-3|4-4
    5-1 | 5-2';
  $layout->category = 'home and landing pages';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'region 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_2_left',
          1 => 'region_2',
          2 => 'region_2_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_2' => array(
        'type' => 'region',
        'title' => 'region 2-2',
        'width' => '33.199521448795615',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_3',
          1 => 'region_3_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_3' => array(
        'type' => 'region',
        'title' => 'region 3-1',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'region_2_left' => array(
        'type' => 'region',
        'title' => 'region-2-1',
        'width' => '33.60123060907512',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'region_2_right' => array(
        'type' => 'region',
        'title' => 'region 2-3',
        'width' => '33.19924794205613',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'region_3_right' => array(
        'type' => 'region',
        'title' => 'region 3-2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_4',
          1 => 'region_4__2',
          2 => 'region_4_3',
          3 => 'region_4_4',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_4' => array(
        'type' => 'region',
        'title' => 'region 4-1',
        'width' => '25.091636136353202',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'region_4__2' => array(
        'type' => 'region',
        'title' => 'region 4-2',
        'width' => '24.90740589209167',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'region_4_3' => array(
        'type' => 'region',
        'title' => 'region 4-3',
        'width' => '25.011084284854917',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'region_4_4' => array(
        'type' => 'region',
        'title' => 'region 4-4',
        'width' => '24.989873686700207',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_5_1',
          1 => 'region_5_2',
        ),
        'parent' => 'main',
        'class' => 'Region 5',
      ),
      'region_5_1' => array(
        'type' => 'region',
        'title' => 'region 5-1',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'region_5_2' => array(
        'type' => 'region',
        'title' => 'region 5-2',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['home_page_layout'] = $layout;

  return $export;
}
