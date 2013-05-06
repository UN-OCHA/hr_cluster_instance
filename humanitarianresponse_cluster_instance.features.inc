<?php
/**
 * @file
 * humanitarianresponse_cluster_instance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_cluster_instance_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_cluster_instance_node_info() {
  $items = array(
    'cluster_instance' => array(
      'name' => t('Cluster Instance'),
      'base' => 'node_content',
      'description' => t('An instance of a cluster, activated in a specific country'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
