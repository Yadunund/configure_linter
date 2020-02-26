# Uncrustify-0.68

#
# General options
#

# The type of line endings. Default=Auto.
newlines                        = auto     # auto/lf/crlf/cr

# The original size of tabs in the input. Default=8.
input_tab_size                  = 2        # unsigned number

# The size of tabs in the output (only used if align_with_tabs=true). Default=8.
output_tab_size                 = 2        # unsigned number

# The ASCII value of the string escape char, usually 92 (\) or 94 (^). (Pawn).
string_escape_char              = 92       # unsigned number

# Alternate string escape char for Pawn. Only works right before the quote char.
string_escape_char2             = 0        # unsigned number

# Replace tab characters found in string literals with the escape sequence \t instead.
string_replace_tab_chars        = false    # false/true

# Allow interpreting '>=' and '>>=' as part of a template in 'void f(list<list<B>>=val);'.
# If True, 'assert(x<0 && y>=3)' will be broken. Default=False
# Improvements to template detection may make this option obsolete.
tok_split_gte                   = false    # false/true

# Override the default ' *INDENT-OFF*' in comments for disabling processing of part of the file.
disable_processing_cmt          = " *INDENT-OFF*"      # string

# Override the default ' *INDENT-ON*' in comments for enabling processing of part of the file.
enable_processing_cmt           = " *INDENT-ON*"     # string

# Enable parsing of digraphs. Default=False.
enable_digraphs                 = false    # false/true

# Control what to do with the UTF-8 BOM (recommend 'remove').
utf8_bom                        = ignore   # ignore/add/remove/force

# If the file contains bytes with values between 128 and 255, but is not UTF-8, then output as UTF-8.
utf8_byte                       = false    # false/true

# Force the output encoding to UTF-8.
utf8_force                      = false    # false/true

#
# Spacing options
#

# Add or remove space around arithmetic operator '+', '-', '/', '*', etc
# also '>>>' '<<' '>>' '%' '|'.
sp_arith                        = ignore    # ignore/add/remove/force

# Add or remove space around arithmetic operator '+' and '-'. Overrides sp_arith
sp_arith_additive               = ignore    # ignore/add/remove/force

# Add or remove space around assignment operator '=', '+=', etc.
sp_assign                       = ignore    # ignore/add/remove/force

# Add or remove space around '=' in C++11 lambda capture specifications. Overrides sp_assign.
sp_cpp_lambda_assign            = ignore   # ignore/add/remove/force

# Add or remove space after the capture specification in C++11 lambda.
sp_cpp_lambda_paren             = ignore   # ignore/add/remove/force

# Add or remove space around assignment operator '=' in a prototype.
sp_assign_default               = ignore   # ignore/add/remove/force

# Add or remove space before assignment operator '=', '+=', etc. Overrides sp_assign.
sp_before_assign                = ignore   # ignore/add/remove/force

# Add or remove space after assignment operator '=', '+=', etc. Overrides sp_assign.
sp_after_assign                 = ignore   # ignore/add/remove/force

# Add or remove space in 'NS_ENUM ('.
sp_enum_paren                   = ignore   # ignore/add/remove/force

# Add or remove space around assignment '=' in enum.
sp_enum_assign                  = ignore   # ignore/add/remove/force

# Add or remove space before assignment '=' in enum. Overrides sp_enum_assign.
sp_enum_before_assign           = ignore   # ignore/add/remove/force

# Add or remove space after assignment '=' in enum. Overrides sp_enum_assign.
sp_enum_after_assign            = ignore   # ignore/add/remove/force

# Add or remove space around assignment ':' in enum.
sp_enum_colon                   = ignore   # ignore/add/remove/force

# Add or remove space around preprocessor '##' concatenation operator. Default=Add.
sp_pp_concat                    = ignore    # ignore/add/remove/force

# Add or remove space after preprocessor '#' stringify operator. Also affects the '#@' charizing operator.
sp_pp_stringify                 = remove   # ignore/add/remove/force

# Add or remove space before preprocessor '#' stringify operator as in '#define x(y) L#y'.
sp_before_pp_stringify          = ignore   # ignore/add/remove/force

# Add or remove space around boolean operators '&&' and '||'.
sp_bool                         = ignore    # ignore/add/remove/force

# Add or remove space around compare operator '<', '>', '==', etc.
sp_compare                      = ignore    # ignore/add/remove/force

# Add or remove space inside '(' and ')'.
sp_inside_paren                 = ignore   # ignore/add/remove/force

# Add or remove space between nested parens: '((' vs ') )'.
sp_paren_paren                  = ignore   # ignore/add/remove/force

# Add or remove space between back-to-back parens: ')(' vs ') ('.
sp_cparen_oparen                = ignore   # ignore/add/remove/force

# Whether to balance spaces inside nested parens.
sp_balance_nested_parens        = false    # false/true

# Add or remove space between ')' and '{'.
sp_paren_brace                  = ignore    # ignore/add/remove/force

# Add or remove space between nested braces, i.e. '{{' vs '{ {'.
sp_brace_brace                  = ignore   # ignore/add/remove/force

# Add or remove space before pointer star '*'.
sp_before_ptr_star              = ignore    # ignore/add/remove/force

# Add or remove space before pointer star '*' that isn't followed by a variable name
# If set to 'ignore', sp_before_ptr_star is used instead.
sp_before_unnamed_ptr_star      = ignore   # ignore/add/remove/force

# Add or remove space between pointer stars '*'.
sp_between_ptr_star             = remove   # ignore/add/remove/force

# Add or remove space after pointer star '*', if followed by a word.
sp_after_ptr_star               = add    # ignore/add/remove/force

# Add or remove space after pointer caret '^', if followed by a word.
sp_after_ptr_block_caret        = ignore   # ignore/add/remove/force

# Add or remove space after pointer star '*', if followed by a qualifier.
sp_after_ptr_star_qualifier     = add   # ignore/add/remove/force

# Add or remove space after a pointer star '*', if followed by a func proto/def.
sp_after_ptr_star_func          = add    # ignore/add/remove/force

# Add or remove space after a pointer star '*', if followed by an open paren (function types).
sp_ptr_star_paren               = add   # ignore/add/remove/force

# Add or remove space before a pointer star '*', if followed by a func proto/def.
sp_before_ptr_star_func         = remove    # ignore/add/remove/force

# Add or remove space before a reference sign '&'.
sp_before_byref                 = remove    # ignore/add/remove/force

# Add or remove space before a reference sign '&' that isn't followed by a variable name.
# If set to 'ignore', sp_before_byref is used instead.
sp_before_unnamed_byref         = remove   # ignore/add/remove/force

# Add or remove space after reference sign '&', if followed by a word.
sp_after_byref                  = add    # ignore/add/remove/force

# Add or remove space after a reference sign '&', if followed by a func proto/def.
sp_after_byref_func             = add    # ignore/add/remove/force

# Add or remove space before a reference sign '&', if followed by a func proto/def.
sp_before_byref_func            = remove    # ignore/add/remove/force

# Add or remove space between type and word. Default=Force.
sp_after_type                   = ignore    # ignore/add/remove/force

# Add or remove space between 'decltype(...)' and word.
sp_after_decltype               = ignore   # ignore/add/remove/force

# Add or remove space before the paren in the D constructs 'template Foo(' and 'class Foo('.
sp_before_template_paren        = ignore   # ignore/add/remove/force

# Add or remove space in 'template <' vs 'template<'.
# If set to ignore, sp_before_angle is used.
sp_template_angle               = ignore   # ignore/add/remove/force

# Add or remove space before '<>'.
sp_before_angle                 = remove   # ignore/add/remove/force

# Add or remove space inside '<' and '>'.
sp_inside_angle                 = remove   # ignore/add/remove/force

# Add or remove space between '<>' and ':'.
sp_angle_colon                  = ignore   # ignore/add/remove/force

# Add or remove space after '<>'.
sp_after_angle                  = remove   # ignore/add/remove/force

# Add or remove space between '<>' and '(' as found in 'new List<byte>(foo);'.
sp_angle_paren                  = remove   # ignore/add/remove/force

# Add or remove space between '<>' and '()' as found in 'new List<byte>();'.
sp_angle_paren_empty            = remove   # ignore/add/remove/force

# Add or remove space between '<>' and a word as in 'List<byte> m;' or 'template <typename T> static ...'.
sp_angle_word                   = force    # ignore/add/remove/force

# Add or remove space between '>' and '>' in '>>' (template stuff). Default=Add.
sp_angle_shift                  = remove   # ignore/add/remove/force

# Permit removal of the space between '>>' in 'foo<bar<int> >' (C++11 only). Default=False.
# sp_angle_shift cannot remove the space without this option.
sp_permit_cpp11_shift           = true     # false/true

# Add or remove space before '(' of 'if', 'for', 'switch', 'while', etc.
sp_before_sparen                = force    # ignore/add/remove/force

# Add or remove space inside if-condition '(' and ')'.
sp_inside_sparen                = remove   # ignore/add/remove/force

# Add or remove space before if-condition ')'. Overrides sp_inside_sparen.
sp_inside_sparen_close          = ignore   # ignore/add/remove/force

# Add or remove space after if-condition '('. Overrides sp_inside_sparen.
sp_inside_sparen_open           = ignore   # ignore/add/remove/force

# Add or remove space after ')' of 'if', 'for', 'switch', and 'while', etc.
sp_after_sparen                 = ignore   # ignore/add/remove/force

# Add or remove space between ')' and '{' of 'if', 'for', 'switch', and 'while', etc.
sp_sparen_brace                 = force    # ignore/add/remove/force

# Add or remove space between 'invariant' and '(' in the D language.
sp_invariant_paren              = ignore   # ignore/add/remove/force

# Add or remove space after the ')' in 'invariant (C) c' in the D language.
sp_after_invariant_paren        = ignore   # ignore/add/remove/force

# Add or remove space before empty statement ';' on 'if', 'for' and 'while'.
sp_special_semi                 = ignore   # ignore/add/remove/force

# Add or remove space before ';'. Default=Remove.
sp_before_semi                  = remove   # ignore/add/remove/force

# Add or remove space before ';' in non-empty 'for' statements.
sp_before_semi_for              = ignore   # ignore/add/remove/force

# Add or remove space before a semicolon of an empty part of a for statement.
sp_before_semi_for_empty        = ignore   # ignore/add/remove/force

# Add or remove space after ';', except when followed by a comment. Default=Add.
sp_after_semi                   = ignore   # ignore/add/remove/force

# Add or remove space after ';' in non-empty 'for' statements. Default=Force.
sp_after_semi_for               = force    # ignore/add/remove/force

# Add or remove space after the final semicolon of an empty part of a for statement: for ( ; ; <here> ).
sp_after_semi_for_empty         = force    # ignore/add/remove/force

# Add or remove space before '[' (except '[]').
sp_before_square                = remove   # ignore/add/remove/force

# Add or remove space before structured bindings. Only for C++17.
sp_cpp_before_struct_binding    = ignore   # ignore/add/remove/force

# Add or remove space before '[]'.
sp_before_squares               = remove   # ignore/add/remove/force

# Add or remove space inside a non-empty '[' and ']'.
sp_inside_square                = remove   # ignore/add/remove/force

# Add or remove space inside a non-empty OC boxed array '@[' and ']'.
# If set to ignore, sp_inside_square is used.
sp_inside_square_oc_array       = ignore   # ignore/add/remove/force

