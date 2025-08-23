//
// Created by minghui.liu on 25-8-19.
//

#include <iostream>      // 用于标准输入输出流操作
#include <limits>   // 添加 std::numeric_limits

#include "Common.h"

/**
 * 跨平台清屏函数
 * 根据操作系统类型执行相应的清屏命令
 */
void clearScreen() {
#ifdef _WIN32
    // Windows系统使用cls命令清屏
    system("cls");
#else
    // Unix/Linux/Mac系统使用clear命令清屏
    system("clear");
#endif
}

/**
 * 等待用户按回车键函数
 * 显示提示信息并等待用户输入回车键继续
 */
void waitForEnter() {
    // 输出提示信息
    std::cout << "\n按回车键继续...";
    // 忽略输入缓冲区中剩余的所有字符直到遇到换行符
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // 等待用户按回车键
    std::cin.get();
}