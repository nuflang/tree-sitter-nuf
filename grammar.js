/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'nuf',

  rules: {
    block: $ => repeat($.statement),

    statement: $ => seq($.expression, $.delimiter),

    expression: $ => choice($.function_call, $.string),

    delimiter: _ => choice(';'),

    bracket: _ => choice('(', ')'),

    string: _ => seq('"', /[a-zA-Z0-9_ ]*/, '"'),

    function_call: $ => seq($.identifier, $.bracket, $.string, $.bracket),

    identifier: _ => /[a-z_]+/,
  }
});

