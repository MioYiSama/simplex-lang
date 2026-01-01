#pragma once

#include <CharStream.h>

#include <string>

namespace sx::util {

class SimdutfCharStream : public antlr4::CharStream {
 public:
  SimdutfCharStream(const std::string &path);

  // Implements CharStream
  std::string getText(const antlr4::misc::Interval &interval) override;
  [[nodiscard]] std::string toString() const override;

  // Implements IntStream
  void consume() override;
  size_t LA(ssize_t i) override;
  ssize_t mark() override;
  void release(ssize_t marker) override;
  size_t index() override;
  void seek(size_t index) override;
  size_t size() override;
  [[nodiscard]] std::string getSourceName() const override;

 private:
  std::u32string content;
  size_t pos{0};
};

};  // namespace sx::util