# Add or remove space after ',', 'a,b' vs 'a, b'.
sp_after_comma                  = force    # ignore/add/remove/force

# Add or remove space before ','. Default=Remove.
sp_before_comma                 = remove   # ignore/add/remove/force

# Add or remove space between ',' and ']' in multidimensional array type 'int[,,]'. Only for C#.
sp_after_mdatype_commas         = ignore   # ignore/add/remove/force

# Add or remove space between '[' and ',' in multidimensional array type 'int[,,]'. Only for C#.
sp_before_mdatype_commas        = ignore   # ignore/add/remove/force

# Add or remove space between ',' in multidimensional array type 'int[,,]'. Only for C#.
sp_between_mdatype_commas       = ignore   # ignore/add/remove/force

# Add or remove space between an open paren and comma: '(,' vs '( ,'. Default=Force.
sp_paren_comma                  = force    # ignore/add/remove/force

# Add or remove space before the variadic '...' when preceded by a non-punctuator.
sp_before_ellipsis              = remove   # ignore/add/remove/force

# Add or remove space between a type and '...'.
sp_type_ellipsis                = remove   # ignore/add/remove/force

# Add or remove space between ')' and '...'.
sp_paren_ellipsis               = remove   # ignore/add/remove/force

# Add or remove space after class ':'.
sp_after_class_colon            = add    # ignore/add/remove/force

# Add or remove space before class ':'.
sp_before_class_colon           = add    # ignore/add/remove/force

# Add or remove space after class constructor ':'.
sp_after_constr_colon           = ignore   # ignore/add/remove/force

# Add or remove space before class constructor ':'.
sp_before_constr_colon          = ignore   # ignore/add/remove/force

# Add or remove space before case ':'. Default=Remove.
sp_before_case_colon            = remove   # ignore/add/remove/force

# Add or remove space between 'operator' and operator sign.
sp_after_operator               = remove   # ignore/add/remove/force

# Add or remove space between the operator symbol and the open paren, as in 'operator ++('.
sp_after_operator_sym           = remove   # ignore/add/remove/force

# Overrides sp_after_operator_sym when the operator has no arguments, as in 'operator *()'.
sp_after_operator_sym_empty     = remove   # ignore/add/remove/force

# Add or remove space after C/D cast, i.e. 'cast(int)a' vs 'cast(int) a' or '(int)a' vs '(int) a'.
sp_after_cast                   = ignore   # ignore/add/remove/force

# Add or remove spaces inside cast parens.
sp_inside_paren_cast            = remove   # ignore/add/remove/force

# Add or remove space between the type and open paren in a C++ cast, i.e. 'int(exp)' vs 'int (exp)'.
sp_cpp_cast_paren               = remove   # ignore/add/remove/force

# Add or remove space between 'sizeof' and '('.
sp_sizeof_paren                 = remove   # ignore/add/remove/force

# Add or remove space between 'sizeof' and '...'.
sp_sizeof_ellipsis              = ignore   # ignore/add/remove/force

# Add or remove space between 'sizeof...' and '('.
sp_sizeof_ellipsis_paren        = ignore   # ignore/add/remove/force

# Add or remove space between 'decltype' and '('.
sp_decltype_paren               = ignore   # ignore/add/remove/force

# Add or remove space after the tag keyword (Pawn).
sp_after_tag                    = ignore   # ignore/add/remove/force

# Add or remove space inside enum '{' and '}'.
sp_inside_braces_enum           = ignore   # ignore/add/remove/force

# Add or remove space inside struct/union '{' and '}'.
sp_inside_braces_struct         = ignore   # ignore/add/remove/force

# Add or remove space inside OC boxed dictionary @'{' and '}'
sp_inside_braces_oc_dict        = ignore   # ignore/add/remove/force

# Add or remove space after open brace in an unnamed temporary direct-list-initialization.
sp_after_type_brace_init_lst_open = ignore   # ignore/add/remove/force

# Add or remove space before close brace in an unnamed temporary direct-list-initialization.
sp_before_type_brace_init_lst_close = ignore   # ignore/add/remove/force

# Add or remove space inside an unnamed temporary direct-list-initialization.
sp_inside_type_brace_init_lst   = ignore   # ignore/add/remove/force

# Add or remove space inside '{' and '}'.
sp_inside_braces                = remove   # ignore/add/remove/force

# Add or remove space inside '{}'.
sp_inside_braces_empty          = remove   # ignore/add/remove/force

# Add or remove space between return type and function name
# A minimum of 1 is forced except for pointer return types.
sp_type_func                    = ignore   # ignore/add/remove/force

# Add or remove space between type and open brace of an unnamed temporary direct-list-initialization.
sp_type_brace_init_lst          = ignore   # ignore/add/remove/force

# Add or remove space between function name and '(' on function declaration.
sp_func_proto_paren             = remove   # ignore/add/remove/force

# Add or remove space between function name and '()' on function declaration without parameters.
sp_func_proto_paren_empty       = remove   # ignore/add/remove/force

# Add or remove space between function name and '(' on function definition.
sp_func_def_paren               = remove   # ignore/add/remove/force

# Add or remove space between function name and '()' on function definition without parameters.
sp_func_def_paren_empty         = remove   # ignore/add/remove/force

# Add or remove space inside empty function '()'.
sp_inside_fparens               = remove   # ignore/add/remove/force

# Add or remove space inside function '(' and ')'.
sp_inside_fparen                = remove   # ignore/add/remove/force

# Add or remove space inside the first parens in the function type: 'void (*x)(...)'.
sp_inside_tparen                = ignore   # ignore/add/remove/force

# Add or remove between the parens in the function type: 'void (*x)(...)'.
sp_after_tparen_close           = ignore   # ignore/add/remove/force

# Add or remove space between ']' and '(' when part of a function call.
sp_square_fparen                = remove   # ignore/add/remove/force

# Add or remove space between ')' and '{' of function.
sp_fparen_brace                 = force    # ignore/add/remove/force

# Add or remove space between ')' and '{' of function call in object initialization. Overrides sp_fparen_brace.
sp_fparen_brace_initializer     = force   # ignore/add/remove/force

# Java: Add or remove space between ')' and '{{' of double brace initializer.
sp_fparen_dbrace                = ignore   # ignore/add/remove/force

# Add or remove space between function name and '(' on function calls.
sp_func_call_paren              = remove   # ignore/add/remove/force

# Add or remove space between function name and '()' on function calls without parameters.
# If set to 'ignore' (the default), sp_func_call_paren is used.
sp_func_call_paren_empty        = ignore   # ignore/add/remove/force

# Add or remove space between the user function name and '(' on function calls
# You need to set a keyword to be a user function, like this: 'set func_call_user _' in the config file.
sp_func_call_user_paren         = ignore   # ignore/add/remove/force

# Add or remove space inside user function '(' and ')'
# You need to set a keyword to be a user function, like this: 'set func_call_user _' in the config file.
sp_func_call_user_inside_fparen = ignore   # ignore/add/remove/force

# Add or remove space between nested parens with user functions: '((' vs ') )'You need to set a keyword to be a user function, like this: 'set func_call_user _' in the config file.
sp_func_call_user_paren_paren   = ignore   # ignore/add/remove/force

# Add or remove space between a constructor/destructor and the open paren.
sp_func_class_paren             = remove   # ignore/add/remove/force

# Add or remove space between a constructor without parameters or destructor and '()'.
sp_func_class_paren_empty       = remove   # ignore/add/remove/force

# Add or remove space between 'return' and '('.
sp_return_paren                 = ignore   # ignore/add/remove/force

# Add or remove space between 'return' and '{'.
sp_return_brace                 = ignore   # ignore/add/remove/force

# Add or remove space between '__attribute__' and '('.
sp_attribute_paren              = ignore   # ignore/add/remove/force

# Add or remove space between 'defined' and '(' in '#if defined (FOO)'.
sp_defined_paren                = ignore   # ignore/add/remove/force

# Add or remove space between 'throw' and '(' in 'throw (something)'.
sp_throw_paren                  = ignore   # ignore/add/remove/force

# Add or remove space between 'throw' and anything other than '(' as in '@throw [...];'.
sp_after_throw                  = ignore   # ignore/add/remove/force

# Add or remove space between 'catch' and '(' in 'catch (something) { }'
# If set to ignore, sp_before_sparen is used.
sp_catch_paren                  = ignore   # ignore/add/remove/force

# Add or remove space between '@catch' and '(' in '@catch (something) { }'
# If set to ignore, sp_catch_paren is used.
sp_oc_catch_paren               = ignore   # ignore/add/remove/force

# Add or remove space between 'version' and '(' in 'version (something) { }' (D language)
# If set to ignore, sp_before_sparen is used.
sp_version_paren                = ignore   # ignore/add/remove/force

# Add or remove space between 'scope' and '(' in 'scope (something) { }' (D language)
# If set to ignore, sp_before_sparen is used.
sp_scope_paren                  = ignore   # ignore/add/remove/force

# Add or remove space between 'super' and '(' in 'super (something)'. Default=Remove.
sp_super_paren                  = remove   # ignore/add/remove/force

# Add or remove space between 'this' and '(' in 'this (something)'. Default=Remove.
sp_this_paren                   = remove   # ignore/add/remove/force

# Add or remove space between macro and value.
sp_macro                        = ignore   # ignore/add/remove/force

# Add or remove space between macro function ')' and value.
sp_macro_func                   = ignore   # ignore/add/remove/force

# Add or remove space between 'else' and '{' if on the same line.
sp_else_brace                   = force    # ignore/add/remove/force

# Add or remove space between '}' and 'else' if on the same line.
sp_brace_else                   = force    # ignore/add/remove/force

# Add or remove space between '}' and the name of a typedef on the same line.
sp_brace_typedef                = force    # ignore/add/remove/force

# Add or remove space between 'catch' and '{' if on the same line.
sp_catch_brace                  = force    # ignore/add/remove/force

# Add or remove space between '@catch' and '{' if on the same line.
# If set to ignore, sp_catch_brace is used.
sp_oc_catch_brace               = ignore   # ignore/add/remove/force

# Add or remove space between '}' and 'catch' if on the same line.
sp_brace_catch                  = force    # ignore/add/remove/force

# Add or remove space between '}' and '@catch' if on the same line.
# If set to ignore, sp_brace_catch is used.
sp_oc_brace_catch               = ignore   # ignore/add/remove/force

# Add or remove space between 'finally' and '{' if on the same line.
sp_finally_brace                = force    # ignore/add/remove/force

# Add or remove space between '}' and 'finally' if on the same line.
sp_brace_finally                = force    # ignore/add/remove/force

# Add or remove space between 'try' and '{' if on the same line.
sp_try_brace                    = force    # ignore/add/remove/force

# Add or remove space between get/set and '{' if on the same line.
sp_getset_brace                 = ignore   # ignore/add/remove/force

# Add or remove space between a variable and '{' for C++ uniform initialization. Default=Add.
sp_word_brace                   = add      # ignore/add/remove/force

# Add or remove space between a variable and '{' for a namespace. Default=Add.
sp_word_brace_ns                = add      # ignore/add/remove/force

# Add or remove space before the '::' operator.
sp_before_dc                    = remove   # ignore/add/remove/force

# Add or remove space after the '::' operator.
sp_after_dc                     = remove   # ignore/add/remove/force

# Add or remove around the D named array initializer ':' operator.
sp_d_array_colon                = ignore   # ignore/add/remove/force

