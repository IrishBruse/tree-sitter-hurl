#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 625
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 321
#define ALIAS_COUNT 1
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_GET = 2,
  anon_sym_HEAD = 3,
  anon_sym_POST = 4,
  anon_sym_PUT = 5,
  anon_sym_DELETE = 6,
  anon_sym_CONNECT = 7,
  anon_sym_OPTIONS = 8,
  anon_sym_TRACE = 9,
  anon_sym_PATCH = 10,
  anon_sym_LINK = 11,
  anon_sym_UNLINK = 12,
  anon_sym_PURGE = 13,
  anon_sym_LOCK = 14,
  anon_sym_UNLOCK = 15,
  anon_sym_PROPFIND = 16,
  anon_sym_VIEW = 17,
  aux_sym_method_token1 = 18,
  anon_sym_HTTP_SLASH1_DOT0 = 19,
  anon_sym_HTTP_SLASH1_DOT1 = 20,
  anon_sym_HTTP_SLASH2 = 21,
  anon_sym_HTTP_SLASH_STAR = 22,
  anon_sym_HTTP = 23,
  aux_sym_status_token1 = 24,
  anon_sym_STAR = 25,
  anon_sym_LBRACKBasicAuth_RBRACK = 26,
  anon_sym_LBRACKQueryStringParams_RBRACK = 27,
  anon_sym_LBRACKFormParams_RBRACK = 28,
  anon_sym_LBRACKMultipartFormData_RBRACK = 29,
  anon_sym_LBRACKCookies_RBRACK = 30,
  anon_sym_LBRACKCaptures_RBRACK = 31,
  anon_sym_LBRACKAsserts_RBRACK = 32,
  anon_sym_LBRACKOptions_RBRACK = 33,
  anon_sym_COLON = 34,
  anon_sym_null = 35,
  anon_sym_COLON2 = 36,
  anon_sym_file_COMMA = 37,
  anon_sym_SEMI = 38,
  aux_sym_file_value_token1 = 39,
  anon_sym_cacert = 40,
  anon_sym_compressed = 41,
  anon_sym_location = 42,
  anon_sym_insecure = 43,
  anon_sym_max_DASHredirs = 44,
  anon_sym_path_DASHas_DASHis = 45,
  anon_sym_proxy = 46,
  anon_sym_retry = 47,
  anon_sym_retry_DASHinterval = 48,
  anon_sym_retry_DASHmax_DASHcount = 49,
  anon_sym_variable = 50,
  anon_sym_verbose = 51,
  anon_sym_very_DASHverbose = 52,
  anon_sym_EQ = 53,
  anon_sym_status = 54,
  anon_sym_url = 55,
  anon_sym_body = 56,
  anon_sym_duration = 57,
  anon_sym_bytes = 58,
  anon_sym_sha256 = 59,
  anon_sym_md5 = 60,
  anon_sym_header = 61,
  anon_sym_cookie = 62,
  anon_sym_xpath = 63,
  anon_sym_jsonpath = 64,
  anon_sym_regex = 65,
  anon_sym_not = 66,
  anon_sym_exists = 67,
  anon_sym_isInteger = 68,
  anon_sym_isFloat = 69,
  anon_sym_isBoolean = 70,
  anon_sym_isString = 71,
  anon_sym_isCollection = 72,
  anon_sym_equals = 73,
  anon_sym_EQ_EQ = 74,
  anon_sym_notEquals = 75,
  anon_sym_BANG_EQ = 76,
  anon_sym_greaterThan = 77,
  anon_sym_GT = 78,
  anon_sym_greaterThanOrEquals = 79,
  anon_sym_GT_EQ = 80,
  anon_sym_lessThan = 81,
  anon_sym_LT = 82,
  anon_sym_lessThanOrEquals = 83,
  anon_sym_LT_EQ = 84,
  anon_sym_startsWith = 85,
  anon_sym_endsWith = 86,
  anon_sym_contains = 87,
  anon_sym_matches = 88,
  anon_sym_includes = 89,
  anon_sym_LT_QMARK = 90,
  aux_sym_xml_prolog_tag_token1 = 91,
  anon_sym_QMARK_GT = 92,
  aux_sym_xml_open_tag_token1 = 93,
  anon_sym_LT_SLASH = 94,
  aux_sym_xml_close_tag_token1 = 95,
  anon_sym_base64_COMMA = 96,
  aux_sym_oneline_base64_token1 = 97,
  anon_sym_hex_COMMA = 98,
  anon_sym_DQUOTE = 99,
  sym_quoted_string_text = 100,
  anon_sym_BSLASH = 101,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 102,
  anon_sym_b = 103,
  anon_sym_f = 104,
  anon_sym_n = 105,
  anon_sym_r = 106,
  anon_sym_t = 107,
  anon_sym_u = 108,
  sym_key_string_text = 109,
  anon_sym_BSLASH2 = 110,
  aux_sym_key_string_escaped_char_token1 = 111,
  aux_sym_value_string_text_token1 = 112,
  anon_sym_POUND = 113,
  aux_sym_oneline_string_token1 = 114,
  anon_sym_BQUOTE = 115,
  aux_sym_oneline_string_text_token1 = 116,
  aux_sym_oneline_string_text_token2 = 117,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 118,
  anon_sym_base64 = 119,
  anon_sym_hex = 120,
  anon_sym_json = 121,
  anon_sym_xml = 122,
  anon_sym_graphql = 123,
  aux_sym_multiline_string_type_token1 = 124,
  aux_sym__multiline_string_text_token1 = 125,
  anon_sym_LBRACE = 126,
  sym_filename_text = 127,
  aux_sym_filename_escaped_char_token1 = 128,
  anon_sym_RBRACE = 129,
  anon_sym_COMMA = 130,
  anon_sym_LBRACK = 131,
  anon_sym_RBRACK = 132,
  sym_json_string_text = 133,
  anon_sym_LBRACE_LBRACE = 134,
  anon_sym_RBRACE_RBRACE = 135,
  aux_sym_variable_name_token1 = 136,
  aux_sym_variable_name_token2 = 137,
  anon_sym_count = 138,
  anon_sym_urlEncode = 139,
  anon_sym_urlDecode = 140,
  anon_sym_toInt = 141,
  anon_sym_htmlEscape = 142,
  anon_sym_htmlUnescape = 143,
  anon_sym_daysAfterNow = 144,
  anon_sym_daysBeforeNow = 145,
  anon_sym_decode = 146,
  anon_sym_format = 147,
  anon_sym_toDate = 148,
  anon_sym_nth = 149,
  anon_sym_replace = 150,
  anon_sym_split = 151,
  anon_sym_true = 152,
  anon_sym_false = 153,
  sym_digit = 154,
  sym_hexdigit = 155,
  anon_sym_DOT = 156,
  anon_sym_e = 157,
  anon_sym_E = 158,
  anon_sym_PLUS = 159,
  anon_sym_DASH = 160,
  sym_comment = 161,
  anon_sym_SLASH = 162,
  sym_regex_text = 163,
  aux_sym_regex_escaped_char_token1 = 164,
  sym_test_DASHfoo = 165,
  sym_entry = 166,
  sym_lt = 167,
  sym_request = 168,
  sym_response = 169,
  sym_method = 170,
  sym_version = 171,
  sym_status = 172,
  sym_header = 173,
  sym_body = 174,
  sym_request_DASHsection = 175,
  sym_response_section = 176,
  sym_basic_auth_section = 177,
  sym_query_string_params_section = 178,
  sym_form_params_section = 179,
  sym_multipart_form_data_section = 180,
  sym_cookies_section = 181,
  sym_captures_section = 182,
  sym_asserts_section = 183,
  sym_options_section = 184,
  sym_key_value = 185,
  sym_multipart_form_data_param = 186,
  sym_file_param = 187,
  sym_file_value = 188,
  sym_capture = 189,
  sym_assert = 190,
  sym_option = 191,
  sym_ca_certificate_option = 192,
  sym_compressed_option = 193,
  sym_follow_redirect_option = 194,
  sym_insecure_option = 195,
  sym_max_redirs_option = 196,
  sym_path_as_is_option = 197,
  sym_proxy_option = 198,
  sym_retry_option = 199,
  sym_retry_interval_option = 200,
  sym_retry_max_count_option = 201,
  sym_variable_option = 202,
  sym_verbose_option = 203,
  sym_very_verbose_option = 204,
  sym_variable_definition = 205,
  sym_variable_value = 206,
  sym_query = 207,
  sym_header_query = 208,
  sym_cookie_query = 209,
  sym_xpath_query = 210,
  sym_jsonpath_query = 211,
  sym_regex_query = 212,
  sym_variable_query = 213,
  sym_predicate = 214,
  sym_predicate_func = 215,
  sym_equal_predicate = 216,
  sym_not_equal_predicate = 217,
  sym_greater_predicate = 218,
  sym_greater_or_equal_predicate = 219,
  sym_less_predicate = 220,
  sym_less_or_equal_predicate = 221,
  sym_start_with_predicate = 222,
  sym_end_with_predicate = 223,
  sym_contain_predicate = 224,
  sym_match_predicate = 225,
  sym_include_predicate = 226,
  sym_predicate_value = 227,
  sym_bytes = 228,
  sym_xml = 229,
  sym_xml_prolog_tag = 230,
  sym_xml_tag = 231,
  sym_xml_open_tag = 232,
  sym_xml_close_tag = 233,
  sym_oneline_base64 = 234,
  sym_oneline_file = 235,
  sym_oneline_hex = 236,
  sym_quoted_string = 237,
  sym_quoted_string_content = 238,
  sym_invalid_quoted_string_escaped_char = 239,
  sym_quoted_string_escaped_char = 240,
  sym_key_string = 241,
  sym_key_string_content = 242,
  sym_key_string_escaped_char = 243,
  sym_value_string = 244,
  sym_value_string_content = 245,
  sym_value_string_text = 246,
  sym_value_string_escaped_char = 247,
  sym_oneline_string = 248,
  sym_oneline_string_content = 249,
  sym_oneline_string_text = 250,
  sym_oneline_string_escaped_char = 251,
  sym_multiline_string = 252,
  sym_multiline_string_type = 253,
  sym_multiline_string_content = 254,
  sym__multiline_string_text = 255,
  sym_multiline_string_escaped_char = 256,
  sym_filename = 257,
  sym_filename_content = 258,
  sym_filename_escaped_char = 259,
  sym_unicode_char = 260,
  sym_json_value = 261,
  sym_json_object = 262,
  sym_json_key_value = 263,
  sym_json_key_string = 264,
  sym_json_array = 265,
  sym_json_string = 266,
  sym_json_string_content = 267,
  sym_json_string_escaped_char = 268,
  sym_json_number = 269,
  sym_template = 270,
  sym_expr = 271,
  sym_variable_name = 272,
  sym_filter = 273,
  sym_regex_filter = 274,
  sym_nth_filter = 275,
  sym_replace_filter = 276,
  sym_split_filter = 277,
  sym_xpath_filter = 278,
  sym_boolean = 279,
  sym_integer = 280,
  sym_float = 281,
  sym_fraction = 282,
  sym_exponent = 283,
  sym_regex = 284,
  sym_regex_content = 285,
  sym_regex_escaped_char = 286,
  aux_sym_test_DASHfoo_repeat1 = 287,
  aux_sym_test_DASHfoo_repeat2 = 288,
  aux_sym_lt_repeat1 = 289,
  aux_sym_request_repeat1 = 290,
  aux_sym_request_repeat2 = 291,
  aux_sym_response_repeat1 = 292,
  aux_sym_query_string_params_section_repeat1 = 293,
  aux_sym_multipart_form_data_section_repeat1 = 294,
  aux_sym_captures_section_repeat1 = 295,
  aux_sym_asserts_section_repeat1 = 296,
  aux_sym_options_section_repeat1 = 297,
  aux_sym_capture_repeat1 = 298,
  aux_sym_xml_repeat1 = 299,
  aux_sym_xml_tag_repeat1 = 300,
  aux_sym_oneline_hex_repeat1 = 301,
  aux_sym_quoted_string_repeat1 = 302,
  aux_sym_quoted_string_content_repeat1 = 303,
  aux_sym_key_string_repeat1 = 304,
  aux_sym_key_string_content_repeat1 = 305,
  aux_sym_value_string_repeat1 = 306,
  aux_sym_value_string_content_repeat1 = 307,
  aux_sym_value_string_text_repeat1 = 308,
  aux_sym_oneline_string_repeat1 = 309,
  aux_sym_oneline_string_content_repeat1 = 310,
  aux_sym_multiline_string_repeat1 = 311,
  aux_sym_multiline_string_content_repeat1 = 312,
  aux_sym__multiline_string_text_repeat1 = 313,
  aux_sym_filename_repeat1 = 314,
  aux_sym_filename_content_repeat1 = 315,
  aux_sym_json_object_repeat1 = 316,
  aux_sym_json_array_repeat1 = 317,
  aux_sym_json_string_repeat1 = 318,
  aux_sym_integer_repeat1 = 319,
  aux_sym_regex_content_repeat1 = 320,
  anon_alias_sym_json_key_string = 321,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_LINK] = "LINK",
  [anon_sym_UNLINK] = "UNLINK",
  [anon_sym_PURGE] = "PURGE",
  [anon_sym_LOCK] = "LOCK",
  [anon_sym_UNLOCK] = "UNLOCK",
  [anon_sym_PROPFIND] = "PROPFIND",
  [anon_sym_VIEW] = "VIEW",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP_SLASH_STAR] = "HTTP/*",
  [anon_sym_HTTP] = "HTTP",
  [aux_sym_status_token1] = "status_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACKBasicAuth_RBRACK] = "[BasicAuth]",
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKMultipartFormData_RBRACK] = "[MultipartFormData]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [anon_sym_LBRACKCaptures_RBRACK] = "[Captures]",
  [anon_sym_LBRACKAsserts_RBRACK] = "[Asserts]",
  [anon_sym_LBRACKOptions_RBRACK] = "[Options]",
  [anon_sym_COLON] = ":",
  [anon_sym_null] = "null",
  [anon_sym_COLON2] = ":",
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_value_token1] = "file_value_token1",
  [anon_sym_cacert] = "cacert",
  [anon_sym_compressed] = "compressed",
  [anon_sym_location] = "location",
  [anon_sym_insecure] = "insecure",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_path_DASHas_DASHis] = "path-as-is",
  [anon_sym_proxy] = "proxy",
  [anon_sym_retry] = "retry",
  [anon_sym_retry_DASHinterval] = "retry-interval",
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_variable] = "variable",
  [anon_sym_verbose] = "verbose",
  [anon_sym_very_DASHverbose] = "very-verbose",
  [anon_sym_EQ] = "=",
  [anon_sym_status] = "status",
  [anon_sym_url] = "url",
  [anon_sym_body] = "body",
  [anon_sym_duration] = "duration",
  [anon_sym_bytes] = "bytes",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_header] = "header",
  [anon_sym_cookie] = "cookie",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_regex] = "regex",
  [anon_sym_not] = "not",
  [anon_sym_exists] = "exists",
  [anon_sym_isInteger] = "isInteger",
  [anon_sym_isFloat] = "isFloat",
  [anon_sym_isBoolean] = "isBoolean",
  [anon_sym_isString] = "isString",
  [anon_sym_isCollection] = "isCollection",
  [anon_sym_equals] = "equals",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_notEquals] = "notEquals",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_greaterThan] = "greaterThan",
  [anon_sym_GT] = ">",
  [anon_sym_greaterThanOrEquals] = "greaterThanOrEquals",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_lessThan] = "lessThan",
  [anon_sym_LT] = "<",
  [anon_sym_lessThanOrEquals] = "lessThanOrEquals",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_startsWith] = "startsWith",
  [anon_sym_endsWith] = "endsWith",
  [anon_sym_contains] = "contains",
  [anon_sym_matches] = "matches",
  [anon_sym_includes] = "includes",
  [anon_sym_LT_QMARK] = "<\?",
  [aux_sym_xml_prolog_tag_token1] = "xml_prolog_tag_token1",
  [anon_sym_QMARK_GT] = "\?>",
  [aux_sym_xml_open_tag_token1] = "xml_open_tag_token1",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_xml_close_tag_token1] = "xml_close_tag_token1",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [anon_sym_DQUOTE] = "\"",
  [sym_quoted_string_text] = "quoted_string_text",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_invalid_quoted_string_escaped_char_token1] = "invalid_quoted_string_escaped_char_token1",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [sym_key_string_text] = "key_string_text",
  [anon_sym_BSLASH2] = "\\",
  [aux_sym_key_string_escaped_char_token1] = "key_string_escaped_char_token1",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_oneline_string_token1] = "oneline_string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [aux_sym_oneline_string_text_token2] = "oneline_string_text_token2",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_type_token1] = "multiline_string_type_token1",
  [aux_sym__multiline_string_text_token1] = "_multiline_string_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_filename_text] = "filename_text",
  [aux_sym_filename_escaped_char_token1] = "filename_escaped_char_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_json_string_text] = "json_string_text",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_variable_name_token1] = "variable_name_token1",
  [aux_sym_variable_name_token2] = "variable_name_token2",
  [anon_sym_count] = "count",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_toInt] = "toInt",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_daysAfterNow] = "daysAfterNow",
  [anon_sym_daysBeforeNow] = "daysBeforeNow",
  [anon_sym_decode] = "decode",
  [anon_sym_format] = "format",
  [anon_sym_toDate] = "toDate",
  [anon_sym_nth] = "nth",
  [anon_sym_replace] = "replace",
  [anon_sym_split] = "split",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [sym_regex_text] = "regex_text",
  [aux_sym_regex_escaped_char_token1] = "regex_escaped_char_token1",
  [sym_test_DASHfoo] = "test-foo",
  [sym_entry] = "entry",
  [sym_lt] = "lt",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_method] = "method",
  [sym_version] = "version",
  [sym_status] = "status",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_request_DASHsection] = "request-section",
  [sym_response_section] = "response_section",
  [sym_basic_auth_section] = "basic_auth_section",
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym_multipart_form_data_section] = "multipart_form_data_section",
  [sym_cookies_section] = "cookies_section",
  [sym_captures_section] = "captures_section",
  [sym_asserts_section] = "asserts_section",
  [sym_options_section] = "options_section",
  [sym_key_value] = "key_value",
  [sym_multipart_form_data_param] = "multipart_form_data_param",
  [sym_file_param] = "file_param",
  [sym_file_value] = "file_value",
  [sym_capture] = "capture",
  [sym_assert] = "assert",
  [sym_option] = "option",
  [sym_ca_certificate_option] = "ca_certificate_option",
  [sym_compressed_option] = "compressed_option",
  [sym_follow_redirect_option] = "follow_redirect_option",
  [sym_insecure_option] = "insecure_option",
  [sym_max_redirs_option] = "max_redirs_option",
  [sym_path_as_is_option] = "path_as_is_option",
  [sym_proxy_option] = "proxy_option",
  [sym_retry_option] = "retry_option",
  [sym_retry_interval_option] = "retry_interval_option",
  [sym_retry_max_count_option] = "retry_max_count_option",
  [sym_variable_option] = "variable_option",
  [sym_verbose_option] = "verbose_option",
  [sym_very_verbose_option] = "very_verbose_option",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_value] = "variable_value",
  [sym_query] = "query",
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
  [sym_predicate] = "predicate",
  [sym_predicate_func] = "predicate_func",
  [sym_equal_predicate] = "equal_predicate",
  [sym_not_equal_predicate] = "not_equal_predicate",
  [sym_greater_predicate] = "greater_predicate",
  [sym_greater_or_equal_predicate] = "greater_or_equal_predicate",
  [sym_less_predicate] = "less_predicate",
  [sym_less_or_equal_predicate] = "less_or_equal_predicate",
  [sym_start_with_predicate] = "start_with_predicate",
  [sym_end_with_predicate] = "end_with_predicate",
  [sym_contain_predicate] = "contain_predicate",
  [sym_match_predicate] = "match_predicate",
  [sym_include_predicate] = "include_predicate",
  [sym_predicate_value] = "predicate_value",
  [sym_bytes] = "bytes",
  [sym_xml] = "xml",
  [sym_xml_prolog_tag] = "xml_prolog_tag",
  [sym_xml_tag] = "xml_tag",
  [sym_xml_open_tag] = "xml_open_tag",
  [sym_xml_close_tag] = "xml_close_tag",
  [sym_oneline_base64] = "oneline_base64",
  [sym_oneline_file] = "oneline_file",
  [sym_oneline_hex] = "oneline_hex",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_content] = "quoted_string_content",
  [sym_invalid_quoted_string_escaped_char] = "invalid_quoted_string_escaped_char",
  [sym_quoted_string_escaped_char] = "quoted_string_escaped_char",
  [sym_key_string] = "key_string",
  [sym_key_string_content] = "key_string_content",
  [sym_key_string_escaped_char] = "key_string_escaped_char",
  [sym_value_string] = "value_string",
  [sym_value_string_content] = "value_string_content",
  [sym_value_string_text] = "value_string_text",
  [sym_value_string_escaped_char] = "value_string_escaped_char",
  [sym_oneline_string] = "oneline_string",
  [sym_oneline_string_content] = "oneline_string_content",
  [sym_oneline_string_text] = "oneline_string_text",
  [sym_oneline_string_escaped_char] = "oneline_string_escaped_char",
  [sym_multiline_string] = "multiline_string",
  [sym_multiline_string_type] = "multiline_string_type",
  [sym_multiline_string_content] = "multiline_string_content",
  [sym__multiline_string_text] = "_multiline_string_text",
  [sym_multiline_string_escaped_char] = "multiline_string_escaped_char",
  [sym_filename] = "filename",
  [sym_filename_content] = "filename_content",
  [sym_filename_escaped_char] = "filename_escaped_char",
  [sym_unicode_char] = "unicode_char",
  [sym_json_value] = "json_value",
  [sym_json_object] = "json_object",
  [sym_json_key_value] = "json_key_value",
  [sym_json_key_string] = "json_key_string",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_string_content] = "json_string_content",
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_regex_filter] = "regex_filter",
  [sym_nth_filter] = "nth_filter",
  [sym_replace_filter] = "replace_filter",
  [sym_split_filter] = "split_filter",
  [sym_xpath_filter] = "xpath_filter",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
  [sym_regex] = "regex",
  [sym_regex_content] = "regex_content",
  [sym_regex_escaped_char] = "regex_escaped_char",
  [aux_sym_test_DASHfoo_repeat1] = "test-foo_repeat1",
  [aux_sym_test_DASHfoo_repeat2] = "test-foo_repeat2",
  [aux_sym_lt_repeat1] = "lt_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_query_string_params_section_repeat1] = "query_string_params_section_repeat1",
  [aux_sym_multipart_form_data_section_repeat1] = "multipart_form_data_section_repeat1",
  [aux_sym_captures_section_repeat1] = "captures_section_repeat1",
  [aux_sym_asserts_section_repeat1] = "asserts_section_repeat1",
  [aux_sym_options_section_repeat1] = "options_section_repeat1",
  [aux_sym_capture_repeat1] = "capture_repeat1",
  [aux_sym_xml_repeat1] = "xml_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_oneline_hex_repeat1] = "oneline_hex_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_content_repeat1] = "quoted_string_content_repeat1",
  [aux_sym_key_string_repeat1] = "key_string_repeat1",
  [aux_sym_key_string_content_repeat1] = "key_string_content_repeat1",
  [aux_sym_value_string_repeat1] = "value_string_repeat1",
  [aux_sym_value_string_content_repeat1] = "value_string_content_repeat1",
  [aux_sym_value_string_text_repeat1] = "value_string_text_repeat1",
  [aux_sym_oneline_string_repeat1] = "oneline_string_repeat1",
  [aux_sym_oneline_string_content_repeat1] = "oneline_string_content_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_multiline_string_content_repeat1] = "multiline_string_content_repeat1",
  [aux_sym__multiline_string_text_repeat1] = "_multiline_string_text_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [aux_sym_filename_content_repeat1] = "filename_content_repeat1",
  [aux_sym_json_object_repeat1] = "json_object_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_regex_content_repeat1] = "regex_content_repeat1",
  [anon_alias_sym_json_key_string] = "json_key_string",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_LINK] = anon_sym_LINK,
  [anon_sym_UNLINK] = anon_sym_UNLINK,
  [anon_sym_PURGE] = anon_sym_PURGE,
  [anon_sym_LOCK] = anon_sym_LOCK,
  [anon_sym_UNLOCK] = anon_sym_UNLOCK,
  [anon_sym_PROPFIND] = anon_sym_PROPFIND,
  [anon_sym_VIEW] = anon_sym_VIEW,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [anon_sym_HTTP] = anon_sym_HTTP,
  [aux_sym_status_token1] = aux_sym_status_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACKBasicAuth_RBRACK] = anon_sym_LBRACKBasicAuth_RBRACK,
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKMultipartFormData_RBRACK] = anon_sym_LBRACKMultipartFormData_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [anon_sym_LBRACKCaptures_RBRACK] = anon_sym_LBRACKCaptures_RBRACK,
  [anon_sym_LBRACKAsserts_RBRACK] = anon_sym_LBRACKAsserts_RBRACK,
  [anon_sym_LBRACKOptions_RBRACK] = anon_sym_LBRACKOptions_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_value_token1] = aux_sym_file_value_token1,
  [anon_sym_cacert] = anon_sym_cacert,
  [anon_sym_compressed] = anon_sym_compressed,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_insecure] = anon_sym_insecure,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_path_DASHas_DASHis] = anon_sym_path_DASHas_DASHis,
  [anon_sym_proxy] = anon_sym_proxy,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_retry_DASHinterval] = anon_sym_retry_DASHinterval,
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_very_DASHverbose] = anon_sym_very_DASHverbose,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_cookie] = anon_sym_cookie,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_isInteger] = anon_sym_isInteger,
  [anon_sym_isFloat] = anon_sym_isFloat,
  [anon_sym_isBoolean] = anon_sym_isBoolean,
  [anon_sym_isString] = anon_sym_isString,
  [anon_sym_isCollection] = anon_sym_isCollection,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_notEquals] = anon_sym_notEquals,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_greaterThan] = anon_sym_greaterThan,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_greaterThanOrEquals] = anon_sym_greaterThanOrEquals,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_lessThan] = anon_sym_lessThan,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_lessThanOrEquals] = anon_sym_lessThanOrEquals,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_startsWith] = anon_sym_startsWith,
  [anon_sym_endsWith] = anon_sym_endsWith,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [aux_sym_xml_prolog_tag_token1] = aux_sym_xml_prolog_tag_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [aux_sym_xml_open_tag_token1] = aux_sym_xml_open_tag_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_xml_close_tag_token1] = aux_sym_xml_close_tag_token1,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_quoted_string_text] = sym_quoted_string_text,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_invalid_quoted_string_escaped_char_token1] = aux_sym_invalid_quoted_string_escaped_char_token1,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [sym_key_string_text] = sym_key_string_text,
  [anon_sym_BSLASH2] = anon_sym_BSLASH,
  [aux_sym_key_string_escaped_char_token1] = aux_sym_key_string_escaped_char_token1,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_oneline_string_token1] = aux_sym_oneline_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [aux_sym_oneline_string_text_token2] = aux_sym_oneline_string_text_token2,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_type_token1] = aux_sym_multiline_string_type_token1,
  [aux_sym__multiline_string_text_token1] = aux_sym__multiline_string_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_filename_text] = sym_filename_text,
  [aux_sym_filename_escaped_char_token1] = aux_sym_filename_escaped_char_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_json_string_text] = sym_json_string_text,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_variable_name_token1] = aux_sym_variable_name_token1,
  [aux_sym_variable_name_token2] = aux_sym_variable_name_token2,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_toInt] = anon_sym_toInt,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_daysAfterNow] = anon_sym_daysAfterNow,
  [anon_sym_daysBeforeNow] = anon_sym_daysBeforeNow,
  [anon_sym_decode] = anon_sym_decode,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_toDate] = anon_sym_toDate,
  [anon_sym_nth] = anon_sym_nth,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_regex_text] = sym_regex_text,
  [aux_sym_regex_escaped_char_token1] = aux_sym_regex_escaped_char_token1,
  [sym_test_DASHfoo] = sym_test_DASHfoo,
  [sym_entry] = sym_entry,
  [sym_lt] = sym_lt,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_method] = sym_method,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_request_DASHsection] = sym_request_DASHsection,
  [sym_response_section] = sym_response_section,
  [sym_basic_auth_section] = sym_basic_auth_section,
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym_multipart_form_data_section] = sym_multipart_form_data_section,
  [sym_cookies_section] = sym_cookies_section,
  [sym_captures_section] = sym_captures_section,
  [sym_asserts_section] = sym_asserts_section,
  [sym_options_section] = sym_options_section,
  [sym_key_value] = sym_key_value,
  [sym_multipart_form_data_param] = sym_multipart_form_data_param,
  [sym_file_param] = sym_file_param,
  [sym_file_value] = sym_file_value,
  [sym_capture] = sym_capture,
  [sym_assert] = sym_assert,
  [sym_option] = sym_option,
  [sym_ca_certificate_option] = sym_ca_certificate_option,
  [sym_compressed_option] = sym_compressed_option,
  [sym_follow_redirect_option] = sym_follow_redirect_option,
  [sym_insecure_option] = sym_insecure_option,
  [sym_max_redirs_option] = sym_max_redirs_option,
  [sym_path_as_is_option] = sym_path_as_is_option,
  [sym_proxy_option] = sym_proxy_option,
  [sym_retry_option] = sym_retry_option,
  [sym_retry_interval_option] = sym_retry_interval_option,
  [sym_retry_max_count_option] = sym_retry_max_count_option,
  [sym_variable_option] = sym_variable_option,
  [sym_verbose_option] = sym_verbose_option,
  [sym_very_verbose_option] = sym_very_verbose_option,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_value] = sym_variable_value,
  [sym_query] = sym_query,
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
  [sym_predicate] = sym_predicate,
  [sym_predicate_func] = sym_predicate_func,
  [sym_equal_predicate] = sym_equal_predicate,
  [sym_not_equal_predicate] = sym_not_equal_predicate,
  [sym_greater_predicate] = sym_greater_predicate,
  [sym_greater_or_equal_predicate] = sym_greater_or_equal_predicate,
  [sym_less_predicate] = sym_less_predicate,
  [sym_less_or_equal_predicate] = sym_less_or_equal_predicate,
  [sym_start_with_predicate] = sym_start_with_predicate,
  [sym_end_with_predicate] = sym_end_with_predicate,
  [sym_contain_predicate] = sym_contain_predicate,
  [sym_match_predicate] = sym_match_predicate,
  [sym_include_predicate] = sym_include_predicate,
  [sym_predicate_value] = sym_predicate_value,
  [sym_bytes] = sym_bytes,
  [sym_xml] = sym_xml,
  [sym_xml_prolog_tag] = sym_xml_prolog_tag,
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_open_tag] = sym_xml_open_tag,
  [sym_xml_close_tag] = sym_xml_close_tag,
  [sym_oneline_base64] = sym_oneline_base64,
  [sym_oneline_file] = sym_oneline_file,
  [sym_oneline_hex] = sym_oneline_hex,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_content] = sym_quoted_string_content,
  [sym_invalid_quoted_string_escaped_char] = sym_invalid_quoted_string_escaped_char,
  [sym_quoted_string_escaped_char] = sym_quoted_string_escaped_char,
  [sym_key_string] = sym_key_string,
  [sym_key_string_content] = sym_key_string_content,
  [sym_key_string_escaped_char] = sym_key_string_escaped_char,
  [sym_value_string] = sym_value_string,
  [sym_value_string_content] = sym_value_string_content,
  [sym_value_string_text] = sym_value_string_text,
  [sym_value_string_escaped_char] = sym_value_string_escaped_char,
  [sym_oneline_string] = sym_oneline_string,
  [sym_oneline_string_content] = sym_oneline_string_content,
  [sym_oneline_string_text] = sym_oneline_string_text,
  [sym_oneline_string_escaped_char] = sym_oneline_string_escaped_char,
  [sym_multiline_string] = sym_multiline_string,
  [sym_multiline_string_type] = sym_multiline_string_type,
  [sym_multiline_string_content] = sym_multiline_string_content,
  [sym__multiline_string_text] = sym__multiline_string_text,
  [sym_multiline_string_escaped_char] = sym_multiline_string_escaped_char,
  [sym_filename] = sym_filename,
  [sym_filename_content] = sym_filename_content,
  [sym_filename_escaped_char] = sym_filename_escaped_char,
  [sym_unicode_char] = sym_unicode_char,
  [sym_json_value] = sym_json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_key_value] = sym_json_key_value,
  [sym_json_key_string] = sym_json_key_string,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_nth_filter] = sym_nth_filter,
  [sym_replace_filter] = sym_replace_filter,
  [sym_split_filter] = sym_split_filter,
  [sym_xpath_filter] = sym_xpath_filter,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
  [sym_regex] = sym_regex,
  [sym_regex_content] = sym_regex_content,
  [sym_regex_escaped_char] = sym_regex_escaped_char,
  [aux_sym_test_DASHfoo_repeat1] = aux_sym_test_DASHfoo_repeat1,
  [aux_sym_test_DASHfoo_repeat2] = aux_sym_test_DASHfoo_repeat2,
  [aux_sym_lt_repeat1] = aux_sym_lt_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_query_string_params_section_repeat1] = aux_sym_query_string_params_section_repeat1,
  [aux_sym_multipart_form_data_section_repeat1] = aux_sym_multipart_form_data_section_repeat1,
  [aux_sym_captures_section_repeat1] = aux_sym_captures_section_repeat1,
  [aux_sym_asserts_section_repeat1] = aux_sym_asserts_section_repeat1,
  [aux_sym_options_section_repeat1] = aux_sym_options_section_repeat1,
  [aux_sym_capture_repeat1] = aux_sym_capture_repeat1,
  [aux_sym_xml_repeat1] = aux_sym_xml_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_oneline_hex_repeat1] = aux_sym_oneline_hex_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_content_repeat1] = aux_sym_quoted_string_content_repeat1,
  [aux_sym_key_string_repeat1] = aux_sym_key_string_repeat1,
  [aux_sym_key_string_content_repeat1] = aux_sym_key_string_content_repeat1,
  [aux_sym_value_string_repeat1] = aux_sym_value_string_repeat1,
  [aux_sym_value_string_content_repeat1] = aux_sym_value_string_content_repeat1,
  [aux_sym_value_string_text_repeat1] = aux_sym_value_string_text_repeat1,
  [aux_sym_oneline_string_repeat1] = aux_sym_oneline_string_repeat1,
  [aux_sym_oneline_string_content_repeat1] = aux_sym_oneline_string_content_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_multiline_string_content_repeat1] = aux_sym_multiline_string_content_repeat1,
  [aux_sym__multiline_string_text_repeat1] = aux_sym__multiline_string_text_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [aux_sym_filename_content_repeat1] = aux_sym_filename_content_repeat1,
  [aux_sym_json_object_repeat1] = aux_sym_json_object_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_regex_content_repeat1] = aux_sym_regex_content_repeat1,
  [anon_alias_sym_json_key_string] = anon_alias_sym_json_key_string,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PURGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPFIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VIEW] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_status_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKBasicAuth_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipartFormData_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCookies_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCaptures_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKAsserts_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKOptions_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cacert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compressed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insecure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHredirs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_DASHas_DASHis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHmax_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_very_DASHverbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cookie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsonpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isFloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isBoolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isCollection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greaterThan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greaterThanOrEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanOrEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_prolog_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_open_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_close_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_base64_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_base64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hex_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_invalid_quoted_string_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [sym_key_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_string_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graphql] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_filename_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_json_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlEncode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlDecode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlEscape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlUnescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daysAfterNow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daysBeforeNow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_hexdigit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_regex_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_test_DASHfoo] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_request_DASHsection] = {
    .visible = true,
    .named = true,
  },
  [sym_response_section] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_auth_section] = {
    .visible = true,
    .named = true,
  },
  [sym_query_string_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_form_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data_section] = {
    .visible = true,
    .named = true,
  },
  [sym_cookies_section] = {
    .visible = true,
    .named = true,
  },
  [sym_captures_section] = {
    .visible = true,
    .named = true,
  },
  [sym_asserts_section] = {
    .visible = true,
    .named = true,
  },
  [sym_options_section] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data_param] = {
    .visible = true,
    .named = true,
  },
  [sym_file_param] = {
    .visible = true,
    .named = true,
  },
  [sym_file_value] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_ca_certificate_option] = {
    .visible = true,
    .named = true,
  },
  [sym_compressed_option] = {
    .visible = true,
    .named = true,
  },
  [sym_follow_redirect_option] = {
    .visible = true,
    .named = true,
  },
  [sym_insecure_option] = {
    .visible = true,
    .named = true,
  },
  [sym_max_redirs_option] = {
    .visible = true,
    .named = true,
  },
  [sym_path_as_is_option] = {
    .visible = true,
    .named = true,
  },
  [sym_proxy_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_interval_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_max_count_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_option] = {
    .visible = true,
    .named = true,
  },
  [sym_verbose_option] = {
    .visible = true,
    .named = true,
  },
  [sym_very_verbose_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_value] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_header_query] = {
    .visible = true,
    .named = true,
  },
  [sym_cookie_query] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath_query] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonpath_query] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_query] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_query] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_func] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_less_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_less_or_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_start_with_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_end_with_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_contain_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_match_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_include_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_prolog_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_open_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_close_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_base64] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_file] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string_text] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_content] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_char] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_object] = {
    .visible = true,
    .named = true,
  },
  [sym_json_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_json_number] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_nth_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_split_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_content] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_DASHfoo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_DASHfoo_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_response_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_string_params_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_captures_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asserts_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capture_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_json_key_string] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_json_key_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_json_string, 2,
    sym_json_string,
    anon_alias_sym_json_key_string,
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
  [39] = 22,
  [40] = 21,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 38,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 21,
  [53] = 22,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 22,
  [75] = 21,
  [76] = 54,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 44,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 45,
  [99] = 43,
  [100] = 50,
  [101] = 101,
  [102] = 50,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 22,
  [109] = 21,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 89,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 119,
  [123] = 63,
  [124] = 124,
  [125] = 61,
  [126] = 64,
  [127] = 65,
  [128] = 66,
  [129] = 56,
  [130] = 55,
  [131] = 67,
  [132] = 57,
  [133] = 58,
  [134] = 71,
  [135] = 70,
  [136] = 69,
  [137] = 68,
  [138] = 73,
  [139] = 72,
  [140] = 140,
  [141] = 59,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 156,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 190,
  [191] = 176,
  [192] = 192,
  [193] = 180,
  [194] = 192,
  [195] = 184,
  [196] = 196,
  [197] = 187,
  [198] = 192,
  [199] = 188,
  [200] = 176,
  [201] = 190,
  [202] = 192,
  [203] = 176,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 204,
  [212] = 212,
  [213] = 213,
  [214] = 207,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 212,
  [219] = 219,
  [220] = 220,
  [221] = 43,
  [222] = 222,
  [223] = 223,
  [224] = 45,
  [225] = 223,
  [226] = 226,
  [227] = 22,
  [228] = 21,
  [229] = 22,
  [230] = 21,
  [231] = 22,
  [232] = 21,
  [233] = 22,
  [234] = 21,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 236,
  [240] = 240,
  [241] = 220,
  [242] = 236,
  [243] = 243,
  [244] = 237,
  [245] = 245,
  [246] = 219,
  [247] = 247,
  [248] = 220,
  [249] = 243,
  [250] = 235,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 223,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 240,
  [266] = 266,
  [267] = 267,
  [268] = 263,
  [269] = 269,
  [270] = 263,
  [271] = 271,
  [272] = 22,
  [273] = 21,
  [274] = 252,
  [275] = 275,
  [276] = 276,
  [277] = 253,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 271,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 271,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 252,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 252,
  [300] = 252,
  [301] = 252,
  [302] = 302,
  [303] = 282,
  [304] = 251,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 309,
  [310] = 310,
  [311] = 282,
  [312] = 312,
  [313] = 276,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 306,
  [350] = 350,
  [351] = 351,
  [352] = 334,
  [353] = 343,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 358,
  [360] = 317,
  [361] = 361,
  [362] = 271,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 252,
  [367] = 334,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 358,
  [372] = 317,
  [373] = 252,
  [374] = 252,
  [375] = 271,
  [376] = 376,
  [377] = 377,
  [378] = 252,
  [379] = 379,
  [380] = 252,
  [381] = 381,
  [382] = 382,
  [383] = 350,
  [384] = 318,
  [385] = 385,
  [386] = 386,
  [387] = 335,
  [388] = 337,
  [389] = 292,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 396,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 252,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 404,
  [426] = 426,
  [427] = 408,
  [428] = 412,
  [429] = 414,
  [430] = 394,
  [431] = 426,
  [432] = 432,
  [433] = 392,
  [434] = 434,
  [435] = 392,
  [436] = 392,
  [437] = 392,
  [438] = 392,
  [439] = 392,
  [440] = 392,
  [441] = 392,
  [442] = 392,
  [443] = 392,
  [444] = 392,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 262,
  [449] = 357,
  [450] = 410,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 348,
  [460] = 460,
  [461] = 461,
  [462] = 402,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 266,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 411,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 256,
  [478] = 478,
  [479] = 405,
  [480] = 480,
  [481] = 481,
  [482] = 406,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 434,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 475,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 500,
  [505] = 400,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 445,
  [513] = 465,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 476,
  [518] = 452,
  [519] = 458,
  [520] = 486,
  [521] = 461,
  [522] = 522,
  [523] = 523,
  [524] = 467,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 467,
  [531] = 460,
  [532] = 460,
  [533] = 502,
  [534] = 534,
  [535] = 409,
  [536] = 261,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 547,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 555,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 568,
  [573] = 573,
  [574] = 574,
  [575] = 565,
  [576] = 540,
  [577] = 545,
  [578] = 547,
  [579] = 565,
  [580] = 545,
  [581] = 565,
  [582] = 545,
  [583] = 565,
  [584] = 584,
  [585] = 545,
  [586] = 545,
  [587] = 545,
  [588] = 545,
  [589] = 545,
  [590] = 545,
  [591] = 591,
  [592] = 571,
  [593] = 593,
  [594] = 545,
  [595] = 562,
  [596] = 596,
  [597] = 597,
  [598] = 596,
  [599] = 599,
  [600] = 596,
  [601] = 601,
  [602] = 596,
  [603] = 603,
  [604] = 604,
  [605] = 566,
  [606] = 596,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 574,
  [613] = 574,
  [614] = 574,
  [615] = 574,
  [616] = 616,
  [617] = 540,
  [618] = 540,
  [619] = 540,
  [620] = 558,
  [621] = 558,
  [622] = 558,
  [623] = 558,
  [624] = 545,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '!', 63,
        '"', 728,
        '#', 901,
        '*', 637,
        '+', 988,
        ',', 946,
        '-', 989,
        '.', 983,
        '/', 991,
        ':', 653,
        ';', 658,
        '<', 704,
        '=', 674,
        '>', 700,
        '?', 65,
        'E', 987,
        '[', 948,
        '\\', 894,
        ']', 953,
        '`', 904,
        'b', 735,
        'e', 984,
        'f', 736,
        'n', 737,
        'r', 738,
        't', 739,
        'u', 740,
        '{', 939,
        '}', 945,
        'a', 961,
        'c', 961,
        'd', 961,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(629);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 534,
        '#', 990,
        '.', 983,
        'E', 986,
        'c', 356,
        'd', 119,
        'e', 984,
        'f', 357,
        'h', 464,
        'n', 465,
        'r', 206,
        's', 365,
        't', 332,
        'u', 395,
        'x', 371,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == ':') ADVANCE(653);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 534,
        '#', 990,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 583,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(770);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(785);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '[') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == 'f') ADVANCE(897);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '{') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(896);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '#') ADVANCE(990);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '<') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(896);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') SKIP(18);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(941);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(943);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == ' ') SKIP(18);
      if (lookahead == '#') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(943);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '`') ADVANCE(904);
      if (lookahead == '{') ADVANCE(939);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(896);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '`') ADVANCE(903);
      if (lookahead == '{') ADVANCE(907);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(905);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '`') ADVANCE(903);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(905);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '/') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(992);
      if (lookahead != 0) ADVANCE(993);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(726);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(995);
      if (lookahead != 0) ADVANCE(994);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == 'b') ADVANCE(920);
      if (lookahead == 'g') ADVANCE(931);
      if (lookahead == 'h') ADVANCE(921);
      if (lookahead == 'j') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(926);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '!', 63,
        '"', 728,
        '+', 988,
        ',', 946,
        '-', 989,
        '/', 991,
        ':', 656,
        '<', 706,
        '=', 64,
        '>', 700,
        '[', 947,
        ']', 953,
        '`', 108,
        'b', 134,
        'c', 335,
        'd', 119,
        'e', 317,
        'f', 115,
        'g', 404,
        'h', 211,
        'i', 316,
        'l', 234,
        'm', 144,
        'n', 351,
        'r', 206,
        's', 366,
        't', 333,
        'u', 395,
        'x', 371,
        '{', 939,
        '}', 518,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '!', 63,
        '"', 728,
        '+', 988,
        ',', 946,
        '-', 989,
        '/', 991,
        ':', 656,
        '<', 706,
        '=', 64,
        '>', 700,
        '[', 947,
        ']', 953,
        '`', 108,
        'b', 134,
        'c', 335,
        'd', 119,
        'e', 317,
        'f', 115,
        'g', 404,
        'h', 211,
        'i', 316,
        'l', 234,
        'm', 144,
        'n', 351,
        'r', 206,
        's', 366,
        't', 333,
        'u', 395,
        'x', 371,
        '{', 938,
        '}', 518,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '!', 63,
        ',', 946,
        '.', 983,
        '<', 706,
        '=', 64,
        '>', 700,
        'E', 986,
        '[', 70,
        ']', 953,
        'c', 335,
        'd', 119,
        'e', 985,
        'f', 357,
        'g', 404,
        'h', 464,
        'i', 316,
        'l', 234,
        'm', 144,
        'n', 350,
        'r', 206,
        's', 366,
        't', 332,
        'u', 395,
        'x', 371,
        '{', 938,
        '}', 518,
        '"', 895,
        '#', 895,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '!', 63,
        ',', 946,
        '.', 983,
        '<', 706,
        '=', 64,
        '>', 700,
        'E', 986,
        '[', 70,
        ']', 953,
        'c', 335,
        'd', 119,
        'e', 985,
        'f', 357,
        'g', 404,
        'h', 464,
        'i', 316,
        'l', 234,
        'm', 144,
        'n', 350,
        'r', 206,
        's', 366,
        't', 332,
        'u', 395,
        'x', 371,
        '{', 938,
        '}', 518,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '"', 728,
        '#', 901,
        ',', 944,
        ';', 658,
        '\\', 894,
        'f', 822,
        'n', 888,
        't', 863,
        '{', 517,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '#') ADVANCE(901);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == ';') ADVANCE(658);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == 't') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '"', 728,
        '#', 901,
        '\\', 732,
        '`', 903,
        'b', 735,
        'f', 736,
        'n', 737,
        'r', 738,
        't', 739,
        'u', 740,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '"', 728,
        ',', 946,
        '.', 983,
        ':', 656,
        '<', 707,
        '=', 673,
        '>', 699,
        'E', 986,
        ']', 953,
        'b', 337,
        'c', 354,
        'd', 495,
        'e', 984,
        'h', 227,
        'j', 432,
        'm', 178,
        'r', 208,
        's', 254,
        'u', 389,
        'v', 130,
        'x', 371,
        '}', 945,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '"', 728,
        '\\', 732,
        'b', 735,
        'f', 736,
        'n', 737,
        'r', 738,
        't', 739,
        'u', 740,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(35);
      if (lookahead == '\n' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(734);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(729);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0) ADVANCE(731);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(955);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(956);
      if (lookahead != 0) ADVANCE(954);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '*', 637,
        '=', 673,
        'c', 356,
        'd', 119,
        'f', 357,
        'h', 464,
        'n', 465,
        'r', 206,
        's', 365,
        't', 332,
        'u', 395,
        'x', 371,
        '}', 518,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '2') ADVANCE(632);
      END_STATE();
    case 40:
      if (lookahead == ',') ADVANCE(727);
      END_STATE();
    case 41:
      if (lookahead == ',') ADVANCE(657);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(724);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(504);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(630);
      if (lookahead == '1') ADVANCE(631);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == '5') ADVANCE(681);
      END_STATE();
    case 53:
      if (lookahead == '5') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == '6') ADVANCE(680);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(653);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(656);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(656);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == ';') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '{') ADVANCE(941);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(60);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(943);
      END_STATE();
    case 60:
      if (lookahead == ';') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(60);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(943);
      END_STATE();
    case 61:
      if (lookahead == ';') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(982);
      END_STATE();
    case 62:
      if (lookahead == '<') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(697);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(695);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(718);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(212);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(491);
      END_STATE();
    case 68:
      if (lookahead == 'B') ADVANCE(349);
      if (lookahead == 'C') ADVANCE(347);
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == 'S') ADVANCE(475);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(336);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(336);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'M') ADVANCE(487);
      if (lookahead == 'O') ADVANCE(363);
      if (lookahead == 'Q') ADVANCE(488);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(320);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead == 'U') ADVANCE(325);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(375);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(329);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(352);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(487);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(334);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(338);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(363);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(152);
      END_STATE();
    case 85:
      if (lookahead == 'Q') ADVANCE(488);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(470);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(256);
      END_STATE();
    case 89:
      if (lookahead == 'W') ADVANCE(273);
      END_STATE();
    case 90:
      if (lookahead == 'W') ADVANCE(274);
      END_STATE();
    case 91:
      if (lookahead == '[') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 92:
      if (lookahead == '[') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      END_STATE();
    case 93:
      if (lookahead == '[') ADVANCE(770);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 94:
      if (lookahead == '[') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 95:
      if (lookahead == '[') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      END_STATE();
    case 96:
      if (lookahead == '[') ADVANCE(785);
      if (lookahead == '\\') ADVANCE(894);
      if (lookahead == '{') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 97:
      if (lookahead == '[') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97);
      END_STATE();
    case 98:
      if (lookahead == '[') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == '\\') ADVANCE(732);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(649);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(645);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(651);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(647);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(638);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(641);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(643);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(640);
      END_STATE();
    case 108:
      if (lookahead == '`') ADVANCE(110);
      END_STATE();
    case 109:
      if (lookahead == '`') ADVANCE(110);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 110:
      if (lookahead == '`') ADVANCE(910);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(360);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(661);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(975);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 239:
      if (lookahead == 'f') ADVANCE(483);
      END_STATE();
    case 240:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(692);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 243:
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 244:
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 245:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 246:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(684);
      END_STATE();
    case 248:
      if (lookahead == 'h') ADVANCE(685);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(974);
      END_STATE();
    case 250:
      if (lookahead == 'h') ADVANCE(711);
      END_STATE();
    case 251:
      if (lookahead == 'h') ADVANCE(710);
      END_STATE();
    case 252:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 253:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 277:
      if (lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 278:
      if (lookahead == 'k') ADVANCE(266);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(654);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(668);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 304:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 306:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'q') ADVANCE(497);
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 373:
      if (lookahead == 'q') ADVANCE(500);
      END_STATE();
    case 374:
      if (lookahead == 'q') ADVANCE(501);
      END_STATE();
    case 375:
      if (lookahead == 'q') ADVANCE(502);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(963);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(976);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 498:
      if (lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 500:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 501:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 502:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 503:
      if (lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 504:
      if (lookahead == 'v') ADVANCE(223);
      END_STATE();
    case 505:
      if (lookahead == 'w') ADVANCE(969);
      END_STATE();
    case 506:
      if (lookahead == 'w') ADVANCE(970);
      END_STATE();
    case 507:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 508:
      if (lookahead == 'x') ADVANCE(686);
      END_STATE();
    case 509:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 510:
      if (lookahead == 'x') ADVANCE(514);
      END_STATE();
    case 511:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 512:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 513:
      if (lookahead == 'y') ADVANCE(677);
      END_STATE();
    case 514:
      if (lookahead == 'y') ADVANCE(666);
      END_STATE();
    case 515:
      if (lookahead == 'y') ADVANCE(667);
      END_STATE();
    case 516:
      if (lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 517:
      if (lookahead == '{') ADVANCE(957);
      END_STATE();
    case 518:
      if (lookahead == '}') ADVANCE(960);
      END_STATE();
    case 519:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      END_STATE();
    case 520:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(908);
      END_STATE();
    case 521:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(720);
      END_STATE();
    case 522:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(723);
      END_STATE();
    case 523:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(717);
      END_STATE();
    case 524:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '.', 983,
        '<', 707,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 583,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 949,
        '`', 109,
        'b', 135,
        'c', 354,
        'd', 495,
        'f', 114,
        'h', 188,
        'j', 432,
        'm', 178,
        'n', 490,
        'r', 208,
        's', 254,
        't', 388,
        'u', 389,
        'v', 130,
        'x', 371,
        '{', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 525:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '.', 983,
        '<', 707,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 583,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 949,
        '`', 109,
        'b', 135,
        'c', 354,
        'd', 495,
        'f', 114,
        'h', 188,
        'j', 432,
        'm', 178,
        'n', 490,
        'r', 208,
        's', 254,
        't', 388,
        'u', 389,
        'v', 130,
        'x', 371,
        '{', 938,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 526:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '<', 707,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 582,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 951,
        '`', 109,
        'b', 134,
        'c', 117,
        'd', 119,
        'f', 115,
        'h', 211,
        'i', 319,
        'l', 340,
        'm', 122,
        'n', 466,
        'p', 137,
        'r', 195,
        's', 365,
        't', 333,
        'u', 395,
        'v', 131,
        'x', 371,
        '{', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 527:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '<', 707,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 582,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 951,
        '`', 109,
        'b', 134,
        'c', 117,
        'd', 119,
        'f', 115,
        'h', 211,
        'i', 319,
        'l', 340,
        'm', 122,
        'n', 466,
        'p', 137,
        'r', 195,
        's', 365,
        't', 333,
        'u', 395,
        'v', 131,
        'x', 371,
        '{', 938,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 528:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '<', 707,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 582,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 951,
        '`', 109,
        'b', 134,
        'f', 114,
        'h', 210,
        'n', 490,
        't', 388,
        '{', 938,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 529:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '<', 707,
        'C', 612,
        'D', 580,
        'G', 581,
        'H', 583,
        'L', 593,
        'O', 616,
        'P', 571,
        'T', 618,
        'U', 605,
        'V', 594,
        '[', 949,
        '`', 109,
        'b', 134,
        'f', 114,
        'h', 210,
        'n', 490,
        't', 388,
        '{', 938,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 530:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '<', 707,
        'C', 793,
        'D', 759,
        'G', 760,
        'H', 761,
        'L', 775,
        'O', 799,
        'P', 749,
        'T', 802,
        'U', 787,
        'V', 774,
        '[', 952,
        '\\', 894,
        '`', 109,
        'b', 820,
        'f', 821,
        'h', 831,
        'n', 888,
        't', 863,
        '{', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 531:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 534,
        '"', 728,
        '#', 990,
        '<', 707,
        'C', 793,
        'D', 759,
        'G', 760,
        'H', 762,
        'L', 775,
        'O', 799,
        'P', 749,
        'T', 802,
        'U', 787,
        'V', 774,
        '[', 950,
        '\\', 894,
        '`', 109,
        'b', 820,
        'f', 821,
        'h', 831,
        'n', 888,
        't', 863,
        '{', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 532:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '!', 63,
        '"', 728,
        '#', 901,
        '*', 637,
        '+', 988,
        ',', 946,
        '-', 989,
        '.', 983,
        '/', 991,
        ':', 656,
        ';', 658,
        '<', 704,
        '=', 674,
        '>', 700,
        '?', 65,
        'E', 987,
        '[', 948,
        '\\', 732,
        ']', 953,
        '`', 904,
        'b', 735,
        'e', 984,
        'f', 736,
        'n', 737,
        'r', 738,
        't', 739,
        'u', 740,
        '{', 938,
        '}', 945,
        'a', 961,
        'c', 961,
        'd', 961,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(629);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(535);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(940);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(537);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(916);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(578);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(625);
      if (lookahead == 'O') ADVANCE(620);
      if (lookahead == 'R') ADVANCE(611);
      if (lookahead == 'U') ADVANCE(617);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(577);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(604);
      if (lookahead == 'O') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(591);
      if (lookahead == 'T') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(695);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(409);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(702);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(382);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '=') ADVANCE(709);
      if (lookahead == '?') ADVANCE(715);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '?') ADVANCE(715);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(709);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(715);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '>') ADVANCE(720);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(720);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead != 0) ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(725);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == 'b') ADVANCE(735);
      if (lookahead == 'f') ADVANCE(736);
      if (lookahead == 'n') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(733);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(756);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(754);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(810);
      if (lookahead == 'O') ADVANCE(804);
      if (lookahead == 'R') ADVANCE(794);
      if (lookahead == 'U') ADVANCE(801);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(786);
      if (lookahead == 'O') ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(790);
      if (lookahead == 'O') ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(768);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'M') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(772);
      if (lookahead == 'T') ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(849);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(747);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(978);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(816);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(833);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(741);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(957);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(110);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(903);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(906);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(905);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(957);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(908);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == 'b') ADVANCE(920);
      if (lookahead == 'g') ADVANCE(931);
      if (lookahead == 'h') ADVANCE(921);
      if (lookahead == 'j') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(926);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(536);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(937);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(957);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(535);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(943);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(943);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(942);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(943);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(943);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'M') ADVANCE(487);
      if (lookahead == 'O') ADVANCE(363);
      if (lookahead == 'Q') ADVANCE(488);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == 'C') ADVANCE(146);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(878);
      if (lookahead == 'C') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_json_string_text);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '{') ADVANCE(957);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_json_string_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(954);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(943);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(731);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(893);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'q') ADVANCE(497);
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(629);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(990);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(992);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(993);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(993);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(995);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(994);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 524},
  [2] = {.lex_state = 530},
  [3] = {.lex_state = 530},
  [4] = {.lex_state = 530},
  [5] = {.lex_state = 530},
  [6] = {.lex_state = 531},
  [7] = {.lex_state = 531},
  [8] = {.lex_state = 526},
  [9] = {.lex_state = 526},
  [10] = {.lex_state = 526},
  [11] = {.lex_state = 526},
  [12] = {.lex_state = 526},
  [13] = {.lex_state = 526},
  [14] = {.lex_state = 524},
  [15] = {.lex_state = 524},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 524},
  [19] = {.lex_state = 524},
  [20] = {.lex_state = 524},
  [21] = {.lex_state = 526},
  [22] = {.lex_state = 526},
  [23] = {.lex_state = 526},
  [24] = {.lex_state = 526},
  [25] = {.lex_state = 526},
  [26] = {.lex_state = 526},
  [27] = {.lex_state = 526},
  [28] = {.lex_state = 526},
  [29] = {.lex_state = 526},
  [30] = {.lex_state = 526},
  [31] = {.lex_state = 526},
  [32] = {.lex_state = 526},
  [33] = {.lex_state = 526},
  [34] = {.lex_state = 526},
  [35] = {.lex_state = 526},
  [36] = {.lex_state = 526},
  [37] = {.lex_state = 526},
  [38] = {.lex_state = 530},
  [39] = {.lex_state = 524},
  [40] = {.lex_state = 524},
  [41] = {.lex_state = 524},
  [42] = {.lex_state = 524},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 531},
  [47] = {.lex_state = 531},
  [48] = {.lex_state = 531},
  [49] = {.lex_state = 531},
  [50] = {.lex_state = 530},
  [51] = {.lex_state = 526},
  [52] = {.lex_state = 530},
  [53] = {.lex_state = 530},
  [54] = {.lex_state = 530},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 524},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 526},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 531},
  [75] = {.lex_state = 531},
  [76] = {.lex_state = 531},
  [77] = {.lex_state = 531},
  [78] = {.lex_state = 531},
  [79] = {.lex_state = 524},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 526},
  [82] = {.lex_state = 526},
  [83] = {.lex_state = 524},
  [84] = {.lex_state = 524},
  [85] = {.lex_state = 526},
  [86] = {.lex_state = 526},
  [87] = {.lex_state = 524},
  [88] = {.lex_state = 526},
  [89] = {.lex_state = 526},
  [90] = {.lex_state = 526},
  [91] = {.lex_state = 526},
  [92] = {.lex_state = 526},
  [93] = {.lex_state = 524},
  [94] = {.lex_state = 526},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 524},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 524},
  [101] = {.lex_state = 524},
  [102] = {.lex_state = 524},
  [103] = {.lex_state = 524},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 524},
  [111] = {.lex_state = 524},
  [112] = {.lex_state = 524},
  [113] = {.lex_state = 524},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 524},
  [117] = {.lex_state = 524},
  [118] = {.lex_state = 524},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 526},
  [124] = {.lex_state = 38},
  [125] = {.lex_state = 526},
  [126] = {.lex_state = 526},
  [127] = {.lex_state = 526},
  [128] = {.lex_state = 526},
  [129] = {.lex_state = 526},
  [130] = {.lex_state = 526},
  [131] = {.lex_state = 526},
  [132] = {.lex_state = 526},
  [133] = {.lex_state = 526},
  [134] = {.lex_state = 526},
  [135] = {.lex_state = 526},
  [136] = {.lex_state = 526},
  [137] = {.lex_state = 526},
  [138] = {.lex_state = 526},
  [139] = {.lex_state = 526},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 526},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 27},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 27},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 91},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 91},
  [154] = {.lex_state = 91},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 93},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 94},
  [164] = {.lex_state = 94},
  [165] = {.lex_state = 20},
  [166] = {.lex_state = 94},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 93},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 96},
  [172] = {.lex_state = 96},
  [173] = {.lex_state = 93},
  [174] = {.lex_state = 96},
  [175] = {.lex_state = 59},
  [176] = {.lex_state = 56},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 59},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 56},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 35},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 59},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 59},
  [202] = {.lex_state = 57},
  [203] = {.lex_state = 57},
  [204] = {.lex_state = 37},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 33},
  [207] = {.lex_state = 37},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 37},
  [211] = {.lex_state = 37},
  [212] = {.lex_state = 33},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 37},
  [215] = {.lex_state = 19},
  [216] = {.lex_state = 26},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 33},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 56},
  [226] = {.lex_state = 21},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 34},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 56},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 13},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 57},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 59},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 57},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 34},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 59},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 33},
  [270] = {.lex_state = 34},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 16},
  [275] = {.lex_state = 34},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 19},
  [279] = {.lex_state = 524},
  [280] = {.lex_state = 19},
  [281] = {.lex_state = 524},
  [282] = {.lex_state = 34},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 524},
  [285] = {.lex_state = 19},
  [286] = {.lex_state = 524},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 524},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 524},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 17},
  [293] = {.lex_state = 524},
  [294] = {.lex_state = 524},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 524},
  [297] = {.lex_state = 524},
  [298] = {.lex_state = 524},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 56},
  [301] = {.lex_state = 17},
  [302] = {.lex_state = 524},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 13},
  [305] = {.lex_state = 23},
  [306] = {.lex_state = 56},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 524},
  [311] = {.lex_state = 34},
  [312] = {.lex_state = 524},
  [313] = {.lex_state = 13},
  [314] = {.lex_state = 524},
  [315] = {.lex_state = 524},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 524},
  [318] = {.lex_state = 27},
  [319] = {.lex_state = 27},
  [320] = {.lex_state = 524},
  [321] = {.lex_state = 524},
  [322] = {.lex_state = 524},
  [323] = {.lex_state = 524},
  [324] = {.lex_state = 524},
  [325] = {.lex_state = 524},
  [326] = {.lex_state = 524},
  [327] = {.lex_state = 524},
  [328] = {.lex_state = 524},
  [329] = {.lex_state = 524},
  [330] = {.lex_state = 524},
  [331] = {.lex_state = 524},
  [332] = {.lex_state = 524},
  [333] = {.lex_state = 524},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 27},
  [336] = {.lex_state = 34},
  [337] = {.lex_state = 27},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 524},
  [340] = {.lex_state = 524},
  [341] = {.lex_state = 36},
  [342] = {.lex_state = 524},
  [343] = {.lex_state = 524},
  [344] = {.lex_state = 524},
  [345] = {.lex_state = 524},
  [346] = {.lex_state = 21},
  [347] = {.lex_state = 524},
  [348] = {.lex_state = 34},
  [349] = {.lex_state = 57},
  [350] = {.lex_state = 524},
  [351] = {.lex_state = 524},
  [352] = {.lex_state = 27},
  [353] = {.lex_state = 524},
  [354] = {.lex_state = 524},
  [355] = {.lex_state = 524},
  [356] = {.lex_state = 524},
  [357] = {.lex_state = 34},
  [358] = {.lex_state = 27},
  [359] = {.lex_state = 524},
  [360] = {.lex_state = 27},
  [361] = {.lex_state = 37},
  [362] = {.lex_state = 21},
  [363] = {.lex_state = 21},
  [364] = {.lex_state = 21},
  [365] = {.lex_state = 27},
  [366] = {.lex_state = 59},
  [367] = {.lex_state = 27},
  [368] = {.lex_state = 524},
  [369] = {.lex_state = 37},
  [370] = {.lex_state = 36},
  [371] = {.lex_state = 34},
  [372] = {.lex_state = 34},
  [373] = {.lex_state = 37},
  [374] = {.lex_state = 21},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 524},
  [377] = {.lex_state = 524},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 524},
  [380] = {.lex_state = 57},
  [381] = {.lex_state = 524},
  [382] = {.lex_state = 524},
  [383] = {.lex_state = 524},
  [384] = {.lex_state = 27},
  [385] = {.lex_state = 524},
  [386] = {.lex_state = 524},
  [387] = {.lex_state = 27},
  [388] = {.lex_state = 27},
  [389] = {.lex_state = 59},
  [390] = {.lex_state = 15},
  [391] = {.lex_state = 27},
  [392] = {.lex_state = 519},
  [393] = {.lex_state = 27},
  [394] = {.lex_state = 34},
  [395] = {.lex_state = 27},
  [396] = {.lex_state = 27},
  [397] = {.lex_state = 519},
  [398] = {.lex_state = 27},
  [399] = {.lex_state = 27},
  [400] = {.lex_state = 34},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 34},
  [403] = {.lex_state = 38},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 34},
  [406] = {.lex_state = 34},
  [407] = {.lex_state = 61},
  [408] = {.lex_state = 34},
  [409] = {.lex_state = 34},
  [410] = {.lex_state = 34},
  [411] = {.lex_state = 34},
  [412] = {.lex_state = 34},
  [413] = {.lex_state = 61},
  [414] = {.lex_state = 27},
  [415] = {.lex_state = 61},
  [416] = {.lex_state = 27},
  [417] = {.lex_state = 27},
  [418] = {.lex_state = 34},
  [419] = {.lex_state = 27},
  [420] = {.lex_state = 34},
  [421] = {.lex_state = 27},
  [422] = {.lex_state = 27},
  [423] = {.lex_state = 27},
  [424] = {.lex_state = 27},
  [425] = {.lex_state = 31},
  [426] = {.lex_state = 27},
  [427] = {.lex_state = 34},
  [428] = {.lex_state = 34},
  [429] = {.lex_state = 27},
  [430] = {.lex_state = 34},
  [431] = {.lex_state = 27},
  [432] = {.lex_state = 23},
  [433] = {.lex_state = 519},
  [434] = {.lex_state = 34},
  [435] = {.lex_state = 519},
  [436] = {.lex_state = 519},
  [437] = {.lex_state = 519},
  [438] = {.lex_state = 519},
  [439] = {.lex_state = 519},
  [440] = {.lex_state = 519},
  [441] = {.lex_state = 519},
  [442] = {.lex_state = 519},
  [443] = {.lex_state = 519},
  [444] = {.lex_state = 519},
  [445] = {.lex_state = 34},
  [446] = {.lex_state = 524},
  [447] = {.lex_state = 29},
  [448] = {.lex_state = 524},
  [449] = {.lex_state = 524},
  [450] = {.lex_state = 524},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 27},
  [453] = {.lex_state = 29},
  [454] = {.lex_state = 29},
  [455] = {.lex_state = 34},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 524},
  [458] = {.lex_state = 27},
  [459] = {.lex_state = 524},
  [460] = {.lex_state = 27},
  [461] = {.lex_state = 27},
  [462] = {.lex_state = 524},
  [463] = {.lex_state = 524},
  [464] = {.lex_state = 27},
  [465] = {.lex_state = 27},
  [466] = {.lex_state = 524},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 524},
  [469] = {.lex_state = 524},
  [470] = {.lex_state = 524},
  [471] = {.lex_state = 524},
  [472] = {.lex_state = 524},
  [473] = {.lex_state = 524},
  [474] = {.lex_state = 524},
  [475] = {.lex_state = 29},
  [476] = {.lex_state = 27},
  [477] = {.lex_state = 524},
  [478] = {.lex_state = 524},
  [479] = {.lex_state = 524},
  [480] = {.lex_state = 524},
  [481] = {.lex_state = 524},
  [482] = {.lex_state = 524},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 524},
  [485] = {.lex_state = 524},
  [486] = {.lex_state = 27},
  [487] = {.lex_state = 29},
  [488] = {.lex_state = 524},
  [489] = {.lex_state = 524},
  [490] = {.lex_state = 524},
  [491] = {.lex_state = 524},
  [492] = {.lex_state = 524},
  [493] = {.lex_state = 524},
  [494] = {.lex_state = 524},
  [495] = {.lex_state = 524},
  [496] = {.lex_state = 524},
  [497] = {.lex_state = 29},
  [498] = {.lex_state = 524},
  [499] = {.lex_state = 29},
  [500] = {.lex_state = 27},
  [501] = {.lex_state = 524},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 38},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 524},
  [506] = {.lex_state = 29},
  [507] = {.lex_state = 524},
  [508] = {.lex_state = 524},
  [509] = {.lex_state = 29},
  [510] = {.lex_state = 524},
  [511] = {.lex_state = 524},
  [512] = {.lex_state = 524},
  [513] = {.lex_state = 27},
  [514] = {.lex_state = 524},
  [515] = {.lex_state = 524},
  [516] = {.lex_state = 524},
  [517] = {.lex_state = 27},
  [518] = {.lex_state = 27},
  [519] = {.lex_state = 27},
  [520] = {.lex_state = 27},
  [521] = {.lex_state = 27},
  [522] = {.lex_state = 524},
  [523] = {.lex_state = 524},
  [524] = {.lex_state = 27},
  [525] = {.lex_state = 524},
  [526] = {.lex_state = 29},
  [527] = {.lex_state = 524},
  [528] = {.lex_state = 524},
  [529] = {.lex_state = 34},
  [530] = {.lex_state = 27},
  [531] = {.lex_state = 27},
  [532] = {.lex_state = 27},
  [533] = {.lex_state = 27},
  [534] = {.lex_state = 524},
  [535] = {.lex_state = 524},
  [536] = {.lex_state = 34},
  [537] = {.lex_state = 524},
  [538] = {.lex_state = 524},
  [539] = {.lex_state = 524},
  [540] = {.lex_state = 61},
  [541] = {.lex_state = 61},
  [542] = {.lex_state = 27},
  [543] = {.lex_state = 27},
  [544] = {.lex_state = 34},
  [545] = {.lex_state = 27},
  [546] = {.lex_state = 27},
  [547] = {.lex_state = 29},
  [548] = {.lex_state = 27},
  [549] = {.lex_state = 27},
  [550] = {.lex_state = 27},
  [551] = {.lex_state = 27},
  [552] = {.lex_state = 27},
  [553] = {.lex_state = 27},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 520},
  [557] = {.lex_state = 521},
  [558] = {.lex_state = 61},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 29},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 522},
  [563] = {.lex_state = 34},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 34},
  [567] = {.lex_state = 524},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 61},
  [571] = {.lex_state = 523},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 524},
  [574] = {.lex_state = 61},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 61},
  [577] = {.lex_state = 27},
  [578] = {.lex_state = 29},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 27},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 27},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 27},
  [585] = {.lex_state = 27},
  [586] = {.lex_state = 27},
  [587] = {.lex_state = 27},
  [588] = {.lex_state = 27},
  [589] = {.lex_state = 27},
  [590] = {.lex_state = 27},
  [591] = {.lex_state = 27},
  [592] = {.lex_state = 523},
  [593] = {.lex_state = 962},
  [594] = {.lex_state = 27},
  [595] = {.lex_state = 522},
  [596] = {.lex_state = 61},
  [597] = {.lex_state = 24},
  [598] = {.lex_state = 61},
  [599] = {.lex_state = 25},
  [600] = {.lex_state = 61},
  [601] = {.lex_state = 27},
  [602] = {.lex_state = 61},
  [603] = {.lex_state = 27},
  [604] = {.lex_state = 61},
  [605] = {.lex_state = 34},
  [606] = {.lex_state = 61},
  [607] = {.lex_state = 29},
  [608] = {.lex_state = 61},
  [609] = {.lex_state = 27},
  [610] = {.lex_state = 27},
  [611] = {.lex_state = 27},
  [612] = {.lex_state = 61},
  [613] = {.lex_state = 61},
  [614] = {.lex_state = 61},
  [615] = {.lex_state = 61},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 61},
  [618] = {.lex_state = 61},
  [619] = {.lex_state = 61},
  [620] = {.lex_state = 61},
  [621] = {.lex_state = 61},
  [622] = {.lex_state = 61},
  [623] = {.lex_state = 61},
  [624] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [aux_sym_status_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [aux_sym_key_string_escaped_char_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [aux_sym_variable_name_token1] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_hexdigit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_test_DASHfoo] = STATE(561),
    [sym_entry] = STATE(83),
    [sym_lt] = STATE(87),
    [sym_request] = STATE(81),
    [sym_method] = STATE(147),
    [aux_sym_test_DASHfoo_repeat1] = STATE(83),
    [aux_sym_test_DASHfoo_repeat2] = STATE(87),
    [aux_sym_lt_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_HEAD] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [anon_sym_LINK] = ACTIONS(7),
    [anon_sym_UNLINK] = ACTIONS(7),
    [anon_sym_PURGE] = ACTIONS(7),
    [anon_sym_LOCK] = ACTIONS(7),
    [anon_sym_UNLOCK] = ACTIONS(7),
    [anon_sym_PROPFIND] = ACTIONS(7),
    [anon_sym_VIEW] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_lt] = STATE(50),
    [sym_header] = STATE(4),
    [sym_body] = STATE(90),
    [sym_request_DASHsection] = STATE(13),
    [sym_basic_auth_section] = STATE(526),
    [sym_key_value] = STATE(350),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_key_string] = STATE(616),
    [sym_key_string_content] = STATE(198),
    [sym_key_string_escaped_char] = STATE(241),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(247),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_test_DASHfoo_repeat2] = STATE(50),
    [aux_sym_lt_repeat1] = STATE(53),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(13),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_key_string_repeat1] = STATE(198),
    [aux_sym_key_string_content_repeat1] = STATE(241),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_HEAD] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_CONNECT] = ACTIONS(15),
    [anon_sym_OPTIONS] = ACTIONS(15),
    [anon_sym_TRACE] = ACTIONS(15),
    [anon_sym_PATCH] = ACTIONS(15),
    [anon_sym_LINK] = ACTIONS(15),
    [anon_sym_UNLINK] = ACTIONS(15),
    [anon_sym_PURGE] = ACTIONS(15),
    [anon_sym_LOCK] = ACTIONS(15),
    [anon_sym_UNLOCK] = ACTIONS(15),
    [anon_sym_PROPFIND] = ACTIONS(15),
    [anon_sym_VIEW] = ACTIONS(15),
    [aux_sym_method_token1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH2] = ACTIONS(15),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(15),
    [anon_sym_HTTP] = ACTIONS(15),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_key_string_text] = ACTIONS(33),
    [anon_sym_BSLASH2] = ACTIONS(35),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(51),
  },
  [3] = {
    [sym_lt] = STATE(50),
    [sym_header] = STATE(5),
    [sym_body] = STATE(88),
    [sym_request_DASHsection] = STATE(11),
    [sym_basic_auth_section] = STATE(526),
    [sym_key_value] = STATE(350),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_key_string] = STATE(616),
    [sym_key_string_content] = STATE(198),
    [sym_key_string_escaped_char] = STATE(241),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(247),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_test_DASHfoo_repeat2] = STATE(50),
    [aux_sym_lt_repeat1] = STATE(53),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(11),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_key_string_repeat1] = STATE(198),
    [aux_sym_key_string_content_repeat1] = STATE(241),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(55),
    [anon_sym_HEAD] = ACTIONS(55),
    [anon_sym_POST] = ACTIONS(55),
    [anon_sym_PUT] = ACTIONS(55),
    [anon_sym_DELETE] = ACTIONS(55),
    [anon_sym_CONNECT] = ACTIONS(55),
    [anon_sym_OPTIONS] = ACTIONS(55),
    [anon_sym_TRACE] = ACTIONS(55),
    [anon_sym_PATCH] = ACTIONS(55),
    [anon_sym_LINK] = ACTIONS(55),
    [anon_sym_UNLINK] = ACTIONS(55),
    [anon_sym_PURGE] = ACTIONS(55),
    [anon_sym_LOCK] = ACTIONS(55),
    [anon_sym_UNLOCK] = ACTIONS(55),
    [anon_sym_PROPFIND] = ACTIONS(55),
    [anon_sym_VIEW] = ACTIONS(55),
    [aux_sym_method_token1] = ACTIONS(55),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(55),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(55),
    [anon_sym_HTTP_SLASH2] = ACTIONS(55),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(55),
    [anon_sym_HTTP] = ACTIONS(55),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_key_string_text] = ACTIONS(33),
    [anon_sym_BSLASH2] = ACTIONS(35),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(51),
  },
  [4] = {
    [sym_header] = STATE(38),
    [sym_body] = STATE(91),
    [sym_request_DASHsection] = STATE(12),
    [sym_basic_auth_section] = STATE(526),
    [sym_key_value] = STATE(350),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_key_string] = STATE(616),
    [sym_key_string_content] = STATE(198),
    [sym_key_string_escaped_char] = STATE(241),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(247),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(38),
    [aux_sym_request_repeat2] = STATE(12),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_key_string_repeat1] = STATE(198),
    [aux_sym_key_string_content_repeat1] = STATE(241),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_GET] = ACTIONS(59),
    [anon_sym_HEAD] = ACTIONS(59),
    [anon_sym_POST] = ACTIONS(59),
    [anon_sym_PUT] = ACTIONS(59),
    [anon_sym_DELETE] = ACTIONS(59),
    [anon_sym_CONNECT] = ACTIONS(59),
    [anon_sym_OPTIONS] = ACTIONS(59),
    [anon_sym_TRACE] = ACTIONS(59),
    [anon_sym_PATCH] = ACTIONS(59),
    [anon_sym_LINK] = ACTIONS(59),
    [anon_sym_UNLINK] = ACTIONS(59),
    [anon_sym_PURGE] = ACTIONS(59),
    [anon_sym_LOCK] = ACTIONS(59),
    [anon_sym_UNLOCK] = ACTIONS(59),
    [anon_sym_PROPFIND] = ACTIONS(59),
    [anon_sym_VIEW] = ACTIONS(59),
    [aux_sym_method_token1] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(59),
    [anon_sym_HTTP_SLASH2] = ACTIONS(59),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(59),
    [anon_sym_HTTP] = ACTIONS(59),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_key_string_text] = ACTIONS(33),
    [anon_sym_BSLASH2] = ACTIONS(35),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(59),
  },
  [5] = {
    [sym_header] = STATE(38),
    [sym_body] = STATE(90),
    [sym_request_DASHsection] = STATE(13),
    [sym_basic_auth_section] = STATE(526),
    [sym_key_value] = STATE(350),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_key_string] = STATE(616),
    [sym_key_string_content] = STATE(198),
    [sym_key_string_escaped_char] = STATE(241),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(247),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(38),
    [aux_sym_request_repeat2] = STATE(13),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_key_string_repeat1] = STATE(198),
    [aux_sym_key_string_content_repeat1] = STATE(241),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_HEAD] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_CONNECT] = ACTIONS(15),
    [anon_sym_OPTIONS] = ACTIONS(15),
    [anon_sym_TRACE] = ACTIONS(15),
    [anon_sym_PATCH] = ACTIONS(15),
    [anon_sym_LINK] = ACTIONS(15),
    [anon_sym_UNLINK] = ACTIONS(15),
    [anon_sym_PURGE] = ACTIONS(15),
    [anon_sym_LOCK] = ACTIONS(15),
    [anon_sym_UNLOCK] = ACTIONS(15),
    [anon_sym_PROPFIND] = ACTIONS(15),
    [anon_sym_VIEW] = ACTIONS(15),
    [aux_sym_method_token1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH2] = ACTIONS(15),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(15),
    [anon_sym_HTTP] = ACTIONS(15),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_key_string_text] = ACTIONS(33),
    [anon_sym_BSLASH2] = ACTIONS(35),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
  },
  [6] = {
    [sym_header] = STATE(46),
    [sym_body] = STATE(112),
    [sym_response_section] = STATE(15),
    [sym_captures_section] = STATE(79),
    [sym_asserts_section] = STATE(79),
    [sym_key_value] = STATE(383),
    [sym_bytes] = STATE(343),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_key_string] = STATE(616),
    [sym_key_string_content] = STATE(198),
    [sym_key_string_escaped_char] = STATE(241),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(247),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(46),
    [aux_sym_response_repeat1] = STATE(15),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_key_string_repeat1] = STATE(198),
    [aux_sym_key_string_content_repeat1] = STATE(241),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(61),
    [anon_sym_GET] = ACTIONS(63),
    [anon_sym_HEAD] = ACTIONS(63),
    [anon_sym_POST] = ACTIONS(63),
    [anon_sym_PUT] = ACTIONS(63),
    [anon_sym_DELETE] = ACTIONS(63),
    [anon_sym_CONNECT] = ACTIONS(63),
    [anon_sym_OPTIONS] = ACTIONS(63),
    [anon_sym_TRACE] = ACTIONS(63),
    [anon_sym_PATCH] = ACTIONS(63),
    [anon_sym_LINK] = ACTIONS(63),
    [anon_sym_UNLINK] = ACTIONS(63),
    [anon_sym_PURGE] = ACTIONS(63),
    [anon_sym_LOCK] = ACTIONS(63),
    [anon_sym_UNLOCK] = ACTIONS(63),
    [anon_sym_PROPFIND] = ACTIONS(63),
    [anon_sym_VIEW] = ACTIONS(63),
    [aux_sym_method_token1] = ACTIONS(63),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_key_string_text] = ACTIONS(33),
    [anon_sym_BSLASH2] = ACTIONS(35),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(63),
  },
  [7] = {
    [sym_header] = STATE(6),
    [sym_body] = STATE(116),
    [sym_response_section] = STATE(14),
    [sym_captures_section] = STATE(79),
    [sym_asserts_section] = STATE(79),
    [sym_key_value] = STATE(383),
    [sym_bytes] = STATE(343),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_key_string] = STATE(616),
    [sym_key_string_content] = STATE(198),
    [sym_key_string_escaped_char] = STATE(241),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(247),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(6),
    [aux_sym_response_repeat1] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_key_string_repeat1] = STATE(198),
    [aux_sym_key_string_content_repeat1] = STATE(241),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_CONNECT] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [anon_sym_LINK] = ACTIONS(71),
    [anon_sym_UNLINK] = ACTIONS(71),
    [anon_sym_PURGE] = ACTIONS(71),
    [anon_sym_LOCK] = ACTIONS(71),
    [anon_sym_UNLOCK] = ACTIONS(71),
    [anon_sym_PROPFIND] = ACTIONS(71),
    [anon_sym_VIEW] = ACTIONS(71),
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_key_string_text] = ACTIONS(33),
    [anon_sym_BSLASH2] = ACTIONS(35),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [sym_option] = STATE(9),
    [sym_ca_certificate_option] = STATE(23),
    [sym_compressed_option] = STATE(23),
    [sym_follow_redirect_option] = STATE(23),
    [sym_insecure_option] = STATE(23),
    [sym_max_redirs_option] = STATE(23),
    [sym_path_as_is_option] = STATE(23),
    [sym_proxy_option] = STATE(23),
    [sym_retry_option] = STATE(23),
    [sym_retry_interval_option] = STATE(23),
    [sym_retry_max_count_option] = STATE(23),
    [sym_variable_option] = STATE(23),
    [sym_verbose_option] = STATE(23),
    [sym_very_verbose_option] = STATE(23),
    [aux_sym_options_section_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_GET] = ACTIONS(75),
    [anon_sym_HEAD] = ACTIONS(75),
    [anon_sym_POST] = ACTIONS(75),
    [anon_sym_PUT] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_CONNECT] = ACTIONS(75),
    [anon_sym_OPTIONS] = ACTIONS(75),
    [anon_sym_TRACE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_LINK] = ACTIONS(75),
    [anon_sym_UNLINK] = ACTIONS(75),
    [anon_sym_PURGE] = ACTIONS(75),
    [anon_sym_LOCK] = ACTIONS(75),
    [anon_sym_UNLOCK] = ACTIONS(75),
    [anon_sym_PROPFIND] = ACTIONS(75),
    [anon_sym_VIEW] = ACTIONS(75),
    [aux_sym_method_token1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH2] = ACTIONS(75),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(75),
    [anon_sym_HTTP] = ACTIONS(75),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(75),
    [anon_sym_null] = ACTIONS(75),
    [anon_sym_file_COMMA] = ACTIONS(75),
    [anon_sym_cacert] = ACTIONS(77),
    [anon_sym_compressed] = ACTIONS(79),
    [anon_sym_location] = ACTIONS(81),
    [anon_sym_insecure] = ACTIONS(83),
    [anon_sym_max_DASHredirs] = ACTIONS(85),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(87),
    [anon_sym_proxy] = ACTIONS(89),
    [anon_sym_retry] = ACTIONS(91),
    [anon_sym_retry_DASHinterval] = ACTIONS(93),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(95),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(99),
    [anon_sym_very_DASHverbose] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_LT_QMARK] = ACTIONS(75),
    [anon_sym_base64_COMMA] = ACTIONS(75),
    [anon_sym_hex_COMMA] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [aux_sym_oneline_string_token1] = ACTIONS(75),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [sym_digit] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
  },
  [9] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(23),
    [sym_compressed_option] = STATE(23),
    [sym_follow_redirect_option] = STATE(23),
    [sym_insecure_option] = STATE(23),
    [sym_max_redirs_option] = STATE(23),
    [sym_path_as_is_option] = STATE(23),
    [sym_proxy_option] = STATE(23),
    [sym_retry_option] = STATE(23),
    [sym_retry_interval_option] = STATE(23),
    [sym_retry_max_count_option] = STATE(23),
    [sym_variable_option] = STATE(23),
    [sym_verbose_option] = STATE(23),
    [sym_very_verbose_option] = STATE(23),
    [aux_sym_options_section_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_GET] = ACTIONS(105),
    [anon_sym_HEAD] = ACTIONS(105),
    [anon_sym_POST] = ACTIONS(105),
    [anon_sym_PUT] = ACTIONS(105),
    [anon_sym_DELETE] = ACTIONS(105),
    [anon_sym_CONNECT] = ACTIONS(105),
    [anon_sym_OPTIONS] = ACTIONS(105),
    [anon_sym_TRACE] = ACTIONS(105),
    [anon_sym_PATCH] = ACTIONS(105),
    [anon_sym_LINK] = ACTIONS(105),
    [anon_sym_UNLINK] = ACTIONS(105),
    [anon_sym_PURGE] = ACTIONS(105),
    [anon_sym_LOCK] = ACTIONS(105),
    [anon_sym_UNLOCK] = ACTIONS(105),
    [anon_sym_PROPFIND] = ACTIONS(105),
    [anon_sym_VIEW] = ACTIONS(105),
    [aux_sym_method_token1] = ACTIONS(105),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(105),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(105),
    [anon_sym_HTTP_SLASH2] = ACTIONS(105),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(105),
    [anon_sym_HTTP] = ACTIONS(105),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(105),
    [anon_sym_null] = ACTIONS(105),
    [anon_sym_file_COMMA] = ACTIONS(105),
    [anon_sym_cacert] = ACTIONS(77),
    [anon_sym_compressed] = ACTIONS(79),
    [anon_sym_location] = ACTIONS(81),
    [anon_sym_insecure] = ACTIONS(83),
    [anon_sym_max_DASHredirs] = ACTIONS(85),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(87),
    [anon_sym_proxy] = ACTIONS(89),
    [anon_sym_retry] = ACTIONS(91),
    [anon_sym_retry_DASHinterval] = ACTIONS(93),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(95),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(99),
    [anon_sym_very_DASHverbose] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_QMARK] = ACTIONS(105),
    [anon_sym_base64_COMMA] = ACTIONS(105),
    [anon_sym_hex_COMMA] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [aux_sym_oneline_string_token1] = ACTIONS(105),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_digit] = ACTIONS(105),
    [sym_comment] = ACTIONS(105),
  },
  [10] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(23),
    [sym_compressed_option] = STATE(23),
    [sym_follow_redirect_option] = STATE(23),
    [sym_insecure_option] = STATE(23),
    [sym_max_redirs_option] = STATE(23),
    [sym_path_as_is_option] = STATE(23),
    [sym_proxy_option] = STATE(23),
    [sym_retry_option] = STATE(23),
    [sym_retry_interval_option] = STATE(23),
    [sym_retry_max_count_option] = STATE(23),
    [sym_variable_option] = STATE(23),
    [sym_verbose_option] = STATE(23),
    [sym_very_verbose_option] = STATE(23),
    [aux_sym_options_section_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_GET] = ACTIONS(109),
    [anon_sym_HEAD] = ACTIONS(109),
    [anon_sym_POST] = ACTIONS(109),
    [anon_sym_PUT] = ACTIONS(109),
    [anon_sym_DELETE] = ACTIONS(109),
    [anon_sym_CONNECT] = ACTIONS(109),
    [anon_sym_OPTIONS] = ACTIONS(109),
    [anon_sym_TRACE] = ACTIONS(109),
    [anon_sym_PATCH] = ACTIONS(109),
    [anon_sym_LINK] = ACTIONS(109),
    [anon_sym_UNLINK] = ACTIONS(109),
    [anon_sym_PURGE] = ACTIONS(109),
    [anon_sym_LOCK] = ACTIONS(109),
    [anon_sym_UNLOCK] = ACTIONS(109),
    [anon_sym_PROPFIND] = ACTIONS(109),
    [anon_sym_VIEW] = ACTIONS(109),
    [aux_sym_method_token1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH2] = ACTIONS(109),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(109),
    [anon_sym_HTTP] = ACTIONS(109),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_file_COMMA] = ACTIONS(109),
    [anon_sym_cacert] = ACTIONS(111),
    [anon_sym_compressed] = ACTIONS(114),
    [anon_sym_location] = ACTIONS(117),
    [anon_sym_insecure] = ACTIONS(120),
    [anon_sym_max_DASHredirs] = ACTIONS(123),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(126),
    [anon_sym_proxy] = ACTIONS(129),
    [anon_sym_retry] = ACTIONS(132),
    [anon_sym_retry_DASHinterval] = ACTIONS(135),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(138),
    [anon_sym_variable] = ACTIONS(141),
    [anon_sym_verbose] = ACTIONS(144),
    [anon_sym_very_DASHverbose] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_QMARK] = ACTIONS(109),
    [anon_sym_base64_COMMA] = ACTIONS(109),
    [anon_sym_hex_COMMA] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [aux_sym_oneline_string_token1] = ACTIONS(109),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_digit] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
  },
  [11] = {
    [sym_body] = STATE(90),
    [sym_request_DASHsection] = STATE(51),
    [sym_basic_auth_section] = STATE(526),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_HEAD] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_CONNECT] = ACTIONS(15),
    [anon_sym_OPTIONS] = ACTIONS(15),
    [anon_sym_TRACE] = ACTIONS(15),
    [anon_sym_PATCH] = ACTIONS(15),
    [anon_sym_LINK] = ACTIONS(15),
    [anon_sym_UNLINK] = ACTIONS(15),
    [anon_sym_PURGE] = ACTIONS(15),
    [anon_sym_LOCK] = ACTIONS(15),
    [anon_sym_UNLOCK] = ACTIONS(15),
    [anon_sym_PROPFIND] = ACTIONS(15),
    [anon_sym_VIEW] = ACTIONS(15),
    [aux_sym_method_token1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH2] = ACTIONS(15),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(15),
    [anon_sym_HTTP] = ACTIONS(15),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
  },
  [12] = {
    [sym_body] = STATE(94),
    [sym_request_DASHsection] = STATE(51),
    [sym_basic_auth_section] = STATE(526),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_GET] = ACTIONS(152),
    [anon_sym_HEAD] = ACTIONS(152),
    [anon_sym_POST] = ACTIONS(152),
    [anon_sym_PUT] = ACTIONS(152),
    [anon_sym_DELETE] = ACTIONS(152),
    [anon_sym_CONNECT] = ACTIONS(152),
    [anon_sym_OPTIONS] = ACTIONS(152),
    [anon_sym_TRACE] = ACTIONS(152),
    [anon_sym_PATCH] = ACTIONS(152),
    [anon_sym_LINK] = ACTIONS(152),
    [anon_sym_UNLINK] = ACTIONS(152),
    [anon_sym_PURGE] = ACTIONS(152),
    [anon_sym_LOCK] = ACTIONS(152),
    [anon_sym_UNLOCK] = ACTIONS(152),
    [anon_sym_PROPFIND] = ACTIONS(152),
    [anon_sym_VIEW] = ACTIONS(152),
    [aux_sym_method_token1] = ACTIONS(152),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(152),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(152),
    [anon_sym_HTTP_SLASH2] = ACTIONS(152),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(152),
    [anon_sym_HTTP] = ACTIONS(152),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(152),
  },
  [13] = {
    [sym_body] = STATE(91),
    [sym_request_DASHsection] = STATE(51),
    [sym_basic_auth_section] = STATE(526),
    [sym_bytes] = STATE(353),
    [sym_xml] = STATE(478),
    [sym_xml_prolog_tag] = STATE(275),
    [sym_xml_tag] = STATE(481),
    [sym_xml_open_tag] = STATE(120),
    [sym_oneline_base64] = STATE(478),
    [sym_oneline_file] = STATE(478),
    [sym_oneline_hex] = STATE(478),
    [sym_oneline_string] = STATE(478),
    [sym_multiline_string] = STATE(478),
    [sym_json_value] = STATE(478),
    [sym_json_object] = STATE(490),
    [sym_json_array] = STATE(490),
    [sym_json_string] = STATE(490),
    [sym_json_number] = STATE(490),
    [sym_template] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(275),
    [aux_sym_integer_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_GET] = ACTIONS(59),
    [anon_sym_HEAD] = ACTIONS(59),
    [anon_sym_POST] = ACTIONS(59),
    [anon_sym_PUT] = ACTIONS(59),
    [anon_sym_DELETE] = ACTIONS(59),
    [anon_sym_CONNECT] = ACTIONS(59),
    [anon_sym_OPTIONS] = ACTIONS(59),
    [anon_sym_TRACE] = ACTIONS(59),
    [anon_sym_PATCH] = ACTIONS(59),
    [anon_sym_LINK] = ACTIONS(59),
    [anon_sym_UNLINK] = ACTIONS(59),
    [anon_sym_PURGE] = ACTIONS(59),
    [anon_sym_LOCK] = ACTIONS(59),
    [anon_sym_UNLOCK] = ACTIONS(59),
    [anon_sym_PROPFIND] = ACTIONS(59),
    [anon_sym_VIEW] = ACTIONS(59),
    [aux_sym_method_token1] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(59),
    [anon_sym_HTTP_SLASH2] = ACTIONS(59),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(59),
    [anon_sym_HTTP] = ACTIONS(59),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_file_COMMA] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_QMARK] = ACTIONS(25),
    [anon_sym_base64_COMMA] = ACTIONS(27),
    [anon_sym_hex_COMMA] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [aux_sym_oneline_string_token1] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_digit] = ACTIONS(49),
    [sym_comment] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_file_COMMA,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_QMARK,
    ACTIONS(27), 1,
      anon_sym_base64_COMMA,
    ACTIONS(29), 1,
      anon_sym_hex_COMMA,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(39), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(49), 1,
      sym_digit,
    ACTIONS(65), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(112), 1,
      sym_body,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(236), 1,
      sym_integer,
    STATE(343), 1,
      sym_bytes,
    STATE(481), 1,
      sym_xml_tag,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(79), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(275), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(490), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(478), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(63), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [121] = 29,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_file_COMMA,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_QMARK,
    ACTIONS(27), 1,
      anon_sym_base64_COMMA,
    ACTIONS(29), 1,
      anon_sym_hex_COMMA,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(39), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(49), 1,
      sym_digit,
    ACTIONS(65), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(111), 1,
      sym_body,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(236), 1,
      sym_integer,
    STATE(343), 1,
      sym_bytes,
    STATE(481), 1,
      sym_xml_tag,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(79), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(275), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(490), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(478), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(156), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [242] = 24,
    ACTIONS(158), 1,
      anon_sym_xpath,
    ACTIONS(160), 1,
      anon_sym_regex,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_startsWith,
    ACTIONS(180), 1,
      anon_sym_endsWith,
    ACTIONS(182), 1,
      anon_sym_contains,
    ACTIONS(184), 1,
      anon_sym_matches,
    ACTIONS(186), 1,
      anon_sym_includes,
    ACTIONS(190), 1,
      anon_sym_nth,
    ACTIONS(192), 1,
      anon_sym_replace,
    ACTIONS(194), 1,
      anon_sym_split,
    STATE(355), 1,
      sym_predicate,
    STATE(463), 1,
      sym_predicate_func,
    ACTIONS(166), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(168), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(170), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(174), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(176), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(44), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(59), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(164), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    ACTIONS(188), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(507), 11,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_include_predicate,
  [351] = 24,
    ACTIONS(158), 1,
      anon_sym_xpath,
    ACTIONS(160), 1,
      anon_sym_regex,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_startsWith,
    ACTIONS(180), 1,
      anon_sym_endsWith,
    ACTIONS(182), 1,
      anon_sym_contains,
    ACTIONS(184), 1,
      anon_sym_matches,
    ACTIONS(186), 1,
      anon_sym_includes,
    ACTIONS(190), 1,
      anon_sym_nth,
    ACTIONS(192), 1,
      anon_sym_replace,
    ACTIONS(194), 1,
      anon_sym_split,
    STATE(368), 1,
      sym_predicate,
    STATE(463), 1,
      sym_predicate_func,
    ACTIONS(166), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(168), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(170), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(174), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(176), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(16), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(59), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(164), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    ACTIONS(188), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(507), 11,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_include_predicate,
  [460] = 12,
    ACTIONS(200), 1,
      anon_sym_variable,
    ACTIONS(206), 1,
      anon_sym_header,
    ACTIONS(209), 1,
      anon_sym_cookie,
    ACTIONS(212), 1,
      anon_sym_xpath,
    ACTIONS(215), 1,
      anon_sym_jsonpath,
    ACTIONS(218), 1,
      anon_sym_regex,
    STATE(17), 1,
      sym_query,
    STATE(18), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(67), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(203), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(198), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [544] = 12,
    ACTIONS(225), 1,
      anon_sym_variable,
    ACTIONS(229), 1,
      anon_sym_header,
    ACTIONS(231), 1,
      anon_sym_cookie,
    ACTIONS(233), 1,
      anon_sym_xpath,
    ACTIONS(235), 1,
      anon_sym_jsonpath,
    ACTIONS(237), 1,
      anon_sym_regex,
    STATE(17), 1,
      sym_query,
    STATE(18), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(67), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(227), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(223), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [628] = 12,
    ACTIONS(225), 1,
      anon_sym_variable,
    ACTIONS(229), 1,
      anon_sym_header,
    ACTIONS(231), 1,
      anon_sym_cookie,
    ACTIONS(233), 1,
      anon_sym_xpath,
    ACTIONS(235), 1,
      anon_sym_jsonpath,
    ACTIONS(237), 1,
      anon_sym_regex,
    STATE(17), 1,
      sym_query,
    STATE(19), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(67), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(227), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(241), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [712] = 5,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [778] = 5,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 50,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [844] = 2,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(263), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [903] = 2,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(267), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [962] = 2,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(271), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1021] = 2,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1080] = 2,
    ACTIONS(277), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1139] = 2,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1198] = 2,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1257] = 2,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(291), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1316] = 2,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(295), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1375] = 2,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1434] = 2,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(303), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1493] = 2,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(307), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1552] = 2,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1611] = 2,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(315), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1670] = 2,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(319), 51,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1729] = 10,
    ACTIONS(325), 1,
      sym_key_string_text,
    ACTIONS(328), 1,
      anon_sym_BSLASH2,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(350), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(38), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(323), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1802] = 5,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [1864] = 5,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [1926] = 2,
    ACTIONS(344), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(346), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1981] = 2,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(350), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2036] = 4,
    ACTIONS(356), 1,
      sym_digit,
    STATE(45), 1,
      aux_sym_integer_repeat1,
    ACTIONS(354), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(352), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_E,
  [2093] = 10,
    ACTIONS(358), 1,
      anon_sym_xpath,
    ACTIONS(361), 1,
      anon_sym_regex,
    ACTIONS(371), 1,
      anon_sym_nth,
    ACTIONS(374), 1,
      anon_sym_replace,
    ACTIONS(377), 1,
      anon_sym_split,
    STATE(44), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(364), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(59), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(368), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    ACTIONS(366), 20,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
  [2162] = 4,
    ACTIONS(384), 1,
      sym_digit,
    STATE(45), 1,
      aux_sym_integer_repeat1,
    ACTIONS(382), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(380), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_E,
  [2219] = 10,
    ACTIONS(325), 1,
      sym_key_string_text,
    ACTIONS(328), 1,
      anon_sym_BSLASH2,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(383), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(46), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(323), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2288] = 9,
    ACTIONS(391), 1,
      sym_key_string_text,
    ACTIONS(393), 1,
      anon_sym_BSLASH2,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(591), 1,
      sym_key_string,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(49), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(202), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(389), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2354] = 9,
    ACTIONS(391), 1,
      sym_key_string_text,
    ACTIONS(393), 1,
      anon_sym_BSLASH2,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(591), 1,
      sym_key_string,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(47), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(202), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(399), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2420] = 9,
    ACTIONS(405), 1,
      sym_key_string_text,
    ACTIONS(408), 1,
      anon_sym_BSLASH2,
    ACTIONS(411), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(591), 1,
      sym_key_string,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(49), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(202), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(403), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2486] = 6,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(421), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_lt_repeat1,
    STATE(50), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(414), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(419), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [2545] = 5,
    ACTIONS(428), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    STATE(526), 1,
      sym_basic_auth_section,
    STATE(51), 2,
      sym_request_DASHsection,
      aux_sym_request_repeat2,
    ACTIONS(424), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 37,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2600] = 5,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [2655] = 5,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [2710] = 2,
    ACTIONS(441), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 39,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2758] = 2,
    ACTIONS(447), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(445), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [2805] = 2,
    ACTIONS(451), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(449), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [2852] = 2,
    ACTIONS(455), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(453), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [2899] = 2,
    ACTIONS(459), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(457), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [2946] = 2,
    ACTIONS(463), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(461), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [2992] = 6,
    ACTIONS(469), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(472), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(60), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(79), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(465), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(467), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3046] = 2,
    ACTIONS(477), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(475), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3092] = 2,
    ACTIONS(479), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 38,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3138] = 2,
    ACTIONS(485), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(483), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3184] = 2,
    ACTIONS(489), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(487), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3230] = 2,
    ACTIONS(493), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(491), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3276] = 2,
    ACTIONS(497), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(495), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3322] = 2,
    ACTIONS(501), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(499), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3367] = 2,
    ACTIONS(505), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(503), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3412] = 2,
    ACTIONS(509), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(507), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3457] = 2,
    ACTIONS(513), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(511), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3502] = 2,
    ACTIONS(517), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(515), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3547] = 2,
    ACTIONS(521), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(519), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3592] = 2,
    ACTIONS(525), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(523), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3637] = 5,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3688] = 5,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(534), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [3739] = 2,
    ACTIONS(441), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3783] = 2,
    ACTIONS(537), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(539), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3827] = 2,
    ACTIONS(541), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(543), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3871] = 2,
    ACTIONS(545), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(547), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3913] = 14,
    ACTIONS(178), 1,
      anon_sym_startsWith,
    ACTIONS(180), 1,
      anon_sym_endsWith,
    ACTIONS(182), 1,
      anon_sym_contains,
    ACTIONS(184), 1,
      anon_sym_matches,
    ACTIONS(186), 1,
      anon_sym_includes,
    STATE(488), 1,
      sym_predicate_func,
    ACTIONS(166), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(168), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(170), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(174), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(176), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    ACTIONS(164), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    STATE(507), 11,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_include_predicate,
  [3977] = 9,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(101), 1,
      sym_response,
    STATE(118), 1,
      sym_lt,
    STATE(403), 1,
      sym_version,
    ACTIONS(553), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(551), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4025] = 9,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(103), 1,
      sym_response,
    STATE(113), 1,
      sym_lt,
    STATE(403), 1,
      sym_version,
    ACTIONS(553), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(557), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4073] = 9,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(81), 1,
      sym_request,
    STATE(147), 1,
      sym_method,
    STATE(84), 2,
      sym_entry,
      aux_sym_test_DASHfoo_repeat1,
    STATE(93), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(7), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4119] = 9,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      sym_comment,
    STATE(81), 1,
      sym_request,
    STATE(108), 1,
      aux_sym_lt_repeat1,
    STATE(147), 1,
      sym_method,
    STATE(84), 2,
      sym_entry,
      aux_sym_test_DASHfoo_repeat1,
    STATE(97), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(566), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4165] = 12,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      anon_sym_xpath,
    ACTIONS(576), 1,
      anon_sym_regex,
    ACTIONS(580), 1,
      anon_sym_nth,
    ACTIONS(582), 1,
      anon_sym_replace,
    ACTIONS(584), 1,
      anon_sym_split,
    ACTIONS(586), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_lt_repeat1,
    STATE(78), 1,
      sym_lt,
    STATE(86), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(141), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(578), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [4217] = 12,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      anon_sym_xpath,
    ACTIONS(576), 1,
      anon_sym_regex,
    ACTIONS(580), 1,
      anon_sym_nth,
    ACTIONS(582), 1,
      anon_sym_replace,
    ACTIONS(584), 1,
      anon_sym_split,
    ACTIONS(586), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_lt_repeat1,
    STATE(77), 1,
      sym_lt,
    STATE(92), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(141), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(578), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [4269] = 8,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(82), 1,
      sym_request,
    STATE(147), 1,
      sym_method,
    STATE(100), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(7), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4311] = 2,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(15), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4341] = 2,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(590), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4371] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(59), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4401] = 2,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4431] = 10,
    ACTIONS(364), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(592), 1,
      anon_sym_xpath,
    ACTIONS(595), 1,
      anon_sym_regex,
    ACTIONS(601), 1,
      anon_sym_nth,
    ACTIONS(604), 1,
      anon_sym_replace,
    ACTIONS(607), 1,
      anon_sym_split,
    STATE(92), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(141), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(598), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [4477] = 8,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(82), 1,
      sym_request,
    STATE(147), 1,
      sym_method,
    STATE(100), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(7), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4519] = 2,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(614), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [4549] = 9,
    ACTIONS(158), 1,
      anon_sym_xpath,
    ACTIONS(160), 1,
      anon_sym_regex,
    ACTIONS(190), 1,
      anon_sym_nth,
    ACTIONS(192), 1,
      anon_sym_replace,
    ACTIONS(194), 1,
      anon_sym_split,
    ACTIONS(616), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(96), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(59), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(188), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [4592] = 9,
    ACTIONS(158), 1,
      anon_sym_xpath,
    ACTIONS(160), 1,
      anon_sym_regex,
    ACTIONS(190), 1,
      anon_sym_nth,
    ACTIONS(192), 1,
      anon_sym_replace,
    ACTIONS(194), 1,
      anon_sym_split,
    ACTIONS(618), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(44), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(59), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(188), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [4635] = 7,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      sym_comment,
    STATE(82), 1,
      sym_request,
    STATE(108), 1,
      aux_sym_lt_repeat1,
    STATE(147), 1,
      sym_method,
    STATE(102), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(7), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4674] = 4,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      sym_digit,
    STATE(98), 1,
      aux_sym_integer_repeat1,
    ACTIONS(382), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [4706] = 4,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_digit,
    STATE(98), 1,
      aux_sym_integer_repeat1,
    ACTIONS(354), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [4738] = 6,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(100), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(419), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4774] = 6,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(113), 1,
      sym_lt,
    ACTIONS(557), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4809] = 5,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(638), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_lt_repeat1,
    STATE(102), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    ACTIONS(419), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4842] = 6,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(110), 1,
      sym_lt,
    ACTIONS(643), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [4877] = 13,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      anon_sym_null,
    ACTIONS(647), 1,
      anon_sym_file_COMMA,
    ACTIONS(649), 1,
      anon_sym_base64_COMMA,
    ACTIONS(651), 1,
      anon_sym_hex_COMMA,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(655), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(379), 1,
      sym_integer,
    STATE(491), 1,
      sym_predicate_value,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(489), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [4925] = 13,
    ACTIONS(49), 1,
      sym_digit,
    ACTIONS(663), 1,
      anon_sym_null,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(667), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(669), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(356), 1,
      sym_integer,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(661), 2,
      anon_sym_LF,
      sym_comment,
    STATE(157), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(527), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [4973] = 13,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      anon_sym_null,
    ACTIONS(647), 1,
      anon_sym_file_COMMA,
    ACTIONS(649), 1,
      anon_sym_base64_COMMA,
    ACTIONS(651), 1,
      anon_sym_hex_COMMA,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(655), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(379), 1,
      sym_integer,
    STATE(538), 1,
      sym_predicate_value,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(489), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5021] = 13,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      anon_sym_null,
    ACTIONS(647), 1,
      anon_sym_file_COMMA,
    ACTIONS(649), 1,
      anon_sym_base64_COMMA,
    ACTIONS(651), 1,
      anon_sym_hex_COMMA,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(655), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(379), 1,
      sym_integer,
    STATE(539), 1,
      sym_predicate_value,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(489), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5069] = 4,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(673), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_lt_repeat1,
    ACTIONS(257), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
  [5099] = 4,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(678), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_lt_repeat1,
    ACTIONS(248), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
  [5129] = 2,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(683), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5154] = 2,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(687), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5179] = 2,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5204] = 2,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(643), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5229] = 9,
    ACTIONS(689), 1,
      anon_sym_variable,
    ACTIONS(693), 1,
      anon_sym_header,
    ACTIONS(695), 1,
      anon_sym_cookie,
    ACTIONS(697), 1,
      anon_sym_xpath,
    ACTIONS(699), 1,
      anon_sym_jsonpath,
    ACTIONS(701), 1,
      anon_sym_regex,
    STATE(85), 1,
      sym_query,
    STATE(131), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(691), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
  [5268] = 13,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(49), 1,
      sym_digit,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      sym_key_string_text,
    ACTIONS(707), 1,
      anon_sym_BSLASH2,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(342), 1,
      sym_integer,
    STATE(446), 1,
      sym_variable_value,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(192), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(492), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [5315] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5340] = 2,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(590), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5365] = 2,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(557), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [5390] = 12,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(709), 1,
      anon_sym_LT_QMARK,
    ACTIONS(711), 1,
      anon_sym_LT_SLASH,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(715), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(717), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    STATE(448), 1,
      sym_xml_close_tag,
    STATE(155), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(140), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5434] = 12,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(709), 1,
      anon_sym_LT_QMARK,
    ACTIONS(711), 1,
      anon_sym_LT_SLASH,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(715), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(717), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    STATE(477), 1,
      sym_xml_close_tag,
    STATE(155), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(119), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5478] = 12,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(709), 1,
      anon_sym_LT_QMARK,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(715), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(717), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(719), 1,
      anon_sym_LT_SLASH,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    STATE(256), 1,
      sym_xml_close_tag,
    STATE(155), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(122), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5522] = 12,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(709), 1,
      anon_sym_LT_QMARK,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(715), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(717), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(719), 1,
      anon_sym_LT_SLASH,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    STATE(262), 1,
      sym_xml_close_tag,
    STATE(155), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(140), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5566] = 2,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5589] = 1,
    ACTIONS(721), 18,
      anon_sym_EQ,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [5610] = 2,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5633] = 2,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5656] = 2,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5679] = 2,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5702] = 2,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5725] = 2,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(447), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5748] = 2,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5771] = 2,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5794] = 2,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(459), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5817] = 2,
    ACTIONS(515), 1,
      anon_sym_LF,
    ACTIONS(517), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5840] = 2,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5863] = 2,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5886] = 2,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5909] = 2,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5932] = 2,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [5955] = 11,
    ACTIONS(723), 1,
      anon_sym_LT,
    ACTIONS(726), 1,
      anon_sym_LT_QMARK,
    ACTIONS(729), 1,
      anon_sym_LT_SLASH,
    ACTIONS(731), 1,
      anon_sym_BSLASH,
    ACTIONS(734), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(737), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(121), 1,
      sym_xml_open_tag,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    STATE(155), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(140), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [5996] = 2,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6019] = 11,
    ACTIONS(740), 1,
      anon_sym_null,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_integer_repeat1,
    STATE(239), 1,
      sym_integer,
    STATE(429), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(434), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [6059] = 11,
    ACTIONS(740), 1,
      anon_sym_null,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    STATE(242), 1,
      sym_integer,
    STATE(455), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(434), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [6099] = 11,
    ACTIONS(740), 1,
      anon_sym_null,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_integer_repeat1,
    STATE(239), 1,
      sym_integer,
    STATE(464), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(434), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [6139] = 11,
    ACTIONS(740), 1,
      anon_sym_null,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_integer_repeat1,
    STATE(239), 1,
      sym_integer,
    STATE(414), 1,
      sym_json_value,
    ACTIONS(750), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(434), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [6179] = 13,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(760), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(762), 1,
      sym_comment,
    STATE(153), 1,
      sym_lt,
    STATE(231), 1,
      aux_sym_lt_repeat1,
    STATE(281), 1,
      sym_multipart_form_data_param,
    STATE(284), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(483), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(480), 2,
      sym_key_value,
      sym_file_param,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6223] = 10,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(667), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(669), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(53), 1,
      aux_sym_lt_repeat1,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(302), 1,
      sym_value_string,
    ACTIONS(51), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
    STATE(157), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6260] = 12,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      sym_comment,
    STATE(161), 1,
      sym_lt,
    STATE(227), 1,
      aux_sym_lt_repeat1,
    STATE(288), 1,
      sym_key_value,
    STATE(290), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6300] = 12,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(171), 1,
      sym_lt,
    STATE(229), 1,
      aux_sym_lt_repeat1,
    STATE(286), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(294), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6340] = 12,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 1,
      sym_comment,
    STATE(166), 1,
      sym_lt,
    STATE(233), 1,
      aux_sym_lt_repeat1,
    STATE(296), 1,
      sym_key_value,
    STATE(297), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6380] = 9,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(760), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(776), 1,
      anon_sym_LBRACKCookies_RBRACK,
    STATE(483), 1,
      sym_key_string,
    STATE(508), 1,
      sym_multipart_form_data_param,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(480), 2,
      sym_key_value,
      sym_file_param,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6412] = 9,
    ACTIONS(780), 1,
      anon_sym_BSLASH,
    ACTIONS(782), 1,
      sym_filename_text,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(24), 1,
      sym_lt,
    STATE(322), 1,
      sym_filename,
    ACTIONS(778), 2,
      anon_sym_LF,
      sym_comment,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(188), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [6444] = 9,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(760), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      anon_sym_LBRACKCookies_RBRACK,
    STATE(483), 1,
      sym_key_string,
    STATE(508), 1,
      sym_multipart_form_data_param,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(480), 2,
      sym_key_value,
      sym_file_param,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6476] = 9,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(760), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(788), 1,
      anon_sym_LBRACKCookies_RBRACK,
    STATE(483), 1,
      sym_key_string,
    STATE(508), 1,
      sym_multipart_form_data_param,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(480), 2,
      sym_key_value,
      sym_file_param,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6508] = 5,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    STATE(156), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(790), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [6532] = 7,
    ACTIONS(796), 1,
      anon_sym_BSLASH,
    ACTIONS(799), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(802), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(794), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(156), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6560] = 7,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(667), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(669), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(790), 2,
      anon_sym_LF,
      sym_comment,
    STATE(158), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6587] = 7,
    ACTIONS(805), 1,
      anon_sym_BSLASH,
    ACTIONS(808), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(794), 2,
      anon_sym_LF,
      sym_comment,
    STATE(158), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6614] = 8,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(760), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(483), 1,
      sym_key_string,
    STATE(508), 1,
      sym_multipart_form_data_param,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(480), 2,
      sym_key_value,
      sym_file_param,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6643] = 7,
    ACTIONS(814), 1,
      anon_sym_LF,
    ACTIONS(816), 1,
      anon_sym_BSLASH,
    ACTIONS(818), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(820), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(822), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(162), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6669] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(824), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6697] = 7,
    ACTIONS(816), 1,
      anon_sym_BSLASH,
    ACTIONS(820), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(822), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(826), 1,
      anon_sym_LF,
    ACTIONS(828), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(169), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6723] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(830), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6751] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(832), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6779] = 7,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(667), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(669), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    STATE(327), 1,
      sym_value_string,
    STATE(157), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(195), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [6805] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(834), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6833] = 7,
    ACTIONS(814), 1,
      anon_sym_LF,
    ACTIONS(816), 1,
      anon_sym_BSLASH,
    ACTIONS(818), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(820), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(822), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(169), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6859] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(836), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6887] = 7,
    ACTIONS(838), 1,
      anon_sym_LF,
    ACTIONS(841), 1,
      anon_sym_BSLASH,
    ACTIONS(844), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(846), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(849), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(169), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6913] = 7,
    ACTIONS(816), 1,
      anon_sym_BSLASH,
    ACTIONS(820), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(822), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(852), 1,
      anon_sym_LF,
    ACTIONS(854), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(167), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(209), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [6939] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6967] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(858), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [6995] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(860), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7023] = 8,
    ACTIONS(33), 1,
      sym_key_string_text,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(862), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7051] = 7,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      sym_filename_text,
    ACTIONS(870), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(559), 1,
      sym_filename,
    STATE(250), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(199), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7076] = 7,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(874), 1,
      anon_sym_COLON2,
    ACTIONS(876), 1,
      sym_key_string_text,
    ACTIONS(879), 1,
      anon_sym_BSLASH2,
    ACTIONS(882), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(176), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7101] = 6,
    ACTIONS(885), 1,
      anon_sym_BSLASH,
    ACTIONS(887), 1,
      anon_sym_BQUOTE,
    ACTIONS(889), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(891), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(238), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7124] = 7,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym_key_string_text,
    STATE(484), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7149] = 7,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym_key_string_text,
    STATE(354), 1,
      sym_key_value,
    STATE(616), 1,
      sym_key_string,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7174] = 6,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      sym_quoted_string_text,
    ACTIONS(897), 1,
      anon_sym_BSLASH,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(222), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7197] = 6,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    ACTIONS(903), 1,
      sym_quoted_string_text,
    ACTIONS(906), 1,
      anon_sym_BSLASH,
    ACTIONS(909), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(222), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7220] = 7,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      sym_filename_text,
    ACTIONS(870), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(912), 1,
      anon_sym_SEMI,
    STATE(554), 1,
      sym_filename,
    STATE(250), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(199), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7245] = 6,
    ACTIONS(885), 1,
      anon_sym_BSLASH,
    ACTIONS(889), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(891), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(914), 1,
      anon_sym_BQUOTE,
    STATE(177), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(238), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7268] = 6,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(715), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(918), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(916), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(187), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7291] = 6,
    ACTIONS(920), 1,
      anon_sym_BSLASH,
    ACTIONS(923), 1,
      anon_sym_BQUOTE,
    ACTIONS(925), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(238), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [7314] = 6,
    ACTIONS(895), 1,
      sym_quoted_string_text,
    ACTIONS(897), 1,
      anon_sym_BSLASH,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    STATE(180), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(222), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7337] = 6,
    ACTIONS(935), 1,
      anon_sym_BSLASH,
    ACTIONS(938), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(933), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(187), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7360] = 6,
    ACTIONS(780), 1,
      anon_sym_BSLASH,
    ACTIONS(782), 1,
      sym_filename_text,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(943), 2,
      anon_sym_LF,
      sym_comment,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(190), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7383] = 6,
    ACTIONS(895), 1,
      sym_quoted_string_text,
    ACTIONS(897), 1,
      anon_sym_BSLASH,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    STATE(193), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(222), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7406] = 6,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    ACTIONS(952), 1,
      sym_filename_text,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(947), 2,
      anon_sym_LF,
      sym_comment,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(190), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7429] = 7,
    ACTIONS(872), 1,
      anon_sym_LF,
    ACTIONS(874), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_key_string_text,
    ACTIONS(961), 1,
      anon_sym_BSLASH2,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(191), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7454] = 7,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      anon_sym_BSLASH2,
    ACTIONS(967), 1,
      anon_sym_LF,
    ACTIONS(969), 1,
      sym_key_string_text,
    ACTIONS(971), 1,
      sym_comment,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(191), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7479] = 6,
    ACTIONS(895), 1,
      sym_quoted_string_text,
    ACTIONS(897), 1,
      anon_sym_BSLASH,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
    STATE(181), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(222), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7502] = 7,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(760), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(967), 1,
      anon_sym_COLON,
    ACTIONS(971), 1,
      anon_sym_COLON2,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(176), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7527] = 6,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(667), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(918), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(916), 2,
      anon_sym_LF,
      sym_comment,
    STATE(197), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7549] = 3,
    ACTIONS(977), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(979), 1,
      anon_sym_u,
    ACTIONS(975), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7565] = 6,
    ACTIONS(941), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(981), 1,
      anon_sym_BSLASH,
    ACTIONS(984), 1,
      aux_sym_value_string_text_token1,
    STATE(246), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(933), 2,
      anon_sym_LF,
      sym_comment,
    STATE(197), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7587] = 6,
    ACTIONS(35), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym_key_string_text,
    ACTIONS(967), 1,
      anon_sym_COLON,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7609] = 6,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      sym_filename_text,
    ACTIONS(870), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(943), 1,
      anon_sym_SEMI,
    STATE(250), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(201), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7631] = 6,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      sym_key_string_text,
    ACTIONS(879), 1,
      anon_sym_BSLASH2,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7653] = 6,
    ACTIONS(947), 1,
      anon_sym_SEMI,
    ACTIONS(987), 1,
      anon_sym_BSLASH,
    ACTIONS(990), 1,
      sym_filename_text,
    ACTIONS(993), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(250), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(201), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7675] = 6,
    ACTIONS(393), 1,
      anon_sym_BSLASH2,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(967), 1,
      anon_sym_COLON2,
    ACTIONS(996), 1,
      sym_key_string_text,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(203), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7697] = 6,
    ACTIONS(872), 1,
      anon_sym_COLON2,
    ACTIONS(998), 1,
      sym_key_string_text,
    ACTIONS(1001), 1,
      anon_sym_BSLASH2,
    ACTIONS(1004), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(203), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7719] = 6,
    ACTIONS(1007), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      sym_json_string_text,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(369), 1,
      sym_json_string_escaped_char,
    STATE(214), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7740] = 6,
    ACTIONS(1015), 1,
      anon_sym_LF,
    ACTIONS(1018), 1,
      anon_sym_BSLASH,
    ACTIONS(1021), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1023), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1026), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(205), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7761] = 2,
    ACTIONS(1030), 1,
      anon_sym_u,
    ACTIONS(1028), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [7774] = 6,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      sym_json_string_text,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      sym_json_string_escaped_char,
    STATE(210), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7795] = 4,
    ACTIONS(1039), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(208), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1036), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1034), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7812] = 3,
    ACTIONS(1043), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(205), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1041), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7827] = 6,
    ACTIONS(1045), 1,
      anon_sym_DQUOTE,
    ACTIONS(1047), 1,
      anon_sym_BSLASH,
    ACTIONS(1050), 1,
      sym_json_string_text,
    ACTIONS(1053), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(369), 1,
      sym_json_string_escaped_char,
    STATE(210), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7848] = 6,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      sym_json_string_text,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1056), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      sym_json_string_escaped_char,
    STATE(207), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7869] = 2,
    ACTIONS(1060), 1,
      anon_sym_u,
    ACTIONS(1058), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_POUND,
  [7882] = 2,
    ACTIONS(1064), 1,
      anon_sym_u,
    ACTIONS(1062), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [7895] = 6,
    ACTIONS(1009), 1,
      anon_sym_BSLASH,
    ACTIONS(1011), 1,
      sym_json_string_text,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1066), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      sym_json_string_escaped_char,
    STATE(210), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [7916] = 4,
    ACTIONS(1072), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(208), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1070), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1068), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7933] = 3,
    ACTIONS(1074), 1,
      anon_sym_LF,
    STATE(573), 1,
      sym_multiline_string_type,
    ACTIONS(1076), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [7948] = 4,
    ACTIONS(1082), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(215), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1080), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1078), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [7965] = 2,
    ACTIONS(1086), 1,
      anon_sym_u,
    ACTIONS(1084), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_POUND,
  [7978] = 4,
    ACTIONS(1090), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1088), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [7994] = 3,
    ACTIONS(1096), 1,
      sym_comment,
    STATE(223), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1094), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8008] = 3,
    ACTIONS(1098), 1,
      sym_digit,
    STATE(224), 1,
      aux_sym_integer_repeat1,
    ACTIONS(352), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8022] = 4,
    ACTIONS(897), 1,
      anon_sym_BSLASH,
    ACTIONS(1102), 1,
      sym_quoted_string_text,
    ACTIONS(1100), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(245), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8038] = 5,
    ACTIONS(1106), 1,
      sym_key_string_text,
    ACTIONS(1109), 1,
      anon_sym_BSLASH2,
    ACTIONS(1112), 1,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8056] = 3,
    ACTIONS(1114), 1,
      sym_digit,
    STATE(224), 1,
      aux_sym_integer_repeat1,
    ACTIONS(380), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [8070] = 5,
    ACTIONS(1112), 1,
      anon_sym_COLON2,
    ACTIONS(1117), 1,
      sym_key_string_text,
    ACTIONS(1120), 1,
      anon_sym_BSLASH2,
    ACTIONS(1104), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8088] = 5,
    ACTIONS(1123), 1,
      anon_sym_BSLASH,
    ACTIONS(1126), 1,
      anon_sym_BQUOTE,
    ACTIONS(1128), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1131), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(226), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8106] = 5,
    ACTIONS(1133), 1,
      anon_sym_LF,
    ACTIONS(1135), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 2,
      anon_sym_LBRACKFormParams_RBRACK,
      sym_key_string_text,
  [8124] = 5,
    ACTIONS(1137), 1,
      anon_sym_LF,
    ACTIONS(1140), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 2,
      anon_sym_LBRACKFormParams_RBRACK,
      sym_key_string_text,
  [8142] = 5,
    ACTIONS(1143), 1,
      anon_sym_LF,
    ACTIONS(1145), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 2,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      sym_key_string_text,
  [8160] = 5,
    ACTIONS(1147), 1,
      anon_sym_LF,
    ACTIONS(1150), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 2,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      sym_key_string_text,
  [8178] = 5,
    ACTIONS(1153), 1,
      anon_sym_LF,
    ACTIONS(1155), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 2,
      anon_sym_LBRACKCookies_RBRACK,
      sym_key_string_text,
  [8196] = 5,
    ACTIONS(1157), 1,
      anon_sym_LF,
    ACTIONS(1160), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 2,
      anon_sym_LBRACKCookies_RBRACK,
      sym_key_string_text,
  [8214] = 5,
    ACTIONS(1163), 1,
      anon_sym_LF,
    ACTIONS(1165), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 2,
      anon_sym_LBRACKOptions_RBRACK,
      sym_key_string_text,
  [8232] = 5,
    ACTIONS(1167), 1,
      anon_sym_LF,
    ACTIONS(1170), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 2,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 2,
      anon_sym_LBRACKOptions_RBRACK,
      sym_key_string_text,
  [8250] = 2,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1173), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8262] = 6,
    ACTIONS(1175), 1,
      anon_sym_LF,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1181), 1,
      sym_comment,
    STATE(303), 1,
      sym_fraction,
    STATE(462), 1,
      sym_exponent,
    ACTIONS(1179), 2,
      anon_sym_e,
      anon_sym_E,
  [8282] = 7,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      sym_json_key_value,
    STATE(428), 1,
      aux_sym_json_object_repeat1,
    STATE(601), 1,
      sym_json_key_string,
    STATE(603), 1,
      sym_json_string,
  [8304] = 3,
    ACTIONS(1189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1187), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(226), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8318] = 5,
    ACTIONS(1191), 1,
      anon_sym_DOT,
    STATE(282), 1,
      sym_fraction,
    STATE(402), 1,
      sym_exponent,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1193), 2,
      anon_sym_e,
      anon_sym_E,
  [8336] = 4,
    ACTIONS(1197), 1,
      anon_sym_BSLASH,
    ACTIONS(1200), 1,
      sym_filename_text,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1195), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [8352] = 3,
    ACTIONS(1096), 1,
      anon_sym_COLON2,
    STATE(225), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1094), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8366] = 5,
    ACTIONS(1203), 1,
      anon_sym_DOT,
    STATE(311), 1,
      sym_fraction,
    STATE(402), 1,
      sym_exponent,
    ACTIONS(1175), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1205), 2,
      anon_sym_e,
      anon_sym_E,
  [8384] = 4,
    ACTIONS(1209), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1212), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1207), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8400] = 7,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      sym_json_key_value,
    STATE(412), 1,
      aux_sym_json_object_repeat1,
    STATE(601), 1,
      sym_json_key_string,
    STATE(603), 1,
      sym_json_string,
  [8422] = 4,
    ACTIONS(1218), 1,
      sym_quoted_string_text,
    ACTIONS(1221), 1,
      anon_sym_BSLASH,
    ACTIONS(1216), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(245), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8438] = 4,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 1,
      aux_sym_value_string_text_token1,
    STATE(249), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1088), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8453] = 3,
    ACTIONS(1226), 1,
      anon_sym_LF,
    ACTIONS(1230), 1,
      sym_comment,
    ACTIONS(1228), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8466] = 2,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1094), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8477] = 4,
    ACTIONS(1212), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1232), 1,
      aux_sym_value_string_text_token1,
    STATE(249), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1207), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [8492] = 2,
    STATE(265), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [8503] = 2,
    ACTIONS(1237), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1235), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8514] = 2,
    ACTIONS(1241), 1,
      sym_comment,
    ACTIONS(1239), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8525] = 5,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1245), 1,
      anon_sym_SLASH,
    ACTIONS(1247), 1,
      sym_regex_text,
    STATE(572), 1,
      sym_regex_content,
    STATE(307), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8542] = 5,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(381), 1,
      sym_integer,
    STATE(495), 2,
      sym_quoted_string,
      sym_float,
  [8559] = 5,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(382), 1,
      sym_integer,
    STATE(498), 2,
      sym_quoted_string,
      sym_float,
  [8576] = 2,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8587] = 5,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(385), 1,
      sym_integer,
    STATE(501), 2,
      sym_quoted_string,
      sym_float,
  [8604] = 4,
    ACTIONS(1253), 1,
      sym_key_string_text,
    ACTIONS(1256), 1,
      anon_sym_BSLASH2,
    ACTIONS(1104), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8619] = 5,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(386), 1,
      sym_integer,
    STATE(511), 2,
      sym_quoted_string,
      sym_float,
  [8636] = 4,
    ACTIONS(649), 1,
      anon_sym_base64_COMMA,
    ACTIONS(651), 1,
      anon_sym_hex_COMMA,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(516), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8651] = 2,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8662] = 2,
    ACTIONS(1265), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1263), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8673] = 3,
    ACTIONS(356), 1,
      sym_digit,
    STATE(45), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1267), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [8686] = 4,
    ACTIONS(649), 1,
      anon_sym_base64_COMMA,
    ACTIONS(651), 1,
      anon_sym_hex_COMMA,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(523), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [8701] = 4,
    ACTIONS(1269), 1,
      anon_sym_BSLASH,
    ACTIONS(1272), 1,
      sym_filename_text,
    ACTIONS(1195), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(265), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [8716] = 2,
    ACTIONS(1277), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1275), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8727] = 2,
    ACTIONS(1281), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1279), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8738] = 4,
    ACTIONS(627), 1,
      sym_digit,
    ACTIONS(1267), 1,
      anon_sym_LF,
    STATE(98), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1283), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [8753] = 2,
    ACTIONS(1287), 1,
      anon_sym_u,
    ACTIONS(1285), 5,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_POUND,
      anon_sym_BQUOTE,
  [8764] = 3,
    ACTIONS(1098), 1,
      sym_digit,
    STATE(224), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1267), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [8777] = 2,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8788] = 4,
    ACTIONS(1293), 1,
      anon_sym_LF,
    ACTIONS(1295), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_lt_repeat1,
    ACTIONS(253), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8803] = 4,
    ACTIONS(1297), 1,
      anon_sym_LF,
    ACTIONS(1300), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_lt_repeat1,
    ACTIONS(243), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [8818] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8829] = 5,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(1303), 1,
      anon_sym_LT_QMARK,
    STATE(120), 1,
      sym_xml_open_tag,
    STATE(468), 1,
      sym_xml_tag,
    STATE(336), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [8846] = 2,
    ACTIONS(1307), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8857] = 5,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1247), 1,
      sym_regex_text,
    ACTIONS(1309), 1,
      anon_sym_SLASH,
    STATE(568), 1,
      sym_regex_content,
    STATE(307), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [8874] = 2,
    ACTIONS(1313), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1311), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8884] = 5,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(172), 1,
      sym_lt,
    STATE(229), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [8900] = 2,
    ACTIONS(1317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1315), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8910] = 5,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    STATE(154), 1,
      sym_lt,
    STATE(231), 1,
      aux_sym_lt_repeat1,
    STATE(293), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [8926] = 3,
    STATE(409), 1,
      sym_exponent,
    ACTIONS(1193), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8938] = 2,
    ACTIONS(1323), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1321), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [8948] = 5,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    STATE(154), 1,
      sym_lt,
    STATE(231), 1,
      aux_sym_lt_repeat1,
    STATE(314), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [8964] = 2,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8974] = 5,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(174), 1,
      sym_lt,
    STATE(229), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [8990] = 3,
    ACTIONS(828), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1325), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9002] = 5,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      sym_comment,
    STATE(168), 1,
      sym_lt,
    STATE(227), 1,
      aux_sym_lt_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [9018] = 3,
    ACTIONS(818), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1325), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9030] = 5,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      sym_comment,
    STATE(168), 1,
      sym_lt,
    STATE(227), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [9046] = 2,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9056] = 1,
    ACTIONS(1329), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9064] = 5,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      sym_comment,
    STATE(151), 1,
      sym_lt,
    STATE(231), 1,
      aux_sym_lt_repeat1,
    STATE(314), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9080] = 5,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      sym_comment,
    STATE(174), 1,
      sym_lt,
    STATE(229), 1,
      aux_sym_lt_repeat1,
    STATE(279), 1,
      aux_sym_query_string_params_section_repeat1,
  [9096] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9106] = 5,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 1,
      sym_comment,
    STATE(164), 1,
      sym_lt,
    STATE(233), 1,
      aux_sym_lt_repeat1,
    STATE(298), 1,
      aux_sym_query_string_params_section_repeat1,
  [9122] = 5,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 1,
      sym_comment,
    STATE(164), 1,
      sym_lt,
    STATE(233), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [9138] = 5,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 1,
      sym_comment,
    STATE(163), 1,
      sym_lt,
    STATE(233), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [9154] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9164] = 2,
    ACTIONS(1241), 1,
      anon_sym_COLON2,
    ACTIONS(1239), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9174] = 1,
    ACTIONS(1241), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9182] = 4,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_lt_repeat1,
    STATE(2), 2,
      sym_lt,
      aux_sym_test_DASHfoo_repeat2,
  [9196] = 4,
    ACTIONS(1319), 1,
      anon_sym_LF,
    ACTIONS(1331), 1,
      sym_comment,
    STATE(535), 1,
      sym_exponent,
    ACTIONS(1179), 2,
      anon_sym_e,
      anon_sym_E,
  [9210] = 2,
    ACTIONS(1237), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1235), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9220] = 4,
    ACTIONS(1333), 1,
      anon_sym_BSLASH,
    ACTIONS(1336), 1,
      anon_sym_SLASH,
    ACTIONS(1338), 1,
      sym_regex_text,
    STATE(305), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9234] = 2,
    ACTIONS(1343), 1,
      anon_sym_COLON2,
    ACTIONS(1341), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9244] = 4,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1345), 1,
      anon_sym_SLASH,
    ACTIONS(1347), 1,
      sym_regex_text,
    STATE(305), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9258] = 2,
    ACTIONS(1343), 1,
      sym_comment,
    ACTIONS(1341), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9268] = 3,
    ACTIONS(1327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1325), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9280] = 5,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      sym_comment,
    STATE(173), 1,
      sym_lt,
    STATE(227), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [9296] = 3,
    STATE(409), 1,
      sym_exponent,
    ACTIONS(1205), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1319), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9308] = 5,
    ACTIONS(1351), 1,
      anon_sym_LF,
    ACTIONS(1354), 1,
      sym_comment,
    STATE(178), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
    STATE(312), 1,
      aux_sym_query_string_params_section_repeat1,
  [9324] = 2,
    ACTIONS(1307), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [9334] = 5,
    ACTIONS(1357), 1,
      anon_sym_LF,
    ACTIONS(1360), 1,
      sym_comment,
    STATE(159), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
    STATE(314), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [9350] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(27), 1,
      sym_lt,
  [9363] = 2,
    ACTIONS(1367), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1365), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [9372] = 4,
    ACTIONS(627), 1,
      sym_digit,
    ACTIONS(1369), 1,
      anon_sym_LF,
    ACTIONS(1371), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_integer_repeat1,
  [9385] = 3,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    ACTIONS(1375), 1,
      anon_sym_SLASH,
    STATE(64), 2,
      sym_quoted_string,
      sym_regex,
  [9396] = 4,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(529), 1,
      sym_json_key_value,
    STATE(601), 1,
      sym_json_key_string,
    STATE(603), 1,
      sym_json_string,
  [9409] = 4,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_lt_repeat1,
    STATE(469), 1,
      sym_lt,
  [9422] = 4,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1379), 1,
      sym_comment,
    STATE(148), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
  [9435] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(26), 1,
      sym_lt,
  [9448] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(25), 1,
      sym_lt,
  [9461] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(28), 1,
      sym_lt,
  [9474] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(29), 1,
      sym_lt,
  [9487] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(30), 1,
      sym_lt,
  [9500] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(31), 1,
      sym_lt,
  [9513] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(32), 1,
      sym_lt,
  [9526] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(33), 1,
      sym_lt,
  [9539] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(34), 1,
      sym_lt,
  [9552] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(35), 1,
      sym_lt,
  [9565] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(36), 1,
      sym_lt,
  [9578] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(37), 1,
      sym_lt,
  [9591] = 3,
    ACTIONS(1381), 1,
      sym_digit,
    STATE(359), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1383), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9602] = 3,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    ACTIONS(1375), 1,
      anon_sym_SLASH,
    STATE(72), 2,
      sym_quoted_string,
      sym_regex,
  [9613] = 3,
    ACTIONS(1385), 1,
      anon_sym_LT,
    ACTIONS(1387), 1,
      anon_sym_LT_QMARK,
    STATE(336), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9624] = 3,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    ACTIONS(1375), 1,
      anon_sym_SLASH,
    STATE(465), 2,
      sym_quoted_string,
      sym_regex,
  [9635] = 1,
    ACTIONS(1390), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9642] = 4,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      sym_comment,
    STATE(48), 1,
      sym_lt,
    STATE(74), 1,
      aux_sym_lt_repeat1,
  [9655] = 4,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(20), 1,
      sym_lt,
    STATE(39), 1,
      aux_sym_lt_repeat1,
  [9668] = 1,
    ACTIONS(1392), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9675] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1394), 1,
      anon_sym_LF,
    ACTIONS(1396), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [9688] = 4,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(117), 1,
      sym_lt,
  [9701] = 4,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1379), 1,
      sym_comment,
    STATE(149), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
  [9714] = 4,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      sym_comment,
    STATE(7), 1,
      sym_lt,
    STATE(74), 1,
      aux_sym_lt_repeat1,
  [9727] = 2,
    ACTIONS(1400), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1398), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9736] = 4,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1379), 1,
      sym_comment,
    STATE(179), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
  [9749] = 1,
    ACTIONS(1402), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9756] = 1,
    ACTIONS(1341), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9763] = 4,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_lt_repeat1,
    STATE(54), 1,
      sym_lt,
  [9776] = 4,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1379), 1,
      sym_comment,
    STATE(150), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
  [9789] = 3,
    ACTIONS(1404), 1,
      sym_digit,
    STATE(358), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1406), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9800] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_lt_repeat1,
    STATE(89), 1,
      sym_lt,
  [9813] = 4,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_lt_repeat1,
    STATE(607), 1,
      sym_lt,
  [9826] = 4,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(41), 1,
      sym_lt,
  [9839] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1408), 1,
      anon_sym_LF,
    ACTIONS(1410), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [9852] = 1,
    ACTIONS(1412), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9859] = 3,
    ACTIONS(356), 1,
      sym_digit,
    STATE(45), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9870] = 4,
    ACTIONS(627), 1,
      sym_digit,
    ACTIONS(1414), 1,
      anon_sym_LF,
    ACTIONS(1416), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_integer_repeat1,
  [9883] = 3,
    ACTIONS(356), 1,
      sym_digit,
    STATE(45), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9894] = 2,
    ACTIONS(1420), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1418), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [9903] = 2,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9912] = 2,
    ACTIONS(1424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1422), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9921] = 2,
    ACTIONS(1428), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1426), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9930] = 3,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(1430), 1,
      anon_sym_SLASH,
    STATE(537), 2,
      sym_quoted_string,
      sym_regex,
  [9941] = 1,
    ACTIONS(1241), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9948] = 3,
    ACTIONS(1432), 1,
      sym_digit,
    STATE(371), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1434), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9959] = 4,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_lt_repeat1,
    STATE(42), 1,
      sym_lt,
  [9972] = 2,
    ACTIONS(1438), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1436), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [9981] = 1,
    ACTIONS(1440), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [9988] = 3,
    ACTIONS(1098), 1,
      sym_digit,
    STATE(224), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1414), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9999] = 3,
    ACTIONS(1098), 1,
      sym_digit,
    STATE(224), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1369), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10010] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10019] = 2,
    ACTIONS(1239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1241), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10028] = 1,
    ACTIONS(1289), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10035] = 4,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1379), 1,
      sym_comment,
    STATE(146), 1,
      sym_lt,
    STATE(272), 1,
      aux_sym_lt_repeat1,
  [10048] = 4,
    ACTIONS(778), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_lt,
    STATE(22), 1,
      aux_sym_lt_repeat1,
  [10061] = 1,
    ACTIONS(1241), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10068] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1442), 1,
      anon_sym_LF,
    ACTIONS(1444), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [10081] = 1,
    ACTIONS(1239), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10088] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1446), 1,
      anon_sym_LF,
    ACTIONS(1448), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [10101] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1450), 1,
      anon_sym_LF,
    ACTIONS(1452), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [10114] = 4,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_lt_repeat1,
    STATE(76), 1,
      sym_lt,
  [10127] = 3,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(1430), 1,
      anon_sym_SLASH,
    STATE(126), 2,
      sym_quoted_string,
      sym_regex,
  [10138] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1454), 1,
      anon_sym_LF,
    ACTIONS(1456), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [10151] = 4,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    ACTIONS(1458), 1,
      anon_sym_LF,
    ACTIONS(1460), 1,
      sym_comment,
    STATE(534), 1,
      sym_fraction,
  [10164] = 3,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(1430), 1,
      anon_sym_SLASH,
    STATE(139), 2,
      sym_quoted_string,
      sym_regex,
  [10175] = 3,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    ACTIONS(1375), 1,
      anon_sym_SLASH,
    STATE(513), 2,
      sym_quoted_string,
      sym_regex,
  [10186] = 1,
    ACTIONS(1329), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10193] = 3,
    ACTIONS(1462), 1,
      anon_sym_LF,
    ACTIONS(1464), 1,
      aux_sym_file_value_token1,
    ACTIONS(1466), 1,
      sym_comment,
  [10203] = 2,
    STATE(328), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10211] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(594), 1,
      sym_expr,
  [10221] = 3,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(329), 1,
      sym_integer,
  [10231] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RBRACE,
    STATE(418), 1,
      aux_sym_json_object_repeat1,
  [10241] = 3,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(330), 1,
      sym_integer,
  [10251] = 3,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(127), 1,
      sym_integer,
  [10261] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(331), 1,
      sym_variable_definition,
    STATE(544), 1,
      sym_variable_name,
  [10271] = 2,
    STATE(332), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10279] = 2,
    STATE(333), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10287] = 1,
    ACTIONS(1472), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10293] = 3,
    ACTIONS(1474), 1,
      anon_sym_LF,
    ACTIONS(1476), 1,
      aux_sym_file_value_token1,
    ACTIONS(1478), 1,
      sym_comment,
  [10303] = 1,
    ACTIONS(1319), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10309] = 2,
    STATE(345), 1,
      sym_status,
    ACTIONS(1480), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10317] = 1,
    ACTIONS(1482), 3,
      anon_sym_SEMI,
      anon_sym_POUND,
      aux_sym_filename_escaped_char_token1,
  [10323] = 1,
    ACTIONS(1484), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10329] = 1,
    ACTIONS(1486), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10335] = 3,
    ACTIONS(1488), 1,
      anon_sym_SEMI,
    ACTIONS(1490), 1,
      sym_hexdigit,
    STATE(413), 1,
      aux_sym_oneline_hex_repeat1,
  [10345] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1492), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      aux_sym_json_object_repeat1,
  [10355] = 1,
    ACTIONS(1494), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10361] = 1,
    ACTIONS(1496), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10367] = 1,
    ACTIONS(1498), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10373] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1492), 1,
      anon_sym_RBRACE,
    STATE(418), 1,
      aux_sym_json_object_repeat1,
  [10383] = 3,
    ACTIONS(1500), 1,
      anon_sym_SEMI,
    ACTIONS(1502), 1,
      sym_hexdigit,
    STATE(413), 1,
      aux_sym_oneline_hex_repeat1,
  [10393] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_json_array_repeat1,
  [10403] = 3,
    ACTIONS(1509), 1,
      anon_sym_SEMI,
    ACTIONS(1511), 1,
      sym_hexdigit,
    STATE(407), 1,
      aux_sym_oneline_hex_repeat1,
  [10413] = 3,
    ACTIONS(752), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_integer_repeat1,
    STATE(65), 1,
      sym_integer,
  [10423] = 3,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_json_array_repeat1,
  [10433] = 3,
    ACTIONS(1518), 1,
      anon_sym_RBRACE,
    ACTIONS(1520), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_json_object_repeat1,
  [10443] = 2,
    STATE(323), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10451] = 1,
    ACTIONS(1239), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10457] = 2,
    STATE(315), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10465] = 2,
    STATE(324), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10473] = 3,
    ACTIONS(659), 1,
      sym_digit,
    STATE(99), 1,
      aux_sym_integer_repeat1,
    STATE(325), 1,
      sym_integer,
  [10483] = 2,
    STATE(326), 1,
      sym_boolean,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
  [10491] = 1,
    ACTIONS(1523), 3,
      anon_sym_SEMI,
      anon_sym_POUND,
      aux_sym_filename_escaped_char_token1,
  [10497] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_json_array_repeat1,
  [10507] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [10517] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_RBRACE,
    STATE(418), 1,
      aux_sym_json_object_repeat1,
  [10527] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RBRACK,
    STATE(431), 1,
      aux_sym_json_array_repeat1,
  [10537] = 3,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1531), 1,
      anon_sym_RBRACE,
    STATE(418), 1,
      aux_sym_json_object_repeat1,
  [10547] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1533), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_json_array_repeat1,
  [10557] = 2,
    ACTIONS(1537), 1,
      sym_regex_text,
    ACTIONS(1535), 2,
      anon_sym_BSLASH,
      anon_sym_SLASH,
  [10565] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(545), 1,
      sym_expr,
  [10575] = 1,
    ACTIONS(1226), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10581] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [10591] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(580), 1,
      sym_expr,
  [10601] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(582), 1,
      sym_expr,
  [10611] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(624), 1,
      sym_expr,
  [10621] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(585), 1,
      sym_expr,
  [10631] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(586), 1,
      sym_expr,
  [10641] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(587), 1,
      sym_expr,
  [10651] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(588), 1,
      sym_expr,
  [10661] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(589), 1,
      sym_expr,
  [10671] = 3,
    ACTIONS(1468), 1,
      aux_sym_variable_name_token1,
    STATE(95), 1,
      sym_variable_name,
    STATE(590), 1,
      sym_expr,
  [10681] = 1,
    ACTIONS(1539), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10687] = 2,
    ACTIONS(1541), 1,
      anon_sym_LF,
    ACTIONS(1543), 1,
      sym_comment,
  [10694] = 2,
    ACTIONS(1545), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(62), 1,
      sym_options_section,
  [10701] = 2,
    ACTIONS(1263), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LF,
  [10708] = 2,
    ACTIONS(1412), 1,
      anon_sym_LF,
    ACTIONS(1547), 1,
      sym_comment,
  [10715] = 2,
    ACTIONS(1496), 1,
      anon_sym_LF,
    ACTIONS(1549), 1,
      sym_comment,
  [10722] = 2,
    ACTIONS(1551), 1,
      anon_sym_file_COMMA,
    STATE(320), 1,
      sym_file_value,
  [10729] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_quoted_string,
  [10736] = 2,
    ACTIONS(1553), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym_unicode_char,
  [10743] = 2,
    ACTIONS(1555), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    STATE(509), 1,
      sym_form_params_section,
  [10750] = 1,
    ACTIONS(1557), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10755] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(525), 1,
      sym_quoted_string,
  [10762] = 2,
    ACTIONS(1559), 1,
      anon_sym_LF,
    ACTIONS(1561), 1,
      sym_comment,
  [10769] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_quoted_string,
  [10776] = 2,
    ACTIONS(1402), 1,
      anon_sym_LF,
    ACTIONS(1563), 1,
      sym_comment,
  [10783] = 2,
    ACTIONS(1565), 1,
      sym_digit,
    STATE(270), 1,
      aux_sym_integer_repeat1,
  [10790] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_quoted_string,
  [10797] = 2,
    ACTIONS(1319), 1,
      anon_sym_LF,
    ACTIONS(1331), 1,
      sym_comment,
  [10804] = 2,
    ACTIONS(1567), 1,
      anon_sym_LF,
    ACTIONS(1569), 1,
      sym_comment,
  [10811] = 1,
    ACTIONS(1516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10816] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_quoted_string,
  [10823] = 2,
    ACTIONS(1275), 1,
      sym_comment,
    ACTIONS(1277), 1,
      anon_sym_LF,
  [10830] = 2,
    ACTIONS(1571), 1,
      sym_digit,
    STATE(372), 1,
      aux_sym_integer_repeat1,
  [10837] = 2,
    ACTIONS(1573), 1,
      anon_sym_LF,
    ACTIONS(1575), 1,
      sym_comment,
  [10844] = 2,
    ACTIONS(1577), 1,
      anon_sym_LF,
    ACTIONS(1579), 1,
      sym_comment,
  [10851] = 2,
    ACTIONS(1581), 1,
      anon_sym_LF,
    ACTIONS(1583), 1,
      sym_comment,
  [10858] = 2,
    ACTIONS(1585), 1,
      anon_sym_LF,
    ACTIONS(1587), 1,
      sym_comment,
  [10865] = 2,
    ACTIONS(1498), 1,
      anon_sym_LF,
    ACTIONS(1589), 1,
      sym_comment,
  [10872] = 2,
    ACTIONS(1591), 1,
      anon_sym_LF,
    ACTIONS(1593), 1,
      sym_comment,
  [10879] = 2,
    ACTIONS(1595), 1,
      anon_sym_LF,
    ACTIONS(1597), 1,
      sym_comment,
  [10886] = 2,
    ACTIONS(1599), 1,
      anon_sym_LBRACE,
    STATE(304), 1,
      sym_unicode_char,
  [10893] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_quoted_string,
  [10900] = 2,
    ACTIONS(1249), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LF,
  [10907] = 2,
    ACTIONS(1601), 1,
      anon_sym_LF,
    ACTIONS(1603), 1,
      sym_comment,
  [10914] = 2,
    ACTIONS(1484), 1,
      anon_sym_LF,
    ACTIONS(1605), 1,
      sym_comment,
  [10921] = 2,
    ACTIONS(1607), 1,
      anon_sym_LF,
    ACTIONS(1609), 1,
      sym_comment,
  [10928] = 2,
    ACTIONS(1611), 1,
      anon_sym_LF,
    ACTIONS(1613), 1,
      sym_comment,
  [10935] = 2,
    ACTIONS(1486), 1,
      anon_sym_LF,
    ACTIONS(1615), 1,
      sym_comment,
  [10942] = 2,
    ACTIONS(1617), 1,
      anon_sym_COLON,
    ACTIONS(1619), 1,
      anon_sym_COLON2,
  [10949] = 2,
    ACTIONS(1621), 1,
      anon_sym_LF,
    ACTIONS(1623), 1,
      sym_comment,
  [10956] = 2,
    ACTIONS(1625), 1,
      anon_sym_LF,
    ACTIONS(1627), 1,
      sym_comment,
  [10963] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_quoted_string,
  [10970] = 2,
    ACTIONS(1629), 1,
      anon_sym_LBRACKCookies_RBRACK,
    STATE(447), 1,
      sym_cookies_section,
  [10977] = 2,
    ACTIONS(1631), 1,
      anon_sym_LF,
    ACTIONS(1633), 1,
      sym_comment,
  [10984] = 2,
    ACTIONS(1442), 1,
      anon_sym_LF,
    ACTIONS(1444), 1,
      sym_comment,
  [10991] = 2,
    ACTIONS(1226), 1,
      anon_sym_LF,
    ACTIONS(1230), 1,
      sym_comment,
  [10998] = 2,
    ACTIONS(1635), 1,
      anon_sym_LF,
    ACTIONS(1637), 1,
      sym_comment,
  [11005] = 2,
    ACTIONS(1394), 1,
      anon_sym_LF,
    ACTIONS(1396), 1,
      sym_comment,
  [11012] = 2,
    ACTIONS(1639), 1,
      anon_sym_LF,
    ACTIONS(1641), 1,
      sym_comment,
  [11019] = 2,
    ACTIONS(1643), 1,
      anon_sym_LF,
    ACTIONS(1645), 1,
      sym_comment,
  [11026] = 2,
    ACTIONS(1446), 1,
      anon_sym_LF,
    ACTIONS(1448), 1,
      sym_comment,
  [11033] = 2,
    ACTIONS(1647), 1,
      anon_sym_LF,
    ACTIONS(1649), 1,
      sym_comment,
  [11040] = 2,
    ACTIONS(1651), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym_unicode_char,
  [11047] = 2,
    ACTIONS(1450), 1,
      anon_sym_LF,
    ACTIONS(1452), 1,
      sym_comment,
  [11054] = 2,
    ACTIONS(1653), 1,
      anon_sym_LBRACE,
    STATE(370), 1,
      sym_unicode_char,
  [11061] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_quoted_string,
  [11068] = 2,
    ACTIONS(1454), 1,
      anon_sym_LF,
    ACTIONS(1456), 1,
      sym_comment,
  [11075] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_quoted_string,
  [11082] = 1,
    ACTIONS(1655), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11087] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_quoted_string,
  [11094] = 2,
    ACTIONS(1472), 1,
      anon_sym_LF,
    ACTIONS(1657), 1,
      sym_comment,
  [11101] = 2,
    ACTIONS(1659), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym_unicode_char,
  [11108] = 2,
    ACTIONS(1661), 1,
      anon_sym_LF,
    ACTIONS(1663), 1,
      sym_comment,
  [11115] = 2,
    ACTIONS(1665), 1,
      anon_sym_LF,
    ACTIONS(1667), 1,
      sym_comment,
  [11122] = 2,
    ACTIONS(1669), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    STATE(487), 1,
      sym_multipart_form_data_section,
  [11129] = 2,
    ACTIONS(1671), 1,
      anon_sym_LF,
    ACTIONS(1673), 1,
      sym_comment,
  [11136] = 2,
    ACTIONS(1458), 1,
      anon_sym_LF,
    ACTIONS(1460), 1,
      sym_comment,
  [11143] = 2,
    ACTIONS(1539), 1,
      anon_sym_LF,
    ACTIONS(1675), 1,
      sym_comment,
  [11150] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_quoted_string,
  [11157] = 2,
    ACTIONS(1474), 1,
      anon_sym_LF,
    ACTIONS(1478), 1,
      sym_comment,
  [11164] = 2,
    ACTIONS(1677), 1,
      anon_sym_LF,
    ACTIONS(1679), 1,
      sym_comment,
  [11171] = 2,
    ACTIONS(1681), 1,
      anon_sym_LF,
    ACTIONS(1683), 1,
      sym_comment,
  [11178] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_quoted_string,
  [11185] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_quoted_string,
  [11192] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      sym_quoted_string,
  [11199] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      sym_quoted_string,
  [11206] = 2,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_quoted_string,
  [11213] = 2,
    ACTIONS(1685), 1,
      anon_sym_LF,
    ACTIONS(1687), 1,
      sym_comment,
  [11220] = 2,
    ACTIONS(1689), 1,
      anon_sym_LF,
    ACTIONS(1691), 1,
      sym_comment,
  [11227] = 2,
    ACTIONS(1693), 1,
      sym_digit,
    STATE(360), 1,
      aux_sym_integer_repeat1,
  [11234] = 2,
    ACTIONS(1695), 1,
      anon_sym_LF,
    ACTIONS(1697), 1,
      sym_comment,
  [11241] = 2,
    ACTIONS(1699), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    STATE(454), 1,
      sym_query_string_params_section,
  [11248] = 2,
    ACTIONS(1408), 1,
      anon_sym_LF,
    ACTIONS(1410), 1,
      sym_comment,
  [11255] = 2,
    ACTIONS(1701), 1,
      anon_sym_LF,
    ACTIONS(1703), 1,
      sym_comment,
  [11262] = 1,
    ACTIONS(1518), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11267] = 2,
    ACTIONS(1705), 1,
      sym_digit,
    STATE(317), 1,
      aux_sym_integer_repeat1,
  [11274] = 2,
    ACTIONS(1707), 1,
      sym_digit,
    STATE(268), 1,
      aux_sym_integer_repeat1,
  [11281] = 2,
    ACTIONS(1709), 1,
      sym_digit,
    STATE(263), 1,
      aux_sym_integer_repeat1,
  [11288] = 2,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_quoted_string,
  [11295] = 2,
    ACTIONS(1711), 1,
      anon_sym_LF,
    ACTIONS(1713), 1,
      sym_comment,
  [11302] = 2,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1715), 1,
      sym_comment,
  [11309] = 2,
    ACTIONS(1259), 1,
      anon_sym_LT,
    ACTIONS(1261), 1,
      anon_sym_LT_QMARK,
  [11316] = 2,
    ACTIONS(1717), 1,
      anon_sym_LF,
    ACTIONS(1719), 1,
      sym_comment,
  [11323] = 2,
    ACTIONS(1721), 1,
      anon_sym_LF,
    ACTIONS(1723), 1,
      sym_comment,
  [11330] = 2,
    ACTIONS(1725), 1,
      anon_sym_LF,
    ACTIONS(1727), 1,
      sym_comment,
  [11337] = 1,
    ACTIONS(1729), 1,
      sym_hexdigit,
  [11341] = 1,
    ACTIONS(1731), 1,
      sym_hexdigit,
  [11345] = 1,
    ACTIONS(1733), 1,
      anon_sym_COLON2,
  [11349] = 1,
    ACTIONS(1735), 1,
      anon_sym_COLON2,
  [11353] = 1,
    ACTIONS(1737), 1,
      anon_sym_EQ,
  [11357] = 1,
    ACTIONS(1739), 1,
      anon_sym_RBRACE_RBRACE,
  [11361] = 1,
    ACTIONS(1741), 1,
      anon_sym_COLON2,
  [11365] = 1,
    ACTIONS(1743), 1,
      aux_sym_key_string_escaped_char_token1,
  [11369] = 1,
    ACTIONS(1745), 1,
      anon_sym_COLON2,
  [11373] = 1,
    ACTIONS(1747), 1,
      anon_sym_COLON2,
  [11377] = 1,
    ACTIONS(1749), 1,
      anon_sym_COLON2,
  [11381] = 1,
    ACTIONS(1751), 1,
      anon_sym_COLON2,
  [11385] = 1,
    ACTIONS(1753), 1,
      anon_sym_COLON2,
  [11389] = 1,
    ACTIONS(1755), 1,
      anon_sym_COLON2,
  [11393] = 1,
    ACTIONS(1757), 1,
      anon_sym_SEMI,
  [11397] = 1,
    ACTIONS(1759), 1,
      anon_sym_QMARK_GT,
  [11401] = 1,
    ACTIONS(1761), 1,
      aux_sym_oneline_string_text_token2,
  [11405] = 1,
    ACTIONS(1763), 1,
      aux_sym_xml_open_tag_token1,
  [11409] = 1,
    ACTIONS(1765), 1,
      sym_hexdigit,
  [11413] = 1,
    ACTIONS(1767), 1,
      anon_sym_SEMI,
  [11417] = 1,
    ACTIONS(1769), 1,
      aux_sym_key_string_escaped_char_token1,
  [11421] = 1,
    ACTIONS(1771), 1,
      ts_builtin_sym_end,
  [11425] = 1,
    ACTIONS(1773), 1,
      aux_sym_xml_close_tag_token1,
  [11429] = 1,
    ACTIONS(1775), 1,
      anon_sym_GT,
  [11433] = 1,
    ACTIONS(1777), 1,
      anon_sym_QMARK_GT,
  [11437] = 1,
    ACTIONS(1779), 1,
      anon_sym_RBRACE,
  [11441] = 1,
    ACTIONS(1781), 1,
      anon_sym_GT,
  [11445] = 1,
    ACTIONS(1783), 1,
      anon_sym_LF,
  [11449] = 1,
    ACTIONS(1785), 1,
      anon_sym_SLASH,
  [11453] = 1,
    ACTIONS(1787), 1,
      anon_sym_SEMI,
  [11457] = 1,
    ACTIONS(1789), 1,
      sym_hexdigit,
  [11461] = 1,
    ACTIONS(1791), 1,
      aux_sym_xml_prolog_tag_token1,
  [11465] = 1,
    ACTIONS(1793), 1,
      anon_sym_SLASH,
  [11469] = 1,
    ACTIONS(1795), 1,
      anon_sym_LF,
  [11473] = 1,
    ACTIONS(1797), 1,
      sym_hexdigit,
  [11477] = 1,
    ACTIONS(1799), 1,
      anon_sym_RBRACE,
  [11481] = 1,
    ACTIONS(1801), 1,
      sym_hexdigit,
  [11485] = 1,
    ACTIONS(1803), 1,
      anon_sym_RBRACE_RBRACE,
  [11489] = 1,
    ACTIONS(1805), 1,
      aux_sym_key_string_escaped_char_token1,
  [11493] = 1,
    ACTIONS(1807), 1,
      anon_sym_RBRACE,
  [11497] = 1,
    ACTIONS(1809), 1,
      anon_sym_RBRACE_RBRACE,
  [11501] = 1,
    ACTIONS(1811), 1,
      anon_sym_RBRACE,
  [11505] = 1,
    ACTIONS(1813), 1,
      anon_sym_RBRACE_RBRACE,
  [11509] = 1,
    ACTIONS(1815), 1,
      anon_sym_RBRACE,
  [11513] = 1,
    ACTIONS(1817), 1,
      anon_sym_COLON2,
  [11517] = 1,
    ACTIONS(1819), 1,
      anon_sym_RBRACE_RBRACE,
  [11521] = 1,
    ACTIONS(1821), 1,
      anon_sym_RBRACE_RBRACE,
  [11525] = 1,
    ACTIONS(1823), 1,
      anon_sym_RBRACE_RBRACE,
  [11529] = 1,
    ACTIONS(1825), 1,
      anon_sym_RBRACE_RBRACE,
  [11533] = 1,
    ACTIONS(1827), 1,
      anon_sym_RBRACE_RBRACE,
  [11537] = 1,
    ACTIONS(1829), 1,
      anon_sym_RBRACE_RBRACE,
  [11541] = 1,
    ACTIONS(1831), 1,
      anon_sym_COLON2,
  [11545] = 1,
    ACTIONS(1833), 1,
      aux_sym_xml_prolog_tag_token1,
  [11549] = 1,
    ACTIONS(1835), 1,
      aux_sym_variable_name_token2,
  [11553] = 1,
    ACTIONS(1837), 1,
      anon_sym_RBRACE_RBRACE,
  [11557] = 1,
    ACTIONS(1839), 1,
      aux_sym_xml_close_tag_token1,
  [11561] = 1,
    ACTIONS(1841), 1,
      sym_hexdigit,
  [11565] = 1,
    ACTIONS(1843), 1,
      aux_sym_oneline_base64_token1,
  [11569] = 1,
    ACTIONS(1845), 1,
      sym_hexdigit,
  [11573] = 1,
    ACTIONS(1847), 1,
      aux_sym_regex_escaped_char_token1,
  [11577] = 1,
    ACTIONS(1849), 1,
      sym_hexdigit,
  [11581] = 1,
    ACTIONS(1851), 1,
      anon_sym_COLON2,
  [11585] = 1,
    ACTIONS(1853), 1,
      sym_hexdigit,
  [11589] = 1,
    ACTIONS(1855), 1,
      anon_sym_COLON2,
  [11593] = 1,
    ACTIONS(1857), 1,
      sym_hexdigit,
  [11597] = 1,
    ACTIONS(1859), 1,
      anon_sym_GT,
  [11601] = 1,
    ACTIONS(1861), 1,
      sym_hexdigit,
  [11605] = 1,
    ACTIONS(1863), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
  [11609] = 1,
    ACTIONS(1865), 1,
      sym_hexdigit,
  [11613] = 1,
    ACTIONS(1867), 1,
      anon_sym_COLON2,
  [11617] = 1,
    ACTIONS(1869), 1,
      anon_sym_COLON2,
  [11621] = 1,
    ACTIONS(1871), 1,
      anon_sym_COLON2,
  [11625] = 1,
    ACTIONS(1873), 1,
      sym_hexdigit,
  [11629] = 1,
    ACTIONS(1875), 1,
      sym_hexdigit,
  [11633] = 1,
    ACTIONS(1877), 1,
      sym_hexdigit,
  [11637] = 1,
    ACTIONS(1879), 1,
      sym_hexdigit,
  [11641] = 1,
    ACTIONS(1617), 1,
      anon_sym_COLON,
  [11645] = 1,
    ACTIONS(1881), 1,
      sym_hexdigit,
  [11649] = 1,
    ACTIONS(1883), 1,
      sym_hexdigit,
  [11653] = 1,
    ACTIONS(1885), 1,
      sym_hexdigit,
  [11657] = 1,
    ACTIONS(1887), 1,
      sym_hexdigit,
  [11661] = 1,
    ACTIONS(1889), 1,
      sym_hexdigit,
  [11665] = 1,
    ACTIONS(1891), 1,
      sym_hexdigit,
  [11669] = 1,
    ACTIONS(1893), 1,
      sym_hexdigit,
  [11673] = 1,
    ACTIONS(1895), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 351,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 544,
  [SMALL_STATE(20)] = 628,
  [SMALL_STATE(21)] = 712,
  [SMALL_STATE(22)] = 778,
  [SMALL_STATE(23)] = 844,
  [SMALL_STATE(24)] = 903,
  [SMALL_STATE(25)] = 962,
  [SMALL_STATE(26)] = 1021,
  [SMALL_STATE(27)] = 1080,
  [SMALL_STATE(28)] = 1139,
  [SMALL_STATE(29)] = 1198,
  [SMALL_STATE(30)] = 1257,
  [SMALL_STATE(31)] = 1316,
  [SMALL_STATE(32)] = 1375,
  [SMALL_STATE(33)] = 1434,
  [SMALL_STATE(34)] = 1493,
  [SMALL_STATE(35)] = 1552,
  [SMALL_STATE(36)] = 1611,
  [SMALL_STATE(37)] = 1670,
  [SMALL_STATE(38)] = 1729,
  [SMALL_STATE(39)] = 1802,
  [SMALL_STATE(40)] = 1864,
  [SMALL_STATE(41)] = 1926,
  [SMALL_STATE(42)] = 1981,
  [SMALL_STATE(43)] = 2036,
  [SMALL_STATE(44)] = 2093,
  [SMALL_STATE(45)] = 2162,
  [SMALL_STATE(46)] = 2219,
  [SMALL_STATE(47)] = 2288,
  [SMALL_STATE(48)] = 2354,
  [SMALL_STATE(49)] = 2420,
  [SMALL_STATE(50)] = 2486,
  [SMALL_STATE(51)] = 2545,
  [SMALL_STATE(52)] = 2600,
  [SMALL_STATE(53)] = 2655,
  [SMALL_STATE(54)] = 2710,
  [SMALL_STATE(55)] = 2758,
  [SMALL_STATE(56)] = 2805,
  [SMALL_STATE(57)] = 2852,
  [SMALL_STATE(58)] = 2899,
  [SMALL_STATE(59)] = 2946,
  [SMALL_STATE(60)] = 2992,
  [SMALL_STATE(61)] = 3046,
  [SMALL_STATE(62)] = 3092,
  [SMALL_STATE(63)] = 3138,
  [SMALL_STATE(64)] = 3184,
  [SMALL_STATE(65)] = 3230,
  [SMALL_STATE(66)] = 3276,
  [SMALL_STATE(67)] = 3322,
  [SMALL_STATE(68)] = 3367,
  [SMALL_STATE(69)] = 3412,
  [SMALL_STATE(70)] = 3457,
  [SMALL_STATE(71)] = 3502,
  [SMALL_STATE(72)] = 3547,
  [SMALL_STATE(73)] = 3592,
  [SMALL_STATE(74)] = 3637,
  [SMALL_STATE(75)] = 3688,
  [SMALL_STATE(76)] = 3739,
  [SMALL_STATE(77)] = 3783,
  [SMALL_STATE(78)] = 3827,
  [SMALL_STATE(79)] = 3871,
  [SMALL_STATE(80)] = 3913,
  [SMALL_STATE(81)] = 3977,
  [SMALL_STATE(82)] = 4025,
  [SMALL_STATE(83)] = 4073,
  [SMALL_STATE(84)] = 4119,
  [SMALL_STATE(85)] = 4165,
  [SMALL_STATE(86)] = 4217,
  [SMALL_STATE(87)] = 4269,
  [SMALL_STATE(88)] = 4311,
  [SMALL_STATE(89)] = 4341,
  [SMALL_STATE(90)] = 4371,
  [SMALL_STATE(91)] = 4401,
  [SMALL_STATE(92)] = 4431,
  [SMALL_STATE(93)] = 4477,
  [SMALL_STATE(94)] = 4519,
  [SMALL_STATE(95)] = 4549,
  [SMALL_STATE(96)] = 4592,
  [SMALL_STATE(97)] = 4635,
  [SMALL_STATE(98)] = 4674,
  [SMALL_STATE(99)] = 4706,
  [SMALL_STATE(100)] = 4738,
  [SMALL_STATE(101)] = 4774,
  [SMALL_STATE(102)] = 4809,
  [SMALL_STATE(103)] = 4842,
  [SMALL_STATE(104)] = 4877,
  [SMALL_STATE(105)] = 4925,
  [SMALL_STATE(106)] = 4973,
  [SMALL_STATE(107)] = 5021,
  [SMALL_STATE(108)] = 5069,
  [SMALL_STATE(109)] = 5099,
  [SMALL_STATE(110)] = 5129,
  [SMALL_STATE(111)] = 5154,
  [SMALL_STATE(112)] = 5179,
  [SMALL_STATE(113)] = 5204,
  [SMALL_STATE(114)] = 5229,
  [SMALL_STATE(115)] = 5268,
  [SMALL_STATE(116)] = 5315,
  [SMALL_STATE(117)] = 5340,
  [SMALL_STATE(118)] = 5365,
  [SMALL_STATE(119)] = 5390,
  [SMALL_STATE(120)] = 5434,
  [SMALL_STATE(121)] = 5478,
  [SMALL_STATE(122)] = 5522,
  [SMALL_STATE(123)] = 5566,
  [SMALL_STATE(124)] = 5589,
  [SMALL_STATE(125)] = 5610,
  [SMALL_STATE(126)] = 5633,
  [SMALL_STATE(127)] = 5656,
  [SMALL_STATE(128)] = 5679,
  [SMALL_STATE(129)] = 5702,
  [SMALL_STATE(130)] = 5725,
  [SMALL_STATE(131)] = 5748,
  [SMALL_STATE(132)] = 5771,
  [SMALL_STATE(133)] = 5794,
  [SMALL_STATE(134)] = 5817,
  [SMALL_STATE(135)] = 5840,
  [SMALL_STATE(136)] = 5863,
  [SMALL_STATE(137)] = 5886,
  [SMALL_STATE(138)] = 5909,
  [SMALL_STATE(139)] = 5932,
  [SMALL_STATE(140)] = 5955,
  [SMALL_STATE(141)] = 5996,
  [SMALL_STATE(142)] = 6019,
  [SMALL_STATE(143)] = 6059,
  [SMALL_STATE(144)] = 6099,
  [SMALL_STATE(145)] = 6139,
  [SMALL_STATE(146)] = 6179,
  [SMALL_STATE(147)] = 6223,
  [SMALL_STATE(148)] = 6260,
  [SMALL_STATE(149)] = 6300,
  [SMALL_STATE(150)] = 6340,
  [SMALL_STATE(151)] = 6380,
  [SMALL_STATE(152)] = 6412,
  [SMALL_STATE(153)] = 6444,
  [SMALL_STATE(154)] = 6476,
  [SMALL_STATE(155)] = 6508,
  [SMALL_STATE(156)] = 6532,
  [SMALL_STATE(157)] = 6560,
  [SMALL_STATE(158)] = 6587,
  [SMALL_STATE(159)] = 6614,
  [SMALL_STATE(160)] = 6643,
  [SMALL_STATE(161)] = 6669,
  [SMALL_STATE(162)] = 6697,
  [SMALL_STATE(163)] = 6723,
  [SMALL_STATE(164)] = 6751,
  [SMALL_STATE(165)] = 6779,
  [SMALL_STATE(166)] = 6805,
  [SMALL_STATE(167)] = 6833,
  [SMALL_STATE(168)] = 6859,
  [SMALL_STATE(169)] = 6887,
  [SMALL_STATE(170)] = 6913,
  [SMALL_STATE(171)] = 6939,
  [SMALL_STATE(172)] = 6967,
  [SMALL_STATE(173)] = 6995,
  [SMALL_STATE(174)] = 7023,
  [SMALL_STATE(175)] = 7051,
  [SMALL_STATE(176)] = 7076,
  [SMALL_STATE(177)] = 7101,
  [SMALL_STATE(178)] = 7124,
  [SMALL_STATE(179)] = 7149,
  [SMALL_STATE(180)] = 7174,
  [SMALL_STATE(181)] = 7197,
  [SMALL_STATE(182)] = 7220,
  [SMALL_STATE(183)] = 7245,
  [SMALL_STATE(184)] = 7268,
  [SMALL_STATE(185)] = 7291,
  [SMALL_STATE(186)] = 7314,
  [SMALL_STATE(187)] = 7337,
  [SMALL_STATE(188)] = 7360,
  [SMALL_STATE(189)] = 7383,
  [SMALL_STATE(190)] = 7406,
  [SMALL_STATE(191)] = 7429,
  [SMALL_STATE(192)] = 7454,
  [SMALL_STATE(193)] = 7479,
  [SMALL_STATE(194)] = 7502,
  [SMALL_STATE(195)] = 7527,
  [SMALL_STATE(196)] = 7549,
  [SMALL_STATE(197)] = 7565,
  [SMALL_STATE(198)] = 7587,
  [SMALL_STATE(199)] = 7609,
  [SMALL_STATE(200)] = 7631,
  [SMALL_STATE(201)] = 7653,
  [SMALL_STATE(202)] = 7675,
  [SMALL_STATE(203)] = 7697,
  [SMALL_STATE(204)] = 7719,
  [SMALL_STATE(205)] = 7740,
  [SMALL_STATE(206)] = 7761,
  [SMALL_STATE(207)] = 7774,
  [SMALL_STATE(208)] = 7795,
  [SMALL_STATE(209)] = 7812,
  [SMALL_STATE(210)] = 7827,
  [SMALL_STATE(211)] = 7848,
  [SMALL_STATE(212)] = 7869,
  [SMALL_STATE(213)] = 7882,
  [SMALL_STATE(214)] = 7895,
  [SMALL_STATE(215)] = 7916,
  [SMALL_STATE(216)] = 7933,
  [SMALL_STATE(217)] = 7948,
  [SMALL_STATE(218)] = 7965,
  [SMALL_STATE(219)] = 7978,
  [SMALL_STATE(220)] = 7994,
  [SMALL_STATE(221)] = 8008,
  [SMALL_STATE(222)] = 8022,
  [SMALL_STATE(223)] = 8038,
  [SMALL_STATE(224)] = 8056,
  [SMALL_STATE(225)] = 8070,
  [SMALL_STATE(226)] = 8088,
  [SMALL_STATE(227)] = 8106,
  [SMALL_STATE(228)] = 8124,
  [SMALL_STATE(229)] = 8142,
  [SMALL_STATE(230)] = 8160,
  [SMALL_STATE(231)] = 8178,
  [SMALL_STATE(232)] = 8196,
  [SMALL_STATE(233)] = 8214,
  [SMALL_STATE(234)] = 8232,
  [SMALL_STATE(235)] = 8250,
  [SMALL_STATE(236)] = 8262,
  [SMALL_STATE(237)] = 8282,
  [SMALL_STATE(238)] = 8304,
  [SMALL_STATE(239)] = 8318,
  [SMALL_STATE(240)] = 8336,
  [SMALL_STATE(241)] = 8352,
  [SMALL_STATE(242)] = 8366,
  [SMALL_STATE(243)] = 8384,
  [SMALL_STATE(244)] = 8400,
  [SMALL_STATE(245)] = 8422,
  [SMALL_STATE(246)] = 8438,
  [SMALL_STATE(247)] = 8453,
  [SMALL_STATE(248)] = 8466,
  [SMALL_STATE(249)] = 8477,
  [SMALL_STATE(250)] = 8492,
  [SMALL_STATE(251)] = 8503,
  [SMALL_STATE(252)] = 8514,
  [SMALL_STATE(253)] = 8525,
  [SMALL_STATE(254)] = 8542,
  [SMALL_STATE(255)] = 8559,
  [SMALL_STATE(256)] = 8576,
  [SMALL_STATE(257)] = 8587,
  [SMALL_STATE(258)] = 8604,
  [SMALL_STATE(259)] = 8619,
  [SMALL_STATE(260)] = 8636,
  [SMALL_STATE(261)] = 8651,
  [SMALL_STATE(262)] = 8662,
  [SMALL_STATE(263)] = 8673,
  [SMALL_STATE(264)] = 8686,
  [SMALL_STATE(265)] = 8701,
  [SMALL_STATE(266)] = 8716,
  [SMALL_STATE(267)] = 8727,
  [SMALL_STATE(268)] = 8738,
  [SMALL_STATE(269)] = 8753,
  [SMALL_STATE(270)] = 8764,
  [SMALL_STATE(271)] = 8777,
  [SMALL_STATE(272)] = 8788,
  [SMALL_STATE(273)] = 8803,
  [SMALL_STATE(274)] = 8818,
  [SMALL_STATE(275)] = 8829,
  [SMALL_STATE(276)] = 8846,
  [SMALL_STATE(277)] = 8857,
  [SMALL_STATE(278)] = 8874,
  [SMALL_STATE(279)] = 8884,
  [SMALL_STATE(280)] = 8900,
  [SMALL_STATE(281)] = 8910,
  [SMALL_STATE(282)] = 8926,
  [SMALL_STATE(283)] = 8938,
  [SMALL_STATE(284)] = 8948,
  [SMALL_STATE(285)] = 8964,
  [SMALL_STATE(286)] = 8974,
  [SMALL_STATE(287)] = 8990,
  [SMALL_STATE(288)] = 9002,
  [SMALL_STATE(289)] = 9018,
  [SMALL_STATE(290)] = 9030,
  [SMALL_STATE(291)] = 9046,
  [SMALL_STATE(292)] = 9056,
  [SMALL_STATE(293)] = 9064,
  [SMALL_STATE(294)] = 9080,
  [SMALL_STATE(295)] = 9096,
  [SMALL_STATE(296)] = 9106,
  [SMALL_STATE(297)] = 9122,
  [SMALL_STATE(298)] = 9138,
  [SMALL_STATE(299)] = 9154,
  [SMALL_STATE(300)] = 9164,
  [SMALL_STATE(301)] = 9174,
  [SMALL_STATE(302)] = 9182,
  [SMALL_STATE(303)] = 9196,
  [SMALL_STATE(304)] = 9210,
  [SMALL_STATE(305)] = 9220,
  [SMALL_STATE(306)] = 9234,
  [SMALL_STATE(307)] = 9244,
  [SMALL_STATE(308)] = 9258,
  [SMALL_STATE(309)] = 9268,
  [SMALL_STATE(310)] = 9280,
  [SMALL_STATE(311)] = 9296,
  [SMALL_STATE(312)] = 9308,
  [SMALL_STATE(313)] = 9324,
  [SMALL_STATE(314)] = 9334,
  [SMALL_STATE(315)] = 9350,
  [SMALL_STATE(316)] = 9363,
  [SMALL_STATE(317)] = 9372,
  [SMALL_STATE(318)] = 9385,
  [SMALL_STATE(319)] = 9396,
  [SMALL_STATE(320)] = 9409,
  [SMALL_STATE(321)] = 9422,
  [SMALL_STATE(322)] = 9435,
  [SMALL_STATE(323)] = 9448,
  [SMALL_STATE(324)] = 9461,
  [SMALL_STATE(325)] = 9474,
  [SMALL_STATE(326)] = 9487,
  [SMALL_STATE(327)] = 9500,
  [SMALL_STATE(328)] = 9513,
  [SMALL_STATE(329)] = 9526,
  [SMALL_STATE(330)] = 9539,
  [SMALL_STATE(331)] = 9552,
  [SMALL_STATE(332)] = 9565,
  [SMALL_STATE(333)] = 9578,
  [SMALL_STATE(334)] = 9591,
  [SMALL_STATE(335)] = 9602,
  [SMALL_STATE(336)] = 9613,
  [SMALL_STATE(337)] = 9624,
  [SMALL_STATE(338)] = 9635,
  [SMALL_STATE(339)] = 9642,
  [SMALL_STATE(340)] = 9655,
  [SMALL_STATE(341)] = 9668,
  [SMALL_STATE(342)] = 9675,
  [SMALL_STATE(343)] = 9688,
  [SMALL_STATE(344)] = 9701,
  [SMALL_STATE(345)] = 9714,
  [SMALL_STATE(346)] = 9727,
  [SMALL_STATE(347)] = 9736,
  [SMALL_STATE(348)] = 9749,
  [SMALL_STATE(349)] = 9756,
  [SMALL_STATE(350)] = 9763,
  [SMALL_STATE(351)] = 9776,
  [SMALL_STATE(352)] = 9789,
  [SMALL_STATE(353)] = 9800,
  [SMALL_STATE(354)] = 9813,
  [SMALL_STATE(355)] = 9826,
  [SMALL_STATE(356)] = 9839,
  [SMALL_STATE(357)] = 9852,
  [SMALL_STATE(358)] = 9859,
  [SMALL_STATE(359)] = 9870,
  [SMALL_STATE(360)] = 9883,
  [SMALL_STATE(361)] = 9894,
  [SMALL_STATE(362)] = 9903,
  [SMALL_STATE(363)] = 9912,
  [SMALL_STATE(364)] = 9921,
  [SMALL_STATE(365)] = 9930,
  [SMALL_STATE(366)] = 9941,
  [SMALL_STATE(367)] = 9948,
  [SMALL_STATE(368)] = 9959,
  [SMALL_STATE(369)] = 9972,
  [SMALL_STATE(370)] = 9981,
  [SMALL_STATE(371)] = 9988,
  [SMALL_STATE(372)] = 9999,
  [SMALL_STATE(373)] = 10010,
  [SMALL_STATE(374)] = 10019,
  [SMALL_STATE(375)] = 10028,
  [SMALL_STATE(376)] = 10035,
  [SMALL_STATE(377)] = 10048,
  [SMALL_STATE(378)] = 10061,
  [SMALL_STATE(379)] = 10068,
  [SMALL_STATE(380)] = 10081,
  [SMALL_STATE(381)] = 10088,
  [SMALL_STATE(382)] = 10101,
  [SMALL_STATE(383)] = 10114,
  [SMALL_STATE(384)] = 10127,
  [SMALL_STATE(385)] = 10138,
  [SMALL_STATE(386)] = 10151,
  [SMALL_STATE(387)] = 10164,
  [SMALL_STATE(388)] = 10175,
  [SMALL_STATE(389)] = 10186,
  [SMALL_STATE(390)] = 10193,
  [SMALL_STATE(391)] = 10203,
  [SMALL_STATE(392)] = 10211,
  [SMALL_STATE(393)] = 10221,
  [SMALL_STATE(394)] = 10231,
  [SMALL_STATE(395)] = 10241,
  [SMALL_STATE(396)] = 10251,
  [SMALL_STATE(397)] = 10261,
  [SMALL_STATE(398)] = 10271,
  [SMALL_STATE(399)] = 10279,
  [SMALL_STATE(400)] = 10287,
  [SMALL_STATE(401)] = 10293,
  [SMALL_STATE(402)] = 10303,
  [SMALL_STATE(403)] = 10309,
  [SMALL_STATE(404)] = 10317,
  [SMALL_STATE(405)] = 10323,
  [SMALL_STATE(406)] = 10329,
  [SMALL_STATE(407)] = 10335,
  [SMALL_STATE(408)] = 10345,
  [SMALL_STATE(409)] = 10355,
  [SMALL_STATE(410)] = 10361,
  [SMALL_STATE(411)] = 10367,
  [SMALL_STATE(412)] = 10373,
  [SMALL_STATE(413)] = 10383,
  [SMALL_STATE(414)] = 10393,
  [SMALL_STATE(415)] = 10403,
  [SMALL_STATE(416)] = 10413,
  [SMALL_STATE(417)] = 10423,
  [SMALL_STATE(418)] = 10433,
  [SMALL_STATE(419)] = 10443,
  [SMALL_STATE(420)] = 10451,
  [SMALL_STATE(421)] = 10457,
  [SMALL_STATE(422)] = 10465,
  [SMALL_STATE(423)] = 10473,
  [SMALL_STATE(424)] = 10483,
  [SMALL_STATE(425)] = 10491,
  [SMALL_STATE(426)] = 10497,
  [SMALL_STATE(427)] = 10507,
  [SMALL_STATE(428)] = 10517,
  [SMALL_STATE(429)] = 10527,
  [SMALL_STATE(430)] = 10537,
  [SMALL_STATE(431)] = 10547,
  [SMALL_STATE(432)] = 10557,
  [SMALL_STATE(433)] = 10565,
  [SMALL_STATE(434)] = 10575,
  [SMALL_STATE(435)] = 10581,
  [SMALL_STATE(436)] = 10591,
  [SMALL_STATE(437)] = 10601,
  [SMALL_STATE(438)] = 10611,
  [SMALL_STATE(439)] = 10621,
  [SMALL_STATE(440)] = 10631,
  [SMALL_STATE(441)] = 10641,
  [SMALL_STATE(442)] = 10651,
  [SMALL_STATE(443)] = 10661,
  [SMALL_STATE(444)] = 10671,
  [SMALL_STATE(445)] = 10681,
  [SMALL_STATE(446)] = 10687,
  [SMALL_STATE(447)] = 10694,
  [SMALL_STATE(448)] = 10701,
  [SMALL_STATE(449)] = 10708,
  [SMALL_STATE(450)] = 10715,
  [SMALL_STATE(451)] = 10722,
  [SMALL_STATE(452)] = 10729,
  [SMALL_STATE(453)] = 10736,
  [SMALL_STATE(454)] = 10743,
  [SMALL_STATE(455)] = 10750,
  [SMALL_STATE(456)] = 10755,
  [SMALL_STATE(457)] = 10762,
  [SMALL_STATE(458)] = 10769,
  [SMALL_STATE(459)] = 10776,
  [SMALL_STATE(460)] = 10783,
  [SMALL_STATE(461)] = 10790,
  [SMALL_STATE(462)] = 10797,
  [SMALL_STATE(463)] = 10804,
  [SMALL_STATE(464)] = 10811,
  [SMALL_STATE(465)] = 10816,
  [SMALL_STATE(466)] = 10823,
  [SMALL_STATE(467)] = 10830,
  [SMALL_STATE(468)] = 10837,
  [SMALL_STATE(469)] = 10844,
  [SMALL_STATE(470)] = 10851,
  [SMALL_STATE(471)] = 10858,
  [SMALL_STATE(472)] = 10865,
  [SMALL_STATE(473)] = 10872,
  [SMALL_STATE(474)] = 10879,
  [SMALL_STATE(475)] = 10886,
  [SMALL_STATE(476)] = 10893,
  [SMALL_STATE(477)] = 10900,
  [SMALL_STATE(478)] = 10907,
  [SMALL_STATE(479)] = 10914,
  [SMALL_STATE(480)] = 10921,
  [SMALL_STATE(481)] = 10928,
  [SMALL_STATE(482)] = 10935,
  [SMALL_STATE(483)] = 10942,
  [SMALL_STATE(484)] = 10949,
  [SMALL_STATE(485)] = 10956,
  [SMALL_STATE(486)] = 10963,
  [SMALL_STATE(487)] = 10970,
  [SMALL_STATE(488)] = 10977,
  [SMALL_STATE(489)] = 10984,
  [SMALL_STATE(490)] = 10991,
  [SMALL_STATE(491)] = 10998,
  [SMALL_STATE(492)] = 11005,
  [SMALL_STATE(493)] = 11012,
  [SMALL_STATE(494)] = 11019,
  [SMALL_STATE(495)] = 11026,
  [SMALL_STATE(496)] = 11033,
  [SMALL_STATE(497)] = 11040,
  [SMALL_STATE(498)] = 11047,
  [SMALL_STATE(499)] = 11054,
  [SMALL_STATE(500)] = 11061,
  [SMALL_STATE(501)] = 11068,
  [SMALL_STATE(502)] = 11075,
  [SMALL_STATE(503)] = 11082,
  [SMALL_STATE(504)] = 11087,
  [SMALL_STATE(505)] = 11094,
  [SMALL_STATE(506)] = 11101,
  [SMALL_STATE(507)] = 11108,
  [SMALL_STATE(508)] = 11115,
  [SMALL_STATE(509)] = 11122,
  [SMALL_STATE(510)] = 11129,
  [SMALL_STATE(511)] = 11136,
  [SMALL_STATE(512)] = 11143,
  [SMALL_STATE(513)] = 11150,
  [SMALL_STATE(514)] = 11157,
  [SMALL_STATE(515)] = 11164,
  [SMALL_STATE(516)] = 11171,
  [SMALL_STATE(517)] = 11178,
  [SMALL_STATE(518)] = 11185,
  [SMALL_STATE(519)] = 11192,
  [SMALL_STATE(520)] = 11199,
  [SMALL_STATE(521)] = 11206,
  [SMALL_STATE(522)] = 11213,
  [SMALL_STATE(523)] = 11220,
  [SMALL_STATE(524)] = 11227,
  [SMALL_STATE(525)] = 11234,
  [SMALL_STATE(526)] = 11241,
  [SMALL_STATE(527)] = 11248,
  [SMALL_STATE(528)] = 11255,
  [SMALL_STATE(529)] = 11262,
  [SMALL_STATE(530)] = 11267,
  [SMALL_STATE(531)] = 11274,
  [SMALL_STATE(532)] = 11281,
  [SMALL_STATE(533)] = 11288,
  [SMALL_STATE(534)] = 11295,
  [SMALL_STATE(535)] = 11302,
  [SMALL_STATE(536)] = 11309,
  [SMALL_STATE(537)] = 11316,
  [SMALL_STATE(538)] = 11323,
  [SMALL_STATE(539)] = 11330,
  [SMALL_STATE(540)] = 11337,
  [SMALL_STATE(541)] = 11341,
  [SMALL_STATE(542)] = 11345,
  [SMALL_STATE(543)] = 11349,
  [SMALL_STATE(544)] = 11353,
  [SMALL_STATE(545)] = 11357,
  [SMALL_STATE(546)] = 11361,
  [SMALL_STATE(547)] = 11365,
  [SMALL_STATE(548)] = 11369,
  [SMALL_STATE(549)] = 11373,
  [SMALL_STATE(550)] = 11377,
  [SMALL_STATE(551)] = 11381,
  [SMALL_STATE(552)] = 11385,
  [SMALL_STATE(553)] = 11389,
  [SMALL_STATE(554)] = 11393,
  [SMALL_STATE(555)] = 11397,
  [SMALL_STATE(556)] = 11401,
  [SMALL_STATE(557)] = 11405,
  [SMALL_STATE(558)] = 11409,
  [SMALL_STATE(559)] = 11413,
  [SMALL_STATE(560)] = 11417,
  [SMALL_STATE(561)] = 11421,
  [SMALL_STATE(562)] = 11425,
  [SMALL_STATE(563)] = 11429,
  [SMALL_STATE(564)] = 11433,
  [SMALL_STATE(565)] = 11437,
  [SMALL_STATE(566)] = 11441,
  [SMALL_STATE(567)] = 11445,
  [SMALL_STATE(568)] = 11449,
  [SMALL_STATE(569)] = 11453,
  [SMALL_STATE(570)] = 11457,
  [SMALL_STATE(571)] = 11461,
  [SMALL_STATE(572)] = 11465,
  [SMALL_STATE(573)] = 11469,
  [SMALL_STATE(574)] = 11473,
  [SMALL_STATE(575)] = 11477,
  [SMALL_STATE(576)] = 11481,
  [SMALL_STATE(577)] = 11485,
  [SMALL_STATE(578)] = 11489,
  [SMALL_STATE(579)] = 11493,
  [SMALL_STATE(580)] = 11497,
  [SMALL_STATE(581)] = 11501,
  [SMALL_STATE(582)] = 11505,
  [SMALL_STATE(583)] = 11509,
  [SMALL_STATE(584)] = 11513,
  [SMALL_STATE(585)] = 11517,
  [SMALL_STATE(586)] = 11521,
  [SMALL_STATE(587)] = 11525,
  [SMALL_STATE(588)] = 11529,
  [SMALL_STATE(589)] = 11533,
  [SMALL_STATE(590)] = 11537,
  [SMALL_STATE(591)] = 11541,
  [SMALL_STATE(592)] = 11545,
  [SMALL_STATE(593)] = 11549,
  [SMALL_STATE(594)] = 11553,
  [SMALL_STATE(595)] = 11557,
  [SMALL_STATE(596)] = 11561,
  [SMALL_STATE(597)] = 11565,
  [SMALL_STATE(598)] = 11569,
  [SMALL_STATE(599)] = 11573,
  [SMALL_STATE(600)] = 11577,
  [SMALL_STATE(601)] = 11581,
  [SMALL_STATE(602)] = 11585,
  [SMALL_STATE(603)] = 11589,
  [SMALL_STATE(604)] = 11593,
  [SMALL_STATE(605)] = 11597,
  [SMALL_STATE(606)] = 11601,
  [SMALL_STATE(607)] = 11605,
  [SMALL_STATE(608)] = 11609,
  [SMALL_STATE(609)] = 11613,
  [SMALL_STATE(610)] = 11617,
  [SMALL_STATE(611)] = 11621,
  [SMALL_STATE(612)] = 11625,
  [SMALL_STATE(613)] = 11629,
  [SMALL_STATE(614)] = 11633,
  [SMALL_STATE(615)] = 11637,
  [SMALL_STATE(616)] = 11641,
  [SMALL_STATE(617)] = 11645,
  [SMALL_STATE(618)] = 11649,
  [SMALL_STATE(619)] = 11653,
  [SMALL_STATE(620)] = 11657,
  [SMALL_STATE(621)] = 11661,
  [SMALL_STATE(622)] = 11665,
  [SMALL_STATE(623)] = 11669,
  [SMALL_STATE(624)] = 11673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_DASHfoo, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(609),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(610),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(611),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(584),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_DASHsection, 6, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_DASHsection, 6, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_DASHfoo, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_DASHfoo_repeat1, 2, 0, 0),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_DASHfoo_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_DASHfoo_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_DASHfoo_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_DASHfoo, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0), SHIFT_REPEAT(39),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0), SHIFT_REPEAT(39),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0), SHIFT_REPEAT(108),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_DASHfoo_repeat2, 2, 0, 0), SHIFT_REPEAT(108),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(592),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [838] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [981] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [984] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [990] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [993] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1023] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [1170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [1200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [1221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [1256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [1269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [1272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2, 0, 0),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(599),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2, 0, 0),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2, 0, 0),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4, 0, 0),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1771] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 1),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
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

TS_PUBLIC const TSLanguage *tree_sitter_hurl(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
