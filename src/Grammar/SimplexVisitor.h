
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
    virtual std::any visitModule(SimplexParser::ModuleContext *context) = 0;

    virtual std::any visitStatements(SimplexParser::StatementsContext *context) = 0;

    virtual std::any visitStatement(SimplexParser::StatementContext *context) = 0;

    virtual std::any visitDecl(SimplexParser::DeclContext *context) = 0;

    virtual std::any visitExpr(SimplexParser::ExprContext *context) = 0;

    virtual std::any visitExpr_void(SimplexParser::Expr_voidContext *context) = 0;

    virtual std::any visitExpr_tuple(SimplexParser::Expr_tupleContext *context) = 0;

    virtual std::any visitExpr_struct(SimplexParser::Expr_structContext *context) = 0;

    virtual std::any visitExpr_array(SimplexParser::Expr_arrayContext *context) = 0;

    virtual std::any visitExpr_map(SimplexParser::Expr_mapContext *context) = 0;

    virtual std::any visitExpr_func(SimplexParser::Expr_funcContext *context) = 0;

    virtual std::any visitType_expr(SimplexParser::Type_exprContext *context) = 0;

    virtual std::any visitType_void(SimplexParser::Type_voidContext *context) = 0;

    virtual std::any visitType_tuple(SimplexParser::Type_tupleContext *context) = 0;

    virtual std::any visitType_struct(SimplexParser::Type_structContext *context) = 0;

    virtual std::any visitType_array(SimplexParser::Type_arrayContext *context) = 0;

    virtual std::any visitType_map(SimplexParser::Type_mapContext *context) = 0;

    virtual std::any visitType_func(SimplexParser::Type_funcContext *context) = 0;


};

}  // namespace sx::grammar
