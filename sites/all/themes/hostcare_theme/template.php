<?php

/**
 * @file
 * This file contains the main theme functions hooks and overrides.
 */

 function hostcare_theme_preprocess_page(&$vars) {
  if (drupal_is_front_page()) {
    unset($vars['page']['content']['system_main']['default_message']);
  }
}
