<?php
/**
 * @file
 * simple_auto_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function simple_auto_dashboard_views_default_views() {
  $export = array();
$view = new view();
$view->name = 'dashboard';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'dashboard';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'لوحة التحكم';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'test';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '21600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '21600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'إعادة الضبط';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابقة';
$handler->display->display_options['pager']['options']['tags']['next'] = 'التالية ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
$handler->display->display_options['style_plugin'] = 'table';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'أضافة محتوى جديد';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<a href="/node/add/!1">أضافة %1</a>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['header']['area']['tokenize'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'تعديل';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = 'حذف';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['default_action'] = 'default';
$handler->display->display_options['arguments']['type']['exception']['title'] = 'الكل';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['type']['limit'] = '0';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['operator'] = '!=';
$handler->display->display_options['filters']['nid']['value']['value'] = '199';

/* Display: الصفحة */
$handler = $view->new_display('page', 'الصفحة', 'page_1');
$handler->display->display_options['path'] = 'manage';

  $export['dashboard'] = $view;

  return $export;
}
