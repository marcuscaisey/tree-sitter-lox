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
  callee: (identifier) @function.call)

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
