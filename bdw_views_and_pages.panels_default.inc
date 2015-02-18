<?php
/**
 * @file
 * bdw_views_and_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bdw_views_and_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'bda_map_panel';
  $mini->category = '';
  $mini->admin_title = 'Current Boondocking Locations Map';
  $mini->admin_description = 'Panel with current boondocking locations and a call to action';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '305931e6-29a6-44d4-86f6-2b92cbffb697';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a1b1912-87ee-4464-9b05-4f66827ae6be';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php
module_load_include(\'inc\', \'BDW_custom_changes\');
print \'<h3>\'.BDW_custom_changes_GetBDACount().\' free overnight RV parking locations available ... and counting!</h3>\';
?>
<a href="/SearchListingsLinks" title="Search the Boondocking Listings"><img src="/sites/boondockerswelcome.com/files/media/HomePageImages/currentMap.png" alt="Map of Boondocking Listings" width="535px"/></a>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '9a1b1912-87ee-4464-9b05-4f66827ae6be';
    $display->content['new-9a1b1912-87ee-4464-9b05-4f66827ae6be'] = $pane;
    $display->panels['center'][0] = 'new-9a1b1912-87ee-4464-9b05-4f66827ae6be';
    $pane = new stdClass();
    $pane->pid = 'new-71d8e055-5acf-4006-9d2b-d75b6dc15aae';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'showAllUsers-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '71d8e055-5acf-4006-9d2b-d75b6dc15aae';
    $display->content['new-71d8e055-5acf-4006-9d2b-d75b6dc15aae'] = $pane;
    $display->panels['center'][1] = 'new-71d8e055-5acf-4006-9d2b-d75b6dc15aae';
    $pane = new stdClass();
    $pane->pid = 'new-2ef2ce26-fb2e-43e8-a835-5d0e92996237';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'join now text and button',
      'title' => '',
      'body' => 'Take advantage of this huge network of boondocking locations.<br>
<table class="map-panel-buttons" width="100%">
<tr>
<td align="center"><a href="http://www.boondockerswelcome.com/SearchListingsLinks" class="search-button">Find Boondocking</a></td>
<td align="center"><div class="map-join-button"><a href="http://www.boondockerswelcome.com/membership-products" class="join-now-button">Join Now</a></div></td>
</tr>
<tr>
<td align="center" colspan="2"><a href="http://www.boondockerswelcome.com/take-the-tour" class="tour-button">Take the Tour</a></td>
</tr>
</table>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '2ef2ce26-fb2e-43e8-a835-5d0e92996237';
    $display->content['new-2ef2ce26-fb2e-43e8-a835-5d0e92996237'] = $pane;
    $display->panels['center'][2] = 'new-2ef2ce26-fb2e-43e8-a835-5d0e92996237';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-71d8e055-5acf-4006-9d2b-d75b6dc15aae';
  $mini->display = $display;
  $export['bda_map_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'boondocking_available';
  $mini->category = '';
  $mini->admin_title = 'Boondocking Available Sub-1';
  $mini->admin_description = 'Boondocking Available info that appears on a user\'s page.';
  $mini->requiredcontexts = array(
    1 => array(
      'name' => 'user',
      'id' => 1,
      'identifier' => 'User',
      'keyword' => 'user',
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'BDA from user',
      'keyword' => 'bda_info',
      'name' => 'profile2_from_user',
      'type' => 'boondocking_available',
      'context' => 'requiredcontext_user_1',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'User Profile from user',
      'keyword' => 'user_profile',
      'name' => 'profile2_from_user',
      'type' => 'profile',
      'context' => 'requiredcontext_user_1',
      'id' => 2,
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '62.6677604420737',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'column',
        'width' => '37.3322395579263',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd2f73e85-efbe-4470-a185-44ecb3bc9c3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70eb0bda-dd39-442d-a55d-70a224338111';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_boondock_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'location_all',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 1,
      'override_title_text' => 'Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70eb0bda-dd39-442d-a55d-70a224338111';
    $display->content['new-70eb0bda-dd39-442d-a55d-70a224338111'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-70eb0bda-dd39-442d-a55d-70a224338111';
    $pane = new stdClass();
    $pane->pid = 'new-7bdf73fc-f961-4209-81c4-75dacf4c1c4d';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Location Fine Print',
      'title' => '',
      'body' => '<p><div class=\'fine-print\'>Note: All host locations have been generalized for members\' security. <a href="/faq-page#t34n7254">See our FAQ for more details.</a></div></p>',
      'format' => '5',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7bdf73fc-f961-4209-81c4-75dacf4c1c4d';
    $display->content['new-7bdf73fc-f961-4209-81c4-75dacf4c1c4d'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-7bdf73fc-f961-4209-81c4-75dacf4c1c4d';
    $pane = new stdClass();
    $pane->pid = 'new-c3172940-d362-4990-aade-c38f4df68bc1';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'bda_details_d7-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3172940-d362-4990-aade-c38f4df68bc1';
    $display->content['new-c3172940-d362-4990-aade-c38f4df68bc1'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-c3172940-d362-4990-aade-c38f4df68bc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['boondocking_available'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'boondocking_available_2';
  $mini->category = '';
  $mini->admin_title = 'Boondocking Available Sub-2';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'bda profile',
      'keyword' => 'profile2_bda',
      'name' => 'profile2_from_user',
      'type' => 'boondocking_available',
      'context' => 'requiredcontext_user_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5cbfcf01-74a2-45aa-9db8-431bcb80e658';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0af54800-ba6f-4b1b-a108-fe620128f970';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_ba_availability';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0af54800-ba6f-4b1b-a108-fe620128f970';
    $display->content['new-0af54800-ba6f-4b1b-a108-fe620128f970'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-0af54800-ba6f-4b1b-a108-fe620128f970';
    $pane = new stdClass();
    $pane->pid = 'new-23274744-9344-4c21-8ef4-5ba273991d12';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_ba_access_road_conditions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23274744-9344-4c21-8ef4-5ba273991d12';
    $display->content['new-23274744-9344-4c21-8ef4-5ba273991d12'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-23274744-9344-4c21-8ef4-5ba273991d12';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0af54800-ba6f-4b1b-a108-fe620128f970';
  $mini->display = $display;
  $export['boondocking_available_2'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'boondocking_available_parent';
  $mini->category = '';
  $mini->admin_title = 'Boondocking Available Parent';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    2 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'BDA profile from user',
      'keyword' => 'profile2_BDA',
      'name' => 'profile2_from_user',
      'type' => 'boondocking_available',
      'context' => 'requiredcontext_user_1',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'user profile ',
      'keyword' => 'profile2_user',
      'name' => 'profile2_from_user',
      'type' => 'profile',
      'context' => 'requiredcontext_user_1',
      'id' => 2,
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e218ed91-56c6-43c8-b33b-0129a7086d95';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a38537f6-6de5-4e35-bdda-14f56554b3a1';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'boondocking_available';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a38537f6-6de5-4e35-bdda-14f56554b3a1';
    $display->content['new-a38537f6-6de5-4e35-bdda-14f56554b3a1'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-a38537f6-6de5-4e35-bdda-14f56554b3a1';
    $pane = new stdClass();
    $pane->pid = 'new-9dcd351f-f887-4c09-b5bc-bccbdb08a267';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'boondocking_available_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9dcd351f-f887-4c09-b5bc-bccbdb08a267';
    $display->content['new-9dcd351f-f887-4c09-b5bc-bccbdb08a267'] = $pane;
    $display->panels['two_66_33_top'][1] = 'new-9dcd351f-f887-4c09-b5bc-bccbdb08a267';
    $pane = new stdClass();
    $pane->pid = 'new-7590bf4b-4934-4665-aa9a-2db06964f3b0';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'boondocking_available_sub_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7590bf4b-4934-4665-aa9a-2db06964f3b0';
    $display->content['new-7590bf4b-4934-4665-aa9a-2db06964f3b0'] = $pane;
    $display->panels['two_66_33_top'][2] = 'new-7590bf4b-4934-4665-aa9a-2db06964f3b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9dcd351f-f887-4c09-b5bc-bccbdb08a267';
  $mini->display = $display;
  $export['boondocking_available_parent'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'boondocking_available_sub_3';
  $mini->category = '';
  $mini->admin_title = 'Boondocking Available Sub-3';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'user bda',
      'keyword' => 'profile2_bda',
      'name' => 'profile2_from_user',
      'type' => 'boondocking_available',
      'context' => 'requiredcontext_user_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '18a84eee-2c64-45b7-9049-353447cada0c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6aabb91d-1210-4948-97bc-750bd5ac9554';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_ba_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 1,
      'override_title_text' => 'Site Description',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6aabb91d-1210-4948-97bc-750bd5ac9554';
    $display->content['new-6aabb91d-1210-4948-97bc-750bd5ac9554'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-6aabb91d-1210-4948-97bc-750bd5ac9554';
    $pane = new stdClass();
    $pane->pid = 'new-2de08fa1-0c2b-4013-90f4-ae37d4dee304';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_ba_local_attractions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2de08fa1-0c2b-4013-90f4-ae37d4dee304';
    $display->content['new-2de08fa1-0c2b-4013-90f4-ae37d4dee304'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-2de08fa1-0c2b-4013-90f4-ae37d4dee304';
    $pane = new stdClass();
    $pane->pid = 'new-fefb1f85-a512-4490-8837-14bc758bfca1';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views';
    $pane->subtype = 'user_bda_photos_d7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'requiredcontext_user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fefb1f85-a512-4490-8837-14bc758bfca1';
    $display->content['new-fefb1f85-a512-4490-8837-14bc758bfca1'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-fefb1f85-a512-4490-8837-14bc758bfca1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6aabb91d-1210-4948-97bc-750bd5ac9554';
  $mini->display = $display;
  $export['boondocking_available_sub_3'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact_user';
  $mini->category = '';
  $mini->admin_title = 'Contact This User';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = FALSE;
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cf4ec3be-3057-4fd3-b4cb-d90acdfe380b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa1c867a-6483-4c4d-99c4-ea09ee2a1c19';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'write privatemsg',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'send_message',
      'title' => '',
      'body' => '<?php

 $user=user_load(arg(1));
 if ($user)
 {
   $uid=$user->uid;
   $username=$user->name;
   print("<p><a href=\'/messages/new/");
   print($uid);
   print("\'>Send ");
   print($username);
   print(" a message</a></p>");
 }
?>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fa1c867a-6483-4c4d-99c4-ea09ee2a1c19';
    $display->content['new-fa1c867a-6483-4c4d-99c4-ea09ee2a1c19'] = $pane;
    $display->panels['middle'][0] = 'new-fa1c867a-6483-4c4d-99c4-ea09ee2a1c19';
    $pane = new stdClass();
    $pane->pid = 'new-ffbdb8bf-a979-4eac-b6ac-db760b19d7ca';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'become a full member to contact user',
      'title' => '',
      'body' => '<?php
 $user=user_load(arg(1));
 if ($user)
 {
   $uid=$user->uid;
   $username=$user->name;
   print("<p>Become a <a href=\'/membership-products\'> full member</a> and you can send ");
   print($username);
   print(" a message</p>");
 }
',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'ffbdb8bf-a979-4eac-b6ac-db760b19d7ca';
    $display->content['new-ffbdb8bf-a979-4eac-b6ac-db760b19d7ca'] = $pane;
    $display->panels['middle'][1] = 'new-ffbdb8bf-a979-4eac-b6ac-db760b19d7ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['contact_user'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'messages';
  $mini->category = '';
  $mini->admin_title = 'Messages';
  $mini->admin_description = '';
  $mini->requiredcontexts = FALSE;
  $mini->contexts = FALSE;
  $mini->relationships = FALSE;
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'center' => NULL,
    ),
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fdda013e-3df1-45cc-984c-324b959f3659';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3821e639-1442-47c2-af39-721580c714f0';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mail Icon',
      'title' => '',
      'body' => '<img src=\'/sites/boondockerswelcome.com/files/media/iconsets/misc/mail-1-100w.png\'>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '3821e639-1442-47c2-af39-721580c714f0';
    $display->content['new-3821e639-1442-47c2-af39-721580c714f0'] = $pane;
    $display->panels['center'][0] = 'new-3821e639-1442-47c2-af39-721580c714f0';
    $pane = new stdClass();
    $pane->pid = 'new-df1aeae4-7c06-4bc5-9872-c735e15b819a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'privatemsg-privatemsg-new';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'df1aeae4-7c06-4bc5-9872-c735e15b819a';
    $display->content['new-df1aeae4-7c06-4bc5-9872-c735e15b819a'] = $pane;
    $display->panels['center'][1] = 'new-df1aeae4-7c06-4bc5-9872-c735e15b819a';
    $pane = new stdClass();
    $pane->pid = 'new-d1f26d9a-04f0-4d98-8020-d9c94a053369';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'privatemsg-privatemsg-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'd1f26d9a-04f0-4d98-8020-d9c94a053369';
    $display->content['new-d1f26d9a-04f0-4d98-8020-d9c94a053369'] = $pane;
    $display->panels['center'][2] = 'new-d1f26d9a-04f0-4d98-8020-d9c94a053369';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['messages'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'my_rig';
  $mini->category = '';
  $mini->admin_title = 'My/Our Rig';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'name' => 'node',
      'id' => 1,
      'identifier' => 'Node',
      'keyword' => 'node',
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:author-name\'s Rig';
  $display->uuid = '08b779e7-1962-401d-a90a-9776ada6fde0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-704c77b9-7e72-43b4-b2fe-907de5517c81';
    $pane->panel = 'center';
    $pane->type = 'content_field';
    $pane->subtype = 'field_user_your_rig';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'requiredcontext_node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '704c77b9-7e72-43b4-b2fe-907de5517c81';
    $display->content['new-704c77b9-7e72-43b4-b2fe-907de5517c81'] = $pane;
    $display->panels['center'][0] = 'new-704c77b9-7e72-43b4-b2fe-907de5517c81';
    $pane = new stdClass();
    $pane->pid = 'new-08a62a0b-bfe3-49a6-9e1f-8b4534530ee4';
    $pane->panel = 'center';
    $pane->type = 'content_field';
    $pane->subtype = 'field_user_your_rig_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'user_photo_thumbnail_imagelink',
      'context' => 'requiredcontext_node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '08a62a0b-bfe3-49a6-9e1f-8b4534530ee4';
    $display->content['new-08a62a0b-bfe3-49a6-9e1f-8b4534530ee4'] = $pane;
    $display->panels['center'][1] = 'new-08a62a0b-bfe3-49a6-9e1f-8b4534530ee4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['my_rig'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'user_about';
  $mini->category = '';
  $mini->admin_title = 'All About This Boondocker';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'name' => 'user',
      'id' => 1,
      'identifier' => 'User',
      'keyword' => 'user',
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Profile2 from user - Content Profile',
      'keyword' => 'profile2_contentProfile',
      'name' => 'profile2_from_user',
      'type' => 'profile',
      'context' => 'requiredcontext_user_1',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Profile2 from user - BDA',
      'keyword' => 'profile2_bda',
      'name' => 'profile2_from_user',
      'type' => 'boondocking_available',
      'context' => 'requiredcontext_user_1',
      'id' => 2,
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array(
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
          2 => 6,
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '2',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '3',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About %user:name';
  $display->uuid = '55d80b49-3b61-4ff6-b7f6-921b6862ff0d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bad63d7a-6ea0-4918-ba2e-e685e12ea611';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_hometown';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bad63d7a-6ea0-4918-ba2e-e685e12ea611';
    $display->content['new-bad63d7a-6ea0-4918-ba2e-e685e12ea611'] = $pane;
    $display->panels['two_66_33_bottom'][0] = 'new-bad63d7a-6ea0-4918-ba2e-e685e12ea611';
    $pane = new stdClass();
    $pane->pid = 'new-6c84a90a-3668-40ce-88c8-1a01e7490644';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_skills_to_share';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_schema:uid-user-profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6c84a90a-3668-40ce-88c8-1a01e7490644';
    $display->content['new-6c84a90a-3668-40ce-88c8-1a01e7490644'] = $pane;
    $display->panels['two_66_33_bottom'][1] = 'new-6c84a90a-3668-40ce-88c8-1a01e7490644';
    $pane = new stdClass();
    $pane->pid = 'new-6bcc1e0f-14c8-4f8f-b57f-59195d3ae3a6';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_ba_why_no_bda';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:profile2:boondocking_available:field_ba_bda_pref',
          'settings' => array(
            'field_ba_bda_pref' => array(
              'und' => array(
                0 => array(
                  'value' => '1',
                ),
              ),
            ),
            'field_ba_bda_pref_value' => '1',
          ),
          'context' => 'relationship_profile2_from_user_2',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_2',
      'override_title' => 1,
      'override_title_text' => 'Why I can\'t offer a boondocking location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6bcc1e0f-14c8-4f8f-b57f-59195d3ae3a6';
    $display->content['new-6bcc1e0f-14c8-4f8f-b57f-59195d3ae3a6'] = $pane;
    $display->panels['two_66_33_bottom'][2] = 'new-6bcc1e0f-14c8-4f8f-b57f-59195d3ae3a6';
    $pane = new stdClass();
    $pane->pid = 'new-7199daf4-ba4d-4bd8-a76b-3f62d052644a';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_user_fav_boond_locs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7199daf4-ba4d-4bd8-a76b-3f62d052644a';
    $display->content['new-7199daf4-ba4d-4bd8-a76b-3f62d052644a'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-7199daf4-ba4d-4bd8-a76b-3f62d052644a';
    $pane = new stdClass();
    $pane->pid = 'new-04ce1f91-e6c0-4923-8b78-e2d469bdb3d1';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_user_your_pets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '04ce1f91-e6c0-4923-8b78-e2d469bdb3d1';
    $display->content['new-04ce1f91-e6c0-4923-8b78-e2d469bdb3d1'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-04ce1f91-e6c0-4923-8b78-e2d469bdb3d1';
    $pane = new stdClass();
    $pane->pid = 'new-821039c2-be1a-4eff-a984-38d6fa48339f';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'rig_view_d7-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '821039c2-be1a-4eff-a984-38d6fa48339f';
    $display->content['new-821039c2-be1a-4eff-a984-38d6fa48339f'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-821039c2-be1a-4eff-a984-38d6fa48339f';
    $pane = new stdClass();
    $pane->pid = 'new-d349dbf0-03ce-4ff9-908e-faf3b1b13826';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_photos_d7-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd349dbf0-03ce-4ff9-908e-faf3b1b13826';
    $display->content['new-d349dbf0-03ce-4ff9-908e-faf3b1b13826'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-d349dbf0-03ce-4ff9-908e-faf3b1b13826';
    $pane = new stdClass();
    $pane->pid = 'new-87ab7fb1-c580-4f60-b192-be5b060ef67d';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'views';
    $pane->subtype = 'group_memberships';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show if any memberships are checked.',
            'php' => 'module_load_include(\'inc\', \'BDW_custom_changes\');
return BDW_has_group_memberships($contexts[\'relationship_profile2_from_user_1\']->data);
',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'requiredcontext_user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87ab7fb1-c580-4f60-b192-be5b060ef67d';
    $display->content['new-87ab7fb1-c580-4f60-b192-be5b060ef67d'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-87ab7fb1-c580-4f60-b192-be5b060ef67d';
    $pane = new stdClass();
    $pane->pid = 'new-c378c5a5-5f61-44be-95cd-0c5e4327b953';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_user_headline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 1,
      'override_title_text' => 'In A Few Words...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c378c5a5-5f61-44be-95cd-0c5e4327b953';
    $display->content['new-c378c5a5-5f61-44be-95cd-0c5e4327b953'] = $pane;
    $display->panels['two_66_33_top'][1] = 'new-c378c5a5-5f61-44be-95cd-0c5e4327b953';
    $pane = new stdClass();
    $pane->pid = 'new-dd6d1e4d-e508-4e1b-875e-92da28a1c257';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_profile_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 1,
      'override_title_text' => 'A Little More Detail',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dd6d1e4d-e508-4e1b-875e-92da28a1c257';
    $display->content['new-dd6d1e4d-e508-4e1b-875e-92da28a1c257'] = $pane;
    $display->panels['two_66_33_top'][2] = 'new-dd6d1e4d-e508-4e1b-875e-92da28a1c257';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['user_about'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'user_recommendations_and_respons';
  $mini->category = '';
  $mini->admin_title = 'user recommendations and response time';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f51648a9-44f2-4249-916a-867da0b35aeb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0b02b4fb-7c09-4f4b-870f-8d12ccecc2d6';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_recommendations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b02b4fb-7c09-4f4b-870f-8d12ccecc2d6';
    $display->content['new-0b02b4fb-7c09-4f4b-870f-8d12ccecc2d6'] = $pane;
    $display->panels['two_66_33_bottom'][0] = 'new-0b02b4fb-7c09-4f4b-870f-8d12ccecc2d6';
    $pane = new stdClass();
    $pane->pid = 'new-313aa450-7d36-462f-b79a-c52d68382b45';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'User Recommendations',
      'body' => '<?php
  global $user;
  if (\'%user:uid\' != $user->uid)
  {
     if (user_access("create user_recommendation content"))
    {
      print("<p>Have you stayed with this member or hosted them on your property? <br><a href=\'/node/add/user-recommendation/%user:uid\'>Add a recommendation for this member</a></p>");
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
?>',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '313aa450-7d36-462f-b79a-c52d68382b45';
    $display->content['new-313aa450-7d36-462f-b79a-c52d68382b45'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-313aa450-7d36-462f-b79a-c52d68382b45';
    $pane = new stdClass();
    $pane->pid = 'new-01807a58-2b53-4a06-a06c-d44d31708e9a';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views';
    $pane->subtype = 'user_response_rate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'requiredcontext_user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01807a58-2b53-4a06-a06c-d44d31708e9a';
    $display->content['new-01807a58-2b53-4a06-a06c-d44d31708e9a'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-01807a58-2b53-4a06-a06c-d44d31708e9a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b02b4fb-7c09-4f4b-870f-8d12ccecc2d6';
  $mini->display = $display;
  $export['user_recommendations_and_respons'] = $mini;

  return $export;
}