# Add or remove space after the '!' (not) operator. Default=Remove.
sp_not                          = remove   # ignore/add/remove/force

# Add or remove space after the '~' (invert) operator. Default=Remove.
sp_inv                          = remove   # ignore/add/remove/force

# Add or remove space after the '&' (address-of) operator. Default=Remove
# This does not affect the spacing after a '&' that is part of a type.
sp_addr                         = ignore   # ignore/add/remove/force

# Add or remove space around the '.' or '->' operators. Default=Remove.
sp_member                       = ignore   # ignore/add/remove/force

# Add or remove space after the '*' (dereference) operator. Default=Remove
# This does not affect the spacing after a '*' that is part of a type.
sp_deref                        = remove   # ignore/add/remove/force

# Add or remove space after '+' or '-', as in 'x = -5' or 'y = +7'. Default=Remove.
sp_sign                         = ignore   # ignore/add/remove/force

# Add or remove space before or after '++' and '--', as in '(--x)' or 'y++;'. Default=Remove.
sp_incdec                       = ignore   # ignore/add/remove/force

# Add or remove space before a backslash-newline at the end of a line. Default=Add.
sp_before_nl_cont               = ignore    # ignore/add/remove/force

# Add or remove space after the scope '+' or '-', as in '-(void) foo;' or '+(int) bar;'.
sp_after_oc_scope               = ignore   # ignore/add/remove/force

# Add or remove space after the colon in message specs
# '-(int) f:(int) x;' vs '-(int) f: (int) x;'.
sp_after_oc_colon               = ignore   # ignore/add/remove/force

# Add or remove space before the colon in message specs
# '-(int) f: (int) x;' vs '-(int) f : (int) x;'.
sp_before_oc_colon              = ignore   # ignore/add/remove/force

# Add or remove space after the colon in immutable dictionary expression
# 'NSDictionary *test = @{@"foo" :@"bar"};'.
sp_after_oc_dict_colon          = ignore   # ignore/add/remove/force

# Add or remove space before the colon in immutable dictionary expression
# 'NSDictionary *test = @{@"foo" :@"bar"};'.
sp_before_oc_dict_colon         = ignore   # ignore/add/remove/force

# Add or remove space after the colon in message specs
# '[object setValue:1];' vs '[object setValue: 1];'.
sp_after_send_oc_colon          = ignore   # ignore/add/remove/force

# Add or remove space before the colon in message specs
# '[object setValue:1];' vs '[object setValue :1];'.
sp_before_send_oc_colon         = ignore   # ignore/add/remove/force

# Add or remove space after the (type) in message specs
# '-(int)f: (int) x;' vs '-(int)f: (int)x;'.
sp_after_oc_type                = ignore   # ignore/add/remove/force

# Add or remove space after the first (type) in message specs
# '-(int) f:(int)x;' vs '-(int)f:(int)x;'.
sp_after_oc_return_type         = ignore   # ignore/add/remove/force

# Add or remove space between '@selector' and '('
# '@selector(msgName)' vs '@selector (msgName)'
# Also applies to @protocol() constructs.
sp_after_oc_at_sel              = ignore   # ignore/add/remove/force

# Add or remove space between '@selector(x)' and the following word
# '@selector(foo) a:' vs '@selector(foo)a:'.
sp_after_oc_at_sel_parens       = ignore   # ignore/add/remove/force

# Add or remove space inside '@selector' parens
# '@selector(foo)' vs '@selector( foo )'
# Also applies to @protocol() constructs.
sp_inside_oc_at_sel_parens      = ignore   # ignore/add/remove/force

# Add or remove space before a block pointer caret
# '^int (int arg){...}' vs. ' ^int (int arg){...}'.
sp_before_oc_block_caret        = ignore   # ignore/add/remove/force

# Add or remove space after a block pointer caret
# '^int (int arg){...}' vs. '^ int (int arg){...}'.
sp_after_oc_block_caret         = ignore   # ignore/add/remove/force

# Add or remove space between the receiver and selector in a message.
# '[receiver selector ...]'.
sp_after_oc_msg_receiver        = ignore   # ignore/add/remove/force

# Add or remove space after @property.
sp_after_oc_property            = ignore   # ignore/add/remove/force

# Add or remove space between '@synchronized' and the parenthesis
# '@synchronized(foo)' vs '@synchronized (foo)'.
sp_after_oc_synchronized        = ignore   # ignore/add/remove/force

# Add or remove space around the ':' in 'b ? t : f'.
sp_cond_colon                   = add    # ignore/add/remove/force

# Add or remove space before the ':' in 'b ? t : f'. Overrides sp_cond_colon.
sp_cond_colon_before            = ignore   # ignore/add/remove/force

# Add or remove space after the ':' in 'b ? t : f'. Overrides sp_cond_colon.
sp_cond_colon_after             = ignore   # ignore/add/remove/force

# Add or remove space around the '?' in 'b ? t : f'.
sp_cond_question                = ignore    # ignore/add/remove/force

# Add or remove space before the '?' in 'b ? t : f'. Overrides sp_cond_question.
sp_cond_question_before         = ignore   # ignore/add/remove/force

# Add or remove space after the '?' in 'b ? t : f'. Overrides sp_cond_question.
sp_cond_question_after          = ignore   # ignore/add/remove/force

# In the abbreviated ternary form (a ?: b), add/remove space between ? and :.'. Overrides all other sp_cond_* options.
sp_cond_ternary_short           = ignore   # ignore/add/remove/force

# Fix the spacing between 'case' and the label. Only 'ignore' and 'force' make sense here.
sp_case_label                   = force    # ignore/add/remove/force

# Control the space around the D '..' operator.
sp_range                        = ignore   # ignore/add/remove/force

# Control the spacing after ':' in 'for (TYPE VAR : EXPR)'. Only JAVA.
sp_after_for_colon              = ignore   # ignore/add/remove/force

# Control the spacing before ':' in 'for (TYPE VAR : EXPR)'. Only JAVA.
sp_before_for_colon             = ignore   # ignore/add/remove/force

# Control the spacing in 'extern (C)' (D).
sp_extern_paren                 = ignore   # ignore/add/remove/force

# Control the space after the opening of a C++ comment '// A' vs '//A'.
sp_cmt_cpp_start                = ignore   # ignore/add/remove/force

# True: If space is added with sp_cmt_cpp_start, do it after doxygen sequences like '///', '///<', '//!' and '//!<'.
sp_cmt_cpp_doxygen              = false    # false/true

# True: If space is added with sp_cmt_cpp_start, do it after Qt translator or meta-data comments like '//:', '//=', and '//~'.
sp_cmt_cpp_qttr                 = false    # false/true

# Controls the spaces between #else or #endif and a trailing comment.
sp_endif_cmt                    = add   # ignore/add/remove/force

# Controls the spaces after 'new', 'delete' and 'delete[]'.
sp_after_new                    = force    # ignore/add/remove/force

# Controls the spaces between new and '(' in 'new()'.
sp_between_new_paren            = ignore   # ignore/add/remove/force

# Controls the spaces between ')' and 'type' in 'new(foo) BAR'.
sp_after_newop_paren            = ignore   # ignore/add/remove/force

# Controls the spaces inside paren of the new operator: 'new(foo) BAR'.
sp_inside_newop_paren           = ignore   # ignore/add/remove/force

# Controls the space after open paren of the new operator: 'new(foo) BAR'.
# Overrides sp_inside_newop_paren.
sp_inside_newop_paren_open      = ignore   # ignore/add/remove/force

# Controls the space before close paren of the new operator: 'new(foo) BAR'.
# Overrides sp_inside_newop_paren.
sp_inside_newop_paren_close     = ignore   # ignore/add/remove/force

# Controls the spaces before a trailing or embedded comment.
sp_before_tr_emb_cmt            = add   # ignore/add/remove/force

# Number of spaces before a trailing or embedded comment.
sp_num_before_tr_emb_cmt        = 1        # unsigned number

# Control space between a Java annotation and the open paren.
sp_annotation_paren             = ignore   # ignore/add/remove/force

# If True, vbrace tokens are dropped to the previous token and skipped.
sp_skip_vbrace_tokens           = false    # false/true

# Controls the space after 'noexcept'.
sp_after_noexcept               = ignore   # ignore/add/remove/force

# If True, a <TAB> is inserted after #define.
force_tab_after_define          = false    # false/true

#
# Indenting
#

# The number of columns to indent per level.
# Usually 2, 3, 4, or 8. Default=8.
indent_columns                  = 2       # unsigned number

# The continuation indent. If non-zero, this overrides the indent of '(' and '=' continuation indents.
# For FreeBSD, this is set to 4. Negative value is absolute and not increased for each '(' level.
indent_continue                 = 4      # number

# The continuation indent, only for class header line(s). If non-zero, this
# overrides the indent of 'class' continuation indents.
indent_continue_class_head      = 0        # unsigned number

# Indent empty lines - lines which contain only spaces before newline character
indent_single_newlines          = false    # false/true

# The continuation indent for func_*_param if they are true.
# If non-zero, this overrides the indent.
indent_param                    = 0        # unsigned number

# How to use tabs when indenting code
# 0=spaces only
# 1=indent with tabs to brace level, align with spaces (default)
# 2=indent and align with tabs, using spaces when not on a tabstop
indent_with_tabs                = 0        # unsigned number

# Comments that are not a brace level are indented with tabs on a tabstop.
# Requires indent_with_tabs=2. If false, will use spaces.
indent_cmt_with_tabs            = false    # false/true

# Whether to indent strings broken by '\' so that they line up.
indent_align_string             = false    # false/true

# The number of spaces to indent multi-line XML strings.
# Requires indent_align_string=True.
indent_xml_string               = 0        # unsigned number

# Spaces to indent '{' from level.
indent_brace                    = 0        # unsigned number

# Whether braces are indented to the body level.
indent_braces                   = false    # false/true

# Disabled indenting function braces if indent_braces is True.
indent_braces_no_func           = false    # false/true

# Disabled indenting class braces if indent_braces is True.
indent_braces_no_class          = false    # false/true

# Disabled indenting struct braces if indent_braces is True.
indent_braces_no_struct         = false    # false/true

# Indent based on the size of the brace parent, i.e. 'if' => 3 spaces, 'for' => 4 spaces, etc.
indent_brace_parent             = false    # false/true

# Indent based on the paren open instead of the brace open in '({\n', default is to indent by brace.
indent_paren_open_brace         = true    # false/true

# indent a C# delegate by another level, default is to not indent by another level.
indent_cs_delegate_brace        = false    # false/true

# indent a C# delegate(To hanndle delegates with no brace) by another level. default: false
indent_cs_delegate_body         = false    # false/true

# Whether the 'namespace' body is indented.
indent_namespace                = false    # false/true

# Only indent one namespace and no sub-namespaces.
# Requires indent_namespace=True.
indent_namespace_single_indent  = false    # false/true

# The number of spaces to indent a namespace block.
indent_namespace_level          = 0        # unsigned number

# If the body of the namespace is longer than this number, it won't be indented.
# Requires indent_namespace=True. Default=0 (no limit)
indent_namespace_limit          = 0        # unsigned number

# Whether the 'extern "C"' body is indented.
indent_extern                   = false    # false/true

# Whether the 'class' body is indented.
indent_class                    = true     # false/true

# Whether to indent the stuff after a leading base class colon.
indent_class_colon              = false    # false/true

