#include "cmdline_parser.h"
#include <iostream>

int main(int argc, char* argv[]) {
    using namespace cmdline;
    
    // 创建解析器
    auto parser = make_parser("A sample program to demonstrate the cmdline parser");
    parser->program_name("example");
    
    // 添加选项
    auto verbose = parser->add_option("verbose", "v", "Enable verbose output");
    auto output = parser->add_option("output", "o", "Output file name")
                  ->value(ValueType::REQUIRED)
                  .defaults("output.txt");
    auto count = parser->add_option("count", "c", "Number of iterations")
                 ->value(ValueType::OPTIONAL)
                 .defaults("1");
    auto help = parser->add_option("help", "h", "Show this help message");
    
    // 添加参数
    auto input = parser->add_argument("input", "Input file to process")
                 ->required();
    
    try {
        // 解析命令行参数
        parser->parse(argc, argv);
        
        // 检查是否需要显示帮助
        if (parser->has_option("help")) {
            parser->print_help();
            return 0;
        }
        
        // 验证参数
        parser->validate();
        
        // 使用解析后的值
        std::cout << "Input file: " << parser->get_argument_value("input") << std::endl;
        std::cout << "Output file: " << parser->get_option_value("output") << std::endl;
        std::cout << "Count: " << parser->get_option_value("count") << std::endl;
        std::cout << "Verbose: " << (parser->has_option("verbose") ? "yes" : "no") << std::endl;
        
    } catch (const ParseError& e) {
        std::cerr << "Parse error: " << e.what() << std::endl;
        parser->print_help(std::cerr);
        return 1;
    } catch (const ValidationError& e) {
        std::cerr << "Validation error: " << e.what() << std::endl;
        parser->print_help(std::cerr);
        return 1;
    }
    
    return 0;
}
