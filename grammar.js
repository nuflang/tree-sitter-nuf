/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'nuf',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => seq(
      $._expression,
      $.delimiter
    ),

    _expression: $ => choice(
      $.custom_name,
      $.identifier,
      $.function_call,
      $.string,
      $.binary_expression,
    ),

    binary_expression: $ => choice(
      prec.left(
        1,
        seq(
          $._expression,
          'inside',
          $._expression
        )
      )
    ),

    delimiter: _ => choice(';', ',', ':'),

    bracket: _ => choice('(', ')', '{', '}'),

    string: _ => seq('"', /[a-zA-Z0-9_ ]*/, '"'),

    hash_block: $ => seq(
      $.bracket,
      repeat($.hash_pair),
      $.bracket
    ),

    hash_pair: $ => seq(
      $.string,
      $.delimiter,
      $.string,
      optional($.delimiter)
    ),

    function_call: $ => seq(
      $.identifier,
      $.bracket,
      optional(
        repeat(
          seq(
            $._function_call_argument,
            optional($.delimiter)
          )
        )
      ),
      $.bracket
    ),

    _function_call_argument: $ => choice(
      $.string,
      $.hash_block
    ),

    custom_name: _ => seq('--', /[a-zA-Z0-9_]+/),

    identifier: _ => /[a-z_]+/,
  }
});

