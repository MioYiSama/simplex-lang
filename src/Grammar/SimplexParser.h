
// Generated from src/Grammar/Simplex.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace sx::grammar {


class  SimplexParser : public antlr4::Parser {
public:
  enum {
    L_PAREN = 1, R_PAREN = 2, L_BRACKET = 3, R_BRACKET = 4, L_BRACE = 5, 
    R_BRACE = 6, COLON = 7, COMMA = 8, ASSIGN = 9, ARROW = 10, ADD = 11, 
    SUB = 12, MUL = 13, DIV = 14, VAR = 15, CONST = 16, DEF = 17, TYPE = 18, 
    ID = 19, INTEGER = 20, NEWLINE = 21, WHITESPACE = 22
  };

  enum {
    RuleModule = 0, RuleStatements = 1, RuleStatement = 2, RuleDecl = 3, 
    RuleExpr = 4, RuleExpr_void = 5, RuleExpr_tuple = 6, RuleExpr_struct = 7, 
    RuleExpr_array = 8, RuleExpr_map = 9, RuleExpr_func = 10, RuleType_expr = 11, 
    RuleType_void = 12, RuleType_tuple = 13, RuleType_struct = 14, RuleType_array = 15, 
    RuleType_map = 16, RuleType_func = 17
  };

  explicit SimplexParser(antlr4::TokenStream *input);

  SimplexParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SimplexParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ModuleContext;
  class StatementsContext;
  class StatementContext;
  class DeclContext;
  class ExprContext;
  class Expr_voidContext;
  class Expr_tupleContext;
  class Expr_structContext;
  class Expr_arrayContext;
  class Expr_mapContext;
  class Expr_funcContext;
  class Type_exprContext;
  class Type_voidContext;
  class Type_tupleContext;
  class Type_structContext;
  class Type_arrayContext;
  class Type_mapContext;
  class Type_funcContext; 

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *COLON();
    Type_exprContext *type_expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *TYPE();
    Type_exprContext *type_expr();
    Expr_voidContext *expr_void();
    Expr_tupleContext *expr_tuple();
    Expr_structContext *expr_struct();
    Expr_arrayContext *expr_array();
    Expr_mapContext *expr_map();
    Expr_funcContext *expr_func();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Expr_voidContext : public antlr4::ParserRuleContext {
  public:
    Expr_voidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    antlr4::tree::TerminalNode *R_PAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_voidContext* expr_void();

  class  Expr_tupleContext : public antlr4::ParserRuleContext {
  public:
    Expr_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_tupleContext* expr_tuple();

  class  Expr_structContext : public antlr4::ParserRuleContext {
  public:
    Expr_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_structContext* expr_struct();

  class  Expr_arrayContext : public antlr4::ParserRuleContext {
  public:
    Expr_arrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_arrayContext* expr_array();

  class  Expr_mapContext : public antlr4::ParserRuleContext {
  public:
    Expr_mapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *R_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_mapContext* expr_map();

  class  Expr_funcContext : public antlr4::ParserRuleContext {
  public:
    Expr_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    Type_funcContext *type_func();
    antlr4::tree::TerminalNode *NEWLINE();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *R_BRACE();
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<Type_exprContext *> type_expr();
    Type_exprContext* type_expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    antlr4::tree::TerminalNode *ARROW();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_funcContext* expr_func();

  class  Type_exprContext : public antlr4::ParserRuleContext {
  public:
    Type_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Type_voidContext *type_void();
    Type_tupleContext *type_tuple();
    Type_structContext *type_struct();
    Type_arrayContext *type_array();
    Type_mapContext *type_map();
    Type_funcContext *type_func();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_exprContext* type_expr();

  class  Type_voidContext : public antlr4::ParserRuleContext {
  public:
    Type_voidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    antlr4::tree::TerminalNode *R_PAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_voidContext* type_void();

  class  Type_tupleContext : public antlr4::ParserRuleContext {
  public:
    Type_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<Type_exprContext *> type_expr();
    Type_exprContext* type_expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_tupleContext* type_tuple();

  class  Type_structContext : public antlr4::ParserRuleContext {
  public:
    Type_structContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<Type_exprContext *> type_expr();
    Type_exprContext* type_expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_structContext* type_struct();

  class  Type_arrayContext : public antlr4::ParserRuleContext {
  public:
    Type_arrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    Type_exprContext *type_expr();
    antlr4::tree::TerminalNode *R_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_arrayContext* type_array();

  class  Type_mapContext : public antlr4::ParserRuleContext {
  public:
    Type_mapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    std::vector<Type_exprContext *> type_expr();
    Type_exprContext* type_expr(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *R_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_mapContext* type_map();

  class  Type_funcContext : public antlr4::ParserRuleContext {
  public:
    Type_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<Type_exprContext *> type_expr();
    Type_exprContext* type_expr(size_t i);
    antlr4::tree::TerminalNode *R_PAREN();
    antlr4::tree::TerminalNode *ARROW();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_funcContext* type_func();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace sx::grammar
