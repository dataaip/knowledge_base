#include <iostream>
#include <vector>
#include <functional>
#include <memory>
#include <cctype>
#include <stack>
#include <limits>
#include <string>

// 前向声明
class MenuManager;
class SubMenuItem;

// 跨平台清屏
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// 等待用户按回车
void waitForEnter() {
    std::cout << "\n按回车键继续...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

// 菜单项基类
class MenuItem {
public:
    MenuItem(const std::string& name) : name(name) {}
    virtual ~MenuItem() = default;

    virtual void execute() = 0;
    virtual void display(int index) const {
        std::cout << index << ". " << name;
    }

    const std::string& getName() const { return name; }

protected:
    std::string name;
};

// 功能菜单项
class FunctionItem : public MenuItem {
public:
    FunctionItem(const std::string& name, std::function<void()> func)
        : MenuItem(name), function(func) {}

    void execute() override {
        clearScreen();
        std::cout << "执行: " << name << "\n\n";
        function();
        waitForEnter();
    }

private:
    std::function<void()> function;
};

// 子菜单项
class SubMenuItem : public MenuItem {
public:
    SubMenuItem(const std::string& name) : MenuItem(name) {}

    void addItem(std::unique_ptr<MenuItem> item) {
        items.push_back(std::move(item));
    }

    void execute() override {
        // 子菜单将在MenuManager中处理
    }

    const std::vector<std::unique_ptr<MenuItem>>& getItems() const {
        return items;
    }

    size_t itemCount() const {
        return items.size();
    }

private:
    std::vector<std::unique_ptr<MenuItem>> items;
};

// 菜单构建器 - 用于更方便地构建菜单结构
class MenuBuilder {
public:
    MenuBuilder(MenuManager& manager) : manager(manager), currentMenu(nullptr) {}

    // 添加功能项到当前菜单
    MenuBuilder& addFunction(const std::string& name, std::function<void()> func);

    // 创建子菜单并进入该菜单上下文
    MenuBuilder& addSubMenu(const std::string& name);

    // 返回上一级菜单
    MenuBuilder& endSubMenu();

    // 返回主菜单上下文
    MenuBuilder& toMainMenu();

private:
    MenuManager& manager;
    SubMenuItem* currentMenu;
    std::vector<SubMenuItem*> menus;
};

// 菜单管理器
class MenuManager {
public:
    MenuManager() : mainMenu(std::make_unique<SubMenuItem>("主菜单")) {
        currentMenu = mainMenu.get();
    }

    void run() {
        menuStack.push(mainMenu.get());
        while (!menuStack.empty()) {
            displayCurrentMenu();

            std::string input;
            std::cout << "请选择操作 (0=返回/退出): ";
            std::getline(std::cin, input);

            if (input.empty()) continue;

            if (std::toupper(input[0]) == 'Q' && input.length() == 1) {
                std::cout << "\n程序已退出，感谢使用！\n";
                return;
            }

            if (!processChoice(input)) {
                std::cout << "\n无效选择，请重新输入！\n";
                waitForEnter();
            }
        }
    }

    // 添加功能项到当前菜单
    void addFunctionToCurrent(const std::string& name, std::function<void()> func) {
        if (currentMenu) {
            currentMenu->addItem(std::make_unique<FunctionItem>(name, func));
        } else {
            mainMenu->addItem(std::make_unique<FunctionItem>(name, func));
        }
    }

    // 为当前菜单创建子菜单
    SubMenuItem* createSubMenuForCurrent(const std::string& name) {
        auto subMenu = std::make_unique<SubMenuItem>(name);
        auto rawPtr = subMenu.get();

        if (currentMenu) {
            currentMenu->addItem(std::move(subMenu));
        } else {
            mainMenu->addItem(std::move(subMenu));
        }
        return rawPtr;
    }

    // 设置当前菜单（用于构建菜单树）
    void setCurrentMenu(SubMenuItem* menu) {
        currentMenu = menu;
    }

    // 获取菜单构建器
    MenuBuilder getBuilder() {
        return MenuBuilder(*this);
    }

private:
    void displayCurrentMenu() const {
        clearScreen();
        if (menuStack.empty()) return;

        auto* current = menuStack.top();
        std::cout << "===== " << current->getName() << " =====\n";

        // 显示返回选项
        if (menuStack.size() > 1) {
            std::cout << "0. 返回上一级\n";
        } else {
            std::cout << "0. 退出程序\n";
        }

        // 显示菜单项
        const auto& items = current->getItems();
        for (size_t i = 0; i < items.size(); ++i) {
            items[i]->display(i + 1);

            // 如果是子菜单，显示指示符
            if (dynamic_cast<SubMenuItem*>(items[i].get())) {
                std::cout << " >";
            }
            std::cout << "\n";
        }
        std::cout << "============================\n";
        std::cout << "输入 Q 退出程序\n";
    }

    bool processChoice(const std::string& input) {
        if (menuStack.empty()) return false;

        // 处理返回/退出
        if (input == "0") {
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
            int index = std::stoi(input) - 1; // 转换为0-based索引

            auto* current = menuStack.top();
            const auto& items = current->getItems();

            if (index >= 0 && static_cast<size_t>(index) < items.size()) {
                auto& selected = items[index];

                if (auto* funcItem = dynamic_cast<FunctionItem*>(selected.get())) {
                    funcItem->execute();
                    return true;
                }
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
    std::unique_ptr<SubMenuItem> mainMenu;
    SubMenuItem* currentMenu = nullptr;
    std::stack<SubMenuItem*> menuStack;

    friend class MenuBuilder;
};

// MenuBuilder 方法实现
MenuBuilder& MenuBuilder::addFunction(const std::string& name, std::function<void()> func) {
    manager.addFunctionToCurrent(name, func);
    return *this;
}

MenuBuilder& MenuBuilder::addSubMenu(const std::string& name) {
    menus.push_back(manager.createSubMenuForCurrent(name));
    currentMenu = menus.back();
    manager.setCurrentMenu(currentMenu);
    return *this;
}

MenuBuilder& MenuBuilder::endSubMenu() {
    if (!menus.empty()) {
        menus.pop_back();
        currentMenu = menus.empty() ? nullptr : menus.back();
        manager.setCurrentMenu(currentMenu);
    } else {
        manager.setCurrentMenu(nullptr); // 返回主菜单
    }
    return *this;
}

MenuBuilder& MenuBuilder::toMainMenu() {
    menus.clear();
    currentMenu = nullptr;
    manager.setCurrentMenu(nullptr);
    return *this;
}

// 示例功能函数
void sampleFunction1() {
    std::cout << "这是功能1的执行结果\n";
    // 实际功能代码...
}

void sampleFunction2() {
    std::cout << "功能2已成功执行\n";
    // 实际功能代码...
}

void sampleFunction3() {
    std::cout << "正在处理功能3...\n";
    // 实际功能代码...
}

int main() {
    MenuManager manager;

    // 使用构建器模式构建菜单结构
    auto builder = manager.getBuilder();

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

    return 0;
}