# Indent based on a class colon instead of the stuff after the colon.
# Requires indent_class_colon=True. Default=False.
indent_class_on_colon           = false    # false/true

# Whether to indent the stuff after a leading class initializer colon.
indent_constr_colon             = true     # false/true

# Virtual indent from the ':' for member initializers. Default=2.
indent_ctor_init_leading        = 2        # unsigned number

# Additional indent for constructor initializer list.
# Negative values decrease indent down to the first column. Default=0.
indent_ctor_init                = -2       # number

# False=treat 'else\nif' as 'else if' for indenting purposes
# True=indent the 'if' one level.
indent_else_if                  = false    # false/true

# Amount to indent variable declarations after a open brace. neg=relative, pos=absolute.
indent_var_def_blk              = 0        # number

# Indent continued variable declarations instead of aligning.
indent_var_def_cont             = false    # false/true

# Indent continued shift expressions ('<<' and '>>') instead of aligning.
# Turn align_left_shift off when enabling this.
indent_shift                    = false    # false/true

# True:  force indentation of function definition to start in column 1
# False: use the default behavior.
indent_func_def_force_col1      = false    # false/true

# True:  indent continued function call parameters one indent level
# False: align parameters under the open paren.
indent_func_call_param          = true    # false/true

# Same as indent_func_call_param, but for function defs.
indent_func_def_param           = true    # false/true

# Same as indent_func_call_param, but for function protos.
indent_func_proto_param         = true    # false/true

# Same as indent_func_call_param, but for class declarations.
indent_func_class_param         = true    # false/true

# Same as indent_func_call_param, but for class variable constructors.
indent_func_ctor_var_param      = true    # false/true

# Same as indent_func_call_param, but for templates.
indent_template_param           = true    # false/true

# Double the indent for indent_func_xxx_param options.
# Use both values of the options indent_columns and indent_param.
indent_func_param_double        = true    # false/true

# Indentation column for standalone 'const' function decl/proto qualifier.
indent_func_const               = 0        # unsigned number

# Indentation column for standalone 'throw' function decl/proto qualifier.
indent_func_throw               = 0        # unsigned number

# The number of spaces to indent a continued '->' or '.'
# Usually set to 0, 1, or indent_columns.
indent_member                   = indent_columns        # unsigned number

# setting to true will indent lines broken at '.' or '->' by a single indent
# UO_indent_member option will not be effective if this is set to true.
indent_member_single            = false    # false/true

# Spaces to indent single line ('//') comments on lines before code.
indent_sing_line_comments       = 0        # unsigned number

# If set, will indent trailing single line ('//') comments relative
# to the code instead of trying to keep the same absolute column.
indent_relative_single_line_comments = true    # false/true

# Spaces to indent 'case' from 'switch'
# Usually 0 or indent_columns.
indent_switch_case              = 2        # unsigned number

# Whether to indent preprocessor statements inside of switch statements.
indent_switch_pp                = true     # false/true

# Spaces to shift the 'case' line, without affecting any other lines
# Usually 0.
indent_case_shift               = 0        # unsigned number

# Spaces to indent '{' from 'case'.
# By default, the brace will appear under the 'c' in case.
# Usually set to 0 or indent_columns.
# negative value are OK.
indent_case_brace               = 0        # number

# Whether to indent comments found in first column.
indent_col1_comment             = false    # false/true

# How to indent goto labels
#   >0: absolute column where 1 is the leftmost column
#  <=0: subtract from brace indent
# Default=1
indent_label                    = 1        # number

# Same as indent_label, but for access specifiers that are followed by a colon. Default=1
indent_access_spec              = -2        # number

# Indent the code after an access specifier by one level.
# If set, this option forces 'indent_access_spec=0'.
indent_access_spec_body         = false    # false/true

# If an open paren is followed by a newline, indent the next line so that it lines up after the open paren (not recommended).
indent_paren_nl                 = false    # false/true

# Controls the indent of a close paren after a newline.
# 0: Indent to body level
# 1: Align under the open paren
# 2: Indent to the brace level
indent_paren_close              = 2        # unsigned number

# Controls the indent of the open paren of a function definition, if on it's own line.If True, indents the open paren
indent_paren_after_func_def     = true    # false/true

# Controls the indent of the open paren of a function declaration, if on it's own line.If True, indents the open paren
indent_paren_after_func_decl    = true    # false/true

# Controls the indent of the open paren of a function call, if on it's own line.If True, indents the open paren
indent_paren_after_func_call    = true    # false/true

# Controls the indent of a comma when inside a paren.If True, aligns under the open paren.
indent_comma_paren              = false    # false/true

# Controls the indent of a BOOL operator when inside a paren.If True, aligns under the open paren.
indent_bool_paren               = false    # false/true

# Controls the indent of a semicolon when inside a for paren.If True, aligns under the open for paren.
indent_semicolon_for_paren      = false    # false/true

# If 'indent_bool_paren' is True, controls the indent of the first expression. If True, aligns the first expression to the following ones.
indent_first_bool_expr          = false    # false/true

# If 'indent_semicolon_for_paren' is True, controls the indent of the first expression. If True, aligns the first expression to the following ones.
indent_first_for_expr           = false    # false/true

# If an open square is followed by a newline, indent the next line so that it lines up after the open square (not recommended).
indent_square_nl                = false    # false/true

# Don't change the relative indent of ESQL/C 'EXEC SQL' bodies.
indent_preserve_sql             = false    # false/true

# Align continued statements at the '='. Default=True
# If False or the '=' is followed by a newline, the next line is indent one tab.
indent_align_assign             = false    # false/true

# Align continued statements at the '('. Default=True
# If FALSE or the '(' is not followed by a newline, the next line indent is one tab.
indent_align_paren              = true     # false/true

# Indent OC blocks at brace level instead of usual rules.
indent_oc_block                 = false    # false/true

# Indent OC blocks in a message relative to the parameter name.
# 0=use indent_oc_block rules, 1+=spaces to indent
indent_oc_block_msg             = 0        # unsigned number

# Minimum indent for subsequent parameters
indent_oc_msg_colon             = 0        # unsigned number

# If True, prioritize aligning with initial colon (and stripping spaces from lines, if necessary).
# Default=True.
indent_oc_msg_prioritize_first_colon = true     # false/true

# If indent_oc_block_msg and this option are on, blocks will be indented the way that Xcode does by default (from keyword if the parameter is on its own line; otherwise, from the previous indentation level).
indent_oc_block_msg_xcode_style = false    # false/true

# If indent_oc_block_msg and this option are on, blocks will be indented from where the brace is relative to a msg keyword.
indent_oc_block_msg_from_keyword = false    # false/true

# If indent_oc_block_msg and this option are on, blocks will be indented from where the brace is relative to a msg colon.
indent_oc_block_msg_from_colon  = false    # false/true

# If indent_oc_block_msg and this option are on, blocks will be indented from where the block caret is.
indent_oc_block_msg_from_caret  = false    # false/true

# If indent_oc_block_msg and this option are on, blocks will be indented from where the brace is.
indent_oc_block_msg_from_brace  = false    # false/true

# When indenting after virtual brace open and newline add further spaces to reach this min. indent.
indent_min_vbrace_open          = 0        # unsigned number

# True: When identing after virtual brace open and newline add further spaces after regular indent to reach next tabstop.
indent_vbrace_open_on_tabstop   = false    # false/true

# If True, a brace followed by another token (not a newline) will indent all contained lines to match the token.Default=True.
indent_token_after_brace        = false    # false/true

# If True, cpp lambda body will be indentedDefault=False.
indent_cpp_lambda_body          = true     # false/true

# indent (or not) an using block if no braces are used. Only for C#.Default=True.
indent_using_block              = true     # false/true

# indent the continuation of ternary operator.
# 0: (Default) off
# 1: When the `if_false` is a continuation, indent it under `if_false`
# 2: When the `:` is a continuation, indent it under `?`
indent_ternary_operator         = 0        # unsigned number

# If true, the indentation of the chunks after a `return new` sequence will be set at return indentation column.
indent_off_after_return_new     = false    # false/true

# If true, the tokens after return are indented with regular single indentation.By default (false) the indentation is after the return token.
indent_single_after_return      = true    # false/true

# If true, ignore indent and align for asm blocks as they have their own indentation.
indent_ignore_asm_block         = false    # false/true

#
# Newline adding and removing options
#

# Whether to collapse empty blocks between '{' and '}'.
nl_collapse_empty_body          = false    # false/true

# Don't split one-line braced assignments - 'foo_t f = { 1, 2 };'.
nl_assign_leave_one_liners      = true     # false/true

# Don't split one-line braced statements inside a class xx { } body.
nl_class_leave_one_liners       = true     # false/true

# Don't split one-line enums: 'enum foo { BAR = 15 };'
nl_enum_leave_one_liners        = true     # false/true

# Don't split one-line get or set functions.
nl_getset_leave_one_liners      = false     # false/true

# Don't split one-line get or set functions.
nl_cs_property_leave_one_liners = false    # false/true

# Don't split one-line function definitions - 'int foo() { return 0; }'.
nl_func_leave_one_liners        = false     # false/true

# Don't split one-line C++11 lambdas - '[]() { return 0; }'.
nl_cpp_lambda_leave_one_liners  = true     # false/true

# Don't split one-line if/else statements - 'if(a) b++;'.
nl_if_leave_one_liners          = false     # false/true

# Don't split one-line while statements - 'while(a) b++;'.
nl_while_leave_one_liners       = false     # false/true

# Don't split one-line OC messages.
nl_oc_msg_leave_one_liner       = false    # false/true

# (OC) Add or remove newline between method declaration and '{'.
nl_oc_mdef_brace                = ignore   # ignore/add/remove/force

# Add or remove newline between Objective-C block signature and '{'.
nl_oc_block_brace               = ignore   # ignore/add/remove/force

# Add or remove newline between @interface and '{'.
nl_oc_interface_brace           = ignore   # ignore/add/remove/force

# Add or remove newline between @implementation and '{'.
nl_oc_implementation_brace      = ignore   # ignore/add/remove/force

# Add or remove newlines at the start of the file.
nl_start_of_file                = remove   # ignore/add/remove/force

# The number of newlines at the start of the file (only used if nl_start_of_file is 'add' or 'force'.
nl_start_of_file_min            = 0        # unsigned number

# Add or remove newline at the end of the file.
nl_end_of_file                  = ignore    # ignore/add/remove/force

# The number of newlines at the end of the file (only used if nl_end_of_file is 'add' or 'force').
nl_end_of_file_min              = 1        # unsigned number

# Add or remove newline between '=' and '{'.
nl_assign_brace                 = ignore   # ignore/add/remove/force

# Add or remove newline between '=' and '[' (D only).
nl_assign_square                = ignore   # ignore/add/remove/force

# Add or remove newline between '[]' and '{'.
nl_tsquare_brace                = ignore   # ignore/add/remove/force

# Add or remove newline after '= [' (D only). Will also affect the newline before the ']'.
nl_after_square_assign          = ignore   # ignore/add/remove/force

# The number of blank lines after a block of variable definitions at the top of a function body
# 0 = No change (default).
nl_func_var_def_blk             = 0        # unsigned number

# The number of newlines before a block of typedefs
# 0 = No change (default)
# is overridden by the option 'nl_after_access_spec'.
nl_typedef_blk_start            = 0        # unsigned number

