#ifndef CMDLINE_PARSER_H
#define CMDLINE_PARSER_H

#include <string>
#include <vector>
#include <map>
#include <functional>
#include <memory>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

namespace cmdline {

// 前向声明
class Option;
class Argument;
class Parser;

// 类型别名
using StringList = std::vector<std::string>;
using Callback = std::function<void(const std::string&)>;
using OptionPtr = std::shared_ptr<Option>;
using ArgumentPtr = std::shared_ptr<Argument>;

// 异常类
class ParseError : public std::runtime_error {
public:
    explicit ParseError(const std::string& msg) : std::runtime_error(msg) {}
};

class ValidationError : public std::runtime_error {
public:
    explicit ValidationError(const std::string& msg) : std::runtime_error(msg) {}
};

// 值类型枚举
enum class ValueType {
    NONE,     // 无值
    OPTIONAL, // 可选值
    REQUIRED  // 必需值
};

// 选项基类
class Option {
public:
    Option(const std::string& name, const std::string& short_name, const std::string& help)
        : name_(name), short_name_(short_name), help_(help), value_type_(ValueType::NONE) {}

    virtual ~Option() = default;

    // 设置值类型
    Option& value(ValueType type) {
        value_type_ = type;
        return *this;
    }

    // 设置默认值
    Option& defaults(const std::string& value) {
        default_value_ = value;
        return *this;
    }

    // 设置回调函数
    Option& callback(const Callback& cb) {
        callback_ = cb;
        return *this;
    }

    // 设置是否必需
    Option& required(bool req = true) {
        required_ = req;
        return *this;
    }

    // 获取属性
    const std::string& name() const { return name_; }
    const std::string& short_name() const { return short_name_; }
    const std::string& help() const { return help_; }
    ValueType value_type() const { return value_type_; }
    const std::string& default_value() const { return default_value_; }
    bool is_required() const { return required_; }
    bool has_value() const { return !value_.empty(); }
    const std::string& value() const { return value_; }

    // 检查是否匹配名称
    bool matches(const std::string& name) const {
        return name == name_ || name == short_name_;
    }

    // 设置值
    void set_value(const std::string& val) {
        value_ = val;
        if (callback_) {
            callback_(val);
        }
    }

    // 验证选项
    void validate() const {
        if (required_ && value_.empty() && default_value_.empty()) {
            throw ValidationError("Required option --" + name_ + " is missing");
        }
    }

    // 重置选项
    void reset() {
        value_.clear();
    }

protected:
    std::string name_;
    std::string short_name_;
    std::string help_;
    ValueType value_type_;
    std::string default_value_;
    std::string value_;
    bool required_ = false;
    Callback callback_;
};

// 参数类
class Argument {
public:
    Argument(const std::string& name, const std::string& help)
        : name_(name), help_(help), required_(false) {}

    // 设置是否必需
    Argument& required(bool req = true) {
        required_ = req;
        return *this;
    }

    // 设置默认值
    Argument& defaults(const std::string& value) {
        default_value_ = value;
        return *this;
    }

    // 设置回调函数
    Argument& callback(const Callback& cb) {
        callback_ = cb;
        return *this;
    }

    // 获取属性
    const std::string& name() const { return name_; }
    const std::string& help() const { return help_; }
    bool is_required() const { return required_; }
    const std::string& default_value() const { return default_value_; }
    const std::string& value() const { return value_; }
    bool has_value() const { return !value_.empty(); }

    // 设置值
    void set_value(const std::string& val) {
        value_ = val;
        if (callback_) {
            callback_(val);
        }
    }

    // 验证参数
    void validate() const {
        if (required_ && value_.empty() && default_value_.empty()) {
            throw ValidationError("Required argument " + name_ + " is missing");
        }
    }

    // 重置参数
    void reset() {
        value_.clear();
    }

private:
    std::string name_;
    std::string help_;
    std::string default_value_;
    std::string value_;
    bool required_;
    Callback callback_;
};

// 解析器类
class Parser {
public:
    Parser() = default;
    explicit Parser(const std::string& description) : description_(description) {}

