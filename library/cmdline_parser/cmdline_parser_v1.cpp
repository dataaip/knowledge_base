#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include <memory>
#include <variant>
#include <optional>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <type_traits>
#include <any>

namespace cmdline {

// --- 1. 内部辅助类型 ---

namespace detail {
    // 用于统一存储不同类型的值
    using Value = std::variant<bool, int, float, std::string, std::vector<std::string>>;

    // 类型转换器的前向声明
    template <typename T>
    struct ValueConverter;

    // 通用转换函数
    template <typename T>
    T convert(const std::string& str) {
        return ValueConverter<T>::from_string(str);
    }
}

// --- 2. 异常类 ---

class ParseError : public std::runtime_error {
public:
    explicit ParseError(const std::string& msg) : std::runtime_error("Parse error: " + msg) {}
};

class ArgumentError : public std::runtime_error {
public:
    explicit ArgumentError(const std::string& msg) : std::runtime_error("Argument error: " + msg) {}
};

// --- 3. ParseResult 类 ---

class ParseResult {
public:
    void set_value(const std::string& name, detail::Value value) {
        values_[name] = std::move(value);
    }

    bool has_value(const std::string& name) const {
        return values_.find(name) != values_.end();
    }

    template <typename T>
    T get(const std::string& name) const {
        auto it = values_.find(name);
        if (it == values_.end()) {
            throw std::out_of_range("No value found for argument: " + name);
        }
        try {
            return std::get<T>(it->second);
        } catch (const std::bad_variant_access&) {
            throw std::runtime_error("Type mismatch for argument: " + name);
        }
    }

    const std::unordered_map<std::string, detail::Value>& get_all_values() const {
        return values_;
    }

private:
    std::unordered_map<std::string, detail::Value> values_;
};

// --- 4. Argument 类 ---

class Argument {
public:
    struct Config {
        std::string name;
        std::vector<std::string> flags; // e.g., {"-f", "--file"}
        std::string help;
        bool required = false;
        std::optional<detail::Value> default_value;
        std::string metavar; // 用于帮助信息中的占位符
        std::function<bool(const detail::Value&)> validator;
    };

    explicit Argument(Config config) : config_(std::move(config)) {
        if (config_.flags.empty() && config_.name.empty()) {
            throw ArgumentError("Argument must have a name or flags.");
        }
        if (config_.metavar.empty() && !config_.flags.empty()) {
             config_.metavar = config_.flags.back().substr(config_.flags.back().find_last_of('-') + 1);
             std::transform(config_.metavar.begin(), config_.metavar.end(), config_.metavar.begin(), ::toupper);
        }
    }

    [[nodiscard]] const Config& get_config() const { return config_; }

    // 检查命令行参数是否匹配此 Argument
    bool matches(const std::string& token) const {
        return std::find(config_.flags.begin(), config_.flags.end(), token) != config_.flags.end();
    }

private:
    Config config_;
};

// --- 5. Subparser 类 ---

class Subparser;

// --- 6. ArgumentParser 类 ---

class ArgumentParser {
public:
    explicit ArgumentParser(std::string prog_name = "", std::string description = "")
        : prog_name_(std::move(prog_name)), description_(std::move(description)) {}

    // --- 添加参数 ---
    template <typename T = std::string>
    ArgumentParser& add_argument(const std::vector<std::string>& flags, const std::string& help = "") {
        Argument::Config config;
        config.flags = flags;
        config.help = help;
        config.metavar = flags.empty() ? "" : flags.back().substr(flags.back().find_last_of('-') + 1);
        std::transform(config.metavar.begin(), config.metavar.end(), config.metavar.begin(), ::toupper);

        // 通过特化判断是否为 bool (flag)
        if constexpr (std::is_same_v<T, bool>) {
            config.default_value = false;
        }

        arguments_.emplace_back(std::make_unique<Argument>(config));
        return *this;
    }

