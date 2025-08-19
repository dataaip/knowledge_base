//
// Created by minghui.liu on 25-8-19.
//

#include "menu_manager/menu_cmdline_cpp/MenuManager.h"
#include "menu_manager/menu_cmdline_cpp/MenuBuilder.h"

#include "FunctionItem.h"
#include "SubMenuItem.h"

#include <iostream>      // 用于标准输入输出流操作
#include <vector>        // 用于动态数组容器
#include <memory>        // 用于智能指针
#include <cctype>        // 用于字符处理函数
#include <string>        // 用于字符串处理
#include <sstream>       // 用于字符串流处理

/**
 * 运行菜单系统主循环
 * 显示菜单并处理用户输入
 */
void MenuManager::run() {
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
void MenuManager::addFunctionToCurrent(const std::string& name, std::function<void()> func) {
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
SubMenuItem* MenuManager::createSubMenuForCurrent(const std::string& name) {
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
 * 获取菜单构建器
 * @return 新创建的菜单构建器对象
 */
MenuBuilder MenuManager::getBuilder() {
    return MenuBuilder(*this);
}

/**
 * 以网格布局显示菜单项
 * @param items 菜单项列表
 */
void MenuManager::displayGridMenu(const std::vector<std::unique_ptr<MenuItem>>& items) const {
    int totalItems = items.size();
    int cols = displayConfig.columns;

    // 计算需要的行数
    int rows = (totalItems + cols - 1) / cols;

    // 存储每项的字符串表示，便于对齐
    std::vector<std::string> itemStrings;
    itemStrings.reserve(totalItems);

    // 生成所有菜单项的字符串表示
    for (int i = 0; i < totalItems; i++) {
        std::ostringstream oss;
        oss << (i + 1) << ". " << items[i]->getName();

        // 如果是子菜单项，添加指示符
        if (dynamic_cast<SubMenuItem*>(items[i].get())) {
            oss << " >";
        }
        itemStrings.push_back(oss.str());
    }

    // 计算每列的最大宽度
    std::vector<int> columnWidths(cols, 0);
    for (int i = 0; i < totalItems; i++) {
        int col = i % cols;
        if (itemStrings[i].length() > static_cast<size_t>(columnWidths[col])) {
            columnWidths[col] = itemStrings[i].length();
        }
    }

    // 显示网格布局
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int index = row * cols + col;
            if (index < totalItems) {
                std::cout << itemStrings[index];
                // 添加填充以对齐
                if (col < cols - 1) { // 不是最后一列
                    for (size_t j = itemStrings[index].length();
                         j < static_cast<size_t>(columnWidths[col]); j++) {
                        std::cout << " ";
                    }
                    std::cout << "  "; // 列间距
                }
            }
        }
        std::cout << "\n";
    }
}

/**
 * 显示当前菜单
 * 清屏并显示当前菜单的所有项
 */
void MenuManager::displayCurrentMenu() const {
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

    // 根据配置选择显示方式
    if (displayConfig.layout == MenuLayout::GRID && !items.empty()) {
        // 使用网格布局显示
        displayGridMenu(items);
    } else {
        // 使用列表布局显示（默认）
        for (size_t i = 0; i < items.size(); ++i) {
            // 显示菜单项（索引从1开始）
            items[i]->display(i + 1);

            // 如果是子菜单项，显示指示符
            if (dynamic_cast<SubMenuItem*>(items[i].get())) {
                std::cout << " >";
            }
            std::cout << "\n";
        }
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
bool MenuManager::processChoice(const std::string& input) {
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