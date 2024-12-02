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
#define STATE_COUNT 698
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 333
#define ALIAS_COUNT 1
#define TOKEN_COUNT 173
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_GET = 1,
  anon_sym_HEAD = 2,
  anon_sym_POST = 3,
  anon_sym_PUT = 4,
  anon_sym_DELETE = 5,
  anon_sym_CONNECT = 6,
  anon_sym_OPTIONS = 7,
  anon_sym_TRACE = 8,
  anon_sym_PATCH = 9,
  anon_sym_LINK = 10,
  anon_sym_UNLINK = 11,
  anon_sym_PURGE = 12,
  anon_sym_LOCK = 13,
  anon_sym_UNLOCK = 14,
  anon_sym_PROPFIND = 15,
  anon_sym_VIEW = 16,
  aux_sym_method_token1 = 17,
  anon_sym_HTTP_SLASH1_DOT0 = 18,
  anon_sym_HTTP_SLASH1_DOT1 = 19,
  anon_sym_HTTP_SLASH2 = 20,
  anon_sym_HTTP_SLASH_STAR = 21,
  anon_sym_HTTP = 22,
  aux_sym_status_token1 = 23,
  anon_sym_STAR = 24,
  anon_sym_LBRACKQueryStringParams_RBRACK = 25,
  anon_sym_LBRACKQuery_RBRACK = 26,
  anon_sym_LBRACKFormParams_RBRACK = 27,
  anon_sym_LBRACKForm_RBRACK = 28,
  anon_sym_LBRACKMultipartFormData_RBRACK = 29,
  anon_sym_LBRACKMultipart_RBRACK = 30,
  anon_sym_LBRACKCookies_RBRACK = 31,
  anon_sym_LBRACKCaptures_RBRACK = 32,
  anon_sym_LBRACKAsserts_RBRACK = 33,
  anon_sym_LBRACKBasicAuth_RBRACK = 34,
  anon_sym_LBRACKOptions_RBRACK = 35,
  anon_sym_COLON = 36,
  anon_sym_null = 37,
  anon_sym_COLON2 = 38,
  anon_sym_file_COMMA = 39,
  anon_sym_SEMI = 40,
  aux_sym_file_value_token1 = 41,
  anon_sym_cacert = 42,
  anon_sym_compressed = 43,
  anon_sym_location = 44,
  anon_sym_insecure = 45,
  anon_sym_max_DASHredirs = 46,
  anon_sym_path_DASHas_DASHis = 47,
  anon_sym_proxy = 48,
  anon_sym_retry = 49,
  anon_sym_retry_DASHinterval = 50,
  anon_sym_variable = 51,
  anon_sym_verbose = 52,
  anon_sym_very_DASHverbose = 53,
  anon_sym_retry_DASHmax_DASHcount = 54,
  anon_sym_EQ = 55,
  sym_status_query = 56,
  sym_url_query = 57,
  anon_sym_header = 58,
  anon_sym_certificate = 59,
  anon_sym_Subject = 60,
  anon_sym_Issuer = 61,
  anon_sym_Start_DASHDate = 62,
  anon_sym_Expire_DASHDate = 63,
  anon_sym_Serial_DASHNumber = 64,
  anon_sym_cookie = 65,
  sym_body_query = 66,
  anon_sym_xpath = 67,
  anon_sym_jsonpath = 68,
  anon_sym_regex = 69,
  sym_duration_query = 70,
  sym_sha256_query = 71,
  sym_md5_query = 72,
  sym_bytes_query = 73,
  anon_sym_not = 74,
  anon_sym_exists = 75,
  anon_sym_isInteger = 76,
  anon_sym_isFloat = 77,
  anon_sym_isBoolean = 78,
  anon_sym_isString = 79,
  anon_sym_isCollection = 80,
  anon_sym_equals = 81,
  anon_sym_EQ_EQ = 82,
  anon_sym_notEquals = 83,
  anon_sym_BANG_EQ = 84,
  anon_sym_greaterThan = 85,
  anon_sym_GT = 86,
  anon_sym_greaterThanOrEquals = 87,
  anon_sym_GT_EQ = 88,
  anon_sym_lessThan = 89,
  anon_sym_LT = 90,
  anon_sym_lessThanOrEquals = 91,
  anon_sym_LT_EQ = 92,
  anon_sym_startsWith = 93,
  anon_sym_endsWith = 94,
  anon_sym_contains = 95,
  anon_sym_matches = 96,
  anon_sym_includes = 97,
  anon_sym_LT_QMARK = 98,
  aux_sym_xml_prolog_tag_token1 = 99,
  anon_sym_QMARK_GT = 100,
  aux_sym_xml_open_tag_token1 = 101,
  anon_sym_LT_SLASH = 102,
  aux_sym_xml_close_tag_token1 = 103,
  anon_sym_base64_COMMA = 104,
  aux_sym_oneline_base64_token1 = 105,
  anon_sym_hex_COMMA = 106,
  anon_sym_DQUOTE = 107,
  sym_quoted_string_text = 108,
  anon_sym_BSLASH = 109,
  anon_sym_b = 110,
  anon_sym_f = 111,
  anon_sym_n = 112,
  anon_sym_r = 113,
  anon_sym_t = 114,
  anon_sym_u = 115,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 116,
  sym_key_string_text = 117,
  anon_sym_BSLASH2 = 118,
  aux_sym_key_string_escaped_char_token1 = 119,
  aux_sym_value_string_text_token1 = 120,
  anon_sym_POUND = 121,
  anon_sym_BQUOTE = 122,
  aux_sym_oneline_string_text_token1 = 123,
  aux_sym_oneline_string_text_token2 = 124,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 125,
  anon_sym_LF = 126,
  anon_sym_base64 = 127,
  anon_sym_hex = 128,
  anon_sym_json = 129,
  anon_sym_xml = 130,
  anon_sym_graphql = 131,
  aux_sym_multiline_string_type_token1 = 132,
  aux_sym__multiline_string_text_token1 = 133,
  anon_sym_LBRACE = 134,
  sym_filename_text = 135,
  aux_sym_filename_escaped_char_token1 = 136,
  anon_sym_RBRACE = 137,
  anon_sym_COMMA = 138,
  anon_sym_LBRACK = 139,
  anon_sym_RBRACK = 140,
  sym_json_string_text = 141,
  anon_sym_LBRACE_LBRACE = 142,
  anon_sym_RBRACE_RBRACE = 143,
  aux_sym_variable_name_token1 = 144,
  aux_sym_variable_name_token2 = 145,
  anon_sym_count = 146,
  anon_sym_urlEncode = 147,
  anon_sym_urlDecode = 148,
  anon_sym_toInt = 149,
  anon_sym_htmlEscape = 150,
  anon_sym_htmlUnescape = 151,
  anon_sym_daysAfterNow = 152,
  anon_sym_daysBeforeNow = 153,
  anon_sym_decode = 154,
  anon_sym_format = 155,
  anon_sym_toDate = 156,
  anon_sym_nth = 157,
  anon_sym_replace = 158,
  anon_sym_split = 159,
  anon_sym_true = 160,
  anon_sym_false = 161,
  sym_digit = 162,
  sym_hexdigit = 163,
  anon_sym_DOT = 164,
  anon_sym_e = 165,
  anon_sym_E = 166,
  anon_sym_PLUS = 167,
  anon_sym_DASH = 168,
  sym_comment = 169,
  anon_sym_SLASH = 170,
  sym_regex_text = 171,
  aux_sym_regex_escaped_char_token1 = 172,
  sym_hurl_file = 173,
  sym_entry = 174,
  sym_request = 175,
  sym_response = 176,
  sym_method = 177,
  sym_version = 178,
  sym_status = 179,
  sym_header = 180,
  sym_body = 181,
  sym_request_section = 182,
  sym_response_section = 183,
  sym_query_string_params_section = 184,
  sym_form_params_section = 185,
  sym_multipart_form_data_section = 186,
  sym_cookies_section = 187,
  sym_captures_section = 188,
  sym_asserts_section = 189,
  sym_basic_auth_section = 190,
  sym_options_section = 191,
  sym_key_value = 192,
  sym_multipart_form_data_param = 193,
  sym_file_param = 194,
  sym_file_value = 195,
  sym_capture = 196,
  sym_assert = 197,
  sym_option = 198,
  sym_ca_certificate_option = 199,
  sym_compressed_option = 200,
  sym_follow_redirect_option = 201,
  sym_insecure_option = 202,
  sym_max_redirs_option = 203,
  sym_path_as_is_option = 204,
  sym_proxy_option = 205,
  sym_retry_option = 206,
  sym_retry_interval_option = 207,
  sym_variable_option = 208,
  sym_verbose_option = 209,
  sym_very_verbose_option = 210,
  sym_retry_max_count_option = 211,
  sym_variable_definition = 212,
  sym_boolean_option = 213,
  sym_variable_value = 214,
  sym_query = 215,
  sym_header_query = 216,
  sym_certificate_query = 217,
  sym_cookie_query = 218,
  sym_xpath_query = 219,
  sym_jsonpath_query = 220,
  sym_regex_query = 221,
  sym_variable_query = 222,
  sym_predicate = 223,
  sym_predicate_func = 224,
  sym_equal_predicate = 225,
  sym_not_equal_predicate = 226,
  sym_greater_predicate = 227,
  sym_greater_or_equal_predicate = 228,
  sym_less_predicate = 229,
  sym_less_or_equal_predicate = 230,
  sym_start_with_predicate = 231,
  sym_end_with_predicate = 232,
  sym_contain_predicate = 233,
  sym_match_predicate = 234,
  sym_include_predicate = 235,
  sym_predicate_value = 236,
  sym_bytes = 237,
  sym_xml = 238,
  sym_xml_prolog_tag = 239,
  sym_xml_tag = 240,
  sym_xml_open_tag = 241,
  sym_xml_close_tag = 242,
  sym_oneline_base64 = 243,
  sym_oneline_file = 244,
  sym_oneline_hex = 245,
  sym_quoted_string = 246,
  sym_quoted_string_content = 247,
  sym_quoted_string_escaped_char = 248,
  sym_invalid_quoted_string_escaped_char = 249,
  sym_key_string = 250,
  sym_key_string_content = 251,
  sym_key_string_escaped_char = 252,
  sym_value_string = 253,
  sym_value_string_content = 254,
  sym_value_string_text = 255,
  sym_value_string_escaped_char = 256,
  sym_oneline_string = 257,
  sym_oneline_string_content = 258,
  sym_oneline_string_text = 259,
  sym_oneline_string_escaped_char = 260,
  sym_multiline_string = 261,
  sym_multiline_string_type = 262,
  sym_multiline_string_content = 263,
  sym__multiline_string_text = 264,
  sym_multiline_string_escaped_char = 265,
  sym_filename = 266,
  sym_filename_content = 267,
  sym_filename_escaped_char = 268,
  sym_unicode_char = 269,
  sym_json_value = 270,
  sym_json_object = 271,
  sym_json_key_value = 272,
  sym_json_key_string = 273,
  sym_json_array = 274,
  sym_json_string = 275,
  sym_json_string_content = 276,
  sym_json_string_escaped_char = 277,
  sym_json_number = 278,
  sym_template = 279,
  sym_expr = 280,
  sym_variable_name = 281,
  sym_filter = 282,
  sym_regex_filter = 283,
  sym_nth_filter = 284,
  sym_replace_filter = 285,
  sym_split_filter = 286,
  sym_xpath_filter = 287,
  sym_boolean = 288,
  sym_integer = 289,
  sym_float = 290,
  sym_fraction = 291,
  sym_exponent = 292,
  sym_lt = 293,
  sym_regex = 294,
  sym_regex_content = 295,
  sym_regex_escaped_char = 296,
  aux_sym_hurl_file_repeat1 = 297,
  aux_sym_hurl_file_repeat2 = 298,
  aux_sym_request_repeat1 = 299,
  aux_sym_request_repeat2 = 300,
  aux_sym_response_repeat1 = 301,
  aux_sym_query_string_params_section_repeat1 = 302,
  aux_sym_form_params_section_repeat1 = 303,
  aux_sym_multipart_form_data_section_repeat1 = 304,
  aux_sym_captures_section_repeat1 = 305,
  aux_sym_asserts_section_repeat1 = 306,
  aux_sym_options_section_repeat1 = 307,
  aux_sym_capture_repeat1 = 308,
  aux_sym_assert_repeat1 = 309,
  aux_sym_xml_repeat1 = 310,
  aux_sym_xml_tag_repeat1 = 311,
  aux_sym_oneline_hex_repeat1 = 312,
  aux_sym_quoted_string_repeat1 = 313,
  aux_sym_quoted_string_content_repeat1 = 314,
  aux_sym_key_string_repeat1 = 315,
  aux_sym_key_string_content_repeat1 = 316,
  aux_sym_value_string_repeat1 = 317,
  aux_sym_value_string_content_repeat1 = 318,
  aux_sym_value_string_text_repeat1 = 319,
  aux_sym_oneline_string_repeat1 = 320,
  aux_sym_oneline_string_content_repeat1 = 321,
  aux_sym_multiline_string_repeat1 = 322,
  aux_sym_multiline_string_content_repeat1 = 323,
  aux_sym__multiline_string_text_repeat1 = 324,
  aux_sym_filename_repeat1 = 325,
  aux_sym_filename_content_repeat1 = 326,
  aux_sym_json_object_repeat1 = 327,
  aux_sym_json_array_repeat1 = 328,
  aux_sym_json_string_repeat1 = 329,
  aux_sym_integer_repeat1 = 330,
  aux_sym_lt_repeat1 = 331,
  aux_sym_regex_content_repeat1 = 332,
  anon_alias_sym_json_key_string = 333,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKQuery_RBRACK] = "[Query]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKForm_RBRACK] = "[Form]",
  [anon_sym_LBRACKMultipartFormData_RBRACK] = "[MultipartFormData]",
  [anon_sym_LBRACKMultipart_RBRACK] = "[Multipart]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [anon_sym_LBRACKCaptures_RBRACK] = "[Captures]",
  [anon_sym_LBRACKAsserts_RBRACK] = "[Asserts]",
  [anon_sym_LBRACKBasicAuth_RBRACK] = "[BasicAuth]",
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
  [anon_sym_variable] = "variable",
  [anon_sym_verbose] = "verbose",
  [anon_sym_very_DASHverbose] = "very-verbose",
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_EQ] = "=",
  [sym_status_query] = "status_query",
  [sym_url_query] = "url_query",
  [anon_sym_header] = "header",
  [anon_sym_certificate] = "certificate",
  [anon_sym_Subject] = "Subject",
  [anon_sym_Issuer] = "Issuer",
  [anon_sym_Start_DASHDate] = "Start-Date",
  [anon_sym_Expire_DASHDate] = "Expire-Date",
  [anon_sym_Serial_DASHNumber] = "Serial-Number",
  [anon_sym_cookie] = "cookie",
  [sym_body_query] = "body_query",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_regex] = "regex",
  [sym_duration_query] = "duration_query",
  [sym_sha256_query] = "sha256_query",
  [sym_md5_query] = "md5_query",
  [sym_bytes_query] = "bytes_query",
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
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [aux_sym_invalid_quoted_string_escaped_char_token1] = "invalid_quoted_string_escaped_char_token1",
  [sym_key_string_text] = "key_string_text",
  [anon_sym_BSLASH2] = "\\",
  [aux_sym_key_string_escaped_char_token1] = "key_string_escaped_char_token1",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [aux_sym_oneline_string_text_token2] = "oneline_string_text_token2",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_LF] = "\n",
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
  [sym_hurl_file] = "hurl_file",
  [sym_entry] = "entry",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_method] = "method",
  [sym_version] = "version",
  [sym_status] = "status",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_request_section] = "request_section",
  [sym_response_section] = "response_section",
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym_multipart_form_data_section] = "multipart_form_data_section",
  [sym_cookies_section] = "cookies_section",
  [sym_captures_section] = "captures_section",
  [sym_asserts_section] = "asserts_section",
  [sym_basic_auth_section] = "basic_auth_section",
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
  [sym_variable_option] = "variable_option",
  [sym_verbose_option] = "verbose_option",
  [sym_very_verbose_option] = "very_verbose_option",
  [sym_retry_max_count_option] = "retry_max_count_option",
  [sym_variable_definition] = "variable_definition",
  [sym_boolean_option] = "boolean_option",
  [sym_variable_value] = "variable_value",
  [sym_query] = "query",
  [sym_header_query] = "header_query",
  [sym_certificate_query] = "certificate_query",
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
  [sym_quoted_string_escaped_char] = "quoted_string_escaped_char",
  [sym_invalid_quoted_string_escaped_char] = "invalid_quoted_string_escaped_char",
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
  [sym_lt] = "lt",
  [sym_regex] = "regex",
  [sym_regex_content] = "regex_content",
  [sym_regex_escaped_char] = "regex_escaped_char",
  [aux_sym_hurl_file_repeat1] = "hurl_file_repeat1",
  [aux_sym_hurl_file_repeat2] = "hurl_file_repeat2",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_query_string_params_section_repeat1] = "query_string_params_section_repeat1",
  [aux_sym_form_params_section_repeat1] = "form_params_section_repeat1",
  [aux_sym_multipart_form_data_section_repeat1] = "multipart_form_data_section_repeat1",
  [aux_sym_captures_section_repeat1] = "captures_section_repeat1",
  [aux_sym_asserts_section_repeat1] = "asserts_section_repeat1",
  [aux_sym_options_section_repeat1] = "options_section_repeat1",
  [aux_sym_capture_repeat1] = "capture_repeat1",
  [aux_sym_assert_repeat1] = "assert_repeat1",
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
  [aux_sym_lt_repeat1] = "lt_repeat1",
  [aux_sym_regex_content_repeat1] = "regex_content_repeat1",
  [anon_alias_sym_json_key_string] = "json_key_string",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKQuery_RBRACK] = anon_sym_LBRACKQuery_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKForm_RBRACK] = anon_sym_LBRACKForm_RBRACK,
  [anon_sym_LBRACKMultipartFormData_RBRACK] = anon_sym_LBRACKMultipartFormData_RBRACK,
  [anon_sym_LBRACKMultipart_RBRACK] = anon_sym_LBRACKMultipart_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [anon_sym_LBRACKCaptures_RBRACK] = anon_sym_LBRACKCaptures_RBRACK,
  [anon_sym_LBRACKAsserts_RBRACK] = anon_sym_LBRACKAsserts_RBRACK,
  [anon_sym_LBRACKBasicAuth_RBRACK] = anon_sym_LBRACKBasicAuth_RBRACK,
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
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_very_DASHverbose] = anon_sym_very_DASHverbose,
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_status_query] = sym_status_query,
  [sym_url_query] = sym_url_query,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_certificate] = anon_sym_certificate,
  [anon_sym_Subject] = anon_sym_Subject,
  [anon_sym_Issuer] = anon_sym_Issuer,
  [anon_sym_Start_DASHDate] = anon_sym_Start_DASHDate,
  [anon_sym_Expire_DASHDate] = anon_sym_Expire_DASHDate,
  [anon_sym_Serial_DASHNumber] = anon_sym_Serial_DASHNumber,
  [anon_sym_cookie] = anon_sym_cookie,
  [sym_body_query] = sym_body_query,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_regex] = anon_sym_regex,
  [sym_duration_query] = sym_duration_query,
  [sym_sha256_query] = sym_sha256_query,
  [sym_md5_query] = sym_md5_query,
  [sym_bytes_query] = sym_bytes_query,
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
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [aux_sym_invalid_quoted_string_escaped_char_token1] = aux_sym_invalid_quoted_string_escaped_char_token1,
  [sym_key_string_text] = sym_key_string_text,
  [anon_sym_BSLASH2] = anon_sym_BSLASH,
  [aux_sym_key_string_escaped_char_token1] = aux_sym_key_string_escaped_char_token1,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [aux_sym_oneline_string_text_token2] = aux_sym_oneline_string_text_token2,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_LF] = anon_sym_LF,
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
  [sym_hurl_file] = sym_hurl_file,
  [sym_entry] = sym_entry,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_method] = sym_method,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_request_section] = sym_request_section,
  [sym_response_section] = sym_response_section,
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym_multipart_form_data_section] = sym_multipart_form_data_section,
  [sym_cookies_section] = sym_cookies_section,
  [sym_captures_section] = sym_captures_section,
  [sym_asserts_section] = sym_asserts_section,
  [sym_basic_auth_section] = sym_basic_auth_section,
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
  [sym_variable_option] = sym_variable_option,
  [sym_verbose_option] = sym_verbose_option,
  [sym_very_verbose_option] = sym_very_verbose_option,
  [sym_retry_max_count_option] = sym_retry_max_count_option,
  [sym_variable_definition] = sym_variable_definition,
  [sym_boolean_option] = sym_boolean_option,
  [sym_variable_value] = sym_variable_value,
  [sym_query] = sym_query,
  [sym_header_query] = sym_header_query,
  [sym_certificate_query] = sym_certificate_query,
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
  [sym_quoted_string_escaped_char] = sym_quoted_string_escaped_char,
  [sym_invalid_quoted_string_escaped_char] = sym_invalid_quoted_string_escaped_char,
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
  [sym_lt] = sym_lt,
  [sym_regex] = sym_regex,
  [sym_regex_content] = sym_regex_content,
  [sym_regex_escaped_char] = sym_regex_escaped_char,
  [aux_sym_hurl_file_repeat1] = aux_sym_hurl_file_repeat1,
  [aux_sym_hurl_file_repeat2] = aux_sym_hurl_file_repeat2,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_query_string_params_section_repeat1] = aux_sym_query_string_params_section_repeat1,
  [aux_sym_form_params_section_repeat1] = aux_sym_form_params_section_repeat1,
  [aux_sym_multipart_form_data_section_repeat1] = aux_sym_multipart_form_data_section_repeat1,
  [aux_sym_captures_section_repeat1] = aux_sym_captures_section_repeat1,
  [aux_sym_asserts_section_repeat1] = aux_sym_asserts_section_repeat1,
  [aux_sym_options_section_repeat1] = aux_sym_options_section_repeat1,
  [aux_sym_capture_repeat1] = aux_sym_capture_repeat1,
  [aux_sym_assert_repeat1] = aux_sym_assert_repeat1,
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
  [aux_sym_lt_repeat1] = aux_sym_lt_repeat1,
  [aux_sym_regex_content_repeat1] = aux_sym_regex_content_repeat1,
  [anon_alias_sym_json_key_string] = anon_alias_sym_json_key_string,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKQuery_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKForm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipartFormData_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipart_RBRACK] = {
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
  [anon_sym_LBRACKBasicAuth_RBRACK] = {
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
  [anon_sym_retry_DASHmax_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_status_query] = {
    .visible = true,
    .named = true,
  },
  [sym_url_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_certificate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Subject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Issuer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Start_DASHDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expire_DASHDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Serial_DASHNumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cookie] = {
    .visible = true,
    .named = false,
  },
  [sym_body_query] = {
    .visible = true,
    .named = true,
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
  [sym_duration_query] = {
    .visible = true,
    .named = true,
  },
  [sym_sha256_query] = {
    .visible = true,
    .named = true,
  },
  [sym_md5_query] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_query] = {
    .visible = true,
    .named = true,
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
  [aux_sym_invalid_quoted_string_escaped_char_token1] = {
    .visible = false,
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
  [anon_sym_LF] = {
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
  [sym_hurl_file] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
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
  [sym_request_section] = {
    .visible = true,
    .named = true,
  },
  [sym_response_section] = {
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
  [sym_basic_auth_section] = {
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
  [sym_retry_max_count_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_option] = {
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
  [sym_certificate_query] = {
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
  [sym_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_quoted_string_escaped_char] = {
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
  [sym_lt] = {
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
  [aux_sym_hurl_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hurl_file_repeat2] = {
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
  [aux_sym_form_params_section_repeat1] = {
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
  [aux_sym_assert_repeat1] = {
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
  [aux_sym_lt_repeat1] = {
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
  [30] = 19,
  [31] = 18,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
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
  [88] = 19,
  [89] = 18,
  [90] = 90,
  [91] = 85,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 29,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 84,
  [112] = 85,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 19,
  [135] = 18,
  [136] = 136,
  [137] = 96,
  [138] = 138,
  [139] = 139,
  [140] = 92,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 48,
  [145] = 145,
  [146] = 18,
  [147] = 19,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 48,
  [165] = 165,
  [166] = 85,
  [167] = 167,
  [168] = 84,
  [169] = 169,
  [170] = 48,
  [171] = 171,
  [172] = 19,
  [173] = 18,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 23,
  [178] = 18,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 158,
  [183] = 154,
  [184] = 184,
  [185] = 185,
  [186] = 19,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 190,
  [191] = 190,
  [192] = 192,
  [193] = 117,
  [194] = 124,
  [195] = 123,
  [196] = 133,
  [197] = 118,
  [198] = 119,
  [199] = 129,
  [200] = 127,
  [201] = 131,
  [202] = 132,
  [203] = 126,
  [204] = 130,
  [205] = 121,
  [206] = 128,
  [207] = 125,
  [208] = 122,
  [209] = 120,
  [210] = 210,
  [211] = 116,
  [212] = 212,
  [213] = 213,
  [214] = 213,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 216,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 57,
  [226] = 58,
  [227] = 227,
  [228] = 57,
  [229] = 58,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 78,
  [247] = 77,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 243,
  [255] = 48,
  [256] = 242,
  [257] = 239,
  [258] = 250,
  [259] = 77,
  [260] = 78,
  [261] = 261,
  [262] = 244,
  [263] = 251,
  [264] = 243,
  [265] = 242,
  [266] = 266,
  [267] = 267,
  [268] = 266,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 48,
  [280] = 267,
  [281] = 275,
  [282] = 266,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 79,
  [287] = 287,
  [288] = 80,
  [289] = 287,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 84,
  [297] = 294,
  [298] = 85,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 287,
  [303] = 18,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 90,
  [311] = 80,
  [312] = 312,
  [313] = 83,
  [314] = 314,
  [315] = 315,
  [316] = 86,
  [317] = 82,
  [318] = 90,
  [319] = 90,
  [320] = 87,
  [321] = 290,
  [322] = 292,
  [323] = 323,
  [324] = 82,
  [325] = 19,
  [326] = 293,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 327,
  [332] = 332,
  [333] = 79,
  [334] = 294,
  [335] = 335,
  [336] = 82,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 86,
  [341] = 82,
  [342] = 342,
  [343] = 338,
  [344] = 344,
  [345] = 345,
  [346] = 87,
  [347] = 347,
  [348] = 87,
  [349] = 337,
  [350] = 350,
  [351] = 351,
  [352] = 338,
  [353] = 353,
  [354] = 354,
  [355] = 82,
  [356] = 82,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 83,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 360,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 380,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
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
  [406] = 87,
  [407] = 407,
  [408] = 408,
  [409] = 370,
  [410] = 82,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 383,
  [415] = 415,
  [416] = 81,
  [417] = 417,
  [418] = 396,
  [419] = 396,
  [420] = 403,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 82,
  [426] = 426,
  [427] = 427,
  [428] = 87,
  [429] = 403,
  [430] = 430,
  [431] = 82,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 82,
  [442] = 442,
  [443] = 82,
  [444] = 444,
  [445] = 445,
  [446] = 383,
  [447] = 394,
  [448] = 448,
  [449] = 449,
  [450] = 449,
  [451] = 451,
  [452] = 344,
  [453] = 453,
  [454] = 379,
  [455] = 415,
  [456] = 372,
  [457] = 457,
  [458] = 458,
  [459] = 337,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 82,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 479,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 462,
  [491] = 464,
  [492] = 465,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 476,
  [497] = 471,
  [498] = 94,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 502,
  [504] = 504,
  [505] = 505,
  [506] = 502,
  [507] = 502,
  [508] = 502,
  [509] = 502,
  [510] = 502,
  [511] = 502,
  [512] = 502,
  [513] = 502,
  [514] = 502,
  [515] = 502,
  [516] = 502,
  [517] = 483,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 393,
  [525] = 525,
  [526] = 475,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 493,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 468,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 330,
  [550] = 550,
  [551] = 469,
  [552] = 522,
  [553] = 470,
  [554] = 554,
  [555] = 555,
  [556] = 472,
  [557] = 557,
  [558] = 312,
  [559] = 547,
  [560] = 309,
  [561] = 547,
  [562] = 562,
  [563] = 522,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 485,
  [568] = 463,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 377,
  [574] = 574,
  [575] = 569,
  [576] = 576,
  [577] = 566,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 578,
  [587] = 579,
  [588] = 582,
  [589] = 583,
  [590] = 584,
  [591] = 569,
  [592] = 547,
  [593] = 593,
  [594] = 594,
  [595] = 576,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 581,
  [600] = 308,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 615,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 618,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 631,
  [642] = 642,
  [643] = 606,
  [644] = 644,
  [645] = 606,
  [646] = 612,
  [647] = 631,
  [648] = 606,
  [649] = 631,
  [650] = 606,
  [651] = 631,
  [652] = 606,
  [653] = 632,
  [654] = 606,
  [655] = 606,
  [656] = 606,
  [657] = 606,
  [658] = 606,
  [659] = 606,
  [660] = 606,
  [661] = 661,
  [662] = 662,
  [663] = 638,
  [664] = 621,
  [665] = 623,
  [666] = 642,
  [667] = 605,
  [668] = 642,
  [669] = 669,
  [670] = 642,
  [671] = 671,
  [672] = 642,
  [673] = 673,
  [674] = 642,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 612,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 605,
  [683] = 605,
  [684] = 605,
  [685] = 605,
  [686] = 686,
  [687] = 675,
  [688] = 675,
  [689] = 675,
  [690] = 675,
  [691] = 675,
  [692] = 619,
  [693] = 619,
  [694] = 619,
  [695] = 619,
  [696] = 619,
  [697] = 631,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '!', 57,
        '"', 768,
        '#', 954,
        '*', 664,
        '+', 1045,
        ',', 1002,
        '-', 1046,
        '.', 1039,
        '/', 1048,
        ':', 687,
        ';', 692,
        '<', 744,
        '=', 708,
        '>', 740,
        '?', 59,
        'E', 1044,
        '[', 1004,
        '\\', 947,
        ']', 1009,
        '`', 956,
        'b', 773,
        'e', 1041,
        'f', 774,
        'n', 775,
        'r', 776,
        't', 777,
        'u', 778,
        '{', 995,
        '}', 1001,
        'a', 1017,
        'c', 1017,
        'd', 1017,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(656);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1017);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        '[', 1008,
        '\\', 947,
        '`', 956,
        'b', 859,
        'f', 860,
        'h', 872,
        'n', 938,
        't', 911,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        '[', 1007,
        '`', 956,
        'b', 116,
        'f', 98,
        'h', 213,
        'n', 517,
        't', 404,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        '[', 1006,
        '\\', 947,
        '`', 956,
        'b', 859,
        'f', 860,
        'h', 872,
        'n', 938,
        't', 911,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        '[', 1005,
        '`', 956,
        'b', 116,
        'f', 98,
        'h', 213,
        'n', 517,
        't', 404,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 963,
        '#', 1047,
        '.', 1039,
        'E', 1043,
        'c', 374,
        'd', 107,
        'e', 1041,
        'f', 370,
        'h', 486,
        'n', 489,
        'r', 200,
        's', 377,
        't', 346,
        'u', 411,
        'x', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(963);
      if (lookahead == '#') ADVANCE(1047);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '\\') ADVANCE(947);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(963);
      if (lookahead == '#') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'n') ADVANCE(952);
      if (lookahead == 't') ADVANCE(951);
      if (lookahead == '{') ADVANCE(953);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      if (lookahead != 0) ADVANCE(949);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(963);
      if (lookahead == '#') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(953);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(949);
      if (lookahead != 0) ADVANCE(949);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(963);
      if (lookahead == '#') ADVANCE(1047);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(963);
      if (lookahead == '#') ADVANCE(1047);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(56);
      if (lookahead == '<') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(953);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(949);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(964);
      if (lookahead == ' ') SKIP(12);
      if (lookahead == '#') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(998);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(999);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(82);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(953);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(949);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '`') ADVANCE(956);
      if (lookahead == '{') ADVANCE(995);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(992);
      if (lookahead != 0) ADVANCE(993);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '`') ADVANCE(955);
      if (lookahead == '{') ADVANCE(959);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(957);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '/') ADVANCE(1048);
      if (lookahead == '\\') ADVANCE(772);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1049);
      if (lookahead != 0) ADVANCE(1050);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(765);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(1051);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == 'b') ADVANCE(976);
      if (lookahead == 'g') ADVANCE(987);
      if (lookahead == 'h') ADVANCE(977);
      if (lookahead == 'j') ADVANCE(988);
      if (lookahead == 'x') ADVANCE(982);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '!', 57,
        '"', 768,
        '+', 1045,
        ',', 1002,
        '-', 1046,
        '/', 1048,
        ':', 690,
        '<', 746,
        '=', 58,
        '>', 740,
        'E', 541,
        'I', 461,
        'S', 235,
        '[', 1003,
        ']', 1009,
        '`', 91,
        'b', 116,
        'c', 349,
        'd', 107,
        'e', 329,
        'f', 99,
        'g', 420,
        'h', 214,
        'i', 330,
        'l', 238,
        'm', 128,
        'n', 365,
        'r', 200,
        's', 378,
        't', 347,
        'u', 411,
        'x', 383,
        '{', 995,
        '}', 548,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '!', 57,
        ',', 1002,
        '.', 1039,
        '<', 746,
        '=', 58,
        '>', 740,
        'E', 1043,
        ']', 1009,
        'c', 349,
        'd', 107,
        'e', 1042,
        'f', 370,
        'g', 420,
        'h', 486,
        'i', 330,
        'l', 238,
        'm', 128,
        'n', 364,
        'r', 200,
        's', 378,
        't', 346,
        'u', 411,
        'x', 383,
        '{', 994,
        '}', 548,
        '"', 948,
        '#', 948,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '!', 57,
        ',', 1002,
        '.', 1039,
        '<', 746,
        '=', 58,
        '>', 740,
        'E', 1043,
        ']', 1009,
        'c', 349,
        'd', 107,
        'e', 1042,
        'f', 370,
        'g', 420,
        'h', 486,
        'i', 330,
        'l', 238,
        'm', 128,
        'n', 364,
        'r', 200,
        's', 378,
        't', 346,
        'u', 411,
        'x', 383,
        '{', 994,
        '}', 548,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 768,
        '#', 954,
        ',', 1000,
        ';', 692,
        '\\', 947,
        'f', 861,
        'n', 938,
        't', 911,
        '{', 547,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '"', 768,
        '#', 954,
        ',', 1000,
        ';', 692,
        'f', 97,
        'n', 517,
        't', 404,
        '{', 547,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '"', 768,
        '#', 954,
        '\\', 772,
        '`', 955,
        'b', 773,
        'f', 774,
        'n', 775,
        'r', 776,
        't', 777,
        'u', 778,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '"', 768,
        ',', 1002,
        '.', 1039,
        ':', 690,
        '<', 747,
        '=', 707,
        '>', 739,
        'E', 1043,
        ']', 1009,
        'b', 345,
        'c', 217,
        'd', 522,
        'e', 1041,
        'h', 225,
        'j', 451,
        'm', 171,
        'r', 211,
        's', 259,
        'u', 405,
        'v', 118,
        'x', 383,
        '}', 1001,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '"', 768,
        '\\', 772,
        'b', 773,
        'f', 774,
        'n', 775,
        'r', 776,
        't', 777,
        'u', 778,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(27);
      if (lookahead == '\n' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(780);
      if (lookahead != 0) ADVANCE(779);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(770);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(769);
      if (lookahead != 0) ADVANCE(771);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(1011);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(1010);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '*', 664,
        '=', 707,
        'c', 374,
        'd', 107,
        'f', 370,
        'h', 486,
        'n', 489,
        'r', 200,
        's', 377,
        't', 346,
        'u', 411,
        'x', 383,
        '}', 548,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(660);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(659);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(767);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(691);
      END_STATE();
    case 34:
      if (lookahead == ',') ADVANCE(764);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(533);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(414);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(657);
      if (lookahead == '1') ADVANCE(658);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == '4') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == '5') ADVANCE(725);
      END_STATE();
    case 48:
      if (lookahead == '5') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == '6') ADVANCE(724);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '\\') ADVANCE(947);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(690);
      if (lookahead == '\\') ADVANCE(947);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(690);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == ';') ADVANCE(692);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(998);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(999);
      END_STATE();
    case 55:
      if (lookahead == ';') ADVANCE(692);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 56:
      if (lookahead == '<') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(737);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(735);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(758);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'B') ADVANCE(209);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(518);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(362);
      if (lookahead == 'C') ADVANCE(360);
      if (lookahead == 'F') ADVANCE(302);
      if (lookahead == 'I') ADVANCE(338);
      if (lookahead == 'S') ADVANCE(500);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(335);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(145);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(466);
      if (lookahead == 'U') ADVANCE(339);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(387);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(367);
      if (lookahead == ']') ADVANCE(675);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(519);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(348);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == ']') ADVANCE(671);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'S') ADVANCE(492);
      if (lookahead == ']') ADVANCE(667);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(260);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(261);
      END_STATE();
    case 80:
      if (lookahead == 'W') ADVANCE(280);
      END_STATE();
    case 81:
      if (lookahead == 'W') ADVANCE(282);
      END_STATE();
    case 82:
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '{') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(681);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(677);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(685);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(679);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(683);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(669);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(673);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(665);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(962);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'y') ADVANCE(507);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(286);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(301);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(363);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(695);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(1024);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 242:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 243:
      if (lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 244:
      if (lookahead == 'f') ADVANCE(511);
      END_STATE();
    case 245:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 246:
      if (lookahead == 'g') ADVANCE(732);
      END_STATE();
    case 247:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 248:
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 252:
      if (lookahead == 'h') ADVANCE(720);
      END_STATE();
    case 253:
      if (lookahead == 'h') ADVANCE(721);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(1030);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(751);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(750);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 286:
      if (lookahead == 'j') ADVANCE(218);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(266);
      END_STATE();
    case 288:
      if (lookahead == 'k') ADVANCE(274);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(688);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 312:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 313:
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 314:
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 318:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'q') ADVANCE(524);
      if (lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'y') ADVANCE(507);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 386:
      if (lookahead == 'q') ADVANCE(529);
      END_STATE();
    case 387:
      if (lookahead == 'q') ADVANCE(530);
      END_STATE();
    case 388:
      if (lookahead == 'q') ADVANCE(531);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(727);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 514:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 515:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 516:
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 517:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 518:
      if (lookahead == 'u') ADVANCE(469);
      END_STATE();
    case 519:
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 520:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 521:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 522:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 523:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 526:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 527:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 532:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 533:
      if (lookahead == 'v') ADVANCE(222);
      END_STATE();
    case 534:
      if (lookahead == 'w') ADVANCE(1025);
      END_STATE();
    case 535:
      if (lookahead == 'w') ADVANCE(1026);
      END_STATE();
    case 536:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 537:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 538:
      if (lookahead == 'x') ADVANCE(722);
      END_STATE();
    case 539:
      if (lookahead == 'x') ADVANCE(544);
      END_STATE();
    case 540:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 541:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(719);
      END_STATE();
    case 544:
      if (lookahead == 'y') ADVANCE(700);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(701);
      END_STATE();
    case 546:
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 547:
      if (lookahead == '{') ADVANCE(1013);
      END_STATE();
    case 548:
      if (lookahead == '}') ADVANCE(1016);
      END_STATE();
    case 549:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(549);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1017);
      END_STATE();
    case 550:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(763);
      END_STATE();
    case 551:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(760);
      END_STATE();
    case 552:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(757);
      END_STATE();
    case 553:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(960);
      END_STATE();
    case 554:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '.', 1039,
        '<', 747,
        'C', 639,
        'D', 607,
        'G', 608,
        'H', 609,
        'L', 620,
        'O', 643,
        'P', 598,
        'T', 645,
        'U', 632,
        'V', 621,
        '[', 1007,
        '`', 956,
        'b', 116,
        'f', 98,
        'h', 213,
        'n', 517,
        't', 404,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 555:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '.', 1039,
        '<', 747,
        'C', 639,
        'D', 607,
        'G', 608,
        'H', 610,
        'L', 620,
        'O', 643,
        'P', 598,
        'T', 645,
        'U', 632,
        'V', 621,
        '[', 1004,
        '`', 956,
        'b', 117,
        'c', 101,
        'd', 522,
        'f', 98,
        'h', 181,
        'i', 331,
        'j', 451,
        'l', 353,
        'm', 94,
        'n', 517,
        'p', 113,
        'r', 182,
        's', 259,
        't', 404,
        'u', 405,
        'v', 119,
        'x', 383,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 556:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '.', 1040,
        '<', 747,
        'C', 830,
        'D', 798,
        'G', 799,
        'H', 800,
        'L', 813,
        'O', 836,
        'P', 789,
        'T', 839,
        'U', 824,
        'V', 812,
        '[', 1008,
        '\\', 947,
        '`', 956,
        'b', 859,
        'f', 860,
        'h', 872,
        'n', 938,
        't', 911,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 557:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        'C', 639,
        'D', 607,
        'G', 608,
        'H', 609,
        'L', 620,
        'O', 643,
        'P', 598,
        'T', 645,
        'U', 632,
        'V', 621,
        '[', 1007,
        '`', 956,
        'b', 116,
        'c', 102,
        'd', 107,
        'f', 99,
        'h', 214,
        'i', 331,
        'l', 353,
        'm', 93,
        'n', 490,
        'p', 113,
        'r', 192,
        's', 377,
        't', 347,
        'u', 411,
        'v', 119,
        'x', 383,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 558:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        'C', 639,
        'D', 607,
        'G', 608,
        'H', 609,
        'L', 620,
        'O', 643,
        'P', 598,
        'T', 645,
        'U', 632,
        'V', 621,
        '[', 1007,
        '`', 956,
        'b', 116,
        'f', 98,
        'h', 213,
        'n', 517,
        't', 404,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 559:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        'C', 639,
        'D', 607,
        'G', 608,
        'H', 610,
        'L', 620,
        'O', 643,
        'P', 598,
        'T', 645,
        'U', 632,
        'V', 621,
        '[', 1005,
        '`', 956,
        'b', 116,
        'f', 98,
        'h', 213,
        'n', 517,
        't', 404,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 560:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        'C', 830,
        'D', 798,
        'G', 799,
        'H', 800,
        'L', 813,
        'O', 836,
        'P', 789,
        'T', 839,
        'U', 824,
        'V', 812,
        '[', 1008,
        '\\', 947,
        '`', 956,
        'b', 859,
        'f', 860,
        'h', 872,
        'n', 938,
        't', 911,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 561:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        'C', 830,
        'D', 798,
        'G', 799,
        'H', 800,
        'L', 813,
        'O', 836,
        'P', 789,
        'T', 839,
        'U', 824,
        'V', 812,
        '[', 1008,
        '\\', 947,
        '`', 956,
        'b', 859,
        'f', 860,
        'h', 872,
        'n', 938,
        't', 911,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      if (lookahead != 0) ADVANCE(949);
      END_STATE();
    case 562:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '\n', 963,
        '"', 768,
        '#', 1047,
        '<', 747,
        'C', 830,
        'D', 798,
        'G', 799,
        'H', 801,
        'L', 813,
        'O', 836,
        'P', 789,
        'T', 839,
        'U', 824,
        'V', 812,
        '[', 1006,
        '\\', 947,
        '`', 956,
        'b', 859,
        'f', 860,
        'h', 872,
        'n', 938,
        't', 911,
        '{', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(946);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 563:
      if (eof) ADVANCE(564);
      ADVANCE_MAP(
        '!', 57,
        '"', 768,
        '#', 954,
        '*', 664,
        '+', 1045,
        ',', 1002,
        '-', 1046,
        '.', 1039,
        '/', 1048,
        ':', 690,
        ';', 692,
        '<', 744,
        '=', 708,
        '>', 740,
        '?', 59,
        'E', 1044,
        '[', 1004,
        '\\', 772,
        ']', 1009,
        '`', 956,
        'b', 773,
        'e', 1041,
        'f', 774,
        'n', 775,
        'r', 776,
        't', 777,
        'u', 778,
        '{', 995,
        '}', 1001,
        'a', 1017,
        'c', 1017,
        'd', 1017,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(656);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1017);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(605);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(652);
      if (lookahead == 'O') ADVANCE(647);
      if (lookahead == 'R') ADVANCE(638);
      if (lookahead == 'U') ADVANCE(644);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(604);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(597);
      if (lookahead == 'T') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(655);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(631);
      if (lookahead == 'O') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'O') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(630);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(618);
      if (lookahead == 'T') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(649);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_LBRACKQuery_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_LBRACKForm_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipart_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(735);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_status_query);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_url_query);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_certificate);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_Subject);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_Issuer);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_Start_DASHDate);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_Expire_DASHDate);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_Serial_DASHNumber);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_body_query);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_duration_query);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_sha256_query);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_md5_query);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_bytes_query);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(428);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(742);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(396);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(761);
      if (lookahead == '=') ADVANCE(749);
      if (lookahead == '?') ADVANCE(755);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(761);
      if (lookahead == '?') ADVANCE(755);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(749);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(755);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(757);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '>') ADVANCE(760);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(760);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(759);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(760);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(763);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(765);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(770);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == 'b') ADVANCE(773);
      if (lookahead == 'f') ADVANCE(774);
      if (lookahead == 'n') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead == 't') ADVANCE(777);
      if (lookahead == '\n' ||
          lookahead == 0x0b ||
          lookahead == ' ') ADVANCE(780);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(767);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(691);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(783);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(784);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(795);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(793);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(939);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(842);
      if (lookahead == 'R') ADVANCE(831);
      if (lookahead == 'U') ADVANCE(838);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(845);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(843);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(786);
      if (lookahead == 'T') ADVANCE(846);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(850);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(849);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(904);
      if (lookahead == ']') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(823);
      if (lookahead == 'O') ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(827);
      if (lookahead == 'O') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(832);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(840);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(829);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(828);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(834);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(825);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(864);
      if (lookahead == ']') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(810);
      if (lookahead == 'T') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(935);
      if (lookahead == ']') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(844);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(833);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == 'i') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(913);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(933);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(897);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(917);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(788);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(1036);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(915);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(926);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(907);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(923);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(924);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(920);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(899);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(900);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(931);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(934);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(944);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(941);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(930);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(936);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(927);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(942);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(925);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(929);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(916);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(781);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(1013);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(92);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(955);
      if (lookahead == '{') ADVANCE(959);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(958);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(957);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(1013);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(960);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(963);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(964);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(996);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(965);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(992);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(966);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(972);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == 'b') ADVANCE(976);
      if (lookahead == 'g') ADVANCE(987);
      if (lookahead == 'h') ADVANCE(977);
      if (lookahead == 'j') ADVANCE(988);
      if (lookahead == 'x') ADVANCE(982);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(972);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(991);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(965);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(993);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(993);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(1013);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(964);
      if (lookahead == '{') ADVANCE(998);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(998);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(997);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(446);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == 'M') ADVANCE(514);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'Q') ADVANCE(515);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(446);
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(928);
      if (lookahead == 'C') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == 'M') ADVANCE(514);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'Q') ADVANCE(515);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(862);
      if (lookahead == 'C') ADVANCE(903);
      if (lookahead == 'F') ADVANCE(902);
      if (lookahead == 'M') ADVANCE(940);
      if (lookahead == 'O') ADVANCE(905);
      if (lookahead == 'Q') ADVANCE(937);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_json_string_text);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '{') ADVANCE(1013);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '{') ADVANCE(1011);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1010);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(771);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1018);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'q') ADVANCE(524);
      if (lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1047);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1049);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1050);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1050);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1052);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1051);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 555},
  [2] = {.lex_state = 560},
  [3] = {.lex_state = 560},
  [4] = {.lex_state = 560},
  [5] = {.lex_state = 560},
  [6] = {.lex_state = 557},
  [7] = {.lex_state = 557},
  [8] = {.lex_state = 557},
  [9] = {.lex_state = 557},
  [10] = {.lex_state = 557},
  [11] = {.lex_state = 557},
  [12] = {.lex_state = 557},
  [13] = {.lex_state = 557},
  [14] = {.lex_state = 562},
  [15] = {.lex_state = 562},
  [16] = {.lex_state = 562},
  [17] = {.lex_state = 562},
  [18] = {.lex_state = 555},
  [19] = {.lex_state = 555},
  [20] = {.lex_state = 555},
  [21] = {.lex_state = 555},
  [22] = {.lex_state = 555},
  [23] = {.lex_state = 561},
  [24] = {.lex_state = 560},
  [25] = {.lex_state = 560},
  [26] = {.lex_state = 560},
  [27] = {.lex_state = 560},
  [28] = {.lex_state = 560},
  [29] = {.lex_state = 560},
  [30] = {.lex_state = 557},
  [31] = {.lex_state = 557},
  [32] = {.lex_state = 557},
  [33] = {.lex_state = 557},
  [34] = {.lex_state = 557},
  [35] = {.lex_state = 557},
  [36] = {.lex_state = 557},
  [37] = {.lex_state = 557},
  [38] = {.lex_state = 557},
  [39] = {.lex_state = 557},
  [40] = {.lex_state = 557},
  [41] = {.lex_state = 557},
  [42] = {.lex_state = 557},
  [43] = {.lex_state = 557},
  [44] = {.lex_state = 557},
  [45] = {.lex_state = 557},
  [46] = {.lex_state = 557},
  [47] = {.lex_state = 557},
  [48] = {.lex_state = 555},
  [49] = {.lex_state = 555},
  [50] = {.lex_state = 555},
  [51] = {.lex_state = 555},
  [52] = {.lex_state = 555},
  [53] = {.lex_state = 555},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 557},
  [57] = {.lex_state = 561},
  [58] = {.lex_state = 561},
  [59] = {.lex_state = 560},
  [60] = {.lex_state = 560},
  [61] = {.lex_state = 560},
  [62] = {.lex_state = 560},
  [63] = {.lex_state = 560},
  [64] = {.lex_state = 560},
  [65] = {.lex_state = 560},
  [66] = {.lex_state = 560},
  [67] = {.lex_state = 560},
  [68] = {.lex_state = 560},
  [69] = {.lex_state = 560},
  [70] = {.lex_state = 560},
  [71] = {.lex_state = 560},
  [72] = {.lex_state = 560},
  [73] = {.lex_state = 560},
  [74] = {.lex_state = 560},
  [75] = {.lex_state = 560},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 561},
  [78] = {.lex_state = 561},
  [79] = {.lex_state = 561},
  [80] = {.lex_state = 561},
  [81] = {.lex_state = 556},
  [82] = {.lex_state = 561},
  [83] = {.lex_state = 561},
  [84] = {.lex_state = 556},
  [85] = {.lex_state = 556},
  [86] = {.lex_state = 561},
  [87] = {.lex_state = 561},
  [88] = {.lex_state = 560},
  [89] = {.lex_state = 560},
  [90] = {.lex_state = 560},
  [91] = {.lex_state = 560},
  [92] = {.lex_state = 560},
  [93] = {.lex_state = 560},
  [94] = {.lex_state = 560},
  [95] = {.lex_state = 560},
  [96] = {.lex_state = 560},
  [97] = {.lex_state = 560},
  [98] = {.lex_state = 555},
  [99] = {.lex_state = 560},
  [100] = {.lex_state = 562},
  [101] = {.lex_state = 560},
  [102] = {.lex_state = 555},
  [103] = {.lex_state = 562},
  [104] = {.lex_state = 562},
  [105] = {.lex_state = 562},
  [106] = {.lex_state = 562},
  [107] = {.lex_state = 562},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 555},
  [110] = {.lex_state = 557},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 555},
  [115] = {.lex_state = 555},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 562},
  [135] = {.lex_state = 562},
  [136] = {.lex_state = 562},
  [137] = {.lex_state = 562},
  [138] = {.lex_state = 562},
  [139] = {.lex_state = 562},
  [140] = {.lex_state = 562},
  [141] = {.lex_state = 555},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 555},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 557},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 557},
  [149] = {.lex_state = 555},
  [150] = {.lex_state = 557},
  [151] = {.lex_state = 557},
  [152] = {.lex_state = 557},
  [153] = {.lex_state = 555},
  [154] = {.lex_state = 557},
  [155] = {.lex_state = 557},
  [156] = {.lex_state = 557},
  [157] = {.lex_state = 557},
  [158] = {.lex_state = 557},
  [159] = {.lex_state = 557},
  [160] = {.lex_state = 557},
  [161] = {.lex_state = 555},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 555},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 555},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 26},
  [170] = {.lex_state = 555},
  [171] = {.lex_state = 26},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 20},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 555},
  [179] = {.lex_state = 23},
  [180] = {.lex_state = 555},
  [181] = {.lex_state = 555},
  [182] = {.lex_state = 555},
  [183] = {.lex_state = 555},
  [184] = {.lex_state = 555},
  [185] = {.lex_state = 555},
  [186] = {.lex_state = 555},
  [187] = {.lex_state = 555},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 557},
  [194] = {.lex_state = 557},
  [195] = {.lex_state = 557},
  [196] = {.lex_state = 557},
  [197] = {.lex_state = 557},
  [198] = {.lex_state = 557},
  [199] = {.lex_state = 557},
  [200] = {.lex_state = 557},
  [201] = {.lex_state = 557},
  [202] = {.lex_state = 557},
  [203] = {.lex_state = 557},
  [204] = {.lex_state = 557},
  [205] = {.lex_state = 557},
  [206] = {.lex_state = 557},
  [207] = {.lex_state = 557},
  [208] = {.lex_state = 557},
  [209] = {.lex_state = 557},
  [210] = {.lex_state = 30},
  [211] = {.lex_state = 557},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 555},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 557},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 14},
  [238] = {.lex_state = 14},
  [239] = {.lex_state = 28},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 51},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 54},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 28},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 54},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 51},
  [255] = {.lex_state = 557},
  [256] = {.lex_state = 51},
  [257] = {.lex_state = 28},
  [258] = {.lex_state = 28},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 27},
  [262] = {.lex_state = 54},
  [263] = {.lex_state = 54},
  [264] = {.lex_state = 52},
  [265] = {.lex_state = 52},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 25},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 29},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 29},
  [276] = {.lex_state = 19},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 29},
  [281] = {.lex_state = 29},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 555},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 15},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 26},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 28},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 51},
  [294] = {.lex_state = 51},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 26},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 26},
  [301] = {.lex_state = 28},
  [302] = {.lex_state = 26},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 20},
  [305] = {.lex_state = 26},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 20},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 26},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 20},
  [315] = {.lex_state = 25},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 26},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 54},
  [322] = {.lex_state = 54},
  [323] = {.lex_state = 20},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 52},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 20},
  [330] = {.lex_state = 11},
  [331] = {.lex_state = 16},
  [332] = {.lex_state = 20},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 52},
  [335] = {.lex_state = 20},
  [336] = {.lex_state = 51},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 26},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 555},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 12},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 555},
  [348] = {.lex_state = 14},
  [349] = {.lex_state = 51},
  [350] = {.lex_state = 555},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 26},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 555},
  [355] = {.lex_state = 14},
  [356] = {.lex_state = 12},
  [357] = {.lex_state = 14},
  [358] = {.lex_state = 555},
  [359] = {.lex_state = 555},
  [360] = {.lex_state = 20},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 14},
  [363] = {.lex_state = 16},
  [364] = {.lex_state = 555},
  [365] = {.lex_state = 20},
  [366] = {.lex_state = 555},
  [367] = {.lex_state = 555},
  [368] = {.lex_state = 555},
  [369] = {.lex_state = 555},
  [370] = {.lex_state = 20},
  [371] = {.lex_state = 555},
  [372] = {.lex_state = 20},
  [373] = {.lex_state = 555},
  [374] = {.lex_state = 555},
  [375] = {.lex_state = 555},
  [376] = {.lex_state = 555},
  [377] = {.lex_state = 26},
  [378] = {.lex_state = 555},
  [379] = {.lex_state = 555},
  [380] = {.lex_state = 555},
  [381] = {.lex_state = 555},
  [382] = {.lex_state = 555},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 29},
  [385] = {.lex_state = 555},
  [386] = {.lex_state = 28},
  [387] = {.lex_state = 555},
  [388] = {.lex_state = 28},
  [389] = {.lex_state = 555},
  [390] = {.lex_state = 555},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 26},
  [394] = {.lex_state = 20},
  [395] = {.lex_state = 555},
  [396] = {.lex_state = 20},
  [397] = {.lex_state = 555},
  [398] = {.lex_state = 555},
  [399] = {.lex_state = 555},
  [400] = {.lex_state = 555},
  [401] = {.lex_state = 26},
  [402] = {.lex_state = 555},
  [403] = {.lex_state = 20},
  [404] = {.lex_state = 29},
  [405] = {.lex_state = 555},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 555},
  [408] = {.lex_state = 555},
  [409] = {.lex_state = 20},
  [410] = {.lex_state = 54},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 555},
  [413] = {.lex_state = 555},
  [414] = {.lex_state = 20},
  [415] = {.lex_state = 555},
  [416] = {.lex_state = 555},
  [417] = {.lex_state = 555},
  [418] = {.lex_state = 555},
  [419] = {.lex_state = 26},
  [420] = {.lex_state = 26},
  [421] = {.lex_state = 555},
  [422] = {.lex_state = 555},
  [423] = {.lex_state = 29},
  [424] = {.lex_state = 555},
  [425] = {.lex_state = 29},
  [426] = {.lex_state = 555},
  [427] = {.lex_state = 555},
  [428] = {.lex_state = 28},
  [429] = {.lex_state = 555},
  [430] = {.lex_state = 20},
  [431] = {.lex_state = 15},
  [432] = {.lex_state = 555},
  [433] = {.lex_state = 555},
  [434] = {.lex_state = 555},
  [435] = {.lex_state = 555},
  [436] = {.lex_state = 555},
  [437] = {.lex_state = 555},
  [438] = {.lex_state = 555},
  [439] = {.lex_state = 555},
  [440] = {.lex_state = 555},
  [441] = {.lex_state = 28},
  [442] = {.lex_state = 20},
  [443] = {.lex_state = 52},
  [444] = {.lex_state = 555},
  [445] = {.lex_state = 555},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 20},
  [448] = {.lex_state = 28},
  [449] = {.lex_state = 555},
  [450] = {.lex_state = 555},
  [451] = {.lex_state = 555},
  [452] = {.lex_state = 54},
  [453] = {.lex_state = 555},
  [454] = {.lex_state = 555},
  [455] = {.lex_state = 555},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 555},
  [458] = {.lex_state = 555},
  [459] = {.lex_state = 52},
  [460] = {.lex_state = 20},
  [461] = {.lex_state = 20},
  [462] = {.lex_state = 26},
  [463] = {.lex_state = 26},
  [464] = {.lex_state = 26},
  [465] = {.lex_state = 20},
  [466] = {.lex_state = 26},
  [467] = {.lex_state = 10},
  [468] = {.lex_state = 26},
  [469] = {.lex_state = 26},
  [470] = {.lex_state = 26},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 26},
  [473] = {.lex_state = 55},
  [474] = {.lex_state = 30},
  [475] = {.lex_state = 26},
  [476] = {.lex_state = 26},
  [477] = {.lex_state = 16},
  [478] = {.lex_state = 10},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 23},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 26},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 26},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 30},
  [490] = {.lex_state = 26},
  [491] = {.lex_state = 26},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 26},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 55},
  [496] = {.lex_state = 26},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 26},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 55},
  [502] = {.lex_state = 549},
  [503] = {.lex_state = 549},
  [504] = {.lex_state = 13},
  [505] = {.lex_state = 549},
  [506] = {.lex_state = 549},
  [507] = {.lex_state = 549},
  [508] = {.lex_state = 549},
  [509] = {.lex_state = 549},
  [510] = {.lex_state = 549},
  [511] = {.lex_state = 549},
  [512] = {.lex_state = 549},
  [513] = {.lex_state = 549},
  [514] = {.lex_state = 549},
  [515] = {.lex_state = 549},
  [516] = {.lex_state = 549},
  [517] = {.lex_state = 23},
  [518] = {.lex_state = 555},
  [519] = {.lex_state = 555},
  [520] = {.lex_state = 20},
  [521] = {.lex_state = 555},
  [522] = {.lex_state = 20},
  [523] = {.lex_state = 555},
  [524] = {.lex_state = 555},
  [525] = {.lex_state = 21},
  [526] = {.lex_state = 555},
  [527] = {.lex_state = 555},
  [528] = {.lex_state = 555},
  [529] = {.lex_state = 555},
  [530] = {.lex_state = 555},
  [531] = {.lex_state = 555},
  [532] = {.lex_state = 555},
  [533] = {.lex_state = 555},
  [534] = {.lex_state = 555},
  [535] = {.lex_state = 555},
  [536] = {.lex_state = 555},
  [537] = {.lex_state = 555},
  [538] = {.lex_state = 555},
  [539] = {.lex_state = 555},
  [540] = {.lex_state = 555},
  [541] = {.lex_state = 555},
  [542] = {.lex_state = 555},
  [543] = {.lex_state = 555},
  [544] = {.lex_state = 26},
  [545] = {.lex_state = 555},
  [546] = {.lex_state = 21},
  [547] = {.lex_state = 20},
  [548] = {.lex_state = 555},
  [549] = {.lex_state = 555},
  [550] = {.lex_state = 555},
  [551] = {.lex_state = 555},
  [552] = {.lex_state = 20},
  [553] = {.lex_state = 555},
  [554] = {.lex_state = 26},
  [555] = {.lex_state = 20},
  [556] = {.lex_state = 555},
  [557] = {.lex_state = 555},
  [558] = {.lex_state = 555},
  [559] = {.lex_state = 20},
  [560] = {.lex_state = 555},
  [561] = {.lex_state = 20},
  [562] = {.lex_state = 30},
  [563] = {.lex_state = 20},
  [564] = {.lex_state = 555},
  [565] = {.lex_state = 555},
  [566] = {.lex_state = 20},
  [567] = {.lex_state = 555},
  [568] = {.lex_state = 555},
  [569] = {.lex_state = 21},
  [570] = {.lex_state = 555},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 555},
  [573] = {.lex_state = 555},
  [574] = {.lex_state = 555},
  [575] = {.lex_state = 21},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 20},
  [578] = {.lex_state = 20},
  [579] = {.lex_state = 20},
  [580] = {.lex_state = 20},
  [581] = {.lex_state = 20},
  [582] = {.lex_state = 20},
  [583] = {.lex_state = 20},
  [584] = {.lex_state = 20},
  [585] = {.lex_state = 555},
  [586] = {.lex_state = 20},
  [587] = {.lex_state = 20},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 20},
  [590] = {.lex_state = 20},
  [591] = {.lex_state = 21},
  [592] = {.lex_state = 20},
  [593] = {.lex_state = 20},
  [594] = {.lex_state = 21},
  [595] = {.lex_state = 20},
  [596] = {.lex_state = 555},
  [597] = {.lex_state = 555},
  [598] = {.lex_state = 555},
  [599] = {.lex_state = 20},
  [600] = {.lex_state = 26},
  [601] = {.lex_state = 555},
  [602] = {.lex_state = 555},
  [603] = {.lex_state = 555},
  [604] = {.lex_state = 555},
  [605] = {.lex_state = 55},
  [606] = {.lex_state = 20},
  [607] = {.lex_state = 555},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 20},
  [610] = {.lex_state = 17},
  [611] = {.lex_state = 20},
  [612] = {.lex_state = 21},
  [613] = {.lex_state = 555},
  [614] = {.lex_state = 20},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 20},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 55},
  [620] = {.lex_state = 55},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 550},
  [624] = {.lex_state = 20},
  [625] = {.lex_state = 20},
  [626] = {.lex_state = 20},
  [627] = {.lex_state = 20},
  [628] = {.lex_state = 20},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 20},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 26},
  [633] = {.lex_state = 20},
  [634] = {.lex_state = 20},
  [635] = {.lex_state = 551},
  [636] = {.lex_state = 20},
  [637] = {.lex_state = 18},
  [638] = {.lex_state = 552},
  [639] = {.lex_state = 20},
  [640] = {.lex_state = 20},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 55},
  [643] = {.lex_state = 20},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 20},
  [646] = {.lex_state = 21},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 20},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 20},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 26},
  [654] = {.lex_state = 20},
  [655] = {.lex_state = 20},
  [656] = {.lex_state = 20},
  [657] = {.lex_state = 20},
  [658] = {.lex_state = 20},
  [659] = {.lex_state = 20},
  [660] = {.lex_state = 20},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 26},
  [663] = {.lex_state = 552},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 550},
  [666] = {.lex_state = 55},
  [667] = {.lex_state = 55},
  [668] = {.lex_state = 55},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 55},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 55},
  [673] = {.lex_state = 55},
  [674] = {.lex_state = 55},
  [675] = {.lex_state = 55},
  [676] = {.lex_state = 553},
  [677] = {.lex_state = 55},
  [678] = {.lex_state = 21},
  [679] = {.lex_state = 1018},
  [680] = {.lex_state = 55},
  [681] = {.lex_state = 20},
  [682] = {.lex_state = 55},
  [683] = {.lex_state = 55},
  [684] = {.lex_state = 55},
  [685] = {.lex_state = 55},
  [686] = {.lex_state = 26},
  [687] = {.lex_state = 55},
  [688] = {.lex_state = 55},
  [689] = {.lex_state = 55},
  [690] = {.lex_state = 55},
  [691] = {.lex_state = 55},
  [692] = {.lex_state = 55},
  [693] = {.lex_state = 55},
  [694] = {.lex_state = 55},
  [695] = {.lex_state = 55},
  [696] = {.lex_state = 55},
  [697] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [aux_sym_status_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
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
    [sym_hurl_file] = STATE(669),
    [sym_entry] = STATE(149),
    [sym_request] = STATE(145),
    [sym_method] = STATE(231),
    [sym_lt] = STATE(161),
    [aux_sym_hurl_file_repeat1] = STATE(149),
    [aux_sym_hurl_file_repeat2] = STATE(161),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_LINK] = ACTIONS(5),
    [anon_sym_UNLINK] = ACTIONS(5),
    [anon_sym_PURGE] = ACTIONS(5),
    [anon_sym_LOCK] = ACTIONS(5),
    [anon_sym_UNLOCK] = ACTIONS(5),
    [anon_sym_PROPFIND] = ACTIONS(5),
    [anon_sym_VIEW] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_header] = STATE(4),
    [sym_body] = STATE(159),
    [sym_request_section] = STATE(6),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_key_value] = STATE(450),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(76),
    [aux_sym_hurl_file_repeat2] = STATE(76),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_HEAD] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [anon_sym_LINK] = ACTIONS(13),
    [anon_sym_UNLINK] = ACTIONS(13),
    [anon_sym_PURGE] = ACTIONS(13),
    [anon_sym_LOCK] = ACTIONS(13),
    [anon_sym_UNLOCK] = ACTIONS(13),
    [anon_sym_PROPFIND] = ACTIONS(13),
    [anon_sym_VIEW] = ACTIONS(13),
    [aux_sym_method_token1] = ACTIONS(13),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(13),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(13),
    [anon_sym_HTTP_SLASH2] = ACTIONS(13),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(13),
    [anon_sym_HTTP] = ACTIONS(13),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [3] = {
    [sym_header] = STATE(5),
    [sym_body] = STATE(160),
    [sym_request_section] = STATE(7),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_key_value] = STATE(450),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(76),
    [aux_sym_hurl_file_repeat2] = STATE(76),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_HEAD] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [aux_sym_method_token1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH2] = ACTIONS(65),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(65),
    [anon_sym_HTTP] = ACTIONS(65),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [4] = {
    [sym_header] = STATE(29),
    [sym_body] = STATE(160),
    [sym_request_section] = STATE(7),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_key_value] = STATE(450),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(76),
    [aux_sym_hurl_file_repeat2] = STATE(76),
    [aux_sym_request_repeat1] = STATE(29),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_HEAD] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [aux_sym_method_token1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH2] = ACTIONS(65),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(65),
    [anon_sym_HTTP] = ACTIONS(65),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [5] = {
    [sym_header] = STATE(29),
    [sym_body] = STATE(157),
    [sym_request_section] = STATE(8),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_key_value] = STATE(450),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(76),
    [aux_sym_hurl_file_repeat2] = STATE(76),
    [aux_sym_request_repeat1] = STATE(29),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_GET] = ACTIONS(69),
    [anon_sym_HEAD] = ACTIONS(69),
    [anon_sym_POST] = ACTIONS(69),
    [anon_sym_PUT] = ACTIONS(69),
    [anon_sym_DELETE] = ACTIONS(69),
    [anon_sym_CONNECT] = ACTIONS(69),
    [anon_sym_OPTIONS] = ACTIONS(69),
    [anon_sym_TRACE] = ACTIONS(69),
    [anon_sym_PATCH] = ACTIONS(69),
    [anon_sym_LINK] = ACTIONS(69),
    [anon_sym_UNLINK] = ACTIONS(69),
    [anon_sym_PURGE] = ACTIONS(69),
    [anon_sym_LOCK] = ACTIONS(69),
    [anon_sym_UNLOCK] = ACTIONS(69),
    [anon_sym_PROPFIND] = ACTIONS(69),
    [anon_sym_VIEW] = ACTIONS(69),
    [aux_sym_method_token1] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(69),
    [anon_sym_HTTP_SLASH2] = ACTIONS(69),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(69),
    [anon_sym_HTTP] = ACTIONS(69),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [6] = {
    [sym_body] = STATE(160),
    [sym_request_section] = STATE(56),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(109),
    [aux_sym_hurl_file_repeat2] = STATE(109),
    [aux_sym_request_repeat2] = STATE(56),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_GET] = ACTIONS(65),
    [anon_sym_HEAD] = ACTIONS(65),
    [anon_sym_POST] = ACTIONS(65),
    [anon_sym_PUT] = ACTIONS(65),
    [anon_sym_DELETE] = ACTIONS(65),
    [anon_sym_CONNECT] = ACTIONS(65),
    [anon_sym_OPTIONS] = ACTIONS(65),
    [anon_sym_TRACE] = ACTIONS(65),
    [anon_sym_PATCH] = ACTIONS(65),
    [anon_sym_LINK] = ACTIONS(65),
    [anon_sym_UNLINK] = ACTIONS(65),
    [anon_sym_PURGE] = ACTIONS(65),
    [anon_sym_LOCK] = ACTIONS(65),
    [anon_sym_UNLOCK] = ACTIONS(65),
    [anon_sym_PROPFIND] = ACTIONS(65),
    [anon_sym_VIEW] = ACTIONS(65),
    [aux_sym_method_token1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(65),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(65),
    [anon_sym_HTTP_SLASH2] = ACTIONS(65),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(65),
    [anon_sym_HTTP] = ACTIONS(65),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_body] = STATE(157),
    [sym_request_section] = STATE(56),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(109),
    [aux_sym_hurl_file_repeat2] = STATE(109),
    [aux_sym_request_repeat2] = STATE(56),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_GET] = ACTIONS(69),
    [anon_sym_HEAD] = ACTIONS(69),
    [anon_sym_POST] = ACTIONS(69),
    [anon_sym_PUT] = ACTIONS(69),
    [anon_sym_DELETE] = ACTIONS(69),
    [anon_sym_CONNECT] = ACTIONS(69),
    [anon_sym_OPTIONS] = ACTIONS(69),
    [anon_sym_TRACE] = ACTIONS(69),
    [anon_sym_PATCH] = ACTIONS(69),
    [anon_sym_LINK] = ACTIONS(69),
    [anon_sym_UNLINK] = ACTIONS(69),
    [anon_sym_PURGE] = ACTIONS(69),
    [anon_sym_LOCK] = ACTIONS(69),
    [anon_sym_UNLOCK] = ACTIONS(69),
    [anon_sym_PROPFIND] = ACTIONS(69),
    [anon_sym_VIEW] = ACTIONS(69),
    [aux_sym_method_token1] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(69),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(69),
    [anon_sym_HTTP_SLASH2] = ACTIONS(69),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(69),
    [anon_sym_HTTP] = ACTIONS(69),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [sym_body] = STATE(155),
    [sym_request_section] = STATE(56),
    [sym_query_string_params_section] = STATE(110),
    [sym_form_params_section] = STATE(110),
    [sym_multipart_form_data_section] = STATE(110),
    [sym_cookies_section] = STATE(110),
    [sym_basic_auth_section] = STATE(110),
    [sym_options_section] = STATE(110),
    [sym_bytes] = STATE(415),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(109),
    [aux_sym_hurl_file_repeat2] = STATE(109),
    [aux_sym_request_repeat2] = STATE(56),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_GET] = ACTIONS(73),
    [anon_sym_HEAD] = ACTIONS(73),
    [anon_sym_POST] = ACTIONS(73),
    [anon_sym_PUT] = ACTIONS(73),
    [anon_sym_DELETE] = ACTIONS(73),
    [anon_sym_CONNECT] = ACTIONS(73),
    [anon_sym_OPTIONS] = ACTIONS(73),
    [anon_sym_TRACE] = ACTIONS(73),
    [anon_sym_PATCH] = ACTIONS(73),
    [anon_sym_LINK] = ACTIONS(73),
    [anon_sym_UNLINK] = ACTIONS(73),
    [anon_sym_PURGE] = ACTIONS(73),
    [anon_sym_LOCK] = ACTIONS(73),
    [anon_sym_UNLOCK] = ACTIONS(73),
    [anon_sym_PROPFIND] = ACTIONS(73),
    [anon_sym_VIEW] = ACTIONS(73),
    [aux_sym_method_token1] = ACTIONS(73),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(73),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(73),
    [anon_sym_HTTP_SLASH2] = ACTIONS(73),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(73),
    [anon_sym_HTTP] = ACTIONS(73),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(34),
    [sym_compressed_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_path_as_is_option] = STATE(34),
    [sym_proxy_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_lt] = STATE(143),
    [aux_sym_hurl_file_repeat2] = STATE(143),
    [aux_sym_options_section_repeat1] = STATE(11),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_GET] = ACTIONS(77),
    [anon_sym_HEAD] = ACTIONS(77),
    [anon_sym_POST] = ACTIONS(77),
    [anon_sym_PUT] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_CONNECT] = ACTIONS(77),
    [anon_sym_OPTIONS] = ACTIONS(77),
    [anon_sym_TRACE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [anon_sym_LINK] = ACTIONS(77),
    [anon_sym_UNLINK] = ACTIONS(77),
    [anon_sym_PURGE] = ACTIONS(77),
    [anon_sym_LOCK] = ACTIONS(77),
    [anon_sym_UNLOCK] = ACTIONS(77),
    [anon_sym_PROPFIND] = ACTIONS(77),
    [anon_sym_VIEW] = ACTIONS(77),
    [aux_sym_method_token1] = ACTIONS(77),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(77),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(77),
    [anon_sym_HTTP_SLASH2] = ACTIONS(77),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(77),
    [anon_sym_HTTP] = ACTIONS(77),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(77),
    [anon_sym_file_COMMA] = ACTIONS(77),
    [anon_sym_cacert] = ACTIONS(79),
    [anon_sym_compressed] = ACTIONS(81),
    [anon_sym_location] = ACTIONS(83),
    [anon_sym_insecure] = ACTIONS(85),
    [anon_sym_max_DASHredirs] = ACTIONS(87),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(89),
    [anon_sym_proxy] = ACTIONS(91),
    [anon_sym_retry] = ACTIONS(93),
    [anon_sym_retry_DASHinterval] = ACTIONS(95),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(99),
    [anon_sym_very_DASHverbose] = ACTIONS(101),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_LT_QMARK] = ACTIONS(77),
    [anon_sym_base64_COMMA] = ACTIONS(77),
    [anon_sym_hex_COMMA] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [sym_digit] = ACTIONS(77),
    [sym_comment] = ACTIONS(77),
  },
  [10] = {
    [sym_option] = STATE(12),
    [sym_ca_certificate_option] = STATE(34),
    [sym_compressed_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_path_as_is_option] = STATE(34),
    [sym_proxy_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_lt] = STATE(143),
    [aux_sym_hurl_file_repeat2] = STATE(143),
    [aux_sym_options_section_repeat1] = STATE(12),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_GET] = ACTIONS(107),
    [anon_sym_HEAD] = ACTIONS(107),
    [anon_sym_POST] = ACTIONS(107),
    [anon_sym_PUT] = ACTIONS(107),
    [anon_sym_DELETE] = ACTIONS(107),
    [anon_sym_CONNECT] = ACTIONS(107),
    [anon_sym_OPTIONS] = ACTIONS(107),
    [anon_sym_TRACE] = ACTIONS(107),
    [anon_sym_PATCH] = ACTIONS(107),
    [anon_sym_LINK] = ACTIONS(107),
    [anon_sym_UNLINK] = ACTIONS(107),
    [anon_sym_PURGE] = ACTIONS(107),
    [anon_sym_LOCK] = ACTIONS(107),
    [anon_sym_UNLOCK] = ACTIONS(107),
    [anon_sym_PROPFIND] = ACTIONS(107),
    [anon_sym_VIEW] = ACTIONS(107),
    [aux_sym_method_token1] = ACTIONS(107),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(107),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(107),
    [anon_sym_HTTP_SLASH2] = ACTIONS(107),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(107),
    [anon_sym_HTTP] = ACTIONS(107),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(107),
    [anon_sym_null] = ACTIONS(107),
    [anon_sym_file_COMMA] = ACTIONS(107),
    [anon_sym_cacert] = ACTIONS(79),
    [anon_sym_compressed] = ACTIONS(81),
    [anon_sym_location] = ACTIONS(83),
    [anon_sym_insecure] = ACTIONS(85),
    [anon_sym_max_DASHredirs] = ACTIONS(87),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(89),
    [anon_sym_proxy] = ACTIONS(91),
    [anon_sym_retry] = ACTIONS(93),
    [anon_sym_retry_DASHinterval] = ACTIONS(95),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(99),
    [anon_sym_very_DASHverbose] = ACTIONS(101),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_LT_QMARK] = ACTIONS(107),
    [anon_sym_base64_COMMA] = ACTIONS(107),
    [anon_sym_hex_COMMA] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_digit] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
  },
  [11] = {
    [sym_option] = STATE(12),
    [sym_ca_certificate_option] = STATE(34),
    [sym_compressed_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_path_as_is_option] = STATE(34),
    [sym_proxy_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_lt] = STATE(143),
    [aux_sym_hurl_file_repeat2] = STATE(143),
    [aux_sym_options_section_repeat1] = STATE(12),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_GET] = ACTIONS(111),
    [anon_sym_HEAD] = ACTIONS(111),
    [anon_sym_POST] = ACTIONS(111),
    [anon_sym_PUT] = ACTIONS(111),
    [anon_sym_DELETE] = ACTIONS(111),
    [anon_sym_CONNECT] = ACTIONS(111),
    [anon_sym_OPTIONS] = ACTIONS(111),
    [anon_sym_TRACE] = ACTIONS(111),
    [anon_sym_PATCH] = ACTIONS(111),
    [anon_sym_LINK] = ACTIONS(111),
    [anon_sym_UNLINK] = ACTIONS(111),
    [anon_sym_PURGE] = ACTIONS(111),
    [anon_sym_LOCK] = ACTIONS(111),
    [anon_sym_UNLOCK] = ACTIONS(111),
    [anon_sym_PROPFIND] = ACTIONS(111),
    [anon_sym_VIEW] = ACTIONS(111),
    [aux_sym_method_token1] = ACTIONS(111),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(111),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(111),
    [anon_sym_HTTP_SLASH2] = ACTIONS(111),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(111),
    [anon_sym_HTTP] = ACTIONS(111),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(111),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_file_COMMA] = ACTIONS(111),
    [anon_sym_cacert] = ACTIONS(79),
    [anon_sym_compressed] = ACTIONS(81),
    [anon_sym_location] = ACTIONS(83),
    [anon_sym_insecure] = ACTIONS(85),
    [anon_sym_max_DASHredirs] = ACTIONS(87),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(89),
    [anon_sym_proxy] = ACTIONS(91),
    [anon_sym_retry] = ACTIONS(93),
    [anon_sym_retry_DASHinterval] = ACTIONS(95),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(99),
    [anon_sym_very_DASHverbose] = ACTIONS(101),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_LT_QMARK] = ACTIONS(111),
    [anon_sym_base64_COMMA] = ACTIONS(111),
    [anon_sym_hex_COMMA] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [sym_digit] = ACTIONS(111),
    [sym_comment] = ACTIONS(111),
  },
  [12] = {
    [sym_option] = STATE(12),
    [sym_ca_certificate_option] = STATE(34),
    [sym_compressed_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_path_as_is_option] = STATE(34),
    [sym_proxy_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_lt] = STATE(143),
    [aux_sym_hurl_file_repeat2] = STATE(143),
    [aux_sym_options_section_repeat1] = STATE(12),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_GET] = ACTIONS(115),
    [anon_sym_HEAD] = ACTIONS(115),
    [anon_sym_POST] = ACTIONS(115),
    [anon_sym_PUT] = ACTIONS(115),
    [anon_sym_DELETE] = ACTIONS(115),
    [anon_sym_CONNECT] = ACTIONS(115),
    [anon_sym_OPTIONS] = ACTIONS(115),
    [anon_sym_TRACE] = ACTIONS(115),
    [anon_sym_PATCH] = ACTIONS(115),
    [anon_sym_LINK] = ACTIONS(115),
    [anon_sym_UNLINK] = ACTIONS(115),
    [anon_sym_PURGE] = ACTIONS(115),
    [anon_sym_LOCK] = ACTIONS(115),
    [anon_sym_UNLOCK] = ACTIONS(115),
    [anon_sym_PROPFIND] = ACTIONS(115),
    [anon_sym_VIEW] = ACTIONS(115),
    [aux_sym_method_token1] = ACTIONS(115),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(115),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(115),
    [anon_sym_HTTP_SLASH2] = ACTIONS(115),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(115),
    [anon_sym_HTTP] = ACTIONS(115),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(115),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_file_COMMA] = ACTIONS(115),
    [anon_sym_cacert] = ACTIONS(117),
    [anon_sym_compressed] = ACTIONS(120),
    [anon_sym_location] = ACTIONS(123),
    [anon_sym_insecure] = ACTIONS(126),
    [anon_sym_max_DASHredirs] = ACTIONS(129),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(132),
    [anon_sym_proxy] = ACTIONS(135),
    [anon_sym_retry] = ACTIONS(138),
    [anon_sym_retry_DASHinterval] = ACTIONS(141),
    [anon_sym_variable] = ACTIONS(144),
    [anon_sym_verbose] = ACTIONS(147),
    [anon_sym_very_DASHverbose] = ACTIONS(150),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_LT_QMARK] = ACTIONS(115),
    [anon_sym_base64_COMMA] = ACTIONS(115),
    [anon_sym_hex_COMMA] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(115),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym_digit] = ACTIONS(115),
    [sym_comment] = ACTIONS(159),
  },
  [13] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(34),
    [sym_compressed_option] = STATE(34),
    [sym_follow_redirect_option] = STATE(34),
    [sym_insecure_option] = STATE(34),
    [sym_max_redirs_option] = STATE(34),
    [sym_path_as_is_option] = STATE(34),
    [sym_proxy_option] = STATE(34),
    [sym_retry_option] = STATE(34),
    [sym_retry_interval_option] = STATE(34),
    [sym_variable_option] = STATE(34),
    [sym_verbose_option] = STATE(34),
    [sym_very_verbose_option] = STATE(34),
    [sym_retry_max_count_option] = STATE(34),
    [sym_lt] = STATE(143),
    [aux_sym_hurl_file_repeat2] = STATE(143),
    [aux_sym_options_section_repeat1] = STATE(10),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_GET] = ACTIONS(111),
    [anon_sym_HEAD] = ACTIONS(111),
    [anon_sym_POST] = ACTIONS(111),
    [anon_sym_PUT] = ACTIONS(111),
    [anon_sym_DELETE] = ACTIONS(111),
    [anon_sym_CONNECT] = ACTIONS(111),
    [anon_sym_OPTIONS] = ACTIONS(111),
    [anon_sym_TRACE] = ACTIONS(111),
    [anon_sym_PATCH] = ACTIONS(111),
    [anon_sym_LINK] = ACTIONS(111),
    [anon_sym_UNLINK] = ACTIONS(111),
    [anon_sym_PURGE] = ACTIONS(111),
    [anon_sym_LOCK] = ACTIONS(111),
    [anon_sym_UNLOCK] = ACTIONS(111),
    [anon_sym_PROPFIND] = ACTIONS(111),
    [anon_sym_VIEW] = ACTIONS(111),
    [aux_sym_method_token1] = ACTIONS(111),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(111),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(111),
    [anon_sym_HTTP_SLASH2] = ACTIONS(111),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(111),
    [anon_sym_HTTP] = ACTIONS(111),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(111),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_file_COMMA] = ACTIONS(111),
    [anon_sym_cacert] = ACTIONS(79),
    [anon_sym_compressed] = ACTIONS(81),
    [anon_sym_location] = ACTIONS(83),
    [anon_sym_insecure] = ACTIONS(85),
    [anon_sym_max_DASHredirs] = ACTIONS(87),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(89),
    [anon_sym_proxy] = ACTIONS(91),
    [anon_sym_retry] = ACTIONS(93),
    [anon_sym_retry_DASHinterval] = ACTIONS(95),
    [anon_sym_variable] = ACTIONS(97),
    [anon_sym_verbose] = ACTIONS(99),
    [anon_sym_very_DASHverbose] = ACTIONS(101),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_LT_QMARK] = ACTIONS(111),
    [anon_sym_base64_COMMA] = ACTIONS(111),
    [anon_sym_hex_COMMA] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [sym_digit] = ACTIONS(111),
    [sym_comment] = ACTIONS(111),
  },
  [14] = {
    [sym_header] = STATE(17),
    [sym_body] = STATE(180),
    [sym_response_section] = STATE(21),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_key_value] = STATE(449),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(108),
    [aux_sym_hurl_file_repeat2] = STATE(108),
    [aux_sym_request_repeat1] = STATE(17),
    [aux_sym_response_repeat1] = STATE(21),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_GET] = ACTIONS(164),
    [anon_sym_HEAD] = ACTIONS(164),
    [anon_sym_POST] = ACTIONS(164),
    [anon_sym_PUT] = ACTIONS(164),
    [anon_sym_DELETE] = ACTIONS(164),
    [anon_sym_CONNECT] = ACTIONS(164),
    [anon_sym_OPTIONS] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_PATCH] = ACTIONS(164),
    [anon_sym_LINK] = ACTIONS(164),
    [anon_sym_UNLINK] = ACTIONS(164),
    [anon_sym_PURGE] = ACTIONS(164),
    [anon_sym_LOCK] = ACTIONS(164),
    [anon_sym_UNLOCK] = ACTIONS(164),
    [anon_sym_PROPFIND] = ACTIONS(164),
    [anon_sym_VIEW] = ACTIONS(164),
    [aux_sym_method_token1] = ACTIONS(164),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(172),
  },
  [15] = {
    [sym_header] = STATE(16),
    [sym_body] = STATE(184),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_key_value] = STATE(449),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(108),
    [aux_sym_hurl_file_repeat2] = STATE(108),
    [aux_sym_request_repeat1] = STATE(16),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_GET] = ACTIONS(176),
    [anon_sym_HEAD] = ACTIONS(176),
    [anon_sym_POST] = ACTIONS(176),
    [anon_sym_PUT] = ACTIONS(176),
    [anon_sym_DELETE] = ACTIONS(176),
    [anon_sym_CONNECT] = ACTIONS(176),
    [anon_sym_OPTIONS] = ACTIONS(176),
    [anon_sym_TRACE] = ACTIONS(176),
    [anon_sym_PATCH] = ACTIONS(176),
    [anon_sym_LINK] = ACTIONS(176),
    [anon_sym_UNLINK] = ACTIONS(176),
    [anon_sym_PURGE] = ACTIONS(176),
    [anon_sym_LOCK] = ACTIONS(176),
    [anon_sym_UNLOCK] = ACTIONS(176),
    [anon_sym_PROPFIND] = ACTIONS(176),
    [anon_sym_VIEW] = ACTIONS(176),
    [aux_sym_method_token1] = ACTIONS(176),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(172),
  },
  [16] = {
    [sym_header] = STATE(100),
    [sym_body] = STATE(180),
    [sym_response_section] = STATE(21),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_key_value] = STATE(449),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(108),
    [aux_sym_hurl_file_repeat2] = STATE(108),
    [aux_sym_request_repeat1] = STATE(100),
    [aux_sym_response_repeat1] = STATE(21),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_GET] = ACTIONS(164),
    [anon_sym_HEAD] = ACTIONS(164),
    [anon_sym_POST] = ACTIONS(164),
    [anon_sym_PUT] = ACTIONS(164),
    [anon_sym_DELETE] = ACTIONS(164),
    [anon_sym_CONNECT] = ACTIONS(164),
    [anon_sym_OPTIONS] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_PATCH] = ACTIONS(164),
    [anon_sym_LINK] = ACTIONS(164),
    [anon_sym_UNLINK] = ACTIONS(164),
    [anon_sym_PURGE] = ACTIONS(164),
    [anon_sym_LOCK] = ACTIONS(164),
    [anon_sym_UNLOCK] = ACTIONS(164),
    [anon_sym_PROPFIND] = ACTIONS(164),
    [anon_sym_VIEW] = ACTIONS(164),
    [aux_sym_method_token1] = ACTIONS(164),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(172),
  },
  [17] = {
    [sym_header] = STATE(100),
    [sym_body] = STATE(185),
    [sym_response_section] = STATE(22),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_key_value] = STATE(449),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_key_string] = STATE(615),
    [sym_key_string_content] = STATE(256),
    [sym_key_string_escaped_char] = STATE(293),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(306),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(108),
    [aux_sym_hurl_file_repeat2] = STATE(108),
    [aux_sym_request_repeat1] = STATE(100),
    [aux_sym_response_repeat1] = STATE(22),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_key_string_repeat1] = STATE(256),
    [aux_sym_key_string_content_repeat1] = STATE(293),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_GET] = ACTIONS(180),
    [anon_sym_HEAD] = ACTIONS(180),
    [anon_sym_POST] = ACTIONS(180),
    [anon_sym_PUT] = ACTIONS(180),
    [anon_sym_DELETE] = ACTIONS(180),
    [anon_sym_CONNECT] = ACTIONS(180),
    [anon_sym_OPTIONS] = ACTIONS(180),
    [anon_sym_TRACE] = ACTIONS(180),
    [anon_sym_PATCH] = ACTIONS(180),
    [anon_sym_LINK] = ACTIONS(180),
    [anon_sym_UNLINK] = ACTIONS(180),
    [anon_sym_PURGE] = ACTIONS(180),
    [anon_sym_LOCK] = ACTIONS(180),
    [anon_sym_UNLOCK] = ACTIONS(180),
    [anon_sym_PROPFIND] = ACTIONS(180),
    [anon_sym_VIEW] = ACTIONS(180),
    [aux_sym_method_token1] = ACTIONS(180),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_key_string_text] = ACTIONS(41),
    [anon_sym_BSLASH2] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(172),
  },
  [18] = {
    [aux_sym_lt_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_GET] = ACTIONS(184),
    [anon_sym_HEAD] = ACTIONS(184),
    [anon_sym_POST] = ACTIONS(184),
    [anon_sym_PUT] = ACTIONS(184),
    [anon_sym_DELETE] = ACTIONS(184),
    [anon_sym_CONNECT] = ACTIONS(184),
    [anon_sym_OPTIONS] = ACTIONS(184),
    [anon_sym_TRACE] = ACTIONS(184),
    [anon_sym_PATCH] = ACTIONS(184),
    [anon_sym_LINK] = ACTIONS(184),
    [anon_sym_UNLINK] = ACTIONS(184),
    [anon_sym_PURGE] = ACTIONS(184),
    [anon_sym_LOCK] = ACTIONS(184),
    [anon_sym_UNLOCK] = ACTIONS(184),
    [anon_sym_PROPFIND] = ACTIONS(184),
    [anon_sym_VIEW] = ACTIONS(184),
    [aux_sym_method_token1] = ACTIONS(184),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(184),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(184),
    [anon_sym_null] = ACTIONS(184),
    [anon_sym_file_COMMA] = ACTIONS(184),
    [anon_sym_cacert] = ACTIONS(184),
    [anon_sym_compressed] = ACTIONS(184),
    [anon_sym_location] = ACTIONS(184),
    [anon_sym_insecure] = ACTIONS(184),
    [anon_sym_max_DASHredirs] = ACTIONS(184),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(184),
    [anon_sym_proxy] = ACTIONS(184),
    [anon_sym_retry] = ACTIONS(184),
    [anon_sym_retry_DASHinterval] = ACTIONS(184),
    [anon_sym_variable] = ACTIONS(184),
    [anon_sym_verbose] = ACTIONS(184),
    [anon_sym_very_DASHverbose] = ACTIONS(184),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(184),
    [sym_status_query] = ACTIONS(184),
    [sym_url_query] = ACTIONS(184),
    [anon_sym_header] = ACTIONS(184),
    [anon_sym_certificate] = ACTIONS(184),
    [anon_sym_cookie] = ACTIONS(184),
    [sym_body_query] = ACTIONS(184),
    [anon_sym_xpath] = ACTIONS(184),
    [anon_sym_jsonpath] = ACTIONS(184),
    [anon_sym_regex] = ACTIONS(184),
    [sym_duration_query] = ACTIONS(184),
    [sym_sha256_query] = ACTIONS(184),
    [sym_md5_query] = ACTIONS(184),
    [sym_bytes_query] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_LT_QMARK] = ACTIONS(184),
    [anon_sym_base64_COMMA] = ACTIONS(184),
    [anon_sym_hex_COMMA] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(184),
    [anon_sym_LF] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_true] = ACTIONS(184),
    [anon_sym_false] = ACTIONS(184),
    [sym_digit] = ACTIONS(184),
    [sym_comment] = ACTIONS(189),
  },
  [19] = {
    [aux_sym_lt_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_GET] = ACTIONS(194),
    [anon_sym_HEAD] = ACTIONS(194),
    [anon_sym_POST] = ACTIONS(194),
    [anon_sym_PUT] = ACTIONS(194),
    [anon_sym_DELETE] = ACTIONS(194),
    [anon_sym_CONNECT] = ACTIONS(194),
    [anon_sym_OPTIONS] = ACTIONS(194),
    [anon_sym_TRACE] = ACTIONS(194),
    [anon_sym_PATCH] = ACTIONS(194),
    [anon_sym_LINK] = ACTIONS(194),
    [anon_sym_UNLINK] = ACTIONS(194),
    [anon_sym_PURGE] = ACTIONS(194),
    [anon_sym_LOCK] = ACTIONS(194),
    [anon_sym_UNLOCK] = ACTIONS(194),
    [anon_sym_PROPFIND] = ACTIONS(194),
    [anon_sym_VIEW] = ACTIONS(194),
    [aux_sym_method_token1] = ACTIONS(194),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(194),
    [anon_sym_null] = ACTIONS(194),
    [anon_sym_file_COMMA] = ACTIONS(194),
    [anon_sym_cacert] = ACTIONS(194),
    [anon_sym_compressed] = ACTIONS(194),
    [anon_sym_location] = ACTIONS(194),
    [anon_sym_insecure] = ACTIONS(194),
    [anon_sym_max_DASHredirs] = ACTIONS(194),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(194),
    [anon_sym_proxy] = ACTIONS(194),
    [anon_sym_retry] = ACTIONS(194),
    [anon_sym_retry_DASHinterval] = ACTIONS(194),
    [anon_sym_variable] = ACTIONS(194),
    [anon_sym_verbose] = ACTIONS(194),
    [anon_sym_very_DASHverbose] = ACTIONS(194),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(194),
    [sym_status_query] = ACTIONS(194),
    [sym_url_query] = ACTIONS(194),
    [anon_sym_header] = ACTIONS(194),
    [anon_sym_certificate] = ACTIONS(194),
    [anon_sym_cookie] = ACTIONS(194),
    [sym_body_query] = ACTIONS(194),
    [anon_sym_xpath] = ACTIONS(194),
    [anon_sym_jsonpath] = ACTIONS(194),
    [anon_sym_regex] = ACTIONS(194),
    [sym_duration_query] = ACTIONS(194),
    [sym_sha256_query] = ACTIONS(194),
    [sym_md5_query] = ACTIONS(194),
    [sym_bytes_query] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_LT_QMARK] = ACTIONS(194),
    [anon_sym_base64_COMMA] = ACTIONS(194),
    [anon_sym_hex_COMMA] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(194),
    [anon_sym_LF] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(194),
    [sym_digit] = ACTIONS(194),
    [sym_comment] = ACTIONS(198),
  },
  [20] = {
    [sym_body] = STATE(180),
    [sym_response_section] = STATE(114),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(115),
    [aux_sym_hurl_file_repeat2] = STATE(115),
    [aux_sym_response_repeat1] = STATE(114),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_GET] = ACTIONS(164),
    [anon_sym_HEAD] = ACTIONS(164),
    [anon_sym_POST] = ACTIONS(164),
    [anon_sym_PUT] = ACTIONS(164),
    [anon_sym_DELETE] = ACTIONS(164),
    [anon_sym_CONNECT] = ACTIONS(164),
    [anon_sym_OPTIONS] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_PATCH] = ACTIONS(164),
    [anon_sym_LINK] = ACTIONS(164),
    [anon_sym_UNLINK] = ACTIONS(164),
    [anon_sym_PURGE] = ACTIONS(164),
    [anon_sym_LOCK] = ACTIONS(164),
    [anon_sym_UNLOCK] = ACTIONS(164),
    [anon_sym_PROPFIND] = ACTIONS(164),
    [anon_sym_VIEW] = ACTIONS(164),
    [aux_sym_method_token1] = ACTIONS(164),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym_body] = STATE(185),
    [sym_response_section] = STATE(114),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(115),
    [aux_sym_hurl_file_repeat2] = STATE(115),
    [aux_sym_response_repeat1] = STATE(114),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_GET] = ACTIONS(180),
    [anon_sym_HEAD] = ACTIONS(180),
    [anon_sym_POST] = ACTIONS(180),
    [anon_sym_PUT] = ACTIONS(180),
    [anon_sym_DELETE] = ACTIONS(180),
    [anon_sym_CONNECT] = ACTIONS(180),
    [anon_sym_OPTIONS] = ACTIONS(180),
    [anon_sym_TRACE] = ACTIONS(180),
    [anon_sym_PATCH] = ACTIONS(180),
    [anon_sym_LINK] = ACTIONS(180),
    [anon_sym_UNLINK] = ACTIONS(180),
    [anon_sym_PURGE] = ACTIONS(180),
    [anon_sym_LOCK] = ACTIONS(180),
    [anon_sym_UNLOCK] = ACTIONS(180),
    [anon_sym_PROPFIND] = ACTIONS(180),
    [anon_sym_VIEW] = ACTIONS(180),
    [aux_sym_method_token1] = ACTIONS(180),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym_body] = STATE(181),
    [sym_response_section] = STATE(114),
    [sym_captures_section] = STATE(141),
    [sym_asserts_section] = STATE(141),
    [sym_bytes] = STATE(455),
    [sym_xml] = STATE(518),
    [sym_xml_prolog_tag] = STATE(305),
    [sym_xml_tag] = STATE(543),
    [sym_xml_open_tag] = STATE(190),
    [sym_oneline_base64] = STATE(518),
    [sym_oneline_file] = STATE(518),
    [sym_oneline_hex] = STATE(518),
    [sym_oneline_string] = STATE(518),
    [sym_multiline_string] = STATE(518),
    [sym_json_value] = STATE(518),
    [sym_json_object] = STATE(533),
    [sym_json_array] = STATE(533),
    [sym_json_string] = STATE(533),
    [sym_json_number] = STATE(533),
    [sym_template] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_integer] = STATE(287),
    [sym_lt] = STATE(115),
    [aux_sym_hurl_file_repeat2] = STATE(115),
    [aux_sym_response_repeat1] = STATE(114),
    [aux_sym_xml_repeat1] = STATE(305),
    [aux_sym_integer_repeat1] = STATE(168),
    [aux_sym_lt_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_GET] = ACTIONS(202),
    [anon_sym_HEAD] = ACTIONS(202),
    [anon_sym_POST] = ACTIONS(202),
    [anon_sym_PUT] = ACTIONS(202),
    [anon_sym_DELETE] = ACTIONS(202),
    [anon_sym_CONNECT] = ACTIONS(202),
    [anon_sym_OPTIONS] = ACTIONS(202),
    [anon_sym_TRACE] = ACTIONS(202),
    [anon_sym_PATCH] = ACTIONS(202),
    [anon_sym_LINK] = ACTIONS(202),
    [anon_sym_UNLINK] = ACTIONS(202),
    [anon_sym_PURGE] = ACTIONS(202),
    [anon_sym_LOCK] = ACTIONS(202),
    [anon_sym_UNLOCK] = ACTIONS(202),
    [anon_sym_PROPFIND] = ACTIONS(202),
    [anon_sym_VIEW] = ACTIONS(202),
    [aux_sym_method_token1] = ACTIONS(202),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(166),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(168),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_file_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_QMARK] = ACTIONS(33),
    [anon_sym_base64_COMMA] = ACTIONS(35),
    [anon_sym_hex_COMMA] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym_digit] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [sym_value_string] = STATE(101),
    [sym_value_string_content] = STATE(57),
    [sym_value_string_text] = STATE(77),
    [sym_value_string_escaped_char] = STATE(77),
    [sym_template] = STATE(57),
    [sym_boolean] = STATE(101),
    [sym_integer] = STATE(81),
    [sym_float] = STATE(101),
    [aux_sym_value_string_repeat1] = STATE(57),
    [aux_sym_value_string_content_repeat1] = STATE(77),
    [aux_sym_value_string_text_repeat1] = STATE(79),
    [aux_sym_integer_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_GET] = ACTIONS(206),
    [anon_sym_HEAD] = ACTIONS(206),
    [anon_sym_POST] = ACTIONS(206),
    [anon_sym_PUT] = ACTIONS(206),
    [anon_sym_DELETE] = ACTIONS(206),
    [anon_sym_CONNECT] = ACTIONS(206),
    [anon_sym_OPTIONS] = ACTIONS(206),
    [anon_sym_TRACE] = ACTIONS(206),
    [anon_sym_PATCH] = ACTIONS(206),
    [anon_sym_LINK] = ACTIONS(206),
    [anon_sym_UNLINK] = ACTIONS(206),
    [anon_sym_PURGE] = ACTIONS(206),
    [anon_sym_LOCK] = ACTIONS(206),
    [anon_sym_UNLOCK] = ACTIONS(206),
    [anon_sym_PROPFIND] = ACTIONS(206),
    [anon_sym_VIEW] = ACTIONS(206),
    [aux_sym_method_token1] = ACTIONS(206),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(206),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(206),
    [anon_sym_HTTP_SLASH2] = ACTIONS(206),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(206),
    [anon_sym_HTTP] = ACTIONS(206),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKQuery_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKForm_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKMultipart_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(206),
    [anon_sym_null] = ACTIONS(206),
    [anon_sym_file_COMMA] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_LT_QMARK] = ACTIONS(206),
    [anon_sym_base64_COMMA] = ACTIONS(206),
    [anon_sym_hex_COMMA] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(208),
    [sym_key_string_text] = ACTIONS(206),
    [anon_sym_BSLASH2] = ACTIONS(204),
    [aux_sym_value_string_text_token1] = ACTIONS(210),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(206),
    [anon_sym_LF] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(206),
    [anon_sym_false] = ACTIONS(206),
    [sym_digit] = ACTIONS(206),
    [sym_comment] = ACTIONS(206),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(571), 1,
      sym_key_string,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(25), 2,
      sym_multipart_form_data_param,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(95), 2,
      sym_key_value,
      sym_file_param,
    STATE(223), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(214), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [87] = 11,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(571), 1,
      sym_key_string,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(26), 2,
      sym_multipart_form_data_param,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(95), 2,
      sym_key_value,
      sym_file_param,
    STATE(223), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(218), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [174] = 14,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_key_string_text,
    ACTIONS(227), 1,
      anon_sym_BSLASH2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(236), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(571), 1,
      sym_key_string,
    STATE(26), 2,
      sym_multipart_form_data_param,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(95), 2,
      sym_key_value,
      sym_file_param,
    STATE(223), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(222), 45,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [267] = 11,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(571), 1,
      sym_key_string,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(28), 2,
      sym_multipart_form_data_param,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(95), 2,
      sym_key_value,
      sym_file_param,
    STATE(223), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(218), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [354] = 11,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(571), 1,
      sym_key_string,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(26), 2,
      sym_multipart_form_data_param,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(95), 2,
      sym_key_value,
      sym_file_param,
    STATE(223), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(241), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [441] = 14,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym_key_string_text,
    ACTIONS(250), 1,
      anon_sym_BSLASH2,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(450), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(221), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(245), 45,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [533] = 5,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_lt_repeat1,
    ACTIONS(194), 59,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [607] = 5,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(269), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_lt_repeat1,
    ACTIONS(184), 59,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [681] = 2,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(274), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [748] = 2,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(278), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [815] = 2,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(282), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [882] = 2,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(286), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [949] = 2,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(290), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1016] = 2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1083] = 2,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(298), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1150] = 2,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(302), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1217] = 2,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(306), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1284] = 2,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(310), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1351] = 2,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(314), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1418] = 2,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(318), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1485] = 2,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(322), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1552] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(326), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1619] = 2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(330), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1686] = 2,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(334), 60,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1753] = 6,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(338), 56,
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
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
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
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [1828] = 13,
    ACTIONS(350), 1,
      anon_sym_variable,
    ACTIONS(354), 1,
      anon_sym_header,
    ACTIONS(356), 1,
      anon_sym_certificate,
    ACTIONS(358), 1,
      anon_sym_cookie,
    ACTIONS(360), 1,
      anon_sym_xpath,
    ACTIONS(362), 1,
      anon_sym_jsonpath,
    ACTIONS(364), 1,
      anon_sym_regex,
    STATE(55), 1,
      sym_query,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(50), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(352), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(133), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(348), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [1916] = 13,
    ACTIONS(350), 1,
      anon_sym_variable,
    ACTIONS(354), 1,
      anon_sym_header,
    ACTIONS(356), 1,
      anon_sym_certificate,
    ACTIONS(358), 1,
      anon_sym_cookie,
    ACTIONS(360), 1,
      anon_sym_xpath,
    ACTIONS(362), 1,
      anon_sym_jsonpath,
    ACTIONS(364), 1,
      anon_sym_regex,
    STATE(55), 1,
      sym_query,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(51), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(352), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(133), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(368), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2004] = 13,
    ACTIONS(374), 1,
      anon_sym_variable,
    ACTIONS(380), 1,
      anon_sym_header,
    ACTIONS(383), 1,
      anon_sym_certificate,
    ACTIONS(386), 1,
      anon_sym_cookie,
    ACTIONS(389), 1,
      anon_sym_xpath,
    ACTIONS(392), 1,
      anon_sym_jsonpath,
    ACTIONS(395), 1,
      anon_sym_regex,
    STATE(55), 1,
      sym_query,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(51), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(377), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(133), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(372), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2092] = 13,
    ACTIONS(350), 1,
      anon_sym_variable,
    ACTIONS(354), 1,
      anon_sym_header,
    ACTIONS(356), 1,
      anon_sym_certificate,
    ACTIONS(358), 1,
      anon_sym_cookie,
    ACTIONS(360), 1,
      anon_sym_xpath,
    ACTIONS(362), 1,
      anon_sym_jsonpath,
    ACTIONS(364), 1,
      anon_sym_regex,
    STATE(55), 1,
      sym_query,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(51), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(352), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(133), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(348), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2180] = 13,
    ACTIONS(350), 1,
      anon_sym_variable,
    ACTIONS(354), 1,
      anon_sym_header,
    ACTIONS(356), 1,
      anon_sym_certificate,
    ACTIONS(358), 1,
      anon_sym_cookie,
    ACTIONS(360), 1,
      anon_sym_xpath,
    ACTIONS(362), 1,
      anon_sym_jsonpath,
    ACTIONS(364), 1,
      anon_sym_regex,
    STATE(55), 1,
      sym_query,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(52), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(352), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(133), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(400), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2268] = 24,
    ACTIONS(402), 1,
      anon_sym_xpath,
    ACTIONS(404), 1,
      anon_sym_regex,
    ACTIONS(406), 1,
      anon_sym_not,
    ACTIONS(422), 1,
      anon_sym_startsWith,
    ACTIONS(424), 1,
      anon_sym_endsWith,
    ACTIONS(426), 1,
      anon_sym_contains,
    ACTIONS(428), 1,
      anon_sym_matches,
    ACTIONS(430), 1,
      anon_sym_includes,
    ACTIONS(434), 1,
      anon_sym_nth,
    ACTIONS(436), 1,
      anon_sym_replace,
    ACTIONS(438), 1,
      anon_sym_split,
    STATE(387), 1,
      sym_predicate,
    STATE(585), 1,
      sym_predicate_func,
    ACTIONS(410), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(412), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(414), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(416), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(418), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(113), 2,
      sym_filter,
      aux_sym_assert_repeat1,
    STATE(122), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(408), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    ACTIONS(432), 11,
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
    STATE(574), 11,
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
  [2377] = 24,
    ACTIONS(402), 1,
      anon_sym_xpath,
    ACTIONS(404), 1,
      anon_sym_regex,
    ACTIONS(406), 1,
      anon_sym_not,
    ACTIONS(422), 1,
      anon_sym_startsWith,
    ACTIONS(424), 1,
      anon_sym_endsWith,
    ACTIONS(426), 1,
      anon_sym_contains,
    ACTIONS(428), 1,
      anon_sym_matches,
    ACTIONS(430), 1,
      anon_sym_includes,
    ACTIONS(434), 1,
      anon_sym_nth,
    ACTIONS(436), 1,
      anon_sym_replace,
    ACTIONS(438), 1,
      anon_sym_split,
    STATE(397), 1,
      sym_predicate,
    STATE(585), 1,
      sym_predicate_func,
    ACTIONS(410), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(412), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(414), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(416), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(418), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(54), 2,
      sym_filter,
      aux_sym_assert_repeat1,
    STATE(122), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(408), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    ACTIONS(432), 11,
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
    STATE(574), 11,
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
  [2486] = 14,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    ACTIONS(453), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(456), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(459), 1,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(465), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    ACTIONS(444), 2,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
    ACTIONS(447), 2,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
    ACTIONS(450), 2,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
    STATE(56), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(224), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(110), 6,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_basic_auth_section,
      sym_options_section,
    ACTIONS(442), 37,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [2575] = 7,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_value_string_text_token1,
    STATE(79), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    STATE(58), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(77), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(470), 49,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2650] = 8,
    ACTIONS(476), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(482), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(79), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    STATE(58), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(77), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(474), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2727] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(487), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2803] = 9,
    ACTIONS(493), 1,
      sym_key_string_text,
    ACTIONS(496), 1,
      anon_sym_BSLASH2,
    ACTIONS(499), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(491), 46,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2881] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(504), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [2957] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(508), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3033] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(65), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(512), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3109] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(61), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(516), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3185] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(60), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(516), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3261] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(62), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(487), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3337] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(616), 1,
      sym_key_string,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(59), 2,
      sym_key_value,
      aux_sym_form_params_section_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(520), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3413] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(524), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3488] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(528), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3563] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(532), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3638] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(536), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3713] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(540), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3788] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(544), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3863] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(546), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(548), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [3938] = 8,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(552), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4013] = 39,
    ACTIONS(27), 1,
      anon_sym_null,
    ACTIONS(29), 1,
      anon_sym_file_COMMA,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_QMARK,
    ACTIONS(35), 1,
      anon_sym_base64_COMMA,
    ACTIONS(37), 1,
      anon_sym_hex_COMMA,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_BQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      sym_digit,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(562), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(564), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(147), 1,
      aux_sym_lt_repeat1,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(190), 1,
      sym_xml_open_tag,
    STATE(287), 1,
      sym_integer,
    STATE(306), 1,
      sym_template,
    STATE(379), 1,
      sym_key_value,
    STATE(380), 1,
      sym_bytes,
    STATE(543), 1,
      sym_xml_tag,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(554), 2,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
    ACTIONS(556), 2,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
    ACTIONS(558), 2,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
    STATE(144), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(256), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(305), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(533), 5,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_boolean,
    STATE(518), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
  [4149] = 6,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_value_string_text_token1,
    STATE(79), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(566), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    STATE(78), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(568), 49,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4219] = 6,
    ACTIONS(574), 1,
      anon_sym_BSLASH,
    ACTIONS(577), 1,
      aux_sym_value_string_text_token1,
    STATE(79), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(570), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    STATE(78), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(572), 49,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4289] = 4,
    ACTIONS(584), 1,
      aux_sym_value_string_text_token1,
    STATE(80), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(582), 50,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4352] = 4,
    ACTIONS(590), 1,
      aux_sym_value_string_text_token1,
    STATE(80), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(588), 50,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4415] = 4,
    ACTIONS(597), 1,
      anon_sym_DOT,
    STATE(97), 1,
      sym_fraction,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(595), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4477] = 2,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(601), 51,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4535] = 2,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(605), 51,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4593] = 3,
    STATE(85), 1,
      aux_sym_integer_repeat1,
    ACTIONS(607), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(609), 49,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      anon_sym_DOT,
      sym_comment,
  [4653] = 4,
    ACTIONS(615), 1,
      sym_digit,
    STATE(85), 1,
      aux_sym_integer_repeat1,
    ACTIONS(611), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(613), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DOT,
      sym_comment,
  [4715] = 2,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(620), 51,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4773] = 2,
    ACTIONS(622), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(624), 51,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_key_string_text,
      aux_sym_value_string_text_token1,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [4831] = 5,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_lt_repeat1,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(194), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [4894] = 5,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(633), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_lt_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(184), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [4957] = 3,
    STATE(91), 1,
      aux_sym_integer_repeat1,
    ACTIONS(636), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(638), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5016] = 4,
    ACTIONS(640), 1,
      sym_digit,
    STATE(91), 1,
      aux_sym_integer_repeat1,
    ACTIONS(611), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(613), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_comment,
  [5077] = 2,
    ACTIONS(643), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(645), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5133] = 2,
    ACTIONS(647), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(649), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5189] = 2,
    ACTIONS(651), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(653), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5245] = 2,
    ACTIONS(655), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(657), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5301] = 2,
    ACTIONS(659), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(661), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5357] = 2,
    ACTIONS(663), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(665), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5413] = 2,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(669), 49,
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
      sym_status_query,
      sym_url_query,
      anon_sym_header,
      anon_sym_certificate,
      anon_sym_cookie,
      sym_body_query,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5469] = 2,
    ACTIONS(671), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(673), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5525] = 14,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym_key_string_text,
    ACTIONS(250), 1,
      anon_sym_BSLASH2,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(449), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    STATE(100), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(216), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(245), 33,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [5605] = 2,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(595), 48,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5661] = 2,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(677), 49,
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
      sym_status_query,
      sym_url_query,
      anon_sym_header,
      anon_sym_certificate,
      anon_sym_cookie,
      sym_body_query,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5717] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(608), 1,
      sym_key_string,
    ACTIONS(679), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(107), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(222), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(681), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5788] = 13,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
    ACTIONS(687), 1,
      sym_key_string_text,
    ACTIONS(690), 1,
      anon_sym_BSLASH2,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(699), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(608), 1,
      sym_key_string,
    STATE(104), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(222), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(685), 33,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [5865] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(608), 1,
      sym_key_string,
    ACTIONS(702), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(106), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(222), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(704), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [5936] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(608), 1,
      sym_key_string,
    ACTIONS(679), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(104), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(222), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(681), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [6007] = 10,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(608), 1,
      sym_key_string,
    ACTIONS(706), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(104), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(222), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(708), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [6078] = 35,
    ACTIONS(27), 1,
      anon_sym_null,
    ACTIONS(29), 1,
      anon_sym_file_COMMA,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_QMARK,
    ACTIONS(35), 1,
      anon_sym_base64_COMMA,
    ACTIONS(37), 1,
      anon_sym_hex_COMMA,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_key_string_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(45), 1,
      anon_sym_BQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      sym_digit,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(712), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(172), 1,
      aux_sym_lt_repeat1,
    STATE(190), 1,
      sym_xml_open_tag,
    STATE(287), 1,
      sym_integer,
    STATE(306), 1,
      sym_template,
    STATE(385), 1,
      sym_bytes,
    STATE(454), 1,
      sym_key_value,
    STATE(543), 1,
      sym_xml_tag,
    STATE(615), 1,
      sym_key_string,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(256), 2,
      sym_key_string_content,
      aux_sym_key_string_repeat1,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(305), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(533), 5,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_boolean,
    STATE(518), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
  [6199] = 32,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_null,
    ACTIONS(29), 1,
      anon_sym_file_COMMA,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_QMARK,
    ACTIONS(35), 1,
      anon_sym_base64_COMMA,
    ACTIONS(37), 1,
      anon_sym_hex_COMMA,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_BQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      sym_digit,
    ACTIONS(560), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(562), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(564), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(190), 1,
      sym_xml_open_tag,
    STATE(287), 1,
      sym_integer,
    STATE(380), 1,
      sym_bytes,
    STATE(543), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(554), 2,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
    ACTIONS(556), 2,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
    ACTIONS(558), 2,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(305), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(533), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(518), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
  [6313] = 2,
    ACTIONS(714), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(716), 47,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [6367] = 4,
    ACTIONS(718), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(609), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(607), 40,
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
  [6424] = 4,
    ACTIONS(720), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(613), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(611), 40,
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
  [6481] = 10,
    ACTIONS(723), 1,
      anon_sym_xpath,
    ACTIONS(726), 1,
      anon_sym_regex,
    ACTIONS(736), 1,
      anon_sym_nth,
    ACTIONS(739), 1,
      anon_sym_replace,
    ACTIONS(742), 1,
      anon_sym_split,
    STATE(113), 2,
      sym_filter,
      aux_sym_assert_repeat1,
    ACTIONS(729), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(122), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(733), 11,
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
    ACTIONS(731), 20,
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
  [6550] = 10,
    ACTIONS(745), 1,
      ts_builtin_sym_end,
    ACTIONS(749), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(752), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(114), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(141), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(283), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(747), 32,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [6615] = 28,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_null,
    ACTIONS(29), 1,
      anon_sym_file_COMMA,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_QMARK,
    ACTIONS(35), 1,
      anon_sym_base64_COMMA,
    ACTIONS(37), 1,
      anon_sym_hex_COMMA,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_BQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      sym_digit,
    ACTIONS(710), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(712), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(190), 1,
      sym_xml_open_tag,
    STATE(287), 1,
      sym_integer,
    STATE(385), 1,
      sym_bytes,
    STATE(543), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(305), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(533), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(518), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
  [6714] = 2,
    ACTIONS(763), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(761), 37,
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
  [6761] = 2,
    ACTIONS(767), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(765), 37,
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
  [6808] = 2,
    ACTIONS(771), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(769), 37,
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
  [6855] = 2,
    ACTIONS(775), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(773), 37,
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
  [6902] = 2,
    ACTIONS(779), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(777), 36,
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
  [6948] = 2,
    ACTIONS(783), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(781), 36,
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
  [6994] = 2,
    ACTIONS(787), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(785), 36,
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
  [7040] = 2,
    ACTIONS(791), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(789), 36,
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
  [7086] = 2,
    ACTIONS(795), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(793), 36,
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
  [7132] = 2,
    ACTIONS(799), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(797), 36,
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
  [7178] = 2,
    ACTIONS(803), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(801), 35,
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
  [7223] = 2,
    ACTIONS(807), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(805), 35,
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
  [7268] = 2,
    ACTIONS(811), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(809), 35,
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
  [7313] = 2,
    ACTIONS(815), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(813), 35,
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
  [7358] = 2,
    ACTIONS(819), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(817), 35,
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
  [7403] = 2,
    ACTIONS(823), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(821), 35,
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
  [7448] = 2,
    ACTIONS(827), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(825), 35,
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
  [7493] = 2,
    ACTIONS(831), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(829), 35,
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
  [7538] = 5,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_lt_repeat1,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(194), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [7589] = 5,
    ACTIONS(837), 1,
      anon_sym_LF,
    ACTIONS(840), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_lt_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
    ACTIONS(184), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [7640] = 2,
    ACTIONS(843), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(845), 36,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [7684] = 2,
    ACTIONS(659), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(661), 36,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [7728] = 2,
    ACTIONS(847), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(849), 36,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [7772] = 2,
    ACTIONS(851), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(853), 36,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [7816] = 2,
    ACTIONS(643), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LF,
    ACTIONS(645), 36,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [7860] = 2,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(857), 35,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
      sym_comment,
  [7902] = 14,
    ACTIONS(422), 1,
      anon_sym_startsWith,
    ACTIONS(424), 1,
      anon_sym_endsWith,
    ACTIONS(426), 1,
      anon_sym_contains,
    ACTIONS(428), 1,
      anon_sym_matches,
    ACTIONS(430), 1,
      anon_sym_includes,
    STATE(527), 1,
      sym_predicate_func,
    ACTIONS(410), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(412), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(414), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(416), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(418), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(420), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    ACTIONS(408), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    STATE(574), 11,
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
  [7966] = 18,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_cacert,
    ACTIONS(81), 1,
      anon_sym_compressed,
    ACTIONS(83), 1,
      anon_sym_location,
    ACTIONS(85), 1,
      anon_sym_insecure,
    ACTIONS(87), 1,
      anon_sym_max_DASHredirs,
    ACTIONS(89), 1,
      anon_sym_path_DASHas_DASHis,
    ACTIONS(91), 1,
      anon_sym_proxy,
    ACTIONS(93), 1,
      anon_sym_retry,
    ACTIONS(95), 1,
      anon_sym_retry_DASHinterval,
    ACTIONS(97), 1,
      anon_sym_variable,
    ACTIONS(99), 1,
      anon_sym_verbose,
    ACTIONS(101), 1,
      anon_sym_very_DASHverbose,
    ACTIONS(103), 1,
      anon_sym_retry_DASHmax_DASHcount,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(32), 13,
      sym_ca_certificate_option,
      sym_compressed_option,
      sym_follow_redirect_option,
      sym_insecure_option,
      sym_max_redirs_option,
      sym_path_as_is_option,
      sym_proxy_option,
      sym_retry_option,
      sym_retry_interval_option,
      sym_variable_option,
      sym_verbose_option,
      sym_very_verbose_option,
      sym_retry_max_count_option,
  [8034] = 6,
    ACTIONS(336), 1,
      anon_sym_BSLASH2,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(862), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_lt_repeat1,
    STATE(144), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(338), 25,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [8078] = 9,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(187), 1,
      sym_response,
    STATE(474), 1,
      sym_version,
    STATE(234), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(869), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(867), 17,
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
  [8127] = 5,
    ACTIONS(182), 1,
      anon_sym_BSLASH2,
    ACTIONS(875), 1,
      anon_sym_LF,
    ACTIONS(878), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_lt_repeat1,
    ACTIONS(184), 25,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [8167] = 5,
    ACTIONS(192), 1,
      anon_sym_BSLASH2,
    ACTIONS(881), 1,
      anon_sym_LF,
    ACTIONS(883), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_lt_repeat1,
    ACTIONS(194), 25,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [8207] = 12,
    ACTIONS(885), 1,
      anon_sym_xpath,
    ACTIONS(887), 1,
      anon_sym_regex,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_nth,
    ACTIONS(895), 1,
      anon_sym_replace,
    ACTIONS(897), 1,
      anon_sym_split,
    ACTIONS(899), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_lt_repeat1,
    STATE(138), 1,
      sym_lt,
    STATE(156), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(208), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(891), 11,
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
  [8259] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(145), 1,
      sym_request,
    STATE(231), 1,
      sym_method,
    STATE(153), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(165), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(5), 17,
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
  [8305] = 12,
    ACTIONS(885), 1,
      anon_sym_xpath,
    ACTIONS(887), 1,
      anon_sym_regex,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_nth,
    ACTIONS(895), 1,
      anon_sym_replace,
    ACTIONS(897), 1,
      anon_sym_split,
    ACTIONS(899), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_lt_repeat1,
    STATE(139), 1,
      sym_lt,
    STATE(156), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(208), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(891), 11,
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
  [8357] = 12,
    ACTIONS(885), 1,
      anon_sym_xpath,
    ACTIONS(887), 1,
      anon_sym_regex,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_nth,
    ACTIONS(895), 1,
      anon_sym_replace,
    ACTIONS(897), 1,
      anon_sym_split,
    ACTIONS(899), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_lt_repeat1,
    STATE(138), 1,
      sym_lt,
    STATE(150), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(208), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(891), 11,
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
  [8409] = 12,
    ACTIONS(885), 1,
      anon_sym_xpath,
    ACTIONS(887), 1,
      anon_sym_regex,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_nth,
    ACTIONS(895), 1,
      anon_sym_replace,
    ACTIONS(897), 1,
      anon_sym_split,
    ACTIONS(899), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_lt_repeat1,
    STATE(136), 1,
      sym_lt,
    STATE(148), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(208), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(891), 11,
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
  [8461] = 9,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
    ACTIONS(908), 1,
      anon_sym_LF,
    ACTIONS(911), 1,
      sym_comment,
    STATE(145), 1,
      sym_request,
    STATE(186), 1,
      aux_sym_lt_repeat1,
    STATE(231), 1,
      sym_method,
    STATE(153), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(167), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(905), 17,
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
  [8507] = 2,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(916), 23,
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
  [8537] = 2,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(920), 23,
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
  [8567] = 10,
    ACTIONS(922), 1,
      anon_sym_xpath,
    ACTIONS(925), 1,
      anon_sym_regex,
    ACTIONS(928), 1,
      anon_sym_LF,
    ACTIONS(933), 1,
      anon_sym_nth,
    ACTIONS(936), 1,
      anon_sym_replace,
    ACTIONS(939), 1,
      anon_sym_split,
    ACTIONS(942), 1,
      sym_comment,
    STATE(156), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(208), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(930), 11,
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
  [8613] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 23,
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
  [8643] = 2,
    ACTIONS(944), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(946), 23,
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
  [8673] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 23,
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
  [8703] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 23,
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
  [8733] = 7,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(230), 1,
      sym_method,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(5), 17,
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
  [8772] = 9,
    ACTIONS(402), 1,
      anon_sym_xpath,
    ACTIONS(404), 1,
      anon_sym_regex,
    ACTIONS(434), 1,
      anon_sym_nth,
    ACTIONS(436), 1,
      anon_sym_replace,
    ACTIONS(438), 1,
      anon_sym_split,
    ACTIONS(948), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(163), 2,
      sym_filter,
      aux_sym_assert_repeat1,
    STATE(122), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(432), 11,
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
  [8815] = 9,
    ACTIONS(402), 1,
      anon_sym_xpath,
    ACTIONS(404), 1,
      anon_sym_regex,
    ACTIONS(434), 1,
      anon_sym_nth,
    ACTIONS(436), 1,
      anon_sym_replace,
    ACTIONS(438), 1,
      anon_sym_split,
    ACTIONS(950), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(113), 2,
      sym_filter,
      aux_sym_assert_repeat1,
    STATE(122), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(432), 11,
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
  [8858] = 6,
    ACTIONS(336), 1,
      anon_sym_BSLASH2,
    ACTIONS(952), 1,
      anon_sym_LF,
    ACTIONS(955), 1,
      sym_comment,
    STATE(172), 1,
      aux_sym_lt_repeat1,
    STATE(164), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(338), 18,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [8895] = 7,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(958), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(230), 1,
      sym_method,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(5), 17,
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
  [8934] = 4,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(960), 1,
      sym_digit,
    STATE(166), 1,
      aux_sym_integer_repeat1,
    ACTIONS(613), 20,
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
  [8966] = 6,
    ACTIONS(963), 1,
      anon_sym_LF,
    ACTIONS(965), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_lt_repeat1,
    STATE(230), 1,
      sym_method,
    STATE(170), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(5), 17,
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
  [9002] = 4,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(967), 1,
      sym_digit,
    STATE(166), 1,
      aux_sym_integer_repeat1,
    ACTIONS(609), 20,
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
  [9034] = 10,
    ACTIONS(969), 1,
      anon_sym_variable,
    ACTIONS(973), 1,
      anon_sym_header,
    ACTIONS(975), 1,
      anon_sym_certificate,
    ACTIONS(977), 1,
      anon_sym_cookie,
    ACTIONS(979), 1,
      anon_sym_xpath,
    ACTIONS(981), 1,
      anon_sym_jsonpath,
    ACTIONS(983), 1,
      anon_sym_regex,
    STATE(152), 1,
      sym_query,
    ACTIONS(971), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(196), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
  [9077] = 5,
    ACTIONS(985), 1,
      anon_sym_LF,
    ACTIONS(988), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_lt_repeat1,
    STATE(170), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(338), 17,
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
  [9110] = 10,
    ACTIONS(969), 1,
      anon_sym_variable,
    ACTIONS(973), 1,
      anon_sym_header,
    ACTIONS(975), 1,
      anon_sym_certificate,
    ACTIONS(977), 1,
      anon_sym_cookie,
    ACTIONS(979), 1,
      anon_sym_xpath,
    ACTIONS(981), 1,
      anon_sym_jsonpath,
    ACTIONS(983), 1,
      anon_sym_regex,
    STATE(151), 1,
      sym_query,
    ACTIONS(971), 7,
      sym_status_query,
      sym_url_query,
      sym_body_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
    STATE(196), 7,
      sym_header_query,
      sym_certificate_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
  [9153] = 5,
    ACTIONS(192), 1,
      anon_sym_BSLASH2,
    ACTIONS(991), 1,
      anon_sym_LF,
    ACTIONS(993), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_lt_repeat1,
    ACTIONS(194), 18,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [9186] = 5,
    ACTIONS(182), 1,
      anon_sym_BSLASH2,
    ACTIONS(995), 1,
      anon_sym_LF,
    ACTIONS(998), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_lt_repeat1,
    ACTIONS(184), 18,
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
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_true,
      anon_sym_false,
      sym_digit,
  [9219] = 13,
    ACTIONS(1001), 1,
      anon_sym_null,
    ACTIONS(1003), 1,
      anon_sym_file_COMMA,
    ACTIONS(1005), 1,
      anon_sym_base64_COMMA,
    ACTIONS(1007), 1,
      anon_sym_hex_COMMA,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1011), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(458), 1,
      sym_integer,
    STATE(529), 1,
      sym_predicate_value,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(528), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [9267] = 13,
    ACTIONS(1001), 1,
      anon_sym_null,
    ACTIONS(1003), 1,
      anon_sym_file_COMMA,
    ACTIONS(1005), 1,
      anon_sym_base64_COMMA,
    ACTIONS(1007), 1,
      anon_sym_hex_COMMA,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1011), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(458), 1,
      sym_integer,
    STATE(531), 1,
      sym_predicate_value,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(528), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [9315] = 13,
    ACTIONS(1001), 1,
      anon_sym_null,
    ACTIONS(1003), 1,
      anon_sym_file_COMMA,
    ACTIONS(1005), 1,
      anon_sym_base64_COMMA,
    ACTIONS(1007), 1,
      anon_sym_hex_COMMA,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1011), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(458), 1,
      sym_integer,
    STATE(542), 1,
      sym_predicate_value,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(528), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [9363] = 13,
    ACTIONS(59), 1,
      sym_digit,
    ACTIONS(1019), 1,
      anon_sym_null,
    ACTIONS(1021), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    STATE(416), 1,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(206), 2,
      anon_sym_LF,
      sym_comment,
    STATE(101), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
    STATE(228), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(259), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9411] = 4,
    ACTIONS(1027), 1,
      anon_sym_LF,
    ACTIONS(1030), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_lt_repeat1,
    ACTIONS(184), 17,
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
  [9440] = 13,
    ACTIONS(59), 1,
      sym_digit,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1033), 1,
      anon_sym_null,
    ACTIONS(1035), 1,
      sym_key_string_text,
    ACTIONS(1037), 1,
      anon_sym_BSLASH2,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(422), 1,
      sym_integer,
    STATE(565), 1,
      sym_variable_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(295), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(242), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(564), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [9487] = 2,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(180), 18,
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
  [9512] = 2,
    ACTIONS(1039), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(1041), 18,
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
  [9537] = 2,
    ACTIONS(944), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(946), 18,
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
  [9562] = 2,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(916), 18,
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
  [9587] = 2,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(164), 18,
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
  [9612] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(202), 18,
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
  [9637] = 4,
    ACTIONS(1043), 1,
      anon_sym_LF,
    ACTIONS(1045), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_lt_repeat1,
    ACTIONS(194), 17,
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
  [9666] = 2,
    ACTIONS(1047), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(1049), 18,
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
  [9691] = 12,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(1051), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1053), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1057), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1059), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(191), 1,
      sym_xml_open_tag,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(309), 1,
      sym_xml_close_tag,
    STATE(225), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(192), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [9735] = 12,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(1051), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1057), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1059), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1061), 1,
      anon_sym_LT_SLASH,
    STATE(191), 1,
      sym_xml_open_tag,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(560), 1,
      sym_xml_close_tag,
    STATE(225), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(192), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [9779] = 12,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(1051), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1057), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1059), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1061), 1,
      anon_sym_LT_SLASH,
    STATE(191), 1,
      sym_xml_open_tag,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(549), 1,
      sym_xml_close_tag,
    STATE(225), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(189), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [9823] = 12,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(1051), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1053), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1057), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1059), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(191), 1,
      sym_xml_open_tag,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(330), 1,
      sym_xml_close_tag,
    STATE(225), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(188), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [9867] = 11,
    ACTIONS(1063), 1,
      anon_sym_LT,
    ACTIONS(1066), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1069), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1071), 1,
      anon_sym_BSLASH,
    ACTIONS(1074), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1077), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(191), 1,
      sym_xml_open_tag,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(225), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(192), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [9908] = 2,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(767), 17,
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
  [9931] = 2,
    ACTIONS(793), 1,
      anon_sym_LF,
    ACTIONS(795), 17,
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
  [9954] = 2,
    ACTIONS(789), 1,
      anon_sym_LF,
    ACTIONS(791), 17,
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
  [9977] = 2,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(831), 17,
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
  [10000] = 2,
    ACTIONS(769), 1,
      anon_sym_LF,
    ACTIONS(771), 17,
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
  [10023] = 2,
    ACTIONS(773), 1,
      anon_sym_LF,
    ACTIONS(775), 17,
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
  [10046] = 2,
    ACTIONS(813), 1,
      anon_sym_LF,
    ACTIONS(815), 17,
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
  [10069] = 2,
    ACTIONS(805), 1,
      anon_sym_LF,
    ACTIONS(807), 17,
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
  [10092] = 2,
    ACTIONS(821), 1,
      anon_sym_LF,
    ACTIONS(823), 17,
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
  [10115] = 2,
    ACTIONS(825), 1,
      anon_sym_LF,
    ACTIONS(827), 17,
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
  [10138] = 2,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(803), 17,
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
  [10161] = 2,
    ACTIONS(817), 1,
      anon_sym_LF,
    ACTIONS(819), 17,
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
  [10184] = 2,
    ACTIONS(781), 1,
      anon_sym_LF,
    ACTIONS(783), 17,
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
  [10207] = 2,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(811), 17,
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
  [10230] = 2,
    ACTIONS(797), 1,
      anon_sym_LF,
    ACTIONS(799), 17,
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
  [10253] = 2,
    ACTIONS(785), 1,
      anon_sym_LF,
    ACTIONS(787), 17,
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
  [10276] = 2,
    ACTIONS(777), 1,
      anon_sym_LF,
    ACTIONS(779), 17,
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
  [10299] = 1,
    ACTIONS(1080), 18,
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
  [10320] = 2,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 17,
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
  [10343] = 11,
    ACTIONS(1082), 1,
      anon_sym_null,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    ACTIONS(1088), 1,
      anon_sym_LBRACK,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1094), 1,
      sym_digit,
    STATE(296), 1,
      aux_sym_integer_repeat1,
    STATE(302), 1,
      sym_integer,
    STATE(554), 1,
      sym_json_value,
    ACTIONS(1092), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(493), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [10383] = 11,
    ACTIONS(1082), 1,
      anon_sym_null,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    ACTIONS(1088), 1,
      anon_sym_LBRACK,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(289), 1,
      sym_integer,
    STATE(492), 1,
      sym_json_value,
    ACTIONS(1092), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(493), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [10423] = 11,
    ACTIONS(1082), 1,
      anon_sym_null,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    ACTIONS(1088), 1,
      anon_sym_LBRACK,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(289), 1,
      sym_integer,
    STATE(465), 1,
      sym_json_value,
    ACTIONS(1092), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(493), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [10463] = 11,
    ACTIONS(1082), 1,
      anon_sym_null,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    ACTIONS(1088), 1,
      anon_sym_LBRACK,
    ACTIONS(1090), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(289), 1,
      sym_integer,
    STATE(555), 1,
      sym_json_value,
    ACTIONS(1092), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(493), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [10503] = 11,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(454), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    STATE(279), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10541] = 12,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(72), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(350), 1,
      sym_key_value,
    STATE(366), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(615), 1,
      sym_key_string,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10581] = 12,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(70), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(347), 1,
      sym_key_value,
    STATE(358), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(615), 1,
      sym_key_string,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10621] = 12,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(73), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(342), 1,
      sym_key_value,
    STATE(369), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(615), 1,
      sym_key_string,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10661] = 12,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(69), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(354), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(364), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10701] = 11,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(379), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    STATE(279), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10739] = 10,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(644), 1,
      sym_key_string,
    STATE(279), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10774] = 10,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_key_string_text,
    ACTIONS(1112), 1,
      anon_sym_BSLASH2,
    ACTIONS(1114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(639), 1,
      sym_key_string,
    STATE(279), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    STATE(326), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(265), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [10809] = 10,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(562), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(564), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    ACTIONS(554), 2,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKQuery_RBRACK,
    ACTIONS(556), 2,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKForm_RBRACK,
    ACTIONS(558), 2,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKMultipart_RBRACK,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
  [10844] = 4,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(226), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(470), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [10866] = 7,
    ACTIONS(1116), 1,
      anon_sym_BSLASH,
    ACTIONS(1119), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1122), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(474), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(226), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [10894] = 9,
    ACTIONS(1125), 1,
      anon_sym_BSLASH,
    ACTIONS(1127), 1,
      sym_filename_text,
    ACTIONS(1129), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(35), 1,
      sym_lt,
    STATE(395), 1,
      sym_filename,
    ACTIONS(873), 2,
      anon_sym_LF,
      sym_comment,
    STATE(290), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(244), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [10926] = 7,
    ACTIONS(1021), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(470), 2,
      anon_sym_LF,
      sym_comment,
    STATE(229), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(259), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [10953] = 7,
    ACTIONS(1131), 1,
      anon_sym_BSLASH,
    ACTIONS(1134), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1137), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(474), 2,
      anon_sym_LF,
      sym_comment,
    STATE(229), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(259), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [10980] = 7,
    ACTIONS(1021), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    STATE(445), 1,
      sym_value_string,
    STATE(228), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(259), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [11006] = 7,
    ACTIONS(1021), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    STATE(451), 1,
      sym_value_string,
    STATE(228), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(259), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [11032] = 7,
    ACTIONS(1140), 1,
      anon_sym_BSLASH,
    ACTIONS(1142), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1144), 1,
      anon_sym_LF,
    ACTIONS(1146), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1148), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(236), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(274), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [11058] = 7,
    ACTIONS(1021), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1025), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    STATE(412), 1,
      sym_value_string,
    STATE(228), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(259), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [11084] = 6,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(489), 1,
      sym_version,
    STATE(255), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(869), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
  [11108] = 7,
    ACTIONS(1150), 1,
      anon_sym_BSLASH,
    ACTIONS(1153), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1155), 1,
      anon_sym_LF,
    ACTIONS(1158), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1161), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(274), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [11134] = 7,
    ACTIONS(1140), 1,
      anon_sym_BSLASH,
    ACTIONS(1146), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1148), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1164), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1166), 1,
      anon_sym_LF,
    STATE(235), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(274), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [11160] = 7,
    ACTIONS(1140), 1,
      anon_sym_BSLASH,
    ACTIONS(1146), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1148), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1164), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1166), 1,
      anon_sym_LF,
    STATE(238), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(274), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [11186] = 7,
    ACTIONS(1140), 1,
      anon_sym_BSLASH,
    ACTIONS(1146), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1148), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1168), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1170), 1,
      anon_sym_LF,
    STATE(235), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(274), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [11212] = 6,
    ACTIONS(1172), 1,
      anon_sym_DQUOTE,
    ACTIONS(1174), 1,
      sym_quoted_string_text,
    ACTIONS(1176), 1,
      anon_sym_BSLASH,
    ACTIONS(1178), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(249), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(301), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [11235] = 6,
    ACTIONS(1180), 1,
      anon_sym_BSLASH,
    ACTIONS(1182), 1,
      anon_sym_BQUOTE,
    ACTIONS(1184), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1186), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(285), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [11258] = 6,
    ACTIONS(1180), 1,
      anon_sym_BSLASH,
    ACTIONS(1184), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1186), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1188), 1,
      anon_sym_BQUOTE,
    STATE(240), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(285), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [11281] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1037), 1,
      anon_sym_BSLASH2,
    ACTIONS(1190), 1,
      sym_key_string_text,
    ACTIONS(1192), 1,
      anon_sym_LF,
    ACTIONS(1194), 1,
      sym_comment,
    STATE(295), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(243), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11306] = 7,
    ACTIONS(1196), 1,
      sym_key_string_text,
    ACTIONS(1199), 1,
      anon_sym_BSLASH2,
    ACTIONS(1202), 1,
      anon_sym_LF,
    ACTIONS(1204), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1207), 1,
      sym_comment,
    STATE(295), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(243), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11331] = 6,
    ACTIONS(1125), 1,
      anon_sym_BSLASH,
    ACTIONS(1127), 1,
      sym_filename_text,
    ACTIONS(1129), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1209), 2,
      anon_sym_LF,
      sym_comment,
    STATE(290), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(251), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [11354] = 7,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1211), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(602), 1,
      sym_key_value,
    STATE(615), 1,
      sym_key_string,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(256), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11379] = 5,
    ACTIONS(1213), 1,
      anon_sym_BSLASH,
    ACTIONS(1216), 1,
      aux_sym_value_string_text_token1,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(246), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(572), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [11400] = 5,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1057), 1,
      aux_sym_value_string_text_token1,
    STATE(286), 1,
      aux_sym_value_string_text_repeat1,
    STATE(246), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(568), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [11421] = 7,
    ACTIONS(1219), 1,
      anon_sym_SEMI,
    ACTIONS(1221), 1,
      anon_sym_BSLASH,
    ACTIONS(1223), 1,
      sym_filename_text,
    ACTIONS(1225), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(661), 1,
      sym_filename,
    STATE(321), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(262), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [11446] = 6,
    ACTIONS(1227), 1,
      anon_sym_DQUOTE,
    ACTIONS(1229), 1,
      sym_quoted_string_text,
    ACTIONS(1232), 1,
      anon_sym_BSLASH,
    ACTIONS(1235), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(249), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(301), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [11469] = 6,
    ACTIONS(1174), 1,
      sym_quoted_string_text,
    ACTIONS(1176), 1,
      anon_sym_BSLASH,
    ACTIONS(1178), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1238), 1,
      anon_sym_DQUOTE,
    STATE(239), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(301), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [11492] = 6,
    ACTIONS(1240), 1,
      anon_sym_BSLASH,
    ACTIONS(1245), 1,
      sym_filename_text,
    ACTIONS(1248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1243), 2,
      anon_sym_LF,
      sym_comment,
    STATE(290), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(251), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [11515] = 7,
    ACTIONS(1221), 1,
      anon_sym_BSLASH,
    ACTIONS(1223), 1,
      sym_filename_text,
    ACTIONS(1225), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1251), 1,
      anon_sym_SEMI,
    STATE(622), 1,
      sym_filename,
    STATE(321), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(262), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [11540] = 6,
    ACTIONS(1253), 1,
      anon_sym_BSLASH,
    ACTIONS(1256), 1,
      anon_sym_BQUOTE,
    ACTIONS(1258), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(285), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [11563] = 7,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1207), 1,
      anon_sym_COLON2,
    ACTIONS(1264), 1,
      sym_key_string_text,
    ACTIONS(1267), 1,
      anon_sym_BSLASH2,
    ACTIONS(1270), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(254), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11588] = 5,
    ACTIONS(1273), 1,
      anon_sym_LF,
    ACTIONS(1276), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(255), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
    ACTIONS(338), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
  [11609] = 7,
    ACTIONS(43), 1,
      anon_sym_BSLASH2,
    ACTIONS(1098), 1,
      sym_key_string_text,
    ACTIONS(1192), 1,
      anon_sym_COLON,
    ACTIONS(1194), 1,
      anon_sym_COLON2,
    ACTIONS(1211), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(293), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(254), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11634] = 6,
    ACTIONS(1174), 1,
      sym_quoted_string_text,
    ACTIONS(1176), 1,
      anon_sym_BSLASH,
    ACTIONS(1178), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1279), 1,
      anon_sym_DQUOTE,
    STATE(249), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(301), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [11657] = 6,
    ACTIONS(1174), 1,
      sym_quoted_string_text,
    ACTIONS(1176), 1,
      anon_sym_BSLASH,
    ACTIONS(1178), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1281), 1,
      anon_sym_DQUOTE,
    STATE(257), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(301), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [11680] = 5,
    ACTIONS(1021), 1,
      anon_sym_BSLASH,
    ACTIONS(1023), 1,
      aux_sym_value_string_text_token1,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(568), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(260), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [11700] = 5,
    ACTIONS(1283), 1,
      anon_sym_BSLASH,
    ACTIONS(1286), 1,
      aux_sym_value_string_text_token1,
    STATE(333), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(572), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(260), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [11720] = 3,
    ACTIONS(1291), 1,
      anon_sym_u,
    ACTIONS(1293), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1289), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [11736] = 6,
    ACTIONS(1209), 1,
      anon_sym_SEMI,
    ACTIONS(1221), 1,
      anon_sym_BSLASH,
    ACTIONS(1223), 1,
      sym_filename_text,
    ACTIONS(1225), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(321), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(263), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [11758] = 6,
    ACTIONS(1243), 1,
      anon_sym_SEMI,
    ACTIONS(1295), 1,
      anon_sym_BSLASH,
    ACTIONS(1298), 1,
      sym_filename_text,
    ACTIONS(1301), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(321), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(263), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [11780] = 6,
    ACTIONS(1202), 1,
      anon_sym_COLON2,
    ACTIONS(1304), 1,
      sym_key_string_text,
    ACTIONS(1307), 1,
      anon_sym_BSLASH2,
    ACTIONS(1310), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(264), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11802] = 6,
    ACTIONS(1110), 1,
      sym_key_string_text,
    ACTIONS(1112), 1,
      anon_sym_BSLASH2,
    ACTIONS(1192), 1,
      anon_sym_COLON2,
    ACTIONS(1313), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(264), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [11824] = 2,
    ACTIONS(1317), 1,
      anon_sym_u,
    ACTIONS(1315), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_POUND,
  [11837] = 6,
    ACTIONS(1319), 1,
      anon_sym_DQUOTE,
    ACTIONS(1321), 1,
      anon_sym_BSLASH,
    ACTIONS(1323), 1,
      sym_json_string_text,
    ACTIONS(1325), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(404), 1,
      sym_json_string_escaped_char,
    STATE(275), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [11858] = 2,
    ACTIONS(1329), 1,
      anon_sym_u,
    ACTIONS(1327), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_POUND,
  [11871] = 3,
    STATE(269), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1333), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1331), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11886] = 6,
    ACTIONS(1336), 1,
      anon_sym_DQUOTE,
    ACTIONS(1338), 1,
      anon_sym_BSLASH,
    ACTIONS(1341), 1,
      sym_json_string_text,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(404), 1,
      sym_json_string_escaped_char,
    STATE(270), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [11907] = 2,
    ACTIONS(1349), 1,
      anon_sym_u,
    ACTIONS(1347), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [11920] = 3,
    STATE(277), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1353), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1351), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11935] = 2,
    ACTIONS(1357), 1,
      anon_sym_u,
    ACTIONS(1355), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [11948] = 2,
    STATE(278), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1359), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [11961] = 6,
    ACTIONS(1321), 1,
      anon_sym_BSLASH,
    ACTIONS(1323), 1,
      sym_json_string_text,
    ACTIONS(1325), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1361), 1,
      anon_sym_DQUOTE,
    STATE(404), 1,
      sym_json_string_escaped_char,
    STATE(270), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [11982] = 3,
    ACTIONS(1363), 1,
      anon_sym_LF,
    STATE(613), 1,
      sym_multiline_string_type,
    ACTIONS(1365), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [11997] = 3,
    STATE(269), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1369), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1367), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12012] = 5,
    ACTIONS(1371), 1,
      anon_sym_BSLASH,
    ACTIONS(1376), 1,
      anon_sym_LF,
    ACTIONS(1379), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1374), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(278), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [12031] = 6,
    ACTIONS(338), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1382), 1,
      anon_sym_LF,
    ACTIONS(1385), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    ACTIONS(336), 2,
      sym_key_string_text,
      anon_sym_BSLASH2,
    STATE(279), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
  [12052] = 6,
    ACTIONS(1321), 1,
      anon_sym_BSLASH,
    ACTIONS(1323), 1,
      sym_json_string_text,
    ACTIONS(1325), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    STATE(404), 1,
      sym_json_string_escaped_char,
    STATE(281), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [12073] = 6,
    ACTIONS(1321), 1,
      anon_sym_BSLASH,
    ACTIONS(1323), 1,
      sym_json_string_text,
    ACTIONS(1325), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1390), 1,
      anon_sym_DQUOTE,
    STATE(404), 1,
      sym_json_string_escaped_char,
    STATE(270), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [12094] = 2,
    ACTIONS(1394), 1,
      anon_sym_u,
    ACTIONS(1392), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_POUND,
  [12107] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(712), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(48), 2,
      sym_lt,
      aux_sym_hurl_file_repeat2,
  [12127] = 4,
    ACTIONS(1396), 1,
      anon_sym_BSLASH,
    ACTIONS(1401), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1399), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(284), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [12143] = 2,
    STATE(284), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
    ACTIONS(1404), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12155] = 3,
    ACTIONS(1406), 1,
      aux_sym_value_string_text_token1,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(582), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [12169] = 6,
    ACTIONS(1408), 1,
      anon_sym_LF,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1414), 1,
      sym_comment,
    STATE(343), 1,
      sym_fraction,
    STATE(568), 1,
      sym_exponent,
    ACTIONS(1412), 2,
      anon_sym_e,
      anon_sym_E,
  [12189] = 3,
    ACTIONS(1416), 1,
      aux_sym_value_string_text_token1,
    STATE(288), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(588), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [12203] = 5,
    ACTIONS(1419), 1,
      anon_sym_DOT,
    STATE(352), 1,
      sym_fraction,
    STATE(463), 1,
      sym_exponent,
    ACTIONS(1408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1421), 2,
      anon_sym_e,
      anon_sym_E,
  [12221] = 2,
    STATE(292), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1423), 5,
      anon_sym_BSLASH,
      anon_sym_LF,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12233] = 4,
    ACTIONS(1427), 1,
      sym_quoted_string_text,
    ACTIONS(1430), 1,
      anon_sym_BSLASH,
    ACTIONS(1425), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(291), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [12249] = 4,
    ACTIONS(1433), 1,
      anon_sym_BSLASH,
    ACTIONS(1438), 1,
      sym_filename_text,
    STATE(292), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1436), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12265] = 3,
    ACTIONS(1443), 1,
      anon_sym_COLON2,
    STATE(294), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1441), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [12279] = 5,
    ACTIONS(1447), 1,
      anon_sym_COLON2,
    ACTIONS(1449), 1,
      sym_key_string_text,
    ACTIONS(1452), 1,
      anon_sym_BSLASH2,
    ACTIONS(1445), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(294), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [12297] = 3,
    ACTIONS(1443), 2,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(297), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1441), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LF,
  [12311] = 3,
    ACTIONS(1455), 1,
      sym_digit,
    STATE(298), 1,
      aux_sym_integer_repeat1,
    ACTIONS(607), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [12325] = 5,
    ACTIONS(1445), 1,
      anon_sym_LF,
    ACTIONS(1457), 1,
      sym_key_string_text,
    ACTIONS(1460), 1,
      anon_sym_BSLASH2,
    ACTIONS(1447), 2,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    STATE(297), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [12343] = 3,
    ACTIONS(1463), 1,
      sym_digit,
    STATE(298), 1,
      aux_sym_integer_repeat1,
    ACTIONS(611), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [12357] = 7,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1466), 1,
      anon_sym_RBRACE,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      sym_json_key_value,
    STATE(464), 1,
      aux_sym_json_object_repeat1,
    STATE(624), 1,
      sym_json_key_string,
    STATE(634), 1,
      sym_json_string,
  [12379] = 7,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RBRACE,
    STATE(490), 1,
      sym_json_key_value,
    STATE(491), 1,
      aux_sym_json_object_repeat1,
    STATE(624), 1,
      sym_json_key_string,
    STATE(634), 1,
      sym_json_string,
  [12401] = 4,
    ACTIONS(1176), 1,
      anon_sym_BSLASH,
    ACTIONS(1474), 1,
      sym_quoted_string_text,
    ACTIONS(1472), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(291), 3,
      sym_quoted_string_escaped_char,
      sym_invalid_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [12417] = 5,
    ACTIONS(1476), 1,
      anon_sym_DOT,
    STATE(338), 1,
      sym_fraction,
    STATE(463), 1,
      sym_exponent,
    ACTIONS(1408), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1478), 2,
      anon_sym_e,
      anon_sym_E,
  [12435] = 5,
    ACTIONS(184), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1480), 1,
      anon_sym_LF,
    ACTIONS(1483), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_lt_repeat1,
    ACTIONS(182), 2,
      sym_key_string_text,
      anon_sym_BSLASH2,
  [12452] = 4,
    ACTIONS(1005), 1,
      anon_sym_base64_COMMA,
    ACTIONS(1007), 1,
      anon_sym_hex_COMMA,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(538), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [12467] = 5,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(1486), 1,
      anon_sym_LT_QMARK,
    STATE(190), 1,
      sym_xml_open_tag,
    STATE(598), 1,
      sym_xml_tag,
    STATE(401), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [12484] = 4,
    ACTIONS(1490), 1,
      anon_sym_LF,
    ACTIONS(1492), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1494), 1,
      sym_comment,
    ACTIONS(1488), 3,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
  [12499] = 5,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(371), 1,
      sym_integer,
    STATE(532), 2,
      sym_quoted_string,
      sym_float,
  [12516] = 1,
    ACTIONS(1496), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12525] = 1,
    ACTIONS(1498), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12534] = 3,
    ACTIONS(718), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(636), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [12547] = 3,
    ACTIONS(1500), 1,
      aux_sym_value_string_text_token1,
    STATE(311), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(588), 4,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12560] = 1,
    ACTIONS(1503), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12569] = 1,
    ACTIONS(605), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12578] = 4,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(438), 1,
      sym_boolean_option,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(519), 2,
      sym_template,
      sym_boolean,
  [12593] = 2,
    ACTIONS(1507), 1,
      anon_sym_u,
    ACTIONS(1505), 5,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_POUND,
      anon_sym_BQUOTE,
  [12604] = 1,
    ACTIONS(620), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12613] = 2,
    ACTIONS(601), 2,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    ACTIONS(599), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LF,
  [12624] = 4,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(967), 1,
      sym_digit,
    STATE(166), 1,
      aux_sym_integer_repeat1,
    ACTIONS(638), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [12639] = 3,
    ACTIONS(1455), 1,
      sym_digit,
    STATE(298), 1,
      aux_sym_integer_repeat1,
    ACTIONS(636), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [12652] = 1,
    ACTIONS(624), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12661] = 2,
    STATE(322), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1423), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [12672] = 4,
    ACTIONS(1509), 1,
      anon_sym_BSLASH,
    ACTIONS(1512), 1,
      sym_filename_text,
    ACTIONS(1436), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(322), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [12687] = 5,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(376), 1,
      sym_integer,
    STATE(534), 2,
      sym_quoted_string,
      sym_float,
  [12704] = 1,
    ACTIONS(601), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12713] = 5,
    ACTIONS(194), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1515), 1,
      anon_sym_LF,
    ACTIONS(1517), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_lt_repeat1,
    ACTIONS(192), 2,
      sym_key_string_text,
      anon_sym_BSLASH2,
  [12730] = 2,
    STATE(334), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1441), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [12741] = 5,
    ACTIONS(1519), 1,
      anon_sym_BSLASH,
    ACTIONS(1521), 1,
      anon_sym_SLASH,
    ACTIONS(1523), 1,
      sym_regex_text,
    STATE(618), 1,
      sym_regex_content,
    STATE(363), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [12758] = 1,
    ACTIONS(1525), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12767] = 4,
    ACTIONS(1005), 1,
      anon_sym_base64_COMMA,
    ACTIONS(1007), 1,
      anon_sym_hex_COMMA,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(539), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [12782] = 1,
    ACTIONS(1527), 6,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12791] = 5,
    ACTIONS(1519), 1,
      anon_sym_BSLASH,
    ACTIONS(1523), 1,
      sym_regex_text,
    ACTIONS(1529), 1,
      anon_sym_SLASH,
    STATE(629), 1,
      sym_regex_content,
    STATE(363), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [12808] = 5,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(381), 1,
      sym_integer,
    STATE(535), 2,
      sym_quoted_string,
      sym_float,
  [12825] = 3,
    ACTIONS(1531), 1,
      aux_sym_value_string_text_token1,
    STATE(311), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(582), 4,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12838] = 4,
    ACTIONS(1533), 1,
      sym_key_string_text,
    ACTIONS(1536), 1,
      anon_sym_BSLASH2,
    ACTIONS(1445), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(334), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [12853] = 5,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(382), 1,
      sym_integer,
    STATE(536), 2,
      sym_quoted_string,
      sym_float,
  [12870] = 2,
    ACTIONS(601), 1,
      anon_sym_COLON2,
    ACTIONS(599), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [12880] = 2,
    ACTIONS(1541), 2,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
    ACTIONS(1539), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LF,
  [12890] = 3,
    STATE(485), 1,
      sym_exponent,
    ACTIONS(1478), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1543), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12902] = 1,
    ACTIONS(1545), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12910] = 1,
    ACTIONS(620), 5,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12918] = 1,
    ACTIONS(601), 5,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12926] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(72), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(366), 1,
      aux_sym_query_string_params_section_repeat1,
  [12942] = 4,
    ACTIONS(1543), 1,
      anon_sym_LF,
    ACTIONS(1547), 1,
      sym_comment,
    STATE(567), 1,
      sym_exponent,
    ACTIONS(1412), 2,
      anon_sym_e,
      anon_sym_E,
  [12956] = 1,
    ACTIONS(1549), 5,
      anon_sym_BSLASH,
      anon_sym_LF,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12964] = 2,
    ACTIONS(1168), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1551), 4,
      anon_sym_BSLASH,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [12974] = 1,
    ACTIONS(624), 5,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [12982] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(68), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(367), 1,
      aux_sym_query_string_params_section_repeat1,
  [12998] = 1,
    ACTIONS(624), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13006] = 2,
    ACTIONS(1541), 1,
      anon_sym_COLON2,
    ACTIONS(1539), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [13016] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(71), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(368), 1,
      aux_sym_query_string_params_section_repeat1,
  [13032] = 1,
    ACTIONS(1553), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13040] = 3,
    STATE(485), 1,
      sym_exponent,
    ACTIONS(1421), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1543), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13052] = 4,
    ACTIONS(1555), 1,
      anon_sym_BSLASH,
    ACTIONS(1558), 1,
      anon_sym_SLASH,
    ACTIONS(1560), 1,
      sym_regex_text,
    STATE(353), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [13066] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(70), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13082] = 1,
    ACTIONS(601), 5,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13090] = 1,
    ACTIONS(601), 5,
      anon_sym_BSLASH,
      anon_sym_LF,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [13098] = 2,
    ACTIONS(1563), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1551), 4,
      anon_sym_BSLASH,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13108] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(68), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13124] = 5,
    ACTIONS(1565), 1,
      anon_sym_LF,
    ACTIONS(1568), 1,
      sym_comment,
    STATE(245), 1,
      sym_lt,
    STATE(325), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13140] = 1,
    ACTIONS(1571), 5,
      anon_sym_Subject,
      anon_sym_Issuer,
      anon_sym_Start_DASHDate,
      anon_sym_Expire_DASHDate,
      anon_sym_Serial_DASHNumber,
  [13148] = 1,
    ACTIONS(605), 5,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [13156] = 2,
    ACTIONS(1164), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1551), 4,
      anon_sym_BSLASH,
      anon_sym_LF,
      aux_sym__multiline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13166] = 4,
    ACTIONS(1519), 1,
      anon_sym_BSLASH,
    ACTIONS(1573), 1,
      anon_sym_SLASH,
    ACTIONS(1575), 1,
      sym_regex_text,
    STATE(353), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [13180] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(70), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(358), 1,
      aux_sym_query_string_params_section_repeat1,
  [13196] = 1,
    ACTIONS(1577), 5,
      anon_sym_Subject,
      anon_sym_Issuer,
      anon_sym_Start_DASHDate,
      anon_sym_Expire_DASHDate,
      anon_sym_Serial_DASHNumber,
  [13204] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(71), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13220] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(74), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13236] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(75), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13252] = 5,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(72), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(359), 1,
      aux_sym_query_string_params_section_repeat1,
  [13268] = 3,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    ACTIONS(1581), 1,
      anon_sym_SLASH,
    STATE(581), 2,
      sym_quoted_string,
      sym_regex,
  [13279] = 4,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1583), 1,
      anon_sym_LF,
    ACTIONS(1585), 1,
      sym_comment,
    STATE(97), 1,
      sym_fraction,
  [13292] = 3,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    ACTIONS(1581), 1,
      anon_sym_SLASH,
    STATE(128), 2,
      sym_quoted_string,
      sym_regex,
  [13303] = 4,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(217), 1,
      sym_lt,
    STATE(325), 1,
      aux_sym_lt_repeat1,
  [13316] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(64), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [13329] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(13), 1,
      sym_lt,
    STATE(30), 1,
      aux_sym_lt_repeat1,
  [13342] = 4,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1587), 1,
      anon_sym_LF,
    ACTIONS(1589), 1,
      sym_comment,
    STATE(97), 1,
      sym_fraction,
  [13355] = 1,
    ACTIONS(1591), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13362] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(27), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [13375] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(92), 1,
      sym_lt,
  [13388] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(154), 1,
      sym_lt,
  [13401] = 4,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1593), 1,
      anon_sym_LF,
    ACTIONS(1595), 1,
      sym_comment,
    STATE(97), 1,
      sym_fraction,
  [13414] = 4,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1597), 1,
      anon_sym_LF,
    ACTIONS(1599), 1,
      sym_comment,
    STATE(97), 1,
      sym_fraction,
  [13427] = 3,
    ACTIONS(1601), 1,
      sym_digit,
    STATE(396), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1603), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [13438] = 1,
    ACTIONS(1605), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
      anon_sym_LBRACE_LBRACE,
  [13445] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(183), 1,
      sym_lt,
  [13458] = 1,
    ACTIONS(1607), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [13465] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(98), 1,
      sym_lt,
  [13478] = 1,
    ACTIONS(1609), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [13485] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(93), 1,
      sym_lt,
  [13498] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(99), 1,
      sym_lt,
  [13511] = 1,
    ACTIONS(1611), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13518] = 1,
    ACTIONS(1613), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13525] = 1,
    ACTIONS(1615), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13532] = 3,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    ACTIONS(1581), 1,
      anon_sym_SLASH,
    STATE(123), 2,
      sym_quoted_string,
      sym_regex,
  [13543] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(36), 1,
      sym_lt,
  [13556] = 3,
    ACTIONS(718), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1617), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13567] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(102), 1,
      sym_lt,
  [13580] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(37), 1,
      sym_lt,
  [13593] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(38), 1,
      sym_lt,
  [13606] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(39), 1,
      sym_lt,
  [13619] = 3,
    ACTIONS(1619), 1,
      anon_sym_LT,
    ACTIONS(1621), 1,
      anon_sym_LT_QMARK,
    STATE(401), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [13630] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(40), 1,
      sym_lt,
  [13643] = 3,
    ACTIONS(718), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1624), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13654] = 1,
    ACTIONS(1626), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
      anon_sym_LBRACE_LBRACE,
  [13661] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(41), 1,
      sym_lt,
  [13674] = 1,
    ACTIONS(624), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13681] = 4,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_comment,
    STATE(105), 1,
      sym_lt,
    STATE(134), 1,
      aux_sym_lt_repeat1,
  [13694] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(53), 1,
      sym_lt,
  [13707] = 3,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    ACTIONS(1581), 1,
      anon_sym_SLASH,
    STATE(599), 2,
      sym_quoted_string,
      sym_regex,
  [13718] = 1,
    ACTIONS(601), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [13725] = 1,
    ACTIONS(1628), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13732] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(42), 1,
      sym_lt,
  [13745] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(43), 1,
      sym_lt,
  [13758] = 3,
    ACTIONS(1630), 1,
      sym_digit,
    STATE(419), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1632), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [13769] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(158), 1,
      sym_lt,
  [13782] = 4,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    STATE(97), 1,
      sym_fraction,
  [13795] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(44), 1,
      sym_lt,
  [13808] = 4,
    ACTIONS(967), 1,
      sym_digit,
    ACTIONS(1617), 1,
      anon_sym_LF,
    ACTIONS(1634), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_integer_repeat1,
  [13821] = 3,
    ACTIONS(1455), 1,
      sym_digit,
    STATE(298), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1617), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13832] = 3,
    ACTIONS(1455), 1,
      sym_digit,
    STATE(298), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1624), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13843] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(45), 1,
      sym_lt,
  [13856] = 4,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1636), 1,
      anon_sym_LF,
    ACTIONS(1638), 1,
      sym_comment,
    STATE(97), 1,
      sym_fraction,
  [13869] = 1,
    ACTIONS(1640), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
      anon_sym_LBRACE_LBRACE,
  [13876] = 4,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_comment,
    STATE(103), 1,
      sym_lt,
    STATE(134), 1,
      aux_sym_lt_repeat1,
  [13889] = 1,
    ACTIONS(601), 4,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
      anon_sym_LBRACE_LBRACE,
  [13896] = 4,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_comment,
    STATE(15), 1,
      sym_lt,
    STATE(134), 1,
      aux_sym_lt_repeat1,
  [13909] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(49), 1,
      sym_lt,
  [13922] = 1,
    ACTIONS(624), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [13929] = 4,
    ACTIONS(967), 1,
      sym_digit,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1642), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_integer_repeat1,
  [13942] = 4,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    STATE(544), 1,
      sym_json_key_value,
    STATE(624), 1,
      sym_json_key_string,
    STATE(634), 1,
      sym_json_string,
  [13955] = 1,
    ACTIONS(601), 4,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [13962] = 4,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(220), 1,
      sym_lt,
    STATE(325), 1,
      aux_sym_lt_repeat1,
  [13975] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(67), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [13988] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(24), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [14001] = 4,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(219), 1,
      sym_lt,
    STATE(325), 1,
      aux_sym_lt_repeat1,
  [14014] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(63), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [14027] = 4,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_comment,
    STATE(14), 1,
      sym_lt,
    STATE(134), 1,
      aux_sym_lt_repeat1,
  [14040] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(46), 1,
      sym_lt,
  [14053] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(47), 1,
      sym_lt,
  [14066] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_lt_repeat1,
    STATE(33), 1,
      sym_lt,
  [14079] = 1,
    ACTIONS(601), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [14086] = 3,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1644), 1,
      anon_sym_SLASH,
    STATE(541), 2,
      sym_quoted_string,
      sym_regex,
  [14097] = 1,
    ACTIONS(599), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [14104] = 4,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
    STATE(9), 1,
      sym_lt,
    STATE(30), 1,
      aux_sym_lt_repeat1,
  [14117] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(3), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [14130] = 3,
    ACTIONS(1646), 1,
      sym_digit,
    STATE(418), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1648), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [14141] = 3,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1644), 1,
      anon_sym_SLASH,
    STATE(195), 2,
      sym_quoted_string,
      sym_regex,
  [14152] = 1,
    ACTIONS(1650), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [14159] = 4,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_lt_repeat1,
    STATE(137), 1,
      sym_lt,
  [14172] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_lt_repeat1,
    STATE(96), 1,
      sym_lt,
  [14185] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(2), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [14198] = 1,
    ACTIONS(1549), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [14205] = 4,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      sym_comment,
    STATE(218), 1,
      sym_lt,
    STATE(325), 1,
      aux_sym_lt_repeat1,
  [14218] = 4,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_lt_repeat1,
    STATE(140), 1,
      sym_lt,
  [14231] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_lt_repeat1,
    STATE(182), 1,
      sym_lt,
  [14244] = 3,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1644), 1,
      anon_sym_SLASH,
    STATE(206), 2,
      sym_quoted_string,
      sym_regex,
  [14255] = 4,
    ACTIONS(1106), 1,
      anon_sym_LF,
    ACTIONS(1108), 1,
      sym_comment,
    STATE(66), 1,
      sym_lt,
    STATE(88), 1,
      aux_sym_lt_repeat1,
  [14268] = 4,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    ACTIONS(1652), 1,
      anon_sym_LF,
    ACTIONS(1654), 1,
      sym_comment,
    STATE(97), 1,
      sym_fraction,
  [14281] = 1,
    ACTIONS(1539), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [14288] = 2,
    STATE(405), 1,
      sym_boolean,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
  [14296] = 3,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(440), 1,
      sym_integer,
  [14306] = 3,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1656), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_json_object_repeat1,
  [14316] = 1,
    ACTIONS(1543), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14322] = 3,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1656), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      aux_sym_json_object_repeat1,
  [14332] = 3,
    ACTIONS(1658), 1,
      anon_sym_COMMA,
    ACTIONS(1660), 1,
      anon_sym_RBRACK,
    STATE(471), 1,
      aux_sym_json_array_repeat1,
  [14342] = 1,
    ACTIONS(599), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14348] = 3,
    ACTIONS(1662), 1,
      aux_sym_file_value_token1,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
  [14358] = 1,
    ACTIONS(1668), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14364] = 1,
    ACTIONS(1670), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14370] = 1,
    ACTIONS(1672), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14376] = 3,
    ACTIONS(1658), 1,
      anon_sym_COMMA,
    ACTIONS(1674), 1,
      anon_sym_RBRACK,
    STATE(499), 1,
      aux_sym_json_array_repeat1,
  [14386] = 1,
    ACTIONS(1676), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14392] = 3,
    ACTIONS(1678), 1,
      anon_sym_SEMI,
    ACTIONS(1680), 1,
      sym_hexdigit,
    STATE(501), 1,
      aux_sym_oneline_hex_repeat1,
  [14402] = 2,
    STATE(426), 1,
      sym_status,
    ACTIONS(1682), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [14410] = 1,
    ACTIONS(1684), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14416] = 3,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1686), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      aux_sym_json_object_repeat1,
  [14426] = 2,
    ACTIONS(1690), 1,
      sym_regex_text,
    ACTIONS(1688), 2,
      anon_sym_BSLASH,
      anon_sym_SLASH,
  [14434] = 3,
    ACTIONS(1692), 1,
      aux_sym_file_value_token1,
    ACTIONS(1694), 1,
      anon_sym_LF,
    ACTIONS(1696), 1,
      sym_comment,
  [14444] = 3,
    ACTIONS(1096), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    STATE(121), 1,
      sym_integer,
  [14454] = 2,
    STATE(398), 1,
      sym_boolean,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
  [14462] = 3,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(205), 1,
      sym_integer,
  [14472] = 2,
    STATE(399), 1,
      sym_boolean,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
  [14480] = 1,
    ACTIONS(1698), 3,
      anon_sym_SEMI,
      anon_sym_POUND,
      aux_sym_filename_escaped_char_token1,
  [14486] = 2,
    STATE(400), 1,
      sym_boolean,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
  [14494] = 1,
    ACTIONS(1700), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14500] = 3,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(402), 1,
      sym_integer,
  [14510] = 3,
    ACTIONS(1702), 1,
      anon_sym_RBRACE,
    ACTIONS(1704), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym_json_object_repeat1,
  [14520] = 2,
    STATE(439), 1,
      sym_boolean,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
  [14528] = 2,
    STATE(437), 1,
      sym_status,
    ACTIONS(1682), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [14536] = 3,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1707), 1,
      anon_sym_RBRACE,
    STATE(496), 1,
      aux_sym_json_object_repeat1,
  [14546] = 3,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1707), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      aux_sym_json_object_repeat1,
  [14556] = 3,
    ACTIONS(1658), 1,
      anon_sym_COMMA,
    ACTIONS(1709), 1,
      anon_sym_RBRACK,
    STATE(497), 1,
      aux_sym_json_array_repeat1,
  [14566] = 1,
    ACTIONS(1490), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14572] = 2,
    STATE(413), 1,
      sym_boolean,
    ACTIONS(1015), 2,
      anon_sym_true,
      anon_sym_false,
  [14580] = 3,
    ACTIONS(1711), 1,
      anon_sym_SEMI,
    ACTIONS(1713), 1,
      sym_hexdigit,
    STATE(473), 1,
      aux_sym_oneline_hex_repeat1,
  [14590] = 3,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    ACTIONS(1715), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      aux_sym_json_object_repeat1,
  [14600] = 3,
    ACTIONS(1658), 1,
      anon_sym_COMMA,
    ACTIONS(1717), 1,
      anon_sym_RBRACK,
    STATE(499), 1,
      aux_sym_json_array_repeat1,
  [14610] = 1,
    ACTIONS(651), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14616] = 3,
    ACTIONS(1719), 1,
      anon_sym_COMMA,
    ACTIONS(1722), 1,
      anon_sym_RBRACK,
    STATE(499), 1,
      aux_sym_json_array_repeat1,
  [14626] = 3,
    ACTIONS(1017), 1,
      sym_digit,
    STATE(168), 1,
      aux_sym_integer_repeat1,
    STATE(417), 1,
      sym_integer,
  [14636] = 3,
    ACTIONS(1724), 1,
      anon_sym_SEMI,
    ACTIONS(1726), 1,
      sym_hexdigit,
    STATE(501), 1,
      aux_sym_oneline_hex_repeat1,
  [14646] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(643), 1,
      sym_expr,
  [14656] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(606), 1,
      sym_expr,
  [14666] = 1,
    ACTIONS(1731), 3,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      anon_sym_LBRACE_LBRACE,
  [14672] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(421), 1,
      sym_variable_definition,
    STATE(686), 1,
      sym_variable_name,
  [14682] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(645), 1,
      sym_expr,
  [14692] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(648), 1,
      sym_expr,
  [14702] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(650), 1,
      sym_expr,
  [14712] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(652), 1,
      sym_expr,
  [14722] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(654), 1,
      sym_expr,
  [14732] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(655), 1,
      sym_expr,
  [14742] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(656), 1,
      sym_expr,
  [14752] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(657), 1,
      sym_expr,
  [14762] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(658), 1,
      sym_expr,
  [14772] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(659), 1,
      sym_expr,
  [14782] = 3,
    ACTIONS(1729), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
    STATE(660), 1,
      sym_expr,
  [14792] = 1,
    ACTIONS(1733), 3,
      anon_sym_SEMI,
      anon_sym_POUND,
      aux_sym_filename_escaped_char_token1,
  [14798] = 2,
    ACTIONS(1735), 1,
      anon_sym_LF,
    ACTIONS(1737), 1,
      sym_comment,
  [14805] = 2,
    ACTIONS(1739), 1,
      anon_sym_LF,
    ACTIONS(1741), 1,
      sym_comment,
  [14812] = 2,
    ACTIONS(1743), 1,
      anon_sym_file_COMMA,
    STATE(389), 1,
      sym_file_value,
  [14819] = 2,
    ACTIONS(1745), 1,
      anon_sym_LF,
    ACTIONS(1747), 1,
      sym_comment,
  [14826] = 2,
    ACTIONS(1749), 1,
      sym_digit,
    STATE(403), 1,
      aux_sym_integer_repeat1,
  [14833] = 2,
    ACTIONS(1751), 1,
      anon_sym_LF,
    ACTIONS(1753), 1,
      sym_comment,
  [14840] = 2,
    ACTIONS(1615), 1,
      anon_sym_LF,
    ACTIONS(1755), 1,
      sym_comment,
  [14847] = 2,
    ACTIONS(1757), 1,
      anon_sym_LBRACE,
    STATE(411), 1,
      sym_unicode_char,
  [14854] = 2,
    ACTIONS(1684), 1,
      anon_sym_LF,
    ACTIONS(1759), 1,
      sym_comment,
  [14861] = 2,
    ACTIONS(1761), 1,
      anon_sym_LF,
    ACTIONS(1763), 1,
      sym_comment,
  [14868] = 2,
    ACTIONS(1652), 1,
      anon_sym_LF,
    ACTIONS(1654), 1,
      sym_comment,
  [14875] = 2,
    ACTIONS(1765), 1,
      anon_sym_LF,
    ACTIONS(1767), 1,
      sym_comment,
  [14882] = 2,
    ACTIONS(1769), 1,
      anon_sym_LF,
    ACTIONS(1771), 1,
      sym_comment,
  [14889] = 2,
    ACTIONS(1773), 1,
      anon_sym_LF,
    ACTIONS(1775), 1,
      sym_comment,
  [14896] = 2,
    ACTIONS(1583), 1,
      anon_sym_LF,
    ACTIONS(1585), 1,
      sym_comment,
  [14903] = 2,
    ACTIONS(1490), 1,
      anon_sym_LF,
    ACTIONS(1494), 1,
      sym_comment,
  [14910] = 2,
    ACTIONS(1587), 1,
      anon_sym_LF,
    ACTIONS(1589), 1,
      sym_comment,
  [14917] = 2,
    ACTIONS(1593), 1,
      anon_sym_LF,
    ACTIONS(1595), 1,
      sym_comment,
  [14924] = 2,
    ACTIONS(1597), 1,
      anon_sym_LF,
    ACTIONS(1599), 1,
      sym_comment,
  [14931] = 2,
    ACTIONS(1777), 1,
      anon_sym_LF,
    ACTIONS(1779), 1,
      sym_comment,
  [14938] = 2,
    ACTIONS(1781), 1,
      anon_sym_LF,
    ACTIONS(1783), 1,
      sym_comment,
  [14945] = 2,
    ACTIONS(1785), 1,
      anon_sym_LF,
    ACTIONS(1787), 1,
      sym_comment,
  [14952] = 2,
    ACTIONS(1789), 1,
      anon_sym_LF,
    ACTIONS(1791), 1,
      sym_comment,
  [14959] = 2,
    ACTIONS(1793), 1,
      anon_sym_LF,
    ACTIONS(1795), 1,
      sym_comment,
  [14966] = 2,
    ACTIONS(1797), 1,
      anon_sym_LF,
    ACTIONS(1799), 1,
      sym_comment,
  [14973] = 2,
    ACTIONS(1801), 1,
      anon_sym_LF,
    ACTIONS(1803), 1,
      sym_comment,
  [14980] = 1,
    ACTIONS(1702), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [14985] = 2,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1805), 1,
      sym_comment,
  [14992] = 2,
    ACTIONS(1807), 1,
      anon_sym_LBRACE,
    STATE(351), 1,
      sym_unicode_char,
  [14999] = 2,
    ACTIONS(1809), 1,
      sym_digit,
    STATE(319), 1,
      aux_sym_integer_repeat1,
  [15006] = 2,
    ACTIONS(1811), 1,
      anon_sym_LF,
    ACTIONS(1813), 1,
      sym_comment,
  [15013] = 2,
    ACTIONS(1527), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_LF,
  [15020] = 2,
    ACTIONS(1817), 1,
      anon_sym_LF,
    ACTIONS(1819), 1,
      sym_comment,
  [15027] = 2,
    ACTIONS(1670), 1,
      anon_sym_LF,
    ACTIONS(1821), 1,
      sym_comment,
  [15034] = 2,
    ACTIONS(1823), 1,
      sym_digit,
    STATE(420), 1,
      aux_sym_integer_repeat1,
  [15041] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1825), 1,
      sym_comment,
  [15048] = 1,
    ACTIONS(1827), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15053] = 1,
    ACTIONS(1722), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15058] = 2,
    ACTIONS(1676), 1,
      anon_sym_LF,
    ACTIONS(1829), 1,
      sym_comment,
  [15065] = 2,
    ACTIONS(1831), 1,
      anon_sym_LF,
    ACTIONS(1833), 1,
      sym_comment,
  [15072] = 2,
    ACTIONS(1503), 1,
      sym_comment,
    ACTIONS(1835), 1,
      anon_sym_LF,
  [15079] = 2,
    ACTIONS(1837), 1,
      sym_digit,
    STATE(90), 1,
      aux_sym_integer_repeat1,
  [15086] = 2,
    ACTIONS(1498), 1,
      sym_comment,
    ACTIONS(1839), 1,
      anon_sym_LF,
  [15093] = 2,
    ACTIONS(1841), 1,
      sym_digit,
    STATE(318), 1,
      aux_sym_integer_repeat1,
  [15100] = 1,
    ACTIONS(1843), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [15105] = 2,
    ACTIONS(1845), 1,
      sym_digit,
    STATE(429), 1,
      aux_sym_integer_repeat1,
  [15112] = 2,
    ACTIONS(1636), 1,
      anon_sym_LF,
    ACTIONS(1638), 1,
      sym_comment,
  [15119] = 2,
    ACTIONS(1847), 1,
      anon_sym_LF,
    ACTIONS(1849), 1,
      sym_comment,
  [15126] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_quoted_string,
  [15133] = 2,
    ACTIONS(1700), 1,
      anon_sym_LF,
    ACTIONS(1851), 1,
      sym_comment,
  [15140] = 2,
    ACTIONS(1543), 1,
      anon_sym_LF,
    ACTIONS(1547), 1,
      sym_comment,
  [15147] = 2,
    ACTIONS(1853), 1,
      anon_sym_LBRACE,
    STATE(340), 1,
      sym_unicode_char,
  [15154] = 2,
    ACTIONS(1855), 1,
      anon_sym_LF,
    ACTIONS(1857), 1,
      sym_comment,
  [15161] = 2,
    ACTIONS(1859), 1,
      anon_sym_COLON,
    ACTIONS(1861), 1,
      anon_sym_COLON2,
  [15168] = 2,
    ACTIONS(1863), 1,
      anon_sym_LF,
    ACTIONS(1865), 1,
      sym_comment,
  [15175] = 2,
    ACTIONS(1591), 1,
      anon_sym_LF,
    ACTIONS(1867), 1,
      sym_comment,
  [15182] = 2,
    ACTIONS(1869), 1,
      anon_sym_LF,
    ACTIONS(1871), 1,
      sym_comment,
  [15189] = 2,
    ACTIONS(1873), 1,
      anon_sym_LBRACE,
    STATE(316), 1,
      sym_unicode_char,
  [15196] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_quoted_string,
  [15203] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym_quoted_string,
  [15210] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_quoted_string,
  [15217] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_quoted_string,
  [15224] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(540), 1,
      sym_quoted_string,
  [15231] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_quoted_string,
  [15238] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_quoted_string,
  [15245] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_quoted_string,
  [15252] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_quoted_string,
  [15259] = 2,
    ACTIONS(1875), 1,
      anon_sym_LF,
    ACTIONS(1877), 1,
      sym_comment,
  [15266] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_quoted_string,
  [15273] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_quoted_string,
  [15280] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_quoted_string,
  [15287] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_quoted_string,
  [15294] = 2,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym_quoted_string,
  [15301] = 2,
    ACTIONS(1879), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_unicode_char,
  [15308] = 2,
    ACTIONS(1881), 1,
      sym_digit,
    STATE(310), 1,
      aux_sym_integer_repeat1,
  [15315] = 2,
    ACTIONS(1743), 1,
      anon_sym_file_COMMA,
    STATE(390), 1,
      sym_file_value,
  [15322] = 2,
    ACTIONS(1883), 1,
      anon_sym_LBRACE,
    STATE(448), 1,
      sym_unicode_char,
  [15329] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_quoted_string,
  [15336] = 2,
    ACTIONS(1885), 1,
      anon_sym_LF,
    ACTIONS(1887), 1,
      sym_comment,
  [15343] = 2,
    ACTIONS(1889), 1,
      anon_sym_LF,
    ACTIONS(1891), 1,
      sym_comment,
  [15350] = 2,
    ACTIONS(1893), 1,
      anon_sym_LF,
    ACTIONS(1895), 1,
      sym_comment,
  [15357] = 2,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_quoted_string,
  [15364] = 2,
    ACTIONS(1496), 1,
      anon_sym_LT,
    ACTIONS(1897), 1,
      anon_sym_LT_QMARK,
  [15371] = 2,
    ACTIONS(1899), 1,
      anon_sym_LF,
    ACTIONS(1901), 1,
      sym_comment,
  [15378] = 2,
    ACTIONS(1903), 1,
      anon_sym_LF,
    ACTIONS(1905), 1,
      sym_comment,
  [15385] = 2,
    ACTIONS(1907), 1,
      anon_sym_LF,
    ACTIONS(1909), 1,
      sym_comment,
  [15392] = 2,
    ACTIONS(1694), 1,
      anon_sym_LF,
    ACTIONS(1696), 1,
      sym_comment,
  [15399] = 1,
    ACTIONS(1911), 1,
      sym_hexdigit,
  [15403] = 1,
    ACTIONS(1913), 1,
      anon_sym_RBRACE_RBRACE,
  [15407] = 1,
    ACTIONS(1915), 1,
      anon_sym_LF,
  [15411] = 1,
    ACTIONS(1917), 1,
      anon_sym_COLON,
  [15415] = 1,
    ACTIONS(1919), 1,
      anon_sym_COLON2,
  [15419] = 1,
    ACTIONS(1921), 1,
      aux_sym_oneline_base64_token1,
  [15423] = 1,
    ACTIONS(1923), 1,
      anon_sym_COLON2,
  [15427] = 1,
    ACTIONS(1925), 1,
      aux_sym_key_string_escaped_char_token1,
  [15431] = 1,
    ACTIONS(1927), 1,
      anon_sym_LF,
  [15435] = 1,
    ACTIONS(1929), 1,
      anon_sym_COLON2,
  [15439] = 1,
    ACTIONS(1931), 1,
      anon_sym_COLON,
  [15443] = 1,
    ACTIONS(1859), 1,
      anon_sym_COLON,
  [15447] = 1,
    ACTIONS(1933), 1,
      anon_sym_COLON2,
  [15451] = 1,
    ACTIONS(1935), 1,
      anon_sym_SLASH,
  [15455] = 1,
    ACTIONS(1937), 1,
      sym_hexdigit,
  [15459] = 1,
    ACTIONS(1939), 1,
      sym_hexdigit,
  [15463] = 1,
    ACTIONS(1941), 1,
      anon_sym_QMARK_GT,
  [15467] = 1,
    ACTIONS(1943), 1,
      anon_sym_SEMI,
  [15471] = 1,
    ACTIONS(1945), 1,
      aux_sym_xml_close_tag_token1,
  [15475] = 1,
    ACTIONS(1947), 1,
      anon_sym_COLON2,
  [15479] = 1,
    ACTIONS(1949), 1,
      anon_sym_COLON2,
  [15483] = 1,
    ACTIONS(1951), 1,
      anon_sym_COLON2,
  [15487] = 1,
    ACTIONS(1953), 1,
      anon_sym_COLON2,
  [15491] = 1,
    ACTIONS(1955), 1,
      anon_sym_COLON2,
  [15495] = 1,
    ACTIONS(1957), 1,
      anon_sym_SLASH,
  [15499] = 1,
    ACTIONS(1959), 1,
      anon_sym_COLON2,
  [15503] = 1,
    ACTIONS(1961), 1,
      anon_sym_RBRACE,
  [15507] = 1,
    ACTIONS(1963), 1,
      anon_sym_GT,
  [15511] = 1,
    ACTIONS(1965), 1,
      anon_sym_COLON2,
  [15515] = 1,
    ACTIONS(1967), 1,
      anon_sym_COLON2,
  [15519] = 1,
    ACTIONS(1969), 1,
      aux_sym_xml_open_tag_token1,
  [15523] = 1,
    ACTIONS(1971), 1,
      anon_sym_COLON2,
  [15527] = 1,
    ACTIONS(1973), 1,
      aux_sym_regex_escaped_char_token1,
  [15531] = 1,
    ACTIONS(1975), 1,
      aux_sym_xml_prolog_tag_token1,
  [15535] = 1,
    ACTIONS(1977), 1,
      anon_sym_COLON2,
  [15539] = 1,
    ACTIONS(1979), 1,
      anon_sym_COLON2,
  [15543] = 1,
    ACTIONS(1981), 1,
      anon_sym_RBRACE,
  [15547] = 1,
    ACTIONS(1983), 1,
      sym_hexdigit,
  [15551] = 1,
    ACTIONS(1985), 1,
      anon_sym_RBRACE_RBRACE,
  [15555] = 1,
    ACTIONS(1987), 1,
      anon_sym_COLON,
  [15559] = 1,
    ACTIONS(1989), 1,
      anon_sym_RBRACE_RBRACE,
  [15563] = 1,
    ACTIONS(1991), 1,
      aux_sym_key_string_escaped_char_token1,
  [15567] = 1,
    ACTIONS(1993), 1,
      anon_sym_RBRACE,
  [15571] = 1,
    ACTIONS(1995), 1,
      anon_sym_RBRACE_RBRACE,
  [15575] = 1,
    ACTIONS(1997), 1,
      anon_sym_RBRACE,
  [15579] = 1,
    ACTIONS(1999), 1,
      anon_sym_RBRACE_RBRACE,
  [15583] = 1,
    ACTIONS(2001), 1,
      anon_sym_RBRACE,
  [15587] = 1,
    ACTIONS(2003), 1,
      anon_sym_RBRACE_RBRACE,
  [15591] = 1,
    ACTIONS(2005), 1,
      anon_sym_GT,
  [15595] = 1,
    ACTIONS(2007), 1,
      anon_sym_RBRACE_RBRACE,
  [15599] = 1,
    ACTIONS(2009), 1,
      anon_sym_RBRACE_RBRACE,
  [15603] = 1,
    ACTIONS(2011), 1,
      anon_sym_RBRACE_RBRACE,
  [15607] = 1,
    ACTIONS(2013), 1,
      anon_sym_RBRACE_RBRACE,
  [15611] = 1,
    ACTIONS(2015), 1,
      anon_sym_RBRACE_RBRACE,
  [15615] = 1,
    ACTIONS(2017), 1,
      anon_sym_RBRACE_RBRACE,
  [15619] = 1,
    ACTIONS(2019), 1,
      anon_sym_RBRACE_RBRACE,
  [15623] = 1,
    ACTIONS(2021), 1,
      anon_sym_SEMI,
  [15627] = 1,
    ACTIONS(2023), 1,
      anon_sym_GT,
  [15631] = 1,
    ACTIONS(2025), 1,
      aux_sym_xml_prolog_tag_token1,
  [15635] = 1,
    ACTIONS(2027), 1,
      anon_sym_QMARK_GT,
  [15639] = 1,
    ACTIONS(2029), 1,
      aux_sym_xml_close_tag_token1,
  [15643] = 1,
    ACTIONS(2031), 1,
      sym_hexdigit,
  [15647] = 1,
    ACTIONS(2033), 1,
      sym_hexdigit,
  [15651] = 1,
    ACTIONS(2035), 1,
      sym_hexdigit,
  [15655] = 1,
    ACTIONS(2037), 1,
      ts_builtin_sym_end,
  [15659] = 1,
    ACTIONS(2039), 1,
      sym_hexdigit,
  [15663] = 1,
    ACTIONS(2041), 1,
      anon_sym_SEMI,
  [15667] = 1,
    ACTIONS(2043), 1,
      sym_hexdigit,
  [15671] = 1,
    ACTIONS(2045), 1,
      sym_hexdigit,
  [15675] = 1,
    ACTIONS(2047), 1,
      sym_hexdigit,
  [15679] = 1,
    ACTIONS(2049), 1,
      sym_hexdigit,
  [15683] = 1,
    ACTIONS(2051), 1,
      aux_sym_oneline_string_text_token2,
  [15687] = 1,
    ACTIONS(2053), 1,
      sym_hexdigit,
  [15691] = 1,
    ACTIONS(2055), 1,
      aux_sym_key_string_escaped_char_token1,
  [15695] = 1,
    ACTIONS(2057), 1,
      aux_sym_variable_name_token2,
  [15699] = 1,
    ACTIONS(2059), 1,
      sym_hexdigit,
  [15703] = 1,
    ACTIONS(2061), 1,
      anon_sym_COLON2,
  [15707] = 1,
    ACTIONS(2063), 1,
      sym_hexdigit,
  [15711] = 1,
    ACTIONS(2065), 1,
      sym_hexdigit,
  [15715] = 1,
    ACTIONS(2067), 1,
      sym_hexdigit,
  [15719] = 1,
    ACTIONS(2069), 1,
      sym_hexdigit,
  [15723] = 1,
    ACTIONS(2071), 1,
      anon_sym_EQ,
  [15727] = 1,
    ACTIONS(2073), 1,
      sym_hexdigit,
  [15731] = 1,
    ACTIONS(2075), 1,
      sym_hexdigit,
  [15735] = 1,
    ACTIONS(2077), 1,
      sym_hexdigit,
  [15739] = 1,
    ACTIONS(2079), 1,
      sym_hexdigit,
  [15743] = 1,
    ACTIONS(2081), 1,
      sym_hexdigit,
  [15747] = 1,
    ACTIONS(2083), 1,
      sym_hexdigit,
  [15751] = 1,
    ACTIONS(2085), 1,
      sym_hexdigit,
  [15755] = 1,
    ACTIONS(2087), 1,
      sym_hexdigit,
  [15759] = 1,
    ACTIONS(2089), 1,
      sym_hexdigit,
  [15763] = 1,
    ACTIONS(2091), 1,
      sym_hexdigit,
  [15767] = 1,
    ACTIONS(2093), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 87,
  [SMALL_STATE(26)] = 174,
  [SMALL_STATE(27)] = 267,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 533,
  [SMALL_STATE(31)] = 607,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 748,
  [SMALL_STATE(34)] = 815,
  [SMALL_STATE(35)] = 882,
  [SMALL_STATE(36)] = 949,
  [SMALL_STATE(37)] = 1016,
  [SMALL_STATE(38)] = 1083,
  [SMALL_STATE(39)] = 1150,
  [SMALL_STATE(40)] = 1217,
  [SMALL_STATE(41)] = 1284,
  [SMALL_STATE(42)] = 1351,
  [SMALL_STATE(43)] = 1418,
  [SMALL_STATE(44)] = 1485,
  [SMALL_STATE(45)] = 1552,
  [SMALL_STATE(46)] = 1619,
  [SMALL_STATE(47)] = 1686,
  [SMALL_STATE(48)] = 1753,
  [SMALL_STATE(49)] = 1828,
  [SMALL_STATE(50)] = 1916,
  [SMALL_STATE(51)] = 2004,
  [SMALL_STATE(52)] = 2092,
  [SMALL_STATE(53)] = 2180,
  [SMALL_STATE(54)] = 2268,
  [SMALL_STATE(55)] = 2377,
  [SMALL_STATE(56)] = 2486,
  [SMALL_STATE(57)] = 2575,
  [SMALL_STATE(58)] = 2650,
  [SMALL_STATE(59)] = 2727,
  [SMALL_STATE(60)] = 2803,
  [SMALL_STATE(61)] = 2881,
  [SMALL_STATE(62)] = 2957,
  [SMALL_STATE(63)] = 3033,
  [SMALL_STATE(64)] = 3109,
  [SMALL_STATE(65)] = 3185,
  [SMALL_STATE(66)] = 3261,
  [SMALL_STATE(67)] = 3337,
  [SMALL_STATE(68)] = 3413,
  [SMALL_STATE(69)] = 3488,
  [SMALL_STATE(70)] = 3563,
  [SMALL_STATE(71)] = 3638,
  [SMALL_STATE(72)] = 3713,
  [SMALL_STATE(73)] = 3788,
  [SMALL_STATE(74)] = 3863,
  [SMALL_STATE(75)] = 3938,
  [SMALL_STATE(76)] = 4013,
  [SMALL_STATE(77)] = 4149,
  [SMALL_STATE(78)] = 4219,
  [SMALL_STATE(79)] = 4289,
  [SMALL_STATE(80)] = 4352,
  [SMALL_STATE(81)] = 4415,
  [SMALL_STATE(82)] = 4477,
  [SMALL_STATE(83)] = 4535,
  [SMALL_STATE(84)] = 4593,
  [SMALL_STATE(85)] = 4653,
  [SMALL_STATE(86)] = 4715,
  [SMALL_STATE(87)] = 4773,
  [SMALL_STATE(88)] = 4831,
  [SMALL_STATE(89)] = 4894,
  [SMALL_STATE(90)] = 4957,
  [SMALL_STATE(91)] = 5016,
  [SMALL_STATE(92)] = 5077,
  [SMALL_STATE(93)] = 5133,
  [SMALL_STATE(94)] = 5189,
  [SMALL_STATE(95)] = 5245,
  [SMALL_STATE(96)] = 5301,
  [SMALL_STATE(97)] = 5357,
  [SMALL_STATE(98)] = 5413,
  [SMALL_STATE(99)] = 5469,
  [SMALL_STATE(100)] = 5525,
  [SMALL_STATE(101)] = 5605,
  [SMALL_STATE(102)] = 5661,
  [SMALL_STATE(103)] = 5717,
  [SMALL_STATE(104)] = 5788,
  [SMALL_STATE(105)] = 5865,
  [SMALL_STATE(106)] = 5936,
  [SMALL_STATE(107)] = 6007,
  [SMALL_STATE(108)] = 6078,
  [SMALL_STATE(109)] = 6199,
  [SMALL_STATE(110)] = 6313,
  [SMALL_STATE(111)] = 6367,
  [SMALL_STATE(112)] = 6424,
  [SMALL_STATE(113)] = 6481,
  [SMALL_STATE(114)] = 6550,
  [SMALL_STATE(115)] = 6615,
  [SMALL_STATE(116)] = 6714,
  [SMALL_STATE(117)] = 6761,
  [SMALL_STATE(118)] = 6808,
  [SMALL_STATE(119)] = 6855,
  [SMALL_STATE(120)] = 6902,
  [SMALL_STATE(121)] = 6948,
  [SMALL_STATE(122)] = 6994,
  [SMALL_STATE(123)] = 7040,
  [SMALL_STATE(124)] = 7086,
  [SMALL_STATE(125)] = 7132,
  [SMALL_STATE(126)] = 7178,
  [SMALL_STATE(127)] = 7223,
  [SMALL_STATE(128)] = 7268,
  [SMALL_STATE(129)] = 7313,
  [SMALL_STATE(130)] = 7358,
  [SMALL_STATE(131)] = 7403,
  [SMALL_STATE(132)] = 7448,
  [SMALL_STATE(133)] = 7493,
  [SMALL_STATE(134)] = 7538,
  [SMALL_STATE(135)] = 7589,
  [SMALL_STATE(136)] = 7640,
  [SMALL_STATE(137)] = 7684,
  [SMALL_STATE(138)] = 7728,
  [SMALL_STATE(139)] = 7772,
  [SMALL_STATE(140)] = 7816,
  [SMALL_STATE(141)] = 7860,
  [SMALL_STATE(142)] = 7902,
  [SMALL_STATE(143)] = 7966,
  [SMALL_STATE(144)] = 8034,
  [SMALL_STATE(145)] = 8078,
  [SMALL_STATE(146)] = 8127,
  [SMALL_STATE(147)] = 8167,
  [SMALL_STATE(148)] = 8207,
  [SMALL_STATE(149)] = 8259,
  [SMALL_STATE(150)] = 8305,
  [SMALL_STATE(151)] = 8357,
  [SMALL_STATE(152)] = 8409,
  [SMALL_STATE(153)] = 8461,
  [SMALL_STATE(154)] = 8507,
  [SMALL_STATE(155)] = 8537,
  [SMALL_STATE(156)] = 8567,
  [SMALL_STATE(157)] = 8613,
  [SMALL_STATE(158)] = 8643,
  [SMALL_STATE(159)] = 8673,
  [SMALL_STATE(160)] = 8703,
  [SMALL_STATE(161)] = 8733,
  [SMALL_STATE(162)] = 8772,
  [SMALL_STATE(163)] = 8815,
  [SMALL_STATE(164)] = 8858,
  [SMALL_STATE(165)] = 8895,
  [SMALL_STATE(166)] = 8934,
  [SMALL_STATE(167)] = 8966,
  [SMALL_STATE(168)] = 9002,
  [SMALL_STATE(169)] = 9034,
  [SMALL_STATE(170)] = 9077,
  [SMALL_STATE(171)] = 9110,
  [SMALL_STATE(172)] = 9153,
  [SMALL_STATE(173)] = 9186,
  [SMALL_STATE(174)] = 9219,
  [SMALL_STATE(175)] = 9267,
  [SMALL_STATE(176)] = 9315,
  [SMALL_STATE(177)] = 9363,
  [SMALL_STATE(178)] = 9411,
  [SMALL_STATE(179)] = 9440,
  [SMALL_STATE(180)] = 9487,
  [SMALL_STATE(181)] = 9512,
  [SMALL_STATE(182)] = 9537,
  [SMALL_STATE(183)] = 9562,
  [SMALL_STATE(184)] = 9587,
  [SMALL_STATE(185)] = 9612,
  [SMALL_STATE(186)] = 9637,
  [SMALL_STATE(187)] = 9666,
  [SMALL_STATE(188)] = 9691,
  [SMALL_STATE(189)] = 9735,
  [SMALL_STATE(190)] = 9779,
  [SMALL_STATE(191)] = 9823,
  [SMALL_STATE(192)] = 9867,
  [SMALL_STATE(193)] = 9908,
  [SMALL_STATE(194)] = 9931,
  [SMALL_STATE(195)] = 9954,
  [SMALL_STATE(196)] = 9977,
  [SMALL_STATE(197)] = 10000,
  [SMALL_STATE(198)] = 10023,
  [SMALL_STATE(199)] = 10046,
  [SMALL_STATE(200)] = 10069,
  [SMALL_STATE(201)] = 10092,
  [SMALL_STATE(202)] = 10115,
  [SMALL_STATE(203)] = 10138,
  [SMALL_STATE(204)] = 10161,
  [SMALL_STATE(205)] = 10184,
  [SMALL_STATE(206)] = 10207,
  [SMALL_STATE(207)] = 10230,
  [SMALL_STATE(208)] = 10253,
  [SMALL_STATE(209)] = 10276,
  [SMALL_STATE(210)] = 10299,
  [SMALL_STATE(211)] = 10320,
  [SMALL_STATE(212)] = 10343,
  [SMALL_STATE(213)] = 10383,
  [SMALL_STATE(214)] = 10423,
  [SMALL_STATE(215)] = 10463,
  [SMALL_STATE(216)] = 10503,
  [SMALL_STATE(217)] = 10541,
  [SMALL_STATE(218)] = 10581,
  [SMALL_STATE(219)] = 10621,
  [SMALL_STATE(220)] = 10661,
  [SMALL_STATE(221)] = 10701,
  [SMALL_STATE(222)] = 10739,
  [SMALL_STATE(223)] = 10774,
  [SMALL_STATE(224)] = 10809,
  [SMALL_STATE(225)] = 10844,
  [SMALL_STATE(226)] = 10866,
  [SMALL_STATE(227)] = 10894,
  [SMALL_STATE(228)] = 10926,
  [SMALL_STATE(229)] = 10953,
  [SMALL_STATE(230)] = 10980,
  [SMALL_STATE(231)] = 11006,
  [SMALL_STATE(232)] = 11032,
  [SMALL_STATE(233)] = 11058,
  [SMALL_STATE(234)] = 11084,
  [SMALL_STATE(235)] = 11108,
  [SMALL_STATE(236)] = 11134,
  [SMALL_STATE(237)] = 11160,
  [SMALL_STATE(238)] = 11186,
  [SMALL_STATE(239)] = 11212,
  [SMALL_STATE(240)] = 11235,
  [SMALL_STATE(241)] = 11258,
  [SMALL_STATE(242)] = 11281,
  [SMALL_STATE(243)] = 11306,
  [SMALL_STATE(244)] = 11331,
  [SMALL_STATE(245)] = 11354,
  [SMALL_STATE(246)] = 11379,
  [SMALL_STATE(247)] = 11400,
  [SMALL_STATE(248)] = 11421,
  [SMALL_STATE(249)] = 11446,
  [SMALL_STATE(250)] = 11469,
  [SMALL_STATE(251)] = 11492,
  [SMALL_STATE(252)] = 11515,
  [SMALL_STATE(253)] = 11540,
  [SMALL_STATE(254)] = 11563,
  [SMALL_STATE(255)] = 11588,
  [SMALL_STATE(256)] = 11609,
  [SMALL_STATE(257)] = 11634,
  [SMALL_STATE(258)] = 11657,
  [SMALL_STATE(259)] = 11680,
  [SMALL_STATE(260)] = 11700,
  [SMALL_STATE(261)] = 11720,
  [SMALL_STATE(262)] = 11736,
  [SMALL_STATE(263)] = 11758,
  [SMALL_STATE(264)] = 11780,
  [SMALL_STATE(265)] = 11802,
  [SMALL_STATE(266)] = 11824,
  [SMALL_STATE(267)] = 11837,
  [SMALL_STATE(268)] = 11858,
  [SMALL_STATE(269)] = 11871,
  [SMALL_STATE(270)] = 11886,
  [SMALL_STATE(271)] = 11907,
  [SMALL_STATE(272)] = 11920,
  [SMALL_STATE(273)] = 11935,
  [SMALL_STATE(274)] = 11948,
  [SMALL_STATE(275)] = 11961,
  [SMALL_STATE(276)] = 11982,
  [SMALL_STATE(277)] = 11997,
  [SMALL_STATE(278)] = 12012,
  [SMALL_STATE(279)] = 12031,
  [SMALL_STATE(280)] = 12052,
  [SMALL_STATE(281)] = 12073,
  [SMALL_STATE(282)] = 12094,
  [SMALL_STATE(283)] = 12107,
  [SMALL_STATE(284)] = 12127,
  [SMALL_STATE(285)] = 12143,
  [SMALL_STATE(286)] = 12155,
  [SMALL_STATE(287)] = 12169,
  [SMALL_STATE(288)] = 12189,
  [SMALL_STATE(289)] = 12203,
  [SMALL_STATE(290)] = 12221,
  [SMALL_STATE(291)] = 12233,
  [SMALL_STATE(292)] = 12249,
  [SMALL_STATE(293)] = 12265,
  [SMALL_STATE(294)] = 12279,
  [SMALL_STATE(295)] = 12297,
  [SMALL_STATE(296)] = 12311,
  [SMALL_STATE(297)] = 12325,
  [SMALL_STATE(298)] = 12343,
  [SMALL_STATE(299)] = 12357,
  [SMALL_STATE(300)] = 12379,
  [SMALL_STATE(301)] = 12401,
  [SMALL_STATE(302)] = 12417,
  [SMALL_STATE(303)] = 12435,
  [SMALL_STATE(304)] = 12452,
  [SMALL_STATE(305)] = 12467,
  [SMALL_STATE(306)] = 12484,
  [SMALL_STATE(307)] = 12499,
  [SMALL_STATE(308)] = 12516,
  [SMALL_STATE(309)] = 12525,
  [SMALL_STATE(310)] = 12534,
  [SMALL_STATE(311)] = 12547,
  [SMALL_STATE(312)] = 12560,
  [SMALL_STATE(313)] = 12569,
  [SMALL_STATE(314)] = 12578,
  [SMALL_STATE(315)] = 12593,
  [SMALL_STATE(316)] = 12604,
  [SMALL_STATE(317)] = 12613,
  [SMALL_STATE(318)] = 12624,
  [SMALL_STATE(319)] = 12639,
  [SMALL_STATE(320)] = 12652,
  [SMALL_STATE(321)] = 12661,
  [SMALL_STATE(322)] = 12672,
  [SMALL_STATE(323)] = 12687,
  [SMALL_STATE(324)] = 12704,
  [SMALL_STATE(325)] = 12713,
  [SMALL_STATE(326)] = 12730,
  [SMALL_STATE(327)] = 12741,
  [SMALL_STATE(328)] = 12758,
  [SMALL_STATE(329)] = 12767,
  [SMALL_STATE(330)] = 12782,
  [SMALL_STATE(331)] = 12791,
  [SMALL_STATE(332)] = 12808,
  [SMALL_STATE(333)] = 12825,
  [SMALL_STATE(334)] = 12838,
  [SMALL_STATE(335)] = 12853,
  [SMALL_STATE(336)] = 12870,
  [SMALL_STATE(337)] = 12880,
  [SMALL_STATE(338)] = 12890,
  [SMALL_STATE(339)] = 12902,
  [SMALL_STATE(340)] = 12910,
  [SMALL_STATE(341)] = 12918,
  [SMALL_STATE(342)] = 12926,
  [SMALL_STATE(343)] = 12942,
  [SMALL_STATE(344)] = 12956,
  [SMALL_STATE(345)] = 12964,
  [SMALL_STATE(346)] = 12974,
  [SMALL_STATE(347)] = 12982,
  [SMALL_STATE(348)] = 12998,
  [SMALL_STATE(349)] = 13006,
  [SMALL_STATE(350)] = 13016,
  [SMALL_STATE(351)] = 13032,
  [SMALL_STATE(352)] = 13040,
  [SMALL_STATE(353)] = 13052,
  [SMALL_STATE(354)] = 13066,
  [SMALL_STATE(355)] = 13082,
  [SMALL_STATE(356)] = 13090,
  [SMALL_STATE(357)] = 13098,
  [SMALL_STATE(358)] = 13108,
  [SMALL_STATE(359)] = 13124,
  [SMALL_STATE(360)] = 13140,
  [SMALL_STATE(361)] = 13148,
  [SMALL_STATE(362)] = 13156,
  [SMALL_STATE(363)] = 13166,
  [SMALL_STATE(364)] = 13180,
  [SMALL_STATE(365)] = 13196,
  [SMALL_STATE(366)] = 13204,
  [SMALL_STATE(367)] = 13220,
  [SMALL_STATE(368)] = 13236,
  [SMALL_STATE(369)] = 13252,
  [SMALL_STATE(370)] = 13268,
  [SMALL_STATE(371)] = 13279,
  [SMALL_STATE(372)] = 13292,
  [SMALL_STATE(373)] = 13303,
  [SMALL_STATE(374)] = 13316,
  [SMALL_STATE(375)] = 13329,
  [SMALL_STATE(376)] = 13342,
  [SMALL_STATE(377)] = 13355,
  [SMALL_STATE(378)] = 13362,
  [SMALL_STATE(379)] = 13375,
  [SMALL_STATE(380)] = 13388,
  [SMALL_STATE(381)] = 13401,
  [SMALL_STATE(382)] = 13414,
  [SMALL_STATE(383)] = 13427,
  [SMALL_STATE(384)] = 13438,
  [SMALL_STATE(385)] = 13445,
  [SMALL_STATE(386)] = 13458,
  [SMALL_STATE(387)] = 13465,
  [SMALL_STATE(388)] = 13478,
  [SMALL_STATE(389)] = 13485,
  [SMALL_STATE(390)] = 13498,
  [SMALL_STATE(391)] = 13511,
  [SMALL_STATE(392)] = 13518,
  [SMALL_STATE(393)] = 13525,
  [SMALL_STATE(394)] = 13532,
  [SMALL_STATE(395)] = 13543,
  [SMALL_STATE(396)] = 13556,
  [SMALL_STATE(397)] = 13567,
  [SMALL_STATE(398)] = 13580,
  [SMALL_STATE(399)] = 13593,
  [SMALL_STATE(400)] = 13606,
  [SMALL_STATE(401)] = 13619,
  [SMALL_STATE(402)] = 13630,
  [SMALL_STATE(403)] = 13643,
  [SMALL_STATE(404)] = 13654,
  [SMALL_STATE(405)] = 13661,
  [SMALL_STATE(406)] = 13674,
  [SMALL_STATE(407)] = 13681,
  [SMALL_STATE(408)] = 13694,
  [SMALL_STATE(409)] = 13707,
  [SMALL_STATE(410)] = 13718,
  [SMALL_STATE(411)] = 13725,
  [SMALL_STATE(412)] = 13732,
  [SMALL_STATE(413)] = 13745,
  [SMALL_STATE(414)] = 13758,
  [SMALL_STATE(415)] = 13769,
  [SMALL_STATE(416)] = 13782,
  [SMALL_STATE(417)] = 13795,
  [SMALL_STATE(418)] = 13808,
  [SMALL_STATE(419)] = 13821,
  [SMALL_STATE(420)] = 13832,
  [SMALL_STATE(421)] = 13843,
  [SMALL_STATE(422)] = 13856,
  [SMALL_STATE(423)] = 13869,
  [SMALL_STATE(424)] = 13876,
  [SMALL_STATE(425)] = 13889,
  [SMALL_STATE(426)] = 13896,
  [SMALL_STATE(427)] = 13909,
  [SMALL_STATE(428)] = 13922,
  [SMALL_STATE(429)] = 13929,
  [SMALL_STATE(430)] = 13942,
  [SMALL_STATE(431)] = 13955,
  [SMALL_STATE(432)] = 13962,
  [SMALL_STATE(433)] = 13975,
  [SMALL_STATE(434)] = 13988,
  [SMALL_STATE(435)] = 14001,
  [SMALL_STATE(436)] = 14014,
  [SMALL_STATE(437)] = 14027,
  [SMALL_STATE(438)] = 14040,
  [SMALL_STATE(439)] = 14053,
  [SMALL_STATE(440)] = 14066,
  [SMALL_STATE(441)] = 14079,
  [SMALL_STATE(442)] = 14086,
  [SMALL_STATE(443)] = 14097,
  [SMALL_STATE(444)] = 14104,
  [SMALL_STATE(445)] = 14117,
  [SMALL_STATE(446)] = 14130,
  [SMALL_STATE(447)] = 14141,
  [SMALL_STATE(448)] = 14152,
  [SMALL_STATE(449)] = 14159,
  [SMALL_STATE(450)] = 14172,
  [SMALL_STATE(451)] = 14185,
  [SMALL_STATE(452)] = 14198,
  [SMALL_STATE(453)] = 14205,
  [SMALL_STATE(454)] = 14218,
  [SMALL_STATE(455)] = 14231,
  [SMALL_STATE(456)] = 14244,
  [SMALL_STATE(457)] = 14255,
  [SMALL_STATE(458)] = 14268,
  [SMALL_STATE(459)] = 14281,
  [SMALL_STATE(460)] = 14288,
  [SMALL_STATE(461)] = 14296,
  [SMALL_STATE(462)] = 14306,
  [SMALL_STATE(463)] = 14316,
  [SMALL_STATE(464)] = 14322,
  [SMALL_STATE(465)] = 14332,
  [SMALL_STATE(466)] = 14342,
  [SMALL_STATE(467)] = 14348,
  [SMALL_STATE(468)] = 14358,
  [SMALL_STATE(469)] = 14364,
  [SMALL_STATE(470)] = 14370,
  [SMALL_STATE(471)] = 14376,
  [SMALL_STATE(472)] = 14386,
  [SMALL_STATE(473)] = 14392,
  [SMALL_STATE(474)] = 14402,
  [SMALL_STATE(475)] = 14410,
  [SMALL_STATE(476)] = 14416,
  [SMALL_STATE(477)] = 14426,
  [SMALL_STATE(478)] = 14434,
  [SMALL_STATE(479)] = 14444,
  [SMALL_STATE(480)] = 14454,
  [SMALL_STATE(481)] = 14462,
  [SMALL_STATE(482)] = 14472,
  [SMALL_STATE(483)] = 14480,
  [SMALL_STATE(484)] = 14486,
  [SMALL_STATE(485)] = 14494,
  [SMALL_STATE(486)] = 14500,
  [SMALL_STATE(487)] = 14510,
  [SMALL_STATE(488)] = 14520,
  [SMALL_STATE(489)] = 14528,
  [SMALL_STATE(490)] = 14536,
  [SMALL_STATE(491)] = 14546,
  [SMALL_STATE(492)] = 14556,
  [SMALL_STATE(493)] = 14566,
  [SMALL_STATE(494)] = 14572,
  [SMALL_STATE(495)] = 14580,
  [SMALL_STATE(496)] = 14590,
  [SMALL_STATE(497)] = 14600,
  [SMALL_STATE(498)] = 14610,
  [SMALL_STATE(499)] = 14616,
  [SMALL_STATE(500)] = 14626,
  [SMALL_STATE(501)] = 14636,
  [SMALL_STATE(502)] = 14646,
  [SMALL_STATE(503)] = 14656,
  [SMALL_STATE(504)] = 14666,
  [SMALL_STATE(505)] = 14672,
  [SMALL_STATE(506)] = 14682,
  [SMALL_STATE(507)] = 14692,
  [SMALL_STATE(508)] = 14702,
  [SMALL_STATE(509)] = 14712,
  [SMALL_STATE(510)] = 14722,
  [SMALL_STATE(511)] = 14732,
  [SMALL_STATE(512)] = 14742,
  [SMALL_STATE(513)] = 14752,
  [SMALL_STATE(514)] = 14762,
  [SMALL_STATE(515)] = 14772,
  [SMALL_STATE(516)] = 14782,
  [SMALL_STATE(517)] = 14792,
  [SMALL_STATE(518)] = 14798,
  [SMALL_STATE(519)] = 14805,
  [SMALL_STATE(520)] = 14812,
  [SMALL_STATE(521)] = 14819,
  [SMALL_STATE(522)] = 14826,
  [SMALL_STATE(523)] = 14833,
  [SMALL_STATE(524)] = 14840,
  [SMALL_STATE(525)] = 14847,
  [SMALL_STATE(526)] = 14854,
  [SMALL_STATE(527)] = 14861,
  [SMALL_STATE(528)] = 14868,
  [SMALL_STATE(529)] = 14875,
  [SMALL_STATE(530)] = 14882,
  [SMALL_STATE(531)] = 14889,
  [SMALL_STATE(532)] = 14896,
  [SMALL_STATE(533)] = 14903,
  [SMALL_STATE(534)] = 14910,
  [SMALL_STATE(535)] = 14917,
  [SMALL_STATE(536)] = 14924,
  [SMALL_STATE(537)] = 14931,
  [SMALL_STATE(538)] = 14938,
  [SMALL_STATE(539)] = 14945,
  [SMALL_STATE(540)] = 14952,
  [SMALL_STATE(541)] = 14959,
  [SMALL_STATE(542)] = 14966,
  [SMALL_STATE(543)] = 14973,
  [SMALL_STATE(544)] = 14980,
  [SMALL_STATE(545)] = 14985,
  [SMALL_STATE(546)] = 14992,
  [SMALL_STATE(547)] = 14999,
  [SMALL_STATE(548)] = 15006,
  [SMALL_STATE(549)] = 15013,
  [SMALL_STATE(550)] = 15020,
  [SMALL_STATE(551)] = 15027,
  [SMALL_STATE(552)] = 15034,
  [SMALL_STATE(553)] = 15041,
  [SMALL_STATE(554)] = 15048,
  [SMALL_STATE(555)] = 15053,
  [SMALL_STATE(556)] = 15058,
  [SMALL_STATE(557)] = 15065,
  [SMALL_STATE(558)] = 15072,
  [SMALL_STATE(559)] = 15079,
  [SMALL_STATE(560)] = 15086,
  [SMALL_STATE(561)] = 15093,
  [SMALL_STATE(562)] = 15100,
  [SMALL_STATE(563)] = 15105,
  [SMALL_STATE(564)] = 15112,
  [SMALL_STATE(565)] = 15119,
  [SMALL_STATE(566)] = 15126,
  [SMALL_STATE(567)] = 15133,
  [SMALL_STATE(568)] = 15140,
  [SMALL_STATE(569)] = 15147,
  [SMALL_STATE(570)] = 15154,
  [SMALL_STATE(571)] = 15161,
  [SMALL_STATE(572)] = 15168,
  [SMALL_STATE(573)] = 15175,
  [SMALL_STATE(574)] = 15182,
  [SMALL_STATE(575)] = 15189,
  [SMALL_STATE(576)] = 15196,
  [SMALL_STATE(577)] = 15203,
  [SMALL_STATE(578)] = 15210,
  [SMALL_STATE(579)] = 15217,
  [SMALL_STATE(580)] = 15224,
  [SMALL_STATE(581)] = 15231,
  [SMALL_STATE(582)] = 15238,
  [SMALL_STATE(583)] = 15245,
  [SMALL_STATE(584)] = 15252,
  [SMALL_STATE(585)] = 15259,
  [SMALL_STATE(586)] = 15266,
  [SMALL_STATE(587)] = 15273,
  [SMALL_STATE(588)] = 15280,
  [SMALL_STATE(589)] = 15287,
  [SMALL_STATE(590)] = 15294,
  [SMALL_STATE(591)] = 15301,
  [SMALL_STATE(592)] = 15308,
  [SMALL_STATE(593)] = 15315,
  [SMALL_STATE(594)] = 15322,
  [SMALL_STATE(595)] = 15329,
  [SMALL_STATE(596)] = 15336,
  [SMALL_STATE(597)] = 15343,
  [SMALL_STATE(598)] = 15350,
  [SMALL_STATE(599)] = 15357,
  [SMALL_STATE(600)] = 15364,
  [SMALL_STATE(601)] = 15371,
  [SMALL_STATE(602)] = 15378,
  [SMALL_STATE(603)] = 15385,
  [SMALL_STATE(604)] = 15392,
  [SMALL_STATE(605)] = 15399,
  [SMALL_STATE(606)] = 15403,
  [SMALL_STATE(607)] = 15407,
  [SMALL_STATE(608)] = 15411,
  [SMALL_STATE(609)] = 15415,
  [SMALL_STATE(610)] = 15419,
  [SMALL_STATE(611)] = 15423,
  [SMALL_STATE(612)] = 15427,
  [SMALL_STATE(613)] = 15431,
  [SMALL_STATE(614)] = 15435,
  [SMALL_STATE(615)] = 15439,
  [SMALL_STATE(616)] = 15443,
  [SMALL_STATE(617)] = 15447,
  [SMALL_STATE(618)] = 15451,
  [SMALL_STATE(619)] = 15455,
  [SMALL_STATE(620)] = 15459,
  [SMALL_STATE(621)] = 15463,
  [SMALL_STATE(622)] = 15467,
  [SMALL_STATE(623)] = 15471,
  [SMALL_STATE(624)] = 15475,
  [SMALL_STATE(625)] = 15479,
  [SMALL_STATE(626)] = 15483,
  [SMALL_STATE(627)] = 15487,
  [SMALL_STATE(628)] = 15491,
  [SMALL_STATE(629)] = 15495,
  [SMALL_STATE(630)] = 15499,
  [SMALL_STATE(631)] = 15503,
  [SMALL_STATE(632)] = 15507,
  [SMALL_STATE(633)] = 15511,
  [SMALL_STATE(634)] = 15515,
  [SMALL_STATE(635)] = 15519,
  [SMALL_STATE(636)] = 15523,
  [SMALL_STATE(637)] = 15527,
  [SMALL_STATE(638)] = 15531,
  [SMALL_STATE(639)] = 15535,
  [SMALL_STATE(640)] = 15539,
  [SMALL_STATE(641)] = 15543,
  [SMALL_STATE(642)] = 15547,
  [SMALL_STATE(643)] = 15551,
  [SMALL_STATE(644)] = 15555,
  [SMALL_STATE(645)] = 15559,
  [SMALL_STATE(646)] = 15563,
  [SMALL_STATE(647)] = 15567,
  [SMALL_STATE(648)] = 15571,
  [SMALL_STATE(649)] = 15575,
  [SMALL_STATE(650)] = 15579,
  [SMALL_STATE(651)] = 15583,
  [SMALL_STATE(652)] = 15587,
  [SMALL_STATE(653)] = 15591,
  [SMALL_STATE(654)] = 15595,
  [SMALL_STATE(655)] = 15599,
  [SMALL_STATE(656)] = 15603,
  [SMALL_STATE(657)] = 15607,
  [SMALL_STATE(658)] = 15611,
  [SMALL_STATE(659)] = 15615,
  [SMALL_STATE(660)] = 15619,
  [SMALL_STATE(661)] = 15623,
  [SMALL_STATE(662)] = 15627,
  [SMALL_STATE(663)] = 15631,
  [SMALL_STATE(664)] = 15635,
  [SMALL_STATE(665)] = 15639,
  [SMALL_STATE(666)] = 15643,
  [SMALL_STATE(667)] = 15647,
  [SMALL_STATE(668)] = 15651,
  [SMALL_STATE(669)] = 15655,
  [SMALL_STATE(670)] = 15659,
  [SMALL_STATE(671)] = 15663,
  [SMALL_STATE(672)] = 15667,
  [SMALL_STATE(673)] = 15671,
  [SMALL_STATE(674)] = 15675,
  [SMALL_STATE(675)] = 15679,
  [SMALL_STATE(676)] = 15683,
  [SMALL_STATE(677)] = 15687,
  [SMALL_STATE(678)] = 15691,
  [SMALL_STATE(679)] = 15695,
  [SMALL_STATE(680)] = 15699,
  [SMALL_STATE(681)] = 15703,
  [SMALL_STATE(682)] = 15707,
  [SMALL_STATE(683)] = 15711,
  [SMALL_STATE(684)] = 15715,
  [SMALL_STATE(685)] = 15719,
  [SMALL_STATE(686)] = 15723,
  [SMALL_STATE(687)] = 15727,
  [SMALL_STATE(688)] = 15731,
  [SMALL_STATE(689)] = 15735,
  [SMALL_STATE(690)] = 15739,
  [SMALL_STATE(691)] = 15743,
  [SMALL_STATE(692)] = 15747,
  [SMALL_STATE(693)] = 15751,
  [SMALL_STATE(694)] = 15755,
  [SMALL_STATE(695)] = 15759,
  [SMALL_STATE(696)] = 15763,
  [SMALL_STATE(697)] = 15767,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(681),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(609),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(611),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(614),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(617),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(625),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(626),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(627),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(628),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(630),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(633),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(636),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(640),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(579),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(584),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(432),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(433),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(434),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(435),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(436),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(444),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(515),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_params_section_repeat1, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_params_section_repeat1, 2, 0, 0),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 2, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 3, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 6, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 6, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 6, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 6, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 5, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 5, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 4, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 4, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0), SHIFT_REPEAT(595),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assert_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_certificate_query, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_certificate_query, 2, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 6, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 6, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [862] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [878] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 0),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(576),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(172),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(172),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [988] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(635),
  [1066] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(663),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [1071] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [1077] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [1155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [1158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(513),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(646),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(503),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [1229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [1248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [1258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(676),
  [1261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [1276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [1298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [1301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [1304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(612),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [1341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [1344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [1379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(325),
  [1385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(325),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(676),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [1430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [1433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [1452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(678),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(646),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [1483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lt_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [1503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [1512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [1536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(612),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2, 0, 0),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(637),
  [1558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [1563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [1568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2, 0, 0),
  [1619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(638),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2, 0, 0),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 0),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3, 0, 0),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_option, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_option, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3, 0, 0),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 1),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [2037] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
