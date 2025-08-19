//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_MENUITEM_H
#define DATAAIP_MENUITEM_H

#define MAX_MENU_ITEMS 100

/**
 * 错误类型
 */
typedef enum {
    SUCCESS,
    ERROR_INVALID_ARGUMENT,
    ERROR_INVALID_SUBMENU_ITEM,
    ERROR_INVALID_FUNCTION_ITEM,
    ERROR_INVALID_MENU_ITEM,
    ERROR_INVALID_MENU_ITEM_NAME,
    ERROR_INVALID_MENU_ITEM_TYPE,
    ERROR_INVALID_MENU_ITEM_FUNCTION,
} ErrorCode;

/**
 * 菜单项类型
 */
typedef enum { ACTION_ITEM, SUBMENU_ITEM } MenuType;

/**
 * 1. MenuItemImmutableArray（固定数组方式）
 *
 * 优点：
 * - 访问简单，可以通过索引直接访问子菜单项
 * - 不需要额外的内存管理操作
 *
 * 缺点：
 * - 浪费内存，即使只有几个子菜单项也会分配[MAX_MENU_ITEMS]
 * - 限制了菜单项数量，最多只能有[MAX_MENU_ITEMS]
 * - 不符合[菜单系统设计与实现规范]
 */
typedef struct MenuItemImmutableArray
{
    char* name;
    MenuType type;
    union
    {
        void (*function)(void);
        struct MenuItemImmutableArray* submenu[MAX_MENU_ITEMS];
    };
} MenuItemImmutableArray;

/**
 * 2. MenuItemMutableArray（动态数组方式）
 *
 * 优点：
 * - 内存使用效率高，按需分配
 * - 支持动态扩展，没有硬性限制菜单项数量
 * - 符合[菜单系统设计与实现规范]中关于动态数组的要求
 * - 访问效率高，支持通过索引直接访问
 *
 * 缺点：
 * - 实现稍微复杂，需要管理容量和动态扩展
 */
typedef struct MenuItemMutableArray {
    char* name;
    MenuType type;
    union {
        void (*function)(void);
        struct {
            struct MenuItemMutableArray** items;  // 指向菜单项指针数组
            int count;                // 当前菜单项数量
            int capacity;             // 数组容量
        } submenu;
    };
} MenuItemMutableArray;

/**
 * 3. MenuItemLinkedList（链表方式）
 *
 * 优点：
 * - 内存使用效率高，按需分配
 * - 插入和删除操作效率高
 *
 * 缺点：
 * - 访问效率低，需要遍历链表才能访问特定位置的菜单项
 * - 实现复杂度较高
 */
typedef struct MenuItemNode {
    struct MenuItemLinkedList* item;
    struct MenuItemNode* next;
} MenuItemNode;

typedef struct MenuItemLinkedList {
    char* name;
    MenuType type;
    union {
        void (*function)(void);
        struct {
            MenuItemNode* head;       // 链表头节点
            int count;                // 菜单项数量
        } submenu;
    };
} MenuItemLinkedList;

#endif // DATAAIP_MENUITEM_H
