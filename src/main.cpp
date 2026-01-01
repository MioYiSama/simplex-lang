#include <CLI11.hpp>
#include <stdexcept>

#include "Grammar/SimplexLexer.h"
#include "Grammar/SimplexParser.h"
#include "Util/CommandLineUtil.hpp"
#include "Util/SimdutfCharStream.hpp"

int main(const int argc, char *argv[]) {
  CLI::App app;
  app.require_subcommand();

  // Compile
  {
    auto compile_command = app.add_subcommand("compile", "compile a source file");

    std::string path{};
    auto path_option = compile_command->add_option("path", path, "path to the source file")
                           ->required()
                           ->check(CLI::ExistingFile);

    compile_command->callback([&]() {
      sx::util::SimdutfCharStream char_stream{path};
      sx::grammar::SimplexLexer lexer{&char_stream};

      antlr4::CommonTokenStream token_stream{&lexer};
      sx::grammar::SimplexParser parser{&token_stream};

      auto module = parser.module();
      if (parser.getNumberOfSyntaxErrors()) {
        throw std::runtime_error{"parse error"};
      }
    });
  }

  CLI11_PARSE(app, sx::util::parse_command_line_args(argc, argv));

  return 0;
}