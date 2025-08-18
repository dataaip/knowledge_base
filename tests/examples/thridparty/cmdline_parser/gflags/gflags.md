### Google gflags 详细使用指南
gflags 是 Google 开源的命令行参数解析库，支持 C++/Python 等语言。以下是涵盖基础到高级用法的完整示例：

---

#### **1. 基础示例**
声明和解析基本标志：
```cpp
#include <gflags/gflags.h>
#include <iostream>

// 声明标志（通常在头文件中声明）
DECLARE_string(name);
DECLARE_int32(age);

// 定义标志（在实现文件中定义）
DEFINE_string(name, "John", "User name");
DEFINE_int32(age, 30, "User age");

int main(int argc, char* argv[]) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    
    std::cout << "Name: " << FLAGS_name << "\n"
              << "Age: " << FLAGS_age << std::endl;
    
    return 0;
}
```
**运行示例**:
```bash
./app --name="Alice" --age=25
```

---

#### **2. 默认值与验证**
设置范围验证和默认值：
```cpp
#include <gflags/gflags.h>

DEFINE_int32(port, 8080, "Server port");
DEFINE_double(ratio, 0.5, "Sampling ratio");

// 自定义验证函数
static bool ValidatePort(const char* name, int32_t value) {
    if (value > 0 && value < 65536) return true;
    std::cerr << "Invalid port: " << value << " (must be 1-65535)";
    return false;
}
// 注册验证函数
DEFINE_validator(port, &ValidatePort);

int main(int argc, char* argv[]) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    return 0;
}
```

---

#### **3. 配置文件支持**
从文件加载标志值：
```cpp
#include <gflags/gflags.h>
#include <fstream>

DEFINE_string(config, "", "Config file path");

int main(int argc, char* argv[]) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    
    if (!FLAGS_config.empty()) {
        // 从文件加载标志值
        gflags::ReadFromFlagsFile(FLAGS_config, argv[0], true);
    }
    
    return 0;
}
```
**配置文件 `settings.cfg`**:
```ini
--port=9090
--ratio=0.8
```

---

#### **4. 位置参数与高级功能**
处理位置参数和特殊标志：
```cpp
#include <gflags/gflags.h>

DEFINE_string(input, "", "Input file (positional)");

int main(int argc, char* argv[]) {
    // 设置使用说明
    gflags::SetUsageMessage("Usage: ./app [OPTIONS] <input-file>");
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    
    // 处理位置参数
    if (argc > 1) {
        FLAGS_input = argv[1];
    }
    
    std::cout << "Processing: " << FLAGS_input << std::endl;
    return 0;
}
```
**运行示例**:
```bash
./app data.txt
```

---

#### **5. 自定义验证函数**
复杂验证逻辑：
```cpp
#include <gflags/gflags.h>
#include <regex>

DEFINE_string(email, "", "User email");

static bool ValidateEmail(const char* name, const std::string& value) {
    static std::regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    if (std::regex_match(value, pattern)) return true;
    std::cerr << "Invalid email format: " << value;
    return false;
}
DEFINE_validator(email, &ValidateEmail);
```

---

#### **6. 多模块标志管理**
模块化标志声明：
```cpp
// network_flags.h
#pragma once
#include <gflags/gflags.h>

DECLARE_string(server_ip);
DECLARE_int32(server_port);

// network_module.cpp
DEFINE_string(server_ip, "127.0.0.1", "Server IP address");
DEFINE_int32(server_port, 8080, "Server port");

// main.cpp
#include "network_flags.h"
#include "logging_flags.h"  // 其他模块

int main() {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    Connect(FLAGS_server_ip, FLAGS_server_port);
}
```

---

#### **7. 常用标志类型**
支持所有基础类型：
```cpp
#include <gflags/gflags.h>

// 基本类型
DEFINE_bool(verbose, false, "Enable verbose mode");
DEFINE_int32(count, 100, "Item count");
DEFINE_double(ratio, 0.5, "Threshold ratio");
DEFINE_string(path, "/tmp", "Output directory");

// 容器类型
#include <vector>
DEFINE_vector_int32(ids, std::vector<int>(), "ID list");

// 枚举类型
DEFINE_enum(mode, "fast", {"fast", "safe", "debug"}, "Operation mode");
```

---

#### **8. 编译与安装**
**安装 gflags**:
```bash
# Ubuntu
sudo apt-get install libgflags-dev

# 源码编译
git clone https://github.com/gflags/gflags.git
cd gflags
mkdir build && cd build
cmake .. -DBUILD_SHARED_LIBS=ON
make -j4
sudo make install
```

**CMake 集成**:
```cmake
cmake_minimum_required(VERSION 3.10)
project(MyApp)

find_package(gflags REQUIRED)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE gflags)
```

**编译运行**:
```bash
mkdir build && cd build
cmake .. && make
./app --help  # 查看自动生成的帮助信息
```

---

#### **关键特性总结**
| 功能           | 方法/宏                     |
|----------------|----------------------------|
| **标志声明**   | `DECLARE_xxx(flag_name)`   |
| **标志定义**   | `DEFINE_xxx(flag_name, default, help)` |
| **参数解析**   | `ParseCommandLineFlags()`  |
| **验证函数**   | `DEFINE_validator()`       |
| **配置文件**   | `ReadFromFlagsFile()`      |
| **帮助信息**   | `SetUsageMessage()`        |
| **特殊类型**   | `DEFINE_enum()`, `DEFINE_vector_xxx()` |

---

#### **高级技巧**
1. **环境变量支持**
```cpp
// 优先从环境变量读取
DEFINE_string_from_env(db_host, "DB_HOST", "localhost", "Database host");
```

2. **单元测试重置标志**
```cpp
class FlagsTest : public ::testing::Test {
protected:
    void SetUp() override {
        FLAGS_verbose = false;  // 重置标志状态
    }
};
```

3. **自定义帮助输出**
```cpp
gflags::SetVersionString("1.2.3");
gflags::SetUsageMessage("./app [OPTIONS] <input>");
```

gflags 特别适合大型项目，可与 glog 等 Google 库无缝集成。完整文档见 [GitHub Wiki](https://github.com/gflags/gflags/wiki)。
