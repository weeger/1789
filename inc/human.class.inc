<?php

/**
 * http://www.assemblee-nationale.fr/histoire/dudh/1789.asp (old)
 * http://www.conseil-constitutionnel.fr/conseil-constitutionnel/francais/la-constitution/la-constitution-du-4-octobre-1958/declaration-des-droits-de-l-homme-et-du-citoyen-de-1789.5076.html
 * http://en.wikipedia.org/wiki/Declaration_of_the_Rights_of_Man_and_of_the_Citizen
 */

namespace human_rights_1789;

require_once 'entity.class.inc';

define('CONTEXT_RIGHTS', 'rights');
define('RIGHT_LIBERTY', 'right_liberty');
define('RIGHT_PROPERTY', 'right_property');
define('RIGHT_SECURITY', 'right_security');
define('RIGHT_RESISTANCE_TO_OPPRESSION', 'right_resistance_to_oppression');

class human extends entity {

  // 2.[...] These rights are liberty, property, security, and resistance to oppression.
  // Natural and imprescriptible rights of man.
  // Political association aim to preserve it.
  var $natural_imprescriptible_rights;
  var $freedom;

  function __construct() {
    require_once 'freedom.class.inc';
    require_once 'natural_imprescriptible_rights.class.inc';
    $this->freedom                        = new freedom();
    $this->natural_imprescriptible_rights = new natural_imprescriptible_rights();
  }

  /**
   * 1. Men are born and remain free [...].
   * @return bool
   */
  function is_free() {
    return TRUE;
  }

  /**
   * 1. [...] and equal in rights.
   * Compare two entities.
   *
   * @param $object
   * @param $context
   *
   * @return bool
   */
  function is_equal_to($object, $context = CONTEXT_RIGHTS) {
    // 1. Men are born and remain [...] equal in rights. [...]
    if ($object instanceof human && $context === CONTEXT_RIGHTS) {
      return TRUE;
    }
    return FALSE;
  }

  function get_natural_imprescriptible_rights() {
    if (!($this->natural_imprescriptible_rights instanceof natural_imprescriptible_rights)) {
      political_association::preserve_rights_of($this);
    }
    return $this->natural_imprescriptible_rights;
  }
}


