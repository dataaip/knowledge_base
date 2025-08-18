#include <iostream>      // 用于标准输入输出流操作
#include <vector>        // 用于动态数组容器
#include <functional>    // 用于函数对象包装器
#include <memory>        // 用于智能指针
#include <cctype>        // 用于字符处理函数
#include <stack>         // 用于栈容器
#include <limits>        // 用于数值极限值
#include <string>        // 用于字符串处理
#include <sstream>       // 用于字符串流处理

// 前向声明MenuManager和SubMenuItem类，解决循环依赖问题
class MenuManager;
class SubMenuItem;

/**
 * 跨平台清屏函数
 * 根据操作系统类型执行相应的清屏命令
 */
void clearScreen() {
#ifdef _WIN32
    // Windows系统使用cls命令清屏
    system("cls");
#else
    // Unix/Linux/Mac系统使用clear命令清屏
    system("clear");
#endif
}

/**
 * 等待用户按回车键函数
 * 显示提示信息并等待用户输入回车键继续
 */
void waitForEnter() {
    // 输出提示信息
    std::cout << "\n按回车键继续...";
    // 忽略输入缓冲区中剩余的所有字符直到遇到换行符
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // 等待用户按回车键
    std::cin.get();
}

/**
 * 菜单项基类
 * 定义所有菜单项的公共接口和属性
 */
class MenuItem {
public:
    /**
     * 构造函数，初始化菜单项名称
     * @param name 菜单项显示名称
     */
    MenuItem(const std::string& name) : name(name) {}

    /**
     * 虚析构函数，确保派生类能正确析构
     */
    virtual ~MenuItem() = default;

    /**
     * 纯虚函数，执行菜单项操作
     * 由派生类具体实现
     */
    virtual void execute() = 0;

    /**
     * 虚函数，显示菜单项
     * @param index 菜单项索引号
     */
    virtual void display(int index) const {
        // 显示菜单项索引和名称
        std::cout << index << ". " << name;
    }

    /**
     * 获取菜单项名称
     * @return 菜单项名称的常量引用
     */
    const std::string& getName() const { return name; }

protected:
    // 菜单项名称
    std::string name;
};

/**
 * 功能菜单项类
 * 继承自MenuItem，表示执行具体功能的菜单项
 */
class FunctionItem : public MenuItem {
public:
    /**
     * 构造函数，初始化功能菜单项
     * @param name 菜单项名称
     * @param func 要执行的功能函数
     */
    FunctionItem(const std::string& name, std::function<void()> func)
        : MenuItem(name), function(func) {}

    /**
     * 重写execute函数，执行具体功能
     * 实现功能菜单项的操作逻辑
     */
    void execute() override {
        // 清屏以提供清晰的界面
        clearScreen();
        // 显示正在执行的功能名称
        std::cout << "执行: " << name << "\n\n";
        // 执行具体功能函数
        function();
        // 等待用户按回车键继续
        waitForEnter();
    }

private:
    // 存储功能函数的对象
    std::function<void()> function;
};

/**
 * 子菜单项类
 * 继承自MenuItem，表示包含子项的菜单
 */
class SubMenuItem : public MenuItem {
public:
    /**
     * 构造函数，初始化子菜单项
     * @param name 子菜单名称
     */
    SubMenuItem(const std::string& name) : MenuItem(name) {}

    /**
     * 添加子菜单项
     * @param item 要添加的菜单项（使用智能指针管理内存）
     */
    void addItem(std::unique_ptr<MenuItem> item) {
        // 将菜单项添加到items向量中
        items.push_back(std::move(item));
    }

    /**
     * 重写execute函数
     * 子菜单项的执行逻辑在MenuManager中处理
     */
    void execute() override {
        // 子菜单将在MenuManager中处理
    }

    /**
     * 获取所有子菜单项
     * @return 包含所有子菜单项的常量引用
     */
    const std::vector<std::unique_ptr<MenuItem>>& getItems() const {
        return items;
    }

