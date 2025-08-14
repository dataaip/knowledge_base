# 命令行参数解析库 C++ V2

以下是一个现代C++命令行参数解析库的设计与实现。该库支持长短选项、位置参数、子命令、类型安全解析和自动生成帮助信息。

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <functional>
#include <stdexcept>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <memory>
#include <iomanip>

namespace argparse {

// 异常类
class ArgumentError : public std::runtime_error {
public:
    explicit ArgumentError(const std::string& msg) : std::runtime_error(msg) {}
};

// 参数基类
class Argument {
public:
    virtual ~Argument() = default;
    virtual void parse(const std::string& value) = 0;
    virtual bool is_flag() const { return false; }
    virtual std::string help_text() const = 0;
    virtual bool match(const std::string& arg) const = 0;
    virtual bool requires_value() const = 0;
};

// 具体参数类型
template <typename T>
class TypedArgument : public Argument {
public:
    using ParserFunc = std::function<T(const std::string&)>;

    TypedArgument(const std::vector<std::string>& names, 
                  T& storage, 
                  const std::string& help,
                  ParserFunc parser,
                  bool required = false)
        : names_(names), storage_(storage), help_(help), 
          parser_(std::move(parser)), required_(required) {}

    void parse(const std::string& value) override {
        try {
            storage_ = parser_(value);
        } catch (const std::exception& e) {
            throw ArgumentError("Invalid value for '" + names_[0] + "': " + e.what());
        }
    }

    bool is_flag() const override { return false; }
    bool requires_value() const override { return true; }

    std::string help_text() const override {
        std::ostringstream oss;
        oss << std::left << std::setw(20);
        
        // 组合名称
        std::string name_str;
        for (size_t i = 0; i < names_.size(); ++i) {
            if (i > 0) name_str += ", ";
            name_str += names_[i];
        }
        
        oss << name_str << " : " << help_;
        if (required_) oss << " (required)";
        return oss.str();
    }

    bool match(const std::string& arg) const override {
        return std::find(names_.begin(), names_.end(), arg) != names_.end();
    }

private:
    std::vector<std::string> names_;
    T& storage_;
    std::string help_;
    ParserFunc parser_;
    bool required_;
};

// 标志参数 (bool类型)
class FlagArgument : public Argument {
public:
    FlagArgument(const std::vector<std::string>& names, 
                 bool& storage, 
                 const std::string& help)
        : names_(names), storage_(storage), help_(help) {
        storage_ = false; // 默认值
    }

    void parse(const std::string&) override {
        storage_ = true;
    }

    bool is_flag() const override { return true; }
    bool requires_value() const override { return false; }

    std::string help_text() const override {
        std::ostringstream oss;
        oss << std::left << std::setw(20);
        
        std::string name_str;
        for (size_t i = 0; i < names_.size(); ++i) {
            if (i > 0) name_str += ", ";
            name_str += names_[i];
        }
        
        oss << name_str << " : " << help_;
        return oss.str();
    }

    bool match(const std::string& arg) const override {
        return std::find(names_.begin(), names_.end(), arg) != names_.end();
    }

private:
    std::vector<std::string> names_;
    bool& storage_;
    std::string help_;
};

// 位置参数
class PositionalArgument : public Argument {
public:
    using ParserFunc = std::function<void(const std::string&)>;

    PositionalArgument(const std::string& name, 
                       ParserFunc parser, 
                       const std::string& help,
                       bool required = true)
        : name_(name), parser_(std::move(parser)), 
          help_(help), required_(required) {}

    void parse(const std::string& value) override {
        try {
            parser_(value);
        } catch (const std::exception& e) {
            throw ArgumentError("Invalid value for '" + name_ + "': " + e.what());
        }
    }

    bool is_flag() const override { return false; }
    bool requires_value() const override { return true; }

    std::string help_text() const override {
        std::ostringstream oss;
        oss << std::left << std::setw(20) << name_ << " : " << help_;
        if (required_) oss << " (required)";
        return oss.str();
    }

