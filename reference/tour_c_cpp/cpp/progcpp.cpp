#include <iostream>
#include <string>

#include "fmt/base.h"
#include "toolsmath/toolsmath.h"
#include "utils/utils.h"
#define FMT_HEADER_ONLY
#define SPDLOG_FMT_EXTERNAL // 定义不使用 spdlog 内部的 fmt 使用外部自定义引入的
#include "spdlog/spdlog.h"

#include "gflags/gflags.h"

DEFINE_bool(verbose, false, "Enable verbose output");
DEFINE_string(config, "default.cfg", "Config file path");
DEFINE_int32(port, 8080, "Server port");

// 手动定义帮助标志（如果 gflags 没有自动生成）
DECLARE_bool(help);
DECLARE_bool(helpshort);
DECLARE_bool(helpfull);

int main(int argc, char** argv)
{
    // 设置帮助信息
    gflags::SetUsageMessage(
        "progcpp: 命令行参数演示程序\n\n"
        "用法示例:\n"
        "  $ ./progcpp --config=settings.cfg --port=8081 --verbose\n"
        "  $ ./progcpp --help  # 查看完整帮助"
    );

    // 设置版本信息（可选）
    gflags::SetVersionString("1.0.0");

    gflags::ParseCommandLineFlags(&argc, &argv, true);

    if (FLAGS_verbose) {
        std::cout << "Using config file: " << FLAGS_config << std::endl;
    }
    std::cout << "Server port: " << FLAGS_port << std::endl;

    fmt::print("----------------------------\n");

    ToolsMath math;
    Utils     utils;

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