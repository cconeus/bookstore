<?php
/**
 * @file
 * book_review.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function book_review_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create book_review content'.
  $permissions['create book_review content'] = array(
    'name' => 'create book_review content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
