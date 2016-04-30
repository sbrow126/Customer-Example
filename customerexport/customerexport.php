<?php
/**
 * @file
 * Code for the CustomerExport feature.
 */

include_once 'customerexport.features.inc';

 function customersample_menu ()
{

     $items['customersample/customer-listing '] = array(
      'title' => t('All Customer Information'),
	  'description' => 'This page displays all current customer data', 
      'access callback' => TRUE,
	  //'access arguments' => array(),
	  'page callback' => 'customersample_customerlisting',
      'type' => MENU_NORMAL_ITEM,
    );
	


  return $items;
}



function customersample_customerlisting ()
{

//echo '<pre>'; print_r($existing); echo '</pre>';	
//exit(1);
$output = array();

$type = "customerexport"; 
$nodes = node_load_multiple(array(), array('type' => $type)); 
foreach($nodes as $nodes)
{
    
    $formname = $node->nid;
      $formcontent = '<b>Full Name:</b> ' . $node->fullname . '<br><b>Address:</b> ' . $node->address . '<br><b>Phone</b>: ' . $node->phone . '<br><b>Email: </b>' . $node->email . '<br><b> Born on:</b></b> ' . $node->dateofbirth . '<br><br>';
     $output[] = array( 
    $formname => array(
      '#type' => 'markup',
      '#markup' => $formcontent)) ;
  }
      // Do something with:
      //    $node->name']
      //    $node->quantity']


	 return $output; 
	

}




