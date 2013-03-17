<?php
/**
 * @file
 * partner_listing.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function partner_listing_ccl_features_preset() {
  return array(
    'Add partner' => array(
      'type' => 'local_action',
      'title' => 'Add partner',
      'link' => 'node/add/partner',
      'options' => 'a:15:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"article";s:7:"node_id";s:14:" [nid: [nid:]]";s:12:"block_global";i:0;s:12:"block_select";a:0:{}s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:8:"partners";s:8:"la_types";a:5:{s:7:"article";i:0;s:4:"page";i:0;s:13:"media_gallery";i:0;s:7:"partner";i:0;s:7:"product";i:0;}s:8:"la_roles";a:3:{i:2;s:1:"2";i:1;i:0;i:3;i:0;}s:12:"view_options";s:1:"2";s:12:"view_display";s:14:"parters|page_1";s:9:"view_view";s:4:"news";}',
    ),
    'Manage partners' => array(
      'type' => 'local_action',
      'title' => 'Manage partners',
      'link' => 'admin/manage-partners',
      'options' => 'a:15:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:15:"advanced_target";s:7:"default";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"article";s:7:"node_id";s:0:"";s:12:"block_global";i:0;s:12:"block_select";a:0:{}s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:8:"partners";s:8:"la_types";a:5:{s:7:"article";i:0;s:4:"page";i:0;s:13:"media_gallery";i:0;s:7:"partner";i:0;s:7:"product";i:0;}s:8:"la_roles";a:3:{i:1;i:0;i:2;i:0;i:3;i:0;}s:12:"view_options";s:1:"0";s:12:"view_display";s:12:"news|default";s:9:"view_view";s:4:"news";}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function partner_listing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function partner_listing_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function partner_listing_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
