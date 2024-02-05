[
  "print"
  "var"
] @keyword

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
  "="
] @operator

[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket

[
  "?"
  ":"
] @keyword.conditional.ternary