    // 重载用于位置参数
    template <typename T = std::string>
    ArgumentParser& add_argument(const std::string& name, const std::string& help = "") {
        Argument::Config config;
        config.name = name;
        config.help = help;
        config.metavar = name;
        arguments_.emplace_back(std::make_unique<Argument>(config));
        return *this;
    }

    // --- 添加子命令 ---
    Subparser& add_subparser(const std::string& name, const std::string& help = "");

    // --- 设置程序信息 ---
    ArgumentParser& prog(const std::string& name) { prog_name_ = name; return *this; }
    ArgumentParser& description(const std::string& desc) { description_ = desc; return *this; }
    ArgumentParser& epilog(const std::string& epi) { epilog_ = epi; return *this; }

    // --- 解析 ---
    ParseResult parse_args(int argc, char* argv[]);

    // --- 帮助 ---
    void print_help(std::ostream& os = std::cout) const;
    [[noreturn]] void print_help_and_exit(int exit_code = 0) const {
        print_help(std::cout);
        std::exit(exit_code);
    }


private:
    std::string prog_name_;
    std::string description_;
    std::string epilog_;
    std::vector<std::unique_ptr<Argument>> arguments_;
    std::unordered_map<std::string, std::unique_ptr<Subparser>> subparsers_;

    void print_usage(std::ostream& os) const;
    friend class Subparser; // 允许 Subparser 访问私有成员以打印自己的帮助
};

// --- 7. Subparser 类 (定义) ---

class Subparser {
public:
    Subparser(ArgumentParser& parent, std::string name, std::string help)
        : parent_(parent), name_(std::move(name)), help_(std::move(help)),
          parser_(name_, "") {
        parser_.epilog_ = parent_.epilog_; // 继承 epilog
    }

    template <typename T = std::string>
    Subparser& add_argument(const std::vector<std::string>& flags, const std::string& help = "") {
        parser_.add_argument<T>(flags, help);
        return *this;
    }

    template <typename T = std::string>
    Subparser& add_argument(const std::string& name, const std::string& help = "") {
        parser_.add_argument<T>(name, help);
        return *this;
    }

    Subparser& description(const std::string& desc) { parser_.description_ = desc; return *this; }

    ArgumentParser& get_parser() { return parser_; }
    const ArgumentParser& get_parser() const { return parser_; }
    const std::string& get_name() const { return name_; }
    const std::string& get_help() const { return help_; }

private:
    ArgumentParser& parent_;
    std::string name_;
    std::string help_;
    ArgumentParser parser_;
};

// ArgumentParser 中 add_subparser 的实现
inline Subparser& ArgumentParser::add_subparser(const std::string& name, const std::string& help) {
    auto subparser = std::make_unique<Subparser>(*this, name, help);
    Subparser* ptr = subparser.get();
    subparsers_[name] = std::move(subparser);
    return *ptr;
}

} // namespace cmdline
```

#### `argparse.cpp`

```cpp
// argparse.cpp
#include "argparse.h"
#include <iomanip>
#include <numeric> // for std::accumulate

namespace cmdline {

namespace detail {
    // --- 默认类型转换器实现 ---
    template<>
    struct ValueConverter<bool> {
        static bool from_string(const std::string& str) {
            if (str == "true" || str == "1" || str.empty()) return true;
            if (str == "false" || str == "0") return false;
            throw std::invalid_argument("Cannot convert '" + str + "' to bool");
        }
    };

    template<>
    struct ValueConverter<int> {
        static int from_string(const std::string& str) {
            try {
                return std::stoi(str);
            } catch (const std::exception&) {
                throw std::invalid_argument("Cannot convert '" + str + "' to int");
            }
        }
    };

    template<>
    struct ValueConverter<float> {
        static float from_string(const std::string& str) {
            try {
                return std::stof(str);
            } catch (const std::exception&) {
                throw std::invalid_argument("Cannot convert '" + str + "' to float");
            }
        }
    };

    template<>
    struct ValueConverter<std::string> {
        static std::string from_string(const std::string& str) {
            return str;
        }
    };

