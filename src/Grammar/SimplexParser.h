
// Generated from SimplexParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace sx::grammar {


class  SimplexParser : public antlr4::Parser {
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
    RuleModule = 0, RuleBlock = 1, RuleStatements = 2, RuleStatement = 3, 
    RuleIf_statement = 4, RuleFor_statement = 5, RuleEos = 6, RuleDecl = 7, 
    RuleExpr = 8, RuleExpr_void = 9, RuleExpr_tuple = 10, RuleExpr_struct = 11, 
    RuleExpr_array = 12, RuleExpr_map = 13, RuleExpr_func = 14, RuleType_expr = 15, 
    RuleType_void = 16, RuleType_tuple = 17, RuleType_struct = 18, RuleType_array = 19, 
    RuleType_map = 20, RuleType_func = 21
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
  class BlockContext;
  class StatementsContext;
  class StatementContext;
  class If_statementContext;
  class For_statementContext;
  class EosContext;
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
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    StatementsContext *statements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *BREAK();
    If_statementContext *if_statement();
    For_statementContext *for_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    For_statementContext() = default;
    void copyFrom(For_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LoopContext : public For_statementContext {
  public:
    LoopContext(For_statementContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *L_BRACE();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  For_eachContext : public For_statementContext {
  public:
    For_eachContext(For_statementContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *IN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *L_BRACE();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Conditional_loopContext : public For_statementContext {
  public:
    Conditional_loopContext(For_statementContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *L_BRACE();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  For_statementContext* for_statement();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *EOS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EosContext* eos();

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
