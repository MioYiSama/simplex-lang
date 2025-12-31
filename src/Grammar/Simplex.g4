grammar Simplex;

module
    : NEWLINE? // Empty
    | NEWLINE? decl (NEWLINE decl)* NEWLINE?
    ;

statements
    : NEWLINE?
    | NEWLINE? statement (NEWLINE statement)* NEWLINE?
    ;

statement
    : decl
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
    : L_BRACE type_func NEWLINE statements R_BRACE
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
type_func // (x: Int, y: Int) => Int
    : L_PAREN ID COLON type_expr (COMMA ID COLON type_expr)* COMMA? R_PAREN ARROW type_expr
    ;

// 括号
L_PAREN
    : '('
    ;
R_PAREN
    : ')'
    ;
L_BRACKET
    : '['
    ;
R_BRACKET
    : ']'
    ;
L_BRACE
    : '{'
    ;
R_BRACE
    : '}'
    ;

// 符号
COLON
    : ':'
    ;
COMMA
    : ','
    ;
ASSIGN
    : '='
    ;
ARROW
    : '=>'
    ;

// 运算符
ADD
    : '+'
    ;
SUB
    : '-'
    ;
MUL
    : '*'
    ;
DIV
    : '/'
    ;

// 关键字
VAR
    : 'var'
    ;
CONST
    : 'const'
    ;
DEF
    : 'def'
    ;
TYPE
    : 'type'
    ;

ID
    : [A-Za-z_][A-Za-z0-9_]*
    ;
INTEGER
    : [0-9]+
    ;

// 特殊
NEWLINE
    : [\r\n]+
    ;
WHITESPACE
    : [ \t]+ -> skip
    ;