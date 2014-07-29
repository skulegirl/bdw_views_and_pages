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
  $display->uuid = '854cbfd1-98bd-4b62-bcc4-5bb823c070b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-20062aad-6847-440a-89ee-1ccd3be2a62c';
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
    $pane->uuid = '20062aad-6847-440a-89ee-1ccd3be2a62c';
    $display->content['new-20062aad-6847-440a-89ee-1ccd3be2a62c'] = $pane;
    $display->panels['center_'][0] = 'new-20062aad-6847-440a-89ee-1ccd3be2a62c';
    $pane = new stdClass();
    $pane->pid = 'new-7d5e4165-3734-4d1a-b411-eea931814ce5';
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
    $pane->uuid = '7d5e4165-3734-4d1a-b411-eea931814ce5';
    $display->content['new-7d5e4165-3734-4d1a-b411-eea931814ce5'] = $pane;
    $display->panels['center_'][1] = 'new-7d5e4165-3734-4d1a-b411-eea931814ce5';
    $pane = new stdClass();
    $pane->pid = 'new-178021ec-d991-4517-b831-d3fdd0149f4d';
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
    $pane->uuid = '178021ec-d991-4517-b831-d3fdd0149f4d';
    $display->content['new-178021ec-d991-4517-b831-d3fdd0149f4d'] = $pane;
    $display->panels['center_'][2] = 'new-178021ec-d991-4517-b831-d3fdd0149f4d';
    $pane = new stdClass();
    $pane->pid = 'new-2b1402e4-34c5-4880-a2f7-536b3e546957';
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
    $pane->uuid = '2b1402e4-34c5-4880-a2f7-536b3e546957';
    $display->content['new-2b1402e4-34c5-4880-a2f7-536b3e546957'] = $pane;
    $display->panels['center_'][3] = 'new-2b1402e4-34c5-4880-a2f7-536b3e546957';
    $pane = new stdClass();
    $pane->pid = 'new-9ccae476-bd8a-41c2-911a-6d9d636e308a';
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
    $pane->uuid = '9ccae476-bd8a-41c2-911a-6d9d636e308a';
    $display->content['new-9ccae476-bd8a-41c2-911a-6d9d636e308a'] = $pane;
    $display->panels['center_'][4] = 'new-9ccae476-bd8a-41c2-911a-6d9d636e308a';
    $pane = new stdClass();
    $pane->pid = 'new-ef60b299-b63f-4589-8b5e-29ddb85e0068';
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
    $pane->uuid = 'ef60b299-b63f-4589-8b5e-29ddb85e0068';
    $display->content['new-ef60b299-b63f-4589-8b5e-29ddb85e0068'] = $pane;
    $display->panels['center_'][5] = 'new-ef60b299-b63f-4589-8b5e-29ddb85e0068';
    $pane = new stdClass();
    $pane->pid = 'new-3674e396-93e0-4f6f-8f33-71548ed17536';
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
    $pane->uuid = '3674e396-93e0-4f6f-8f33-71548ed17536';
    $display->content['new-3674e396-93e0-4f6f-8f33-71548ed17536'] = $pane;
    $display->panels['center_'][6] = 'new-3674e396-93e0-4f6f-8f33-71548ed17536';
    $pane = new stdClass();
    $pane->pid = 'new-0b60bdf0-47cb-46b7-ba45-8b7996168af2';
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
    $pane->uuid = '0b60bdf0-47cb-46b7-ba45-8b7996168af2';
    $display->content['new-0b60bdf0-47cb-46b7-ba45-8b7996168af2'] = $pane;
    $display->panels['center_'][7] = 'new-0b60bdf0-47cb-46b7-ba45-8b7996168af2';
    $pane = new stdClass();
    $pane->pid = 'new-7fab63ae-06fe-4ff5-acf1-204ead4ec14c';
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
    $pane->uuid = '7fab63ae-06fe-4ff5-acf1-204ead4ec14c';
    $display->content['new-7fab63ae-06fe-4ff5-acf1-204ead4ec14c'] = $pane;
    $display->panels['left'][0] = 'new-7fab63ae-06fe-4ff5-acf1-204ead4ec14c';
    $pane = new stdClass();
    $pane->pid = 'new-8647eb5c-9ae6-4c89-a57a-bc8e254fdcee';
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
    $pane->uuid = '8647eb5c-9ae6-4c89-a57a-bc8e254fdcee';
    $display->content['new-8647eb5c-9ae6-4c89-a57a-bc8e254fdcee'] = $pane;
    $display->panels['left'][1] = 'new-8647eb5c-9ae6-4c89-a57a-bc8e254fdcee';
    $pane = new stdClass();
    $pane->pid = 'new-1cf1d58c-3439-493a-ab18-fb00bd40e4ca';
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
    $pane->uuid = '1cf1d58c-3439-493a-ab18-fb00bd40e4ca';
    $display->content['new-1cf1d58c-3439-493a-ab18-fb00bd40e4ca'] = $pane;
    $display->panels['left'][2] = 'new-1cf1d58c-3439-493a-ab18-fb00bd40e4ca';
    $pane = new stdClass();
    $pane->pid = 'new-6a9f96d5-dd64-4ebf-80a9-9b42cad4c04f';
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
    $pane->uuid = '6a9f96d5-dd64-4ebf-80a9-9b42cad4c04f';
    $display->content['new-6a9f96d5-dd64-4ebf-80a9-9b42cad4c04f'] = $pane;
    $display->panels['left'][3] = 'new-6a9f96d5-dd64-4ebf-80a9-9b42cad4c04f';
    $pane = new stdClass();
    $pane->pid = 'new-183afd31-be13-4a78-b9cc-b1f986d56ee9';
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
    $pane->uuid = '183afd31-be13-4a78-b9cc-b1f986d56ee9';
    $display->content['new-183afd31-be13-4a78-b9cc-b1f986d56ee9'] = $pane;
    $display->panels['left'][4] = 'new-183afd31-be13-4a78-b9cc-b1f986d56ee9';
    $pane = new stdClass();
    $pane->pid = 'new-36fd560b-c18d-4914-bb2b-b5db1ad235c2';
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
    $pane->uuid = '36fd560b-c18d-4914-bb2b-b5db1ad235c2';
    $display->content['new-36fd560b-c18d-4914-bb2b-b5db1ad235c2'] = $pane;
    $display->panels['left'][5] = 'new-36fd560b-c18d-4914-bb2b-b5db1ad235c2';
    $pane = new stdClass();
    $pane->pid = 'new-905a33e3-679d-4e39-b834-58e14a03fb8d';
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
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '905a33e3-679d-4e39-b834-58e14a03fb8d';
    $display->content['new-905a33e3-679d-4e39-b834-58e14a03fb8d'] = $pane;
    $display->panels['right'][0] = 'new-905a33e3-679d-4e39-b834-58e14a03fb8d';
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
  $display->uuid = '9bcf19e4-5430-4670-a16a-880bfdc84d3c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-713b6522-99f7-4cf1-bfde-59efe1406337';
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
    $pane->uuid = '713b6522-99f7-4cf1-bfde-59efe1406337';
    $display->content['new-713b6522-99f7-4cf1-bfde-59efe1406337'] = $pane;
    $display->panels['center_'][0] = 'new-713b6522-99f7-4cf1-bfde-59efe1406337';
    $pane = new stdClass();
    $pane->pid = 'new-4542a5b3-5479-466c-b2d7-93eea8922a6b';
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
    $pane->uuid = '4542a5b3-5479-466c-b2d7-93eea8922a6b';
    $display->content['new-4542a5b3-5479-466c-b2d7-93eea8922a6b'] = $pane;
    $display->panels['left'][0] = 'new-4542a5b3-5479-466c-b2d7-93eea8922a6b';
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
  $display->uuid = 'd4f44f00-3485-4bc3-b9ec-3b9da8699b19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2d5ad311-455d-4ce6-9562-f198cc78ad60';
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
    $pane->uuid = '2d5ad311-455d-4ce6-9562-f198cc78ad60';
    $display->content['new-2d5ad311-455d-4ce6-9562-f198cc78ad60'] = $pane;
    $display->panels['middle'][0] = 'new-2d5ad311-455d-4ce6-9562-f198cc78ad60';
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
  $display->uuid = 'cbc9b52c-85ba-4e7c-8d49-2879e0182c58';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e654fdf-3d63-4077-91be-47440ed1611d';
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
    $pane->uuid = '0e654fdf-3d63-4077-91be-47440ed1611d';
    $display->content['new-0e654fdf-3d63-4077-91be-47440ed1611d'] = $pane;
    $display->panels['left'][0] = 'new-0e654fdf-3d63-4077-91be-47440ed1611d';
    $pane = new stdClass();
    $pane->pid = 'new-06461a7c-6802-492d-ab4f-3ace129afc85';
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
    $pane->uuid = '06461a7c-6802-492d-ab4f-3ace129afc85';
    $display->content['new-06461a7c-6802-492d-ab4f-3ace129afc85'] = $pane;
    $display->panels['left'][1] = 'new-06461a7c-6802-492d-ab4f-3ace129afc85';
    $pane = new stdClass();
    $pane->pid = 'new-2157b4a0-b217-4484-b631-43982525058c';
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
    $pane->uuid = '2157b4a0-b217-4484-b631-43982525058c';
    $display->content['new-2157b4a0-b217-4484-b631-43982525058c'] = $pane;
    $display->panels['left'][2] = 'new-2157b4a0-b217-4484-b631-43982525058c';
    $pane = new stdClass();
    $pane->pid = 'new-02555dfb-3517-4cb5-9be4-f27d32bcda7f';
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
    $pane->uuid = '02555dfb-3517-4cb5-9be4-f27d32bcda7f';
    $display->content['new-02555dfb-3517-4cb5-9be4-f27d32bcda7f'] = $pane;
    $display->panels['left'][3] = 'new-02555dfb-3517-4cb5-9be4-f27d32bcda7f';
    $pane = new stdClass();
    $pane->pid = 'new-f49b3518-b1d2-4295-a22d-b8e43a612993';
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
    $pane->uuid = 'f49b3518-b1d2-4295-a22d-b8e43a612993';
    $display->content['new-f49b3518-b1d2-4295-a22d-b8e43a612993'] = $pane;
    $display->panels['middle'][0] = 'new-f49b3518-b1d2-4295-a22d-b8e43a612993';
    $pane = new stdClass();
    $pane->pid = 'new-7e1118f7-764c-405d-ab96-fbb86bc307b7';
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
    $pane->uuid = '7e1118f7-764c-405d-ab96-fbb86bc307b7';
    $display->content['new-7e1118f7-764c-405d-ab96-fbb86bc307b7'] = $pane;
    $display->panels['middle'][1] = 'new-7e1118f7-764c-405d-ab96-fbb86bc307b7';
    $pane = new stdClass();
    $pane->pid = 'new-a3979772-d97d-49ec-b7c3-8808af866ba7';
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
    $pane->uuid = 'a3979772-d97d-49ec-b7c3-8808af866ba7';
    $display->content['new-a3979772-d97d-49ec-b7c3-8808af866ba7'] = $pane;
    $display->panels['middle'][2] = 'new-a3979772-d97d-49ec-b7c3-8808af866ba7';
    $pane = new stdClass();
    $pane->pid = 'new-5d3fa578-7730-4152-8899-d25fbcf5a055';
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
    $pane->uuid = '5d3fa578-7730-4152-8899-d25fbcf5a055';
    $display->content['new-5d3fa578-7730-4152-8899-d25fbcf5a055'] = $pane;
    $display->panels['right'][0] = 'new-5d3fa578-7730-4152-8899-d25fbcf5a055';
    $pane = new stdClass();
    $pane->pid = 'new-0af1b6e0-55a3-4916-ae84-3902a79c94dc';
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
    $pane->uuid = '0af1b6e0-55a3-4916-ae84-3902a79c94dc';
    $display->content['new-0af1b6e0-55a3-4916-ae84-3902a79c94dc'] = $pane;
    $display->panels['right'][1] = 'new-0af1b6e0-55a3-4916-ae84-3902a79c94dc';
    $pane = new stdClass();
    $pane->pid = 'new-295b6f34-40be-40ca-9dc1-eef01a453579';
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
    $pane->uuid = '295b6f34-40be-40ca-9dc1-eef01a453579';
    $display->content['new-295b6f34-40be-40ca-9dc1-eef01a453579'] = $pane;
    $display->panels['right'][2] = 'new-295b6f34-40be-40ca-9dc1-eef01a453579';
    $pane = new stdClass();
    $pane->pid = 'new-94617051-0cdb-41e6-adff-8d842f92c8a3';
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
    $pane->uuid = '94617051-0cdb-41e6-adff-8d842f92c8a3';
    $display->content['new-94617051-0cdb-41e6-adff-8d842f92c8a3'] = $pane;
    $display->panels['right'][3] = 'new-94617051-0cdb-41e6-adff-8d842f92c8a3';
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
  $display->uuid = 'f9e98024-bc53-470c-ac1b-d112bd2f88e2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5acafdb1-0a67-4e3c-a58b-55c08b00361c';
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
    $pane->uuid = '5acafdb1-0a67-4e3c-a58b-55c08b00361c';
    $display->content['new-5acafdb1-0a67-4e3c-a58b-55c08b00361c'] = $pane;
    $display->panels['left'][0] = 'new-5acafdb1-0a67-4e3c-a58b-55c08b00361c';
    $pane = new stdClass();
    $pane->pid = 'new-4635be5a-933f-4467-8bd6-0f99c81073d2';
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
    $pane->uuid = '4635be5a-933f-4467-8bd6-0f99c81073d2';
    $display->content['new-4635be5a-933f-4467-8bd6-0f99c81073d2'] = $pane;
    $display->panels['left'][1] = 'new-4635be5a-933f-4467-8bd6-0f99c81073d2';
    $pane = new stdClass();
    $pane->pid = 'new-0975a2f4-176f-4585-8631-e94626aeb528';
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
    $pane->uuid = '0975a2f4-176f-4585-8631-e94626aeb528';
    $display->content['new-0975a2f4-176f-4585-8631-e94626aeb528'] = $pane;
    $display->panels['left'][2] = 'new-0975a2f4-176f-4585-8631-e94626aeb528';
    $pane = new stdClass();
    $pane->pid = 'new-e5b675ca-0f75-4257-8d2a-cce1bb34514e';
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
    $pane->uuid = 'e5b675ca-0f75-4257-8d2a-cce1bb34514e';
    $display->content['new-e5b675ca-0f75-4257-8d2a-cce1bb34514e'] = $pane;
    $display->panels['left'][3] = 'new-e5b675ca-0f75-4257-8d2a-cce1bb34514e';
    $pane = new stdClass();
    $pane->pid = 'new-9301830a-57d6-4055-815a-79a804a85556';
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
    $pane->uuid = '9301830a-57d6-4055-815a-79a804a85556';
    $display->content['new-9301830a-57d6-4055-815a-79a804a85556'] = $pane;
    $display->panels['left'][4] = 'new-9301830a-57d6-4055-815a-79a804a85556';
    $pane = new stdClass();
    $pane->pid = 'new-9b872017-2fff-4a03-bb23-81adb694edd0';
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
    $pane->uuid = '9b872017-2fff-4a03-bb23-81adb694edd0';
    $display->content['new-9b872017-2fff-4a03-bb23-81adb694edd0'] = $pane;
    $display->panels['left'][5] = 'new-9b872017-2fff-4a03-bb23-81adb694edd0';
    $pane = new stdClass();
    $pane->pid = 'new-445fe3f6-8d99-4ea9-9b92-ada32cf361fc';
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
    $pane->uuid = '445fe3f6-8d99-4ea9-9b92-ada32cf361fc';
    $display->content['new-445fe3f6-8d99-4ea9-9b92-ada32cf361fc'] = $pane;
    $display->panels['middle'][0] = 'new-445fe3f6-8d99-4ea9-9b92-ada32cf361fc';
    $pane = new stdClass();
    $pane->pid = 'new-fc77482f-3906-419f-ab5d-2411ad588486';
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
    $pane->uuid = 'fc77482f-3906-419f-ab5d-2411ad588486';
    $display->content['new-fc77482f-3906-419f-ab5d-2411ad588486'] = $pane;
    $display->panels['middle'][1] = 'new-fc77482f-3906-419f-ab5d-2411ad588486';
    $pane = new stdClass();
    $pane->pid = 'new-9400fd5a-9cf5-413e-b193-a4be1548a75a';
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
    $pane->uuid = '9400fd5a-9cf5-413e-b193-a4be1548a75a';
    $display->content['new-9400fd5a-9cf5-413e-b193-a4be1548a75a'] = $pane;
    $display->panels['middle'][2] = 'new-9400fd5a-9cf5-413e-b193-a4be1548a75a';
    $pane = new stdClass();
    $pane->pid = 'new-6a78952f-db8a-44b8-ab2c-609d27fee521';
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
    $pane->uuid = '6a78952f-db8a-44b8-ab2c-609d27fee521';
    $display->content['new-6a78952f-db8a-44b8-ab2c-609d27fee521'] = $pane;
    $display->panels['middle'][3] = 'new-6a78952f-db8a-44b8-ab2c-609d27fee521';
    $pane = new stdClass();
    $pane->pid = 'new-e82f171d-6dcd-4997-bd04-474e02ec4899';
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
    $pane->uuid = 'e82f171d-6dcd-4997-bd04-474e02ec4899';
    $display->content['new-e82f171d-6dcd-4997-bd04-474e02ec4899'] = $pane;
    $display->panels['middle'][4] = 'new-e82f171d-6dcd-4997-bd04-474e02ec4899';
    $pane = new stdClass();
    $pane->pid = 'new-7ebb50bb-3879-49de-9a25-88e8d1f62b26';
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
    $pane->uuid = '7ebb50bb-3879-49de-9a25-88e8d1f62b26';
    $display->content['new-7ebb50bb-3879-49de-9a25-88e8d1f62b26'] = $pane;
    $display->panels['middle'][5] = 'new-7ebb50bb-3879-49de-9a25-88e8d1f62b26';
    $pane = new stdClass();
    $pane->pid = 'new-cefab9ee-c023-43a6-abce-ae2725c5bd82';
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
    $pane->uuid = 'cefab9ee-c023-43a6-abce-ae2725c5bd82';
    $display->content['new-cefab9ee-c023-43a6-abce-ae2725c5bd82'] = $pane;
    $display->panels['right'][0] = 'new-cefab9ee-c023-43a6-abce-ae2725c5bd82';
    $pane = new stdClass();
    $pane->pid = 'new-080588fb-5e43-4a29-b254-abf1b55dbcca';
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
    $pane->uuid = '080588fb-5e43-4a29-b254-abf1b55dbcca';
    $display->content['new-080588fb-5e43-4a29-b254-abf1b55dbcca'] = $pane;
    $display->panels['right'][1] = 'new-080588fb-5e43-4a29-b254-abf1b55dbcca';
    $pane = new stdClass();
    $pane->pid = 'new-954157e7-e78e-457c-93d6-bf3ce53a7fd3';
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
    $pane->uuid = '954157e7-e78e-457c-93d6-bf3ce53a7fd3';
    $display->content['new-954157e7-e78e-457c-93d6-bf3ce53a7fd3'] = $pane;
    $display->panels['right'][2] = 'new-954157e7-e78e-457c-93d6-bf3ce53a7fd3';
    $pane = new stdClass();
    $pane->pid = 'new-4a390d54-4655-4e47-a283-0a0c83b0aacc';
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
    $pane->uuid = '4a390d54-4655-4e47-a283-0a0c83b0aacc';
    $display->content['new-4a390d54-4655-4e47-a283-0a0c83b0aacc'] = $pane;
    $display->panels['right'][3] = 'new-4a390d54-4655-4e47-a283-0a0c83b0aacc';
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
  $display->uuid = 'b3a48b2a-6747-49de-b178-311bd324495f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a65d7ba5-3baa-4f8c-ae67-2311349f5006';
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
    $pane->uuid = 'a65d7ba5-3baa-4f8c-ae67-2311349f5006';
    $display->content['new-a65d7ba5-3baa-4f8c-ae67-2311349f5006'] = $pane;
    $display->panels['middle'][0] = 'new-a65d7ba5-3baa-4f8c-ae67-2311349f5006';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a65d7ba5-3baa-4f8c-ae67-2311349f5006';
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
