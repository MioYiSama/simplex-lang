lexer grammar SimplexLexer;

fragment DIGIT
    : [0-9]
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

// 符号
COMMA
    : ','
    ;
SEMI
    : ';'
    ;
COLON
    : ':'
    ;
ASSIGN
    : '='
    ;
ARROW
    : '=>'
    ;

// 括号
L_PAREN
    : '('
    ;
R_PAREN
    : ')' -> mode(NLSEMI)
    ;
L_BRACKET
    : '['
    ;
R_BRACKET
    : ']' -> mode(NLSEMI)
    ;
L_BRACE
    : '{'
    ;
R_BRACE
    : '}' -> mode(NLSEMI)
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
IF
    : 'if'
    ;
ELSE
    : 'else'
    ;
FOR
    : 'for'
    ;
IN
    : 'in'
    ;
CONTINUE
    : 'continue' -> mode(NLSEMI)
    ;
BREAK
    : 'break' -> mode(NLSEMI)
    ;
RETURN
    : 'return' -> mode(NLSEMI)
    ;

// 表达式
ID
    : [A-Za-z_][A-Za-z0-9_]* -> mode(NLSEMI)
    ;
INTEGER
    : DIGIT+ ('B' | 'L' | 'U' | 'UL')? -> mode(NLSEMI)
    ;
FLOAT
    : DIGIT+ '.' DIGIT+ 'L'? -> mode(NLSEMI)
    ;
CHAR
    : '\'' ~[\r\n] '\'' -> mode(NLSEMI)
    ;
STRING
    : '"' ('\\"' | ~[\r\n])* '"' -> mode(NLSEMI)
    ;

// 特殊
NEWLINE
    : [\r\n]+ -> skip
    ;
WHITESPACE
    : [ \t]+ -> skip
    ;
LINE_COMMENT
    : '//' ~[\r\n]* -> skip
    ;
BLOCK_COMMENT
    : '/*' .*? '*/' -> skip
    ;

mode NLSEMI;

// Treat whitespace as normal
WS_NLSEMI
    : [ \t]+ -> channel(HIDDEN)
    ;
// Ignore any comments that only span one line
COMMENT_NLSEMI
    : '/*' ~[\r\n]*? '*/' -> channel(HIDDEN)
    ;
LINE_COMMENT_NLSEMI
    : '//' ~[\r\n]* -> channel(HIDDEN)
    ;
// Emit an EOS token for any newlines, semicolon, multiline comments or the EOF and return to normal
// lexing
EOS
    : ([\r\n]+ | ';' | '/*' .*? '*/' | EOF) -> mode(DEFAULT_MODE)
    ;
// Did not find an EOS, so go back to normal lexing
OTHER
    : -> mode(DEFAULT_MODE), skip
    ;