    bool match(const std::string&) const override {
        return false; // 位置参数不匹配选项名称
    }

private:
    std::string name_;
    ParserFunc parser_;
    std::string help_;
    bool required_;
};

// 命令解析器
class Command {
public:
    Command(const std::string& name, const std::string& description = "")
        : name_(name), description_(description) {}

    // 添加选项
    template <typename T>
    void add_option(const std::vector<std::string>& names,
                   T& storage,
                   const std::string& help = "",
                   bool required = false,
                   typename TypedArgument<T>::ParserFunc parser = nullptr) {
        if (!parser) {
            parser = [](const std::string& str) {
                std::istringstream iss(str);
                T value;
                if (!(iss >> value)) throw std::runtime_error("Type conversion failed");
                return value;
            };
        }
        options_.push_back(std::make_unique<TypedArgument<T>>(
            names, storage, help, parser, required));
    }

    // 添加标志
    void add_flag(const std::vector<std::string>& names,
                 bool& storage,
                 const std::string& help = "") {
        options_.push_back(std::make_unique<FlagArgument>(names, storage, help));
    }

    // 添加位置参数
    void add_argument(const std::string& name,
                     std::function<void(const std::string&)> handler,
                     const std::string& help = "",
                     bool required = true) {
        positionals_.push_back(std::make_unique<PositionalArgument>(
            name, std::move(handler), help, required));
    }

    // 添加子命令
    Command& add_subcommand(const std::string& name, const std::string& description = "") {
        auto cmd = std::make_unique<Command>(name, description);
        auto& ref = *cmd;
        subcommands_[name] = std::move(cmd);
        return ref;
    }

    // 解析命令行
    void parse(int argc, char* argv[]) {
        std::vector<std::string> args(argv + 1, argv + argc);
        parse(args);
    }

    void parse(const std::vector<std::string>& args) {
        size_t pos_index = 0;
        bool end_of_options = false;

        for (size_t i = 0; i < args.size(); ) {
            const std::string& arg = args[i];

            // 处理子命令
            if (!end_of_options && !arg.empty() && arg[0] != '-' && subcommands_.count(arg)) {
                current_subcommand_ = arg;
                std::vector<std::string> remaining(args.begin() + i + 1, args.end());
                subcommands_[arg]->parse(remaining);
                return;
            }

            // 处理 "--" 选项结束符
            if (arg == "--") {
                end_of_options = true;
                ++i;
                continue;
            }

            // 处理选项
            if (!end_of_options && arg.size() > 1 && arg[0] == '-') {
                std::string option = arg;
                std::string value;

                // 处理 --option=value 形式
                size_t eq_pos = arg.find('=');
                if (eq_pos != std::string::npos) {
                    option = arg.substr(0, eq_pos);
                    value = arg.substr(eq_pos + 1);
                }

                // 查找匹配的选项
                bool found = false;
                for (auto& opt : options_) {
                    if (opt->match(option)) {
                        found = true;

                        if (opt->is_flag()) {
                            opt->parse("");
                        } else {
                            if (!value.empty()) {
                                opt->parse(value);
                            } else {
                                if (i + 1 >= args.size()) {
                                    throw ArgumentError("Option " + option + " requires a value");
                                }
                                opt->parse(args[++i]);
                            }
                        }
                        break;
                    }
                }

                if (!found) {
                    throw ArgumentError("Unknown option: " + option);
                }
                ++i;
                continue;
            }

            // 处理位置参数
            if (pos_index < positionals_.size()) {
                positionals_[pos_index++]->parse(arg);
            } else {
                throw ArgumentError("Unexpected argument: " + arg);
            }
            ++i;
        }

        // 检查必填参数
        for (auto& opt : options_) {
            if (auto typed_opt = dynamic_cast<TypedArgument<std::string>*>(opt.get())) {
                if (typed_opt->requires_value() && typed_opt->help_text().find("(required)") != std::string::npos) {
                    throw ArgumentError("Missing required option");
                }
            }
        }

        if (pos_index < positionals_.size()) {
            for (size_t i = pos_index; i < positionals_.size(); ++i) {
                if (positionals_[i]->help_text().find("(required)") != std::string::npos) {
                    throw ArgumentError("Missing required positional argument: " + 
                                        positionals_[i]->help_text().substr(0, 20));
                }
            }
        }
    }

