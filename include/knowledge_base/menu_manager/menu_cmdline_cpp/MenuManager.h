//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_MENUMANAGER_H
#define DATAAIP_MENUMANAGER_H

#include <iostream> // 用于标准输入输出流操作
#include <sstream>  // 用于字符串流处理
#include <string>   // 用于字符串处理

#include "MenuItem.h"
#include "MenuLayout.h"

// 前向声明
class MenuBuilder;
class SubMenuItem;

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
    MenuManager() : mainMenu(std::make_unique<SubMenuItem>("主菜单")),
                    displayConfig({MenuLayout::LIST, 3, 3}) {
        currentMenu = mainMenu.get();
    }

    /**
     * 设置菜单显示配置
     * @param config 菜单显示配置
     */
    void setDisplayConfig(const MenuDisplayConfig& config) {
        displayConfig = config;
    }

    /**
     * 运行菜单系统主循环
     * 显示菜单并处理用户输入
     */
    void run();

    /**
     * 添加功能项到当前菜单
     * @param name 功能项名称
     * @param func 要执行的功能函数
     */
    void addFunctionToCurrent(const std::string& name, std::function<void()> func);

    /**
     * 为当前菜单创建子菜单
     * @param name 子菜单名称
     * @return 新创建子菜单的指针
     */
    SubMenuItem* createSubMenuForCurrent(const std::string& name);

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
    MenuBuilder getBuilder();

private:
    /**
     * 以网格布局显示菜单项
     * @param items 菜单项列表
     */
    void displayGridMenu(const std::vector<std::unique_ptr<MenuItem>>& items) const;

    /**
     * 显示当前菜单
     * 清屏并显示当前菜单的所有项
     */
    void displayCurrentMenu() const;

    /**
     * 处理用户选择
     * @param input 用户输入的字符串
     * @return 处理成功返回true，否则返回false
     */
    bool processChoice(const std::string& input);

private:
    // 主菜单（使用智能指针管理内存）
    std::unique_ptr<SubMenuItem> mainMenu;
    // 当前菜单指针
    SubMenuItem* currentMenu = nullptr;
    // 菜单栈，用于管理菜单导航
    std::stack<SubMenuItem*> menuStack;
    // 菜单显示配置
    MenuDisplayConfig displayConfig;

    // 声明MenuBuilder为友元类，使其可以访问私有成员
    friend class MenuBuilder;
};

#endif // DATAAIP_MENUMANAGER_H
