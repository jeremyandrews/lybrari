<?php

function lybrari_define_catalog_view(){
  $view = new view();
  $view->name = 'lybrari_catalog';
  $view->description = 'Books catalog with search form';
  $view->tag = 'lybrari server';
  $view->base_table = 'books';
  $view->human_name = 'lybrari_catalog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = t('Catalog');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alls -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Offset';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'name_1' => 'name_1',
    'name_2' => 'name_2',
    'name_3' => 'name_3',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenido: Id de la editorial */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'publishers';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Campo: Contenido: Id de la categoría */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'tags';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Campo: Contenido: Id de la serie */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'series';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['separator'] = '';
  /* Campo: Contenido: Id del autor */
  $handler->display->display_options['fields']['id_3']['id'] = 'id_3';
  $handler->display->display_options['fields']['id_3']['table'] = 'authors';
  $handler->display->display_options['fields']['id_3']['field'] = 'id';
  $handler->display->display_options['fields']['id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_3']['separator'] = '';
  /* Campo: Contenido: Id del libro */
  $handler->display->display_options['fields']['id_4']['id'] = 'id_4';
  $handler->display->display_options['fields']['id_4']['table'] = 'books';
  $handler->display->display_options['fields']['id_4']['field'] = 'id';
  $handler->display->display_options['fields']['id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_4']['separator'] = '';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'books';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'books-view/[id_4]';
  /* Campo: Contenido: Autor */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'authors';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'books-author-list/[id_3]/[name]';
  /* Campo: Contenido: Editorial */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'publishers';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '[name_1]';
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'books-publisher-list/[id_1]/[name_1]';
  /* Campo: Contenido: Etiquetas */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'tags';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2]';
  $handler->display->display_options['fields']['name_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'books-tag-list/[id]/[name_2]';
  /* Campo: Contenido: Series */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'series';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_3']['alter']['text'] = '[name_3]';
  $handler->display->display_options['fields']['name_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_3']['alter']['path'] = 'books-serie-list/[id_2]/[name_3]';
  /* Criterio de ordenación: Contenido: Título */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'books';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Criterios de filtrado: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'books';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Autor */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'authors';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Autor';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Editorial */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'publishers';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = 'word';
  $handler->display->display_options['filters']['name_1']['group'] = 1;
  $handler->display->display_options['filters']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Editorial';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Etiquetas */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'tags';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['operator'] = 'word';
  $handler->display->display_options['filters']['name_2']['group'] = 1;
  $handler->display->display_options['filters']['name_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_2']['expose']['operator_id'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['label'] = 'Etiqueta';
  $handler->display->display_options['filters']['name_2']['expose']['operator'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['identifier'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterios de filtrado: Contenido: Series */
  $handler->display->display_options['filters']['name_3']['id'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['table'] = 'series';
  $handler->display->display_options['filters']['name_3']['field'] = 'name';
  $handler->display->display_options['filters']['name_3']['operator'] = 'word';
  $handler->display->display_options['filters']['name_3']['group'] = 1;
  $handler->display->display_options['filters']['name_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_3']['expose']['operator_id'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['label'] = 'Serie';
  $handler->display->display_options['filters']['name_3']['expose']['operator'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['identifier'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lybrari-catalog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Catalog';
  $handler->display->display_options['menu']['description'] = 'Books catalog with search form';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'lybrari-library';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['lybrari_catalog'] = array(
    t('Master'),
    t('Catalog'),
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
    t('Publisher Id'),
    t('.'),
    t('Tag Id'),
    t('Serie Id'),
    t('Author Id'),
    t('Book Id'),
    t('Title'),
    t('Author'),
    t('Publisher'),
    t('Tag'),
    t('Serie'),
    t('Tag'),
    t('Serie'),
    t('Page'),
  );
  return $view;
}
