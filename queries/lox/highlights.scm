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
] @keyword.repeat

(comment) @comment

(number) @number

(string) @string

(boolean) @boolean

(nil) @constant.builtin

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
