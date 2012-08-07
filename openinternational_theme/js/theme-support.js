(function ($) {
  Drupal.behaviors.theme_support = {
    attach: function(context) { 
      
	$("body.front div#zone-preface h2").wrapInner("<span></span>");
	
    }
  };
})(jQuery);