    /**
     * 获取子菜单项数量
     * @return 子菜单项的数量
     */
    size_t itemCount() const {
        return items.size();
    }

private:
    // 存储子菜单项的向量
    std::vector<std::unique_ptr<MenuItem>> items;
};

/**
 * 菜单构建器类
 * 提供流畅的API用于构建复杂的菜单结构
 */
class MenuBuilder {
public:
    /**
     * 构造函数，初始化菜单构建器
     * @param manager 关联的菜单管理器
     */
    MenuBuilder(MenuManager& manager) : manager(manager), currentMenu(nullptr) {}

    /**
     * 添加功能项到当前菜单
     * @param name 功能项名称
     * @param func 要执行的功能函数
     * @return 返回当前构建器对象，支持链式调用
     */
    MenuBuilder& addFunction(const std::string& name, std::function<void()> func);

    /**
     * 创建子菜单并进入该菜单上下文
     * @param name 子菜单名称
     * @return 返回当前构建器对象，支持链式调用
     */
    MenuBuilder& addSubMenu(const std::string& name);

    /**
     * 返回上一级菜单
     * @return 返回当前构建器对象，支持链式调用
     */
    MenuBuilder& endSubMenu();

    /**
     * 返回主菜单上下文
     * @return 返回当前构建器对象，支持链式调用
     */
    MenuBuilder& toMainMenu();

private:
    // 关联的菜单管理器引用
    MenuManager& manager;
    // 当前菜单指针
    SubMenuItem* currentMenu;
    // 菜单栈，用于跟踪菜单层级
    std::vector<SubMenuItem*> menus;
};

/**
 * 菜单管理器类
 * 负责管理整个菜单系统，包括显示、导航和执行
 */
class MenuManager {
public:
    /**
     * 构造函数，初始化菜单管理器
     * 创建主菜单并设置为当前菜单
     */
    MenuManager() : mainMenu(std::make_unique<SubMenuItem>("主菜单")) {
        currentMenu = mainMenu.get();
    }

    /**
     * 运行菜单系统主循环
     * 显示菜单并处理用户输入
     */
    void run() {
        // 将主菜单压入菜单栈
        menuStack.push(mainMenu.get());
        // 循环运行直到菜单栈为空
        while (!menuStack.empty()) {
            // 显示当前菜单
            displayCurrentMenu();

            // 获取用户输入
            std::string input;
            std::cout << "请选择操作 (0=返回/退出): ";
            std::getline(std::cin, input);

            // 如果输入为空，继续下一次循环
            if (input.empty()) continue;

            // 如果输入为'Q'或'q'，退出程序
            if (std::toupper(input[0]) == 'Q' && input.length() == 1) {
                std::cout << "\n程序已退出，感谢使用！\n";
                return;
            }

            // 处理用户选择，如果处理失败则提示错误
            if (!processChoice(input)) {
                std::cout << "\n无效选择，请重新输入！\n";
                waitForEnter();
            }
        }
    }

    /**
     * 添加功能项到当前菜单
     * @param name 功能项名称
     * @param func 要执行的功能函数
     */
    void addFunctionToCurrent(const std::string& name, std::function<void()> func) {
        // 如果当前菜单存在，添加到当前菜单；否则添加到主菜单
        if (currentMenu) {
            currentMenu->addItem(std::make_unique<FunctionItem>(name, func));
        } else {
            mainMenu->addItem(std::make_unique<FunctionItem>(name, func));
        }
    }

    /**
     * 为当前菜单创建子菜单
     * @param name 子菜单名称
     * @return 新创建子菜单的指针
     */
    SubMenuItem* createSubMenuForCurrent(const std::string& name) {
        // 创建新的子菜单项
        auto subMenu = std::make_unique<SubMenuItem>(name);
        // 获取原始指针
        auto rawPtr = subMenu.get();

        // 如果当前菜单存在，添加到当前菜单；否则添加到主菜单
        if (currentMenu) {
            currentMenu->addItem(std::move(subMenu));
        } else {
            mainMenu->addItem(std::move(subMenu));
        }
        // 返回子菜单指针
        return rawPtr;
    }

