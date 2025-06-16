#include "guess_game_cpp_oop.hpp"
#include <cstddef>
#include <exception>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>

/*

关键知识点总结
1. C++核心特性
- 面向对象编程：类、对象、封装
- 现代C++：随机数库、尾置返回类型
- 异常处理：try/catch/throw机制
- 资源管理：RAII原则

2. 输入/输出处理
- 安全输入：std::getline
- 类型转换：std::stoi及错误检测
- 流状态管理：std::cin.eof(), std::cin.clear()
- 格式化输出：ANSI转义序列

3. 软件工程实践
- 模块化设计：头文件与实现分离
- 错误处理策略：异常与错误码结合
- API设计：清晰的类接口
- 命名空间：避免命名冲突

4. 游戏开发技术
- 随机数生成：均匀分布
- 游戏状态机：循环与条件判断
- 用户反馈：条件化提示消息
- 输入验证：多层验证策略

5. 健壮性保障
- 边界检查：数值范围验证
- 异常安全：资源泄漏预防
- 错误恢复：流状态重置
- 用户友好：彩色错误提示

与Rust版本的对比
特性	    C++实现	            Rust实现
错误处理	异常机制	         Result类型
随机数	    <random>库	        rand crate
输入处理	getline + stoi	    read_line + parse
OOP支持	    类与继承	        trait与impl
内存安全	手动管理/智能指针	  所有权系统
控制台颜色	 ANSI转义序列	     第三方crate
模块系统	头文件/源文件	      mod系统

游戏架构设计
组件	             功能	            设计模式
GuessGame类	        游戏主控制器	     Facade模式
构造函数	         初始化游戏参数	       Builder模式雏形
play()	            游戏入口点	        Template Method模式
evaluate_guess()	游戏核心循环	    State Machine
get_input_number()	输入处理器	        Strategy模式雏形

*/

namespace game {

GuessGame::GuessGame(int min, int max):
    min_range(min),max_range(max),engine(device()) {};    


void GuessGame::display_welcome() {
    std::cout << "guess_game_oop for cpp beg" << std::endl;
}


auto GuessGame::generate_secret_number() -> int {
    // 均匀分布生成随机数
    return std::uniform_int_distribution<>(GuessGame::min_range, GuessGame::max_range)(engine);
}


auto GuessGame::get_input_number() -> int {
    std::string input;
    while (true) {
        // 获取输入判断异常
        if(!std::getline(std::cin,input)) {
            if (std::cin.eof()) {
                throw std::runtime_error("EOF输入流关闭");
            }
            std::cin.clear();
            throw std::runtime_error("输入异常，输入流已关闭且清除缓冲区");
        }

        try {
            // 判断输入转换异常 stoi
            size_t pos = 0;
            int number = std::stoi(input,&pos,10);

            if (pos != input.length()) {
                throw std::runtime_error("包含非数字输入");
            }

            if (number < GuessGame::min_range || number > GuessGame::max_range) {
                throw std::runtime_error("数字范围超出");
            }

            return number;
        } catch (const std::exception&) {
            // 黄色错误提示
            std::cout << "\033[33m无效输入，请重试\033[0m\n";
        }
    }
}


void GuessGame::evaluate_guess() {
    GuessGame::secret_number = GuessGame::generate_secret_number();

    while (true) {
        try {
            GuessGame::guess_number = GuessGame::get_input_number();

            if (GuessGame::guess_number == GuessGame::secret_number) {
                std::cout << "ok，猜对了" << std::endl;
                break;
            }
            std::cout << (GuessGame::guess_number > GuessGame::secret_number ? "大了" : "小了") << std::endl;

        } catch (const std::exception& e) {
            // 红色错误提示
            std::cerr << "\033[31m错误: " << e.what() << "\033[31m" << std::endl;   
        }  
    }  
}


void GuessGame::play() {
    GuessGame::display_welcome();
    GuessGame::evaluate_guess();
}

}; // namespace game