<?php

/**
 * Class to add a mail system to Drupal used by this module. Sends mails as
 * HTML without using mime_mail module.
 *
 * http://drupal.stackexchange.com/questions/27063/how-to-send-html-email
 */
class Os2webSubscriptionMailSystem extends DefaultMailSystem {
  /**
   * Formats an email.
   */
  public function format(array $message) {
    $message['body'] = implode("<br /><br />", $message['body']);
    $message['body'] = drupal_wrap_mail($message['body']);
    return $message;
  }
}
