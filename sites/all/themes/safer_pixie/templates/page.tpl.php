<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div class="layout-center">
  <div class="box--main-wrapper">
    <header class="header" role="banner">

      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <div class="header__name-and-slogan">
          <?php if ($site_name): ?>
            <h1 class="header__site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <div class="header__site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
        </div>
      <?php endif; ?>

      <div class="header__rss-icon"><a href="<?php print $front_page; ?>aggregator/rss"> <img src="/sites/all/themes/safer_pixie/sass/components/images/ikon_rss.svg"> </a></div>
      <?php if ($secondary_menu): ?>
        <nav class="header__secondary-menu" role="navigation">
          <?php print theme('links__system_secondary_menu', array(
            'links' => $secondary_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => $secondary_menu_heading,
              'level' => 'h2',
              'class' => array('visually-hidden'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>
      
      <?php if ($main_menu): ?>
        <nav class="main-menu" role="navigation">
          <?php
            $block = module_invoke('menu_block', 'block_view', '1');
            print render($block['content']); ?>
        </nav>
      <?php endif; ?>

      <?php print render($page['header']); ?>

    </header>

    <div class="layout-3col layout-swap">

      <?php
        // Render the sidebars to see if there's anything in them.
        $sidebar_first  = render($page['sidebar_first']);
        $sidebar_second = render($page['sidebar_second']);
        // Decide on layout classes by checking if sidebars have content.
        $content_class = 'layout-3col__full';
        $sidebar_first_class = $sidebar_second_class = '';
        if ($sidebar_first && $sidebar_second):
          $content_class = 'layout-3col__right-content';
          $sidebar_first_class = 'layout-3col__first-left-sidebar';
          $sidebar_second_class = 'layout-3col__second-left-sidebar';
        elseif ($sidebar_second):
          $content_class = 'layout-3col__left-content';
          $sidebar_second_class = 'layout-3col__right-sidebar';
        elseif ($sidebar_first):
          $content_class = 'layout-3col__right-content';
          $sidebar_first_class = 'layout-3col__left-sidebar';
        endif;
      ?>

      <main class="<?php print $content_class; ?>" role="main">
        <?php print render($page['highlighted']); ?>
        <?php if (!$is_front): ?>
          <?php print $breadcrumb; ?>
        <?php endif; ?>   
        <a href="#skip-link" class="visually-hidden visually-hidden--focusable" id="main-content">Back to top</a>
        <?php print render($title_prefix); ?>
        <?php if ($title && !($is_front)): ?>
          <h1><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </main>

      <!-- delete the "layout-swap__top layout-3col__full" div -->

      <?php if ($sidebar_first): ?>
        <aside class="<?php print $sidebar_first_class; ?>" role="complementary">
          <?php print $sidebar_first; ?>
        </aside>
      <?php endif; ?>

      <?php if ($sidebar_second): ?>
        <aside class="<?php print $sidebar_second_class; ?>" role="complementary">
          <?php print $sidebar_second; ?>
        </aside>
      <?php endif; ?>

    </div>
  </div>
  

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
