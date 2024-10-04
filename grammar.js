/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'nuf',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => seq($._expression, $.delimiter),

    _expression: $ => choice(
      $.custom_name,
      $.identifier,
      $.function_call,
      $.string,
      $.binary_expression,
    ),

    binary_expression: $ => choice(
      prec.left(1, seq($._expression, 'inside', $._expression))
    ),

    delimiter: _ => choice(';', ',', ':'),

    bracket: _ => choice('(', ')', '{', '}'),

    string: _ => seq('"', /[a-zA-Z0-9_ ]*/, '"'),

    hash_block: $ => seq($.bracket, $.string, $.delimiter, $.string, $.delimiter, $.bracket),

    function_call: $ => seq($.identifier, $.bracket, repeat($._function_call_argument), $.bracket),

    _function_call_argument: $ => choice($.string, $.hash_block, $.delimiter),

    custom_name: _ => seq('--', /[a-zA-Z0-9_]+/),

    identifier: _ => /[a-z_]+/,
  }
});