# The number of newlines after a block of typedefs
# 0 = No change (default).
nl_typedef_blk_end              = 0        # unsigned number

# The maximum consecutive newlines within a block of typedefs
# 0 = No change (default).
nl_typedef_blk_in               = 0        # unsigned number

# The number of newlines before a block of variable definitions not at the top of a function body
# 0 = No change (default)
# is overridden by the option 'nl_after_access_spec'.
nl_var_def_blk_start            = 0        # unsigned number

# The number of newlines after a block of variable definitions not at the top of a function body
# 0 = No change (default).
nl_var_def_blk_end              = 0        # unsigned number

# The maximum consecutive newlines within a block of variable definitions
# 0 = No change (default).
nl_var_def_blk_in               = 0        # unsigned number

# Add or remove newline between a function call's ')' and '{', as in:
# list_for_each(item, &list) { }.
nl_fcall_brace                  = ignore   # ignore/add/remove/force

# Add or remove newline between 'enum' and '{'.
nl_enum_brace                   = add    # ignore/add/remove/force

# Add or remove newline between 'enum' and 'class'.
nl_enum_class                   = remove   # ignore/add/remove/force

# Add or remove newline between 'enum class' and the identifier.
nl_enum_class_identifier        = remove   # ignore/add/remove/force

# Add or remove newline between 'enum class' type and ':'.
nl_enum_identifier_colon        = remove   # ignore/add/remove/force

# Add or remove newline between 'enum class identifier :' and 'type' and/or 'type'.
nl_enum_colon_type              = remove   # ignore/add/remove/force

# Add or remove newline between 'struct and '{'.
nl_struct_brace                 = force    # ignore/add/remove/force

# Add or remove newline between 'union' and '{'.
nl_union_brace                  = remove   # ignore/add/remove/force

# Add or remove newline between 'if' and '{'.
nl_if_brace                     = add   # ignore/add/remove/force

# Add or remove newline between '}' and 'else'.
nl_brace_else                   = add   # ignore/add/remove/force

# Add or remove newline between 'else if' and '{'
# If set to ignore, nl_if_brace is used instead.
nl_elseif_brace                 = add   # ignore/add/remove/force

# Add or remove newline between 'else' and '{'.
nl_else_brace                   = add   # ignore/add/remove/force

# Add or remove newline between 'else' and 'if'.
nl_else_if                      = remove   # ignore/add/remove/force

# Add or remove newline before 'if'/'else if' closing parenthesis.
nl_before_if_closing_paren      = remove   # ignore/add/remove/force

# Add or remove newline between '}' and 'finally'.
nl_brace_finally                = add   # ignore/add/remove/force

# Add or remove newline between 'finally' and '{'.
nl_finally_brace                = add   # ignore/add/remove/force

# Add or remove newline between 'try' and '{'.
nl_try_brace                    = add   # ignore/add/remove/force

# Add or remove newline between get/set and '{'.
nl_getset_brace                 = ignore   # ignore/add/remove/force

# Add or remove newline between 'for' and '{'.
nl_for_brace                    = add   # ignore/add/remove/force

# Add or remove newline between 'catch' and '{'.
nl_catch_brace                  = add   # ignore/add/remove/force

# Add or remove newline between '@catch' and '{'.
# If set to ignore, nl_catch_brace is used.
nl_oc_catch_brace               = ignore   # ignore/add/remove/force

# Add or remove newline between '}' and 'catch'.
nl_brace_catch                  = add   # ignore/add/remove/force

# Add or remove newline between '}' and 'catch'.
# If set to ignore, nl_brace_catch is used.
nl_oc_brace_catch               = ignore   # ignore/add/remove/force

# Add or remove newline between '}' and ']'.
nl_brace_square                 = ignore   # ignore/add/remove/force

# Add or remove newline between '}' and ')' in a function invocation.
nl_brace_fparen                 = ignore   # ignore/add/remove/force

# Add or remove newline between 'while' and '{'.
nl_while_brace                  = add   # ignore/add/remove/force

# Add or remove newline between 'scope (x)' and '{' (D).
nl_scope_brace                  = ignore   # ignore/add/remove/force

# Add or remove newline between 'unittest' and '{' (D).
nl_unittest_brace               = ignore   # ignore/add/remove/force

# Add or remove newline between 'version (x)' and '{' (D).
nl_version_brace                = ignore   # ignore/add/remove/force

# Add or remove newline between 'using' and '{'.
nl_using_brace                  = ignore   # ignore/add/remove/force

# Add or remove newline between two open or close braces.
# Due to general newline/brace handling, REMOVE may not work.
nl_brace_brace                  = ignore   # ignore/add/remove/force

# Add or remove newline between 'do' and '{'.
nl_do_brace                     = add   # ignore/add/remove/force

# Add or remove newline between '}' and 'while' of 'do' statement.
nl_brace_while                  = remove   # ignore/add/remove/force

# Add or remove newline between 'switch' and '{'.
nl_switch_brace                 = add   # ignore/add/remove/force

# Add or remove newline between 'synchronized' and '{'.
nl_synchronized_brace           = remove   # ignore/add/remove/force

# Add a newline between ')' and '{' if the ')' is on a different line than the if/for/etc.
# Overrides nl_for_brace, nl_if_brace, nl_switch_brace, nl_while_switch and nl_catch_brace.
nl_multi_line_cond              = true     # false/true

# Force a newline in a define after the macro name for multi-line defines.
nl_multi_line_define            = false    # false/true

# Whether to put a newline before 'case' statement, not after the first 'case'.
nl_before_case                  = false    # false/true

# Add or remove newline between ')' and 'throw'.
nl_before_throw                 = ignore   # ignore/add/remove/force

# Whether to put a newline after 'case' statement.
nl_after_case                   = false    # false/true

# Add or remove a newline between a case ':' and '{'. Overrides nl_after_case.
nl_case_colon_brace             = ignore   # ignore/add/remove/force

# Newline between namespace and {.
nl_namespace_brace              = remove    # ignore/add/remove/force

# Add or remove newline between 'template<>' and whatever follows.
nl_template_class               = ignore    # ignore/add/remove/force

# Add or remove newline between 'class' and '{'.
nl_class_brace                  = force    # ignore/add/remove/force

# Add or remove newline before/after each ',' in the base class list,
#   (tied to pos_class_comma).
nl_class_init_args              = ignore   # ignore/add/remove/force

# Add or remove newline after each ',' in the constructor member initialization.
# Related to nl_constr_colon, pos_constr_colon and pos_constr_comma.
nl_constr_init_args             = ignore   # ignore/add/remove/force

# Add or remove newline before first element, after comma, and after last element in enum.
nl_enum_own_lines               = add   # ignore/add/remove/force

# Add or remove newline between return type and function name in a function definition.
nl_func_type_name               = ignore   # ignore/add/remove/force

# Add or remove newline between return type and function name inside a class {}
# Uses nl_func_type_name or nl_func_proto_type_name if set to ignore.
nl_func_type_name_class         = ignore   # ignore/add/remove/force

# Add or remove newline between class specification and '::' in 'void A::f() { }'
# Only appears in separate member implementation (does not appear with in-line implmementation).
nl_func_class_scope             = remove   # ignore/add/remove/force

# Add or remove newline between function scope and name
# Controls the newline after '::' in 'void A::f() { }'.
nl_func_scope_name              = remove   # ignore/add/remove/force

# Add or remove newline between return type and function name in a prototype.
nl_func_proto_type_name         = ignore   # ignore/add/remove/force

# Add or remove newline between a function name and the opening '(' in the declaration.
nl_func_paren                   = remove   # ignore/add/remove/force

# Overrides nl_func_paren for functions with no parameters.
nl_func_paren_empty             = remove   # ignore/add/remove/force

# Add or remove newline between a function name and the opening '(' in the definition.
nl_func_def_paren               = remove   # ignore/add/remove/force

# Overrides nl_func_def_paren for functions with no parameters.
nl_func_def_paren_empty         = remove   # ignore/add/remove/force

# Add or remove newline between a function name and the opening '(' in the call
nl_func_call_paren              = remove   # ignore/add/remove/force

# Overrides nl_func_call_paren for functions with no parameters.
nl_func_call_paren_empty        = remove   # ignore/add/remove/force

# Add or remove newline after '(' in a function declaration.
nl_func_decl_start              = ignore   # ignore/add/remove/force

# Add or remove newline after '(' in a function definition.
nl_func_def_start               = ignore   # ignore/add/remove/force

# Overrides nl_func_decl_start when there is only one parameter.
nl_func_decl_start_single       = ignore   # ignore/add/remove/force

# Overrides nl_func_def_start when there is only one parameter.
nl_func_def_start_single        = ignore   # ignore/add/remove/force

# Whether to add newline after '(' in a function declaration if '(' and ')' are in different lines.
nl_func_decl_start_multi_line   = false     # false/true

# Whether to add newline after '(' in a function definition if '(' and ')' are in different lines.
nl_func_def_start_multi_line    = false     # false/true

# Add or remove newline after each ',' in a function declaration.
nl_func_decl_args               = ignore   # ignore/add/remove/force

# Add or remove newline after each ',' in a function definition.
nl_func_def_args                = ignore   # ignore/add/remove/force

# Whether to add newline after each ',' in a function declaration if '(' and ')' are in different lines.
nl_func_decl_args_multi_line    = false    # false/true

# Whether to add newline after each ',' in a function definition if '(' and ')' are in different lines.
nl_func_def_args_multi_line     = false    # false/true

# Add or remove newline before the ')' in a function declaration.
nl_func_decl_end                = ignore   # ignore/add/remove/force

# Add or remove newline before the ')' in a function definition.
nl_func_def_end                 = ignore   # ignore/add/remove/force

# Overrides nl_func_decl_end when there is only one parameter.
nl_func_decl_end_single         = ignore   # ignore/add/remove/force

# Overrides nl_func_def_end when there is only one parameter.
nl_func_def_end_single          = ignore   # ignore/add/remove/force

# Whether to add newline before ')' in a function declaration if '(' and ')' are in different lines.
nl_func_decl_end_multi_line     = false    # false/true

# Whether to add newline before ')' in a function definition if '(' and ')' are in different lines.
nl_func_def_end_multi_line      = false    # false/true

# Add or remove newline between '()' in a function declaration.
nl_func_decl_empty              = ignore   # ignore/add/remove/force

# Add or remove newline between '()' in a function definition.
nl_func_def_empty               = ignore   # ignore/add/remove/force

# Add or remove newline between '()' in a function call.
nl_func_call_empty              = ignore   # ignore/add/remove/force

# Whether to add newline after '(' in a function call if '(' and ')' are in different lines.
nl_func_call_start_multi_line   = false    # false/true

# Whether to add newline after each ',' in a function call if '(' and ')' are in different lines.
nl_func_call_args_multi_line    = false    # false/true

# Whether to add newline before ')' in a function call if '(' and ')' are in different lines.
nl_func_call_end_multi_line     = false    # false/true

# Whether to put each OC message parameter on a separate line
# See nl_oc_msg_leave_one_liner.
nl_oc_msg_args                  = false    # false/true

# Add or remove newline between function signature and '{'.
nl_fdef_brace                   = force    # ignore/add/remove/force

# Add or remove newline between C++11 lambda signature and '{'.
nl_cpp_ldef_brace               = add   # ignore/add/remove/force

# Add or remove a newline between the return keyword and return expression.
nl_return_expr                  = ignore   # ignore/add/remove/force

