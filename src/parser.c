#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 49
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
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_BANG = 13,
  anon_sym_DASH = 14,
  anon_sym_COMMA = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_QMARK = 25,
  anon_sym_COLON = 26,
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
  sym_group_expression = 41,
  sym_unary_expression = 42,
  sym_binary_expression = 43,
  sym_ternary_expression = 44,
  sym_assignment_expression = 45,
  sym_comment = 46,
  aux_sym_program_repeat1 = 47,
  aux_sym_comment_repeat1 = 48,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
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
  [sym_group_expression] = "group_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_assignment_expression] = "assignment_expression",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_group_expression] = sym_group_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_assignment_expression] = sym_assignment_expression,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym_group_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
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
  [sym_assignment_expression] = {
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 44:
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
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {(TSStateId)(-1)},
  [50] = {(TSStateId)(-1)},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(47),
    [sym__declaration] = STATE(39),
    [sym_variable_declaration] = STATE(34),
    [sym__statement] = STATE(39),
    [sym_expression_statement] = STATE(38),
    [sym_print_statement] = STATE(38),
    [sym__expression] = STATE(32),
    [sym__literal] = STATE(25),
    [sym_boolean] = STATE(23),
    [sym_group_expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_ternary_expression] = STATE(25),
    [sym_assignment_expression] = STATE(25),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__declaration] = STATE(39),
    [sym_variable_declaration] = STATE(34),
    [sym__statement] = STATE(39),
    [sym_expression_statement] = STATE(38),
    [sym_print_statement] = STATE(38),
    [sym__expression] = STATE(32),
    [sym__literal] = STATE(25),
    [sym_boolean] = STATE(23),
    [sym_group_expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_ternary_expression] = STATE(25),
    [sym_assignment_expression] = STATE(25),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_var] = ACTIONS(30),
    [anon_sym_print] = ACTIONS(33),
    [sym_number] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_nil] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__declaration] = STATE(39),
    [sym_variable_declaration] = STATE(34),
    [sym__statement] = STATE(39),
    [sym_expression_statement] = STATE(38),
    [sym_print_statement] = STATE(38),
    [sym__expression] = STATE(32),
    [sym__literal] = STATE(25),
    [sym_boolean] = STATE(23),
    [sym_group_expression] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_ternary_expression] = STATE(25),
    [sym_assignment_expression] = STATE(25),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_nil] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(20), 1,
      sym__expression,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [45] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(19), 1,
      sym__expression,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [90] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(30), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [135] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(29), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [180] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(24), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [225] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(31), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [270] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(22), 1,
      sym__expression,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [315] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(33), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [360] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(27), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [405] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(23), 1,
      sym_boolean,
    STATE(26), 1,
      sym__expression,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [450] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(18), 1,
      sym__expression,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [495] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_nil,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      sym__expression,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(25), 6,
      sym__literal,
      sym_group_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_ternary_expression,
      sym_assignment_expression,
  [540] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(55), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [572] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [613] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
  [650] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [683] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [726] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(81), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [755] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(85), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [784] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(89), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [813] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(93), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [854] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(55), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [883] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_QMARK,
      anon_sym_COLON,
  [918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(59), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(95), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [976] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1017] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1058] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1099] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1140] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(111), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(115), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(119), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(123), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(127), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(131), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1337] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(135), 6,
      anon_sym_var,
      anon_sym_print,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_identifier,
  [1363] = 5,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      aux_sym_comment_token2,
    ACTIONS(144), 1,
      anon_sym_STAR_SLASH,
    STATE(41), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1380] = 6,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      aux_sym_comment_token2,
    ACTIONS(148), 1,
      anon_sym_STAR_SLASH,
    STATE(41), 1,
      aux_sym_comment_repeat1,
    STATE(42), 1,
      sym_comment,
  [1399] = 6,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      aux_sym_comment_token2,
    ACTIONS(150), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    STATE(43), 1,
      sym_comment,
  [1418] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
  [1434] = 4,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(156), 2,
      aux_sym_comment_token2,
      anon_sym_STAR_SLASH,
  [1448] = 4,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
  [1461] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
  [1474] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comment,
  [1487] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [1491] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 405,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 572,
  [SMALL_STATE(18)] = 613,
  [SMALL_STATE(19)] = 650,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 755,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 854,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 918,
  [SMALL_STATE(28)] = 947,
  [SMALL_STATE(29)] = 976,
  [SMALL_STATE(30)] = 1017,
  [SMALL_STATE(31)] = 1058,
  [SMALL_STATE(32)] = 1099,
  [SMALL_STATE(33)] = 1140,
  [SMALL_STATE(34)] = 1181,
  [SMALL_STATE(35)] = 1207,
  [SMALL_STATE(36)] = 1233,
  [SMALL_STATE(37)] = 1259,
  [SMALL_STATE(38)] = 1285,
  [SMALL_STATE(39)] = 1311,
  [SMALL_STATE(40)] = 1337,
  [SMALL_STATE(41)] = 1363,
  [SMALL_STATE(42)] = 1380,
  [SMALL_STATE(43)] = 1399,
  [SMALL_STATE(44)] = 1418,
  [SMALL_STATE(45)] = 1434,
  [SMALL_STATE(46)] = 1448,
  [SMALL_STATE(47)] = 1461,
  [SMALL_STATE(48)] = 1474,
  [SMALL_STATE(49)] = 1487,
  [SMALL_STATE(50)] = 1491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 3, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_expression, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(45),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
