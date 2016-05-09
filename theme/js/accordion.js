/**
 * @file
 *
 * Accordion plugin definition.
 */


(function ($) {
  // Use strict mode to avoid errors:
  // https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";

  /*
   * Open-close methods using in Accordion
   * HTML structure shold be next:
   * <div> // Parent
   *  <div></div> // Clicable element
   *  <div></div> // Animated element
   * </div>
   * DOM element(parent) - clickable
   * DOM element( next ) - animated
   */

  var openCloseMethods = {
    show: function (element) {
      var elementHeight = element.next().children().outerHeight();

      // Find next element animate it, add control class
      element.addClass('open');
      element.next().animate({'height': elementHeight}, 300, function () {

        var heightDiff = $('div', element.parent().prev()).height() - element.parent().height();

        var _docHeight = $(element).offset().top - $(window).scrollTop();

        if (_docHeight < heightDiff) {
          $("html, body").animate({scrollTop: element.parent().offset().top - 50}, 1000);
        }

      })
    },

    close: function (element) {
      if (element == null) {
        var current = jQuery('.open');
        // Find current element animate it, remove control class
        current.removeClass('open');
        current.next().animate({'height': 0}, 300);
      }
      else {
        element.removeClass('open');
        element.next().animate({'height': 0}, 300);
      }
    }
  };

  /*
   * Accordion object
   */

  $.fn.accordion = function (options) {

    var $this = jQuery(this);

    $this.each(function (e) {
      var element = $(this);

      element.click(function (e) {
        e.preventDefault();
        var self = $(this);

        // case: clicked archive is not open
        if (!self.hasClass('open')) {
          if (options == null || options.keepOpen == false) {
            openCloseMethods.close();
          }
          openCloseMethods.show(self);
        }
        // case: clicked archive is open
        else {
          if (options == null || options.keepOpen == false) {
            openCloseMethods.close();
          } else {
            openCloseMethods.close(self);
          }
          $('.js-show-all-faq').removeClass('opened');
        }
      });

      // show all faq elements
      $('.js-show-all-faq').once(function () {
        $(this).click(function () {
          var button = $(this);

          if (!$(this).hasClass('opened')) {
            // show all elements
            $this.each(function () {
              openCloseMethods.show($(this));
            });
            $(this).addClass('opened').text(Drupal.t('Collapse all'));
          } else {
            // hide all elements
            $this.each(function () {
              openCloseMethods.close($(this));
            });
            $(this).removeClass('opened').text(Drupal.t('Expand all'));
          }

        });
      });
    });
  };
})(jQuery);