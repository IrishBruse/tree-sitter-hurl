module.exports = grammar({
  name: "hurl",
  //word: $ => $.word,
  extras: $ => [/[\s\p{Zs}\uFEFF\u2060\u200B]/, $.comment],

  rules: {
    hurl_file: ($) => seq(repeat($.entry), repeat("\n")),
    entry: ($) => prec.right(seq($.request, optional($.response), optional("\n"))),
    request: ($) =>
      prec.right(seq(
        $.method,
        optional($.value_string),
        repeat1("\n"),
        repeat($.header),
        repeat($.request_section),
        optional($.body)
      )),
    response: ($) =>
      seq(
        $.version,
        $.status,
        "\n",
        repeat($.header),
        repeat($.response_section),
        optional($.body)
      ),
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
        "VIEW"
      ),
    version: ($) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*"),
    status: ($) => choice(seq(/[0-9]+/), '*'),
    header: ($) => seq($.key_value, "\n"),
    body: ($) => seq($.bytes, "\n"),
    request_section: ($) =>
      choice(
        $.basic_auth_section,
        $.query_string_params_section,
        $.form_params_section,
        $.multipart_form_data_section,
        $.cookies_section,
        $.options_section
      ),
    response_section: ($) => choice($.captures_section, $.asserts_section),
    basic_auth_section: ($) =>
      seq("[BasicAuth]", "\n", $.key_value, "\n"),
    query_string_params_section: ($) =>
      prec.right(seq("[QueryStringParams]", "\n", optional($.key_value), repeat(seq("\n",$.key_value)), "\n")),
    form_params_section: ($) =>
      prec.right(seq("[FormParams]", "\n", optional($.key_value), repeat(seq("\n",$.key_value)), "\n")),
    multipart_form_data_section: ($) =>
      prec.right(seq(
        "[MultipartFormData]",
        "\n",
        optional($.multipart_form_data_param),
        repeat(seq("\n",$.multipart_form_data_param)),
        "\n"
      )),
    cookies_section: ($) =>
      prec.right(seq("[Cookies]", "\n", optional($.key_value), repeat(seq("\n", $.key_value)), "\n")),
    captures_section: ($) =>
      prec.right(seq("[Captures]", "\n", repeat($.capture))),
    asserts_section: ($) =>
      seq("[Asserts]", "\n", repeat($.assert)),
    options_section: ($) =>
      seq("[Options]", "\n", repeat($.option)),
    key_value: ($) => prec.right(seq($.key_string, ":", optional(choice($.value_string, $.boolean, $.float, $.integer, $.null)))),
    multipart_form_data_param: ($) => choice($.file_param, $.key_value),
    file_param: ($) => seq($.key_string, ":", $.file_value, "\n"),
    file_value: ($) =>
      prec.left(seq("file,", optional($.filename), ";", optional($.file_contenttype))),
    file_contenttype: ($) => seq(/[a-zA-Z0-9\/+-]+/),
    capture: ($) =>
      seq(
        $.key_string,
        ":",
        $.query,
        repeat(seq($.filter)),
        "\n"
      ),
    assert: ($) =>
      seq(
        $.query,
        repeat(seq($.filter)),
        $.predicate,
        "\n"
      ),
    option: ($) =>
      seq(
        choice(
          $.ca_certificate_option,
          $.follow_redirect_option,
          $.insecure_option,
          $.max_redirs_option,
          $.retry_option,
          $.retry_interval_option,
          $.retry_max_count_option,
          $.variable_option,
          $.verbose_option,
          $.very_verbose_option
        )
      ),
    ca_certificate_option: ($) =>
      seq("cacert", ":", optional($.filename), "\n"),
    follow_redirect_option: ($) => seq("location", ":", $.boolean, "\n"),
    insecure_option: ($) => seq("insecure", ":", $.boolean, "\n"),
    max_redirs_option: ($) => seq("max-redirs", ":", $.integer, "\n"),
    retry_option: ($) => seq("retry", ":", $.boolean, "\n"),
    retry_interval_option: ($) => seq("retry-interval", ":", $.integer, "\n"),
    retry_max_count_option: ($) => seq("retry-max-count", ":", $.integer, "\n"),
    variable_option: ($) => seq("variable", ":", $.variable_definition, "\n"),
    verbose_option: ($) => seq("verbose", ":", $.boolean, "\n"),
    very_verbose_option: ($) => seq("very-verbose", ":", $.boolean, "\n"),
    variable_definition: ($) => seq($.variable_name, "=", $.variable_value),
    variable_value: ($) =>
      choice(
        $.null,
        $.boolean,
        $.integer,
        $.float,
        $.key_string,
        $.quoted_string
      ),
    query: ($) =>
      choice(
        $.status_query,
        $.url_query,
        $.header_query,
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
    status_query: ($) => seq("status"),
    url_query: ($) => seq("url"),
    header_query: ($) => seq("header", $.quoted_string),
    cookie_query: ($) => seq("cookie", $.quoted_string),
    body_query: ($) => seq("body"),
    xpath_query: ($) => seq("xpath", $.quoted_string),
    jsonpath_query: ($) => seq("jsonpath", $.quoted_string),
    regex_query: ($) => seq("regex", choice($.quoted_string, $.regex)),
    variable_query: ($) => seq("variable", $.quoted_string),
    duration_query: ($) => seq("duration"),
    sha256_query: ($) => seq("sha256"),
    md5_query: ($) => seq("md5"),
    bytes_query: ($) => seq("bytes"),
    predicate: ($) => seq(optional(seq("not")), $.predicate_func),
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
        $.exist_predicate,
        $.include_predicate,
        $.integer_predicate,
        $.float_predicate,
        $.boolean_predicate,
        $.string_predicate,
        $.collection_predicate
      ),
    equal_predicate: ($) =>
      seq(choice("equals", "=="), $.predicate_value),
    not_equal_predicate: ($) =>
      seq(choice("notEquals", "!="), $.predicate_value),
    greater_predicate: ($) =>
      seq(
        choice("greaterThan", ">"),
        choice($.integer, $.float, $.quoted_string)
      ),
    greater_or_equal_predicate: ($) =>
      seq(
        choice("greaterThanOrEquals", ">="),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_predicate: ($) =>
      seq(
        choice("lessThan", "<"),
        choice($.integer, $.float, $.quoted_string)
      ),
    less_or_equal_predicate: ($) =>
      seq(
        choice("lessThanOrEquals", "<="),
        choice($.integer, $.float, $.quoted_string)
      ),
    start_with_predicate: ($) =>
      seq(
        "startsWith",
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    end_with_predicate: ($) =>
      seq(
        "endsWith",
        choice($.quoted_string, $.oneline_hex, $.oneline_base64)
      ),
    contain_predicate: ($) => seq("contains", $.quoted_string),
    match_predicate: ($) =>
      seq("matches", choice($.quoted_string, $.regex)),
    exist_predicate: ($) => seq("exists"),
    include_predicate: ($) => seq("includes", $.predicate_value),
    integer_predicate: ($) => seq("isInteger"),
    float_predicate: ($) => seq("isFloat"),
    boolean_predicate: ($) => seq("isBoolean"),
    string_predicate: ($) => seq("isString"),
    collection_predicate: ($) => seq("isCollection"),
    predicate_value: ($) =>
      choice(
        $.null,
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
    xml: ($) => seq("<", "To,Be,Defined", ">"),
    oneline_base64: ($) => seq("base64,", /[a-zA-Z0-9+\-=,\n]+/, ";"),
    oneline_file: ($) => seq("file,", optional($.filename), ";"),
    oneline_hex: ($) => seq("hex,", repeat($.hexdigit), ";"),
    quoted_string: ($) =>
      seq('"', repeat(choice($.quoted_string_content, $.template)), '"'),
    quoted_string_content: ($) =>
      prec.right(repeat1(choice($.quoted_string_text, choice($.quoted_string_escaped_char, $.invalid_quoted_string_escaped_char)))),
    quoted_string_text: ($) => seq(/[^"\\]+/),
    invalid_quoted_string_escaped_char: ($) =>
      seq( "\\", /[^"\f\r\tu\\]/),
    quoted_string_escaped_char: ($) =>
      seq(
        "\\",
        choice('"', "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),
    key_string: ($) => repeat1(choice($.key_string_content, $.template)),
    key_string_content: ($) =>
      prec.left(repeat1(choice($.key_string_text, $.key_string_escaped_char))),
    key_string_text: ($) =>
      token(repeat1(choice(/[A-Za-z0-9]/, "_", "-", ".", "[", "]", "@", "$"))),
    key_string_escaped_char: ($) => seq("\\", choice("#", '"')),
    value_string: ($) => prec.left(repeat1(choice($.value_string_content, $.template))),
    value_string_content: ($) =>
      prec.right(repeat1(choice($.value_string_text, $.value_string_escaped_char))),
    value_string_text: ($) => prec.right(repeat1(/[^#\n\\]/)),
    value_string_escaped_char: ($) =>
      seq(
        "\\",
        choice("#", "\\", "b", "f", "n", "r", "t", seq("u", $.unicode_char))
      ),
    oneline_string: ($) =>
      seq("`", repeat(choice($.oneline_string_content, $.template)), "`"),
    oneline_string_content: ($) =>
      prec.left(repeat1(choice($.oneline_string_text, $.oneline_string_escaped_char))),
    oneline_string_text: ($) => seq(/[^#\n\\]/, /[^`]/),
    oneline_string_escaped_char: ($) =>
      seq("\\", choice("`", "#", "\\", "b", "f", seq("u", $.unicode_char))),
    multiline_string: ($) =>
      prec(2,seq(
        "```",
        optional($.multiline_string_type),
        "\n",
        repeat(choice($.multiline_string_content, $.template)),
        optional("\n"),
        "```"
      )),
    multiline_string_type: ($) =>
      choice("base64", "hex", "json", "xml", "graphql"),
    multiline_string_content: ($) =>
      prec.right(repeat1(choice($.multiline_string_text, $.multiline_string_escaped_char, "\n"))),
    multiline_string_text: ($) => seq(/[^\\]/),
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
    unicode_char: ($) => seq("{", repeat1($.hexdigit), "}"),
    json_value: ($) =>
      choice(
        $.template,
        $.json_object,
        $.json_array,
        $.json_string,
        $.json_number,
        $.boolean,
        $.null
      ),
    json_object: ($) =>
      choice(seq("{", optional($.json_key_value), repeat(seq(",", $.json_key_value)), "}")),
    json_key_value: ($) => seq($.json_key_string, ":", $.json_value),
    json_key_string: ($) => alias($.json_string, "json_key_string"),
    json_array: ($) =>
      prec(2,seq("[", $.json_value, repeat(seq(",", $.json_value)), "]")),
    json_string: ($) =>
      seq('"', repeat(choice($.json_string_content, $.template)), '"'),
    json_string_content: ($) =>
      choice($.json_string_text, $.json_string_escaped_char),
    json_string_text: ($) => seq(/[^"\\]/),
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
        $.count_filter,
        $.url_encode_filter,
        $.url_decode_filter,
        $.html_encode_filter,
        $.html_decode_filter,
        $.to_int_filter
      ),
    regex_filter: ($) => seq("regex", choice($.quoted_string, $.regex)),
    count_filter: ($) => seq("count"),
    url_encode_filter: ($) => seq("urlEncode"),
    url_decode_filter: ($) => seq("urlDecode"),
    html_encode_filter: ($) => seq("htmlEscape"),
    html_decode_filter: ($) => seq("htmlUnescape"),
    to_int_filter: ($) => seq("toInt"),
    boolean: ($) => choice("true", "false"),
    null: ($) => seq("null"),
    _alphanum: ($) => seq(/[A-Za-z0-9]/),
    integer: ($) => prec.left(seq(repeat1($.digit))),
    float: ($) => seq($.integer, $.fraction),
    digit: ($) => seq(/[0-9]/),
    hexdigit: ($) => seq(/[0-9A-Fa-f]/),
    fraction: ($) => prec.left(seq(".", repeat1($.digit))),
    exponent: ($) =>
      seq(choice("e", "E"), optional(choice("+", "-")), repeat1($.digit)),
    _sp: ($) => seq(/[ \t]/),
    comment: ($) => token(seq("#", /.+/)),
    regex: ($) => seq("/", optional($.regex_content), "/"),
    regex_content: ($) => repeat1(choice($.regex_text, $.regex_escaped_char)),
    regex_text: ($) => seq(/[^\n\\\/]+/),
    regex_escaped_char: ($) => seq("\\", /[^\n]/),
  },
  conflicts: ($) => [
  ],
});