    template<>
    struct ValueConverter<std::vector<std::string>> {
        static std::vector<std::string> from_string(const std::string& str) {
            // For simplicity, we'll just store the string as a single element vector
            // A more complex parser could split on commas, etc.
            return {str};
        }
    };
} // namespace detail

void ArgumentParser::print_usage(std::ostream& os) const {
    os << "Usage: " << (prog_name_.empty() ? "program" : prog_name_);
    if (!arguments_.empty()) {
        os << " [OPTIONS]";
    }
    if (!subparsers_.empty()) {
        os << " COMMAND ...";
    }
    os << "\n";
}

void ArgumentParser::print_help(std::ostream& os) const {
    print_usage(os);
    if (!description_.empty()) {
        os << "\n" << description_ << "\n";
    }

    if (!arguments_.empty()) {
        os << "\nOptions:\n";
        size_t max_width = 0;
        std::vector<std::string> arg_strings;
        for (const auto& arg : arguments_) {
            const auto& config = arg->get_config();
            std::string arg_str;
            if (!config.flags.empty()) {
                arg_str = std::accumulate(config.flags.begin(), config.flags.end(), std::string(""),
                                         [](const std::string& a, const std::string& b) {
                                             return a.empty() ? b : a + ", " + b;
                                         });
            } else {
                arg_str = config.name;
            }
            if (config.default_value.has_value()) {
                arg_str += " (default: " + std::visit([](const auto& v) { return std::to_string(v); }, *config.default_value) + ")";
            }
            arg_strings.push_back(arg_str);
            max_width = std::max(max_width, arg_str.size());
        }
        max_width = std::min(max_width, size_t(30)); // Cap width for aesthetics

        for (size_t i = 0; i < arguments_.size(); ++i) {
            const auto& config = arguments_[i]->get_config();
            os << "  " << std::left << std::setw(max_width + 2) << arg_strings[i];
            if (!config.help.empty()) {
                os << config.help;
            }
            os << "\n";
        }
    }

    if (!subparsers_.empty()) {
        os << "\nCommands:\n";
        size_t max_cmd_width = 0;
        for (const auto& [name, subparser] : subparsers_) {
            max_cmd_width = std::max(max_cmd_width, name.size());
        }
        max_cmd_width = std::min(max_cmd_width, size_t(20));

        for (const auto& [name, subparser] : subparsers_) {
            os << "  " << std::left << std::setw(max_cmd_width + 2) << name << subparser->get_help() << "\n";
        }
    }

    if (!epilog_.empty()) {
        os << "\n" << epilog_ << "\n";
    }
}

ParseResult ArgumentParser::parse_args(int argc, char* argv[]) {
    if (prog_name_.empty() && argc > 0) {
        prog_name_ = argv[0];
    }

    ParseResult result;
    std::vector<std::string> tokens(argv + 1, argv + argc);

    // 检查帮助
    for (const auto& token : tokens) {
        if (token == "-h" || token == "--help") {
            print_help_and_exit(0);
        }
    }

    size_t i = 0;
    std::optional<std::string> chosen_subcommand;

    while (i < tokens.size()) {
        const std::string& token = tokens[i];

        // 检查是否是子命令
        if (subparsers_.find(token) != subparsers_.end()) {
            chosen_subcommand = token;
            // 将剩余参数传递给子命令解析器
            std::vector<char*> sub_argv;
            sub_argv.push_back(argv[0]); // 程序名
            for (size_t j = i + 1; j < tokens.size(); ++j) {
                sub_argv.push_back(const_cast<char*>(tokens[j].c_str()));
            }
            sub_argv.push_back(nullptr);

            try {
                auto sub_result = subparsers_.at(token)->get_parser().parse_args(sub_argv.size() - 1, sub_argv.data());
                // 将子命令的结果存入主结果中
                result.set_value(token, static_cast<int>(0)); // 用一个标记表示子命令被调用
                // 这里可以更复杂地存储子命令的所有结果
                // 为简化，我们只标记哪个子命令被调用
                // 实际应用中，你可能需要一个嵌套的 ParseResult 结构
            } catch (const ParseError& e) {
                std::cerr << prog_name_ << " " << token << ": " << e.what() << "\n";
                subparsers_.at(token)->get_parser().print_help(std::cerr);
                std::exit(1);
            }
            return result; // 解析完成
        }

        bool found = false;
        for (const auto& arg : arguments_) {
            const auto& config = arg->get_config();
            if (arg->matches(token)) {
                detail::Value value;
                if (std::holds_alternative<bool>(value)) {
                    // Flag 类型
                    value = true;
                    result.set_value(config.flags.empty() ? config.name : config.flags[0], value);
                } else {
                    // 需要值的参数
                    if (i + 1 >= tokens.size()) {
                        throw ParseError("Argument " + token + " requires a value.");
                    }
                    i++; // 移动到下一个 token 作为值
                    const std::string& val_str = tokens[i];
                    // 这里需要根据参数定义的类型进行转换
                    // 一个简化的方法是假设所有非-flag 都是字符串
                    // 更好的方法是 Argument 类中存储类型信息
                    // 为简化，我们只处理字符串
                    value = val_str;
                    result.set_value(config.flags.empty() ? config.name : config.flags[0], value);
                }
                found = true;
                break;
            }
        }

        if (!found) {
            // Treat as positional argument or unknown option
            bool pos_found = false;
            for (const auto& arg : arguments_) {
                const auto& config = arg->get_config();
                if (!config.name.empty() && !result.has_value(config.name)) {
                    result.set_value(config.name, detail::convert<std::string>(token));
                    pos_found = true;
                    break;
                }
            }
            if (!pos_found) {
                throw ParseError("Unrecognized argument: " + token);
            }
        }
        i++;
    }

    // Check for missing required arguments
    for (const auto& arg : arguments_) {
        const auto& config = arg->get_config();
        std::string key = config.flags.empty() ? config.name : config.flags[0];
        if (config.required && !result.has_value(key)) {
            throw ParseError("Missing required argument: " + key);
        }
        if (!config.required && config.default_value.has_value() && !result.has_value(key)) {
            result.set_value(key, *config.default_value);
        }
    }

    return result;
}

} // namespace cmdline

