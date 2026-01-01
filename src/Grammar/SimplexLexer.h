
// Generated from SimplexLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace sx::grammar {


class  SimplexLexer : public antlr4::Lexer {
public:
  enum {
    ADD = 1, SUB = 2, MUL = 3, DIV = 4, COMMA = 5, SEMI = 6, COLON = 7, 
    ASSIGN = 8, ARROW = 9, L_PAREN = 10, R_PAREN = 11, L_BRACKET = 12, R_BRACKET = 13, 
    L_BRACE = 14, R_BRACE = 15, VAR = 16, CONST = 17, DEF = 18, TYPE = 19, 
    IF = 20, ELSE = 21, FOR = 22, IN = 23, CONTINUE = 24, BREAK = 25, RETURN = 26, 
    ID = 27, INTEGER = 28, FLOAT = 29, CHAR = 30, STRING = 31, NEWLINE = 32, 
    WHITESPACE = 33, LINE_COMMENT = 34, BLOCK_COMMENT = 35, WS_NLSEMI = 36, 
    COMMENT_NLSEMI = 37, LINE_COMMENT_NLSEMI = 38, EOS = 39, OTHER = 40
  };

  enum {
    NLSEMI = 1
  };

  explicit SimplexLexer(antlr4::CharStream *input);

  ~SimplexLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace sx::grammar
