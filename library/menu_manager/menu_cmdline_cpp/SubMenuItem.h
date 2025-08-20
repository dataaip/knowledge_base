//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_SUBMENUITEM_H
#define DATAAIP_SUBMENUITEM_H

#include "MenuItem.h"

#include <iostream>      // 用于标准输入输出流操作
#include <string>        // 用于字符串处理
#include <sstream>       // 用于字符串流处理

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

#endif // DATAAIP_SUBMENUITEM_H
