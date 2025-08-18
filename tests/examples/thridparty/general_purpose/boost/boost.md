### Boost.Program_options 详细使用指南
Boost.Program_options 是 Boost 库中强大的命令行和配置文件解析工具。以下是涵盖基础到高级用法的完整示例：

---

#### **1. 基础示例**
解析简单选项和标志：
```cpp
#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    po::options_description desc("Basic Options");
    desc.add_options()
        ("help,h", "Show help message")
        ("file,f", po::value<std::string>(), "Input file")
        ("verbose,v", po::bool_switch(), "Enable verbose mode");

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        std::cout << desc << "\n";
        return 0;
    }

    if (vm.count("file")) {
        std::cout << "Processing: " << vm["file"].as<std::string>() << "\n";
    }
    
    if (vm["verbose"].as<bool>()) {
        std::cout << "Verbose mode ON\n";
    }
    
    return 0;
}
```
**运行示例**:
```bash
./app -f data.txt --verbose
```

---

#### **2. 默认值与验证**
设置默认值和范围检查：
```cpp
po::options_description desc("Validation");
int port;
double ratio;

desc.add_options()
    ("port,p", po::value<int>(&port)->default_value(8080)
        ->notifier([](int value) {
            if (value < 1 || value > 65535)
                throw po::validation_error("Port must be 1-65535");
        }),
    ("ratio,r", po::value<double>(&ratio)->default_value(0.5)
        ->notifier([](double value) {
            if (value < 0.0 || value > 1.0)
                throw po::validation_error("Ratio must be 0.0-1.0");
        }));

// 解析代码同上...
```

---

#### **3. 配置文件支持**
从 INI 文件读取配置：
```cpp
po::options_description config("Config");
std::string log_path;
int threads;

config.add_options()
    ("log", po::value<std::string>(&log_path), "Log file path")
    ("threads", po::value<int>(&threads), "Worker threads");

po::variables_map vm;
po::store(po::parse_command_line(argc, argv, desc), vm);

// 从配置文件加载
if (vm.count("config")) {
    std::ifstream config_file(vm["config"].as<std::string>());
    po::store(po::parse_config_file(config_file, config), vm);
}
po::notify(vm);
```
**配置文件 `settings.ini`**:
```ini
log=/var/log/app.log
threads=8
```

---

#### **4. 位置参数与子命令**
处理位置参数和复杂命令结构：
```cpp
po::options_description generic("Generic");
generic.add_options()("help", "Show help");

po::options_description cmd("Commands");
po::positional_options_description p;
p.add("command", 1).add("subargs", -1);  // 位置参数

cmd.add_options()
    ("command", po::value<std::string>(), "Command: build|run|test")
    ("subargs", po::value<std::vector<std::string>>(), "Arguments for command");

po::variables_map vm;
po::parsed_options parsed = po::command_line_parser(argc, argv)
    .options(generic).positional(p).allow_unregistered().run();
po::store(parsed, vm);
po::notify(vm);

if (vm.count("command")) {
    std::string cmd = vm["command"].as<std::string>();
    if (cmd == "build") {
        // 处理构建子命令
    }
}
```
**运行示例**:
```bash
./app build --optimize=high
```

---

#### **5. 自定义验证函数**
高级验证逻辑：
```cpp
struct EmailValidator {
    void operator()(const std::string& value) const {
        static std::regex pattern(R"(\w+@\w+\.\w+)");
        if (!std::regex_match(value, pattern)) {
            throw po::validation_error(po::validation_error::invalid_option_value, "email");
        }
    }
};

// 在选项中使用
desc.add_options()
    ("email,e", 
     po::value<std::string>()
        ->required()
        ->notifier(EmailValidator()), 
     "User email");
```

---

#### **6. 复杂选项组**
分组管理相关选项：
```cpp
po::options_description network("Network Options");
network.add_options()
    ("ip", po::value<std::string>()->default_value("127.0.0.1"), "Server IP")
    ("port", po::value<int>()->default_value(8080), "Server port");

po::options_description logging("Logging Options");
logging.add_options()
    ("log-level", po::value<std::string>()->default_value("info"), "Log level")
    ("log-file", po::value<std::string>(), "Log file path");

po::options_description all("All Options");
all.add(network).add(logging).add_options()
    ("help", "Show help");

// 解析时自动分组显示帮助信息
std::cout << all << "\n";
```

