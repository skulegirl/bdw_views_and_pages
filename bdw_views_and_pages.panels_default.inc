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
  $display->uuid = '1e67a173-d92c-4c80-bc05-db427c79a512';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86b0561b-30c6-497e-abf1-f3bf4fa89e28';
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
    $pane->uuid = '86b0561b-30c6-497e-abf1-f3bf4fa89e28';
    $display->content['new-86b0561b-30c6-497e-abf1-f3bf4fa89e28'] = $pane;
    $display->panels['center'][0] = 'new-86b0561b-30c6-497e-abf1-f3bf4fa89e28';
    $pane = new stdClass();
    $pane->pid = 'new-5e7c5553-29b3-49c5-9d2f-85789a085e3e';
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
    $pane->uuid = '5e7c5553-29b3-49c5-9d2f-85789a085e3e';
    $display->content['new-5e7c5553-29b3-49c5-9d2f-85789a085e3e'] = $pane;
    $display->panels['center'][1] = 'new-5e7c5553-29b3-49c5-9d2f-85789a085e3e';
    $pane = new stdClass();
    $pane->pid = 'new-8e7adbc5-1aa6-4a92-b4af-28a64720d968';
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
    $pane->uuid = '8e7adbc5-1aa6-4a92-b4af-28a64720d968';
    $display->content['new-8e7adbc5-1aa6-4a92-b4af-28a64720d968'] = $pane;
    $display->panels['center'][2] = 'new-8e7adbc5-1aa6-4a92-b4af-28a64720d968';
    $pane = new stdClass();
    $pane->pid = 'new-2727ef57-7dd2-453a-8fd4-315592cfefcc';
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
    $pane->uuid = '2727ef57-7dd2-453a-8fd4-315592cfefcc';
    $display->content['new-2727ef57-7dd2-453a-8fd4-315592cfefcc'] = $pane;
    $display->panels['right'][0] = 'new-2727ef57-7dd2-453a-8fd4-315592cfefcc';
    $pane = new stdClass();
    $pane->pid = 'new-a80c0890-b612-440a-a28d-fe899e35f170';
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
    $pane->uuid = 'a80c0890-b612-440a-a28d-fe899e35f170';
    $display->content['new-a80c0890-b612-440a-a28d-fe899e35f170'] = $pane;
    $display->panels['right'][1] = 'new-a80c0890-b612-440a-a28d-fe899e35f170';
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
  $display->uuid = 'b43e7ad6-90fc-4fbd-8a14-03dc93c0af67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-615fa776-162b-4c7f-af1e-e1c42111b4cc';
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
    $pane->uuid = '615fa776-162b-4c7f-af1e-e1c42111b4cc';
    $display->content['new-615fa776-162b-4c7f-af1e-e1c42111b4cc'] = $pane;
    $display->panels['middle'][0] = 'new-615fa776-162b-4c7f-af1e-e1c42111b4cc';
    $pane = new stdClass();
    $pane->pid = 'new-f538e784-9fbd-4efc-85e4-427f07a570f7';
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
    $pane->uuid = 'f538e784-9fbd-4efc-85e4-427f07a570f7';
    $display->content['new-f538e784-9fbd-4efc-85e4-427f07a570f7'] = $pane;
    $display->panels['middle'][1] = 'new-f538e784-9fbd-4efc-85e4-427f07a570f7';
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
  $display->uuid = 'e60e580b-fb15-4dc0-9f8e-f671e158cdfe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2598c52e-56e2-4eb6-9441-891652555682';
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
    $pane->uuid = '2598c52e-56e2-4eb6-9441-891652555682';
    $display->content['new-2598c52e-56e2-4eb6-9441-891652555682'] = $pane;
    $display->panels['bottom'][0] = 'new-2598c52e-56e2-4eb6-9441-891652555682';
    $pane = new stdClass();
    $pane->pid = 'new-2d4fa268-e1b3-4cee-814f-bb5b1a29f314';
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
    $pane->uuid = '2d4fa268-e1b3-4cee-814f-bb5b1a29f314';
    $display->content['new-2d4fa268-e1b3-4cee-814f-bb5b1a29f314'] = $pane;
    $display->panels['bottom'][1] = 'new-2d4fa268-e1b3-4cee-814f-bb5b1a29f314';
    $pane = new stdClass();
    $pane->pid = 'new-085e08c3-3411-4b19-8906-56435e6f2bae';
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
    $pane->uuid = '085e08c3-3411-4b19-8906-56435e6f2bae';
    $display->content['new-085e08c3-3411-4b19-8906-56435e6f2bae'] = $pane;
    $display->panels['bottom'][2] = 'new-085e08c3-3411-4b19-8906-56435e6f2bae';
    $pane = new stdClass();
    $pane->pid = 'new-e77bdf0b-9143-4ed5-994a-8bc2761cc35e';
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
    $pane->uuid = 'e77bdf0b-9143-4ed5-994a-8bc2761cc35e';
    $display->content['new-e77bdf0b-9143-4ed5-994a-8bc2761cc35e'] = $pane;
    $display->panels['center'][0] = 'new-e77bdf0b-9143-4ed5-994a-8bc2761cc35e';
    $pane = new stdClass();
    $pane->pid = 'new-0db9791f-857c-4e21-81da-7f70aeec28c7';
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
    $pane->uuid = '0db9791f-857c-4e21-81da-7f70aeec28c7';
    $display->content['new-0db9791f-857c-4e21-81da-7f70aeec28c7'] = $pane;
    $display->panels['center'][1] = 'new-0db9791f-857c-4e21-81da-7f70aeec28c7';
    $pane = new stdClass();
    $pane->pid = 'new-13f21ee5-e04f-48ef-bb97-7a41d7780229';
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
    $pane->uuid = '13f21ee5-e04f-48ef-bb97-7a41d7780229';
    $display->content['new-13f21ee5-e04f-48ef-bb97-7a41d7780229'] = $pane;
    $display->panels['left'][0] = 'new-13f21ee5-e04f-48ef-bb97-7a41d7780229';
    $pane = new stdClass();
    $pane->pid = 'new-1a283934-7344-46c3-abd4-402dfb5d8ee5';
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
    $pane->uuid = '1a283934-7344-46c3-abd4-402dfb5d8ee5';
    $display->content['new-1a283934-7344-46c3-abd4-402dfb5d8ee5'] = $pane;
    $display->panels['left'][1] = 'new-1a283934-7344-46c3-abd4-402dfb5d8ee5';
    $pane = new stdClass();
    $pane->pid = 'new-d5534a8e-d315-4632-a1c4-63a763714ffb';
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
    $pane->uuid = 'd5534a8e-d315-4632-a1c4-63a763714ffb';
    $display->content['new-d5534a8e-d315-4632-a1c4-63a763714ffb'] = $pane;
    $display->panels['left'][2] = 'new-d5534a8e-d315-4632-a1c4-63a763714ffb';
    $pane = new stdClass();
    $pane->pid = 'new-ab3d24bb-aeb0-48ef-ad95-c82ee63a4b86';
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
    $pane->uuid = 'ab3d24bb-aeb0-48ef-ad95-c82ee63a4b86';
    $display->content['new-ab3d24bb-aeb0-48ef-ad95-c82ee63a4b86'] = $pane;
    $display->panels['right'][0] = 'new-ab3d24bb-aeb0-48ef-ad95-c82ee63a4b86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['user_about'] = $mini;

  return $export;
}
