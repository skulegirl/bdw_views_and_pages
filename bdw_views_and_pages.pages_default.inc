<?php
/**
 * @file
 * bdw_views_and_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bdw_views_and_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'BDWNodeEditPanels',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'boondocking_available' => 'boondocking_available',
              'profile' => 'profile',
              'story' => 'story',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
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
          0 => 1,
          1 => 'main',
          2 => 2,
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
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c315ec6f-35db-4b97-a71f-2a1bcb02dae0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2699c05-37b3-42ce-9318-883888246bc9';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->locks = '';
    $pane->uuid = 'b2699c05-37b3-42ce-9318-883888246bc9';
    $display->content['new-b2699c05-37b3-42ce-9318-883888246bc9'] = $pane;
    $display->panels['center'][0] = 'new-b2699c05-37b3-42ce-9318-883888246bc9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b2699c05-37b3-42ce-9318-883888246bc9';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Product',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'BDWNodePanelContent',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
              'membership_level' => 'membership_level',
              'page' => 'page',
              'story' => 'story',
              'testimonial' => 'testimonial',
              'user_recommendation' => 'user_recommendation',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
          0 => 1,
          1 => 'main',
          2 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '100',
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
        'width' => '25',
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'center' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64b628fd-a3d1-4787-b257-b744cddc5743';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e5df6639-ab9c-4e39-a724-db1eac4efb04';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'page' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'context' => 'argument_nid_1',
      'build_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'e5df6639-ab9c-4e39-a724-db1eac4efb04';
    $display->content['new-e5df6639-ab9c-4e39-a724-db1eac4efb04'] = $pane;
    $display->panels['center'][0] = 'new-e5df6639-ab9c-4e39-a724-db1eac4efb04';
    $pane = new stdClass();
    $pane->pid = 'new-df35e226-b7a8-4f5b-920d-41989d8dbdb0';
    $pane->panel = 'center';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => 4,
      'order' => 1,
      'comments_per_page' => '50',
      'context' => 'argument_nid_1',
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
    $pane->locks = '';
    $pane->uuid = 'df35e226-b7a8-4f5b-920d-41989d8dbdb0';
    $display->content['new-df35e226-b7a8-4f5b-920d-41989d8dbdb0'] = $pane;
    $display->panels['center'][1] = 'new-df35e226-b7a8-4f5b-920d-41989d8dbdb0';
    $pane = new stdClass();
    $pane->pid = 'new-a25433f9-bd6a-481f-a310-b4304709e344';
    $pane->panel = 'center';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_nid_1',
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
    $pane->locks = '';
    $pane->uuid = 'a25433f9-bd6a-481f-a310-b4304709e344';
    $display->content['new-a25433f9-bd6a-481f-a310-b4304709e344'] = $pane;
    $display->panels['center'][2] = 'new-a25433f9-bd6a-481f-a310-b4304709e344';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-e5df6639-ab9c-4e39-a724-db1eac4efb04';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Free File Download',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'free_file_download' => 'free_file_download',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2e616865-4bbd-4480-958d-20b9bda08a03';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e110cf1e-8251-424e-9558-377d8a4653f2';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_nid_1',
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
    $pane->uuid = 'e110cf1e-8251-424e-9558-377d8a4653f2';
    $display->content['new-e110cf1e-8251-424e-9558-377d8a4653f2'] = $pane;
    $display->panels['middle'][0] = 'new-e110cf1e-8251-424e-9558-377d8a4653f2';
    $pane = new stdClass();
    $pane->pid = 'new-c61ab48f-e1ac-4644-9006-be3efa81058b';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_free_filename';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'download_count',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'Download the file here',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'c61ab48f-e1ac-4644-9006-be3efa81058b';
    $display->content['new-c61ab48f-e1ac-4644-9006-be3efa81058b'] = $pane;
    $display->panels['middle'][1] = 'new-c61ab48f-e1ac-4644-9006-be3efa81058b';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'NewsletterContent',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'NewsletterContent',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'simplenews' => 'simplenews',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
          0 => 1,
          1 => 'main',
          2 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '100',
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
        'width' => '25',
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'center' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '500f292e-be10-4dad-bef4-0ebd0ec25073';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3121255-a5d8-4781-b3a5-e050428ede3a';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'page' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'context' => 'argument_nid_1',
      'build_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'a3121255-a5d8-4781-b3a5-e050428ede3a';
    $display->content['new-a3121255-a5d8-4781-b3a5-e050428ede3a'] = $pane;
    $display->panels['center'][0] = 'new-a3121255-a5d8-4781-b3a5-e050428ede3a';
    $pane = new stdClass();
    $pane->pid = 'new-3489987c-2ca0-49ef-bc54-7b21a07c3d02';
    $pane->panel = 'center';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => 4,
      'order' => 1,
      'comments_per_page' => '50',
      'context' => 'argument_nid_1',
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
    $pane->locks = '';
    $pane->uuid = '3489987c-2ca0-49ef-bc54-7b21a07c3d02';
    $display->content['new-3489987c-2ca0-49ef-bc54-7b21a07c3d02'] = $pane;
    $display->panels['center'][1] = 'new-3489987c-2ca0-49ef-bc54-7b21a07c3d02';
    $pane = new stdClass();
    $pane->pid = 'new-514442a1-e69a-4ba2-900a-baa0d0be31cd';
    $pane->panel = 'center';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_nid_1',
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
    $pane->locks = '';
    $pane->uuid = '514442a1-e69a-4ba2-900a-baa0d0be31cd';
    $display->content['new-514442a1-e69a-4ba2-900a-baa0d0be31cd'] = $pane;
    $display->panels['center'][2] = 'new-514442a1-e69a-4ba2-900a-baa0d0be31cd';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-a3121255-a5d8-4781-b3a5-e050428ede3a';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Public User Profile ',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'LoggedInUser',
        'keyword' => 'logged_in_user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      1 => array(
        'identifier' => 'BDA info from user',
        'keyword' => 'bda_info',
        'name' => 'profile2_from_user',
        'type' => 'boondocking_available',
        'context' => 'argument_entity_id:user_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'user profile from user',
        'keyword' => 'user_profile',
        'name' => 'profile2_from_user',
        'type' => 'profile',
        'context' => 'argument_entity_id:user_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'context_user_1',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 17,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'pipeline' => 'standard',
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_info',
          1 => 'center',
          2 => 'rrr',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.84205504403897',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'user_info' => array(
        'type' => 'region',
        'title' => 'User Info',
        'width' => '135',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      'rrr' => array(
        'type' => 'region',
        'title' => 'rrr',
        'width' => '25.157944955961025',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center_',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'center',
        'width' => '100',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '220',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => '150',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'user_info' => array(
      'style' => '-1',
    ),
    'style' => 'default',
    'style_settings' => array(
      'center' => NULL,
      'user_info' => NULL,
      'rrr' => NULL,
      'left' => NULL,
      'center_' => NULL,
      'right' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name\'s Profile';
  $display->uuid = '20c8463b-5df4-48e2-a6f0-6feedb1a1d25';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1cafec78-a41d-4da3-ba98-a04282d74f6f';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'context_user_1',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 18,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Renew Your Membership!',
      'body' => '<a href="/membership-products">Renew your membership</a> to enable the ability to create or edit your profile, your boondocking locations, and to message other members.',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '1cafec78-a41d-4da3-ba98-a04282d74f6f';
    $display->content['new-1cafec78-a41d-4da3-ba98-a04282d74f6f'] = $pane;
    $display->panels['center_'][0] = 'new-1cafec78-a41d-4da3-ba98-a04282d74f6f';
    $pane = new stdClass();
    $pane->pid = 'new-033734e7-35c9-4631-8664-499095bfe575';
    $pane->panel = 'center_';
    $pane->type = 'panels_mini';
    $pane->subtype = 'boondocking_available';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Do not display if bda flag is not set',
            'php' => '$context = $contexts[\'argument_entity_id:user_1\'];
$uid = $context->data->uid;
$flag=flag_get_flag(\'boondocking_available\');
$has_bda = $flag->is_flagged($uid);
return $has_bda;',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'relationship_profile2_from_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Boondocking Available!',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '033734e7-35c9-4631-8664-499095bfe575';
    $display->content['new-033734e7-35c9-4631-8664-499095bfe575'] = $pane;
    $display->panels['center_'][1] = 'new-033734e7-35c9-4631-8664-499095bfe575';
    $pane = new stdClass();
    $pane->pid = 'new-12d59520-0e36-43e7-a871-e3e4a46b2096';
    $pane->panel = 'center_';
    $pane->type = 'panels_mini';
    $pane->subtype = 'user_about';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'relationship_profile2_from_user_2',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'About %user:name',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '12d59520-0e36-43e7-a871-e3e4a46b2096';
    $display->content['new-12d59520-0e36-43e7-a871-e3e4a46b2096'] = $pane;
    $display->panels['center_'][2] = 'new-12d59520-0e36-43e7-a871-e3e4a46b2096';
    $pane = new stdClass();
    $pane->pid = 'new-03e1e5f4-f1cb-47dd-b581-6df29ea298bc';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'relationship_profile2_from_user_2',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 13,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Your Profile Information!',
      'title' => '<a href="/user/%logged_in_user:uid/edit/profile">Add Your Profile Information!</a>',
      'body' => '<div style="text-transform:capitalize; display:inline">%logged_in_user:name</div>, you have not yet created a public user profile. <a href="/user/%logged_in_user:uid/edit/profile">Create one</a> now!',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '03e1e5f4-f1cb-47dd-b581-6df29ea298bc';
    $display->content['new-03e1e5f4-f1cb-47dd-b581-6df29ea298bc'] = $pane;
    $display->panels['center_'][3] = 'new-03e1e5f4-f1cb-47dd-b581-6df29ea298bc';
    $pane = new stdClass();
    $pane->pid = 'new-e274e9ed-6e9f-4236-b101-996fb3f7e32d';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 8,
              2 => 13,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => FALSE,
        ),
        4 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'relationship_profile2_from_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add a Valid Boondocking Location',
      'title' => '<a href="/user/%logged_in_user:uid/edit/boondocking_available">Add a Valid Boondocking Location</a>',
      'body' => '<div style="text-transform:capitalize; display:inline">%logged_in_user:name</div>, you have not yet entered information about a valid boondocking location that you have available for other users. <a href="/user/%logged_in_user:uid/edit/boondocking_available">Add your boondocking availability information</a> now!',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = 'e274e9ed-6e9f-4236-b101-996fb3f7e32d';
    $display->content['new-e274e9ed-6e9f-4236-b101-996fb3f7e32d'] = $pane;
    $display->panels['center_'][4] = 'new-e274e9ed-6e9f-4236-b101-996fb3f7e32d';
    $pane = new stdClass();
    $pane->pid = 'new-66928d63-3fd8-4f10-af5f-0fddfb3d95a0';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'relationship_profile2_from_user_2',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'relationship_entity_from_schema:uid-user-profile2_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'No profile available message',
      'title' => 'About %user:name',
      'body' => 'This user has not yet created a user profile.',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = '66928d63-3fd8-4f10-af5f-0fddfb3d95a0';
    $display->content['new-66928d63-3fd8-4f10-af5f-0fddfb3d95a0'] = $pane;
    $display->panels['center_'][5] = 'new-66928d63-3fd8-4f10-af5f-0fddfb3d95a0';
    $pane = new stdClass();
    $pane->pid = 'new-e301902b-1cc0-428b-8d03-0addf89821c6';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'relationship_profile2_from_user_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'context_user_1',
          ),
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 13,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => FALSE,
        ),
        4 => array(
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
          'context' => 'relationship_profile2_from_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Enable your boondocking available',
      'title' => '<a href="/user/%user:uid/profile/boondocking_available">Add A Boondocking Available Location</a>',
      'body' => '<div style="text-transform:capitalize; display:inline">%user:name</div>, you have currently indicated that you do not have any boondocking available to share. If you can, consider adding a location to your <a href="/user/%user:uid/edit/boondocking_available">boondocking availability profile</a>.
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
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = 'e301902b-1cc0-428b-8d03-0addf89821c6';
    $display->content['new-e301902b-1cc0-428b-8d03-0addf89821c6'] = $pane;
    $display->panels['center_'][6] = 'new-e301902b-1cc0-428b-8d03-0addf89821c6';
    $pane = new stdClass();
    $pane->pid = 'new-8be27ee9-a66a-4be7-9b70-957bcd9b3ff2';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'context_user_1',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 19,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 13,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Become a Full Member',
      'body' => '<a href=\'/membership-products\'>Become a full member of Boondockers Welcome</a> to have the full experience. ',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = '';
    $pane->uuid = '8be27ee9-a66a-4be7-9b70-957bcd9b3ff2';
    $display->content['new-8be27ee9-a66a-4be7-9b70-957bcd9b3ff2'] = $pane;
    $display->panels['center_'][7] = 'new-8be27ee9-a66a-4be7-9b70-957bcd9b3ff2';
    $pane = new stdClass();
    $pane->pid = 'new-1356550b-0e97-44df-8625-e09f2f06b1fc';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_profile_information-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '1356550b-0e97-44df-8625-e09f2f06b1fc';
    $display->content['new-1356550b-0e97-44df-8625-e09f2f06b1fc'] = $pane;
    $display->panels['left'][0] = 'new-1356550b-0e97-44df-8625-e09f2f06b1fc';
    $pane = new stdClass();
    $pane->pid = 'new-e57b5689-1b4b-4967-a929-1a868354a99d';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'contact_user';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'context_user_1',
          ),
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact %user',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'e57b5689-1b4b-4967-a929-1a868354a99d';
    $display->content['new-e57b5689-1b4b-4967-a929-1a868354a99d'] = $pane;
    $display->panels['left'][1] = 'new-e57b5689-1b4b-4967-a929-1a868354a99d';
    $pane = new stdClass();
    $pane->pid = 'new-6e6eafe8-a2cf-4494-a4ab-746d8ca3a085';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Log in to Send this person a message',
      'title' => 'Contact %user:user',
      'body' => 'You must <a href="/user">log in</a> to send %user:user a message.',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '6e6eafe8-a2cf-4494-a4ab-746d8ca3a085';
    $display->content['new-6e6eafe8-a2cf-4494-a4ab-746d8ca3a085'] = $pane;
    $display->panels['left'][2] = 'new-6e6eafe8-a2cf-4494-a4ab-746d8ca3a085';
    $pane = new stdClass();
    $pane->pid = 'new-e08d5c37-f982-4b90-b3c0-8ed9e6dfdbc9';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Bookmark this member',
      'title' => 'Bookmark this Member',
      'body' => '<?php 
  if (\'%user:uid\' != \'%logged_in_user:uid\')
  {
    print flag_create_link(\'bookmarked_users\', \'%user:uid\'); 
  }
?>
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
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'e08d5c37-f982-4b90-b3c0-8ed9e6dfdbc9';
    $display->content['new-e08d5c37-f982-4b90-b3c0-8ed9e6dfdbc9'] = $pane;
    $display->panels['left'][3] = 'new-e08d5c37-f982-4b90-b3c0-8ed9e6dfdbc9';
    $pane = new stdClass();
    $pane->pid = 'new-23162fa6-fd29-4acf-9345-c04e8d40158a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'uc_expiry-uc_expiry';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 17,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Membership Expiry Date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '23162fa6-fd29-4acf-9345-c04e8d40158a';
    $display->content['new-23162fa6-fd29-4acf-9345-c04e8d40158a'] = $pane;
    $display->panels['left'][4] = 'new-23162fa6-fd29-4acf-9345-c04e8d40158a';
    $pane = new stdClass();
    $pane->pid = 'new-2b13cede-c1f3-4b7d-862f-01bd08a5674d';
    $pane->panel = 'left';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:privatemsg_send_new_message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => 'Contact %user - new.',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2b13cede-c1f3-4b7d-862f-01bd08a5674d';
    $display->content['new-2b13cede-c1f3-4b7d-862f-01bd08a5674d'] = $pane;
    $display->panels['left'][5] = 'new-2b13cede-c1f3-4b7d-862f-01bd08a5674d';
    $pane = new stdClass();
    $pane->pid = 'new-37d33e5d-0c9c-4b76-a78d-e3e367c654dd';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'adsense_managed-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '37d33e5d-0c9c-4b76-a78d-e3e367c654dd';
    $display->content['new-37d33e5d-0c9c-4b76-a78d-e3e367c654dd'] = $pane;
    $display->panels['right'][0] = 'new-37d33e5d-0c9c-4b76-a78d-e3e367c654dd';
    $pane = new stdClass();
    $pane->pid = 'new-4644f8c7-273d-4619-bdb1-902c18c6c0c5';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'user_response_rate';
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
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display only if BDA flag is set',
            'php' => '$context = $contexts[\'argument_entity_id:user_1\'];
$uid = $context->data->uid;
$flag=flag_get_flag(\'boondocking_available\');
$has_bda = $flag->is_flagged($uid);
return $has_bda;',
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
        0 => 'argument_entity_id:user_1.uid',
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
    $pane->uuid = '4644f8c7-273d-4619-bdb1-902c18c6c0c5';
    $display->content['new-4644f8c7-273d-4619-bdb1-902c18c6c0c5'] = $pane;
    $display->panels['right'][1] = 'new-4644f8c7-273d-4619-bdb1-902c18c6c0c5';
    $pane = new stdClass();
    $pane->pid = 'new-3dcb0b6a-8f9b-4810-ba66-ba4df4daa206';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_recommendations-panel_pane_1';
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
          'context' => 'argument_uid_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_uid_1',
            1 => 'context_user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '3dcb0b6a-8f9b-4810-ba66-ba4df4daa206';
    $display->content['new-3dcb0b6a-8f9b-4810-ba66-ba4df4daa206'] = $pane;
    $display->panels['right'][2] = 'new-3dcb0b6a-8f9b-4810-ba66-ba4df4daa206';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_3';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Public User Profile for non-full members',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'user',
        'id' => 1,
        'identifier' => 'LoggedInUser',
        'keyword' => 'logged_in_user',
        'context_settings' => array(
          'type' => 'current',
          'user' => '',
          'uid' => '',
        ),
        'type' => 'current',
        'uid' => NULL,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Profile2 from user',
        'keyword' => 'profile2',
        'name' => 'profile2_from_user',
        'type' => 'profile',
        'context' => 'argument_entity_id:user_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'BDA from user',
        'keyword' => 'bda_info',
        'name' => 'profile2_from_user',
        'type' => 'boondocking_available',
        'context' => 'argument_entity_id:user_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'argument_uid_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'pipeline' => 'standard',
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_info',
          1 => 'center',
          2 => 'rrr',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.84977945277357',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'user_info' => array(
        'type' => 'region',
        'title' => 'User Info',
        'width' => '135',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      'rrr' => array(
        'type' => 'region',
        'title' => 'rrr',
        'width' => '25.150220547226425',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center_',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'center',
        'width' => '100',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '200',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => '150',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'user_info' => array(
      'style' => '-1',
    ),
    'style' => 'default',
    'style_settings' => array(
      'center' => NULL,
      'user_info' => NULL,
      'rrr' => NULL,
      'left' => NULL,
      'center_' => NULL,
      'right' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name\'s Profile';
  $display->uuid = 'eca004d8-a833-407c-9b6c-995cafe8c481';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29b285d3-4eea-438f-82af-647524f4f5be';
    $pane->panel = 'center_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Not a full member ',
      'title' => 'User\'s Membership is Not Valid',
      'body' => '<div style="text-transform:capitalize; display:inline">%user:name</div> has either let their membership lapse or has not fulfilled their membership requirements, thus their information is not currently publicly available. ',
      'format' => '5',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '29b285d3-4eea-438f-82af-647524f4f5be';
    $display->content['new-29b285d3-4eea-438f-82af-647524f4f5be'] = $pane;
    $display->panels['center_'][0] = 'new-29b285d3-4eea-438f-82af-647524f4f5be';
    $pane = new stdClass();
    $pane->pid = 'new-0515e8d6-e04f-4578-bc68-d716ee8ade9a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_profile_information-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0515e8d6-e04f-4578-bc68-d716ee8ade9a';
    $display->content['new-0515e8d6-e04f-4578-bc68-d716ee8ade9a'] = $pane;
    $display->panels['left'][0] = 'new-0515e8d6-e04f-4578-bc68-d716ee8ade9a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function bdw_views_and_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ShowAllUsersMap';
  $page->task = 'page';
  $page->admin_title = 'ShowAllUsersMap';
  $page->admin_description = '';
  $page->path = 'ShowAllUsersMapPanels';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ShowAllUsersMap_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ShowAllUsersMap';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Show All Boondocking';
  $display->uuid = 'fc045077-beff-4319-a2a5-136a9eb43b3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-944ee28e-adf5-4789-b984-64895c42f888';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'all_users_map-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '944ee28e-adf5-4789-b984-64895c42f888';
    $display->content['new-944ee28e-adf5-4789-b984-64895c42f888'] = $pane;
    $display->panels['middle'][0] = 'new-944ee28e-adf5-4789-b984-64895c42f888';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ShowAllUsersMap'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page_anon';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Home page. (for both anonymous and authenticated users, ignore the "anon" in the name!)';
  $page->path = 'home';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_anon_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page_anon';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'AnonymousUser',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '<script type="text/javascript">var switchTo5x=true;</script><script type="text/javascript" src="http://w.sharethis.com/button/buttons.js"></script><script type="text/javascript">stLight.options({publisher:\'137ef464-530f-4839-bf1f-ebdd43f948e9\'});</script>',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 11,
              1 => 1,
            ),
          ),
          'context' => 'logged-in-user',
        ),
      ),
      'logic' => 'or',
    ),
    'pipeline' => 'standard',
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'center' => array(
      'style' => '-1',
    ),
    'style' => 'default',
    'style_settings' => array(
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $display->title = '';
  $display->uuid = '29489d12-bc08-433a-9da8-5575e02f0696';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-50abcb4b-ec74-4416-8c78-a217d56fab1b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '50abcb4b-ec74-4416-8c78-a217d56fab1b';
    $display->content['new-50abcb4b-ec74-4416-8c78-a217d56fab1b'] = $pane;
    $display->panels['left'][0] = 'new-50abcb4b-ec74-4416-8c78-a217d56fab1b';
    $pane = new stdClass();
    $pane->pid = 'new-a886b201-5c55-42be-abf8-48357ceebcc9';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'bda_loc_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Our Newest Boondocking Locations',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a886b201-5c55-42be-abf8-48357ceebcc9';
    $display->content['new-a886b201-5c55-42be-abf8-48357ceebcc9'] = $pane;
    $display->panels['left'][1] = 'new-a886b201-5c55-42be-abf8-48357ceebcc9';
    $pane = new stdClass();
    $pane->pid = 'new-62df335b-c531-45a8-974e-6129c0123cc4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Search Our Site',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62df335b-c531-45a8-974e-6129c0123cc4';
    $display->content['new-62df335b-c531-45a8-974e-6129c0123cc4'] = $pane;
    $display->panels['left'][2] = 'new-62df335b-c531-45a8-974e-6129c0123cc4';
    $pane = new stdClass();
    $pane->pid = 'new-71134cb9-be52-4ca0-a1ab-06d7e397e785';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'share_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71134cb9-be52-4ca0-a1ab-06d7e397e785';
    $display->content['new-71134cb9-be52-4ca0-a1ab-06d7e397e785'] = $pane;
    $display->panels['left'][3] = 'new-71134cb9-be52-4ca0-a1ab-06d7e397e785';
    $pane = new stdClass();
    $pane->pid = 'new-aa85dfe8-f052-4911-b4b9-cc3ea12f7321';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5966',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->locks = array();
    $pane->uuid = 'aa85dfe8-f052-4911-b4b9-cc3ea12f7321';
    $display->content['new-aa85dfe8-f052-4911-b4b9-cc3ea12f7321'] = $pane;
    $display->panels['middle'][0] = 'new-aa85dfe8-f052-4911-b4b9-cc3ea12f7321';
    $pane = new stdClass();
    $pane->pid = 'new-c6f16170-cd69-41d4-832c-c078ed5e32ce';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
      'teaser' => 0,
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
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
    $pane->locks = '';
    $pane->uuid = 'c6f16170-cd69-41d4-832c-c078ed5e32ce';
    $display->content['new-c6f16170-cd69-41d4-832c-c078ed5e32ce'] = $pane;
    $display->panels['middle'][1] = 'new-c6f16170-cd69-41d4-832c-c078ed5e32ce';
    $pane = new stdClass();
    $pane->pid = 'new-8e8b87b7-e804-40c8-9c8b-10487d7c9e17';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '72',
      'teaser' => 0,
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
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
    $pane->locks = '';
    $pane->uuid = '8e8b87b7-e804-40c8-9c8b-10487d7c9e17';
    $display->content['new-8e8b87b7-e804-40c8-9c8b-10487d7c9e17'] = $pane;
    $display->panels['middle'][2] = 'new-8e8b87b7-e804-40c8-9c8b-10487d7c9e17';
    $pane = new stdClass();
    $pane->pid = 'new-33b612f9-69f7-4735-a233-f51300dbb6f6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'fb_likebox-0';
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
    $pane->uuid = '33b612f9-69f7-4735-a233-f51300dbb6f6';
    $display->content['new-33b612f9-69f7-4735-a233-f51300dbb6f6'] = $pane;
    $display->panels['right'][0] = 'new-33b612f9-69f7-4735-a233-f51300dbb6f6';
    $pane = new stdClass();
    $pane->pid = 'new-0ddbd111-4d87-4e21-ad40-2e57119428f6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Link to Testimonials',
      'title' => 'Testimonials',
      'body' => '<img src=\'/sites/boondockerswelcome.com/files/media/TestimonialImage.jpg\' height=\'40px\' align=\'left\' alt=\'Testimonials\'><a href=\'/content/testimonials\'>See what other people are saying about Boondockers Welcome.</a>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '0ddbd111-4d87-4e21-ad40-2e57119428f6';
    $display->content['new-0ddbd111-4d87-4e21-ad40-2e57119428f6'] = $pane;
    $display->panels['right'][1] = 'new-0ddbd111-4d87-4e21-ad40-2e57119428f6';
    $pane = new stdClass();
    $pane->pid = 'new-4e8bc0c1-83c0-49df-a31d-4b7f968d51e5';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'As seen in',
      'title' => 'As Seen In...',
      'body' => '<a href="http://www.motorhomemagazine.com/rv-travel-news/boondocking-website-aims-to-connect-rvers/" target="_blank"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/Motorhome_Logo.jpeg" width="150px" alt="Motorhome Magazine"></a>
<br>
<a href="http://content.yudu.com/Library/A1xdqd/RVTimesMagazine148/resources/index.htm?referrerUrl=http%3A%2F%2Fwww.rvtimes.ca%2Fjuly-august-2012-rv-times-148-digital-edition%2F" target="_blank"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/RV_Times_Logo.png" width="150px" alt="RV Times"></a>
<br>
<a href="http://www.rvgazette.com/" target="_blank"><img src="/sites/boondockerswelcome.com/files/media/AsSeenInLogos/rvgazette_logo.gif" width="150px" alt="RV Gazette"></a>',
      'format' => '5',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'as-seen-in',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '4e8bc0c1-83c0-49df-a31d-4b7f968d51e5';
    $display->content['new-4e8bc0c1-83c0-49df-a31d-4b7f968d51e5'] = $pane;
    $display->panels['right'][2] = 'new-4e8bc0c1-83c0-49df-a31d-4b7f968d51e5';
    $pane = new stdClass();
    $pane->pid = 'new-8b3edd41-489c-48ad-bab0-7944283b5203';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Proud Member Of:',
      'title' => 'Proud Member Of:',
      'body' => '<div align="center">
<img src="/sites/boondockerswelcome.com/files/media/MemberOfLogos/EscapeeLogo.jpg"><br>
<img src="/sites/boondockerswelcome.com/files/media/MemberOfLogos/fmca-logo-commercial_150x112.jpg">
</div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '8b3edd41-489c-48ad-bab0-7944283b5203';
    $display->content['new-8b3edd41-489c-48ad-bab0-7944283b5203'] = $pane;
    $display->panels['right'][3] = 'new-8b3edd41-489c-48ad-bab0-7944283b5203';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_anon_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'home_page_anon';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'AuthenticatedUser',
    'no_blocks' => 0,
    'css_id' => 'DWSHomePage',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Profile2 from user',
        'keyword' => 'profile2',
        'name' => 'profile2_from_user',
        'type' => 'profile',
        'context' => 'context_user_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'bda from user',
        'keyword' => 'bda_info',
        'name' => 'profile2_from_user',
        'type' => 'boondocking_available',
        'context' => 'context_user_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'User is not anonTester',
            'php' => 'global $user;
return ($user->name != "anonTester");',
          ),
        ),
      ),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style' => 'default',
    'style_settings' => array(
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'default' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Contact This User';
  $display->uuid = '38526399-8c6c-4616-946f-a70028b52852';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61ba6dce-3e7c-4439-8f25-4ce3fca71a4a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Getting Around',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61ba6dce-3e7c-4439-8f25-4ce3fca71a4a';
    $display->content['new-61ba6dce-3e7c-4439-8f25-4ce3fca71a4a'] = $pane;
    $display->panels['left'][0] = 'new-61ba6dce-3e7c-4439-8f25-4ce3fca71a4a';
    $pane = new stdClass();
    $pane->pid = 'new-b0814799-4117-4f8a-ba7c-1c65ced437b1';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'messages';
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
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Message Centre',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'b0814799-4117-4f8a-ba7c-1c65ced437b1';
    $display->content['new-b0814799-4117-4f8a-ba7c-1c65ced437b1'] = $pane;
    $display->panels['left'][1] = 'new-b0814799-4117-4f8a-ba7c-1c65ced437b1';
    $pane = new stdClass();
    $pane->pid = 'new-09abc3e1-9c39-4c5e-a29f-e321370dbf56';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'bda_loc_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Our Newest Boondocking Locations',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '09abc3e1-9c39-4c5e-a29f-e321370dbf56';
    $display->content['new-09abc3e1-9c39-4c5e-a29f-e321370dbf56'] = $pane;
    $display->panels['left'][2] = 'new-09abc3e1-9c39-4c5e-a29f-e321370dbf56';
    $pane = new stdClass();
    $pane->pid = 'new-050461c5-f359-4a32-bd01-3c0f174fcec5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Free E-Book',
      'title' => 'Free E-Book',
      'body' => '<a href="/content/frugal-shunpikers-guide-rv-boondocking-new-mexico-0">
<img src="/sites/boondockerswelcome.com/files/media/rv-travel-new-mexico.jpg" width="60px" style="float:right"/>
Download your free "Frugal Shunpiker\'s Guide" here.</a>',
      'format' => '5',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '050461c5-f359-4a32-bd01-3c0f174fcec5';
    $display->content['new-050461c5-f359-4a32-bd01-3c0f174fcec5'] = $pane;
    $display->panels['left'][3] = 'new-050461c5-f359-4a32-bd01-3c0f174fcec5';
    $pane = new stdClass();
    $pane->pid = 'new-38049148-1c51-4c11-b2cb-097854fe66ea';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Search Our Site',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '38049148-1c51-4c11-b2cb-097854fe66ea';
    $display->content['new-38049148-1c51-4c11-b2cb-097854fe66ea'] = $pane;
    $display->panels['left'][4] = 'new-38049148-1c51-4c11-b2cb-097854fe66ea';
    $pane = new stdClass();
    $pane->pid = 'new-ec0534ae-b6df-409b-a091-832872cf9f29';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'share_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ec0534ae-b6df-409b-a091-832872cf9f29';
    $display->content['new-ec0534ae-b6df-409b-a091-832872cf9f29'] = $pane;
    $display->panels['left'][5] = 'new-ec0534ae-b6df-409b-a091-832872cf9f29';
    $pane = new stdClass();
    $pane->pid = 'new-61ef20aa-040a-4ee7-bbb4-e3698ca4561a';
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
              0 => 18,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Please Renew Your Membership',
      'title' => 'Please Renew Your Membership',
      'body' => 'Your membership has expired! Please <a href="/membership-products">renew your membership</a> as soon as possible to continue to enjoy all the benefits that Boondockers Welcome has to offer.',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '61ef20aa-040a-4ee7-bbb4-e3698ca4561a';
    $display->content['new-61ef20aa-040a-4ee7-bbb4-e3698ca4561a'] = $pane;
    $display->panels['middle'][0] = 'new-61ef20aa-040a-4ee7-bbb4-e3698ca4561a';
    $pane = new stdClass();
    $pane->pid = 'new-2b955578-7e33-445c-9497-3e4b87e7c14e';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
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
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '73',
      'teaser' => 0,
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
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
    $pane->locks = '';
    $pane->uuid = '2b955578-7e33-445c-9497-3e4b87e7c14e';
    $display->content['new-2b955578-7e33-445c-9497-3e4b87e7c14e'] = $pane;
    $display->panels['middle'][1] = 'new-2b955578-7e33-445c-9497-3e4b87e7c14e';
    $pane = new stdClass();
    $pane->pid = 'new-38449384-d62e-4bae-9d87-b1c34a6f20e1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'relationship_profile2_from_user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 13,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'admin_title' => 'Create Your User Profile',
      'title' => '<a href="/user/%user:uid/edit/profile">Create Your User Profile</a>',
      'body' => '<div style="text-transform:capitalize; display:inline">%user:name</div>, you have not yet created a user profile. <a href="/user/%user:uid/edit/profile">Create one</a> now!',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '38449384-d62e-4bae-9d87-b1c34a6f20e1';
    $display->content['new-38449384-d62e-4bae-9d87-b1c34a6f20e1'] = $pane;
    $display->panels['middle'][2] = 'new-38449384-d62e-4bae-9d87-b1c34a6f20e1';
    $pane = new stdClass();
    $pane->pid = 'new-f271f247-d4a0-4fe2-9f66-2a6072127f15';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 13,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
        4 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'relationship_profile2_from_user_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'admin_title' => 'Add Boondocking Available Location',
      'title' => '<a href="/user/%user:uid/edit/boondocking_available">Add A Boondocking Available Location</a>',
      'body' => '<div style="text-transform:capitalize; display:inline">%user:name</div>, you have not added any boondocking availability information. <a href="/user/%user:uid/edit/boondocking_available">Add your boondocking available location</a> now!',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'f271f247-d4a0-4fe2-9f66-2a6072127f15';
    $display->content['new-f271f247-d4a0-4fe2-9f66-2a6072127f15'] = $pane;
    $display->panels['middle'][3] = 'new-f271f247-d4a0-4fe2-9f66-2a6072127f15';
    $pane = new stdClass();
    $pane->pid = 'new-2771bfc1-762d-41f8-b091-695ee052df9c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'relationship_profile2_from_user_2',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
        3 => array(
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
      'logic' => 'and',
    );
    $pane->configuration = array(
      'admin_title' => 'Add a boondocking location (change your current setting)',
      'title' => '<a href="/user/%user:uid/edit/boondocking_available">Add A Boondocking Available Location</a>',
      'body' => '<div style="text-transform:capitalize; display:inline">%user:name</div>, you have currently indicated that you do not have any boondocking available to share. If you can, consider adding a location to your <a href="/user/%user:uid/edit/boondocking_available">boondocking availability profile</a>.
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
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '2771bfc1-762d-41f8-b091-695ee052df9c';
    $display->content['new-2771bfc1-762d-41f8-b091-695ee052df9c'] = $pane;
    $display->panels['middle'][4] = 'new-2771bfc1-762d-41f8-b091-695ee052df9c';
    $pane = new stdClass();
    $pane->pid = 'new-938f5523-90b8-48dc-9e9e-72a1084175df';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '72',
      'teaser' => 0,
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = '938f5523-90b8-48dc-9e9e-72a1084175df';
    $display->content['new-938f5523-90b8-48dc-9e9e-72a1084175df'] = $pane;
    $display->panels['middle'][5] = 'new-938f5523-90b8-48dc-9e9e-72a1084175df';
    $pane = new stdClass();
    $pane->pid = 'new-4c29a2ac-4128-4423-8c42-4de247d1f4dd';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Invite Others',
      'title' => 'Invite Others <br>Earn Rewards',
      'body' => 'Invite others to join Boondockers Welcome. 

If they register, you both get an extra month of membership free! 

<a href=\'/user/%user:uid/invites/new\'> Invite friends via email.</a>

- Or -

Use this URL on your blog or in your emails:
<a href="%user:referral-link">%user:referral-link</a>',
      'format' => '1',
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
    $pane->uuid = '4c29a2ac-4128-4423-8c42-4de247d1f4dd';
    $display->content['new-4c29a2ac-4128-4423-8c42-4de247d1f4dd'] = $pane;
    $display->panels['right'][0] = 'new-4c29a2ac-4128-4423-8c42-4de247d1f4dd';
    $pane = new stdClass();
    $pane->pid = 'new-b4e1a04e-2e50-436e-a785-11c2b74e956e';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create testimonial content',
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Submit a Testimonial!',
      'body' => 'Tell us what you love about the Boondockers Welcome site. <a href="/node/add/testimonial">Submit a testimonial</a>.',
      'format' => '2',
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
    $pane->uuid = 'b4e1a04e-2e50-436e-a785-11c2b74e956e';
    $display->content['new-b4e1a04e-2e50-436e-a785-11c2b74e956e'] = $pane;
    $display->panels['right'][1] = 'new-b4e1a04e-2e50-436e-a785-11c2b74e956e';
    $pane = new stdClass();
    $pane->pid = 'new-70d04c52-8b34-4eed-8f95-ef021f96b80f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'fb_likebox-0';
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
    $pane->uuid = '70d04c52-8b34-4eed-8f95-ef021f96b80f';
    $display->content['new-70d04c52-8b34-4eed-8f95-ef021f96b80f'] = $pane;
    $display->panels['right'][2] = 'new-70d04c52-8b34-4eed-8f95-ef021f96b80f';
    $pane = new stdClass();
    $pane->pid = 'new-e8aa4e13-289c-4d7a-88c5-47d443d7f36a';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Testimonials',
      'body' => '<img src=\'/sites/boondockerswelcome.com/files/media/TestimonialImage.jpg\' height=\'40px\' align=\'left\'><a href=\'/content/testimonials\'>See what other people are saying about Boondockers Welcome.</a>',
      'format' => '5',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'e8aa4e13-289c-4d7a-88c5-47d443d7f36a';
    $display->content['new-e8aa4e13-289c-4d7a-88c5-47d443d7f36a'] = $pane;
    $display->panels['right'][3] = 'new-e8aa4e13-289c-4d7a-88c5-47d443d7f36a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_anon_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'home_page_anon';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'AnonymousUserComingSoon',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Boondockers Welcome - Coming Soon!';
  $display->uuid = '94ffddb6-6fce-41fa-a063-7cf2e8ea6314';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-499e2601-bb08-4996-8ac5-712b1c9ff278';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'You have reached the future home of the "Boondockers Welcome" community! Come back soon to see us in action!',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '499e2601-bb08-4996-8ac5-712b1c9ff278';
    $display->content['new-499e2601-bb08-4996-8ac5-712b1c9ff278'] = $pane;
    $display->panels['middle'][0] = 'new-499e2601-bb08-4996-8ac5-712b1c9ff278';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-499e2601-bb08-4996-8ac5-712b1c9ff278';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page_anon'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_results';
  $page->task = 'page';
  $page->admin_title = 'Search Results';
  $page->admin_description = 'Search results ';
  $page->path = 'searchResults';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_results_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_results';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b6ed4a9e-2221-4554-949d-9f71a394b772';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-31d1d6f6-dde2-450f-a063-878af737e717';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'searchUsers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '31d1d6f6-dde2-450f-a063-878af737e717';
    $display->content['new-31d1d6f6-dde2-450f-a063-878af737e717'] = $pane;
    $display->panels['middle'][0] = 'new-31d1d6f6-dde2-450f-a063-878af737e717';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-31d1d6f6-dde2-450f-a063-878af737e717';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_results'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'searchbynamepanels';
  $page->task = 'page';
  $page->admin_title = 'SearchByNamePanels';
  $page->admin_description = 'Search by name view using panels';
  $page->path = 'search-boondocking-by-username';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_searchbynamepanels_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'searchbynamepanels';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Search Users By Name';
  $display->uuid = 'b664a4de-0277-4ab3-bb16-c11a8dc82c70';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fcd5f64-d4ef-46a2-a78a-0714923cfe1a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Search Users By Name',
      'body' => 'Search for a user on Boondockers Welcome by username. You can change the type of comparison used for the search via the drop-down box.',
      'format' => '1',
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
    $pane->uuid = '4fcd5f64-d4ef-46a2-a78a-0714923cfe1a';
    $display->content['new-4fcd5f64-d4ef-46a2-a78a-0714923cfe1a'] = $pane;
    $display->panels['middle'][0] = 'new-4fcd5f64-d4ef-46a2-a78a-0714923cfe1a';
    $pane = new stdClass();
    $pane->pid = 'new-84be1417-90c7-4c93-8615-52feb44d39f8';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'SearchByUsername';
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
    $pane->locks = '';
    $pane->uuid = '84be1417-90c7-4c93-8615-52feb44d39f8';
    $display->content['new-84be1417-90c7-4c93-8615-52feb44d39f8'] = $pane;
    $display->panels['middle'][1] = 'new-84be1417-90c7-4c93-8615-52feb44d39f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-84be1417-90c7-4c93-8615-52feb44d39f8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['searchbynamepanels'] = $page;

  return $pages;

}