# Whether to put a newline after semicolons, except in 'for' statements.
nl_after_semicolon              = false    # false/true

# Java: Control the newline between the ')' and '{{' of the double brace initializer.
nl_paren_dbrace_open            = ignore   # ignore/add/remove/force

# Whether to put a newline after the type in an unnamed temporary direct-list-initialization.
nl_type_brace_init_lst          = ignore   # ignore/add/remove/force

# Whether to put a newline after open brace in an unnamed temporary direct-list-initialization.
nl_type_brace_init_lst_open     = ignore   # ignore/add/remove/force

# Whether to put a newline before close brace in an unnamed temporary direct-list-initialization.
nl_type_brace_init_lst_close    = ignore   # ignore/add/remove/force

# Whether to put a newline after brace open.
# This also adds a newline before the matching brace close.
nl_after_brace_open             = false    # false/true

# If nl_after_brace_open and nl_after_brace_open_cmt are True, a newline is
# placed between the open brace and a trailing single-line comment.
nl_after_brace_open_cmt         = false    # false/true

# Whether to put a newline after a virtual brace open with a non-empty body.
# These occur in un-braced if/while/do/for statement bodies.
nl_after_vbrace_open            = false    # false/true

# Whether to put a newline after a virtual brace open with an empty body.
# These occur in un-braced if/while/do/for statement bodies.
nl_after_vbrace_open_empty      = false    # false/true

# Whether to put a newline after a brace close.
# Does not apply if followed by a necessary ';'.
nl_after_brace_close            = false    # false/true

# Whether to put a newline after a virtual brace close.
# Would add a newline before return in: 'if (foo) a++; return;'.
nl_after_vbrace_close           = true     # false/true

# Control the newline between the close brace and 'b' in: 'struct { int a; } b;'
# Affects enums, unions and structures. If set to ignore, uses nl_after_brace_close.
nl_brace_struct_var             = ignore   # ignore/add/remove/force

# Whether to alter newlines in '#define' macros.
nl_define_macro                 = false    # false/true

# Whether to alter newlines between consecutive paren closes,
# The number of closing paren in a line will depend on respective open paren lines
nl_squeeze_paren_close          = false    # false/true

# Whether to remove blanks after '#ifxx' and '#elxx', or before '#elxx' and '#endif'. Does not affect top-level #ifdefs.
nl_squeeze_ifdef                = false    # false/true

# Makes the nl_squeeze_ifdef option affect the top-level #ifdefs as well.
nl_squeeze_ifdef_top_level      = false    # false/true

# Add or remove blank line before 'if'.
nl_before_if                    = ignore   # ignore/add/remove/force

# Add or remove blank line after 'if' statement.
# Add/Force work only if the next token is not a closing brace.
nl_after_if                     = ignore   # ignore/add/remove/force

# Add or remove blank line before 'for'.
nl_before_for                   = ignore   # ignore/add/remove/force

# Add or remove blank line after 'for' statement.
nl_after_for                    = ignore   # ignore/add/remove/force

# Add or remove blank line before 'while'.
nl_before_while                 = ignore   # ignore/add/remove/force

# Add or remove blank line after 'while' statement.
nl_after_while                  = ignore   # ignore/add/remove/force

# Add or remove blank line before 'switch'.
nl_before_switch                = ignore   # ignore/add/remove/force

# Add or remove blank line after 'switch' statement.
nl_after_switch                 = ignore   # ignore/add/remove/force

# Add or remove blank line before 'synchronized'.
nl_before_synchronized          = ignore   # ignore/add/remove/force

# Add or remove blank line after 'synchronized' statement.
nl_after_synchronized           = ignore   # ignore/add/remove/force

# Add or remove blank line before 'do'.
nl_before_do                    = ignore   # ignore/add/remove/force

# Add or remove blank line after 'do/while' statement.
nl_after_do                     = ignore   # ignore/add/remove/force

# Whether to double-space commented-entries in struct/union/enum.
nl_ds_struct_enum_cmt           = false    # false/true

# force nl before } of a struct/union/enum
# (lower priority than 'eat_blanks_before_close_brace').
nl_ds_struct_enum_close_brace   = false    # false/true

# Add or remove blank line before 'func_class_def'.
nl_before_func_class_def        = 0        # unsigned number

# Add or remove blank line before 'func_class_proto'.
nl_before_func_class_proto      = 0        # unsigned number

# Add or remove a newline before/after a class colon,
#   (tied to pos_class_colon).
nl_class_colon                  = ignore   # ignore/add/remove/force

# Add or remove a newline around a class constructor colon.
# Related to nl_constr_init_args, pos_constr_colon and pos_constr_comma.
nl_constr_colon                 = force    # ignore/add/remove/force

# If true turns two liner namespace to one liner,else will make then four liners
nl_namespace_two_to_one_liner   = false    # false/true

# Change simple unbraced if statements into a one-liner
# 'if(b)\n i++;' => 'if(b) i++;'.
nl_create_if_one_liner          = false    # false/true

# Change simple unbraced for statements into a one-liner
# 'for (i=0;i<5;i++)\n foo(i);' => 'for (i=0;i<5;i++) foo(i);'.
nl_create_for_one_liner         = false    # false/true

# Change simple unbraced while statements into a one-liner
# 'while (i<5)\n foo(i++);' => 'while (i<5) foo(i++);'.
nl_create_while_one_liner       = false    # false/true

# Change simple 4,3,2 liner function def statements into a one-liner
nl_create_func_def_one_liner    = false    # false/true

#  Change a one-liner if statement into simple unbraced if
# 'if(b) i++;' => 'if(b)\n i++;'.
nl_split_if_one_liner           = false    # false/true

# Change a one-liner for statement into simple unbraced for
# 'for (i=0;<5;i++) foo(i);' => 'for (i=0;<5;i++)\n foo(i);'.
nl_split_for_one_liner          = false    # false/true

# Change a one-liner while statement into simple unbraced while
# 'while (i<5) foo(i++);' => 'while (i<5)\n foo(i++);'.
nl_split_while_one_liner        = false    # false/true

#
# Blank line options
#

# The maximum consecutive newlines (3 = 2 blank lines).
nl_max                          = 3        # unsigned number

# The maximum consecutive newlines in function.
nl_max_blank_in_func            = 0        # unsigned number

# The number of newlines after a function prototype, if followed by another function prototype.
nl_after_func_proto             = 0        # unsigned number

# The number of newlines after a function prototype, if not followed by another function prototype.
nl_after_func_proto_group       = 0        # unsigned number

# The number of newlines after a function class prototype, if followed by another function class prototype.
nl_after_func_class_proto       = 0        # unsigned number

# The number of newlines after a function class prototype, if not followed by another function class prototype.
nl_after_func_class_proto_group = 0        # unsigned number

# Whether one-line method definitions inside a class body should be treated
# as if they were prototypes for the purposes of adding newlines.
#
# Requires nl_class_leave_one_liners=true. Overrides nl_before_func_body_def
# and nl_before_func_class_def for one-liners.
nl_class_leave_one_liner_groups = false    # true/false

# The number of newlines before a multi-line function def body.
nl_before_func_body_def         = 0        # unsigned number

# The number of newlines before a multi-line function prototype body.
nl_before_func_body_proto       = 0        # unsigned number

# The number of newlines after '}' of a multi-line function body.
nl_after_func_body              = 0        # unsigned number

# The number of newlines after '}' of a multi-line function body in a class declaration.
nl_after_func_body_class        = 0        # unsigned number

# The number of newlines after '}' of a single line function body.
nl_after_func_body_one_liner    = 0        # unsigned number

# The minimum number of newlines before a multi-line comment.
# Doesn't apply if after a brace open or another multi-line comment.
nl_before_block_comment         = 0        # unsigned number

# The minimum number of newlines before a single-line C comment.
# Doesn't apply if after a brace open or other single-line C comments.
nl_before_c_comment             = 0        # unsigned number

# The minimum number of newlines before a CPP comment.
# Doesn't apply if after a brace open or other CPP comments.
nl_before_cpp_comment           = 0        # unsigned number

# Whether to force a newline after a multi-line comment.
nl_after_multiline_comment      = false    # false/true

# Whether to force a newline after a label's colon.
nl_after_label_colon            = false    # false/true

# The number of newlines after '}' or ';' of a struct/enum/union definition.
nl_after_struct                 = 0        # unsigned number

# The number of newlines before a class definition.
nl_before_class                 = 0        # unsigned number

# The number of newlines after '}' or ';' of a class definition.
nl_after_class                  = 0        # unsigned number

# The number of newlines before a 'private:', 'public:', 'protected:', 'signals:', or 'slots:' label.
# Will not change the newline count if after a brace open.
# 0 = No change.
nl_before_access_spec           = 0        # unsigned number

# The number of newlines after a 'private:', 'public:', 'protected:', 'signals:' or 'slots:' label.
# 0 = No change.
# Overrides 'nl_typedef_blk_start' and 'nl_var_def_blk_start'.
nl_after_access_spec            = 0        # unsigned number

# The number of newlines between a function def and the function comment.
# 0 = No change.
nl_comment_func_def             = 0        # unsigned number

# The number of newlines after a try-catch-finally block that isn't followed by a brace close.
# 0 = No change.
nl_after_try_catch_finally      = 0        # unsigned number

# The number of newlines before and after a property, indexer or event decl.
# 0 = No change.
nl_around_cs_property           = 0        # unsigned number

# The number of newlines between the get/set/add/remove handlers in C#.
# 0 = No change.
nl_between_get_set              = 0        # unsigned number

# Add or remove newline between C# property and the '{'.
nl_property_brace               = ignore   # ignore/add/remove/force

# The number of newlines after '{' of a namespace. This also adds newlines
# before the matching '}'.
#
# 0 = Apply eat_blanks_after_open_brace or eat_blanks_before_close_brace if
#     applicable, otherwise no change.
#
# Overrides eat_blanks_after_open_brace and eat_blanks_before_close_brace.
nl_inside_namespace             = 0        # unsigned number

# Whether to remove blank lines after '{'.
eat_blanks_after_open_brace     = false    # false/true

# Whether to remove blank lines before '}'.
eat_blanks_before_close_brace   = false    # false/true

# How aggressively to remove extra newlines not in preproc.
# 0: No change
# 1: Remove most newlines not handled by other config
# 2: Remove all newlines and reformat completely by config
nl_remove_extra_newlines        = 0        # unsigned number

# Whether to put a blank line before 'return' statements, unless after an open brace.
nl_before_return                = false    # false/true

# Whether to put a blank line after 'return' statements, unless followed by a close brace.
nl_after_return                 = false    # false/true

# Whether to put a newline after a Java annotation statement.
# Only affects annotations that are after a newline.
nl_after_annotation             = ignore   # ignore/add/remove/force

# Controls the newline between two annotations.
nl_between_annotation           = ignore   # ignore/add/remove/force

#
# Positioning options
#

# The position of arithmetic operators in wrapped expressions.
pos_arith                       = ignore    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of assignment in wrapped expressions.
# Do not affect '=' followed by '{'.
pos_assign                      = ignore    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of boolean operators in wrapped expressions.
pos_bool                        = ignore    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of comparison operators in wrapped expressions.
pos_compare                     = ignore    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of conditional (b ? t : f) operators in wrapped expressions.
pos_conditional                 = ignore    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of the comma in wrapped expressions.
pos_comma                       = trail    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of the comma in enum entries.
pos_enum_comma                  = ignore   # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of the comma in the base class list if there are more than one line,
#   (tied to nl_class_init_args).
pos_class_comma                 = trail    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of the comma in the constructor initialization list.
# Related to nl_constr_colon, nl_constr_init_args and pos_constr_colon.
pos_constr_comma                = trail    # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of trailing/leading class colon, between class and base class list
#   (tied to nl_class_colon).
pos_class_colon                 = lead_force   # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

