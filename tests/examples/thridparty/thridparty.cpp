#include <iostream>
#include <string>

#include "fmt/base.h"
#define FMT_HEADER_ONLY
#define SPDLOG_FMT_EXTERNAL // 定义不使用 spdlog 内部的 fmt 使用外部自定义引入的
#include "spdlog/spdlog.h"
//#include "log_format/log_format.h"

 #include "gflags/gflags.h"
//#include "cmdline_parser/gflags/gflags.h"

DEFINE_bool(verbose, false, "Enable verbose output");
DEFINE_string(config, "default.cfg", "Config file path");
DEFINE_int32(port, 8080, "Server port");

// 手动定义帮助标志（如果 gflags 没有自动生成）
DECLARE_bool(help);
DECLARE_bool(helpshort);
DECLARE_bool(helpfull);

#include "boost/program_options.hpp"
//#include "general_purpose/boost/boost/program_options.hpp"
namespace po = boost::program_options;

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

    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "show help message")
            ("input", po::value<std::string>(), "input file")
                ("verbose", po::bool_switch(), "verbose mode");

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        std::cout << desc << "\n";
        return 1;
    }

    if (vm.count("input")) {
        std::cout << "Input file: "
                  << vm["input"].as<std::string>() << "\n";
    }

    if (vm["verbose"].as<bool>()) {
        std::cout << "Verbose mode enabled\n";
    }

#ifdef Debug
    std::cout << "This is a Debug version." << std::endl;
#else
    std::cout << "This is a Release version." << std::endl;
#endif

    int sum = 3 + 4;
    int square = 5;

    std::cout << "Sum: " << sum << ", Square: " << square << std::endl;

    constexpr int err_num = 12;
    spdlog::warn("spdlog format char {:08d}", err_num);

    fmt::print("{}\n", err_num);

    return 0;
}