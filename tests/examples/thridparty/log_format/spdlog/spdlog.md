### spdlog 详细使用指南
spdlog 是一个高性能的 C++ 日志库，支持多线程、异步日志和多种输出目标。以下是涵盖基础到高级的完整示例：

---

#### **1. 基础使用**
```cpp
#include <spdlog/spdlog.h>

int main() {
    // 控制台日志
    spdlog::info("Welcome to spdlog!");  // 默认输出到控制台
    spdlog::error("Something went wrong: {}", 404);
    
    // 设置日志级别
    spdlog::set_level(spdlog::level::debug);
    spdlog::debug("Debug message visible now");
    
    // 格式化支持
    spdlog::warn("Float: {:.2f}, Hex: 0x{:x}", 3.14159, 255);
    
    return 0;
}
/* 输出:
[2023-10-05 14:30:45] [info] Welcome to spdlog!
[2023-10-05 14:30:45] [error] Something went wrong: 404
[2023-10-05 14:30:45] [debug] Debug message visible now
[2023-10-05 14:30:45] [warning] Float: 3.14, Hex: 0xff
*/
```

---

#### **2. 文件日志**
**基本文件日志**
```cpp
#include <spdlog/sinks/basic_file_sink.h>

int main() {
    // 创建文件日志器
    auto file_logger = spdlog::basic_logger_mt("file_logger", "logs/basic.log");
    spdlog::set_default_logger(file_logger);
    
    // 日志内容
    for (int i = 0; i < 100; ++i) {
        spdlog::info("Log entry {}", i);
    }
    
    // 手动刷新
    spdlog::shutdown();
    return 0;
}
```

**滚动日志文件**
```cpp
#include <spdlog/sinks/rotating_file_sink.h>

int main() {
    // 创建滚动日志器 (5MB x 3 files)
    auto logger = spdlog::rotating_logger_mt("rotating_logger", 
                                            "logs/rotating.log", 
                                            1024 * 1024 * 5, 
                                            3);
    
    // 设置日志格式
    logger->set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%l] [thread %t] %v");
    
    // 记录不同级别日志
    logger->trace("Trace message");
    logger->debug("Debug details");
    logger->info("Application started");
    logger->warn("Low disk space");
    logger->error("File not found");
    logger->critical("System crash");
    
    return 0;
}
```

---

#### **3. 高级功能**
**异步日志**
```cpp
#include <spdlog/async.h>

int main() {
    // 创建异步日志器 (队列大小8192，1个后台线程)
    spdlog::init_thread_pool(8192, 1);
    auto async_file = spdlog::basic_logger_mt<spdlog::async_factory>(
        "async_logger", "logs/async.log");
    
    // 性能测试
    for (int i = 0; i < 100000; ++i) {
        async_file->info("Async log #{}", i);
    }
    
    spdlog::shutdown();
    return 0;
}
```

**多日志器组合**
```cpp
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/sinks/syslog_sink.h>

int main() {
    // 创建多个sink
    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    auto file_sink = std::make_shared<spdlog::sinks::rotating_file_sink_mt>(
        "logs/multi.log", 1024 * 1024 * 5, 3);
    
    // 创建组合日志器
    std::vector<spdlog::sink_ptr> sinks{console_sink, file_sink};
    auto combined_logger = std::make_shared<spdlog::logger>("main", sinks.begin(), sinks.end());
    
    // 设置不同sink的级别
    console_sink->set_level(spdlog::level::debug);
    file_sink->set_level(spdlog::level::info);
    
    // 使用日志器
    combined_logger->info("This goes to both console and file");
    combined_logger->debug("This only to console");
    
    return 0;
}
```

**自定义日志格式**
```cpp
int main() {
    auto logger = spdlog::stdout_color_mt("custom_format");
    
    // 设置详细格式
    logger->set_pattern("[%Y-%m-%d %T.%e] [%^%l%$] [%s:%#] [%!] %v");
    
    // 特殊格式变量:
    // %^ - 开始颜色范围
    // %$ - 结束颜色范围
    // %s - 源文件名
    // %# - 行号
    // %! - 函数名
    
    logger->info("Formatted message with source location");
    
    return 0;
}
/* 输出:
[2023-10-05 14:35:22.123] [info] [main.cpp:15] [main] Formatted message...
*/
```