# The position of colons between constructor and member initialization,
# (tied to nl_constr_colon).
# Related to nl_constr_colon, nl_constr_init_args and pos_constr_comma.
pos_constr_colon                = lead_break   # ignore/join/lead/lead_break/lead_force/trail/trail_break/trail_force

#
# Line Splitting options
#

# Try to limit code width to N number of columns
code_width                      = 80      # unsigned number

# Whether to fully split long 'for' statements at semi-colons.
ls_for_split_full               = false    # false/true

# Whether to fully split long function protos/calls at commas.
ls_func_split_full              = false    # false/true

# Whether to split lines as close to code_width as possible and ignore some groupings.
ls_code_width                   = false    # false/true

#
# Code alignment (not left column spaces/tabs)
#

# Whether to keep non-indenting tabs.
align_keep_tabs                 = false    # false/true

# Whether to use tabs for aligning.
align_with_tabs                 = false    # false/true

# Whether to bump out to the next tab when aligning.
align_on_tabstop                = false    # false/true

# Whether to right-align numbers.
align_number_right              = false    # false/true

# Whether to keep whitespace not required for alignment.
align_keep_extra_space          = false    # false/true

# Align variable definitions in prototypes and functions.
align_func_params               = false    # false/true

# The span for aligning parameter definitions in function on parameter name (0=don't align).
align_func_params_span          = 0        # unsigned number

# The threshold for aligning function parameter definitions (0=no limit).
align_func_params_thresh        = 0        # unsigned number

# The gap for aligning function parameter definitions.
align_func_params_gap           = 0        # unsigned number

# Align parameters in single-line functions that have the same name.
# The function names must already be aligned with each other.
align_same_func_call_params     = false    # false/true

# The span for aligning function-call parameters for single line functions.
#  0 = Don't align (default).
align_same_func_call_params_span = 0       # unsigned number

# The threshold for aligning function-call parameters for single line
# functions.
#  0 = No limit (default).
align_same_func_call_params_thresh = 0     # unsigned number

# The span for aligning variable definitions (0=don't align)
align_var_def_span              = 0        # unsigned number

# How to align the star in variable definitions.
#  0=Part of the type     'void *   foo;'
#  1=Part of the variable 'void     *foo;'
#  2=Dangling             'void    *foo;'
align_var_def_star_style        = 0        # unsigned number

# How to align the '&' in variable definitions.
#  0=Part of the type
#  1=Part of the variable
#  2=Dangling
align_var_def_amp_style         = 0        # unsigned number

# The threshold for aligning variable definitions (0=no limit)
align_var_def_thresh            = 0        # unsigned number

# The gap for aligning variable definitions.
align_var_def_gap               = 0        # unsigned number

# Whether to align the colon in struct bit fields.
align_var_def_colon             = false    # false/true

# align variable defs gap for bit colons.
align_var_def_colon_gap         = 0        # unsigned number

# Whether to align any attribute after the variable name.
align_var_def_attribute         = false    # false/true

# Whether to align inline struct/enum/union variable definitions.
align_var_def_inline            = false    # false/true

# The span for aligning on '=' in assignments (0=don't align)
align_assign_span               = 0        # unsigned number

# The threshold for aligning on '=' in assignments (0=no limit)
align_assign_thresh             = 0        # unsigned number

# How to apply align_assign_span to function declaration "assignments", i.e.
# 'virtual void foo() = 0' or '~foo() = {default|delete}'.
#  0: Align with other assignments (default)
#  1: Align with each other, ignoring regular assignments
#  2: Don't align
align_assign_decl_func          = 0        # unsigned number

# The span for aligning on '=' in enums (0=don't align)
align_enum_equ_span             = 0        # unsigned number

# The threshold for aligning on '=' in enums (0=no limit)
align_enum_equ_thresh           = 0        # unsigned number

# The span for aligning class (0=don't align)
align_var_class_span            = 0        # unsigned number

# The threshold for aligning class member definitions (0=no limit).
align_var_class_thresh          = 0        # unsigned number

# The gap for aligning class member definitions.
align_var_class_gap             = 0        # unsigned number

# The span for aligning struct/union (0=don't align)
align_var_struct_span           = 0        # unsigned number

# The threshold for aligning struct/union member definitions (0=no limit)
align_var_struct_thresh         = 0        # unsigned number

# The gap for aligning struct/union member definitions.
align_var_struct_gap            = 0        # unsigned number

# The span for aligning struct initializer values (0=don't align)
align_struct_init_span          = 0        # unsigned number

# The minimum space between the type and the synonym of a typedef.
align_typedef_gap               = 0        # unsigned number

# The span for aligning single-line typedefs (0=don't align).
align_typedef_span              = 0        # unsigned number

# How to align typedef'd functions with other typedefs
# 0: Don't mix them at all
# 1: align the open paren with the types
# 2: align the function type name with the other type names
align_typedef_func              = 0        # unsigned number

# Controls the positioning of the '*' in typedefs. Just try it.
# 0: Align on typedef type, ignore '*'
# 1: The '*' is part of type name: typedef int  *pint;
# 2: The '*' is part of the type, but dangling: typedef int *pint;
align_typedef_star_style        = 0        # unsigned number

# Controls the positioning of the '&' in typedefs. Just try it.
# 0: Align on typedef type, ignore '&'
# 1: The '&' is part of type name: typedef int  &pint;
# 2: The '&' is part of the type, but dangling: typedef int &pint;
align_typedef_amp_style         = 0        # unsigned number

# The span for aligning comments that end lines (0=don't align)
align_right_cmt_span            = 0        # unsigned number

# If aligning comments, mix with comments after '}' and #endif with less than 3 spaces before the comment.
align_right_cmt_mix             = false    # false/true

# Whether to only align trailing comments that are at the same brace level.
align_right_cmt_same_level      = false    # true/false

# If a trailing comment is more than this number of columns away from the text it follows,
# it will qualify for being aligned. This has to be > 0 to do anything.
align_right_cmt_gap             = 0        # unsigned number

# Align trailing comment at or beyond column N; 'pulls in' comments as a bonus side effect (0=ignore)
align_right_cmt_at_col          = 0        # unsigned number

# The span for aligning function prototypes (0=don't align).
align_func_proto_span           = 0        # unsigned number

# Minimum gap between the return type and the function name.
align_func_proto_gap            = 0        # unsigned number

# Align function protos on the 'operator' keyword instead of what follows.
align_on_operator               = false    # false/true

# Whether to mix aligning prototype and variable declarations.
# If True, align_var_def_XXX options are used instead of align_func_proto_XXX options.
align_mix_var_proto             = false    # false/true

# Align single-line functions with function prototypes, uses align_func_proto_span.
align_single_line_func          = false    # false/true

# Aligning the open brace of single-line functions.
# Requires align_single_line_func=True, uses align_func_proto_span.
align_single_line_brace         = false    # false/true

# Gap for align_single_line_brace.
align_single_line_brace_gap     = 0        # unsigned number

# The span for aligning ObjC msg spec (0=don't align)
align_oc_msg_spec_span          = 0        # unsigned number

# Whether to align macros wrapped with a backslash and a newline.
# This will not work right if the macro contains a multi-line comment.
align_nl_cont                   = false    # false/true

# # Align macro functions and variables together.
align_pp_define_together        = false    # false/true

# The minimum space between label and value of a preprocessor define.
align_pp_define_gap             = 0        # unsigned number

# The span for aligning on '#define' bodies (0=don't align, other=number of lines including comments between blocks)
align_pp_define_span            = 0        # unsigned number

# Align lines that start with '<<' with previous '<<'. Default=True.
align_left_shift                = true     # false/true

# Align text after asm volatile () colons.
align_asm_colon                 = false    # false/true

# Span for aligning parameters in an Obj-C message call on the ':' (0=don't align)
align_oc_msg_colon_span         = 0        # unsigned number

# If True, always align with the first parameter, even if it is too short.
align_oc_msg_colon_first        = false    # false/true

# Aligning parameters in an Obj-C '+' or '-' declaration on the ':'.
align_oc_decl_colon             = false    # false/true

#
# Comment modifications
#

# Try to wrap comments at cmt_width columns
cmt_width                       = 0        # unsigned number

# Set the comment reflow mode (Default=0)
# 0: no reflowing (apart from the line wrapping due to cmt_width)
# 1: no touching at all
# 2: full reflow
cmt_reflow_mode                 = 0        # unsigned number

# Whether to convert all tabs to spaces in comments. Default is to leave tabs inside comments alone, unless used for indenting.
cmt_convert_tab_to_spaces       = false    # false/true

# If False, disable all multi-line comment changes, including cmt_width. keyword substitution and leading chars.
# Default=True.
cmt_indent_multi                = false    # false/true

# Whether to group c-comments that look like they are in a block.
cmt_c_group                     = false    # false/true

# Whether to put an empty '/*' on the first line of the combined c-comment.
cmt_c_nl_start                  = false    # false/true

# Whether to put a newline before the closing '*/' of the combined c-comment.
cmt_c_nl_end                    = false    # false/true

# Whether to group cpp-comments that look like they are in a block.
cmt_cpp_group                   = false    # false/true

# Whether to put an empty '/*' on the first line of the combined cpp-comment.
cmt_cpp_nl_start                = false    # false/true

# Whether to put a newline before the closing '*/' of the combined cpp-comment.
cmt_cpp_nl_end                  = false    # false/true

# Whether to change cpp-comments into c-comments.
cmt_cpp_to_c                    = false    # false/true

# Whether to put a star on subsequent comment lines.
cmt_star_cont                   = false    # false/true

# The number of spaces to insert at the start of subsequent comment lines.
cmt_sp_before_star_cont         = 0        # unsigned number

# The number of spaces to insert after the star on subsequent comment lines.
cmt_sp_after_star_cont          = 0        # number

# For multi-line comments with a '*' lead, remove leading spaces if the first and last lines of
# the comment are the same length. Default=True.
cmt_multi_check_last            = true     # false/true

# For multi-line comments with a '*' lead, remove leading spaces if the first and last lines of
# the comment are the same length AND if the length is bigger as the first_len minimum. Default=4
cmt_multi_first_len_minimum     = 4        # unsigned number

# The filename that contains text to insert at the head of a file if the file doesn't start with a C/C++ comment.
# Will substitute $(filename) with the current file's name.
cmt_insert_file_header          = ""         # string

# The filename that contains text to insert at the end of a file if the file doesn't end with a C/C++ comment.
# Will substitute $(filename) with the current file's name.
cmt_insert_file_footer          = ""         # string

# The filename that contains text to insert before a function implementation if the function isn't preceded with a C/C++ comment.
# Will substitute $(function) with the function name and $(javaparam) with the javadoc @param and @return stuff.
# Will also substitute $(fclass) with the class name: void CFoo::Bar() { ... }.
cmt_insert_func_header          = ""         # string

# The filename that contains text to insert before a class if the class isn't preceded with a C/C++ comment.
# Will substitute $(class) with the class name.
cmt_insert_class_header         = ""         # string

