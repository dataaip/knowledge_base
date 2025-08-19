//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_FUNCTIONITEM_H
#define DATAAIP_FUNCTIONITEM_H

#include "MenuItem.h"
#include "Common.h"

#include <iostream>      // 用于标准输入输出流操作
#include <string>        // 用于字符串处理
#include <sstream>       // 用于字符串流处理

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

#endif // DATAAIP_FUNCTIONITEM_H
