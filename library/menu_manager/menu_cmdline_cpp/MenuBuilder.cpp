//
// Created by minghui.liu on 25-8-19.
//

#include "MenuBuilder.h"
#include "MenuManager.h"

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