/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "lox",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  rules: {
    program: ($) => repeat(choice($._declaration, $._statement)),

    _declaration: ($) => choice($.variable_declaration),

    variable_declaration: ($) =>
      seq("var", $.identifier, optional(seq("=", $._expression)), ";"),

    _statement: ($) => choice($.expression_statement, $.print_statement),

    expression_statement: ($) => seq($._expression, ";"),

    print_statement: ($) => seq("print", $._expression, ";"),

    _expression: ($) =>
      choice(
        $._literal,
        $.group_expression,
        $.identifier,
        $.unary_expression,
        $.binary_expression,
        $.ternary_expression,
        $.assignment_expression,
      ),

    _literal: ($) => choice($.number, $.string, $.boolean, $.nil),

    number: (_) => /\d+(\.\d+)?/,

    string: (_) => /"[^"\r\n]*"/,

    boolean: (_) => choice("true", "false"),

    nil: (_) => "nil",

    group_expression: ($) => seq("(", field("expression", $._expression), ")"),

    identifier: (_) => /[a-zA-Z][a-zA-Z0-9_]*/,

    unary_expression: ($) =>
      prec.right(8, seq(choice("!", "-"), field("right", $._expression))),

    binary_expression: ($) =>
      choice(
        prec.left(
          1,
          seq(field("left", $._expression), ",", field("right", $._expression)),
        ),
        prec.left(
          4,
          seq(
            field("left", $._expression),
            choice("==", "!="),
            field("right", $._expression),
          ),
        ),
        prec.left(
          5,
          seq(
            field("left", $._expression),
            choice("<", "<=", ">", ">="),
            field("right", $._expression),
          ),
        ),
        prec.left(
          6,
          seq(
            field("left", $._expression),
            choice("+", "-"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          7,
          seq(
            field("left", $._expression),
            choice("*", "/"),
            field("right", $._expression),
          ),
        ),
      ),

    ternary_expression: ($) =>
      prec.right(
        3,
        seq(
          field("condition", $._expression),
          "?",
          field("then", $._expression),
          ":",
          field("else", $._expression),
        ),
      ),

    assignment_expression: ($) =>
      prec.right(
        2,
        seq(field("left", $.identifier), "=", field("right", $._expression)),
      ),

    comment: (_) => choice(seq("//", /.*/), seq("/*", repeat(/./), "*/")),
  },
});
