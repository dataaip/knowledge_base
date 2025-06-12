# C++ 猜数字游戏实现

下面是使用现代C++特性实现的猜数字游戏，包含安全输入处理、随机数生成和用户友好的界面：

```cpp
#include <iostream>
#include <string>
#include <random>
#include <limits>
#include <cctype>
#include <algorithm>

class GuessGame {
public:
    GuessGame(int min = 1, int max = 100) 
        : min_val(min), max_val(max), engine(device()) {
        reset();
    }

    void play() {
        display_welcome();
        
        while (!game_over) {
            get_user_guess();
            evaluate_guess();
        }
        
        offer_replay();
    }

private:
    int min_val;
    int max_val;
    int secret_number;
    int guess_count;
    bool game_over;
    
    // 随机数生成组件
    std::random_device device;
    std::mt19937 engine;
    
    void reset() {
        std::uniform_int_distribution<int> dist(min_val, max_val);
        secret_number = dist(engine);
        guess_count = 0;
        game_over = false;
    }
    
    void display_welcome() const {
        std::cout << "\n================================\n";
        std::cout << "     欢迎来到猜数字游戏！\n";
        std::cout << "================================\n";
        std::cout << "我已经想好了一个 " << min_val << " 到 " << max_val << " 之间的数字\n";
        std::cout << "看看你能猜多少次才能猜中它！\n\n";
    }
    
    void get_user_guess() {
        while (true) {
            std::cout << "请输入你的猜测 (输入 'q' 退出): ";
            std::string input;
            
            if (!std::getline(std::cin, input)) {
                // 处理EOF或读取错误
                if (std::cin.eof()) {
                    std::cout << "\n检测到输入结束，游戏终止。\n";
                    exit(0);
                } else {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "输入错误，请重试。\n";
                    continue;
                }
            }
            
            // 检查退出命令
            if (input == "q" || input == "Q") {
                std::cout << "游戏已退出。神秘数字是: " << secret_number << "\n";
                exit(0);
            }
            
            // 检查空输入
            if (input.empty()) {
                std::cout << "输入不能为空，请重试。\n";
                continue;
            }
            
            // 检查输入是否有效
            bool valid = true;
            for (char c : input) {
                if (!std::isdigit(static_cast<unsigned char>(c))) {
                    valid = false;
                    break;
                }
            }
            
            if (!valid) {
                std::cout << "无效输入：只能包含数字，请重试。\n";
                continue;
            }
            
            try {
                int guess = std::stoi(input);
                if (guess < min_val || guess > max_val) {
                    std::cout << "数字必须在 " << min_val << " 到 " << max_val << " 之间。\n";
                    continue;
                }
                
                guess_count++;
                last_guess = guess;
                break;
            } 
            catch (const std::out_of_range&) {
                std::cout << "输入的数字太大，请重试。\n";
            }
            catch (const std::invalid_argument&) {
                std::cout << "无效输入，请重试。\n";
            }
        }
    }
    
    void evaluate_guess() {
        if (last_guess < secret_number) {
            std::cout << "太小了！";
            give_hint();
        } 
        else if (last_guess > secret_number) {
            std::cout << "太大了！";
            give_hint();
        } 
        else {
            std::cout << "\n================================\n";
            std::cout << " 恭喜！你猜对了！\n";
            std::cout << " 神秘数字是: " << secret_number << "\n";
            std::cout << " 你用了 " << guess_count << " 次尝试\n";
            std::cout << "================================\n\n";
            game_over = true;
        }
    }
    
    void give_hint() const {
        int diff = std::abs(last_guess - secret_number);
        
        if (diff > 50) {
            std::cout << " 差得远呢！" << std::endl;
        } 
        else if (diff > 20) {
            std::cout << " 有点接近了！" << std::endl;
        } 
        else if (diff > 10) {
            std::cout << " 接近了！" << std::endl;
        } 
        else if (diff > 5) {
            std::cout << " 非常接近了！" << std::endl;
        } 
        else {
            std::cout << " 就差一点了！" << std::endl;
        }
    }
    
    void offer_replay() {
        std::cout << "再玩一次？(y/n): ";
        std::string choice;
        std::getline(std::cin, choice);
        
        if (choice == "y" || choice == "Y") {
            reset();
            play();
        } else {
            std::cout << "感谢游玩！再见！\n";
        }
    }
    
    int last_guess; // 保存最后一次猜测的值
};

int main() {
    GuessGame game;
    game.play();
    return 0;
}
```

