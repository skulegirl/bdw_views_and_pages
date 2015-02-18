<?php
/**
 * @file
 * bdw_views_and_pages.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function bdw_views_and_pages_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'proud_member_of';
  $content->admin_title = 'Proud Member Of:';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Proud Member Of:',
    'title' => 'Proud Member Of',
    'body' => '<div id="ProudMemberOfContent">
<div class="ProudMemberOfImg"><img src="/sites/boondockerswelcome.com/files/media/MemberOfLogos/EscapeeLogo.jpg"></div>
<div class="ProudMemberOfImg"><img src="/sites/boondockerswelcome.com/files/media/MemberOfLogos/fmca-logo-commercial_150x112.jpg"></div>
</div>',
    'format' => '5',
    'substitute' => TRUE,
  );
  $export['proud_member_of'] = $content;

  return $export;
}
