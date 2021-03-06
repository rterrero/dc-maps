<?php
/**
 * @file
 * getlocations_demo_dc_spain.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function getlocations_demo_dc_spain_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-poi_getlocations-body'
  $field_instances['node-poi_getlocations-body'] = array(
    'bundle' => 'poi_getlocations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-poi_getlocations-field_address'
  $field_instances['node-poi_getlocations-field_address'] = array(
    'bundle' => 'poi_getlocations',
    'default_value' => array(
      0 => array(
        'address' => '',
        'name' => '',
        'street' => '',
        'additional' => '',
        'city' => '',
        'province' => '',
        'postal_code' => '',
        'country' => '',
        'marker' => '',
        'latitude' => '',
        'longitude' => '',
        'active' => FALSE,
        'settings' => array(
          'autocomplete_bias' => 0,
          'baselayers' => array(
            'Hybrid' => 1,
            'Map' => 1,
            'OpenStreetMap' => 0,
            'Physical' => 1,
            'Satellite' => 1,
          ),
          'behavior' => array(
            'overview' => 0,
            'overview_opened' => 0,
            'scale' => 0,
            'scrollwheel' => 0,
          ),
          'circles_apply' => 0,
          'circles_clickable' => 0,
          'circles_coords' => '',
          'circles_enable' => 0,
          'circles_fillcolor' => '#FF0000',
          'circles_fillopacity' => 0.35,
          'circles_message' => '',
          'circles_radius' => 0,
          'circles_strokecolor' => '#FF0000',
          'circles_strokeopacity' => 0.8,
          'circles_strokeweight' => 3,
          'city_autocomplete' => 0,
          'comment_map_marker' => 'drupal',
          'controltype' => 'small',
          'country' => '',
          'draggable' => 1,
          'fullscreen' => 0,
          'geojson_data' => '',
          'geojson_enable' => 0,
          'geojson_options' => '',
          'input_additional_required' => 0,
          'input_additional_weight' => 0,
          'input_additional_width' => 40,
          'input_address_width' => 40,
          'input_city_required' => 0,
          'input_city_weight' => 0,
          'input_city_width' => 40,
          'input_country_required' => 0,
          'input_country_weight' => 0,
          'input_country_width' => 40,
          'input_geobutton_weight' => 0,
          'input_geolocation_button_weight' => 0,
          'input_latitude_weight' => 0,
          'input_latitude_width' => 20,
          'input_longitude_weight' => 0,
          'input_longitude_width' => 20,
          'input_map_marker' => 'drupal',
          'input_map_weight' => 0,
          'input_marker_weight' => 0,
          'input_name_required' => 0,
          'input_name_weight' => 0,
          'input_name_width' => 40,
          'input_postal_code_required' => 0,
          'input_postal_code_weight' => 0,
          'input_postal_code_width' => 40,
          'input_province_required' => 0,
          'input_province_weight' => 0,
          'input_province_width' => 40,
          'input_smart_ip_button_weight' => 0,
          'input_street_required' => 0,
          'input_street_weight' => 0,
          'input_street_width' => 40,
          'jquery_colorpicker_enabled' => 0,
          'kml_group' => array(
            'kml_url' => '',
            'kml_url_button' => 0,
            'kml_url_button_label' => 'Kml Layer',
            'kml_url_button_state' => 0,
            'kml_url_click' => 1,
            'kml_url_infowindow' => 0,
            'kml_url_viewport' => 1,
          ),
          'latlon_warning' => 0,
          'latlong' => '40,0',
          'map_backgroundcolor' => '',
          'map_marker' => 'drupal',
          'mapheight' => '200px',
          'maptype' => 'Map',
          'mapwidth' => '300px',
          'maxzoom_map' => -1,
          'minzoom_map' => -1,
          'mtc' => 'standard',
          'node_map_marker' => 'drupal',
          'nodoubleclickzoom' => 0,
          'nokeyboard' => 0,
          'only_continents' => '',
          'only_countries' => '',
          'pancontrol' => 1,
          'per_item_marker' => 0,
          'polygons_clickable' => 0,
          'polygons_coords' => '',
          'polygons_enable' => 0,
          'polygons_fillcolor' => '#FF0000',
          'polygons_fillopacity' => 0.35,
          'polygons_message' => '',
          'polygons_strokecolor' => '#FF0000',
          'polygons_strokeopacity' => 0.8,
          'polygons_strokeweight' => 3,
          'polylines_clickable' => 0,
          'polylines_coords' => '',
          'polylines_enable' => 0,
          'polylines_message' => '',
          'polylines_strokecolor' => '#FF0000',
          'polylines_strokeopacity' => 0.8,
          'polylines_strokeweight' => 3,
          'province_autocomplete' => 0,
          'rectangles_apply' => 0,
          'rectangles_clickable' => 0,
          'rectangles_coords' => '',
          'rectangles_dist' => 0,
          'rectangles_enable' => 0,
          'rectangles_fillcolor' => '#FF0000',
          'rectangles_fillopacity' => 0.35,
          'rectangles_message' => '',
          'rectangles_strokecolor' => '#FF0000',
          'rectangles_strokeopacity' => 0.8,
          'rectangles_strokeweight' => 3,
          'restrict_by_country' => 0,
          'search_country' => '',
          'search_places' => 0,
          'search_places_dd' => 0,
          'search_places_label' => 'Google Places Search',
          'search_places_list' => 0,
          'search_places_placeholder' => '',
          'search_places_position' => 'outside_above',
          'search_places_size' => 40,
          'show_bubble_on_one_marker' => 0,
          'show_maplinks' => 0,
          'street_num_pos' => 1,
          'use_address' => 1,
          'use_country_dropdown' => 1,
          'use_geolocation_button' => 0,
          'use_smart_ip_button' => 0,
          'use_smart_ip_latlon' => 0,
          'user_map_marker' => 'drupal',
          'visual_refresh' => 0,
          'vocabulary_map_marker' => 'drupal',
          'zoom' => 3,
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'getlocations_fields',
        'settings' => array(
          'baselayers' => array(
            'Hybrid' => 1,
            'Map' => 1,
            'OpenStreetMap' => 0,
            'Physical' => 1,
            'Satellite' => 1,
          ),
          'behavior' => array(
            'overview' => 0,
            'overview_opened' => 0,
            'scale' => 0,
            'scrollwheel' => 0,
          ),
          'bicycleinfo' => 0,
          'bicycleinfo_state' => 0,
          'circles_apply' => 0,
          'circles_clickable' => 0,
          'circles_coords' => '',
          'circles_enable' => 0,
          'circles_fillcolor' => '#FF0000',
          'circles_fillopacity' => 0.35,
          'circles_message' => '',
          'circles_radius' => 0,
          'circles_strokecolor' => '#FF0000',
          'circles_strokeopacity' => 0.8,
          'circles_strokeweight' => 3,
          'comment_map_marker' => 'drupal',
          'controltype' => 'small',
          'country_full' => 1,
          'display_additional' => 1,
          'display_city' => 1,
          'display_country' => 1,
          'display_dms' => 0,
          'display_latlong' => 1,
          'display_mapheight' => '300px',
          'display_maplink' => 1,
          'display_mapwidth' => '80%',
          'display_name' => 1,
          'display_onemap' => 0,
          'display_postal_code' => 1,
          'display_province' => 1,
          'display_showmap' => 1,
          'display_street' => 1,
          'draggable' => 1,
          'fullscreen' => 0,
          'geojson_data' => '',
          'geojson_enable' => 0,
          'geojson_options' => '',
          'jquery_colorpicker_enabled' => 0,
          'kml_group' => array(
            'kml_url' => '',
            'kml_url_button' => 0,
            'kml_url_button_label' => 'Kml Layer',
            'kml_url_button_state' => 0,
            'kml_url_click' => 1,
            'kml_url_infowindow' => 0,
            'kml_url_viewport' => 1,
          ),
          'map_backgroundcolor' => '',
          'map_marker' => 'drupal',
          'maptype' => 'Map',
          'markeraction' => 0,
          'markeractiontype' => 1,
          'maxzoom_map' => -1,
          'minzoom_map' => -1,
          'mtc' => 'standard',
          'node_map_marker' => 'drupal',
          'nodezoom' => 12,
          'nodoubleclickzoom' => 0,
          'nokeyboard' => 0,
          'pancontrol' => 1,
          'panoramio_show' => 0,
          'panoramio_state' => 0,
          'panoramio_use' => 0,
          'per_item_marker' => 0,
          'poi_show' => 1,
          'polygons_clickable' => 0,
          'polygons_coords' => '',
          'polygons_enable' => 0,
          'polygons_fillcolor' => '#FF0000',
          'polygons_fillopacity' => 0.35,
          'polygons_message' => '',
          'polygons_strokecolor' => '#FF0000',
          'polygons_strokeopacity' => 0.8,
          'polygons_strokeweight' => 3,
          'polylines_clickable' => 0,
          'polylines_coords' => '',
          'polylines_enable' => 0,
          'polylines_message' => '',
          'polylines_strokecolor' => '#FF0000',
          'polylines_strokeopacity' => 0.8,
          'polylines_strokeweight' => 3,
          'rectangles_apply' => 0,
          'rectangles_clickable' => 0,
          'rectangles_coords' => '',
          'rectangles_dist' => 0,
          'rectangles_enable' => 0,
          'rectangles_fillcolor' => '#FF0000',
          'rectangles_fillopacity' => 0.35,
          'rectangles_message' => '',
          'rectangles_strokecolor' => '#FF0000',
          'rectangles_strokeopacity' => 0.8,
          'rectangles_strokeweight' => 3,
          'search_places' => 0,
          'search_places_dd' => 0,
          'search_places_label' => 'Google Places Search',
          'search_places_list' => 0,
          'search_places_placeholder' => '',
          'search_places_position' => 'outside_above',
          'search_places_size' => 40,
          'show_bubble_on_one_marker' => 0,
          'show_maplinks' => 0,
          'streetview_show' => 0,
          'trafficinfo' => 0,
          'trafficinfo_state' => 0,
          'transit_show' => 1,
          'transitinfo' => 0,
          'transitinfo_state' => 0,
          'user_map_marker' => 'drupal',
          'visual_refresh' => 0,
          'vocabulary_map_marker' => 'drupal',
          'weather_cloud' => 1,
          'weather_cloud_state' => 0,
          'weather_show' => 0,
          'weather_state' => 0,
          'weather_use' => 0,
        ),
        'type' => 'getlocations_fields_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'getlocations_fields',
      'settings' => array(
        'city_autocomplete' => 0,
        'country' => '',
        'input_additional_required' => 0,
        'input_additional_weight' => 0,
        'input_additional_width' => 40,
        'input_address_width' => 40,
        'input_city_required' => 0,
        'input_city_weight' => 0,
        'input_city_width' => 40,
        'input_country_required' => 0,
        'input_country_weight' => 0,
        'input_country_width' => 40,
        'input_latitude_weight' => 0,
        'input_latitude_width' => 20,
        'input_longitude_weight' => 0,
        'input_longitude_width' => 20,
        'input_name_required' => 0,
        'input_name_weight' => 0,
        'input_name_width' => 40,
        'input_postal_code_required' => 0,
        'input_postal_code_weight' => 0,
        'input_postal_code_width' => 40,
        'input_province_required' => 0,
        'input_province_weight' => 0,
        'input_province_width' => 40,
        'input_street_required' => 0,
        'input_street_weight' => 0,
        'input_street_width' => 40,
        'per_item_marker' => 0,
        'province_autocomplete' => 0,
        'use_address' => 1,
        'use_country_dropdown' => 1,
      ),
      'type' => 'getlocations_fields',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-poi_getlocations-field_image'
  $field_instances['node-poi_getlocations-field_image'] = array(
    'bundle' => 'poi_getlocations',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Body');
  t('Image');

  return $field_instances;
}