int main(int argc, char* argv[]) {
    using namespace cmdline;

    ArgumentParser parser("mytool", "A multi-functional command-line tool.");

    // 添加全局选项
    parser.add_argument<bool>({"-v", "--verbose"}, "Enable verbose output");
    parser.add_argument<std::string>({"-o", "--output"}, "Output file name")->required(true);

    // 添加子命令 "compress"
    auto& compress_cmd = parser.add_subparser("compress", "Compress files");
    compress_cmd.add_argument<std::string>("input_file", "File to compress");
    compress_cmd.add_argument<int>({"-l", "--level"}, "Compression level (1-9)")->default_value = 6;

    // 添加子命令 "extract"
    auto& extract_cmd = parser.add_subparser("extract", "Extract files");
    extract_cmd.add_argument<std::string>("archive", "Archive to extract");

    try {
        auto args = parser.parse_args(argc, argv);

        bool verbose = args.get<bool>("--verbose");
        std::string output = args.get<std::string>("--output");

        std::cout << "Verbose: " << (verbose ? "true" : "false") << "\n";
        std::cout << "Output file: " << output << "\n";

        // 检查调用了哪个子命令
        if (args.has_value("compress")) {
            std::cout << "Executing 'compress' command...\n";
            // 从 compress_cmd 的解析器中获取其参数
            // 注意：当前实现中，子命令的参数没有直接传递回来
            // 在更完整的实现中，ParseResult 会更复杂
            // 这里我们简化处理
        } else if (args.has_value("extract")) {
            std::cout << "Executing 'extract' command...\n";
        } else {
            std::cout << "No subcommand provided.\n";
        }

    } catch (const ParseError& e) {
        std::cerr << e.what() << "\n";
        parser.print_help(std::cerr);
        return 1;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}