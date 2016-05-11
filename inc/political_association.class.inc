<?php

namespace human_rights_1789;

require_once 'body.class.inc';
require_once 'natural_imprescriptible_rights.class.inc';

class political_association extends body {
  /**
   * 2. The aim of all political association is the preservation
   * of the natural and imprescriptible rights of man. [...]
   * @param $object
   */
  public static function preserve_rights_of($object) {
    if ($object instanceof human) {
      // Reset global imprescriptible rights to current human.
      $object->natural_imprescriptible_rights = new natural_imprescriptible_rights();
    }
  }
}
