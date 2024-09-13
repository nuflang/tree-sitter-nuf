/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'nuf',

  word: $ => $.identifier,

  rules: {
    block: $ => repeat($.landmark),

    landmark_prefix: _ => '>',

    landmark_keyword: _ => choice(
      'banner',
      'header',
      'complementary',
      'aside',
      'contentinfo',
      'footer',
      'form',
      'main',
      'navigation',
      'nav',
      'region',
      'section',
      'search',
    ),

    landmark: $ => seq(
      $.landmark_prefix,
      $.landmark_keyword,
    ),

    identifier: _ => /[a-z]+/,
  }
});

