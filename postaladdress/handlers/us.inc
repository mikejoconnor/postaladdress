<?php
// $Id$

/**
 * @file
 * Address handler for the United States.
 */

/**
 * Form callback for editing US addresses.
 */
function postaladdress_form_us($address) {
  $form['thoroughfare'] = array(
    '#title' => t('Street'),
    '#type' => 'textfield',
    '#required' => true,
    '#default_value' => $address['thoroughfare'],
  );
  $form['premise'] = array(
    '#title' => t('Premise'),
    '#type' => 'textfield',
    '#default_value' => $address['premise'],
  );
  $form['locality'] = array(
    '#title' => t('City'),
    '#type' => 'textfield',
    '#size' => 30,
    '#required' => true,
    '#default_value' => $address['locality'],
  );
  $form['postal_code'] = array(
    '#title' => t('ZIP Code'),
    '#type' => 'textfield',
    '#size' => 5,
    '#required' => true,
    '#default_value' => $address['postal_code'],
  );
  $form['administrative_area'] = array(
    '#title' => t('State'),
    '#type' => 'select',
    '#default_value' => $address['administrative_area'],
    '#required' => TRUE,
    '#options' => array(
      ''   => t('--'),
      'AL' => t('Alabama'),
      'AK' => t('Alaska'),
      'AZ' => t('Arizona'),
      'AR' => t('Arkansas'),
      'CA' => t('California'),
      'CO' => t('Colorado'),
      'CT' => t('Connecticut'),
      'DE' => t('Delaware'),
      'DC' => t('District Of Columbia'),
      'FL' => t('Florida'),
      'GA' => t('Georgia'),
      'HI' => t('Hawaii'),
      'ID' => t('Idaho'),
      'IL' => t('Illinois'),
      'IN' => t('Indiana'),
      'IA' => t('Iowa'),
      'KS' => t('Kansas'),
      'KY' => t('Kentucky'),
      'LA' => t('Louisiana'),
      'ME' => t('Maine'),
      'MD' => t('Maryland'),
      'MA' => t('Massachusetts'),
      'MI' => t('Michigan'),
      'MN' => t('Minnesota'),
      'MS' => t('Mississippi'),
      'MO' => t('Missouri'),
      'MT' => t('Montana'),
      'NE' => t('Nebraska'),
      'NV' => t('Nevada'),
      'NH' => t('New Hampshire'),
      'NJ' => t('New Jersey'),
      'NM' => t('New Mexico'),
      'NY' => t('New York'),
      'NC' => t('North Carolina'),
      'ND' => t('North Dakota'),
      'OH' => t('Ohio'),
      'OK' => t('Oklahoma'),
      'OR' => t('Oregon'),
      'PA' => t('Pennsylvania'),
      'RI' => t('Rhode Island'),
      'SC' => t('South Carolina'),
      'SD' => t('South Dakota'),
      'TN' => t('Tennessee'),
      'TX' => t('Texas'),
      'UT' => t('Utah'),
      'VT' => t('Vermont'),
      'VA' => t('Virginia'),
      'WA' => t('Washington'),
      'WV' => t('West Virginia'),
      'WI' => t('Wisconsin'),
      'WY' => t('Wyoming'),

      'AS' => t('American Samoa'),
      'FM' => t('Federated States of Micronesia'),
      'GU' => t('Guam'),
      'MH' => t('Marshall Islands'),
      'MP' => t('Northern Mariana Islands'),
      'PW' => t('Palau'),
      'PR' => t('Puerto Rico'),
      'VI' => t('Virgin Islands'),
    ),
  );
  return $form;
}
