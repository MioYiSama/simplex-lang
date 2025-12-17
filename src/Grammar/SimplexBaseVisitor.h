
// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimplexVisitor.h"


namespace sx::grammar {

/**
 * This class provides an empty implementation of SimplexVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SimplexBaseVisitor : public SimplexVisitor {
public:

  virtual std::any visitFile(SimplexParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace sx::grammar
