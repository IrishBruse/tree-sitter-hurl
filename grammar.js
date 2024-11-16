/**
 * @file Test grammar for tree-sitter
 * @author Ethan Conneely
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "hurl",

  rules: {
    //
    // # General
    //

    // hurl-file:
    hurl_file: ($) =>
      seq(
        // entry*
        repeat($.entry),
        // lt*
        repeat($.lt)
      ),

    // entry:
    entry: ($) =>
      prec.right(
        seq(
          // request
          $.request,
          // response?
          optional($.response)
        )
      ),

    // request:
    request: ($) =>
      prec.right(
        seq(
          // lt*
          repeat($.lt),

          // method sp value-string lt
          $.method,
          $.value_string,
          $.lt,

          // header*
          repeat($.header),

          // request-section*
          repeat($.request_section),

          // body?
          optional($.body)
        )
      ),

    // response:
    response: ($) =>
      seq(
        // lt*
        repeat($.lt),
        prec.right(
          seq(
            // version sp status lt
            $.version,
            $.status,
            $.lt,
            // header*
            repeat($.header),
            // response-section*
            repeat($.response_section),
            // body?
            optional($.body)
          )
        )
      ),

    // method: [A-Z]+
    method: ($) =>
      choice(
        "GET",
        "HEAD",
        "POST",
        "PUT",
        "DELETE",
        "CONNECT",
        "OPTIONS",
        "TRACE",
        "PATCH",
        "LINK",
        "UNLINK",
        "PURGE",
        "LOCK",
        "UNLOCK",
        "PROPFIND",
        "VIEW",
        /[A-Z]+/
      ),

    // version:
    // | "HTTP/1.0"
    // | "HTTP/1.1"
    // | "HTTP/2"
    // | "HTTP/*"
    // | "HTTP"
    version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*", "HTTP"),

    // status:
    //   [0-9]+
    status: ($) => choice(/[0-9]+/, "*"),

    // header:
    //   lt*
    //   key-value lt
    header: ($) => seq(repeat($.lt), seq($.key_value, $.lt)),

    // body:
    //   lt*
    //   bytes lt
    body: ($) => seq(repeat($.lt), seq($.bytes, $.lt)),

    //
    // # Sections
    //

    // request-section:
    //   | basic-auth-section
    //   | query-string-params-section
    //   | form-params-section
    //   | multipart-form-data-section
    //   | cookies-section
    //   | options-section
    request_section: ($) =>
      choice(
        $.basic_auth_section,
        $.query_string_params_section,
        $.form_params_section,
        $.multipart_form_data_section,
        $.cookies_section,
        $.options_section
      ),
    // response-section:
    //   | captures-section
    //   | asserts-section
    response_section: ($) => choice($.captures_section, $.asserts_section),

    // query-string-params-section:
    //   lt*
    //   ("[QueryStringParams]" | "[Query]") lt
    //   key-value*
    query_string_params_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            choice("[QueryStringParams]", "[Query]"),
            $.lt,
            optional($.key_value),
            repeat(seq($.lt, $.key_value)),
            $.lt
          )
        )
      ),

    // form-params-section:
    //   lt*
    //   ("[FormParams]" | "[Form]") lt
    //   key-value*
    form_params_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(choice("[FormParams]", "[Form]"), $.lt, repeat($.key_value))
        )
      ),

    // multipart-form-data-section:
    //   lt*
    //   ("[MultipartFormData]" | "[Multipart]") lt
    //   multipart-form-data-param*
    multipart_form_data_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            choice("[MultipartFormData]", "[Multipart]"),
            $.lt,
            repeat($.multipart_form_data_param)
          )
        )
      ),

    // cookies-section:
    //   lt*
    //   "[Cookies]" lt
    //   key-value*
    cookies_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            "[Cookies]",
            $.lt,
            optional($.key_value),
            repeat(seq($.lt, $.key_value)),
            $.lt
          )
        )
      ),

    // captures-section:
    //   lt*
    //   "[Captures]" lt
    //   capture*
    captures_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            //   "[Captures]" lt
            "[Captures]",
            $.lt,
            repeat($.capture)
          )
        )
      ),

    // asserts-section:
    //   lt*
    //   "[Asserts]" lt
    //   assert*
    asserts_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            //   "[Asserts]" lt
            "[Asserts]",
            $.lt,
            repeat($.assert)
          )
        )
      ),

    // basic-auth-section:
    //   lt*
    //   "[BasicAuth]" lt
    //   key-value*
    basic_auth_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            //   "[BasicAuth]" lt
            "[BasicAuth]",
            $.lt,
            repeat($.key_value)
          )
        )
      ),

    // options-section:
    //   lt*
    //   "[Options]" lt
    //   option*
    options_section: ($) =>
      seq(
        repeat($.lt),
        prec.left(
          seq(
            //   "[Options]" lt
            "[Options]",
            $.lt,
            repeat($.option)
          )
        )
      ),

    // key-value: key-string ":" value-string
    key_value: ($) =>
      prec.left(
        seq(
          $.key_string,
          token.immediate(":"),
          optional(
            choice($.value_string, $.boolean, $.float, $.integer, "null")
          )
        )
      ),

    // multipart-form-data-param: file-param | key-value
    multipart_form_data_param: ($) => choice($.file_param, $.key_value),

    // file-param:
    //   lt*
    //   key-string ":" file-value lt
    file_param: ($) =>
      seq(
        //
        repeat($.lt),
        prec.left(seq($.key_string, ":", $.file_value, $.lt))
      ),

    file_value: ($) =>
      prec.left(
        seq("file,", optional($.filename), ";", optional(/[a-zA-Z0-9\/+-]+/))
      ),

    // capture:
    //   lt*
    //   key-string ":" query (sp filter)* lt
    capture: ($) =>
      seq(
        //
        repeat($.lt),
        prec.right(
          seq(
            $.key_string,
            token.immediate(":"),
            $.query,
            repeat($.filter),
            $.lt
          )
        )
      ),

    assert: ($) => seq($.query, repeat(seq($.filter)), $.predicate, $.lt),

    // option:
    option: ($) =>
      seq(
        //   lt*
        repeat($.lt),
        choice(
          // TODO: implement these
          //   ( aws-sigv4-option
          //   | ca-certificate-option
          $.ca_certificate_option,
          //   | client-certificate-option
          //   | client-key-option
          //   | compressed-option
          $.compressed_option,
          //   | connect-to-option
          //   | connect-timeout-option
          //   | delay-option
          //   | follow-redirect-option
          $.follow_redirect_option,
          //   | follow-redirect-trusted-option
          //   | http10-option
          //   | http11-option
          //   | http2-option
          //   | http3-option
          //   | insecure-option
          $.insecure_option,
          //   | ipv4-option
          //   | ipv6-option
          //   | max-redirs-option
          $.max_redirs_option,
          //   | netrc-option
          //   | netrc-file-option
          //   | netrc-optional-option
          //   | output-option
          //   | path-as-is-option
          $.path_as_is_option,
          //   | proxy-option
          $.proxy_option,
          //   | repeat-option
          //   | resolve-option
          //   | retry-option
          $.retry_option,
          //   | retry-interval-option
          $.retry_interval_option,
          //   | skip-option
          //   | unix-socket-option
          //   | user-option
          //   | variable-option
          $.variable_option,
          //   | verbose-option
          $.verbose_option,
          //   | very-verbose-option
          $.very_verbose_option,
          //   )

          // not in grammer maybe deprecated now
          $.retry_max_count_option
        )
      ),

    // aws-sigv4-option
    // ca-certificate-option

    // ca-certificate-option: "cacert" ":" filename lt
    ca_certificate_option: ($) =>
      seq("cacert", ":", optional($.filename), $.lt),

    // client-certificate-option
    // client-key-option

    // compressed-option: "compressed" ":" boolean-option lt
    compressed_option: ($) => seq("compressed", ":", $.boolean, $.lt),

    // connect-to-option
    // connect-timeout-option
    // delay-option

    // follow-redirect-option: "location" ":" boolean-option lt
    follow_redirect_option: ($) => seq("location", ":", $.boolean, $.lt),

    // follow-redirect-trusted-option
    // http10-option
    // http11-option
    // http2-option
    // http3-option

    // insecure-option: "insecure" ":" boolean-option lt
    insecure_option: ($) => seq("insecure", ":", $.boolean, $.lt),

    // ipv4-option
    // ipv6-option

    // max-redirs-option: "max-redirs" ":" integer-option lt
    max_redirs_option: ($) => seq("max-redirs", ":", $.integer, $.lt),

    // netrc-option
    // netrc-file-option
    // netrc-optional-option
    // output-option

    // path-as-is-option: "path-as-is" ":" boolean-option lt
    path_as_is_option: ($) => seq("path-as-is", ":", $.boolean, $.lt),

    // proxy-option: "proxy" ":" value-string lt
    proxy_option: ($) => seq("proxy", ":", $.value_string, $.lt),
    // repeat-option
    // resolve-option

    // retry-option: "retry" ":" integer-option lt
    retry_option: ($) => seq("retry", ":", $.boolean, $.lt),

    // retry-interval-option: "retry-interval" ":" duration-option lt
    retry_interval_option: ($) => seq("retry-interval", ":", $.integer, $.lt),

    // skip-option
    // unix-socket-option
    // user-option

    // variable-option: "variable" ":" variable-definition lt
    variable_option: ($) => seq("variable", ":", $.variable_definition, $.lt),

    // verbose-option: "verbose" ":" boolean-option lt
    verbose_option: ($) => seq("verbose", ":", $.boolean_option, $.lt),

    // very-verbose-option: "very-verbose" ":" boolean-option lt
    very_verbose_option: ($) => seq("very-verbose", ":", $.boolean, $.lt),

    // not in grammer maybe deprecated now
    retry_max_count_option: ($) => seq("retry-max-count", ":", $.integer, $.lt),

    // variable-definition: variable-name "=" variable-value
    variable_definition: ($) => seq($.variable_name, "=", $.variable_value),

    // boolean-option: boolean | template
    boolean_option: ($) => choice($.boolean, $.template),

    // integer-option: integer | template
    integer_option: ($) => choice($.integer, $.template),

    // duration-option: (integer duration-unit?)  | template
    duration_option: ($) => choice(seq($.integer, $.duration_unit), $.template),

    // duration-unit: "ms" | "s" | "m"
    duration_unit: ($) => choice("ms", "s", "m"),

    // variable-value:
    //     null
    //   | boolean
    //   | integer
    //   | float
    //   | key-string
    //   | quoted-string
    variable_value: ($) =>
      choice(
        "null",
        $.boolean,
        $.integer,
        $.float,
        $.key_string,
        $.quoted_string
      ),

    //
    // # Query
    //

    // query:
    //     status-query
    //   | url-query
    //   | header-query
    //   | certificate-query
    //   | cookie-query
    //   | body-query
    //   | xpath-query
    //   | jsonpath-query
    //   | regex-query
    //   | variable-query
    //   | duration-query
    //   | bytes-query
    //   | sha256-query
    //   | md5-query
    query: ($) =>
      choice(
        $.status_query,
        $.url_query,
        $.header_query,
        $.certificate_query,
        $.cookie_query,
        $.body_query,
        $.xpath_query,
        $.jsonpath_query,
        $.regex_query,
        $.variable_query,
        $.duration_query,
        $.bytes_query,
        $.sha256_query,
        $.md5_query
      ),

    // status-query: "status"
    status_query: ($) => "status",

    // url-query: "url"
    url_query: ($) => "url",

    // header-query: "header" sp quoted-string
    header_query: ($) => seq("header", $.quoted_string),

    // certificate-query: "certificate" sp ("Subject" | "Issuer" | "Start-Date" | "Expire-Date" | "Serial-Number")
    certificate_query: ($) =>
      seq(
        "certificate",
        choice(
          "Subject",
          "Issuer",
          "Start-Date",
          "Expire-Date",
          "Serial-Number"
        )
      ),

    // cookie-query: "cookie" sp quoted-string
    cookie_query: ($) => seq("cookie", $.quoted_string),

    // body-query: "body"
    body_query: ($) => "body",

    // xpath-query: "xpath" sp quoted-string
    xpath_query: ($) => seq("xpath", $.quoted_string),

    // jsonpath-query: "jsonpath" sp quoted-string
    jsonpath_query: ($) => seq("jsonpath", $.quoted_string),

    // regex-query: "regex" sp (quoted-string | regex)
    regex_query: ($) => seq("regex", choice($.quoted_string, $.regex)),

    // variable-query: "variable" sp quoted-string
    variable_query: ($) => seq("variable", $.quoted_string),

    // duration-query: "duration"
    duration_query: ($) => "duration",

    // sha256-query: "sha256"
    sha256_query: ($) => "sha256",

    // md5-query: "md5"
    md5_query: ($) => "md5",

    // bytes-query: "bytes"
    bytes_query: ($) => "bytes",

    //
    // Predicates
    //

    // predicate: ("not" sp )? predicate-func
    predicate: ($) => seq(optional("not"), $.predicate_func),

    // predicate-func:
    //     equal-predicate
    //   | not-equal-predicate
    //   | greater-predicate
    //   | greater-or-equal-predicate
    //   | less-predicate
    //   | less-or-equal-predicate
    //   | start-with-predicate
    //   | end-with-predicate
    //   | contain-predicate
    //   | match-predicate
    //   | exist-predicate
    //   | is-empty-predicate
    //   | include-predicate
    //   | integer-predicate
    //   | float-predicate
    //   | boolean-predicate
    //   | string-predicate
    //   | collection-predicate
    //   | date-predicate
    //   | iso-date-predicate
    predicate_func: ($) =>
      choice(
        $.equal_predicate,
        $.not_equal_predicate,
        $.greater_predicate,
        $.greater_or_equal_predicate,
        $.less_predicate,
        $.less_or_equal_predicate,
        $.start_with_predicate,
        $.end_with_predicate,
        $.contain_predicate,
        $.match_predicate,
        "exists",
        $.include_predicate,
        "isInteger",
        "isFloat",
        "isBoolean",
        "isString",
        "isCollection"
      ),

    // equal-predicate: "==" sp predicate-value
    equal_predicate: ($) => seq(choice("equals", "=="), $.predicate_value),

    // not-equal-predicate: "!=" sp predicate-value
    not_equal_predicate: ($) =>
      seq(choice("notEquals", "!="), $.predicate_value),

    // greater-predicate: ">" sp (number | quoted-string)
    greater_predicate: ($) =>
      seq(
        choice("greaterThan", ">"),
        choice($.integer, $.float, $.quoted_string)
      ),

    // greater-or-equal-predicate: ">=" sp sp* (number | quoted-string)
    greater_or_equal_predicate: ($) =>
      seq(
        choice("greaterThanOrEquals", ">="),
        choice($.integer, $.float, $.quoted_string)
      ),

    // less-predicate: "<" sp (number | quoted-string)
    less_predicate: ($) =>
      seq(choice("lessThan", "<"), choice($.integer, $.float, $.quoted_string)),

    // less-or-equal-predicate: "<=" sp (number | quoted-string)
    less_or_equal_predicate: ($) =>
      seq(
        choice("lessThanOrEquals", "<="),
        choice($.integer, $.float, $.quoted_string)
      ),

    // start-with-predicate: "startsWith" sp (quoted-string | oneline-hex | oneline-base64)
    start_with_predicate: ($) =>
      seq(
        "startsWith",
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),

    // end-with-predicate: "endsWith" sp (quoted-string | oneline-hex | oneline-base64)
    end_with_predicate: ($) =>
      seq("endsWith", choice($.quoted_string, $.oneline_hex, $.oneline_base64)),

    // contain-predicate: "contains" sp quoted-string
    contain_predicate: ($) => seq("contains", $.quoted_string),

    // match-predicate: "matches" sp (quoted-string | regex)
    match_predicate: ($) => seq("matches", choice($.quoted_string, $.regex)),

    // exist-predicate: "exists"
    exist_predicate: ($) => "exists",

    // is-empty-predicate: "isEmpty"
    is_empty_predicate: ($) => "isEmpty",

    // include-predicate: "includes" sp predicate-value
    include_predicate: ($) => seq("includes", $.predicate_value),

    // integer-predicate: "isInteger"
    integer_predicate: ($) => "isInteger",

    // float-predicate: "isFloat"
    float_predicate: ($) => "isFloat",

    // boolean-predicate: "isBoolean"
    boolean_predicate: ($) => "isBoolean",

    // string-predicate: "isString"
    string_predicate: ($) => "isString",

    // collection-predicate: "isCollection"
    collection_predicate: ($) => "isCollection",

    // date-predicate: "isDate"
    date_predicate: ($) => "isDate",

    // iso-date-predicate: "isIsoDate"
    iso_date_predicate: ($) => "isIsoDate",

    // predicate-value:
    //   boolean
    // | multiline-string
    // | null
    // | number
    // | oneline-string
    // | oneline-base64
    // | oneline-file
    // | oneline-hex
    // | quoted-string
    // | template
    predicate_value: ($) =>
      choice(
        "null",
        $.boolean,
        $.integer,
        $.float,
        $.quoted_string,
        $.oneline_hex,
        $.oneline_base64,
        $.oneline_file,
        $.multiline_string,
        $.template
      ),

    //
    // Bytes
    //

    // bytes:
    //   json-value
    // | xml
    // | multiline-string
    // | oneline-string
    // | oneline-base64
    // | oneline-file
    // | oneline-hex
    bytes: ($) =>
      choice(
        $.json_value,
        $.xml,
        $.multiline_string,
        $.oneline_string,
        $.oneline_base64,
        $.oneline_file,
        $.oneline_hex
      ),

    // TODO: Improve xml parsing
    xml: ($) => seq(repeat($.xml_prolog_tag), $.xml_tag),
    xml_prolog_tag: ($) => seq("<?", /[^?]+/, "?>"),
    xml_tag: ($) =>
      seq(
        $.xml_open_tag,
        repeat(choice($.xml_prolog_tag, $.xml_tag, $.value_string)),
        $.xml_close_tag
      ),
    xml_open_tag: ($) => seq("<", /[^/?][^>]*/, ">"),
    xml_close_tag: ($) => seq("</", /[^/>]+/, ">"),

    oneline_base64: ($) => seq("base64,", /[a-zA-Z0-9+\-=,\n]+/, ";"),
    oneline_file: ($) => seq("file,", optional($.filename), ";"),
    oneline_hex: ($) => seq("hex,", repeat($.hexdigit), ";"),

    //
    // Strings
    //

    // quoted-string: "\"" (quoted-string-content | template)* "\""
    quoted_string: ($) =>
      seq('"', repeat(choice($.quoted_string_content, $.template)), '"'),

    // quoted-string-content: (quoted-string-text | quoted-string-escaped-char)*
    quoted_string_content: ($) =>
      prec.right(
        repeat1(
          choice(
            $.quoted_string_text,
            choice(
              $.quoted_string_escaped_char,
              $.invalid_quoted_string_escaped_char
            )
          )
        )
      ),

    // quoted-string-text: ~["\\]+
    quoted_string_text: ($) => /[^"\\]+/,

    // quoted-string-escaped-char: "\\" ("\"" | "\\" | "\b" | "\f" | "\n" | "\r" | "\t" | "\u" unicode-char)
    quoted_string_escaped_char: ($) =>
      seq(
        "\\",
        choice('"', "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),

    invalid_quoted_string_escaped_char: ($) => seq("\\", /[^"\f\r\tu\\]/),

    // key-string: (key-string-content | template)+
    key_string: ($) => repeat1(choice($.key_string_content, $.template)),

    // key-string-content: (key-string-text | key-string-escaped-char)*
    key_string_content: ($) =>
      prec.left(repeat1(choice($.key_string_text, $.key_string_escaped_char))),

    // key-string-text: (alphanum | "_" | "-" | "." | "[" | "]" | "@" | "$") +
    key_string_text: ($) =>
      token.immediate(
        repeat1(
          token.immediate(
            choice(/[A-Za-z0-9]/, "_", "-", ".", "[", "]", "@", "$")
          )
        )
      ),

    // key-string-escaped-char: "\\" ("#" | ":" | "\\" | "\b" | "\f" | "\n" | "\r" | "\t" | "\u" unicode-char )
    key_string_escaped_char: ($) =>
      seq(token.immediate("\\"), token.immediate(choice("#", '"'))),

    // value-string: (value-string-content | template)*
    value_string: ($) =>
      prec.left(repeat1(choice($.value_string_content, $.template))),

    // value-string-content: (value-string-text | value-string-escaped-char)*
    value_string_content: ($) =>
      prec.right(
        repeat1(choice($.value_string_text, $.value_string_escaped_char))
      ),

    // value-string-text: ~[#\n\\]+
    value_string_text: ($) => prec.right(repeat1(token.immediate(/[^#\n\\]/))),

    // value-string-escaped-char: "\\" ("#" | "\\" | "\b" | "\f" | "\n" | "\r" | "\t" | "\u" unicode-char )

    value_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("#", "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),

    oneline_string: ($) =>
      seq(/`[^`]/, repeat(choice($.oneline_string_content, $.template)), "`"),
    oneline_string_content: ($) =>
      prec.left(
        repeat1(choice($.oneline_string_text, $.oneline_string_escaped_char))
      ),
    oneline_string_text: ($) => seq(/[^#\n\\]/, /[^`]/),
    oneline_string_escaped_char: ($) =>
      seq("\\", choice("`", "#", "\\", "b", "f", seq("u", $.unicode_char))),

    multiline_string: ($) =>
      prec(
        2,
        seq(
          "```",
          optional($.multiline_string_type),
          "\n",
          repeat(choice($.multiline_string_content, prec(1, $.template))),
          optional("\n"),
          prec(2, "```")
        )
      ),
    multiline_string_type: ($) =>
      choice("base64", "hex", "json", "xml", "graphql", /.+/),
    multiline_string_content: ($) =>
      prec.left(
        repeat1(
          choice(
            $._multiline_string_text,
            $.multiline_string_escaped_char,
            "\n"
          )
        )
      ),
    _multiline_string_text: ($) => seq(/[^\\{`\n]+/, repeat(choice("`", "{"))),
    multiline_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("\\", "b", "f", "n", "r", "t", "`", seq("u", $.unicode_char))
      ),

    filename: ($) => repeat1(choice($.filename_content, $.template)),
    filename_content: ($) =>
      prec.left(repeat1(choice($.filename_text, $.filename_escaped_char))),
    filename_text: ($) => /[^#; \n\\]+/,
    filename_escaped_char: ($) => seq("\\", choice(";", "#", /[,]/)),
    unicode_char: ($) =>
      seq("{", $.hexdigit, $.hexdigit, $.hexdigit, $.hexdigit, "}"),

    json_value: ($) =>
      choice(
        $.template,
        $.json_object,
        $.json_array,
        $.json_string,
        $.json_number,
        $.boolean,
        "null"
      ),
    json_object: ($) =>
      choice(
        seq(
          "{",
          optional($.json_key_value),
          repeat(seq(",", $.json_key_value)),
          "}"
        )
      ),
    json_key_value: ($) => seq($.json_key_string, ":", $.json_value),
    json_key_string: ($) => alias($.json_string, "json_key_string"),
    json_array: ($) =>
      prec(2, seq("[", $.json_value, repeat(seq(",", $.json_value)), "]")),
    json_string: ($) =>
      seq('"', repeat(choice($.json_string_content, $.template)), '"'),
    json_string_content: ($) =>
      choice($.json_string_text, $.json_string_escaped_char),
    json_string_text: ($) => /[^"\\]/,
    json_string_escaped_char: ($) =>
      seq(
        "\\",
        choice(
          '"',
          "\\",
          "b",
          "f",
          "n",
          "r",
          "t",
          seq("u", $.hexdigit, $.hexdigit, $.hexdigit, $.hexdigit)
        )
      ),
    json_number: ($) =>
      seq($.integer, optional($.fraction), optional($.exponent)),

    template: ($) => seq("{{", $.expr, "}}"),
    expr: ($) => seq($.variable_name, repeat(seq($.filter))),
    variable_name: ($) => seq(/[A-Za-z]/, /[A-Za-z_\-0-9]*/),
    filter: ($) =>
      choice(
        $.regex_filter,
        "count",
        "urlEncode",
        "urlDecode",
        "toInt",

        "htmlEscape",
        "htmlUnescape",

        "daysAfterNow",
        "daysBeforeNow",
        "decode",
        "format",
        $.nth_filter,
        $.replace_filter,
        $.split_filter,
        "toDate",
        $.xpath_filter
      ),

    regex_filter: ($) => seq("regex", choice($.quoted_string, $.regex)),
    nth_filter: ($) => seq("nth", $.integer),
    replace_filter: ($) =>
      seq("replace", choice($.quoted_string, $.regex), $.quoted_string),
    split_filter: ($) => seq("split", $.quoted_string),
    xpath_filter: ($) => seq("xpath", $.quoted_string),
    boolean: ($) => choice("true", "false"),
    _alphanum: ($) => /[A-Za-z0-9]/,
    integer: ($) => prec.left(seq(repeat1($.digit))),
    float: ($) => seq($.integer, $.fraction),
    digit: ($) => /[0-9]/,
    hexdigit: ($) => /[0-9A-Fa-f]/,
    fraction: ($) => prec.left(seq(".", repeat1($.digit))),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.digit)),

    // lt: sp* comment? [\n]?
    lt: ($) => prec.right(repeat1(choice($.comment, "\n"))),

    comment: ($) => token(seq("#", /[^\n]*/)),
    regex: ($) => seq("/", optional($.regex_content), "/"),
    regex_content: ($) => repeat1(choice($.regex_text, $.regex_escaped_char)),
    regex_text: ($) => /[^\n\\\/]+/,
    regex_escaped_char: ($) => seq("\\", /[^\n]/),
  },
  conflicts: ($) => [],
});
