#include "ToolsMathLib/toolsmathlib.h"
#include "UtilsLib/utilslib.h"
#include "fmt/base.h"
#include <iostream>
#define FMT_HEADER_ONLY
#define SPDLOG_FMT_EXTERNAL // 定义不使用 spdlog 内部的 fmt 使用外部自定义引入的
#include "spdlog/spdlog.h"

int main() {
  ToolsMathLib math;
  UtilsLib utils;

#ifdef Debug
  std::cout << "This is a Debug version." << std::endl;
#else
  std::cout << "This is a Release version." << std::endl;
#endif

  int sum = math.add(3, 4);     // 使用MathLib的add函数
  int square = utils.square(5); // 使用UtilsLib的square函数

  std::cout << "Sum: " << sum << ", Square: " << square << std::endl;

  constexpr int err_num = 12;
  spdlog::warn("spdlog format char {:08d}", err_num);

  fmt::print("{}\n", err_num);

  return 0;
}