---

#### **4. 特殊日志目标**
**系统日志 (syslog)**
```cpp
#include <spdlog/sinks/syslog_sink.h>

int main() {
    auto syslog_logger = spdlog::syslog_logger_mt("syslog", "myapp", LOG_PID);
    syslog_logger->warn("System warning from myapp");
    return 0;
}
```

**Windows 事件日志**
```cpp
#ifdef _WIN32
#include <spdlog/sinks/win_eventlog_sink.h>

int main() {
    auto eventlog_logger = spdlog::win_eventlog_logger_mt("eventlog", "MyApp");
    eventlog_logger->critical("Critical system error");
    return 0;
}
#endif
```

**TCP 日志服务器**
```cpp
#include <spdlog/sinks/tcp_sink.h>

int main() {
    // 日志发送到TCP服务器
    auto tcp_logger = spdlog::tcp_logger_mt("tcp_logger", "127.0.0.1", 8080);
    tcp_logger->info("Log message sent via TCP");
    return 0;
}
```

---

#### **5. 性能优化**
**批量日志**
```cpp
int main() {
    auto logger = spdlog::basic_logger_mt("perf_logger", "logs/perf.log");
    
    // 性能关键区域使用trace
    SPDLOG_LOGGER_TRACE(logger, "Entering critical section");
    
    // 批量日志处理
    for (int i = 0; i < 1000; ++i) {
        logger->info("Bulk message {}", i);
    }
    
    // 手动刷新
    logger->flush();
    
    SPDLOG_LOGGER_TRACE(logger, "Exiting critical section");
    return 0;
}
```

**宏优化**
```cpp
// 在头文件中定义
#define LOG_TRACE(...) SPDLOG_LOGGER_TRACE(logger, __VA_ARGS__)
#define LOG_DEBUG(...) SPDLOG_LOGGER_DEBUG(logger, __VA_ARGS__)

// 在代码中使用
void process_data() {
    LOG_TRACE("Processing started");
    // ...
    LOG_DEBUG("Data processed: size={}", data.size());
}
```

---

#### **6. 编译与安装**
**安装方法**:
```bash
# 方法1: 包管理器安装
sudo apt install libspdlog-dev  # Ubuntu
vcpkg install spdlog           # Windows vcpkg

# 方法2: 源码安装
git clone https://github.com/gabime/spdlog.git
cd spdlog
mkdir build && cd build
cmake -DSPDLOG_BUILD_EXAMPLE=OFF ..
make -j4
sudo make install
```

**CMake 集成**:
```cmake
cmake_minimum_required(VERSION 3.10)
project(SpdlogExample)

# 方法1: 查找包
find_package(spdlog REQUIRED)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE spdlog::spdlog)

# 方法2: 直接包含头文件
add_executable(app main.cpp)
target_compile_definitions(app PRIVATE SPDLOG_HEADER_ONLY)
target_include_directories(app PRIVATE path/to/spdlog/include)
```

**编译选项**:  
| 选项 | 描述 |
|------|------|
| `SPDLOG_HEADER_ONLY` | 仅头文件模式 |
| `SPDLOG_COMPILED_LIB` | 编译为静态库 |
| `SPDLOG_FMT_EXTERNAL` | 使用外部fmt库 |
| `SPDLOG_NO_EXCEPTIONS` | 禁用异常 |

---

#### **7. 高级配置**
**日志刷新策略**
```cpp
int main() {
    auto logger = spdlog::basic_logger_mt("autoflush", "logs/autoflush.log");
    
    // 设置自动刷新级别
    logger->flush_on(spdlog::level::warn);  // 遇到warn及以上级别时刷新
    
    // 定时刷新
    spdlog::flush_every(std::chrono::seconds(5));  // 每5秒刷新所有日志器
    
    return 0;
}
```

