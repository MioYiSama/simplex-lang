
// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace sx::grammar {


class  SimplexLexer : public antlr4::Lexer {
public:
  enum {
    L_PAREN = 1, R_PAREN = 2, L_BRACKET = 3, R_BRACKET = 4, L_BRACE = 5, 
    R_BRACE = 6, COLON = 7, COMMA = 8, ASSIGN = 9, ARROW = 10, ADD = 11, 
    SUB = 12, MUL = 13, DIV = 14, VAR = 15, CONST = 16, DEF = 17, TYPE = 18, 
    ID = 19, INTEGER = 20, NEWLINE = 21, WHITESPACE = 22
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
