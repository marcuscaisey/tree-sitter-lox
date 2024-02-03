#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_var = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  anon_sym_print = 5,
  sym_number = 6,
  sym_string = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym_nil = 10,
  anon_sym_COMMA = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_LT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_QMARK = 22,
  anon_sym_COLON = 23,
  anon_sym_BANG = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_SLASH_SLASH = 27,
  aux_sym_comment_token1 = 28,
  anon_sym_SLASH_STAR = 29,
  aux_sym_comment_token2 = 30,
  anon_sym_STAR_SLASH = 31,
  sym_program = 32,
  sym__declaration = 33,
  sym_variable_declaration = 34,
  sym__statement = 35,
  sym_expression_statement = 36,
  sym_print_statement = 37,
  sym__expression = 38,
  sym__literal = 39,
  sym_boolean = 40,
  sym_binary_expression = 41,
  sym_ternary_expression = 42,
  sym_unary_expression = 43,
  sym_group_expression = 44,
  sym_comment = 45,
  aux_sym_program_repeat1 = 46,
  aux_sym_comment_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_print] = "print",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil] = "nil",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_program] = "program",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_group_expression] = "group_expression",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_print] = anon_sym_print,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil] = sym_nil,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_program] = sym_program,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_group_expression] = sym_group_expression,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
  field_else = 2,
  field_expression = 3,
  field_left = 4,
  field_right = 5,
  field_then = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_else] = "else",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_right] = "right",
  [field_then] = "then",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_right, 1},
  [1] =
    {field_expression, 1},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_condition, 0},
    {field_else, 4},
    {field_then, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {(TSStateId)(-1)},
  [47] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(44),
    [sym__declaration] = STATE(36),
    [sym_variable_declaration] = STATE(35),
    [sym__statement] = STATE(36),
    [sym_expression_statement] = STATE(34),
    [sym_print_statement] = STATE(34),
    [sym__expression] = STATE(26),
    [sym__literal] = STATE(23),
    [sym_boolean] = STATE(25),
    [sym_binary_expression] = STATE(23),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_group_expression] = STATE(23),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__declaration] = STATE(36),
    [sym_variable_declaration] = STATE(35),
    [sym__statement] = STATE(36),
    [sym_expression_statement] = STATE(34),
    [sym_print_statement] = STATE(34),
    [sym__expression] = STATE(26),
    [sym__literal] = STATE(23),
    [sym_boolean] = STATE(25),
    [sym_binary_expression] = STATE(23),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_group_expression] = STATE(23),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__declaration] = STATE(36),
    [sym_variable_declaration] = STATE(35),
    [sym__statement] = STATE(36),
    [sym_expression_statement] = STATE(34),
    [sym_print_statement] = STATE(34),
    [sym__expression] = STATE(26),
    [sym__literal] = STATE(23),
    [sym_boolean] = STATE(25),
    [sym_binary_expression] = STATE(23),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_group_expression] = STATE(23),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_var] = ACTIONS(32),
    [anon_sym_print] = ACTIONS(35),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_nil] = ACTIONS(44),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(25), 1,
      sym_boolean,
    STATE(29), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [44] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [88] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_comment,
    STATE(22), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [132] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(25), 1,
      sym_boolean,
    STATE(27), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [176] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(21), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [220] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(15), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [264] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(17), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [308] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(20), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [352] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(25), 1,
      sym_boolean,
    STATE(28), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [396] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(18), 1,
      sym__expression,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [440] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(25), 1,
      sym_boolean,
    STATE(30), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(23), 5,
      sym__literal,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
  [484] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [519] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    STATE(16), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [560] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [597] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(73), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [667] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(77), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [696] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [729] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(53), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [758] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(81), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [787] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(85), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [816] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(89), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [845] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [886] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [927] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [968] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1009] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_QMARK,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1050] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(107), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1076] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(111), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(115), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1128] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(119), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1154] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(123), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1180] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(127), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1206] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(131), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1232] = 5,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      aux_sym_comment_token2,
    ACTIONS(140), 1,
      anon_sym_STAR_SLASH,
    STATE(38), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1249] = 6,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      aux_sym_comment_token2,
    ACTIONS(144), 1,
      anon_sym_STAR_SLASH,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    STATE(39), 1,
      sym_comment,
  [1268] = 6,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      aux_sym_comment_token2,
    ACTIONS(146), 1,
      anon_sym_STAR_SLASH,
    STATE(39), 1,
      aux_sym_comment_repeat1,
    STATE(40), 1,
      sym_comment,
  [1287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
  [1303] = 4,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(152), 2,
      aux_sym_comment_token2,
      anon_sym_STAR_SLASH,
  [1317] = 4,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
  [1330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
  [1343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(45), 1,
      sym_comment,
  [1356] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [1360] = 1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 519,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 597,
  [SMALL_STATE(19)] = 638,
  [SMALL_STATE(20)] = 667,
  [SMALL_STATE(21)] = 696,
  [SMALL_STATE(22)] = 729,
  [SMALL_STATE(23)] = 758,
  [SMALL_STATE(24)] = 787,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 845,
  [SMALL_STATE(27)] = 886,
  [SMALL_STATE(28)] = 927,
  [SMALL_STATE(29)] = 968,
  [SMALL_STATE(30)] = 1009,
  [SMALL_STATE(31)] = 1050,
  [SMALL_STATE(32)] = 1076,
  [SMALL_STATE(33)] = 1102,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1154,
  [SMALL_STATE(36)] = 1180,
  [SMALL_STATE(37)] = 1206,
  [SMALL_STATE(38)] = 1232,
  [SMALL_STATE(39)] = 1249,
  [SMALL_STATE(40)] = 1268,
  [SMALL_STATE(41)] = 1287,
  [SMALL_STATE(42)] = 1303,
  [SMALL_STATE(43)] = 1317,
  [SMALL_STATE(44)] = 1330,
  [SMALL_STATE(45)] = 1343,
  [SMALL_STATE(46)] = 1356,
  [SMALL_STATE(47)] = 1360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 3, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_expression, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(42),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lox(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