**日志过滤**
```cpp
int main() {
    auto logger = spdlog::stdout_color_mt("filtered");
    
    // 添加过滤器
    logger->set_filter([](const spdlog::details::log_msg& msg) {
        // 过滤包含"password"的日志
        if (msg.payload.find("password") != std::string::npos) {
            return false;
        }
        return true;
    });
    
    logger->info("Sensitive data: password=12345");  // 不会输出
    return 0;
}
```

**信号处理**
```cpp
#include <spdlog/sinks/ansicolor_sink.h>
#include <csignal>

void signal_handler(int signal) {
    auto console = spdlog::get("console");
    console->critical("Received signal {}", signal);
    spdlog::shutdown();
    exit(1);
}

int main() {
    auto console = spdlog::stdout_color_mt("console");
    
    // 注册信号处理
    signal(SIGSEGV, signal_handler);
    signal(SIGABRT, signal_handler);
    
    // 模拟崩溃
    int* ptr = nullptr;
    *ptr = 42;  // 触发SIGSEGV
    
    return 0;
}
```

---

#### **关键特性总结**
| 功能 | 类/方法 |
|------|---------|
| **基础日志** | `spdlog::info()`, `spdlog::error()` |
| **日志器创建** | `spdlog::basic_logger_mt()`, `spdlog::stdout_color_mt()` |
| **异步日志** | `spdlog::init_thread_pool()`, `async_factory` |
| **滚动日志** | `rotating_file_sink_mt` |
| **多sink组合** | 多个`sink_ptr`组合 |
| **格式定制** | `set_pattern()` 支持丰富格式变量 |
| **性能优化** | 宏`SPDLOG_LOGGER_TRACE`, 批量日志 |
| **特殊目标** | `syslog_sink`, `win_eventlog_sink`, `tcp_sink` |
| **刷新策略** | `flush_on()`, `flush_every()` |
| **信号安全** | 信号处理中安全记录日志 |

---

#### **最佳实践**
1. **生产环境配置**
```cpp
auto create_prod_logger() {
    // 异步日志器
    auto logger = spdlog::create_async<spdlog::sinks::rotating_file_sink_mt>(
        "prod_logger", "logs/prod.log", 1024 * 1024 * 100, 5);
    
    // 生产环境配置
    logger->set_level(spdlog::level::info);
    logger->set_pattern("[%Y-%m-%d %T.%e] [%l] [%s:%#] %v");
    logger->flush_on(spdlog::level::err);
    
    return logger;
}
```

2. **日志级别动态调整**
```cpp
// 通过外部信号调整日志级别
void handle_usr1(int) {
    auto level = spdlog::get_level() == spdlog::level::debug ? 
                 spdlog::level::info : spdlog::level::debug;
    spdlog::set_level(level);
    spdlog::info("Log level changed to {}", spdlog::level::to_string_view(level));
}

int main() {
    signal(SIGUSR1, handle_usr1);
    // ...
}
```

3. **异常安全日志**
```cpp
void risky_operation() {
    SPDLOG_TRY {
        // 可能抛出异常的操作
        throw std::runtime_error("Operation failed");
    } 
    SPDLOG_CATCH(std::exception& e) {
        spdlog::error("Exception: {}", e.what());
    }
}
```

4. **资源监控**
```cpp
// 定期记录系统状态
void log_system_stats() {
    static auto stats_logger = spdlog::basic_logger_mt("stats", "logs/stats.log");
    
    while (true) {
        auto mem_usage = get_memory_usage();
        auto cpu_load = get_cpu_load();
        
        stats_logger->info("Memory: {}%, CPU: {}%", mem_usage, cpu_load);
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }
}
```

spdlog 是 C++ 社区中最受欢迎的日志库之一，其设计兼顾了高性能和易用性。完整文档见 [spdlog GitHub Wiki](https://github.com/gabime/spdlog/wiki)。