    // 设置程序名
    Parser& program_name(const std::string& name) {
        program_name_ = name;
        return *this;
    }

    // 设置描述
    Parser& description(const std::string& desc) {
        description_ = desc;
        return *this;
    }

    // 添加选项
    template<typename T = Option>
    std::shared_ptr<T> add_option(const std::string& name, 
                                  const std::string& short_name = "",
                                  const std::string& help = "") {
        auto option = std::make_shared<T>(name, short_name, help);
        options_.push_back(option);
        return option;
    }

    // 添加参数
    std::shared_ptr<Argument> add_argument(const std::string& name, 
                                          const std::string& help = "") {
        auto arg = std::make_shared<Argument>(name, help);
        arguments_.push_back(arg);
        return arg;
    }

    // 解析命令行参数
    void parse(int argc, char* argv[]) {
        if (program_name_.empty() && argc > 0) {
            program_name_ = argv[0];
        }

        // 重置所有选项和参数
        reset();

        std::vector<std::string> args;
        for (int i = 1; i < argc; ++i) {
            args.push_back(argv[i]);
        }

        parse_args(args);
    }

    // 解析字符串参数
    void parse(const std::vector<std::string>& args) {
        reset();
        parse_args(args);
    }

    // 获取选项值
    std::string get_option_value(const std::string& name) const {
        auto opt = find_option(name);
        if (opt) {
            return opt->has_value() ? opt->value() : opt->default_value();
        }
        return "";
    }

    // 获取参数值
    std::string get_argument_value(const std::string& name) const {
        auto arg = find_argument(name);
        if (arg) {
            return arg->has_value() ? arg->value() : arg->default_value();
        }
        return "";
    }

    // 检查选项是否存在
    bool has_option(const std::string& name) const {
        auto opt = find_option(name);
        return opt && (opt->has_value() || !opt->default_value().empty());
    }

    // 打印帮助信息
    void print_help(std::ostream& out = std::cout) const {
        out << "Usage: " << program_name_;
        
        // 打印选项
        if (!options_.empty()) {
            out << " [OPTIONS]";
        }
        
        // 打印参数
        for (const auto& arg : arguments_) {
            if (arg->is_required()) {
                out << " <" << arg->name() << ">";
            } else {
                out << " [" << arg->name() << "]";
            }
        }
        
        out << "\n\n";
        
        if (!description_.empty()) {
            out << description_ << "\n\n";
        }
        
        // 打印选项帮助
        if (!options_.empty()) {
            out << "Options:\n";
            size_t max_width = 0;
            
            // 计算最大宽度
            for (const auto& opt : options_) {
                size_t width = opt->name().length() + opt->short_name().length();
                if (!opt->short_name().empty()) {
                    width += 3; // for ", -"
                }
                max_width = std::max(max_width, width);
            }
            
            for (const auto& opt : options_) {
                std::string opt_str;
                if (!opt->short_name().empty()) {
                    opt_str = "  -" + opt->short_name() + ", --" + opt->name();
                } else {
                    opt_str = "  --" + opt->name();
                }
                
                out << std::left << std::setw(max_width + 4) << opt_str;
                
                out << opt->help();
                
                if (!opt->default_value().empty()) {
                    out << " (default: " << opt->default_value() << ")";
                }
                
                if (opt->is_required()) {
                    out << " (required)";
                }
                
                out << "\n";
            }
            out << "\n";
        }
        
        // 打印参数帮助
        if (!arguments_.empty()) {
            out << "Arguments:\n";
            size_t max_width = 0;
            
            // 计算最大宽度
            for (const auto& arg : arguments_) {
                max_width = std::max(max_width, arg->name().length());
            }
            
            for (const auto& arg : arguments_) {
                out << std::left << std::setw(max_width + 4) 
                    << ("  " + arg->name()) << arg->help();
                
                if (!arg->default_value().empty()) {
                    out << " (default: " << arg->default_value() << ")";
                }
                
                if (arg->is_required()) {
                    out << " (required)";
                }
                
                out << "\n";
            }
            out << "\n";
        }
    }

