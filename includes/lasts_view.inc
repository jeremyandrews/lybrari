<?php

function lybrari_define_lasts_view(){
  $view = new view();
  $view->name = 'lybrari_lasts_books';
  $view->description = 'Last books grid';
  $view->tag = 'lybrari server';
  $view->base_table = 'books';
  $view->human_name = 'Lasts books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE;

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Book Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'books';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Campo: Contenido: Tag Id */
  $handler->display->display_options['fields']['id_4']['id'] = 'id_4';
  $handler->display->display_options['fields']['id_4']['table'] = 'tags';
  $handler->display->display_options['fields']['id_4']['field'] = 'id';
  $handler->display->display_options['fields']['id_4']['label'] = '';
  $handler->display->display_options['fields']['id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_4']['separator'] = '';
  /* Campo: Contenido: Publisher Id */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'publishers';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_2']['separator'] = '';
  /* Campo: Contenido: Author Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'authors';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['label'] = '';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Campo: Contenido: Serie Id */
  $handler->display->display_options['fields']['id_3']['id'] = 'id_3';
  $handler->display->display_options['fields']['id_3']['table'] = 'series';
  $handler->display->display_options['fields']['id_3']['field'] = 'id';
  $handler->display->display_options['fields']['id_3']['label'] = '';
  $handler->display->display_options['fields']['id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_3']['separator'] = '';
  /* Campo: Contenido: Ruta */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'books';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  // @todo: $handler->display->display_options['fields']['path']['alter']['text'] = '<img src="/sites/default/files/calibre/[path]/cover.jpg" />';
  $handler->display->display_options['fields']['path']['alter']['text'] = '<img src="/calibre/[path]/cover.jpg" />';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'books';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'books-view/[id] ';
  /* Campo: Contenido: Autor */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'authors';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'books-author-list/[id_1]/[name]';
  /* Campo: Contenido: Etiquetas */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'tags';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '[name_1]';
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'books-tag-list/[id_4]/[name_1]';
  /* Campo: Contenido: Publisher */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'publishers';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2] ';
  $handler->display->display_options['fields']['name_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'books-publisher-list/[id_2]/[name_2]';
  /* Campo: Contenido: Series */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'series';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_3']['alter']['text'] = '[name_3]';
  $handler->display->display_options['fields']['name_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_3']['alter']['path'] = 'books-serie-list/[id_3]/[name_3]';
  /* Campo: Contenido: Ruta */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'books';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'Descargar';
  /* Criterio de ordenación: Contenido: Date creation */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'books';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Has Cover */
  $handler->display->display_options['filters']['has_cover']['id'] = 'has_cover';
  $handler->display->display_options['filters']['has_cover']['table'] = 'books';
  $handler->display->display_options['filters']['has_cover']['field'] = 'has_cover';
  $handler->display->display_options['filters']['has_cover']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lasts-books';
  $translatables['lasts_books'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    // @todo: t('<img src="/sites/default/files/calibre/[path]/cover.jpg" />'),
    t('<img src="/calibre/[path]/cover.jpg" />'),
    t('Title'),
    t('[title]'),
    t('Author'),
    t('[name]'),
    t('Tags'),
    t('[name_1]'),
    t('Publisher'),
    t('[name_2] '),
    t('Series'),
    t('[name_3]'),
    t('Download'),
    t('Page'),
    t('Last books grid'),
  );
  return $view;
}
