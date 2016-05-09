<li>
  <h2 class="meeting-title">
    <?php
    $value = array_pop($field_os2web_meetings_bul_closed);
    if ($value[0]['value'] == 1) {
      $postfix = " (" . t('Closed') . ")";
    }
    else {
      $postfix = '';
    }?>
    <?php print $title . $postfix; ?>
    <span class="state"></span>
  </h2>

  <section class="meeting-body node-body">
    <div class="meeting-body-container">     
      <?php print render($content['field_os2web_meetings_attach']) ?>
       <?php print render($content['field_os2web_meetings_enclosures']) ?>
    </div>
  </section>
</li>