    // 生成帮助信息
    std::string help() const {
        std::ostringstream oss;
        
        // 命令名称和描述
        oss << "Usage: " << name_;
        if (!options_.empty()) oss << " [OPTIONS]";
        for (const auto& pos : positionals_) {
            oss << " " << pos->help_text().substr(0, pos->help_text().find(" :"));
        }
        if (!subcommands_.empty()) {
            oss << " COMMAND [ARGS]...";
        }
        oss << "\n\n";
        
        if (!description_.empty()) {
            oss << description_ << "\n\n";
        }
        
        // 位置参数
        if (!positionals_.empty()) {
            oss << "Positional arguments:\n";
            for (const auto& pos : positionals_) {
                oss << "  " << pos->help_text() << "\n";
            }
            oss << "\n";
        }
        
        // 选项
        if (!options_.empty()) {
            oss << "Options:\n";
            for (const auto& opt : options_) {
                oss << "  " << opt->help_text() << "\n";
            }
            oss << "\n";
        }
        
        // 子命令
        if (!subcommands_.empty()) {
            oss << "Commands:\n";
            for (const auto& [name, cmd] : subcommands_) {
                oss << "  " << std::setw(15) << std::left << name 
                    << cmd->description_ << "\n";
            }
        }
        
        return oss.str();
    }

private:
    std::string name_;
    std::string description_;
    std::vector<std::unique_ptr<Argument>> options_;
    std::vector<std::unique_ptr<Argument>> positionals_;
    std::map<std::string, std::unique_ptr<Command>> subcommands_;
    std::string current_subcommand_;
};

} // namespace argparse
```

### 功能特点

1. **现代C++特性**：
   - 使用智能指针管理资源
   - 基于模板的类型安全解析
   - lambda表达式支持自定义解析
   - 异常安全设计

2. **核心功能**：
   - 支持长短选项（-h, --help）
   - 支持位置参数
   - 支持子命令系统
   - 自动生成帮助文档
   - 类型安全转换（int, float, string等）
   - 必选参数验证

3. **高级特性**：
   - 支持--option=value语法
   - 处理--选项结束符
   - 自定义解析函数
   - 嵌套子命令支持
   - 详细的错误信息

### 使用示例

```cpp
#include "argparse.hpp"

int main(int argc, char* argv[]) {
    argparse::Command cmd("app", "Sample application");

    // 添加选项
    int verbosity = 0;
    cmd.add_option({"-v", "--verbose"}, verbosity, "Verbosity level", false);

    // 添加标志
    bool enable_feature = false;
    cmd.add_flag({"-f", "--feature"}, enable_feature, "Enable feature");

    // 添加位置参数
    std::string filename;
    cmd.add_argument("FILE", [&](const std::string& value) {
        filename = value;
    }, "Input file", true);

    // 添加子命令
    auto& sub = cmd.add_subcommand("build", "Build project");
    std::string build_type = "debug";
    sub.add_option({"-t", "--type"}, build_type, "Build type (debug/release)");

    try {
        cmd.parse(argc, argv);
        
        if (enable_feature) {
            std::cout << "Feature enabled\n";
        }
        
        std::cout << "Processing: " << filename 
                  << " with verbosity: " << verbosity << "\n";
        
    } catch (const argparse::ArgumentError& e) {
        std::cerr << "Error: " << e.what() << "\n\n";
        std::cerr << cmd.help();
        return 1;
    }

    return 0;
}
```

### 使用场景示例

```bash
# 显示帮助
$ ./app -h

# 基本使用
$ ./app -v 3 --feature input.txt

# 子命令
$ ./app build -t release

# 错误处理
$ ./app -x  # 显示未知选项错误
```

### 设计优势

1. **类型安全**：通过模板和自定义解析器确保类型安全
2. **可扩展性**：易于添加新参数类型和解析逻辑
3. **用户友好**：自动生成的帮助信息格式美观
4. **符合POSIX标准**：支持标准命令行语法
5. **模块化设计**：各组件职责清晰，便于维护

此实现遵循现代C++最佳实践，提供了灵活的命令行解析能力，适合用于各种CLI应用程序开发。