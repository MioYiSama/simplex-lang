
// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimplexParser.h"


namespace sx::grammar {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SimplexParser.
 */
class  SimplexVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SimplexParser.
   */
    virtual std::any visitFile(SimplexParser::FileContext *context) = 0;


};

}  // namespace sx::grammar
