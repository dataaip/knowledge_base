#include <iostream>
#include <string>

#include "fmt/base.h"
#include "toolsmath/toolsmath.h"
#include "utils/utils.h"
#define FMT_HEADER_ONLY
#define SPDLOG_FMT_EXTERNAL // 定义不使用 spdlog 内部的 fmt 使用外部自定义引入的
#include "spdlog/spdlog.h"

#define STRIP_FLAG_HELP 1
#include "gflags/gflags.h"

DEFINE_bool(verbose, false, "Enable verbose output");
DEFINE_string(config, "default.cfg", "Config file path");
DEFINE_int32(port, 8080, "Server port");

int main(int argc, char** argv)
{
    ToolsMath math;
    Utils     utils;

    // 设置自定义帮助信息
    gflags::SetUsageMessage(
        "A demo program using gflags\n"
        "Usage: progcpp --config=<file> --port=<num> [--verbose]\n"
        "Example: ./progcpp --config=my.cfg --port=8081 --verbose"
    );

    gflags::ParseCommandLineFlags(&argc, &argv, true);

    if (FLAGS_verbose) {
        std::cout << "Using config file: " << FLAGS_config << std::endl;
    }
    std::cout << "Server port: " << FLAGS_port << std::endl;

    fmt::print("----------------------------\n");

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