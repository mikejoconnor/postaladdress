<?php
/**
 * @file
 * Contains filter handlers for protocol filters with views.
 */

/**
 * Filter handler for limiting a view to URLs of a certain protocol.
 */

class postaladdress_views_handler_filter_protocol extends views_handler_filter_string {
  /**
   * Set defaults for the filter options.
   */
  function options(&$options) {
    parent::options($options);
    $options['operator'] = 'OR';
    //    $options['value'] = 'us';
    //    $options['case'] = 0;
  }

  /**
   * Define the operators supported for protocols.
   */
  function operators() {
    $operators = array(
      'OR' => array(
        'title' => t('Is one of'),
        'short' => t('='),
        'method' => 'op_country',
        'values' => 1,
      ),
    );
//echo 'hola';die('');
    return $operators;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['case'] = array(
      '#type' => 'value',
      '#value' => 0,
    );
echo 'hola';
die('');
  }

  /**
   * Provide a select list to choose the desired protocols.
   */
  function value_form(&$form, &$form_state) {
    $form['value'] = array(
      '#type' => 'select',
      '#title' => t('Country'),
      '#default_value' => $this->value,
      '#options' => array('us', 'fr'),
      '#multiple' => 0,
      '#size' => 4,
      '#description' => t('Choose a country')
    );
echo 'hola2';
die('');
  }

  /**
   * Filter down the query to include only the selected countries
   */
  function op_country($field, $upper) {
    die('');
    global $db_type;

    $countries = $this->value;

    $where_conditions = array();
    foreach ($countries as $country) {
      // Simple case, the URL begins with the specified protocol.
      $condition = $field .' LIKE \''. $country . '\'';
      $where_conditions[] = $condition;
    }

    $this->query->add_where($this->options['group'], implode(' '. $this->operator .' ', $where_conditions));
echo 'hola3';
die('');
  }

}
