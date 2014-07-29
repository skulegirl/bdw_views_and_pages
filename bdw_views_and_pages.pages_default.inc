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
  $display->uuid = '2ee56d04-5153-4eec-a1dd-75b91222c620';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4107fd01-5397-4ac9-b676-bb17f2ccdc02';
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
    $pane->uuid = '4107fd01-5397-4ac9-b676-bb17f2ccdc02';
    $display->content['new-4107fd01-5397-4ac9-b676-bb17f2ccdc02'] = $pane;
    $display->panels['center_'][0] = 'new-4107fd01-5397-4ac9-b676-bb17f2ccdc02';
    $pane = new stdClass();
    $pane->pid = 'new-89efbd94-78d3-4984-b279-c5ec43814bb0';
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
    $pane->uuid = '89efbd94-78d3-4984-b279-c5ec43814bb0';
    $display->content['new-89efbd94-78d3-4984-b279-c5ec43814bb0'] = $pane;
    $display->panels['center_'][1] = 'new-89efbd94-78d3-4984-b279-c5ec43814bb0';
    $pane = new stdClass();
    $pane->pid = 'new-ee70b3a7-aa10-4f1c-823a-2c895632dc8b';
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
    $pane->uuid = 'ee70b3a7-aa10-4f1c-823a-2c895632dc8b';
    $display->content['new-ee70b3a7-aa10-4f1c-823a-2c895632dc8b'] = $pane;
    $display->panels['center_'][2] = 'new-ee70b3a7-aa10-4f1c-823a-2c895632dc8b';
    $pane = new stdClass();
    $pane->pid = 'new-5611933f-d148-424f-a1f8-9c8432ea9f9e';
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
    $pane->uuid = '5611933f-d148-424f-a1f8-9c8432ea9f9e';
    $display->content['new-5611933f-d148-424f-a1f8-9c8432ea9f9e'] = $pane;
    $display->panels['center_'][3] = 'new-5611933f-d148-424f-a1f8-9c8432ea9f9e';
    $pane = new stdClass();
    $pane->pid = 'new-f2c2aaae-f01f-4d9d-b880-f6c014758dca';
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
    $pane->uuid = 'f2c2aaae-f01f-4d9d-b880-f6c014758dca';
    $display->content['new-f2c2aaae-f01f-4d9d-b880-f6c014758dca'] = $pane;
    $display->panels['center_'][4] = 'new-f2c2aaae-f01f-4d9d-b880-f6c014758dca';
    $pane = new stdClass();
    $pane->pid = 'new-9feec442-c7ae-4b6d-96aa-cf193c0cc21e';
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
    $pane->uuid = '9feec442-c7ae-4b6d-96aa-cf193c0cc21e';
    $display->content['new-9feec442-c7ae-4b6d-96aa-cf193c0cc21e'] = $pane;
    $display->panels['center_'][5] = 'new-9feec442-c7ae-4b6d-96aa-cf193c0cc21e';
    $pane = new stdClass();
    $pane->pid = 'new-683d778e-d8e8-4c29-bc13-1d241029609b';
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
    $pane->uuid = '683d778e-d8e8-4c29-bc13-1d241029609b';
    $display->content['new-683d778e-d8e8-4c29-bc13-1d241029609b'] = $pane;
    $display->panels['center_'][6] = 'new-683d778e-d8e8-4c29-bc13-1d241029609b';
    $pane = new stdClass();
    $pane->pid = 'new-f5cd0578-4cf8-4556-b4d3-5d9faa30a433';
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
    $pane->uuid = 'f5cd0578-4cf8-4556-b4d3-5d9faa30a433';
    $display->content['new-f5cd0578-4cf8-4556-b4d3-5d9faa30a433'] = $pane;
    $display->panels['center_'][7] = 'new-f5cd0578-4cf8-4556-b4d3-5d9faa30a433';
    $pane = new stdClass();
    $pane->pid = 'new-3764af0a-5b50-4647-b7dd-4b2e67c07f22';
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
    $pane->uuid = '3764af0a-5b50-4647-b7dd-4b2e67c07f22';
    $display->content['new-3764af0a-5b50-4647-b7dd-4b2e67c07f22'] = $pane;
    $display->panels['left'][0] = 'new-3764af0a-5b50-4647-b7dd-4b2e67c07f22';
    $pane = new stdClass();
    $pane->pid = 'new-0620489d-6217-44a7-8892-851f991e6769';
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
    $pane->uuid = '0620489d-6217-44a7-8892-851f991e6769';
    $display->content['new-0620489d-6217-44a7-8892-851f991e6769'] = $pane;
    $display->panels['left'][1] = 'new-0620489d-6217-44a7-8892-851f991e6769';
    $pane = new stdClass();
    $pane->pid = 'new-8d48e139-911d-46ec-957f-b9f95ecea85e';
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
    $pane->uuid = '8d48e139-911d-46ec-957f-b9f95ecea85e';
    $display->content['new-8d48e139-911d-46ec-957f-b9f95ecea85e'] = $pane;
    $display->panels['left'][2] = 'new-8d48e139-911d-46ec-957f-b9f95ecea85e';
    $pane = new stdClass();
    $pane->pid = 'new-cb99f7a4-b6a8-454c-ab2f-e80444f4ab4f';
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
    $pane->uuid = 'cb99f7a4-b6a8-454c-ab2f-e80444f4ab4f';
    $display->content['new-cb99f7a4-b6a8-454c-ab2f-e80444f4ab4f'] = $pane;
    $display->panels['left'][3] = 'new-cb99f7a4-b6a8-454c-ab2f-e80444f4ab4f';
    $pane = new stdClass();
    $pane->pid = 'new-8f4c312d-f7a6-4516-9dbc-6a616d30ccb7';
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
    $pane->uuid = '8f4c312d-f7a6-4516-9dbc-6a616d30ccb7';
    $display->content['new-8f4c312d-f7a6-4516-9dbc-6a616d30ccb7'] = $pane;
    $display->panels['left'][4] = 'new-8f4c312d-f7a6-4516-9dbc-6a616d30ccb7';
    $pane = new stdClass();
    $pane->pid = 'new-3e58e780-f8df-4ed8-8be7-87c155dba15d';
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
    $pane->uuid = '3e58e780-f8df-4ed8-8be7-87c155dba15d';
    $display->content['new-3e58e780-f8df-4ed8-8be7-87c155dba15d'] = $pane;
    $display->panels['left'][5] = 'new-3e58e780-f8df-4ed8-8be7-87c155dba15d';
    $pane = new stdClass();
    $pane->pid = 'new-59bc14f8-3870-4491-9715-9bb28054fc0d';
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
    $pane->uuid = '59bc14f8-3870-4491-9715-9bb28054fc0d';
    $display->content['new-59bc14f8-3870-4491-9715-9bb28054fc0d'] = $pane;
    $display->panels['right'][0] = 'new-59bc14f8-3870-4491-9715-9bb28054fc0d';
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
  $display->uuid = 'b57e222d-df90-4a0f-baa1-f8606d8e9c36';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8ade4f62-6354-4ef0-8d39-ec2699a7e0f6';
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
    $pane->uuid = '8ade4f62-6354-4ef0-8d39-ec2699a7e0f6';
    $display->content['new-8ade4f62-6354-4ef0-8d39-ec2699a7e0f6'] = $pane;
    $display->panels['center_'][0] = 'new-8ade4f62-6354-4ef0-8d39-ec2699a7e0f6';
    $pane = new stdClass();
    $pane->pid = 'new-24cedf7e-281f-48fd-bf15-ec4fe1ea9a11';
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
    $pane->uuid = '24cedf7e-281f-48fd-bf15-ec4fe1ea9a11';
    $display->content['new-24cedf7e-281f-48fd-bf15-ec4fe1ea9a11'] = $pane;
    $display->panels['left'][0] = 'new-24cedf7e-281f-48fd-bf15-ec4fe1ea9a11';
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
  $display->uuid = 'c1f4cbbd-51b3-4d2a-9200-34da5361bd39';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2636f84d-c5b3-45de-95c2-1f101f990177';
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
    $pane->uuid = '2636f84d-c5b3-45de-95c2-1f101f990177';
    $display->content['new-2636f84d-c5b3-45de-95c2-1f101f990177'] = $pane;
    $display->panels['middle'][0] = 'new-2636f84d-c5b3-45de-95c2-1f101f990177';
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
  $display->uuid = '360ce4db-680c-4078-b6fd-66f4b8e9ccf2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9939ec94-5e62-4ba8-84fe-c854c07a54f5';
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
    $pane->uuid = '9939ec94-5e62-4ba8-84fe-c854c07a54f5';
    $display->content['new-9939ec94-5e62-4ba8-84fe-c854c07a54f5'] = $pane;
    $display->panels['left'][0] = 'new-9939ec94-5e62-4ba8-84fe-c854c07a54f5';
    $pane = new stdClass();
    $pane->pid = 'new-76fada1d-5ac7-4e46-91e0-f19968fa285d';
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
    $pane->uuid = '76fada1d-5ac7-4e46-91e0-f19968fa285d';
    $display->content['new-76fada1d-5ac7-4e46-91e0-f19968fa285d'] = $pane;
    $display->panels['left'][1] = 'new-76fada1d-5ac7-4e46-91e0-f19968fa285d';
    $pane = new stdClass();
    $pane->pid = 'new-00e9ce8c-6357-4df1-ae13-1d15e52aa866';
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
    $pane->uuid = '00e9ce8c-6357-4df1-ae13-1d15e52aa866';
    $display->content['new-00e9ce8c-6357-4df1-ae13-1d15e52aa866'] = $pane;
    $display->panels['left'][2] = 'new-00e9ce8c-6357-4df1-ae13-1d15e52aa866';
    $pane = new stdClass();
    $pane->pid = 'new-3f3bf5b4-c595-4550-972e-cb112b461c39';
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
    $pane->uuid = '3f3bf5b4-c595-4550-972e-cb112b461c39';
    $display->content['new-3f3bf5b4-c595-4550-972e-cb112b461c39'] = $pane;
    $display->panels['left'][3] = 'new-3f3bf5b4-c595-4550-972e-cb112b461c39';
    $pane = new stdClass();
    $pane->pid = 'new-9dad09ea-77aa-4d30-aa03-900571afb3ab';
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
    $pane->uuid = '9dad09ea-77aa-4d30-aa03-900571afb3ab';
    $display->content['new-9dad09ea-77aa-4d30-aa03-900571afb3ab'] = $pane;
    $display->panels['middle'][0] = 'new-9dad09ea-77aa-4d30-aa03-900571afb3ab';
    $pane = new stdClass();
    $pane->pid = 'new-9ab6e161-21c2-4420-be4a-0a13e9720567';
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
    $pane->uuid = '9ab6e161-21c2-4420-be4a-0a13e9720567';
    $display->content['new-9ab6e161-21c2-4420-be4a-0a13e9720567'] = $pane;
    $display->panels['middle'][1] = 'new-9ab6e161-21c2-4420-be4a-0a13e9720567';
    $pane = new stdClass();
    $pane->pid = 'new-3860dd3e-fad8-4ae8-ae7f-4699bd6aeed4';
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
    $pane->uuid = '3860dd3e-fad8-4ae8-ae7f-4699bd6aeed4';
    $display->content['new-3860dd3e-fad8-4ae8-ae7f-4699bd6aeed4'] = $pane;
    $display->panels['middle'][2] = 'new-3860dd3e-fad8-4ae8-ae7f-4699bd6aeed4';
    $pane = new stdClass();
    $pane->pid = 'new-5177e3fa-de07-485d-a30e-223c6ec12b06';
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
    $pane->uuid = '5177e3fa-de07-485d-a30e-223c6ec12b06';
    $display->content['new-5177e3fa-de07-485d-a30e-223c6ec12b06'] = $pane;
    $display->panels['right'][0] = 'new-5177e3fa-de07-485d-a30e-223c6ec12b06';
    $pane = new stdClass();
    $pane->pid = 'new-9fab257e-abf8-4e46-9425-0cdf888afeed';
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
    $pane->uuid = '9fab257e-abf8-4e46-9425-0cdf888afeed';
    $display->content['new-9fab257e-abf8-4e46-9425-0cdf888afeed'] = $pane;
    $display->panels['right'][1] = 'new-9fab257e-abf8-4e46-9425-0cdf888afeed';
    $pane = new stdClass();
    $pane->pid = 'new-efbb78d2-81d4-40af-a86e-3b942fb3f4d6';
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
    $pane->uuid = 'efbb78d2-81d4-40af-a86e-3b942fb3f4d6';
    $display->content['new-efbb78d2-81d4-40af-a86e-3b942fb3f4d6'] = $pane;
    $display->panels['right'][2] = 'new-efbb78d2-81d4-40af-a86e-3b942fb3f4d6';
    $pane = new stdClass();
    $pane->pid = 'new-39b2774e-afe3-4ce8-bdcc-11d76fe2d0d3';
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
    $pane->uuid = '39b2774e-afe3-4ce8-bdcc-11d76fe2d0d3';
    $display->content['new-39b2774e-afe3-4ce8-bdcc-11d76fe2d0d3'] = $pane;
    $display->panels['right'][3] = 'new-39b2774e-afe3-4ce8-bdcc-11d76fe2d0d3';
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
  $display->uuid = 'b65184b6-698d-4849-ad48-a5a947b4c076';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a5cb1a3-cc3d-4e4b-b6e8-d5163b78123f';
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
    $pane->uuid = '3a5cb1a3-cc3d-4e4b-b6e8-d5163b78123f';
    $display->content['new-3a5cb1a3-cc3d-4e4b-b6e8-d5163b78123f'] = $pane;
    $display->panels['left'][0] = 'new-3a5cb1a3-cc3d-4e4b-b6e8-d5163b78123f';
    $pane = new stdClass();
    $pane->pid = 'new-a44d3333-03ed-4015-a43a-4948f0e87097';
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
    $pane->uuid = 'a44d3333-03ed-4015-a43a-4948f0e87097';
    $display->content['new-a44d3333-03ed-4015-a43a-4948f0e87097'] = $pane;
    $display->panels['left'][1] = 'new-a44d3333-03ed-4015-a43a-4948f0e87097';
    $pane = new stdClass();
    $pane->pid = 'new-f08072f3-b6cf-4566-a104-839996337460';
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
    $pane->uuid = 'f08072f3-b6cf-4566-a104-839996337460';
    $display->content['new-f08072f3-b6cf-4566-a104-839996337460'] = $pane;
    $display->panels['left'][2] = 'new-f08072f3-b6cf-4566-a104-839996337460';
    $pane = new stdClass();
    $pane->pid = 'new-c7c304a4-5787-487d-9458-cf4d5264a388';
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
    $pane->uuid = 'c7c304a4-5787-487d-9458-cf4d5264a388';
    $display->content['new-c7c304a4-5787-487d-9458-cf4d5264a388'] = $pane;
    $display->panels['left'][3] = 'new-c7c304a4-5787-487d-9458-cf4d5264a388';
    $pane = new stdClass();
    $pane->pid = 'new-31e9463b-95a0-4374-b012-53bcf668141e';
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
    $pane->uuid = '31e9463b-95a0-4374-b012-53bcf668141e';
    $display->content['new-31e9463b-95a0-4374-b012-53bcf668141e'] = $pane;
    $display->panels['left'][4] = 'new-31e9463b-95a0-4374-b012-53bcf668141e';
    $pane = new stdClass();
    $pane->pid = 'new-250d216d-f130-4619-a174-b21cd97ee244';
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
    $pane->uuid = '250d216d-f130-4619-a174-b21cd97ee244';
    $display->content['new-250d216d-f130-4619-a174-b21cd97ee244'] = $pane;
    $display->panels['left'][5] = 'new-250d216d-f130-4619-a174-b21cd97ee244';
    $pane = new stdClass();
    $pane->pid = 'new-b0b95e5e-16d3-4a30-9c6b-0f61f4f9d1ca';
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
    $pane->uuid = 'b0b95e5e-16d3-4a30-9c6b-0f61f4f9d1ca';
    $display->content['new-b0b95e5e-16d3-4a30-9c6b-0f61f4f9d1ca'] = $pane;
    $display->panels['middle'][0] = 'new-b0b95e5e-16d3-4a30-9c6b-0f61f4f9d1ca';
    $pane = new stdClass();
    $pane->pid = 'new-1ea85cdb-04b0-4b46-9f37-2b1a77bad952';
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
    $pane->uuid = '1ea85cdb-04b0-4b46-9f37-2b1a77bad952';
    $display->content['new-1ea85cdb-04b0-4b46-9f37-2b1a77bad952'] = $pane;
    $display->panels['middle'][1] = 'new-1ea85cdb-04b0-4b46-9f37-2b1a77bad952';
    $pane = new stdClass();
    $pane->pid = 'new-22e8610e-5c85-42aa-a968-632c109268d5';
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
    $pane->uuid = '22e8610e-5c85-42aa-a968-632c109268d5';
    $display->content['new-22e8610e-5c85-42aa-a968-632c109268d5'] = $pane;
    $display->panels['middle'][2] = 'new-22e8610e-5c85-42aa-a968-632c109268d5';
    $pane = new stdClass();
    $pane->pid = 'new-31e0e2f6-3513-4102-acbb-be2f22c7d6e5';
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
    $pane->uuid = '31e0e2f6-3513-4102-acbb-be2f22c7d6e5';
    $display->content['new-31e0e2f6-3513-4102-acbb-be2f22c7d6e5'] = $pane;
    $display->panels['middle'][3] = 'new-31e0e2f6-3513-4102-acbb-be2f22c7d6e5';
    $pane = new stdClass();
    $pane->pid = 'new-bcd18cbf-acc1-43f2-9d3b-ef40656bf36b';
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
    $pane->uuid = 'bcd18cbf-acc1-43f2-9d3b-ef40656bf36b';
    $display->content['new-bcd18cbf-acc1-43f2-9d3b-ef40656bf36b'] = $pane;
    $display->panels['middle'][4] = 'new-bcd18cbf-acc1-43f2-9d3b-ef40656bf36b';
    $pane = new stdClass();
    $pane->pid = 'new-d68c4d84-3075-4c9c-b434-e6ad558e4abe';
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
    $pane->uuid = 'd68c4d84-3075-4c9c-b434-e6ad558e4abe';
    $display->content['new-d68c4d84-3075-4c9c-b434-e6ad558e4abe'] = $pane;
    $display->panels['middle'][5] = 'new-d68c4d84-3075-4c9c-b434-e6ad558e4abe';
    $pane = new stdClass();
    $pane->pid = 'new-b108dd61-8a56-4c09-a620-46b245ef0f30';
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
    $pane->uuid = 'b108dd61-8a56-4c09-a620-46b245ef0f30';
    $display->content['new-b108dd61-8a56-4c09-a620-46b245ef0f30'] = $pane;
    $display->panels['right'][0] = 'new-b108dd61-8a56-4c09-a620-46b245ef0f30';
    $pane = new stdClass();
    $pane->pid = 'new-763f934f-1e9f-416e-97a7-1a6279c69c5d';
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
    $pane->uuid = '763f934f-1e9f-416e-97a7-1a6279c69c5d';
    $display->content['new-763f934f-1e9f-416e-97a7-1a6279c69c5d'] = $pane;
    $display->panels['right'][1] = 'new-763f934f-1e9f-416e-97a7-1a6279c69c5d';
    $pane = new stdClass();
    $pane->pid = 'new-e1f4eaab-d57f-441a-b907-fde8214686c4';
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
    $pane->uuid = 'e1f4eaab-d57f-441a-b907-fde8214686c4';
    $display->content['new-e1f4eaab-d57f-441a-b907-fde8214686c4'] = $pane;
    $display->panels['right'][2] = 'new-e1f4eaab-d57f-441a-b907-fde8214686c4';
    $pane = new stdClass();
    $pane->pid = 'new-6f475a0c-f4a5-4530-b00d-15f059572955';
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
    $pane->uuid = '6f475a0c-f4a5-4530-b00d-15f059572955';
    $display->content['new-6f475a0c-f4a5-4530-b00d-15f059572955'] = $pane;
    $display->panels['right'][3] = 'new-6f475a0c-f4a5-4530-b00d-15f059572955';
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
  $display->uuid = '4f405dcd-2a8c-49c5-84c9-3766747f923a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8223d7c0-827f-4c6e-b56d-9ae973ea8d8e';
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
    $pane->uuid = '8223d7c0-827f-4c6e-b56d-9ae973ea8d8e';
    $display->content['new-8223d7c0-827f-4c6e-b56d-9ae973ea8d8e'] = $pane;
    $display->panels['middle'][0] = 'new-8223d7c0-827f-4c6e-b56d-9ae973ea8d8e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8223d7c0-827f-4c6e-b56d-9ae973ea8d8e';
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
