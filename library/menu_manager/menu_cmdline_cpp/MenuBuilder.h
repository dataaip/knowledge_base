//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_MENUBUILDER_H
#define DATAAIP_MENUBUILDER_H

#include <iostream>      // 用于标准输入输出流操作
#include <string>        // 用于字符串处理
#include <sstream>       // 用于字符串流处理
#include <functional>
#include <vector>

#include "FunctionItem.h"
#include "SubMenuItem.h"

// 前向声明
class MenuManager;

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

#endif // DATAAIP_MENUBUILDER_H
