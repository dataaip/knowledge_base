//
// Created by minghui.liu on 25-8-19.
//

#ifndef DATAAIP_COMMON_H
#define DATAAIP_COMMON_H

/**
 * 跨平台清屏函数
 * 根据操作系统类型执行相应的清屏命令
 */
void clearScreen();

/**
 * 等待用户按回车键函数
 * 显示提示信息并等待用户输入回车键继续
 */
void waitForEnter();

#endif // DATAAIP_COMMON_H
