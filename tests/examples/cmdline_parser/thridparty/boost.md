以下是 Boost.Program_options 的详细使用示例，涵盖从基础到高级的各种用法：

## 1. 基础示例

```cpp
#include <boost/program_options.hpp>
#include <iostream>
#include <string>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        // 定义选项描述
        po::options_description desc("Allowed options");
        desc.add_options()
            ("help", "produce help message")
            ("verbose", "verbose output")
            ("input-file", po::value<std::string>(), "input file")
            ("output-file", po::value<std::string>(), "output file");
        
        // 存储解析的变量
        po::variables_map vm;
        
        // 解析命令行参数
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);
        
        // 处理选项
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
        
        if (vm.count("verbose")) {
            std::cout << "Verbose mode enabled" << std::endl;
        }
        
        if (vm.count("input-file")) {
            std::cout << "Input file: " << vm["input-file"].as<std::string>() << std::endl;
        }
        
        if (vm.count("output-file")) {
            std::cout << "Output file: " << vm["output-file"].as<std::string>() << std::endl;
        }
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 2. 带默认值和验证的示例

```cpp
#include <boost/program_options.hpp>
#include <iostream>
#include <vector>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        po::options_description desc("Application options");
        desc.add_options()
            ("help,h", "produce help message")
            ("port,p", po::value<int>()->default_value(8080), "port number")
            ("hosts", po::value<std::vector<std::string>>()->multitoken(), 
             "host names (multiple values allowed)")
            ("timeout,t", po::value<double>()->default_value(30.0), "timeout in seconds")
            ("config,c", po::value<std::string>(), "configuration file");
        
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);
        
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
        
        // 访问带默认值的选项
        int port = vm["port"].as<int>();
        double timeout = vm["timeout"].as<double>();
        
        std::cout << "Port: " << port << std::endl;
        std::cout << "Timeout: " << timeout << " seconds" << std::endl;
        
        // 处理多值选项
        if (vm.count("hosts")) {
            std::vector<std::string> hosts = vm["hosts"].as<std::vector<std::string>>();
            std::cout << "Hosts: ";
            for (const auto& host : hosts) {
                std::cout << host << " ";
            }
            std::cout << std::endl;
        }
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 3. 从配置文件读取选项

```cpp
#include <boost/program_options.hpp>
#include <iostream>
#include <fstream>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        // 定义选项
        po::options_description generic("Generic options");
        generic.add_options()
            ("help", "produce help message")
            ("config,c", po::value<std::string>()->default_value("config.ini"), 
             "configuration file");
        
        po::options_description config("Configuration");
        config.add_options()
            ("database.host", po::value<std::string>()->default_value("localhost"), "database host")
            ("database.port", po::value<int>()->default_value(5432), "database port")
            ("database.name", po::value<std::string>(), "database name")
            ("debug", po::value<bool>()->default_value(false), "enable debug mode");
        
        po::options_description cmdline_options;
        cmdline_options.add(generic).add(config);
        
        po::options_description config_file_options;
        config_file_options.add(config);
        
        po::options_description visible("Allowed options");
        visible.add(generic).add(config);
        
        po::variables_map vm;
        
        // 解析命令行
        po::store(po::parse_command_line(argc, argv, cmdline_options), vm);
        po::notify(vm);
        
        // 从配置文件读取
        std::ifstream ifs(vm["config"].as<std::string>().c_str());
        if (!ifs) {
            std::cout << "Can not open config file: " 
                      << vm["config"].as<std::string>() << std::endl;
        } else {
            po::store(po::parse_config_file(ifs, config_file_options), vm);
            po::notify(vm);
        }
        
        if (vm.count("help")) {
            std::cout << visible << std::endl;
            return 0;
        }
        
        // 输出配置
        std::cout << "Database Host: " << vm["database.host"].as<std::string>() << std::endl;
        std::cout << "Database Port: " << vm["database.port"].as<int>() << std::endl;
        std::cout << "Debug Mode: " << (vm["debug"].as<bool>() ? "ON" : "OFF") << std::endl;
        
        if (vm.count("database.name")) {
            std::cout << "Database Name: " << vm["database.name"].as<std::string>() << std::endl;
        }
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 4. 位置选项和高级功能

```cpp
#include <boost/program_options.hpp>
#include <iostream>
#include <vector>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        // 普通选项
        po::options_description desc("Options");
        desc.add_options()
            ("help,h", "produce help message")
            ("verbose,v", "verbose output")
            ("output,o", po::value<std::string>(), "output file");
        
        // 位置选项（位置参数）
        po::positional_options_description p;
        p.add("input-file", -1);  // -1 表示接受任意数量的参数
        
        desc.add_options()
            ("input-file", po::value<std::vector<std::string>>(), "input files");
        
        po::variables_map vm;
        
        // 同时解析命令行和位置选项
        po::parsed_options parsed = po::command_line_parser(argc, argv)
            .options(desc)
            .positional(p)
            .run();
        
        po::store(parsed, vm);
        po::notify(vm);
        
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            std::cout << "Usage: program [options] input-files..." << std::endl;
            return 0;
        }
        
        // 处理位置参数
        if (vm.count("input-file")) {
            std::vector<std::string> inputs = vm["input-file"].as<std::vector<std::string>>();
            std::cout << "Input files: ";
            for (const auto& file : inputs) {
                std::cout << file << " ";
            }
            std::cout << std::endl;
        }
        
        // 处理布尔选项
        if (vm.count("verbose")) {
            std::cout << "Verbose mode enabled" << std::endl;
        }
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 5. 带验证函数的示例

