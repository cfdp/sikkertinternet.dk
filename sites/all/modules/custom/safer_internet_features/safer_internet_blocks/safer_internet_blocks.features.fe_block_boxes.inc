<?php

/**
 * @file
 * safer_internet_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function safer_internet_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Formålstekst';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'intention_short';
  $fe_block_boxes->body = '<div class="hero"><p class="hero__text">Sikker Internet Center Danmark er et samarbejde mellem <a title="Medierådet for Børn og Unge" href="/node/5">Medierådet for Børn og Unge</a>, <a title="Red Barnet" href="/node/4">Red Barnet</a> og <a title="CfDP" href="/node/6">Center for Digital Pædagogik</a>. Centerets formål er at styrke børn og unges brug af digitale og sociale medier, samt at bekæmpe ulovligt og uønsket indhold, der involverer børn og unge.</p><a class="hero__read-more" href="/node/12">Læs mere</a></div>';

  $export['intention_short'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'European Partners - BIK, Inhope, Insafe';
  $fe_block_boxes->format = '3';
  $fe_block_boxes->machine_name = 'si_european_partners_block';
  $fe_block_boxes->body = '<div class="block-bottom"><h2 class="block-bottom__title">BIK Portal</h2><h3 class="block-bottom__subtitle">Better Internet for Kids</h3><p>BIK Portal er en åben online platform for det EU-støttede netværk Insafe. Her kan borgere på tværs af de europæiske landegrænser finde viden og materialer omkring børn og unges online-liv.</p><div class="block-bottom__logo-wrapper"><a class="block-bottom__logo-1" href="https://www.betterinternetforkids.eu/"></a><a class="block-bottom__logo-2" href="https://inhope.org/"></a></div></div>';

  $export['si_european_partners_block'] = $fe_block_boxes;

  return $export;
}
