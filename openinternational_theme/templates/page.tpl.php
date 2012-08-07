<?php 
/**
 * @file
 *
 **/
?>
<div<?php print $attributes; ?>>
  <?php if (isset($page['header'])) : ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>
    
  <?php if (isset($page['content'])) : ?>
  	<div class="openinternational-outside-wrapper">
    <?php print render($page['content']); ?>
    </div>
  <?php endif; ?>  
    
  <?php if (isset($page['footer'])) : ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</div>