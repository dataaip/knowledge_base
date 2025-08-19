//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_MENULAYOUT_H
#define DATAAIP_MENULAYOUT_H

// 菜单显示布局枚举
enum class MenuLayout {
    LIST,     // 列表布局（默认）
    GRID      // 网格布局
};

// 菜单显示配置结构体
struct MenuDisplayConfig {
    MenuLayout layout = MenuLayout::LIST;  // 默认使用列表布局
    int columns = 3;                       // 网格布局时的列数
    int maxItemsPerLine = 3;               // 每行最大项目数
};

#endif // DATAAIP_MENULAYOUT_H
