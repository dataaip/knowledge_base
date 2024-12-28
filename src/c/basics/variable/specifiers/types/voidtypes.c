/**
* @file              voidtypes.c
* @brief             void 类型代码文件，测试 void 类型
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.30
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.30 <td>0.1             <td>brightl         <td>void 类型用法、void 类型：用作不完整类型的声明、void ：用于无参数或无返回值的函数
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdio.h>

/**
* @brief             void 类型
*
* @note              用法 void 类型：用作不完整类型的声明、void ：用于无参数或无返回值的函数
*/
# define VOID_TYPE

void print_greeting(void);                 // 用作无返回值的函数
void display_message(void);                // 用作无参数的函数
void process_data(void *data, char type);  // 用作不完整类型的声明

/**
* @brief             void 类型
* @return  int       Return Description
*
* @note              Revision History
*/
int voidtypes_fn(void) {
#ifdef VOID_TYPE
  /*
  void 类型：void 是 C 语言中的一种特殊类型，用于表示没有类型或没有具体的返回值。它在函数声明和指针声明中有多种用途

  1、函数返回类型为 void：表示函数不返回任何值
  2、函数参数为 void：表示函数不接受任何参数
  3、void 指针：一种通用指针类型，可以指向任意类型的数据

  void 类型用法 ：用作不完整类型的声明、void ：用于无参数或无返回值的函数，即void 类型在 C 语言中有两种主要用途：用于无参数或无返回值的函数声明，和作为不完整类型的声明
  4、用作无返回值的函数：当一个函数不返回任何值时，使用 void 作为其返回类型。这表示函数完成其任务后，不会向调用者返回任何值
  5、用作无参数的函数：当一个函数不接受任何参数时，可以使用 void 作为参数列表。这表示该函数在调用时不需要传递任何参数
  6、用作不完整类型的声明：在某些情况下，void 类型可以用作不完整类型的声明。例如，声明一个 void 类型的指针，表示它可以指向任意类型的数据。这样做的好处是提供了一种通用指针的能力

  */
  print_purple("void type\n");
  void print_message(void); // 1、函数返回类型为 void，当一个函数声明为返回 void 时，表示该函数不返回任何值。常见的例子包括打印函数、错误处理函数等
  void do_nothing(void);    // 2、函数参数为 void 当一个函数不接受任何参数时，可以将参数列表声明为 void。这种做法在 C 语言的早期版本中尤为常见
  int value = 42;
  void *ptr = &value;       // 3、void 指针（即 void*）是一种通用指针类型，可以指向任何类型的数据。这在需要处理不同类型的数据时非常有用，例如在内存分配函数中

  print_greeting();                             // 4、调用无返回值的函数，在这个示例中，print_greeting 函数的返回类型是 void，表示它不返回任何值
  display_message();                            // 5、调用无参数的函数，在这个示例中，display_message 函数的参数列表是 void，表示它不接受任何参数
  int int_value = 42;
  float float_value = 3.14;
  process_data(&int_value, 'i');     // 6、传递整数类型数据，在这个示例中，process_data 函数接受一个 void* 类型的指针和一个类型标识符。通过类型标识符，函数可以将 void* 转换为适当的指针类型，并处理相应的数据
  process_data(&float_value, 'f');   // 6、传递浮点数类型数据  

#endif // VOID_TYPE void 类型

  return 0;
}

/**
* @brief             用作无返回值的函数
*
* @note              Revision History
*/
void print_greeting(void) {
  print_purple("Hello, World!\n");
}
/**
* @brief             用作无参数的函数
*
* @note              Revision History
*/
void display_message(void) {
  print_purple("This is a message with no parameters.\n");
}
/**
* @brief             用作不完整类型的声明
* @param   data      Param Description
* @param   type      Param Description
*
* @note              void 类型可以用作不完整类型的声明。例如，声明一个 void 类型的指针
*/
void process_data(void *data, char type) {
  if (type == 'i') {
    int *int_ptr = (int *)data;
    print_purple("Integer: %d\n", *int_ptr);
  } else if (type == 'f') {
    float *float_ptr = (float *)data;
    print_purple("Float: %f\n", *float_ptr);
  }
}