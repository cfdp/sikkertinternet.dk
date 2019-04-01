/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document) {

  'use strict';

  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.adjust_sidebar_height = {
    attach: function (context, settings) {
      function resizeSidebar() {
        var contentHeight = $('.layout-3col__left-content').outerHeight();
        var sidebar = $('.layout-3col__right-sidebar');

        $(window).resize(function () {
          // don't resize sidebar on one-column layout (breakpoint xl)
          if ($(window).width() < 999) {
            sidebar.css('height', 'inherit');
            return;
          }
          sidebar.css('height', contentHeight);
        });
      }
      resizeSidebar();
    }
  };

})(jQuery, Drupal, this, this.document);