# The filename that contains text to insert before a Obj-C message specification if the method isn't preceded with a C/C++ comment.
# Will substitute $(message) with the function name and $(javaparam) with the javadoc @param and @return stuff.
cmt_insert_oc_msg_header        = ""         # string

# If a preprocessor is encountered when stepping backwards from a function name, then
# this option decides whether the comment should be inserted.
# Affects cmt_insert_oc_msg_header, cmt_insert_func_header and cmt_insert_class_header.
cmt_insert_before_preproc       = false    # false/true

# If a function is declared inline to a class definition, then
# this option decides whether the comment should be inserted.
# Affects cmt_insert_func_header.
cmt_insert_before_inlines       = false     # false/true

# If the function is a constructor/destructor, then
# this option decides whether the comment should be inserted.
# Affects cmt_insert_func_header.
cmt_insert_before_ctor_dtor     = false    # false/true

#
# Code modifying options (non-whitespace)
#

# Add or remove braces on single-line 'do' statement.
mod_full_brace_do               = ignore    # ignore/add/remove/force

# Add or remove braces on single-line 'for' statement.
mod_full_brace_for              = ignore    # ignore/add/remove/force

# Add or remove braces on single-line function definitions. (Pawn).
mod_full_brace_function         = add    # ignore/add/remove/force

# Add or remove braces on single-line 'if' statement. Will not remove the braces if they contain an 'else'.
mod_full_brace_if               = ignore    # ignore/add/remove/force

# Make all if/elseif/else statements in a chain be braced or not. Overrides mod_full_brace_if.
# If any must be braced, they are all braced.  If all can be unbraced, then the braces are removed.
mod_full_brace_if_chain         = false    # false/true

# Make all if/elseif/else statements with at least one 'else' or 'else if' fully braced.
# If mod_full_brace_if_chain is used together with this option, all if-else chains will get braces,
# and simple 'if' statements will lose them (if possible).
mod_full_brace_if_chain_only    = false    # false/true

# Don't remove braces around statements that span N newlines
mod_full_brace_nl               = 0        # unsigned number

# Blocks removal of braces if the parenthesis of if/for/while/.. span multiple lines.
mod_full_brace_nl_block_rem_mlcond = false    # false/true

# Add or remove braces on single-line 'while' statement.
mod_full_brace_while            = add    # ignore/add/remove/force

# Add or remove braces on single-line 'using ()' statement.
mod_full_brace_using            = add    # ignore/add/remove/force

# Add or remove unnecessary paren on 'return' statement.
mod_paren_on_return             = remove   # ignore/add/remove/force

# Whether to change optional semicolons to real semicolons.
mod_pawn_semicolon              = true     # false/true

# Add parens on 'while' and 'if' statement around bools.
mod_full_paren_if_bool          = false    # false/true

# Whether to remove superfluous semicolons.
mod_remove_extra_semicolon      = true     # false/true

# If a function body exceeds the specified number of newlines and doesn't have a comment after
# the close brace, a comment will be added.
mod_add_long_function_closebrace_comment = 0        # unsigned number

# If a namespace body exceeds the specified number of newlines and doesn't have a comment after
# the close brace, a comment will be added.
mod_add_long_namespace_closebrace_comment = 0        # unsigned number

# If a class body exceeds the specified number of newlines and doesn't have a comment after
# the close brace, a comment will be added.
mod_add_long_class_closebrace_comment = 0        # unsigned number

# If a switch body exceeds the specified number of newlines and doesn't have a comment after
# the close brace, a comment will be added.
mod_add_long_switch_closebrace_comment = 0        # unsigned number

# If an #ifdef body exceeds the specified number of newlines and doesn't have a comment after
# the #endif, a comment will be added.
mod_add_long_ifdef_endif_comment = 0        # unsigned number

# If an #ifdef or #else body exceeds the specified number of newlines and doesn't have a comment after
# the #else, a comment will be added.
mod_add_long_ifdef_else_comment = 0        # unsigned number

# If True, will sort consecutive single-line 'import' statements [Java, D].
mod_sort_import                 = false    # false/true

# If True, will sort consecutive single-line 'using' statements [C#].
mod_sort_using                  = false    # false/true

# If True, will sort consecutive single-line '#include' statements [C/C++] and '#import' statements [Obj-C]
# This is generally a bad idea, as it may break your code.
mod_sort_include                = false    # false/true

# If True, it will move a 'break' that appears after a fully braced 'case' before the close brace.
mod_move_case_break             = false    # false/true

# Will add or remove the braces around a fully braced case statement.
# Will only remove the braces if there are no variable declarations in the block.
mod_case_brace                  = ignore   # ignore/add/remove/force

# If True, it will remove a void 'return;' that appears as the last statement in a function.
mod_remove_empty_return         = false     # false/true

# Add or remove the comma after the last value of an enumeration.
mod_enum_last_comma             = ignore   # ignore/add/remove/force

# If True, it will organize the properties (Obj-C).
mod_sort_oc_properties          = false    # false/true

# Determines weight of class property modifier (Obj-C).
mod_sort_oc_property_class_weight = 0        # number

# Determines weight of atomic, nonatomic (Obj-C).
mod_sort_oc_property_thread_safe_weight = 0        # number

# Determines weight of readwrite (Obj-C).
mod_sort_oc_property_readwrite_weight = 0        # number

# Determines weight of reference type (retain, copy, assign, weak, strong) (Obj-C).
mod_sort_oc_property_reference_weight = 0        # number

# Determines weight of getter type (getter=) (Obj-C).
mod_sort_oc_property_getter_weight = 0        # number

# Determines weight of setter type (setter=) (Obj-C).
mod_sort_oc_property_setter_weight = 0        # number

# Determines weight of nullability type (nullable, nonnull, null_unspecified, null_resettable) (Obj-C).
mod_sort_oc_property_nullability_weight = 0        # number

#
# Preprocessor options
#

# Control indent of preprocessors inside #if blocks at brace level 0 (file-level).
pp_indent                       = ignore   # ignore/add/remove/force

# Whether to indent #if/#else/#endif at the brace level (True) or from column 1 (False).
pp_indent_at_level              = false    # false/true

# Specifies the number of columns to indent preprocessors per level at brace level 0 (file-level).
# If pp_indent_at_level=False, specifies the number of columns to indent preprocessors per level at brace level > 0 (function-level).
# Default=1.
pp_indent_count                 = 2        # unsigned number

# Add or remove space after # based on pp_level of #if blocks.
pp_space                        = ignore   # ignore/add/remove/force

# Sets the number of spaces added with pp_space.
pp_space_count                  = 0        # unsigned number

# The indent for #region and #endregion in C# and '#pragma region' in C/C++.
pp_indent_region                = 0        # number

# Whether to indent the code between #region and #endregion.
pp_region_indent_code           = false    # false/true

# If pp_indent_at_level=True, sets the indent for #if, #else and #endif when not at file-level.
# 0:  indent preprocessors using output_tab_size.
# >0: column at which all preprocessors will be indented.
pp_indent_if                    = 0        # number

# Control whether to indent the code between #if, #else and #endif.
pp_if_indent_code               = false    # false/true

# Whether to indent '#define' at the brace level (True) or from column 1 (false).
pp_define_at_level              = false    # false/true

# Whether to ignore the '#define' body while formatting.
pp_ignore_define_body           = false    # false/true

# Whether to indent case statements between #if, #else, and #endif.
# Only applies to the indent of the preprocesser that the case statements directly inside of.
pp_indent_case                  = true     # false/true

# Whether to indent whole function definitions between #if, #else, and #endif.
# Only applies to the indent of the preprocesser that the function definition is directly inside of.
pp_indent_func_def              = true     # false/true

# Whether to indent extern C blocks between #if, #else, and #endif.
# Only applies to the indent of the preprocesser that the extern block is directly inside of.
pp_indent_extern                = true     # false/true

# Whether to indent braces directly inside #if, #else, and #endif.
# Only applies to the indent of the preprocesser that the braces are directly inside of.
pp_indent_brace                 = true     # false/true

#
# Sort includes options
#

# The regex for include category with priority 0.
include_category_0              = ""         # string

# The regex for include category with priority 1.
include_category_1              = ""         # string

# The regex for include category with priority 2.
include_category_2              = ""         # string

#
# Use or Do not Use options
#

# True:  indent_func_call_param will be used (default)
# False: indent_func_call_param will NOT be used.
use_indent_func_call_param      = true     # false/true

# The value of the indentation for a continuation line is calculate differently if the statement is:
#   a declaration: your case with QString fileName ...
#   an assignment: your case with pSettings = new QSettings( ...
# At the second case the indentation value might be used twice:
#   at the assignment
#   at the function call (if present)
# To prevent the double use of the indentation value, use this option with the value 'True'.
# True:  indent_continue will be used only once
# False: indent_continue will be used every time (default).
use_indent_continue_only_once   = false    # false/true

# the value might be used twice:
#   at the assignment
#   at the opening brace
# To prevent the double use of the indentation value, use this option with the value 'True'.
# True:  indentation will be used only once
# False: indentation will be used every time (default).
indent_cpp_lambda_only_once     = false    # false/true

# SIGNAL/SLOT Qt macros have special formatting options. See options_for_QT.cpp for details.
# Default=True.
use_options_overriding_for_qt_macros = true     # false/true

#
# Warn levels - 1: error, 2: warning (default), 3: note
#

# Warning is given if doing tab-to-\t replacement and we have found one in a C# verbatim string literal.
warn_level_tabs_found_in_verbatim_string_literals = 2        # unsigned number

# Meaning of the settings:
#   Ignore - do not do any changes
#   Add    - makes sure there is 1 or more space/brace/newline/etc
#   Force  - makes sure there is exactly 1 space/brace/newline/etc,
#            behaves like Add in some contexts
#   Remove - removes space/brace/newline/etc
#
#
# - Token(s) can be treated as specific type(s) with the 'set' option:
#     `set tokenType tokenString [tokenString...]`
#
#     Example:
#       `set BOOL __AND__ __OR__`
#
#     tokenTypes are defined in src/token_enum.h, use them without the
#     'CT_' prefix: 'CT_BOOL' -> 'BOOL'
#
#
# - Token(s) can be treated as type(s) with the 'type' option.
#     `type tokenString [tokenString...]`
#
#     Example:
#       `type int c_uint_8 Rectangle`
#
#     This can also be achieved with `set TYPE int c_uint_8 Rectangle`
#
#
# To embed whitespace in tokenStrings use the '\' escape character, or quote
# the tokenStrings. These quotes are supported: "'`
#
#
# - Support for the auto detection of languages through the file ending can be
#   added using the 'file_ext' command.
#     `file_ext langType langString [langString..]`
#
#     Example:
#       `file_ext CPP .ch .cxx .cpp.in`
#
#     langTypes are defined in uncrusify_types.h in the lang_flag_e enum, use
#     them without the 'LANG_' prefix: 'LANG_CPP' -> 'CPP'
#
#
# - Custom macro-based indentation can be set up using 'macro-open',
#   'macro-else' and 'macro-close'.
#     `(macro-open | macro-else | macro-close) tokenString`
#
#     Example:
#       `macro-open  BEGIN_TEMPLATE_MESSAGE_MAP`
#       `macro-open  BEGIN_MESSAGE_MAP`
#       `macro-close END_MESSAGE_MAP`
#
#
# option(s) with 'not default' value: 0
#

