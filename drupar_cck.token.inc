<?php


/**
 * Implements hook_token_info().
 */
function drupar_cck_token_info() {
  $info['tokens']['node']['parent-alias-url'] = array(
    'name' => t('Parent Alias URL'),
    'description' => t("The source node for this current node's translation set."),
    'type' => 'node',
  );
  return $info;
}

/**
 * Implements hook_tokens().
 */
function drupar_cck_tokens($type, $tokens, array $data = array(), array $options = array()){
  $replacements = array();
  $sanitize = !empty($options['sanitize']);

  if ($type == 'node' && !empty($data['node'])) {
    $node = $data['node'];
    $parent_node = NULL;
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'parent-alias-url':
          if (!empty($node->nodehierarchy_menu_links[0]['pnid'])) {
            $parent_node = node_load($node->nodehierarchy_menu_links[0]['pnid']);
            $replacements[$original] = drupal_get_path_alias('node/' . $parent_node->nid);
          }
          break;
      }
    }
  }

  return $replacements;
}