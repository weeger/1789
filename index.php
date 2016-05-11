<?php

namespace human_rights_1789;

echo '<h1>Declaration of the Rights of Man and of the Citizen</h1>';

echo '<p><cite>Article I - Men are born and remain free and equal in rights. Social distinctions can be founded only on the common good.</cite></p>';

include 'inc/human.class.inc';
$human     = new human();
$human_two = new human();

echo '<br>Human one is free : ' . $human->is_free();
echo '<br>Human two is free : ' . $human->is_free();
echo '<br>Humans ar equal in rights : ' . $human->is_equal_to($human_two);
echo '<br>Humans ar equal in another context : ' . $human->is_equal_to($human_two, 'another_context');

echo '<p><cite>Article II - The goal of any political association is the conservation of the natural and imprescriptible rights of man. These rights are liberty, property, safety and resistance against oppression.</cite></p>';

include 'inc/political_association.class.inc';
$political_association = new political_association();

$human->natural_imprescriptible_rights = 'You have no rights !';

echo '<br>Man imprescriptible rights : ' . get_class($human->get_natural_imprescriptible_rights());
echo '<br>Man rights are imprescriptible rights ? : ' . ($human->natural_imprescriptible_rights instanceof natural_imprescriptible_rights);
echo '<br>And the rights are ? <br/><ul>';
$rights = $human->get_natural_imprescriptible_rights();
foreach ($rights->list as $right) {
  echo '<li>' . $right . '</li>';
}
echo '</ul>';
