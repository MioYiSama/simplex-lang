#pragma once

#include <string>

namespace sx::util {

std::string to_u8string(const wchar_t* s);

std::string to_u8string(const std::u32string& s);

}  // namespace sx::util