---

#### **7. 常用选项类型**
支持多种数据类型：
```cpp
desc.add_options()
    // 基础类型
    ("count", po::value<int>(), "Integer count")
    ("ratio", po::value<double>(), "Double ratio")
    ("enable", po::bool_switch(), "Enable feature")
    ("path", po::value<std::string>(), "File path")
    
    // 容器类型
    ("ids", po::value<std::vector<int>>()->multitoken(), "ID list")
    
    // 枚举类型
    ("mode", po::value<std::string>()
        ->default_value("fast")
        ->notifier([](const std::string& s) {
            if (s != "fast" && s != "safe")
                throw std::runtime_error("Invalid mode");
        }), 
     "Operation mode");
```

---

#### **8. 编译与安装**
**安装 Boost**:
```bash
# Ubuntu
sudo apt-get install libboost-program-options-dev

# 源码编译
wget https://boostorg.jfrog.io/artifactory/main/release/1.84.0/source/boost_1_84_0.tar.gz
tar -xzf boost_1_84_0.tar.gz
cd boost_1_84_0
./bootstrap.sh --prefix=/usr/local
./b2 install
```

**CMake 集成**:
```cmake
cmake_minimum_required(VERSION 3.10)
project(BoostExample)

find_package(Boost 1.84.0 REQUIRED COMPONENTS program_options)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE Boost::program_options)
```

**编译运行**:
```bash
mkdir build && cd build
cmake ..
make
./app --help
```

---

#### **高级特性示例**
**1. 响应文件支持**
```cpp
// 支持 @file 语法
po::store(po::parse_command_line(argc, argv, desc)
          .style(po::command_line_style::allow_long 
                 | po::command_line_style::long_allow_adjacent
                 | po::command_line_style::allow_slash_for_short)
          .extra_parser(po::ext::response_file_parser()), 
          vm);
```

**2. 环境变量集成**
```cpp
// 从环境变量读取
po::options_description env;
env.add_options()
    ("home", po::value<std::string>()->default_value(getenv("HOME")), "Home dir");

// 合并命令行和环境变量
po::variables_map vm;
po::store(po::parse_environment(env, "APP_"), vm);  // 读取APP_HOME等
po::store(po::parse_command_line(argc, argv, desc), vm);
```

**3. 自定义选项语法**
```cpp
// 支持多种语法风格
po::command_line_parser parser(argc, argv);
parser.options(desc)
      .style(po::command_line_style::unix_style 
             | po::command_line_style::allow_slash_for_short);
```

---

#### **关键特性总结**
| 功能               | 方法/类                     |
|--------------------|----------------------------|
| **选项定义**       | `po::options_description`  |
| **参数存储**       | `po::variables_map`        |
| **解析命令**       | `parse_command_line()`     |
| **解析文件**       | `parse_config_file()`      |
| **位置参数**       | `positional_options_description` |
| **验证函数**       | `notifier()`               |
| **多值选项**       | `multitoken()`             |
| **响应文件**       | `response_file_parser()`   |
| **环境变量**       | `parse_environment()`      |

---

#### **最佳实践**
1. **错误处理**
```cpp
try {
    po::notify(vm);
} catch (const po::error& e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
}
```

2. **组合使用配置源**
```cpp
// 优先级: 命令行 > 配置文件 > 环境变量
po::store(po::parse_environment(env, "APP_"), vm);
po::store(po::parse_config_file(config_file, config), vm);
po::store(po::parse_command_line(argc, argv, cli), vm);
po::notify(vm);
```

3. **动态生成帮助**
```cpp
std::cout << "Usage: " << argv[0] << " [options]\n";
std::cout << desc << "\n";
std::cout << "Network Options:\n" << network << "\n";
```

Boost.Program_options 特别适合需要复杂命令行接口和企业级配置管理的项目。完整文档见 [Boost 官方文档](https://www.boost.org/doc/libs/1_84_0/doc/html/program_options.html)。
