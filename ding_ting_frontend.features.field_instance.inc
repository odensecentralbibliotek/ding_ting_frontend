<?php
/**
 * @file
 * ding_ting_frontend.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ding_ting_frontend_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'ting_collection-ting_collection-ting_collection_types'
  $field_instances['ting_collection-ting_collection-ting_collection_types'] = array(
    'bundle' => 'ting_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity_collection',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ding_availability',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'ding_availability_types',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'ting_collection',
    'field_name' => 'ting_collection_types',
    'label' => 'Ting collection object types',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'ting_collection-ting_collection-ting_entities'
  $field_instances['ting_collection-ting_collection-ting_entities'] = array(
    'bundle' => 'ting_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity_collection',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'hide_primary' => 0,
          'view_mode' => 'collection_list',
        ),
        'type' => 'ting_entities_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'ting_collection',
    'field_name' => 'ting_entities',
    'label' => 'All materials',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'ting_collection-ting_collection-ting_primary_object'
  $field_instances['ting_collection-ting_collection-ting_primary_object'] = array(
    'bundle' => 'ting_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity_collection',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'view_mode' => 'search_result',
        ),
        'type' => 'ting_primary_object_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_collection',
    'field_name' => 'ting_primary_object',
    'label' => 'Ting collection primary object',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ding_availability_holdings'
  $field_instances['ting_object-ting_object-ding_availability_holdings'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'hidden',
        'module' => 'ding_availability',
        'settings' => array(),
        'type' => 'ding_availability_default',
        'weight' => 10,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ding_availability',
        'settings' => array(),
        'type' => 'ding_availability_default',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ding_availability_holdings',
    'label' => 'Holdings information',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ding_entity_buttons'
  $field_instances['ting_object-ting_object-ding_entity_buttons'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'hidden',
        'module' => 'ding_entity',
        'settings' => array(),
        'type' => 'ding_entity_buttons_default',
        'weight' => 8,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ding_entity',
        'settings' => array(),
        'type' => 'ding_entity_buttons_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ding_entity_buttons',
    'label' => 'Action buttons',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ding_periodical_issues'
  $field_instances['ting_object-ting_object-ding_periodical_issues'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'inline',
        'module' => 'ding_periodical',
        'settings' => array(),
        'type' => 'ding_periodical_issues_default',
        'weight' => 35,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'ding_periodical',
        'settings' => array(),
        'type' => 'ding_periodical_issues_default',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ding_periodical_issues',
    'label' => 'Issues',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_abstract'
  $field_instances['ting_object-ting_object-ting_abstract'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_abstract_default',
        'weight' => 6,
      ),
      'collection_primary' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_abstract_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_abstract_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_abstract_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_abstract_default',
        'weight' => 3,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_abstract',
    'label' => 'Ting object abstract',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_author'
  $field_instances['ting_object-ting_object-ting_author'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_author_default',
        'weight' => 5,
      ),
      'collection_primary' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_author_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_author_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_author_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_author_default',
        'weight' => 2,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_author_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_author',
    'label' => 'Ting object author',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_cover'
  $field_instances['ting_object-ting_object-ting_cover'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'hidden',
        'module' => 'ting_covers',
        'settings' => array(
          'image_style' => 'ding_medium',
        ),
        'type' => 'ting_cover_default',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'hidden',
        'module' => 'ting_covers',
        'settings' => array(
          'image_style' => 'ding_large',
        ),
        'type' => 'ting_cover_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ting_covers',
        'settings' => array(
          'image_style' => 'ding_large',
        ),
        'type' => 'ting_cover_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'ting_covers',
        'settings' => array(
          'image_style' => 'ding_medium',
        ),
        'type' => 'ting_cover_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ting_covers',
        'settings' => array(
          'image_style' => 'ding_medium',
        ),
        'type' => 'ting_cover_default',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_cover',
    'label' => 'Cover',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_reference_reverse'
  $field_instances['ting_object-ting_object-ting_reference_reverse'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_reference_reverse',
    'label' => 'On this site',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_relations'
  $field_instances['ting_object-ting_object-ting_relations'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'inline',
        'module' => 'ting_relation',
        'settings' => array(),
        'type' => 'ting_relations_default',
        'weight' => 39,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ting_relation',
        'settings' => array(),
        'type' => 'ting_relations_default',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_relations',
    'label' => 'Ting relations.',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_series'
  $field_instances['ting_object-ting_object-ting_series'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_series_default',
        'weight' => 36,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_series_default',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_series_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_series_default',
        'weight' => 2,
      ),
      'user_list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_series',
    'label' => 'Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_subjects'
  $field_instances['ting_object-ting_object-ting_subjects'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_subjects_default',
        'weight' => 7,
      ),
      'collection_primary' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_subjects_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_subjects_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_subjects_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_subjects_default',
        'weight' => 4,
      ),
      'user_list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_subjects',
    'label' => 'Subjects',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_title'
  $field_instances['ting_object-ting_object-ting_title'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'link_type' => 'object',
        ),
        'type' => 'ting_title_default',
        'weight' => 2,
      ),
      'collection_primary' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'link_type' => 'object',
        ),
        'type' => 'ting_title_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'link_type' => 'object',
        ),
        'type' => 'ting_title_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'link_type' => 'collection',
        ),
        'type' => 'ting_title_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'link_type' => 'collection',
        ),
        'type' => 'ting_title_default',
        'weight' => 1,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(
          'link_type' => 'object',
        ),
        'type' => 'ting_title_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_title',
    'label' => 'Ting object title',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-ting_type'
  $field_instances['ting_object-ting_object-ting_type'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'ding_entity_type' => 'ding_entity',
    'display' => array(
      'collection_list' => array(
        'label' => 'hidden',
        'module' => 'ding_availability',
        'settings' => array(),
        'type' => 'ding_availability_type',
        'weight' => 1,
      ),
      'collection_primary' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_type_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ding_availability',
        'settings' => array(),
        'type' => 'ding_availability_type',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'user_list' => array(
        'label' => 'hidden',
        'module' => 'ting',
        'settings' => array(),
        'type' => 'ting_type_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'ting_type',
    'label' => 'Ting object type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'blackhole',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Action buttons');
  t('All materials');
  t('Cover');
  t('Holdings information');
  t('Issues');
  t('On this site');
  t('Series');
  t('Subjects');
  t('Ting collection object types');
  t('Ting collection primary object');
  t('Ting object abstract');
  t('Ting object author');
  t('Ting object title');
  t('Ting object type');
  t('Ting relations.');

  return $field_instances;
}
