#include <cstddef>      // 提供 size_t 类型定义
#include <exception>    // 标准异常基类
#include <iostream>     // 输入输出流
#include <ostream>      // 输出流基础
#include <random>       // 随机数生成库
#include <stdexcept>    // 标准异常类
#include <string>       // 字符串处理

/*

关键知识点：
1. 宏定义与范围控制
1. 随机数生成
2. 输入流处理与验证
3. 异常处理机制

*/

#define MIN_RANGE 1
#define MAX_RANGE 100


/*
生成随机数函数
- 使用现代C++随机数库
- 静态Mersenne Twister引擎确保高质量随机数
- 默认范围1-100
*/
auto generate_secret_number(int min = MIN_RANGE, int max = MAX_RANGE) -> int {
    // 静态引擎只初始化一次
    static std::mt19937 gen(std::random_device{}());
    // 均匀分布生成随机数
    return std::uniform_int_distribution<>(min, max)(gen);
}


/*
获取用户输入函数
- 处理各种输入错误情况
- 验证输入是否为纯数字
- 使用异常处理机制
*/
auto get_input_number() -> int {
    while (true) {
        std::string input;
        // 安全读取整行输入
        if (!std::getline(std::cin, input)) {
            // EOF处理 (Ctrl+D/Z)
            if(std::cin.eof()) throw std::runtime_error("输入流已关闭");
            // 清除错误状态后抛出异常
            std::cin.clear();
            throw std::runtime_error("输入读取失败");
        }

        try {
            size_t pos = 0;
            // 字符串转整数，pos存储转换位置
            int input_number = std::stoi(input, &pos);
            // 验证是否整个字符串都被转换
            if (pos != input.length()) {
                throw std::runtime_error("输入包含非数字字符");
            }
            // 添加范围验证
            if (input_number < MIN_RANGE || input_number > MAX_RANGE) {
                throw std::out_of_range("数字超出范围");
            }

            return input_number;
        } catch (const std::exception&) {
            // 黄色错误提示
            std::cout << "\033[33m无效输入，请重试\033[0m\n";
        }    
    }
}


/*
主游戏逻辑
*/
auto main() -> int {
    std::cout << "guess_game for cpp beg" << std::endl;

    // 生成随机数
    int secret_number = generate_secret_number();
    int guess_count = 0;

    while (true) {
        try {
            // 获取用户输入
            int guess = get_input_number();
            guess_count++;

            // 游戏逻辑判断
            if (guess == secret_number) {
                std::cout << "猜对了" << std::endl;
                break;
            }
            // 三元运算符提供反馈
            std::cout << (guess > secret_number ? "大了" : "小了") << std::endl;
        } catch (const std::exception& e) {
            // 红色错误输出
            std::cerr << "\033[31m错误: " << e.what() << "\033[31m" << std::endl;
            return EXIT_FAILURE; 
        }
    }

    return 0;
}

