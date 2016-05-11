<?php

namespace human_rights_1789;

class general_good {
  /**
   * 1. [...] Social distinctions may be founded only upon the general good.
   * Return if two humans are socially distinct.
   */
  function socially_distinct($object_a, $object_b) {
    // Check if objects are humans.
    if (($object_a instanceof human) && ($object_b instanceof human)) {
      // TODO : Define social distinctions cases, upon the general good.
      return FALSE;
    }
    return NULL;
  }
}
