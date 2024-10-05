#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_inside = 2,
  anon_sym_SEMI = 3,
  anon_sym_COMMA = 4,
  anon_sym_COLON = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_DASH_DASH = 12,
  aux_sym_custom_name_token1 = 13,
  sym_source_file = 14,
  sym__statement = 15,
  sym__expression = 16,
  sym_binary_expression = 17,
  sym_delimiter = 18,
  sym_bracket = 19,
  sym_string = 20,
  sym_hash_block = 21,
  sym_hash_pair = 22,
  sym_function_call = 23,
  sym__function_call_argument = 24,
  sym_custom_name = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_hash_block_repeat1 = 27,
  aux_sym_function_call_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_inside] = "inside",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_custom_name_token1] = "custom_name_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_delimiter] = "delimiter",
  [sym_bracket] = "bracket",
  [sym_string] = "string",
  [sym_hash_block] = "hash_block",
  [sym_hash_pair] = "hash_pair",
  [sym_function_call] = "function_call",
  [sym__function_call_argument] = "_function_call_argument",
  [sym_custom_name] = "custom_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_hash_block_repeat1] = "hash_block_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_inside] = anon_sym_inside,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_custom_name_token1] = aux_sym_custom_name_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_delimiter] = sym_delimiter,
  [sym_bracket] = sym_bracket,
  [sym_string] = sym_string,
  [sym_hash_block] = sym_hash_block,
  [sym_hash_pair] = sym_hash_pair,
  [sym_function_call] = sym_function_call,
  [sym__function_call_argument] = sym__function_call_argument,
  [sym_custom_name] = sym_custom_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_hash_block_repeat1] = aux_sym_hash_block_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
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
  [anon_sym_inside] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_custom_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
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
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_block] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_custom_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 11,
        '(', 7,
        ')', 8,
        ',', 5,
        '-', 1,
        ':', 6,
        ';', 4,
        '{', 9,
        '}', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_custom_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
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
      if (lookahead == 'i') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_inside);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_inside] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_string] = STATE(22),
    [sym_function_call] = STATE(22),
    [sym_custom_name] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DASH_DASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_bracket,
    STATE(24), 1,
      sym_string,
    STATE(10), 2,
      sym_hash_pair,
      aux_sym_hash_block_repeat1,
    ACTIONS(11), 4,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [26] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_bracket,
    STATE(24), 1,
      sym_string,
    STATE(10), 2,
      sym_hash_pair,
      aux_sym_hash_block_repeat1,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(15), 4,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
  [52] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DASH_DASH,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(22), 5,
      sym__expression,
      sym_binary_expression,
      sym_string,
      sym_function_call,
      sym_custom_name,
  [76] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(22), 5,
      sym__expression,
      sym_binary_expression,
      sym_string,
      sym_function_call,
      sym_custom_name,
  [100] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_bracket,
    STATE(8), 1,
      aux_sym_function_call_repeat1,
    STATE(14), 3,
      sym_string,
      sym_hash_block,
      sym__function_call_argument,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [121] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_bracket,
    STATE(6), 1,
      aux_sym_function_call_repeat1,
    STATE(14), 3,
      sym_string,
      sym_hash_block,
      sym__function_call_argument,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [142] = 5,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_function_call_repeat1,
    STATE(15), 1,
      sym_bracket,
    STATE(14), 3,
      sym_string,
      sym_hash_block,
      sym__function_call_argument,
    ACTIONS(30), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [163] = 1,
    ACTIONS(36), 9,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [175] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_bracket,
    STATE(24), 1,
      sym_string,
    STATE(19), 2,
      sym_hash_pair,
      aux_sym_hash_block_repeat1,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [195] = 3,
    STATE(23), 1,
      sym_delimiter,
    ACTIONS(38), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(40), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [211] = 1,
    ACTIONS(42), 9,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [223] = 3,
    STATE(7), 1,
      sym_bracket,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(44), 4,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
  [239] = 3,
    STATE(21), 1,
      sym_delimiter,
    ACTIONS(38), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(46), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [255] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_bracket,
    STATE(24), 1,
      sym_string,
    STATE(10), 2,
      sym_hash_pair,
      aux_sym_hash_block_repeat1,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [275] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH,
    STATE(25), 5,
      sym__expression,
      sym_binary_expression,
      sym_string,
      sym_function_call,
      sym_custom_name,
  [292] = 1,
    ACTIONS(48), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DASH_DASH,
      sym_identifier,
  [303] = 1,
    ACTIONS(50), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [314] = 4,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_string,
    STATE(19), 2,
      sym_hash_pair,
      aux_sym_hash_block_repeat1,
    ACTIONS(52), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [331] = 1,
    ACTIONS(57), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [342] = 1,
    ACTIONS(59), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [350] = 3,
    ACTIONS(61), 1,
      anon_sym_inside,
    STATE(26), 1,
      sym_delimiter,
    ACTIONS(38), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
  [362] = 1,
    ACTIONS(63), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [370] = 2,
    STATE(28), 1,
      sym_delimiter,
    ACTIONS(38), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
  [379] = 1,
    ACTIONS(65), 4,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
  [386] = 1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_DASH_DASH,
      sym_identifier,
  [393] = 1,
    ACTIONS(69), 4,
      anon_sym_inside,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
  [400] = 2,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_string,
  [407] = 1,
    ACTIONS(71), 1,
      aux_sym_string_token1,
  [411] = 1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
  [415] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [419] = 1,
    ACTIONS(77), 1,
      aux_sym_custom_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 255,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 292,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 379,
  [SMALL_STATE(26)] = 386,
  [SMALL_STATE(27)] = 393,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 407,
  [SMALL_STATE(30)] = 411,
  [SMALL_STATE(31)] = 415,
  [SMALL_STATE(32)] = 419,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_pair, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_block, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_block_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_block, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_pair, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_name, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nuf(void) {
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
