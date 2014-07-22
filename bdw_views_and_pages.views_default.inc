<?php
/**
 * @file
 * bdw_views_and_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bdw_views_and_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'SearchByUsername';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'Search By User Name';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_user_photo_fid' => 'field_user_photo_fid',
    'city' => 'city',
    'province' => 'province',
    'country' => 'country',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_user_photo_fid' => array(
      'align' => '',
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'province' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Text area';
  $handler->display->display_options['empty']['area']['content'] = '<?php
$view = views_get_current_view();
  if (count($view->exposed_input)) {
    return "<h3>Sorry, no results were found.  Please adjust your search criteria and try again.</h3>";
}
?>';
  $handler->display->display_options['empty']['area']['format'] = '3';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['content_profile_rel_1']['id'] = 'content_profile_rel_1';
  $handler->display->display_options['relationships']['content_profile_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel_1']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel_1']['ui_name'] = 'Node: Boondocking Available';
  $handler->display->display_options['relationships']['content_profile_rel_1']['label'] = 'Boondocking Available';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['content_profile_rel']['id'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['label'] = 'Content Profile';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_user_photo_fid']['id'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['table'] = 'node_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo_fid']['field'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['relationship'] = 'content_profile_rel';
  $handler->display->display_options['fields']['field_user_photo_fid']['label'] = 'User Photo';
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_alter_empty'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'content_profile_rel_1';
  $handler->display->display_options['fields']['city']['hide_alter_empty'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'content_profile_rel_1';
  $handler->display->display_options['fields']['province']['hide_alter_empty'] = FALSE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'content_profile_rel_1';
  $handler->display->display_options['fields']['country']['hide_alter_empty'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['null']['validate_options']['code'] = 'if (count($view->exposed_input)) { return TRUE; }';
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'empty';
  /* Filter criterion: User Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['ui_name'] = 'User Name';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User Name';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    11 => '11',
    16 => '16',
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = '0';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Users By Username';
  $handler->display->display_options['path'] = 'SearchByName';
  $export['SearchByUsername'] = $view;

  $view = new view();
  $view->name = 'all_users_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'All Users Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member Boondocking Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap height=600px | width=100%]';
  $handler->display->display_options['style_options']['markertype'] = 'small red';
  $handler->display->display_options['style_options']['latfield'] = 'name';
  $handler->display->display_options['style_options']['lonfield'] = 'name';
  $handler->display->display_options['style_options']['markerfield'] = 'name';
  $handler->display->display_options['style_options']['geofield'] = 'name';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'name';
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['tooltipfield'] = 'name';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'name';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Use this map to browse all the locations that our members have available for you to boondock. Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Field: Your Location (field_boondock_location) */
  $handler->display->display_options['relationships']['field_boondock_location_lid']['id'] = 'field_boondock_location_lid';
  $handler->display->display_options['relationships']['field_boondock_location_lid']['table'] = 'field_data_field_boondock_location';
  $handler->display->display_options['relationships']['field_boondock_location_lid']['field'] = 'field_boondock_location_lid';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Your Location */
  $handler->display->display_options['fields']['field_boondock_location']['id'] = 'field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['table'] = 'field_data_field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['field'] = 'field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['label'] = '';
  $handler->display->display_options['fields']['field_boondock_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_boondock_location']['element_label_colon'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  /* Filter criterion: Profile: Do you have a boondocking location available on your property? (field_ba_bda_pref) */
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['id'] = 'field_ba_bda_pref_value';
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['table'] = 'field_data_field_ba_bda_pref';
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['field'] = 'field_ba_bda_pref_value';
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'showAllUsersMap';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['all_users_map'] = $view;

  $view = new view();
  $view->name = 'bda_details_d7';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'bda details d7';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Details';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_ba_number_of_spots',
    1 => 'field_ba_max_rv_length_int',
    2 => 'field_ba_max_nights',
    3 => 'field_ba_pullthrough_spot',
    4 => 'field_ba_hookups',
    5 => 'field_ba_slideout_awning',
    6 => 'field_generators_allowed',
    7 => 'field_lawn_chairs_allowed',
    8 => 'field_barbecues_allowed',
    9 => 'field_ba_pets_welcome',
    10 => 'field_ba_wifi_available',
    11 => 'field_ba_access_road_conditions',
    12 => 'field_ba_availability',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'fieldgroup group-ba-details';
  /* Field: Field: Number of Spots */
  $handler->display->display_options['fields']['field_ba_number_of_spots']['id'] = 'field_ba_number_of_spots';
  $handler->display->display_options['fields']['field_ba_number_of_spots']['table'] = 'field_data_field_ba_number_of_spots';
  $handler->display->display_options['fields']['field_ba_number_of_spots']['field'] = 'field_ba_number_of_spots';
  $handler->display->display_options['fields']['field_ba_number_of_spots']['alter']['preserve_tags'] = '<br> <p>';
  $handler->display->display_options['fields']['field_ba_number_of_spots']['element_type'] = 'span';
  /* Field: Field: Max RV Length */
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['id'] = 'field_ba_max_rv_length_int';
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['table'] = 'field_data_field_ba_max_rv_length_int';
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['field'] = 'field_ba_max_rv_length_int';
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['element_type'] = 'span';
  /* Field: Field: Max Nights */
  $handler->display->display_options['fields']['field_ba_max_nights']['id'] = 'field_ba_max_nights';
  $handler->display->display_options['fields']['field_ba_max_nights']['table'] = 'field_data_field_ba_max_nights';
  $handler->display->display_options['fields']['field_ba_max_nights']['field'] = 'field_ba_max_nights';
  $handler->display->display_options['fields']['field_ba_max_nights']['element_type'] = 'span';
  /* Field: Field: Pull Through Parking Available */
  $handler->display->display_options['fields']['field_ba_pullthrough_spot']['id'] = 'field_ba_pullthrough_spot';
  $handler->display->display_options['fields']['field_ba_pullthrough_spot']['table'] = 'field_data_field_ba_pullthrough_spot';
  $handler->display->display_options['fields']['field_ba_pullthrough_spot']['field'] = 'field_ba_pullthrough_spot';
  $handler->display->display_options['fields']['field_ba_pullthrough_spot']['element_type'] = 'span';
  /* Field: Field: Hookups Available */
  $handler->display->display_options['fields']['field_ba_hookups']['id'] = 'field_ba_hookups';
  $handler->display->display_options['fields']['field_ba_hookups']['table'] = 'field_data_field_ba_hookups';
  $handler->display->display_options['fields']['field_ba_hookups']['field'] = 'field_ba_hookups';
  $handler->display->display_options['fields']['field_ba_hookups']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ba_hookups']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ba_hookups']['delta_offset'] = '0';
  /* Field: Field: Slideouts/Awnings Allowed */
  $handler->display->display_options['fields']['field_ba_slideout_awning']['id'] = 'field_ba_slideout_awning';
  $handler->display->display_options['fields']['field_ba_slideout_awning']['table'] = 'field_data_field_ba_slideout_awning';
  $handler->display->display_options['fields']['field_ba_slideout_awning']['field'] = 'field_ba_slideout_awning';
  $handler->display->display_options['fields']['field_ba_slideout_awning']['element_type'] = 'span';
  /* Field: Field: Generators Allowed */
  $handler->display->display_options['fields']['field_generators_allowed']['id'] = 'field_generators_allowed';
  $handler->display->display_options['fields']['field_generators_allowed']['table'] = 'field_data_field_generators_allowed';
  $handler->display->display_options['fields']['field_generators_allowed']['field'] = 'field_generators_allowed';
  $handler->display->display_options['fields']['field_generators_allowed']['element_type'] = 'span';
  /* Field: Field: Lawn Chairs Allowed */
  $handler->display->display_options['fields']['field_lawn_chairs_allowed']['id'] = 'field_lawn_chairs_allowed';
  $handler->display->display_options['fields']['field_lawn_chairs_allowed']['table'] = 'field_data_field_lawn_chairs_allowed';
  $handler->display->display_options['fields']['field_lawn_chairs_allowed']['field'] = 'field_lawn_chairs_allowed';
  $handler->display->display_options['fields']['field_lawn_chairs_allowed']['element_type'] = 'span';
  /* Field: Field: Barbecues Allowed */
  $handler->display->display_options['fields']['field_barbecues_allowed']['id'] = 'field_barbecues_allowed';
  $handler->display->display_options['fields']['field_barbecues_allowed']['table'] = 'field_data_field_barbecues_allowed';
  $handler->display->display_options['fields']['field_barbecues_allowed']['field'] = 'field_barbecues_allowed';
  $handler->display->display_options['fields']['field_barbecues_allowed']['element_type'] = 'span';
  /* Field: Field: Pets Welcome */
  $handler->display->display_options['fields']['field_ba_pets_welcome']['id'] = 'field_ba_pets_welcome';
  $handler->display->display_options['fields']['field_ba_pets_welcome']['table'] = 'field_data_field_ba_pets_welcome';
  $handler->display->display_options['fields']['field_ba_pets_welcome']['field'] = 'field_ba_pets_welcome';
  $handler->display->display_options['fields']['field_ba_pets_welcome']['element_type'] = 'span';
  /* Field: Field: Wifi Available */
  $handler->display->display_options['fields']['field_ba_wifi_available']['id'] = 'field_ba_wifi_available';
  $handler->display->display_options['fields']['field_ba_wifi_available']['table'] = 'field_data_field_ba_wifi_available';
  $handler->display->display_options['fields']['field_ba_wifi_available']['field'] = 'field_ba_wifi_available';
  $handler->display->display_options['fields']['field_ba_wifi_available']['element_type'] = 'span';
  /* Field: Field: Access Road Conditions */
  $handler->display->display_options['fields']['field_ba_access_road_conditions']['id'] = 'field_ba_access_road_conditions';
  $handler->display->display_options['fields']['field_ba_access_road_conditions']['table'] = 'field_data_field_ba_access_road_conditions';
  $handler->display->display_options['fields']['field_ba_access_road_conditions']['field'] = 'field_ba_access_road_conditions';
  /* Field: Field: Availability */
  $handler->display->display_options['fields']['field_ba_availability']['id'] = 'field_ba_availability';
  $handler->display->display_options['fields']['field_ba_availability']['table'] = 'field_data_field_ba_availability';
  $handler->display->display_options['fields']['field_ba_availability']['field'] = 'field_ba_availability';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );
  $export['bda_details_d7'] = $view;

  $view = new view();
  $view->name = 'bda_info';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Boondocking Available Info';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => 6,
    17 => 17,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_boondock_location_lid' => 'field_boondock_location_lid',
    'changed' => 'changed',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_boondock_location_lid' => array(
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_boondock_location_lid']['id'] = 'field_boondock_location_lid';
  $handler->display->display_options['fields']['field_boondock_location_lid']['table'] = 'node_data_field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location_lid']['field'] = 'field_boondock_location_lid';
  $handler->display->display_options['fields']['field_boondock_location_lid']['label'] = 'Location';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created date';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['id'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['table'] = 'node_data_field_ba_bda_preference';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['field'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'bda_info';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'bda updates';
  $handler->display->display_options['menu']['description'] = 'A list of BDA entries, by most recently changed/added.';
  $handler->display->display_options['menu']['weight'] = '10';
  $export['bda_info'] = $view;

  $view = new view();
  $view->name = 'bda_loc_block';
  $view->description = 'List of 5 most recently added boondocking locations';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Our Newest Boondocking Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'newest boondocking locations block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Field: Your Location */
  $handler->display->display_options['fields']['field_boondock_location']['id'] = 'field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['table'] = 'field_data_field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['field'] = 'field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['label'] = '';
  $handler->display->display_options['fields']['field_boondock_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_boondock_location']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_boondock_location']['element_label_colon'] = FALSE;
  /* Sort criterion: Profile: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'profile';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  /* Filter criterion: Profile: Do you have a boondocking location available on your property? (field_ba_bda_pref) */
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['id'] = 'field_ba_bda_pref_value';
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['table'] = 'field_data_field_ba_bda_pref';
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['field'] = 'field_ba_bda_pref_value';
  $handler->display->display_options['filters']['field_ba_bda_pref_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['bda_loc_block'] = $view;

  $view = new view();
  $view->name = 'my_bookmarked_users';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'bookmarked users';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'My bookmarked members';
  $handler->display->display_options['css_class'] = 'bookmark-table';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => 8,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_user_photo_fid' => 'field_user_photo_fid',
    'timestamp' => 'timestamp',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '     ',
    ),
    'field_user_photo_fid' => array(
      'align' => '',
      'separator' => '     ',
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '     ',
    ),
    'ops' => array(
      'align' => '',
      'separator' => '     ',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Text area';
  $handler->display->display_options['empty']['area']['content'] = 'You currently do not have any bookmarked members. Click on the bookmark tab on the left side of a user\'s profile to add them to your bookmark list.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Relationship: Flags: bookmarked_users */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarked_users';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['content_profile_rel']['id'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['label'] = 'Content Profile';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_user_photo_fid']['id'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['table'] = 'node_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo_fid']['field'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['relationship'] = 'content_profile_rel';
  $handler->display->display_options['fields']['field_user_photo_fid']['label'] = 'User Photo';
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_alter_empty'] = FALSE;
  /* Field: Flags: Flagged time */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Boorkmarked since';
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Bookmark link';
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'my_bookmarked_users';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My bookmarked members';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['my_bookmarked_users'] = $view;

  $view = new view();
  $view->name = 'rig_view_d7';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Rig View D7';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%user:name\'s Rig';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Your Rig Photo */
  $handler->display->display_options['fields']['field_user_your_rig_photo']['id'] = 'field_user_your_rig_photo';
  $handler->display->display_options['fields']['field_user_your_rig_photo']['table'] = 'field_data_field_user_your_rig_photo';
  $handler->display->display_options['fields']['field_user_your_rig_photo']['field'] = 'field_user_your_rig_photo';
  $handler->display->display_options['fields']['field_user_your_rig_photo']['label'] = '';
  $handler->display->display_options['fields']['field_user_your_rig_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_your_rig_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_your_rig_photo']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_user_your_rig_photo']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => '0',
    'caption' => 'hidden',
  );
  /* Field: Field: Your Rig */
  $handler->display->display_options['fields']['field_user_your_rig']['id'] = 'field_user_your_rig';
  $handler->display->display_options['fields']['field_user_your_rig']['table'] = 'field_data_field_user_your_rig';
  $handler->display->display_options['fields']['field_user_your_rig']['field'] = 'field_user_your_rig';
  $handler->display->display_options['fields']['field_user_your_rig']['label'] = '';
  $handler->display->display_options['fields']['field_user_your_rig']['element_label_colon'] = FALSE;
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Your Rig (field_user_your_rig) */
  $handler->display->display_options['filters']['field_user_your_rig_value']['id'] = 'field_user_your_rig_value';
  $handler->display->display_options['filters']['field_user_your_rig_value']['table'] = 'field_data_field_user_your_rig';
  $handler->display->display_options['filters']['field_user_your_rig_value']['field'] = 'field_user_your_rig_value';
  $handler->display->display_options['filters']['field_user_your_rig_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_user_your_rig_value']['group'] = 2;
  /* Filter criterion: Field: Your Rig Photo (field_user_your_rig_photo:fid) */
  $handler->display->display_options['filters']['field_user_your_rig_photo_fid']['id'] = 'field_user_your_rig_photo_fid';
  $handler->display->display_options['filters']['field_user_your_rig_photo_fid']['table'] = 'field_data_field_user_your_rig_photo';
  $handler->display->display_options['filters']['field_user_your_rig_photo_fid']['field'] = 'field_user_your_rig_photo_fid';
  $handler->display->display_options['filters']['field_user_your_rig_photo_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_user_your_rig_photo_fid']['group'] = 2;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );
  $export['rig_view_d7'] = $view;

  $view = new view();
  $view->name = 'searchUserListingsMoreOptions';
  $view->description = 'listing of close users';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['css_class'] = 'search-results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Text area';
  $handler->display->display_options['header']['area']['content'] = 'Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'php';
  $handler->display->display_options['sorts']['distance']['php_code'] = '$lld_array = explode ("_", arg(1));
