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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
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
    $display->content['new-2'] = $pane;
    $display->panels['center'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
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
    $display->content['new-3'] = $pane;
    $display->panels['center'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
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
    $display->content['new-4'] = $pane;
    $display->panels['center'][2] = 'new-4';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5';
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
    $display->content['new-5'] = $pane;
    $display->panels['middle'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['middle'][1] = 'new-6';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['center'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['center'][1] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
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
    $display->content['new-9'] = $pane;
    $display->panels['center'][2] = 'new-9';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-7';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10';
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
    $display->content['new-10'] = $pane;
    $display->panels['center_'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
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
    $display->content['new-11'] = $pane;
    $display->panels['center_'][1] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
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
    $display->content['new-12'] = $pane;
    $display->panels['center_'][2] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
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
    $display->content['new-13'] = $pane;
    $display->panels['center_'][3] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
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
    $display->content['new-14'] = $pane;
    $display->panels['center_'][4] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
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
    $display->content['new-15'] = $pane;
    $display->panels['center_'][5] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
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
    $display->content['new-16'] = $pane;
    $display->panels['center_'][6] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
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
    $display->content['new-17'] = $pane;
    $display->panels['center_'][7] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
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
    $display->content['new-18'] = $pane;
    $display->panels['left'][0] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
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
    $display->content['new-19'] = $pane;
    $display->panels['left'][1] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
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
    $display->content['new-20'] = $pane;
    $display->panels['left'][2] = 'new-20';
    $pane = new stdClass();
    $pane->pid = 'new-21';
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
    $display->content['new-21'] = $pane;
    $display->panels['left'][3] = 'new-21';
    $pane = new stdClass();
    $pane->pid = 'new-22';
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
    $display->content['new-22'] = $pane;
    $display->panels['left'][4] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
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
    $display->content['new-23'] = $pane;
    $display->panels['left'][5] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
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
    $display->content['new-24'] = $pane;
    $display->panels['right'][0] = 'new-24';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-25';
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
    $display->content['new-25'] = $pane;
    $display->panels['center_'][0] = 'new-25';
    $pane = new stdClass();
    $pane->pid = 'new-26';
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
    $display->content['new-26'] = $pane;
    $display->panels['left'][0] = 'new-26';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
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
    'name' => 'primary-links',
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
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
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'google_cse-0';
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
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-3'] = $pane;
    $display->panels['left'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'addthis-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Share This',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-4'] = $pane;
    $display->panels['left'][2] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
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
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][3] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['middle'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['middle'][1] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['middle'][2] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
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
    $display->content['new-9'] = $pane;
    $display->panels['right'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
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
    $display->content['new-10'] = $pane;
    $display->panels['right'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
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
    $display->content['new-11'] = $pane;
    $display->panels['right'][2] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
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
    $display->content['new-12'] = $pane;
    $display->panels['right'][3] = 'new-12';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13';
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
    $display->content['new-13'] = $pane;
    $display->panels['left'][0] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'privatemsg email notification disabled',
            'php' => 'global $user;

drupal_load(\'module\', \'pm_email_notify\');
return _pm_email_notify_user_level($user->uid);



',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Enable message notification',
      'title' => 'Message notification disabled',
      'body' => 'Warning - you currently have email notification for private messages disabled. This means you will have to log in to see if you have any new messages, and will not be notified automatically via email. <p>To change this option, check the "Receive email notification for incoming private messages" checkbox on your <a href=\'%user:account-edit-url\'>user account</a> page.',
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
    $display->content['new-14'] = $pane;
    $display->panels['left'][1] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
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
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-15'] = $pane;
    $display->panels['left'][2] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'google_cse-0';
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
    $pane->position = 3;
    $pane->locks = '';
    $display->content['new-16'] = $pane;
    $display->panels['left'][3] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'addthis-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Share This',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $display->content['new-17'] = $pane;
    $display->panels['left'][4] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
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
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-18'] = $pane;
    $display->panels['left'][5] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
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
    $display->content['new-19'] = $pane;
    $display->panels['middle'][0] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
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
    $display->content['new-20'] = $pane;
    $display->panels['middle'][1] = 'new-20';
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'file has been downloaded.',
            'php' => 'module_load_include(\'inc\', \'BDW_custom_changes\');
return BDW_custom_changes_FileHasBeenDownloaded(\'NewMexicoFrugalShunpiker.pdf\');
',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 15,
              1 => 20,
            ),
          ),
          'context' => 'context_user_1',
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
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Download a file',
      'title' => 'Free File Download Available',
      'body' => 'You have been granted access to free files that you have not yet retrieved! You can retrieve <b>"The Frugal Shunpiker\'s Guide to RV Boondocking in New Mexico"</b> for no charge.

<b><a href=\'/content/frugal-shunpikers-guide-rv-boondocking-new-mexico-0\'>Download it now</a>.</b>',
      'format' => '2',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-21'] = $pane;
    $display->panels['middle'][2] = 'new-21';
    $pane = new stdClass();
    $pane->pid = 'new-22';
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
    $pane->position = 3;
    $pane->locks = '';
    $display->content['new-22'] = $pane;
    $display->panels['middle'][3] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
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
    $pane->position = 4;
    $pane->locks = '';
    $display->content['new-23'] = $pane;
    $display->panels['middle'][4] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
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
    $pane->position = 5;
    $pane->locks = '';
    $display->content['new-24'] = $pane;
    $display->panels['middle'][5] = 'new-24';
    $pane = new stdClass();
    $pane->pid = 'new-25';
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
    $pane->position = 6;
    $pane->locks = '';
    $display->content['new-25'] = $pane;
    $display->panels['middle'][6] = 'new-25';
    $pane = new stdClass();
    $pane->pid = 'new-26';
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
    $display->content['new-26'] = $pane;
    $display->panels['right'][0] = 'new-26';
    $pane = new stdClass();
    $pane->pid = 'new-27';
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
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-27'] = $pane;
    $display->panels['right'][1] = 'new-27';
    $pane = new stdClass();
    $pane->pid = 'new-28';
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
    $pane->position = 2;
    $pane->locks = '';
    $display->content['new-28'] = $pane;
    $display->panels['right'][2] = 'new-28';
    $pane = new stdClass();
    $pane->pid = 'new-29';
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
    $pane->position = 3;
    $pane->locks = '';
    $display->content['new-29'] = $pane;
    $display->panels['right'][3] = 'new-29';
    $pane = new stdClass();
    $pane->pid = 'new-30';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'testimonials-testmonials_pane';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $display->content['new-30'] = $pane;
    $display->panels['right'][4] = 'new-30';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-31';
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
    $display->content['new-31'] = $pane;
    $display->panels['middle'][0] = 'new-31';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-31';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-32';
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
    $display->content['new-32'] = $pane;
    $display->panels['middle'][0] = 'new-32';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-32';
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-33';
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
    $display->content['new-33'] = $pane;
    $display->panels['middle'][0] = 'new-33';
    $pane = new stdClass();
    $pane->pid = 'new-34';
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
    $display->content['new-34'] = $pane;
    $display->panels['middle'][1] = 'new-34';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['searchbynamepanels'] = $page;

  return $pages;

}
