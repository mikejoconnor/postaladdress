<?php
// $Id$

/**
 * @file
 * Default address handler.
 */

/**
 * Default address edit form.
 */
function postaladdress_form_default($address) {
  $form['thoroughfare'] = array(
    '#title' => t('Street'),
    '#type' => 'textfield',
    '#required' => true,
    '#default_value' => $address['thoroughfare'],
  );
  $form['premise'] = array(
    '#title' => t('Residence, building, ...'),
    '#type' => 'textfield',
    '#default_value' => $address['premise'],
  );
  $form['sub_premise'] = array(
    '#title' => t('Floor, stairway, ...'),
    '#type' => 'textfield',
    '#default_value' => $address['sub_premise'],
  );
  $form['dependent_locality'] = array(
    '#title' => t('Suburb, post box, ...'),
    '#type' => 'textfield',
    '#default_value' => $address['dependent_locality'],
  );
  $form['postal_code'] = array(
    '#title' => t('Postal Code'),
    '#type' => 'textfield',
    '#size' => 5,
    '#required' => true,
    '#default_value' => $address['postal_code'],
  );
  $form['locality'] = array(
    '#title' => t('City'),
    '#type' => 'textfield',
    '#size' => 30,
    '#required' => true,
    '#default_value' => $address['locality'],
  );

  // All the other fields are unsupported by this handler.
  foreach (array('administrative_area', 'sub_administrative_area') as $field) {
    $form[$field] = array(
      '#type' => 'value',
      '#value' => '',
    );
  }
  return $form;
}

