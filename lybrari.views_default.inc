<?php

function lybrari_views_default_views(){
  $views = array();
  $path = drupal_get_path('module', 'lybrari') . '/includes/';
  require_once($path.'authors_view.inc');
  $views['lybrari_authors'] = lybrari_define_authors_view();
 
  require_once($path.'books_view.inc');
  $views['lybrari_books'] = lybrari_define_books_view();
 
  require_once($path.'catalog_view.inc');
  $views['lybrari_catalog'] = lybrari_define_catalog_view();
 
  require_once($path.'lasts_view.inc');
  $views['lybrari_lasts'] = lybrari_define_lasts_view();
 
  require_once($path.'publishers_view.inc');
  $views['lybrari_publishers'] = lybrari_define_publishers_view();
 
  require_once($path.'series_view.inc');
  $views['lybrari_series'] = lybrari_define_series_view();

  require_once($path.'slider_view.inc');
  $views['lybrari_slider'] = lybrari_define_slider_view();
 
  require_once($path.'tags_view.inc');
  $views['lybrari_tags'] = lybrari_define_tags_view();
 
  return $views;
}