## 关键特性与优势

### 1. 安全的随机数生成
```cpp
std::random_device device;
std::mt19937 engine(device());
std::uniform_int_distribution<int> dist(min_val, max_val);
secret_number = dist(engine);
```
- 使用`<random>`库代替传统的`rand()`
- 提供更均匀的随机数分布
- 避免传统方法的周期性重复问题

### 2. 健壮的输入处理
```cpp
while (true) {
    std::cout << "请输入你的猜测: ";
    std::string input;
    
    if (!std::getline(std::cin, input)) {
        // 处理EOF或错误
    }
    
    // 检查退出命令
    if (input == "q" || input == "Q") { /* ... */ }
    
    // 验证输入
    bool valid = true;
    for (char c : input) {
        if (!std::isdigit(static_cast<unsigned char>(c))) {
            valid = false;
            break;
        }
    }
    
    try {
        int guess = std::stoi(input);
        // 检查范围...
    }
    catch (/* 异常处理 */) { /* ... */ }
}
```
- 使用`std::getline`避免缓冲区溢出
- 完整验证输入：空输入、非数字字符、范围检查
- 异常安全处理`std::stoi`转换

### 3. 智能提示系统
```cpp
void give_hint() const {
    int diff = std::abs(last_guess - secret_number);
    
    if (diff > 50) {
        std::cout << " 差得远呢！";
    } 
    else if (diff > 20) {
        std::cout << " 有点接近了！";
    }
    // ... 其他层级 ...
}
```
- 根据猜测值与目标值的差距提供动态反馈
- 增强用户体验，帮助玩家更快接近答案

### 4. 面向对象设计
```cpp
class GuessGame {
    // 私有成员变量
    int min_val, max_val, secret_number, guess_count;
    bool game_over;
    
    // 随机数生成组件
    std::random_device device;
    std::mt19937 engine;
    
public:
    GuessGame(int min = 1, int max = 100);
    void play();
    
private:
    void reset();
    void display_welcome() const;
    void get_user_guess();
    void evaluate_guess();
    void give_hint() const;
    void offer_replay();
};
```
- 封装游戏状态和逻辑
- 高内聚低耦合的设计
- 易于扩展和维护

### 5. 用户友好的界面
```ascii
================================
     欢迎来到猜数字游戏！
================================
我已经想好了一个 1 到 100 之间的数字
看看你能猜多少次才能猜中它！

请输入你的猜测 (输入 'q' 退出): 50
太大了！ 有点接近了！

请输入你的猜测 (输入 'q' 退出): 30
太小了！ 非常接近了！

...

================================
 恭喜！你猜对了！
 神秘数字是: 42
 你用了 7 次尝试
================================

再玩一次？(y/n): 
```

### 6. 异常处理
```cpp
try {
    int guess = std::stoi(input);
    // ...
} 
catch (const std::out_of_range&) {
    std::cout << "输入的数字太大，请重试。\n";
}
catch (const std::invalid_argument&) {
    std::cout << "无效输入，请重试。\n";
}
```
- 安全处理数值转换异常
- 防止无效输入导致程序崩溃

### 7. 游戏循环与重玩
```cpp
void offer_replay() {
    std::cout << "再玩一次？(y/n): ";
    std::string choice;
    std::getline(std::cin, choice);
    
    if (choice == "y" || choice == "Y") {
        reset();
        play();
    }
}
```
- 简洁的重玩机制
- 保持游戏状态重置

## 编译与运行

### 编译命令 (Linux/macOS)
```bash
g++ -std=c++17 -o guess_game guess_game.cpp
```

### 编译命令 (Windows)
```bash
g++ -std=c++17 -o guess_game.exe guess_game.cpp
```

### 运行游戏
```bash
./guess_game
```

这个实现展示了现代C++的最佳实践，包括：
- 使用`<random>`库进行高质量的随机数生成
- 利用RAII原则管理资源
- 使用异常安全设计
- 遵循面向对象设计原则
- 提供用户友好的交互体验

游戏支持自定义数字范围、动态提示系统、安全输入处理和无限重玩功能，是学习C++游戏编程和输入验证的优秀示例。