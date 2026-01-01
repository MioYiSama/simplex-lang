#include <ANTLRInputStream.h>

#include <print>

#include "CommonTokenStream.h"
#include "Grammar/SimplexLexer.h"
#include "Grammar/SimplexParser.h"
#include "Grammar/SimplexParserBaseVisitor.h"
#include "Util/CommandLineUtil.hpp"
using namespace sx::grammar;
class MyVisitor : public sx::grammar::SimplexParserBaseVisitor {
 public:
  std::any visitDecl(SimplexParser::DeclContext* ctx) override {
    std::println("{}", ctx->ID()->getText());
    return 0;
  }
};

int main(const int argc, char* argv[]) {
  const auto args = sx::util::parse_command_line_args(argc, argv);

  antlr4::ANTLRInputStream s{"def x = 1"};
  sx::grammar::SimplexLexer lexer{&s};
  antlr4::CommonTokenStream token_stream{&lexer};
  sx::grammar::SimplexParser parser{&token_stream};

  auto tree = parser.module();
  if (parser.getNumberOfSyntaxErrors() > 0) {
    return 1;
  }

  MyVisitor v{};
  tree->accept(&v);

  return 0;
}