    /**
     * 设置当前菜单
     * @param menu 要设置为当前菜单的子菜单指针
     */
    void setCurrentMenu(SubMenuItem* menu) {
        currentMenu = menu;
    }

    /**
     * 获取菜单构建器
     * @return 新创建的菜单构建器对象
     */
    MenuBuilder getBuilder() {
        return MenuBuilder(*this);
    }

private:
    /**
     * 显示当前菜单
     * 清屏并显示当前菜单的所有项
     */
    void displayCurrentMenu() const {
        // 清屏以提供清晰的界面
        clearScreen();
        // 如果菜单栈为空，直接返回
        if (menuStack.empty()) return;

        // 获取栈顶菜单（当前菜单）
        auto* current = menuStack.top();
        // 显示菜单标题
        std::cout << "===== " << current->getName() << " =====\n";

        // 根据菜单层级显示不同的返回选项
        if (menuStack.size() > 1) {
            // 不是顶级菜单，显示返回上一级选项
            std::cout << "0. 返回上一级\n";
        } else {
            // 是顶级菜单，显示退出程序选项
            std::cout << "0. 退出程序\n";
        }

        // 显示所有菜单项
        const auto& items = current->getItems();
        for (size_t i = 0; i < items.size(); ++i) {
            // 显示菜单项（索引从1开始）
            items[i]->display(i + 1);

            // 如果是子菜单项，显示指示符
            if (dynamic_cast<SubMenuItem*>(items[i].get())) {
                std::cout << " >";
            }
            std::cout << "\n";
        }
        // 显示菜单分隔线
        std::cout << "============================\n";
        // 显示退出提示
        std::cout << "输入 Q 退出程序\n";
    }

    /**
     * 处理用户选择
     * @param input 用户输入的字符串
     * @return 处理成功返回true，否则返回false
     */
    bool processChoice(const std::string& input) {
        // 如果菜单栈为空，返回false
        if (menuStack.empty()) return false;

        // 处理返回/退出操作
        if (input == "0") {
            // 如果菜单栈大小大于1，弹出栈顶元素（返回上一级）
            if (menuStack.size() > 1) {
                menuStack.pop();
            } else {
                // 顶级菜单选择0视为退出
                std::cout << "\n程序已退出，感谢使用！\n";
                return true;
            }
            return true;
        }

        // 处理数字选择
        try {
            // 将输入转换为整数并转换为0-based索引
            int index = std::stoi(input) - 1;

            // 获取当前菜单
            auto* current = menuStack.top();
            // 获取当前菜单的所有项
            const auto& items = current->getItems();

            // 检查索引是否有效
            if (index >= 0 && static_cast<size_t>(index) < items.size()) {
                // 获取选中的菜单项
                auto& selected = items[index];

                // 如果是功能项，执行该功能
                if (auto* funcItem = dynamic_cast<FunctionItem*>(selected.get())) {
                    funcItem->execute();
                    return true;
                }
                // 如果是子菜单项，将其压入菜单栈
                else if (auto* subItem = dynamic_cast<SubMenuItem*>(selected.get())) {
                    menuStack.push(subItem);
                    return true;
                }
            }
        } catch (const std::exception&) {
            // 输入不是有效数字
            return false;
        }

        return false;
    }

private:
    // 主菜单（使用智能指针管理内存）
    std::unique_ptr<SubMenuItem> mainMenu;
    // 当前菜单指针
    SubMenuItem* currentMenu = nullptr;
    // 菜单栈，用于管理菜单导航
    std::stack<SubMenuItem*> menuStack;

    // 声明MenuBuilder为友元类，使其可以访问私有成员
    friend class MenuBuilder;
};

// MenuBuilder 方法实现

/**
 * 添加功能项到当前菜单
 * @param name 功能项名称
 * @param func 要执行的功能函数
 * @return 返回当前构建器对象，支持链式调用
 */
