/**
* @file              asm 汇编 和 内联汇编 函数库 头文件
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.04.27
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.04.27 <td>0.1             <td>brightl         <td>description
* </table>
*/

/**
* @brief             asm 汇编 和 内联汇编 函数库 asm 函数定义
* @return  int       Return Description
*
* @note              Revision History
*/
extern int func(void);
extern int add(int a, int b);
extern int sub(int a, int b);

/**
* @brief             是否进行打印
*
* @note              Revision History
*/
#define ASC_PRINT

/**
* @brief             asm 汇编 和 内联汇编 函数库 打印函数定义
* @return  int       Return Description
*
* @note              Revision History
*/
int asc_print_fn(void);