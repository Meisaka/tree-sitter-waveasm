#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_COLON = 1,
  anon_sym_COMMA = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_DOT = 5,
  sym__eol = 6,
  sym__spc = 7,
  sym_comment = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_char_token1 = 12,
  sym_escape = 13,
  sym_const_zero = 14,
  sym_const_dec = 15,
  sym_alt_hex = 16,
  sym_const_hex = 17,
  sym_const_oct = 18,
  sym_const_bin = 19,
  sym__name = 20,
  sym__nname = 21,
  sym_register = 22,
  sym_source_file = 23,
  sym_line = 24,
  sym_label = 25,
  sym_parameters = 26,
  sym__expression = 27,
  sym__parameter = 28,
  sym__bin_expr = 29,
  sym__value = 30,
  sym_directive = 31,
  sym_dname = 32,
  sym_operation = 33,
  sym_opcode = 34,
  sym_string = 35,
  sym_char = 36,
  sym__const = 37,
  sym_identifier = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_parameters_repeat1 = 40,
  aux_sym_dname_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [sym__eol] = "_eol",
  [sym__spc] = "_spc",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape] = "escape",
  [sym_const_zero] = "const_zero",
  [sym_const_dec] = "const_dec",
  [sym_alt_hex] = "const_hex",
  [sym_const_hex] = "const_hex",
  [sym_const_oct] = "const_oct",
  [sym_const_bin] = "const_bin",
  [sym__name] = "_name",
  [sym__nname] = "_nname",
  [sym_register] = "register",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_parameters] = "parameters",
  [sym__expression] = "_expression",
  [sym__parameter] = "_parameter",
  [sym__bin_expr] = "_bin_expr",
  [sym__value] = "_value",
  [sym_directive] = "directive",
  [sym_dname] = "dname",
  [sym_operation] = "operation",
  [sym_opcode] = "opcode",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym__const] = "_const",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_dname_repeat1] = "dname_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__eol] = sym__eol,
  [sym__spc] = sym__spc,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape] = sym_escape,
  [sym_const_zero] = sym_const_zero,
  [sym_const_dec] = sym_const_dec,
  [sym_alt_hex] = sym_const_hex,
  [sym_const_hex] = sym_const_hex,
  [sym_const_oct] = sym_const_oct,
  [sym_const_bin] = sym_const_bin,
  [sym__name] = sym__name,
  [sym__nname] = sym__nname,
  [sym_register] = sym_register,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_parameters] = sym_parameters,
  [sym__expression] = sym__expression,
  [sym__parameter] = sym__parameter,
  [sym__bin_expr] = sym__bin_expr,
  [sym__value] = sym__value,
  [sym_directive] = sym_directive,
  [sym_dname] = sym_dname,
  [sym_operation] = sym_operation,
  [sym_opcode] = sym_opcode,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym__const] = sym__const,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_dname_repeat1] = aux_sym_dname_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__spc] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_const_zero] = {
    .visible = true,
    .named = true,
  },
  [sym_const_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_alt_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_const_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_const_oct] = {
    .visible = true,
    .named = true,
  },
  [sym_const_bin] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__nname] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__bin_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_dname] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym__const] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dname_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 9:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__spc);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__spc);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'h') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'h') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_const_zero);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_const_dec);
      if (lookahead == 'h') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_alt_hex);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_alt_hex);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_alt_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_const_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_const_oct);
      if (lookahead == 'h') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_const_bin);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__nname);
      if (lookahead == 'h') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__nname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__spc] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_const_zero] = ACTIONS(1),
    [sym_const_dec] = ACTIONS(1),
    [sym_alt_hex] = ACTIONS(1),
    [sym_const_hex] = ACTIONS(1),
    [sym_const_oct] = ACTIONS(1),
    [sym_const_bin] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [sym__nname] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_line] = STATE(48),
    [sym_label] = STATE(35),
    [sym_directive] = STATE(50),
    [sym_dname] = STATE(38),
    [sym_identifier] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(43),
    [aux_sym_dname_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [sym__eol] = ACTIONS(9),
    [sym__spc] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [sym__nname] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      sym__spc,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_const_hex,
    ACTIONS(27), 1,
      sym_register,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    STATE(28), 2,
      sym__parameter,
      sym_string,
    ACTIONS(23), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(20), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [39] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_const_hex,
    ACTIONS(29), 1,
      sym_register,
    STATE(51), 1,
      sym_parameters,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    STATE(25), 2,
      sym__parameter,
      sym_string,
    ACTIONS(23), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(20), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [78] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_const_hex,
    ACTIONS(29), 1,
      sym_register,
    STATE(44), 1,
      sym_parameters,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    STATE(25), 2,
      sym__parameter,
      sym_string,
    ACTIONS(23), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(20), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [117] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_const_hex,
    ACTIONS(31), 1,
      sym__spc,
    ACTIONS(33), 1,
      sym_register,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    STATE(29), 2,
      sym__parameter,
      sym_string,
    ACTIONS(23), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(20), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [156] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_const_hex,
    ACTIONS(35), 1,
      sym_register,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    STATE(27), 2,
      sym__parameter,
      sym_string,
    ACTIONS(23), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(20), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [192] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_const_hex,
    ACTIONS(27), 1,
      sym_register,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    STATE(28), 2,
      sym__parameter,
      sym_string,
    ACTIONS(23), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(20), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [228] = 6,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__spc,
    ACTIONS(41), 1,
      sym_const_hex,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    ACTIONS(39), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(17), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [257] = 6,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__spc,
    ACTIONS(47), 1,
      sym_const_hex,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    ACTIONS(45), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(16), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [286] = 5,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      sym_const_hex,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    ACTIONS(49), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(19), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [312] = 5,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      sym_const_hex,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    ACTIONS(45), 5,
      sym_const_zero,
      sym_const_dec,
      sym_alt_hex,
      sym_const_oct,
      sym_const_bin,
    STATE(16), 6,
      sym__expression,
      sym__bin_expr,
      sym__value,
      sym_char,
      sym__const,
      sym_identifier,
  [338] = 12,
    ACTIONS(5), 1,
      anon_sym_COLON,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__spc,
    ACTIONS(13), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_dname_repeat1,
    STATE(30), 1,
      sym_identifier,
    STATE(35), 1,
      sym_label,
    STATE(38), 1,
      sym_dname,
    STATE(50), 1,
      sym_directive,
    STATE(57), 1,
      sym_line,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym__eol,
  [377] = 9,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      sym__nname,
    ACTIONS(55), 1,
      anon_sym_COLON,
    ACTIONS(57), 1,
      sym__name,
    STATE(22), 1,
      aux_sym_dname_repeat1,
    STATE(38), 1,
      sym_dname,
    STATE(42), 1,
      sym_opcode,
    STATE(61), 1,
      sym_identifier,
    STATE(45), 2,
      sym_directive,
      sym_operation,
  [406] = 8,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__name,
    STATE(22), 1,
      aux_sym_dname_repeat1,
    STATE(38), 1,
      sym_dname,
    STATE(42), 1,
      sym_opcode,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__eol,
    STATE(52), 2,
      sym_directive,
      sym_operation,
  [433] = 2,
    ACTIONS(67), 1,
      sym__spc,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__eol,
      sym_comment,
  [446] = 2,
    ACTIONS(71), 1,
      sym__spc,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__eol,
      sym_comment,
  [458] = 2,
    ACTIONS(75), 1,
      sym__spc,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__eol,
      sym_comment,
  [470] = 2,
    ACTIONS(79), 1,
      sym__spc,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__eol,
      sym_comment,
  [482] = 2,
    ACTIONS(83), 1,
      sym__spc,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__eol,
      sym_comment,
  [494] = 3,
    ACTIONS(89), 1,
      sym__spc,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
      sym_comment,
  [508] = 4,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      sym__spc,
    STATE(21), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [523] = 4,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(101), 1,
      sym__spc,
    STATE(24), 1,
      aux_sym_dname_repeat1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [538] = 4,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      sym__spc,
    STATE(21), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [553] = 4,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(114), 1,
      sym__spc,
    STATE(24), 1,
      aux_sym_dname_repeat1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [568] = 4,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      sym__spc,
    STATE(23), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [583] = 2,
    ACTIONS(114), 1,
      sym__spc,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__eol,
      sym_comment,
  [593] = 2,
    ACTIONS(120), 1,
      sym__spc,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
      sym_comment,
  [603] = 2,
    ACTIONS(124), 1,
      sym__spc,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
      sym_comment,
  [613] = 2,
    ACTIONS(126), 1,
      sym__spc,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
      sym_comment,
  [623] = 3,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      sym__spc,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [635] = 2,
    ACTIONS(136), 1,
      sym__spc,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
      sym_comment,
  [645] = 3,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(140), 1,
      sym__spc,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [657] = 2,
    ACTIONS(144), 1,
      sym__spc,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym__eol,
      sym_comment,
  [667] = 3,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(148), 2,
      aux_sym_string_token1,
      sym_escape,
  [678] = 3,
    ACTIONS(152), 1,
      sym__spc,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym__eol,
  [689] = 2,
    ACTIONS(158), 1,
      sym__spc,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [698] = 2,
    ACTIONS(140), 1,
      sym__spc,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [707] = 2,
    ACTIONS(162), 1,
      sym__spc,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [716] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_repeat1,
    ACTIONS(166), 2,
      aux_sym_string_token1,
      sym_escape,
  [727] = 2,
    ACTIONS(170), 1,
      sym__spc,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [736] = 3,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      sym_escape,
  [747] = 2,
    ACTIONS(179), 1,
      sym__spc,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [756] = 3,
    ACTIONS(9), 1,
      sym__eol,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
  [766] = 1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [772] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__eol,
  [780] = 3,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym__eol,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
  [790] = 3,
    ACTIONS(9), 1,
      sym__eol,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
  [800] = 3,
    ACTIONS(9), 1,
      sym__eol,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
  [810] = 2,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
  [818] = 2,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym__eol,
  [826] = 1,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      sym__eol,
      sym_comment,
  [832] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__eol,
  [840] = 2,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(15), 2,
      sym__name,
      sym__nname,
  [848] = 1,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__eol,
  [853] = 1,
    ACTIONS(198), 2,
      aux_sym_char_token1,
      sym_escape,
  [858] = 1,
    ACTIONS(200), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [863] = 1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__eol,
  [868] = 1,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym__eol,
  [873] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym__eol,
  [878] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__eol,
  [883] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [887] = 1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
  [891] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [895] = 1,
    ACTIONS(210), 1,
      anon_sym_COMMA,
  [899] = 1,
    ACTIONS(212), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 377,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 458,
  [SMALL_STATE(18)] = 470,
  [SMALL_STATE(19)] = 482,
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 568,
  [SMALL_STATE(26)] = 583,
  [SMALL_STATE(27)] = 593,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 613,
  [SMALL_STATE(30)] = 623,
  [SMALL_STATE(31)] = 635,
  [SMALL_STATE(32)] = 645,
  [SMALL_STATE(33)] = 657,
  [SMALL_STATE(34)] = 667,
  [SMALL_STATE(35)] = 678,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 698,
  [SMALL_STATE(38)] = 707,
  [SMALL_STATE(39)] = 716,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 736,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 766,
  [SMALL_STATE(45)] = 772,
  [SMALL_STATE(46)] = 780,
  [SMALL_STATE(47)] = 790,
  [SMALL_STATE(48)] = 800,
  [SMALL_STATE(49)] = 810,
  [SMALL_STATE(50)] = 818,
  [SMALL_STATE(51)] = 826,
  [SMALL_STATE(52)] = 832,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 848,
  [SMALL_STATE(55)] = 853,
  [SMALL_STATE(56)] = 858,
  [SMALL_STATE(57)] = 863,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 873,
  [SMALL_STATE(60)] = 878,
  [SMALL_STATE(61)] = 883,
  [SMALL_STATE(62)] = 887,
  [SMALL_STATE(63)] = 891,
  [SMALL_STATE(64)] = 895,
  [SMALL_STATE(65)] = 899,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bin_expr, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bin_expr, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bin_expr, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bin_expr, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bin_expr, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bin_expr, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(64),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dname, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dname, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dname_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dname_repeat1, 2), SHIFT_REPEAT(65),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dname_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_waveasm_generic(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
