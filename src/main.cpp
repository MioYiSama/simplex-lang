#include <print>
#include <string>
#include <vector>

#include "Util/CommandLineUtil.hpp"

int main(const int argc, char* argv[]) {
  const auto args = sx::util::parse_command_line_args(argc, argv);

  for (const auto& arg : args) {
    std::println("{}", arg);
  }

  return 0;
}