    // 验证解析结果
    void validate() const {
        for (const auto& opt : options_) {
            opt->validate();
        }
        
        for (const auto& arg : arguments_) {
            arg->validate();
        }
    }

private:
    std::string program_name_;
    std::string description_;
    std::vector<OptionPtr> options_;
    std::vector<ArgumentPtr> arguments_;

    // 查找选项
    OptionPtr find_option(const std::string& name) const {
        for (const auto& opt : options_) {
            if (opt->matches(name)) {
                return opt;
            }
        }
        return nullptr;
    }

    // 查找参数
    ArgumentPtr find_argument(const std::string& name) const {
        for (const auto& arg : arguments_) {
            if (arg->name() == name) {
                return arg;
            }
        }
        return nullptr;
    }

    // 重置所有选项和参数
    void reset() {
        for (const auto& opt : options_) {
            opt->reset();
        }
        
        for (const auto& arg : arguments_) {
            arg->reset();
        }
    }

    // 解析参数
    void parse_args(const std::vector<std::string>& args) {
        size_t arg_index = 0;
        
        for (size_t i = 0; i < args.size(); ++i) {
            const std::string& token = args[i];
            
            // 处理选项
            if (token.substr(0, 2) == "--") {
                std::string opt_name = token.substr(2);
                std::string opt_value;
                
                // 处理 --option=value 格式
                size_t eq_pos = opt_name.find('=');
                if (eq_pos != std::string::npos) {
                    opt_value = opt_name.substr(eq_pos + 1);
                    opt_name = opt_name.substr(0, eq_pos);
                }
                
                auto opt = find_option(opt_name);
                if (!opt) {
                    throw ParseError("Unknown option: --" + opt_name);
                }
                
                // 处理选项值
                if (opt->value_type() != ValueType::NONE) {
                    if (!opt_value.empty()) {
                        // 值已经在 --option=value 格式中提供
                        opt->set_value(opt_value);
                    } else if (opt->value_type() == ValueType::REQUIRED) {
                        // 从下一个参数获取值
                        if (i + 1 >= args.size()) {
                            throw ParseError("Option --" + opt_name + " requires a value");
                        }
                        opt->set_value(args[++i]);
                    } else if (opt->value_type() == ValueType::OPTIONAL && 
                               i + 1 < args.size() && 
                               args[i + 1][0] != '-') {
                        // 可选值
                        opt->set_value(args[++i]);
                    }
                } else if (!opt_value.empty()) {
                    throw ParseError("Option --" + opt_name + " does not accept a value");
                } else {
                    opt->set_value("true");
                }
            } else if (token.substr(0, 1) == "-") {
                // 处理短选项
                std::string opt_names = token.substr(1);
                
                for (char c : opt_names) {
                    std::string opt_name(1, c);
                    auto opt = find_option(opt_name);
                    
                    if (!opt) {
                        throw ParseError("Unknown option: -" + opt_name);
                    }
                    
                    if (opt->value_type() == ValueType::REQUIRED) {
                        if (i + 1 >= args.size()) {
                            throw ParseError("Option -" + opt_name + " requires a value");
                        }
                        opt->set_value(args[++i]);
                    } else if (opt->value_type() == ValueType::OPTIONAL && 
                               i + 1 < args.size() && 
                               args[i + 1][0] != '-') {
                        opt->set_value(args[++i]);
                    } else {
                        opt->set_value("true");
                    }
                }
            } else {
                // 处理位置参数
                if (arg_index < arguments_.size()) {
                    arguments_[arg_index]->set_value(token);
                    ++arg_index;
                } else {
                    throw ParseError("Unexpected argument: " + token);
                }
            }
        }
        
        // 设置未提供的参数的默认值
        for (const auto& opt : options_) {
            if (!opt->has_value() && !opt->default_value().empty()) {
                opt->set_value(opt->default_value());
            }
        }
        
        for (const auto& arg : arguments_) {
            if (!arg->has_value() && !arg->default_value().empty()) {
                arg->set_value(arg->default_value());
            }
        }
    }
};

// 便捷函数
inline std::unique_ptr<Parser> make_parser(const std::string& description = "") {
    return std::make_unique<Parser>(description);
}

} // namespace cmdline

#endif // CMDLINE_PARSER_H
