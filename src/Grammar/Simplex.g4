grammar Simplex;

options {
    language = Cpp;
}

file: CHAR NEWLINE*;

NEWLINE: [\r\n]+;
CHAR: '汉字';