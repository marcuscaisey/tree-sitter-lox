[
  "print"
  "var"
  "break"
  "continue"
] @keyword

[
  "or"
  "and"
] @keyword.operator

[
  "if"
  "else"
] @keyword.conditional

[
  "while"
  "for"
] @keyword.repeat

(comment) @comment

(number) @number

(string) @string

(boolean) @boolean

(nil) @constant.builtin

(call_expression
  callee: (identifier) @function.call (#set! "priority" 105)) ; increase priority to avoid conflict with variable

(identifier) @variable

[
  "!"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "+"
  "-"
  "*"
  "/"
  "%"
  "="
] @operator

[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "?"
  ":"
] @keyword.conditional.ternary