```cpp
#include <boost/program_options.hpp>
#include <iostream>
#include <functional>

namespace po = boost::program_options;

// 验证函数
void validate_port(const std::string& value) {
    int port = std::stoi(value);
    if (port < 1 || port > 65535) {
        throw po::validation_error(po::validation_error::invalid_option_value, 
                                   "port", value);
    }
}

int main(int argc, char* argv[]) {
    try {
        po::options_description desc("Options");
        desc.add_options()
            ("help,h", "produce help message")
            ("port,p", 
             po::value<int>()->default_value(8080)->notifier(
                 [](int port) {
                     if (port < 1 || port > 65535) {
                         throw std::runtime_error("Port must be between 1 and 65535");
                     }
                 }), 
             "port number (1-65535)")
            ("level", 
             po::value<std::string>()->default_value("info")->notifier(
                 [](const std::string& level) {
                     if (level != "debug" && level != "info" && 
                         level != "warning" && level != "error") {
                         throw std::runtime_error("Invalid log level");
                     }
                 }), 
             "log level (debug, info, warning, error)");
        
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);
        
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
        
        std::cout << "Port: " << vm["port"].as<int>() << std::endl;
        std::cout << "Log Level: " << vm["level"].as<std::string>() << std::endl;
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 6. 复杂示例 - 多个选项组

```cpp
#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        // 定义不同的选项组
        po::options_description generic("Generic options");
        generic.add_options()
            ("help", "produce help message")
            ("version,v", "print version string");
        
        po::options_description io("I/O options");
        io.add_options()
            ("input-file,i", po::value<std::string>(), "input file")
            ("output-file,o", po::value<std::string>(), "output file")
            ("format,f", po::value<std::string>()->default_value("json"), 
             "output format (json, xml, csv)");
        
        po::options_description processing("Processing options");
        processing.add_options()
            ("threads,t", po::value<int>()->default_value(1), 
             "number of threads to use")
            ("buffer-size,b", po::value<int>()->default_value(1024), 
             "buffer size in KB")
            ("optimize", po::value<bool>()->default_value(true), 
             "enable optimization");
        
        // 组合所有选项用于解析
        po::options_description all_options;
        all_options.add(generic).add(io).add(processing);
        
        // 仅显示有用的选项给用户
        po::options_description visible_options;
        visible_options.add(generic).add(io).add(processing);
        
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, all_options), vm);
        po::notify(vm);
        
        // 处理帮助选项
        if (vm.count("help")) {
            std::cout << visible_options << std::endl;
            return 0;
        }
        
        if (vm.count("version")) {
            std::cout << "MyApp version 1.0" << std::endl;
            return 0;
        }
        
        // 输出所有设置
        std::cout << "=== Configuration ===" << std::endl;
        
        if (vm.count("input-file")) {
            std::cout << "Input file: " << vm["input-file"].as<std::string>() << std::endl;
        }
        
        if (vm.count("output-file")) {
            std::cout << "Output file: " << vm["output-file"].as<std::string>() << std::endl;
        }
        
        std::cout << "Format: " << vm["format"].as<std::string>() << std::endl;
        std::cout << "Threads: " << vm["threads"].as<int>() << std::endl;
        std::cout << "Buffer size: " << vm["buffer-size"].as<int>() << " KB" << std::endl;
        std::cout << "Optimization: " << (vm["optimize"].as<bool>() ? "ON" : "OFF") << std::endl;
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 编译示例

使用以下命令编译任何一个示例：

```bash
g++ -o program program.cpp -lboost_program_options
```

或者使用 CMake：

```cmake
find_package(Boost REQUIRED COMPONENTS program_options)
target_link_libraries(your_target Boost::program_options)
```

## 常用选项类型

1. **`po::value<std::string>()`** - 字符串值
2. **`po::value<int>()`** - 整数值
3. **`po::value<double>()`** - 浮点数值
4. **`po::value<bool>()`** - 布尔值
5. **`po::value<std::vector<std::string>>()`** - 字符串向量
6. **`po::value<std::string>()->default_value("default")`** - 带默认值
7. **`po::value<int>()->notifier(func)`** - 带验证函数

这些示例涵盖了 Boost.Program_options 的主要用法，可以根据具体需求进行组合和扩展。