$ll_array = explode (",", $lld_array[0]);

$ll["latitude"] = (float)$ll_array[0];
$ll["longitude"] = (float)$ll_array[1];

return $ll;';
  /* Contextual filter: Location: Distance / Proximity */
  $handler->display->display_options['arguments']['distance']['id'] = 'distance';
  $handler->display->display_options['arguments']['distance']['table'] = 'location';
  $handler->display->display_options['arguments']['distance']['field'] = 'distance';
  $handler->display->display_options['arguments']['distance']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['distance']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['distance']['type'] = 'latlon';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = '0';

  /* Display: Search Listings Pane */
  $handler = $view->new_display('panel_pane', 'Search Listings Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Search Listings Page */
  $handler = $view->new_display('page', 'Search Listings Page', 'page_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['path'] = 'SearchListings';

  /* Display: Search Listings Map Attachment */
  $handler = $view->new_display('attachment', 'Search Listings Map Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['macro'] = '[gmap width=100%| height=600px]';
  $handler->display->display_options['style_options']['markertype'] = 'numbers';
  $handler->display->display_options['style_options']['latfield'] = 'name';
  $handler->display->display_options['style_options']['lonfield'] = 'name';
  $handler->display->display_options['style_options']['markerfield'] = 'name';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'name';
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['tooltipfield'] = 'name';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
  $lld_array = explode ("_", arg(1));
  $ll_array = explode (",", $lld_array[0]);

  $query = array(\'lat\' => (float)$ll_array[0],
                 \'lng\' => (float)$ll_array[1],
                 \'maxrows\' => 1);
  $options = array(\'columns\' => array(\'name\',\'countryname\'));
  $reverse_lookup = geonames_query(\'nearbyplace\', $query, $options);

  echo \'No boondocking locations with your search criteria were found near your location of \' 
    . $reverse_lookup->results[0][\'name\'] . \', \' 
    . $reverse_lookup->results[0][\'countryname\'] 
    . \'.\';
?>
<p> If this was not your intended search location, please be more specific in your search location string.
<p>
Otherwise, try <a href="javascript:javascript:history.go(-1)">going back</a> and increasing your search radius, or removing some of your search limitations. You can also see a <a href="/showAllUsersMap">map of all available boondocking locations</a>.';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['inherit_pager'] = TRUE;
  $export['searchUserListingsMoreOptions'] = $view;

  $view = new view();
  $view->name = 'searchlocationresults';
  $view->description = 'Search Map';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'SearchLocationResults';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'search-results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap width=100%| height=600px]';
  $handler->display->display_options['style_options']['markertype'] = 'numbers';
  $handler->display->display_options['style_options']['latfield'] = 'name';
  $handler->display->display_options['style_options']['lonfield'] = 'name';
  $handler->display->display_options['style_options']['markerfield'] = 'name';
  $handler->display->display_options['style_options']['geofield'] = 'name';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'name';
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['autoclick_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['tooltipfield'] = 'name';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'name';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Your Location (field_boondock_location) */
  $handler->display->display_options['relationships']['field_boondock_location_lid']['id'] = 'field_boondock_location_lid';
  $handler->display->display_options['relationships']['field_boondock_location_lid']['table'] = 'field_data_field_boondock_location';
  $handler->display->display_options['relationships']['field_boondock_location_lid']['field'] = 'field_boondock_location_lid';
  $handler->display->display_options['relationships']['field_boondock_location_lid']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['label'] = 'User Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: User Photo */
  $handler->display->display_options['fields']['field_user_photo']['id'] = 'field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['table'] = 'field_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['field'] = 'field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_user_photo']['label'] = '';
  $handler->display->display_options['fields']['field_user_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Your Location */
  $handler->display->display_options['fields']['field_boondock_location']['id'] = 'field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['table'] = 'field_data_field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['field'] = 'field_boondock_location';
  $handler->display->display_options['fields']['field_boondock_location']['label'] = 'City';
  $handler->display->display_options['fields']['field_boondock_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_boondock_location']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_boondock_location']['element_type'] = 'span';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Distance';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$lld_array = explode ("_", $view->args[0]);
$ll_array = explode (",", $lld_array[0]);
$static["lat"] = (float)$ll_array[0];
$static["lon"] = (float)$ll_array[1];
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$loc = $data->field_field_boondock_location;
$locval["lat"] = $loc[0][\'raw\'][\'latitude\'];
$locval["lon"] =  $loc[0][\'raw\'][\'longitude\'];
$distance_km = location_distance_between($static, $locval, "km");
$string = round( $distance_km[\'scalar\'] * 1000 / 1609.347, 1 ) . " miles (" . $distance_km[\'scalar\'] . " km)";
print $string;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Your Age Range */
  $handler->display->display_options['fields']['field_user_age_range']['id'] = 'field_user_age_range';
  $handler->display->display_options['fields']['field_user_age_range']['table'] = 'field_data_field_user_age_range';
  $handler->display->display_options['fields']['field_user_age_range']['field'] = 'field_user_age_range';
  $handler->display->display_options['fields']['field_user_age_range']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_user_age_range']['label'] = 'Host\'s Age Range';
  $handler->display->display_options['fields']['field_user_age_range']['element_type'] = 'span';
  /* Field: Field: Max Nights */
  $handler->display->display_options['fields']['field_ba_max_nights']['id'] = 'field_ba_max_nights';
  $handler->display->display_options['fields']['field_ba_max_nights']['table'] = 'field_data_field_ba_max_nights';
  $handler->display->display_options['fields']['field_ba_max_nights']['field'] = 'field_ba_max_nights';
  $handler->display->display_options['fields']['field_ba_max_nights']['element_type'] = 'span';
  /* Field: Field: Max RV Length */
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['id'] = 'field_ba_max_rv_length_int';
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['table'] = 'field_data_field_ba_max_rv_length_int';
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['field'] = 'field_ba_max_rv_length_int';
  $handler->display->display_options['fields']['field_ba_max_rv_length_int']['element_type'] = 'span';
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['relationship'] = 'field_boondock_location_lid';
  $handler->display->display_options['sorts']['distance']['origin'] = 'tied';
  /* Contextual filter: Location: Distance / Proximity */
  $handler->display->display_options['arguments']['distance']['id'] = 'distance';
  $handler->display->display_options['arguments']['distance']['table'] = 'location';
  $handler->display->display_options['arguments']['distance']['field'] = 'distance';
  $handler->display->display_options['arguments']['distance']['relationship'] = 'field_boondock_location_lid';
  $handler->display->display_options['arguments']['distance']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['distance']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['distance']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['distance']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['distance']['type'] = 'latlon';
  /* Contextual filter: Field: Max RV Length (field_ba_max_rv_length_int) */
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['id'] = 'field_ba_max_rv_length_int_value';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['table'] = 'field_data_field_ba_max_rv_length_int';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['field'] = 'field_ba_max_rv_length_int_value';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ba_max_rv_length_int_value']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Pull Through Parking Available (field_ba_pullthrough_spot) */
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['id'] = 'field_ba_pullthrough_spot_value';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['table'] = 'field_data_field_ba_pullthrough_spot';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['field'] = 'field_ba_pullthrough_spot_value';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ba_pullthrough_spot_value']['limit'] = '0';
  /* Contextual filter: Field: Slideouts/Awnings Allowed (field_ba_slideout_awning) */
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['id'] = 'field_ba_slideout_awning_value';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['table'] = 'field_data_field_ba_slideout_awning';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['field'] = 'field_ba_slideout_awning_value';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ba_slideout_awning_value']['limit'] = '0';
  /* Contextual filter: Field: Generators Allowed (field_generators_allowed) */
  $handler->display->display_options['arguments']['field_generators_allowed_value']['id'] = 'field_generators_allowed_value';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['table'] = 'field_data_field_generators_allowed';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['field'] = 'field_generators_allowed_value';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_generators_allowed_value']['limit'] = '0';
  /* Contextual filter: Field: Pets Welcome (field_ba_pets_welcome) */
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['id'] = 'field_ba_pets_welcome_value';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['table'] = 'field_data_field_ba_pets_welcome';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['field'] = 'field_ba_pets_welcome_value';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ba_pets_welcome_value']['limit'] = '0';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['path'] = 'searchlocationresults';

  /* Display: Search Map Attachment */
  $handler = $view->new_display('attachment', 'Search Map Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap width=100%| height=600px]';
  $handler->display->display_options['style_options']['markertype'] = 'numbers';
  $handler->display->display_options['style_options']['latfield'] = 'name';
  $handler->display->display_options['style_options']['lonfield'] = 'name';
  $handler->display->display_options['style_options']['markerfield'] = 'name';
  $handler->display->display_options['style_options']['geofield'] = 'name';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'name';
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['autoclick_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['tooltipfield'] = 'name';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'name';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_pager'] = TRUE;
  $export['searchlocationresults'] = $view;

  $view = new view();
  $view->name = 'testimonials';
  $view->description = 'Boondockers Welcome Testimonials';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['css_class'] = 'testimonial-data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'testimonial-page-row';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Text area';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revision';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['label'] = 'Teaser';
  $handler->display->display_options['fields']['teaser']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';

  /* Display: Testimonials pane */
  $handler = $view->new_display('panel_pane', 'Testimonials pane', 'testmonials_pane');
  $handler->display->display_options['display_description'] = 'Testimonials';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all testimonials';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Text area';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['path'] = 'testimonials';
  $export['testimonials'] = $view;

  $view = new view();
  $view->name = 'user_bda_photos_d7';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'D7 User BDA Photos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photos of %user:name\'s Boondocking Location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_ba_photo' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_ba_photo' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Photos of this Boondocking Location */
  $handler->display->display_options['fields']['field_ba_photo']['id'] = 'field_ba_photo';
  $handler->display->display_options['fields']['field_ba_photo']['table'] = 'field_data_field_ba_photo';
  $handler->display->display_options['fields']['field_ba_photo']['field'] = 'field_ba_photo';
  $handler->display->display_options['fields']['field_ba_photo']['label'] = '';
  $handler->display->display_options['fields']['field_ba_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ba_photo']['alter']['text'] = '[field_ba_photo]
<br>[field_ba_photo-title]<br>';
  $handler->display->display_options['fields']['field_ba_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ba_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ba_photo']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_ba_photo']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => '0',
    'caption' => 'title',
  );
  $handler->display->display_options['fields']['field_ba_photo']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ba_photo']['delta_offset'] = '0';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  /* Filter criterion: Field: Photos of this Boondocking Location (field_ba_photo:fid) */
  $handler->display->display_options['filters']['field_ba_photo_fid']['id'] = 'field_ba_photo_fid';
  $handler->display->display_options['filters']['field_ba_photo_fid']['table'] = 'field_data_field_ba_photo';
  $handler->display->display_options['filters']['field_ba_photo_fid']['field'] = 'field_ba_photo_fid';
  $handler->display->display_options['filters']['field_ba_photo_fid']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'context',
      'context' => 'user_edit_form.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );
  $export['user_bda_photos_d7'] = $view;

  $view = new view();
  $view->name = 'user_photos_d7';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'User Photos D7';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_user_your_photos' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_user_your_photos' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_your_photos' => 'field_user_your_photos',
  );
  /* Field: Field: Your Photos */
  $handler->display->display_options['fields']['field_user_your_photos']['id'] = 'field_user_your_photos';
  $handler->display->display_options['fields']['field_user_your_photos']['table'] = 'field_data_field_user_your_photos';
  $handler->display->display_options['fields']['field_user_your_photos']['field'] = 'field_user_your_photos';
  $handler->display->display_options['fields']['field_user_your_photos']['label'] = '';
  $handler->display->display_options['fields']['field_user_your_photos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_your_photos']['alter']['text'] = '[field_user_your_photos]
<br>[field_user_your_photos-title]<br>
';
  $handler->display->display_options['fields']['field_user_your_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_your_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_your_photos']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_user_your_photos']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'medium',
    'lightbox_style' => '0',
    'caption' => 'title',
  );
  $handler->display->display_options['fields']['field_user_your_photos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_user_your_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_your_photos']['multi_type'] = 'ol';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Field: Your Photos (field_user_your_photos:fid) */
  $handler->display->display_options['filters']['field_user_your_photos_fid']['id'] = 'field_user_your_photos_fid';
  $handler->display->display_options['filters']['field_user_your_photos_fid']['table'] = 'field_data_field_user_your_photos';
  $handler->display->display_options['filters']['field_user_your_photos_fid']['field'] = 'field_user_your_photos_fid';
  $handler->display->display_options['filters']['field_user_your_photos_fid']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );
  $export['user_photos_d7'] = $view;

  $view = new view();
  $view->name = 'user_profile_information';
  $view->description = 'User Profile Information';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'User Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: User Photo */
  $handler->display->display_options['fields']['field_user_photo']['id'] = 'field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['table'] = 'field_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['field'] = 'field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_user_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_photo']['type'] = 'lightbox2';
  $handler->display->display_options['fields']['field_user_photo']['settings'] = array(
    'type' => 'lightbox',
    'image_style' => 'thumbnail',
    'lightbox_style' => '0',
    'caption' => 'hidden',
  );
  /* Field: Field: Your Age Range */
  $handler->display->display_options['fields']['field_user_age_range']['id'] = 'field_user_age_range';
  $handler->display->display_options['fields']['field_user_age_range']['table'] = 'field_data_field_user_age_range';
  $handler->display->display_options['fields']['field_user_age_range']['field'] = 'field_user_age_range';
  $handler->display->display_options['fields']['field_user_age_range']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_user_age_range']['label'] = 'Age Range';
  /* Field: Member Since */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = 'Member Since';
  $handler->display->display_options['fields']['created']['label'] = 'Member Since';
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['name']['validate_options']['code'] = '$newarg = html_entity_decode($argument, ENT_QUOTES);
$handler->argument = $newarg;
return TRUE;';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: Basic User Info Pane */
  $handler = $view->new_display('panel_pane', 'Basic User Info Pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'name' => array(
      'type' => 'context',
      'context' => 'entity:user.name',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Name',
    ),
  );
  $export['user_profile_information'] = $view;

  $view = new view();
  $view->name = 'user_recommendations';
  $view->description = 'User Recommendations';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'User Recommendations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Text area';
  $handler->display->display_options['header']['area']['content'] = '<?php
  global $user;
  if (arg(1) != $user->uid)
  {
     if (user_access("create user_recommendation content"))
    {
      print("<p>Have you stayed with this member or hosted them on your property? <br><a href=\'/node/add/user-recommendation/");
      print(arg(1)); 
      print("\'>Add a recommendation for this member</a></p>");
    }
    else
    {
      if ($user->uid == 0)
      {
        print("<p>You must <a href=\'/user\'> log in</a> to add a recommendation for this member </p>");
      }
      else
      {
        print("<p>You must become a <a href=\'/membership-products\'> full member</a> to add a recommendation for this member </p>");
      }
    }
  }
?>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Text area';
  $handler->display->display_options['footer']['area']['content'] = '<?php 
      $recUsername = db_query(\'SELECT name FROM {users} WHERE uid = :uid\', array(\':uid\' => arg(1)))->fetchField();
      print("<p><a href=\'/contact/report-abuse/Abusive Recommendation of $recUsername\'>Report abuse</a></p>");
?>';
  $handler->display->display_options['footer']['area']['format'] = '3';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Text area';
  $handler->display->display_options['empty']['area']['content'] = '<?php
  global $user;
  if (arg(1) != $user->uid)
  {
    print("There are currently no recommendations for this member.");
    if (user_access("create user_recommendation content"))
    {
      print("<p>Have you stayed with this member or hosted them on your property?<br><a href=\'/node/add/user-recommendation/");
      print(arg(1)); 
      print("\'>Add a recommendation for this member</a></p>");
    }
    else
    {
      if ($user->uid == 0)
      {
        print("<p>You must <a href=\'/user\'> log in</a> to add a recommendation for this member </p>");
      }
      else
      {
        print("<p>You must become a <a href=\'/membership-products\'> full member</a> to add a recommendation for this member </p>");
      }
    }
  }
  else
  {
    print("You currently have no user recommendations.");
  }
?>';
  $handler->display->display_options['empty']['area']['format'] = '3';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Recommended By';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Contextual filter: Content: Recommended Fellow Boondocker  (field_ur_fellow_boondocker) */
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['id'] = 'field_ur_fellow_boondocker_uid';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['table'] = 'field_data_field_ur_fellow_boondocker';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['field'] = 'field_ur_fellow_boondocker_uid';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ur_fellow_boondocker_uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_recommendation' => 'user_recommendation',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );

  /* Display: User Recommendations Pane */
  $handler = $view->new_display('panel_pane', 'User Recommendations Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all recommendations';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Recommended By';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_ur_fellow_boondocker_uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Recommended Fellow Boondocker  (field_ur_fellow_boondocker)',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Recommendations for %1';
  $handler->display->display_options['path'] = 'user-recommendations/%';
  $export['user_recommendations'] = $view;

  $view = new view();
  $view->name = 'view_users_with_filter_d7';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'View Users with Filter D7';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View Users with Filter D7';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    17 => '17',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'created' => 'created',
    'mail' => 'mail',
    'access' => 'access',
    'rid' => 'rid',
    'status' => 'status',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['label'] = 'Result count';
  $handler->display->display_options['header']['php']['php_output'] = '<h2>
<?php
  $view = views_get_current_view();
  print \'There are <b> \' . $view->total_rows . \'</b> users who fit this description\';
?>
</h2>
';
  /* Relationship: Flags: membership_expiring */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Membership Expiring';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'membership_expiring';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: boondocking_available */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'boondocking provided';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'boondocking_available';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Flags: purchased_membership */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'purchased membership';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'purchased_membership';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Role Expiry';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '      $expiration = db_query_range(\'select expiration from {uc_roles_expirations} where uid = :uid\', 0, 1, array(\':uid\' => $data->uid))->fetchField();
      return $expiration;
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
     if ($value)
     {
       $output = date("F dS, Y", $value) . "  ";
       echo $output;

     }
     else
     {
        echo "N/A";
     }
?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '1';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Has Membership Expiring Flag';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_1']['expose']['label'] = 'Has BDA Flagged';
  $handler->display->display_options['filters']['flagged_1']['expose']['operator'] = 'flagged_1_op';
  $handler->display->display_options['filters']['flagged_1']['expose']['identifier'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_2']['id'] = 'flagged_2';
  $handler->display->display_options['filters']['flagged_2']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged_2']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['filters']['flagged_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_2']['expose']['label'] = 'Has Purchased Membership Flag';
  $handler->display->display_options['filters']['flagged_2']['expose']['operator'] = 'flagged_2_op';
  $handler->display->display_options['filters']['flagged_2']['expose']['identifier'] = 'flagged_2';
  $handler->display->display_options['filters']['flagged_2']['expose']['remember_roles'] = array(
    2 => '2',
    19 => 0,
    11 => 0,
    1 => 0,
    7 => 0,
    18 => 0,
    16 => 0,
    21 => 0,
    3 => 0,
    15 => 0,
    8 => 0,
    13 => 0,
    20 => 0,
    6 => 0,
    10 => 0,
    17 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'showUserInfo2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'View Users with Filter D7';
  $export['view_users_with_filter_d7'] = $view;

  return $export;
}
