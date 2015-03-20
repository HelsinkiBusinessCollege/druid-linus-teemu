<?php
/**
 * @file
 * ruokalista.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ruokalista_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ruokalista';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ruokalista';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ruokalista';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Ruokalaji */
  $handler->display->display_options['fields']['field_ruokalaji']['id'] = 'field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['table'] = 'field_data_field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['field'] = 'field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['delta_offset'] = '0';
  /* Field: Content: Päivä */
  $handler->display->display_options['fields']['field_paiva']['id'] = 'field_paiva';
  $handler->display->display_options['fields']['field_paiva']['table'] = 'field_data_field_paiva';
  $handler->display->display_options['fields']['field_paiva']['field'] = 'field_paiva';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ruokalista' => 'ruokalista',
  );
  /* Filter criterion: Content: Päivä (field_paiva) */
  $handler->display->display_options['filters']['field_paiva_value']['id'] = 'field_paiva_value';
  $handler->display->display_options['filters']['field_paiva_value']['table'] = 'field_data_field_paiva';
  $handler->display->display_options['filters']['field_paiva_value']['field'] = 'field_paiva_value';
  $handler->display->display_options['filters']['field_paiva_value']['expose']['operator_id'] = 'field_paiva_value_op';
  $handler->display->display_options['filters']['field_paiva_value']['expose']['label'] = 'Päivä (field_paiva)';
  $handler->display->display_options['filters']['field_paiva_value']['expose']['operator'] = 'field_paiva_value_op';
  $handler->display->display_options['filters']['field_paiva_value']['expose']['identifier'] = 'field_paiva_value';
  $handler->display->display_options['filters']['field_paiva_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_paiva_value']['year_range'] = '-0:+0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Ruokalaji */
  $handler->display->display_options['fields']['field_ruokalaji']['id'] = 'field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['table'] = 'field_data_field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['field'] = 'field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ruokalaji']['multi_type'] = 'ul';
  $handler->display->display_options['block_description'] = 'Päivän ruokalista';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Ruokalaji */
  $handler->display->display_options['fields']['field_ruokalaji']['id'] = 'field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['table'] = 'field_data_field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['field'] = 'field_ruokalaji';
  $handler->display->display_options['fields']['field_ruokalaji']['delta_offset'] = '0';
  /* Field: Content: Päivä */
  $handler->display->display_options['fields']['field_paiva']['id'] = 'field_paiva';
  $handler->display->display_options['fields']['field_paiva']['table'] = 'field_data_field_paiva';
  $handler->display->display_options['fields']['field_paiva']['field'] = 'field_paiva';
  $handler->display->display_options['fields']['field_paiva']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'json/%';
  $translatables['ruokalista'] = array(
    t('Master'),
    t('Ruokalista'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Ruokalaji'),
    t('Päivä'),
    t('Päivä (field_paiva)'),
    t('Block'),
    t('Päivän ruokalista'),
    t('Page'),
  );
  $export['ruokalista'] = $view;

  return $export;
}
