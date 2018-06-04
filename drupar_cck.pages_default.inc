<?php
/**
 * @file
 * drupar_cck.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupar_cck_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'node_noticias';
  $page->task = 'page';
  $page->admin_title = 'Noticias del Área';
  $page->admin_description = '';
  $page->path = 'node/%node/noticias';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Contenido: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_node_noticias__panel_context_9d08b037-f8d8-40f1-97b5-656b339a3ec7';
  $handler->task = 'page';
  $handler->subtask = 'node_noticias';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'pagina';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_full' => NULL,
      'header_contained' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'section_1' => NULL,
      'section_2' => NULL,
      'section_3' => NULL,
      'footer' => NULL,
      'footer_2' => NULL,
      'footer_2a' => NULL,
      'footer_2b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Noticias de %node:title';
  $display->uuid = 'a13c0226-3457-4565-98e8-b73d9b8d7c64';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-faa4fd8d-bb3e-4d77-a72a-24119aa423a3';
    $pane->panel = 'content_bottom';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'faa4fd8d-bb3e-4d77-a72a-24119aa423a3';
    $display->content['new-faa4fd8d-bb3e-4d77-a72a-24119aa423a3'] = $pane;
    $display->panels['content_bottom'][0] = 'new-faa4fd8d-bb3e-4d77-a72a-24119aa423a3';
    $pane = new stdClass();
    $pane->pid = 'new-5e5ef22d-4931-4a14-96e4-0d144948c3bc';
    $pane->panel = 'content_bottom';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5e5ef22d-4931-4a14-96e4-0d144948c3bc';
    $display->content['new-5e5ef22d-4931-4a14-96e4-0d144948c3bc'] = $pane;
    $display->panels['content_bottom'][1] = 'new-5e5ef22d-4931-4a14-96e4-0d144948c3bc';
    $pane = new stdClass();
    $pane->pid = 'new-f3090f9a-cc74-4b07-b4f2-bc139a42626d';
    $pane->panel = 'content_bottom';
    $pane->type = 'separador';
    $pane->subtype = 'separador';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linea' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f3090f9a-cc74-4b07-b4f2-bc139a42626d';
    $display->content['new-f3090f9a-cc74-4b07-b4f2-bc139a42626d'] = $pane;
    $display->panels['content_bottom'][2] = 'new-f3090f9a-cc74-4b07-b4f2-bc139a42626d';
    $pane = new stdClass();
    $pane->pid = 'new-746d2185-9a92-4dd3-9bfa-026818c28cba';
    $pane->panel = 'content_bottom';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '16',
      'tipo_de_listado' => 'relacionados',
      'contenido_custom' => array(),
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'drupar_componentes_listado_tarjeta_con_imagen',
      'titulo' => '',
      'icono' => 'glyphicon-home',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'horizontal',
      'todos_los_items' => 0,
      'paginador' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '746d2185-9a92-4dd3-9bfa-026818c28cba';
    $display->content['new-746d2185-9a92-4dd3-9bfa-026818c28cba'] = $pane;
    $display->panels['content_bottom'][3] = 'new-746d2185-9a92-4dd3-9bfa-026818c28cba';
    $pane = new stdClass();
    $pane->pid = 'new-e7106884-3a0b-4787-a0bc-5beda038481b';
    $pane->panel = 'header_contained';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7106884-3a0b-4787-a0bc-5beda038481b';
    $display->content['new-e7106884-3a0b-4787-a0bc-5beda038481b'] = $pane;
    $display->panels['header_contained'][0] = 'new-e7106884-3a0b-4787-a0bc-5beda038481b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_noticias'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'noticias';
  $page->task = 'page';
  $page->admin_title = 'Noticias';
  $page->admin_description = '';
  $page->path = 'noticias';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_noticias__panel_context_ba99c8ec-ebdc-4231-a29a-20bdb54efcc8';
  $handler->task = 'page';
  $handler->subtask = 'noticias';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Noticias',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'pagina';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_full' => NULL,
      'header_contained' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'section_1' => NULL,
      'section_2' => NULL,
      'section_3' => NULL,
      'footer' => NULL,
      'footer_2' => NULL,
      'footer_2a' => NULL,
      'footer_2b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Noticias';
  $display->uuid = '1db9647e-c252-4741-96f6-91f77a51af3e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3263cf3-3662-4446-b09f-240cb9c6ec52';
    $pane->panel = 'content_bottom';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3263cf3-3662-4446-b09f-240cb9c6ec52';
    $display->content['new-b3263cf3-3662-4446-b09f-240cb9c6ec52'] = $pane;
    $display->panels['content_bottom'][0] = 'new-b3263cf3-3662-4446-b09f-240cb9c6ec52';
    $pane = new stdClass();
    $pane->pid = 'new-fca66b21-0bd2-4796-8974-a22548710b66';
    $pane->panel = 'content_bottom';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fca66b21-0bd2-4796-8974-a22548710b66';
    $display->content['new-fca66b21-0bd2-4796-8974-a22548710b66'] = $pane;
    $display->panels['content_bottom'][1] = 'new-fca66b21-0bd2-4796-8974-a22548710b66';
    $pane = new stdClass();
    $pane->pid = 'new-38e293e8-8cab-48da-a3fe-b3bf029c07b3';
    $pane->panel = 'content_bottom';
    $pane->type = 'separador';
    $pane->subtype = 'separador';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linea' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '38e293e8-8cab-48da-a3fe-b3bf029c07b3';
    $display->content['new-38e293e8-8cab-48da-a3fe-b3bf029c07b3'] = $pane;
    $display->panels['content_bottom'][2] = 'new-38e293e8-8cab-48da-a3fe-b3bf029c07b3';
    $pane = new stdClass();
    $pane->pid = 'new-d83097f0-d764-4ce4-b5d4-47e4549aceea';
    $pane->panel = 'content_bottom';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '16',
      'tipo_de_listado' => 'recientes',
      'contenido_custom' => array(),
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'drupar_componentes_listado_tarjeta_con_imagen',
      'titulo' => '',
      'icono' => 'glyphicon-home',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'horizontal',
      'todos_los_items' => 0,
      'paginador' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd83097f0-d764-4ce4-b5d4-47e4549aceea';
    $display->content['new-d83097f0-d764-4ce4-b5d4-47e4549aceea'] = $pane;
    $display->panels['content_bottom'][3] = 'new-d83097f0-d764-4ce4-b5d4-47e4549aceea';
    $pane = new stdClass();
    $pane->pid = 'new-8c8afc99-1ce4-4a58-9c25-a2fb452732d1';
    $pane->panel = 'header_contained';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c8afc99-1ce4-4a58-9c25-a2fb452732d1';
    $display->content['new-8c8afc99-1ce4-4a58-9c25-a2fb452732d1'] = $pane;
    $display->panels['header_contained'][0] = 'new-8c8afc99-1ce4-4a58-9c25-a2fb452732d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d83097f0-d764-4ce4-b5d4-47e4549aceea';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['noticias'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tramites';
  $page->task = 'page';
  $page->admin_title = 'Servicios';
  $page->admin_description = '';
  $page->path = 'servicios';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tramites__default';
  $handler->task = 'page';
  $handler->subtask = 'tramites';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'pagina';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'body-middle' => NULL,
      'full' => NULL,
      'header_full' => NULL,
      'header_left' => NULL,
      'header_right' => NULL,
      'content' => NULL,
      'content_bottom' => NULL,
      'section_1' => NULL,
      'section_2' => NULL,
      'section_3' => NULL,
      'footer' => NULL,
      'footer_2' => NULL,
      'header_contained' => NULL,
      'footer_2a' => NULL,
      'footer_2b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '567acbe9-f165-4088-abf4-d057a8e0ba0e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2107616f-0941-450a-97d2-bdd8ee4ec9c1';
    $pane->panel = 'content_bottom';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '16',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'argentinagobar_migtram',
      'formato_de_listado' => 'drupar_componentes_listado_tarjeta_simple',
      'titulo' => '',
      'icono' => 'glyphicon-star',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'horizontal',
      'todos_los_items' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'contenido_custom' => array(),
      'paginador' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2107616f-0941-450a-97d2-bdd8ee4ec9c1';
    $display->content['new-2107616f-0941-450a-97d2-bdd8ee4ec9c1'] = $pane;
    $display->panels['content_bottom'][0] = 'new-2107616f-0941-450a-97d2-bdd8ee4ec9c1';
    $pane = new stdClass();
    $pane->pid = 'new-8fd74cad-4d9e-4442-9d13-3bdc3d208e3c';
    $pane->panel = 'header_full';
    $pane->type = 'block';
    $pane->subtype = 'argentinagobar_search-ApacheSolrInput';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8fd74cad-4d9e-4442-9d13-3bdc3d208e3c';
    $display->content['new-8fd74cad-4d9e-4442-9d13-3bdc3d208e3c'] = $pane;
    $display->panels['header_full'][0] = 'new-8fd74cad-4d9e-4442-9d13-3bdc3d208e3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tramites'] = $page;

  return $pages;

}
