#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_landmark_prefix = 2,
  anon_sym_banner = 3,
  anon_sym_header = 4,
  anon_sym_complementary = 5,
  anon_sym_aside = 6,
  anon_sym_contentinfo = 7,
  anon_sym_footer = 8,
  anon_sym_form = 9,
  anon_sym_main = 10,
  anon_sym_navigation = 11,
  anon_sym_nav = 12,
  anon_sym_region = 13,
  anon_sym_section = 14,
  anon_sym_search = 15,
  sym_block = 16,
  sym_landmark_keyword = 17,
  sym_landmark = 18,
  aux_sym_block_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_landmark_prefix] = "landmark_prefix",
  [anon_sym_banner] = "banner",
  [anon_sym_header] = "header",
  [anon_sym_complementary] = "complementary",
  [anon_sym_aside] = "aside",
  [anon_sym_contentinfo] = "contentinfo",
  [anon_sym_footer] = "footer",
  [anon_sym_form] = "form",
  [anon_sym_main] = "main",
  [anon_sym_navigation] = "navigation",
  [anon_sym_nav] = "nav",
  [anon_sym_region] = "region",
  [anon_sym_section] = "section",
  [anon_sym_search] = "search",
  [sym_block] = "block",
  [sym_landmark_keyword] = "landmark_keyword",
  [sym_landmark] = "landmark",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_landmark_prefix] = sym_landmark_prefix,
  [anon_sym_banner] = anon_sym_banner,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_complementary] = anon_sym_complementary,
  [anon_sym_aside] = anon_sym_aside,
  [anon_sym_contentinfo] = anon_sym_contentinfo,
  [anon_sym_footer] = anon_sym_footer,
  [anon_sym_form] = anon_sym_form,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_navigation] = anon_sym_navigation,
  [anon_sym_nav] = anon_sym_nav,
  [anon_sym_region] = anon_sym_region,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_search] = anon_sym_search,
  [sym_block] = sym_block,
  [sym_landmark_keyword] = sym_landmark_keyword,
  [sym_landmark] = sym_landmark,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [sym_landmark_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_banner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complementary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aside] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentinfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_form] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_navigation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nav] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_region] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_search] = {
    .visible = true,
    .named = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_landmark_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_landmark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '>') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_landmark_prefix);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
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
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'f', 4,
        'h', 5,
        'm', 6,
        'n', 7,
        'r', 8,
        's', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_nav);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_form);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_main);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_aside);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_banner);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_footer);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_region);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_navigation);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_contentinfo);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_complementary);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_landmark_prefix] = ACTIONS(1),
    [anon_sym_banner] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_complementary] = ACTIONS(1),
    [anon_sym_aside] = ACTIONS(1),
    [anon_sym_contentinfo] = ACTIONS(1),
    [anon_sym_footer] = ACTIONS(1),
    [anon_sym_form] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_navigation] = ACTIONS(1),
    [anon_sym_nav] = ACTIONS(1),
    [anon_sym_region] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_search] = ACTIONS(1),
  },
  [1] = {
    [sym_block] = STATE(7),
    [sym_landmark] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_landmark_prefix] = ACTIONS(5),
  },
  [2] = {
    [sym_landmark_keyword] = STATE(6),
    [anon_sym_banner] = ACTIONS(7),
    [anon_sym_header] = ACTIONS(7),
    [anon_sym_complementary] = ACTIONS(7),
    [anon_sym_aside] = ACTIONS(7),
    [anon_sym_contentinfo] = ACTIONS(7),
    [anon_sym_footer] = ACTIONS(7),
    [anon_sym_form] = ACTIONS(7),
    [anon_sym_main] = ACTIONS(7),
    [anon_sym_navigation] = ACTIONS(7),
    [anon_sym_nav] = ACTIONS(9),
    [anon_sym_region] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(7),
    [anon_sym_search] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_landmark_prefix,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_landmark,
      aux_sym_block_repeat1,
  [11] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_landmark_prefix,
    STATE(4), 2,
      sym_landmark,
      aux_sym_block_repeat1,
  [22] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      sym_landmark_prefix,
  [27] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_landmark_prefix,
  [32] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 11,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 27,
  [SMALL_STATE(7)] = 32,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_landmark_keyword, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_landmark, 2, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
