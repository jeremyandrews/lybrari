<?php

/** 
* Implementation of hook_views_data  
*/

function  lybrari_views_data(){
  error_log("Loading views");
 
  /*
   * TABLES
   */
   
  /*  BASE TABLES  */
  
  /* books */
  $data['books']['table']['group']  = t('Content');
  $data['books']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Books'),
    'weight' => -10,
    'access query tag' => 'node_access',
    'defaults' => array(
      'field' => 'title',
    ),
    'database'  => 'calibre',
  ); 
  
  /* authors */
  $data['authors']['table']['group']  = t('Content');
  $data['authors']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Authors'),
    'weight' => -10,
    'access query tag' => 'node_access',
    'defaults' => array(
      'field' => 'title',
    ),
    'database'  => 'calibre',
  ); 

  /* publishers */
  $data['publishers']['table']['group']  = t('Content');
  $data['publishers']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Publishers'),
    'weight' => -10,
    'access query tag' => 'node_access',
    'defaults' => array(
      'field' => 'name',
    ),
    'database'  => 'calibre',
  ); 
  
  /* series */
  $data['series']['table']['group']  = t('Content');
  $data['series']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Series'),
    'weight' => -10,
    'access query tag' => 'node_access',
    'defaults' => array(
      'field' => 'title',
    ),
    'database'  => 'calibre',
  ); 

  /* tags */
  $data['tags']['table']['group']  = t('Content');
  $data['tags']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Tags'),
    'weight' => -10,
    'access query tag' => 'node_access',
    'defaults' => array(
      'field' => 'title',
    ),
    'database'  => 'calibre',
  ); 
  
  
  /* JOINS TABLES */
  
  /* Authors */
  $data['authors']['table']['group']  = t('Content');
  $data['authors']['table']['join']['books'] = array(
    'left_table'  => 'books_authors_link',
    'left_field'  => 'author',
    'field' => 'id',
  );
  
  $data['books_authors_link']['table']['join']['books'] = array(
    'left_field'  => 'id',
    'field' => 'book',
  );
  
  
  /* Publishers */
  $data['publishers']['table']['group']  = t('Content');
  $data['publishers']['table']['join']['books'] = array(
    'left_table'  => 'books_publishers_link',
    'left_field'  => 'publisher',
    'field' => 'id',
  );
  
  $data['books_publishers_link']['table']['join']['books'] = array(
    'left_field'  => 'id',
    'field' => 'book',
  );
  
  /* Series */
  $data['series']['table']['group']  = t('Content');
  $data['series']['table']['join']['books'] = array(
    'left_table'  => 'books_series_link',
    'left_field'  => 'series',
    'field' => 'id',
  );
  
  $data['books_series_link']['table']['join']['books'] = array(
    'left_field'  => 'id',
    'field' => 'book',
  );
  

  /* Tags */
  $data['tags']['table']['group']  = t('Content');
  $data['tags']['table']['join']['books'] = array(
    'left_table'  => 'books_tags_link',
    'left_field'  => 'tag',
    'field' => 'id',
  );
  
  $data['books_tags_link']['table']['join']['books'] = array(
    'left_field'  => 'id',
    'field' => 'book',
  );
  
  /* Comments */
  $data['comments']['table']['group']  = t('Content');
  $data['comments']['table']['join']['books'] = array(
    'left_field'  => 'id',
    'field' => 'book',
  );
  

    
  /*
   * FIELDS
   */
  
  
  /* Books */ 
  $data['books']['title'] = array(
    'title' => t('Title'), // The item it appears as on the UI,
    'help' => t('The content title.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'title', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'link_to_node default' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );

   $data['books']['id'] = array(
    'title' => t('Book Id'), // The item it appears as on the UI,
    'help' => t('The book Id.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'id', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'link_to_node default' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ), 
  );
  
  $data['books']['path'] = array(
    'title' => t('Path'), // The item it appears as on the UI,
    'help' => t('The files path.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'path', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field',
      'click sortable' => FALSE,
      'link_to_node default' => FALSE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );
  
  $data['books']['timestamp'] = array(
    'title' => t('Date creation'), // The item it appears as on the UI,
    'help' => t('The date creation of record.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'timestamp', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_date',
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ), 
  );
  
  $data['books']['has_cover'] = array(
    'title' => t('Has Cover'), // The item it appears as on the UI,
    'help' => t('The e-book has cover.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'has_cover', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_boolena',
      'click sortable' => FALSE,
      'link_to_node default' => FALSE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'type' => 'yes-no',
      'use equal' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );

  /* Authors */
  $data['authors']['name'] = array(
    'title' => t('Author'), // The item it appears as on the UI,
    'help' => t('The author name.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'name', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'link_to_node default' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );

  $data['authors']['id'] = array(
    'title' => t('Author Id'), // The item it appears as on the UI,
    'help' => t('The author Id.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'id', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ), 
  );
  
  
  /* publishers */
  $data['publishers']['name'] = array(
    'title' => t('Publisher'), // The item it appears as on the UI,
    'help' => t('The publisher name.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'name', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'link_to_node default' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );
  

  $data['publishers']['id'] = array(
    'title' => t('Publisher Id'), // The item it appears as on the UI,
    'help' => t('The publisher Id.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'id', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ), 
  );  

  /* series */
  $data['series']['name'] = array(
    'title' => t('Series'), // The item it appears as on the UI,
    'help' => t('The serie name.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'name', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'link_to_node default' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );
  

  $data['series']['id'] = array(
    'title' => t('Serie Id'), // The item it appears as on the UI,
    'help' => t('The serie Id.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'id', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ), 
  );  


  /* tags */
  $data['tags']['name'] = array(
    'title' => t('Tags'), // The item it appears as on the UI,
    'help' => t('The tag name.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'name', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'link_to_node default' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );
  

  $data['tags']['id'] = array(
    'title' => t('Tag Id'), // The item it appears as on the UI,
    'help' => t('The tag Id.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'id', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ), 
  );  
  
  /* comments */
  $data['comments']['name'] = array(
    'title' => t('Comments'), // The item it appears as on the UI,
    'help' => t('Books comments.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'field' => 'text', // the real field. This could be left out since it is the same.
      'group' => t('Content'), // The group it appears in on the UI. Could be left out.
      'handler' => 'views_handler_field_markup',
      'format' => 'full_html',
      'click sortable' => FALSE,
      'link_to_node default' => FALSE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Information for accepting a title as a filter
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ), 
  );
  
  return $data;
}
