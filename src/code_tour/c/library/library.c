#include "c/library/library.h"

/**
* @brief             库学习练习 入口函数
* @return  int       Return Description
*
* @note              统一管理 库学习练习代码
*/
int library_fn(void) {

// 打印 asm 库函数  
#ifdef ASC_PRINT
  asc_print_fn();
#endif // DEBUG

  return 0;
}