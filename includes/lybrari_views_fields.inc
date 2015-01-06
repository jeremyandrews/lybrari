<?php

class lybrari_handler_field_datetime extends views_handler_field_date {
  /*
   * Convert the DATETIME from the database into unixtime then allow
   * views_handler_field_date to render as usual.
   * Also trick php into thinking the time is in the same timezone, no
   * matter the default timezone
   */
  function render($values) {
    $value = $values->{$this->field_alias};

    if (is_string($value) && strpos($value, "-")) {
      $value = strtotime($value);
      if ($value) {
        $values->{$this->field_alias} = $value;
      }
    }

    return parent::render($values);
  }
}

