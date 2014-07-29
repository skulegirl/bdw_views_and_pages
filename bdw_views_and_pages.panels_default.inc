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
  $mini->admin_title = 'Boondocking Available';
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
  $display->layout = 'flexible';
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
        'width' => '61.30674924776219',
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
        'width' => '38.693250752237816',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1ffe8fc4-d06a-42b3-ab7a-fb2b8c8ad692';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-23f39461-23e9-480a-b662-fa6f73606df2';
    $pane->panel = 'center';
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
    $pane->uuid = '23f39461-23e9-480a-b662-fa6f73606df2';
    $display->content['new-23f39461-23e9-480a-b662-fa6f73606df2'] = $pane;
    $display->panels['center'][0] = 'new-23f39461-23e9-480a-b662-fa6f73606df2';
    $pane = new stdClass();
    $pane->pid = 'new-3f4a4867-e509-4dab-bf43-68347947f3c9';
    $pane->panel = 'center';
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
    $pane->uuid = '3f4a4867-e509-4dab-bf43-68347947f3c9';
    $display->content['new-3f4a4867-e509-4dab-bf43-68347947f3c9'] = $pane;
    $display->panels['center'][1] = 'new-3f4a4867-e509-4dab-bf43-68347947f3c9';
    $pane = new stdClass();
    $pane->pid = 'new-62fead6a-fe85-4a98-bee2-029c08b3eebd';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_ba_local_attractions';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_from_user_1',
      'override_title' => 0,
      'override_title_text' => 'Suggested Local Attractions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62fead6a-fe85-4a98-bee2-029c08b3eebd';
    $display->content['new-62fead6a-fe85-4a98-bee2-029c08b3eebd'] = $pane;
    $display->panels['center'][2] = 'new-62fead6a-fe85-4a98-bee2-029c08b3eebd';
    $pane = new stdClass();
    $pane->pid = 'new-b90421d3-38d3-4a62-90a8-f42a59cd1e8a';
    $pane->panel = 'right';
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
    $pane->uuid = 'b90421d3-38d3-4a62-90a8-f42a59cd1e8a';
    $display->content['new-b90421d3-38d3-4a62-90a8-f42a59cd1e8a'] = $pane;
    $display->panels['right'][0] = 'new-b90421d3-38d3-4a62-90a8-f42a59cd1e8a';
    $pane = new stdClass();
    $pane->pid = 'new-1e08882a-6dfb-430f-8612-577ad658f0bc';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'user_bda_photos_d7';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e08882a-6dfb-430f-8612-577ad658f0bc';
    $display->content['new-1e08882a-6dfb-430f-8612-577ad658f0bc'] = $pane;
    $display->panels['right'][1] = 'new-1e08882a-6dfb-430f-8612-577ad658f0bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['boondocking_available'] = $mini;

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
  $display->uuid = 'afa9dc05-b384-4b6b-98f1-ae2bf0491d9f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b0cb99cf-9c09-42b5-beab-36483bed569f';
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
    $pane->uuid = 'b0cb99cf-9c09-42b5-beab-36483bed569f';
    $display->content['new-b0cb99cf-9c09-42b5-beab-36483bed569f'] = $pane;
    $display->panels['middle'][0] = 'new-b0cb99cf-9c09-42b5-beab-36483bed569f';
    $pane = new stdClass();
    $pane->pid = 'new-f07e7d25-34b0-4a36-83ce-886d81d18be9';
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
    $pane->uuid = 'f07e7d25-34b0-4a36-83ce-886d81d18be9';
    $display->content['new-f07e7d25-34b0-4a36-83ce-886d81d18be9'] = $pane;
    $display->panels['middle'][1] = 'new-f07e7d25-34b0-4a36-83ce-886d81d18be9';
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
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '62.060907583295645',
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
      1 => array(
        'type' => 'column',
        'width' => '37.939092416704355',
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
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fdda013e-3df1-45cc-984c-324b959f3659';
  $display->content = array();
  $display->panels = array();
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
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'df1aeae4-7c06-4bc5-9872-c735e15b819a';
    $display->content['new-df1aeae4-7c06-4bc5-9872-c735e15b819a'] = $pane;
    $display->panels['center'][0] = 'new-df1aeae4-7c06-4bc5-9872-c735e15b819a';
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
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'd1f26d9a-04f0-4d98-8020-d9c94a053369';
    $display->content['new-d1f26d9a-04f0-4d98-8020-d9c94a053369'] = $pane;
    $display->panels['center'][1] = 'new-d1f26d9a-04f0-4d98-8020-d9c94a053369';
    $pane = new stdClass();
    $pane->pid = 'new-3821e639-1442-47c2-af39-721580c714f0';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mail Icon',
      'title' => '',
      'body' => '<img src=\'/sites/all/themes/drivewaysurfing/images/mail-1-small-on-grey.jpg\' height="75px">',
      'format' => '2',
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
    $display->panels['right'][0] = 'new-3821e639-1442-47c2-af39-721580c714f0';
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
    ),
  );
  $display->cache = array();
  $display->title = 'About %user:name';
  $display->uuid = '066ac970-6c23-48aa-86df-20b1e487096c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79af1c76-7b2c-428e-a125-15e319972e87';
    $pane->panel = 'bottom';
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
    $pane->uuid = '79af1c76-7b2c-428e-a125-15e319972e87';
    $display->content['new-79af1c76-7b2c-428e-a125-15e319972e87'] = $pane;
    $display->panels['bottom'][0] = 'new-79af1c76-7b2c-428e-a125-15e319972e87';
    $pane = new stdClass();
    $pane->pid = 'new-24edc0a1-46bd-4eb9-93e0-9e38e9672476';
    $pane->panel = 'bottom';
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
    $pane->uuid = '24edc0a1-46bd-4eb9-93e0-9e38e9672476';
    $display->content['new-24edc0a1-46bd-4eb9-93e0-9e38e9672476'] = $pane;
    $display->panels['bottom'][1] = 'new-24edc0a1-46bd-4eb9-93e0-9e38e9672476';
    $pane = new stdClass();
    $pane->pid = 'new-a80e70b4-1712-4465-87f2-fa89cb2d8aba';
    $pane->panel = 'bottom';
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
    $pane->uuid = 'a80e70b4-1712-4465-87f2-fa89cb2d8aba';
    $display->content['new-a80e70b4-1712-4465-87f2-fa89cb2d8aba'] = $pane;
    $display->panels['bottom'][2] = 'new-a80e70b4-1712-4465-87f2-fa89cb2d8aba';
    $pane = new stdClass();
    $pane->pid = 'new-d18b7d47-62fc-44a4-800b-9af1fd906233';
    $pane->panel = 'center';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd18b7d47-62fc-44a4-800b-9af1fd906233';
    $display->content['new-d18b7d47-62fc-44a4-800b-9af1fd906233'] = $pane;
    $display->panels['center'][0] = 'new-d18b7d47-62fc-44a4-800b-9af1fd906233';
    $pane = new stdClass();
    $pane->pid = 'new-dc1c1e97-c53d-4021-bfc6-6d9a500e38cc';
    $pane->panel = 'center';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dc1c1e97-c53d-4021-bfc6-6d9a500e38cc';
    $display->content['new-dc1c1e97-c53d-4021-bfc6-6d9a500e38cc'] = $pane;
    $display->panels['center'][1] = 'new-dc1c1e97-c53d-4021-bfc6-6d9a500e38cc';
    $pane = new stdClass();
    $pane->pid = 'new-24925f5c-ebdd-46b5-9469-5cc696f97743';
    $pane->panel = 'left';
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
    $pane->uuid = '24925f5c-ebdd-46b5-9469-5cc696f97743';
    $display->content['new-24925f5c-ebdd-46b5-9469-5cc696f97743'] = $pane;
    $display->panels['left'][0] = 'new-24925f5c-ebdd-46b5-9469-5cc696f97743';
    $pane = new stdClass();
    $pane->pid = 'new-179de3e6-4905-4c52-b36a-de22ea03be1f';
    $pane->panel = 'left';
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
    $pane->uuid = '179de3e6-4905-4c52-b36a-de22ea03be1f';
    $display->content['new-179de3e6-4905-4c52-b36a-de22ea03be1f'] = $pane;
    $display->panels['left'][1] = 'new-179de3e6-4905-4c52-b36a-de22ea03be1f';
    $pane = new stdClass();
    $pane->pid = 'new-88382e0c-5d42-4bc0-9885-940ba35b423f';
    $pane->panel = 'left';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '88382e0c-5d42-4bc0-9885-940ba35b423f';
    $display->content['new-88382e0c-5d42-4bc0-9885-940ba35b423f'] = $pane;
    $display->panels['left'][2] = 'new-88382e0c-5d42-4bc0-9885-940ba35b423f';
    $pane = new stdClass();
    $pane->pid = 'new-acb75c1b-a758-442f-93cc-1089cee93fff';
    $pane->panel = 'right';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb75c1b-a758-442f-93cc-1089cee93fff';
    $display->content['new-acb75c1b-a758-442f-93cc-1089cee93fff'] = $pane;
    $display->panels['right'][0] = 'new-acb75c1b-a758-442f-93cc-1089cee93fff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['user_about'] = $mini;

  return $export;
}
