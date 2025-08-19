//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_MENUITEM_H
#define DATAAIP_MENUITEM_H

#include <iostream>      // 用于标准输入输出流操作
#include <string>        // 用于字符串处理
#include <sstream>       // 用于字符串流处理

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

#endif // DATAAIP_MENUITEM_H
