#include "CommandLineUtil.hpp"

#ifdef SX_OS_WINDOWS
// clang-format off
#include <windows.h>
#include <shellapi.h>
// clang-format on
#endif

#include "StringUtil.hpp"

namespace sx::util {

std::vector<std::string> parse_command_line_args(int argc, char* argv[]) {
#ifdef SX_OS_WINDOWS
  const auto w_argv = CommandLineToArgvW(GetCommandLineW(), &argc);
#endif

  std::vector<std::string> result;
  result.reserve(argc);

  for (int i = 0; i < argc; i++) {
#ifdef SX_OS_WINDOWS
    result.push_back(to_u8string(w_argv[i]));
#else
    result.emplace_back(argv[i]);
#endif
  }

#ifdef SX_OS_WINDOWS
  LocalFree(w_argv);
#endif

  return result;
}

}  // namespace sx::util