MenuBuilder& MenuBuilder::addFunction(const std::string& name, std::function<void()> func) {
    // 调用菜单管理器的方法添加功能项
    manager.addFunctionToCurrent(name, func);
    // 返回当前构建器对象以支持链式调用
    return *this;
}

/**
 * 创建子菜单并进入该菜单上下文
 * @param name 子菜单名称
 * @return 返回当前构建器对象，支持链式调用
 */
MenuBuilder& MenuBuilder::addSubMenu(const std::string& name) {
    // 创建子菜单并添加到菜单栈
    menus.push_back(manager.createSubMenuForCurrent(name));
    // 更新当前菜单为新创建的子菜单
    currentMenu = menus.back();
    // 设置菜单管理器的当前菜单
    manager.setCurrentMenu(currentMenu);
    // 返回当前构建器对象以支持链式调用
    return *this;
}

/**
 * 返回上一级菜单
 * @return 返回当前构建器对象，支持链式调用
 */
MenuBuilder& MenuBuilder::endSubMenu() {
    // 如果菜单栈不为空
    if (!menus.empty()) {
        // 弹出栈顶元素
        menus.pop_back();
        // 更新当前菜单：如果栈为空则设为nullptr，否则设为栈顶元素
        currentMenu = menus.empty() ? nullptr : menus.back();
        // 设置菜单管理器的当前菜单
        manager.setCurrentMenu(currentMenu);
    } else {
        // 如果菜单栈为空，设置菜单管理器的当前菜单为nullptr（返回主菜单）
        manager.setCurrentMenu(nullptr);
    }
    // 返回当前构建器对象以支持链式调用
    return *this;
}

/**
 * 返回主菜单上下文
 * @return 返回当前构建器对象，支持链式调用
 */
MenuBuilder& MenuBuilder::toMainMenu() {
    // 清空菜单栈
    menus.clear();
    // 设置当前菜单为nullptr
    currentMenu = nullptr;
    // 设置菜单管理器的当前菜单为nullptr（返回主菜单）
    manager.setCurrentMenu(nullptr);
    // 返回当前构建器对象以支持链式调用
    return *this;
}

// 示例功能函数

/**
 * 示例功能1
 * 演示功能项的实现
 */
void sampleFunction1() {
    std::cout << "这是功能1的执行结果\n";
    // 实际功能代码...
}

/**
 * 示例功能2
 * 演示功能项的实现
 */
void sampleFunction2() {
    std::cout << "功能2已成功执行\n";
    // 实际功能代码...
}

/**
 * 示例功能3
 * 演示功能项的实现
 */
void sampleFunction3() {
    std::cout << "正在处理功能3...\n";
    // 实际功能代码...
}

/**
 * 程序入口点
 * 构建菜单结构并运行菜单系统
 */
int main() {
    // 创建菜单管理器实例
    MenuManager manager;

    // 使用构建器模式构建菜单结构
    auto builder = manager.getBuilder();

    // 使用链式调用构建复杂的菜单结构
    builder.addFunction("功能1", sampleFunction1)
        .addFunction("功能2", sampleFunction2)
        .addSubMenu("系统设置")
        .addFunction("网络设置", []() {
            std::cout << "网络配置选项...\n";
        })
        .addSubMenu("安全设置")
        .addFunction("密码管理", []() {
            std::cout << "修改登录密码...\n";
        })
        .addFunction("权限设置", []() {
            std::cout << "用户权限管理...\n";
        })
        .endSubMenu()
        .endSubMenu()
        .toMainMenu()
        .addFunction("功能3", sampleFunction3)
        .addSubMenu("工具集")
        .addFunction("数据备份", []() {
            std::cout << "正在备份数据...\n";
        })
        .addFunction("系统诊断", []() {
            std::cout << "执行系统诊断...\n";
        })
        .endSubMenu();

    // 运行菜单系统
    manager.run();

    // 程序正常退出
    return 0;
}