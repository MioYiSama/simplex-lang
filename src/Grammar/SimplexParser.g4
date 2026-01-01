parser grammar SimplexParser;

options {
    tokenVocab = SimplexLexer;
}

module
    : (decl (eos decl)*)?
    ;

block
    : L_BRACE statements? R_BRACE
    ;
statements
    : (statement eos)+
    ;
statement
    : decl
    | RETURN expr?
    | CONTINUE
    | BREAK
    | if_statement
    | for_statement
    ;

if_statement
    : IF expr block (ELSE IF expr block)* (ELSE block)?
    ;

for_statement
    : FOR L_BRACE statements R_BRACE            # loop
    | FOR expr L_BRACE statements R_BRACE       # conditional_loop
    | FOR ID IN expr L_BRACE statements R_BRACE # for_each
    ;

eos
    : SEMI
    | EOS
    ;
decl
    : (DEF | VAR | CONST) ID (COLON type_expr)? ASSIGN expr
    ;

// 表达式
expr
    : L_PAREN expr R_PAREN
    | ID L_PAREN (expr (COMMA expr)* COMMA?)? R_PAREN
    | (ADD | SUB) expr
    | expr (MUL | DIV) expr
    | expr (ADD | SUB) expr
    | ID
    | INTEGER
    | TYPE type_expr
    | expr_void
    | expr_tuple
    | expr_struct
    | expr_array
    | expr_map
    | expr_func
    ;
expr_void
    : L_PAREN R_PAREN
    ;
expr_tuple
    : L_PAREN expr (COMMA expr)* COMMA? R_PAREN
    ;
expr_struct
    : L_PAREN ID COLON expr (COMMA ID COLON expr)* COMMA? R_PAREN
    ;
expr_array
    : L_BRACKET expr (COMMA expr)* COMMA? R_BRACKET
    ;
expr_map
    : L_BRACKET expr COLON expr (COMMA expr COLON expr)* COMMA? R_BRACKET
    ;
expr_func
    : L_BRACE type_func statements R_BRACE
    | L_BRACE L_PAREN ID COLON type_expr (
        COMMA ID COLON type_expr
    )* COMMA? R_PAREN ARROW expr R_BRACE
    ;

// 类型
type_expr
    : ID
    | type_void
    | type_tuple
    | type_struct
    | type_array
    | type_map
    | type_func
    ;
type_void
    : L_PAREN R_PAREN
    ;
type_tuple
    : L_PAREN type_expr (COMMA type_expr)* COMMA? R_PAREN
    ;
type_struct
    : L_PAREN ID COLON type_expr (COMMA ID COLON type_expr)* COMMA? R_PAREN
    ;
type_array
    : L_BRACKET type_expr R_BRACKET
    ;
type_map
    : L_BRACKET type_expr COLON type_expr R_BRACKET
    ;
type_func
    : L_PAREN ID COLON type_expr (COMMA ID COLON type_expr)* COMMA? R_PAREN ARROW type_expr
    ;