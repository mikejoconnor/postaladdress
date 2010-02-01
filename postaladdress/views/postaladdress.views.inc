<?php
/**
 * Implementation of hook_views_handlers().
 */
function postaladdress_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'postaladdress') .'/views',
      ),
    'handlers' => array(
      'postaladdress_views_handler_filter_protocol' => array(
        'parent' => 'views_handler_filter_string',
      ),
//      'views_handler_field_postaladdress' => array(
//        'parent' => 'content_handler_field_multiple',
//      ),
    ),
  );
}

function profile_views_content_field_data($field) {
      $data = content_views_field_views_data($field);
      $db_info = content_database_info($field);
      $table_alias = content_views_tablename($field);

  // NFC From link module: Views filter for the link "protocol" pseudo field. link.views.inc
  // TODO: Add a protocol argument.
  //$data[$table_alias][$field['field_name'] . '_country'] = array()
//echo $table_alias . $field['field_name'] . '_country';
   $data[$table_alias][$field['field_name'] . '_country'] = array(
    'group' => t('Content'),
    'title' => t('Country1'),
    'help' => t('Good luck amigo!'),
    'filter' => array(
      'field' => $db_info['columns']['country']['column'],
      'title' => t('Country2'),
      'tablename' => $db_info['table'],
      'handler' => 'postaladdress_views_handler_filter_protocol',
      'additional fields' => array(),
      'content_field_name' => $field['field_name'],
      'allow_empty' => TRUE,
    ),
  );
    $zzz='r';

      return $data;
}