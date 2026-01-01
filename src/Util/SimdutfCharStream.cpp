#include "SimdutfCharStream.hpp"

#include <simdutf.h>

#include <filesystem>
#include <fstream>
#include <ios>
#include <stdexcept>
#include <system_error>

namespace sx::util {

SimdutfCharStream::SimdutfCharStream(const std::string &path) {
  std::error_code error;
  auto size = std::filesystem::file_size(path, error);
  if (error) {
    throw std::runtime_error{"unable to get file size"};
  }

  std::ifstream stream{path, std::ios::binary};
  if (!stream) {
    throw std::runtime_error{"unable to open file"};
  }

  std::vector<char> buffer(size);
  if (!stream.read(buffer.data(), static_cast<std::streamsize>(size))) {
    throw std::runtime_error{"unable to read file"};
  }

  if (!simdutf::validate_utf8(buffer)) {
    throw std::runtime_error{"source file is not valid utf8 encoded"};
  }

  content.resize_and_overwrite(simdutf::utf32_length_from_utf8(buffer), [&](char32_t *p, size_t) {
    return simdutf::convert_utf8_to_utf32(buffer.data(), buffer.size(), p);
  });
}

std::string SimdutfCharStream::getText(const antlr4::misc::Interval &interval) {
  content.substr(interval.a, interval.b);
  return "";
}

std::string SimdutfCharStream::toString() const { return ""; }

void SimdutfCharStream::consume() {
  if (pos < content.size()) {
    ++pos;
  }
};

size_t SimdutfCharStream::LA(ssize_t i) {
  if (i == 0) {
    return 0;
  }

  auto index = i > 0 ? pos + i - 1 : pos + i;

  if (index < 0 || index >= content.size()) {
    return IntStream::EOF;
  }

  return content[index];
};

ssize_t SimdutfCharStream::mark() { return static_cast<ssize_t>(pos); };

void SimdutfCharStream::release(ssize_t marker) { /* Empty */ };

size_t SimdutfCharStream::index() { return pos; };

void SimdutfCharStream::seek(size_t index) { pos = std::min(index, content.size()); };

size_t SimdutfCharStream::size() { return content.size(); };

[[nodiscard]] std::string SimdutfCharStream::getSourceName() const { return ""; };

};  // namespace sx::util