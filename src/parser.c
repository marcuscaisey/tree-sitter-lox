#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SEMI = 1,
  anon_sym_print = 2,
  anon_sym_COMMA = 3,
  anon_sym_EQ_EQ = 4,
  anon_sym_BANG_EQ = 5,
  anon_sym_LT = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_GT = 8,
  anon_sym_GT_EQ = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_QMARK = 14,
  anon_sym_COLON = 15,
  anon_sym_BANG = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_number = 19,
  sym_string = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_nil = 23,
  anon_sym_SLASH_SLASH = 24,
  aux_sym_comment_token1 = 25,
  anon_sym_SLASH_STAR = 26,
  aux_sym_comment_token2 = 27,
  anon_sym_STAR_SLASH = 28,
  sym_program = 29,
  sym__statement = 30,
  sym_expression_statement = 31,
  sym_print_statement = 32,
  sym__expression = 33,
  sym_binary_expression = 34,
  sym_ternary_expression = 35,
  sym_unary_expression = 36,
  sym_group_expression = 37,
  sym__literal_expression = 38,
  sym_boolean = 39,
  sym_comment = 40,
  aux_sym_program_repeat1 = 41,
  aux_sym_comment_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_print] = "print",
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
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil] = "nil",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_group_expression] = "group_expression",
  [sym__literal_expression] = "_literal_expression",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_print] = anon_sym_print,
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
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil] = sym_nil,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_group_expression] = sym_group_expression,
  [sym__literal_expression] = sym__literal_expression,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
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
  [sym__literal_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 0},
  [39] = {(TSStateId)(-1)},
  [40] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym__statement] = STATE(29),
    [sym_expression_statement] = STATE(32),
    [sym_print_statement] = STATE(32),
    [sym__expression] = STATE(27),
    [sym_binary_expression] = STATE(14),
    [sym_ternary_expression] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_group_expression] = STATE(14),
    [sym__literal_expression] = STATE(14),
    [sym_boolean] = STATE(4),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_print] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(29),
    [sym_expression_statement] = STATE(32),
    [sym_print_statement] = STATE(32),
    [sym__expression] = STATE(27),
    [sym_binary_expression] = STATE(14),
    [sym_ternary_expression] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_group_expression] = STATE(14),
    [sym__literal_expression] = STATE(14),
    [sym_boolean] = STATE(4),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(24),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_number] = ACTIONS(30),
    [sym_string] = ACTIONS(30),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_nil] = ACTIONS(30),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__statement] = STATE(29),
    [sym_expression_statement] = STATE(32),
    [sym_print_statement] = STATE(32),
    [sym__expression] = STATE(27),
    [sym_binary_expression] = STATE(14),
    [sym_ternary_expression] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_group_expression] = STATE(14),
    [sym__literal_expression] = STATE(14),
    [sym_boolean] = STATE(4),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_print] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_comment,
    ACTIONS(40), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(38), 12,
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
  [29] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [68] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(6), 1,
      sym_comment,
    STATE(26), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [107] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(7), 1,
      sym_comment,
    STATE(19), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [146] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(8), 1,
      sym_comment,
    STATE(25), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [185] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    STATE(9), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(42), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [226] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(60), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(58), 12,
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
  [255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(62), 12,
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
  [284] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(66), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(42), 12,
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
  [313] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    STATE(13), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [354] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(70), 12,
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
  [383] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(42), 11,
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
  [416] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(66), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(42), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [451] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(42), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [488] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(18), 1,
      sym_comment,
    STATE(28), 1,
      sym__expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [527] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(74), 12,
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
  [556] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(12), 1,
      sym__expression,
    STATE(20), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [595] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(9), 1,
      sym__expression,
    STATE(21), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [634] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(17), 1,
      sym__expression,
    STATE(22), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [673] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(13), 1,
      sym__expression,
    STATE(23), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [712] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean,
    STATE(15), 1,
      sym__expression,
    STATE(24), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_number,
      sym_string,
      sym_nil,
    STATE(14), 5,
      sym_binary_expression,
      sym_ternary_expression,
      sym_unary_expression,
      sym_group_expression,
      sym__literal_expression,
  [751] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [792] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [833] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [874] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(88), 10,
      ts_builtin_sym_end,
      anon_sym_print,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
  [937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_print,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
  [959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_print,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
  [981] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      anon_sym_print,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
  [1003] = 5,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      aux_sym_comment_token2,
    ACTIONS(103), 1,
      anon_sym_STAR_SLASH,
    STATE(33), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1020] = 6,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      aux_sym_comment_token2,
    ACTIONS(107), 1,
      anon_sym_STAR_SLASH,
    STATE(33), 1,
      aux_sym_comment_repeat1,
    STATE(34), 1,
      sym_comment,
  [1039] = 6,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      aux_sym_comment_token2,
    ACTIONS(109), 1,
      anon_sym_STAR_SLASH,
    STATE(34), 1,
      aux_sym_comment_repeat1,
    STATE(35), 1,
      sym_comment,
  [1058] = 4,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(111), 2,
      aux_sym_comment_token2,
      anon_sym_STAR_SLASH,
  [1072] = 4,
    ACTIONS(96), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
  [1085] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
  [1098] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [1102] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 29,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 284,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 354,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 527,
  [SMALL_STATE(20)] = 556,
  [SMALL_STATE(21)] = 595,
  [SMALL_STATE(22)] = 634,
  [SMALL_STATE(23)] = 673,
  [SMALL_STATE(24)] = 712,
  [SMALL_STATE(25)] = 751,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 833,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 915,
  [SMALL_STATE(30)] = 937,
  [SMALL_STATE(31)] = 959,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1003,
  [SMALL_STATE(34)] = 1020,
  [SMALL_STATE(35)] = 1039,
  [SMALL_STATE(36)] = 1058,
  [SMALL_STATE(37)] = 1072,
  [SMALL_STATE(38)] = 1085,
  [SMALL_STATE(39)] = 1098,
  [SMALL_STATE(40)] = 1102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_expression, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_expression, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 3, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_expression, 3, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(36),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
