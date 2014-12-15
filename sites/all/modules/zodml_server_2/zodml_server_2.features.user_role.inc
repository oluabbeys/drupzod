<?php
/**
 * @file
 * zodml_server_2.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function zodml_server_2_user_default_roles() {
  $roles = array();

  // Exported role: Assistant Editor.
  $roles['Assistant Editor'] = array(
    'name' => 'Assistant Editor',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  return $roles;
}
