<?php

function lybrari_views_default_views(){
  $views = array();

  // Book listings by author.
  require_once(drupal_get_path('module', 'lybrari') . '/includes/authors_view.inc');
  $views['lybrari_authors'] = lybrari_define_authors_view();

  // Book listings by publisher.
  require_once(drupal_get_path('module', 'lybrari') . '/includes/publishers_view.inc');
  $views['lybrari_publishers'] = lybrari_define_publishers_view();

  // Book listings by series.
  require_once(drupal_get_path('module', 'lybrari') . '/includes/series_view.inc');
  $views['lybrari_series'] = lybrari_define_series_view();

  // Book listings by tag.
  require_once(drupal_get_path('module', 'lybrari') . '/includes/tags_view.inc');
  $views['lybrari_tags'] = lybrari_define_tags_view();

  // Searchable book overview.
  require_once(drupal_get_path('module', 'lybrari') . '/includes/lybrari_view.inc');
  $views['lybrari_lybrari'] = lybrari_define_lybrari_view();

  return $views;
}
