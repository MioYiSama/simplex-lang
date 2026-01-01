
// Generated from SimplexParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimplexParserVisitor.h"


namespace sx::grammar {

/**
 * This class provides an empty implementation of SimplexParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SimplexParserBaseVisitor : public SimplexParserVisitor {
public:

  virtual std::any visitModule(SimplexParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(SimplexParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(SimplexParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(SimplexParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(SimplexParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(SimplexParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_loop(SimplexParser::Conditional_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_each(SimplexParser::For_eachContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEos(SimplexParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(SimplexParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(SimplexParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_void(SimplexParser::Expr_voidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_tuple(SimplexParser::Expr_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_struct(SimplexParser::Expr_structContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_array(SimplexParser::Expr_arrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_map(SimplexParser::Expr_mapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_func(SimplexParser::Expr_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_expr(SimplexParser::Type_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_void(SimplexParser::Type_voidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_tuple(SimplexParser::Type_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_struct(SimplexParser::Type_structContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_array(SimplexParser::Type_arrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_map(SimplexParser::Type_mapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_func(SimplexParser::Type_funcContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace sx::grammar
