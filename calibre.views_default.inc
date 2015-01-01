<?php

function calibre_views_default_views(){
  $views = array();
  $path = drupal_get_path('module', 'calibre') . '/includes/';
  require_once($path.'authors_view.inc');
  $views['calibre_authors'] = calibre_define_authors_view();
 
  require_once($path.'books_view.inc');
  $views['calibre_books'] = calibre_define_books_view();
 
  require_once($path.'catalog_view.inc');
  $views['calibre_catalog'] = calibre_define_catalog_view();
 
  require_once($path.'lasts_view.inc');
  $views['calibre_lasts'] = calibre_define_lasts_view();
 
  require_once($path.'publishers_view.inc');
  $views['calibre_publishers'] = calibre_define_publishers_view();
 
  require_once($path.'series_view.inc');
  $views['calibre_series'] = calibre_define_series_view();

  require_once($path.'slider_view.inc');
  $views['calibre_slider'] = calibre_define_slider_view();
 
  require_once($path.'tags_view.inc');
  $views['calibre_tags'] = calibre_define_tags_view();
 
  return $views;
}
