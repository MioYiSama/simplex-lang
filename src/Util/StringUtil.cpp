#include "StringUtil.hpp"

#include <simdutf.h>

namespace sx::util {

std::string to_u8string(const wchar_t* s) {
  std::u16string_view sv{reinterpret_cast<const char16_t*>(s)};

  const auto length = simdutf::utf8_length_from_utf16(sv);

  std::string result{};
  result.resize_and_overwrite(
      length, [&](char*, size_t) { return simdutf::convert_utf16_to_utf8(sv, result); });

  return result;
}

}  // namespace sx::util