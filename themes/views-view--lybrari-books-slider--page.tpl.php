<?php
?>

<script type="text/javascript" src="http://malsup.github.com/jquery.cycle.all.js"></script>
<script type="text/javascript">
jQuery(document).ready(function() {
    jQuery('.slideshow').cycle({
    fx:     'scrollUp', 
    timeout: 6000, 
    delay:  -4000,
    prev: '#prev',
    next: '#next',
    pause: 1,
    
  });
});
</script>

<style>
.views-label {font-variant:small-caps;font-size: 110%;}
.field-content {font-size: 110%;}
.views-field-title .field-content { font-size: 160%; font-weight: bold; text-align: center }
.views-field-title {margin-bottom:20px; text-align: center; }
.views-label-title { display:none; }
.views-field-path {float:left; width: 20%; margin-right: 20px;}
.views-field-path img { width: 100%; height: auto; }
.slideshow, .views-row {width: 100% !important; min-height: 400px !important; }
ul#nav li {display:inline; position: relative; top: 3.5em; z-index: 999;}
li#next {float:right; margin-right: 30px;}
.slideshow-body td {width: 50%; padding-top: 40px; vertical-align: top; font-size: 90%;}
.slideshow-body .views-field-title {margin-bottom:0em; text-align: left; }
.slideshow-body .views-field-title .field-content { font-size: 100%; font-weight: bold; text-align: left }
h2 { margin-top: 40px; }
</style>

<h1><?php t('Library Home') ?></h1>
<h2><?php t('Suggestions') ?></h2>
<div id="slideshow">
  <ul id="nav">
    <li id="prev"><a href="#"><?php print t('Previous') ?></a></li>
    <li id="next"><a href="#"><?php print t('Next') ?></a></li>
  </ul>
  <div class="slideshow">
    <?php print $rows; ?>
  </div>
</div>
<h2><?php print t('Lasts books') ?></h2>
<div class="slideshow-body">
  <?php print(views_embed_view('lybrari_lasts_books', $display_id = 'default')) ;?> 
</div>
