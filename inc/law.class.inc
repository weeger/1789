<?php

namespace human_rights_1789;

class law {
  function prohibit($action) {
    if ($action->is_hurtful_to(society)) {
      return TRUE;
    }
  }
}
