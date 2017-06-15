<?php

/**
 * @file
 * simple auto dashboard module.
 */

/**
 * Implements hook_views_plugins().
 */
function simple_auto_dashboard_views_plugins() {
  $plugins = array(
    'access' => array(
       'test' => array(
          'title' => t('Simple auto dashboard acces'),
          'help' => t('Simple auto dashboard acces plugin.'),
          'handler' => 'simple_auto_dashboard_access_plugin',
      ),
    ),
  );
  return $plugins;
}

class simple_auto_dashboard_access_plugin extends views_plugin_access {

  function summary_title() {
    return t('Simple auto dashboard acces plugin');
  }

  function access($account) {
    return simple_auto_dashboard_url_access_check($account);
  }

  function get_access_callback() {
    return array('simple_auto_dashboard_url_access_check', array());
  }
}
