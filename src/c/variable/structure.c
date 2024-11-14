/**
* @file              structure.c
* @brief             结构体类型 代码文件，测试结构体 struct
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.13
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.13 <td>0.1             <td>brightl         <td>全局、局部结构体声明方式、固定底层类型、无固定底层类型
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>结构体类型使用、特性
* </table>
*/

#include "c/variable/variable.h"
#include <stdalign.h>     // 内存对齐定义的头文件
#include <stdlib.h>

/**
* @brief             struct 属性说明符序列(可选) 名字(可选) { 结构体声明列表 }、struct 属性说明符序列(可选) 名字
*
* @note              结构体（struct）是一种复合数据类型，它由一组按顺序排列的成员组成，每个成员可以是不同类型的变量。与结构体相对的是联合体（union），其成员在内存中是重叠存储的。结构体的定义和声明有特定的语法规则
*/
#define STRUCT_TYPE

#ifdef STRUCT_TYPE
/*
1、结构体的基本概念 结构体是一种由一序列的成员组成的类型，成员的存储以顺序分配于内存中、联合体是由一个序列的成员组成的类型，成员存储在内存中重叠
2、结构体的类型说明符语法 结构体的类型说明符与联合体的类型说明符相同，只是所用的关键词有别（struct 对比 union）
3、结构体的定义和声明语法 struct 属性说明符序列(可选) 名字(可选) {结构体声明列表} 、struct 属性说明符序列(可选) 名字 
4、结构体声明列表：结构体声明列表可以包含任意数量的变量声明、位域声明和静态断言声明，不允许不完整类型的成员和函数类型的成员（除了柔性数组成员）
5、属性说明符序列（C23起）可以包含属性的可选列表，应用到结构体类型
*/
struct Example {
    int a;
    float b;
    char c;
};                                  // 1、这里，结构体 Example 的成员 a, b 和 c 是按顺序存储在内存中的

union ExampleUnion {
    int a;
    float b;
    char c;
};                                  // 2、这里，联合体 ExampleUnion 的成员 a, b 和 c 是重叠存储在相同的内存位置

struct Person {
    char name[50];
    int age;
};                                  // 3、结构体定义：引入一个新类型 struct 名字 并定义其含义 这里定义了一个结构体类型 Person
struct ForwardDeclaration;          // 3、若仅在其自身的行使用，如在 struct 名字; 中，声明但不定义 struct 名字，这是一个前向声明，声明了名为 ForwardDeclaration 的结构体类型，但未定义其成员
struct ForwardDeclaration {
    int id;
    double value;
};                                  // 3、在其他语境中，命名先前声明的结构体，并且不允许属性说明符序列，现在定义了之前前向声明的结构体 ForwardDeclaration

struct ComplexStruct {
    int a;
    unsigned int b: 4;                                       // 位域声明
    _Static_assert(sizeof(int) == 4, "Unexpected int size"); // 静态断言声明
};                                  // 4、结构体声明列表可以包含任意数量的变量声明、位域声明和静态断言声明
struct InvalidStruct {
    int a;
    // int incompleteMember[];                               // 这是不允许的，因为这是不完整类型的成员，注释掉的 int incompleteMember[]; 是一个不完整类型的成员，因为数组的大小未定义，这在结构体中是不允许的
    // void func();                                          // 这是不允许的，函数类型的成员，在C语言中，结构体成员不能是函数类型，然而，它们可以是函数指针类型，在 struct InvalidStruct 中，void func(); 是一个函数声明，这是不允许的，可以使用函数指针来替代
};                                  // 4、不允许不完整类型的成员和函数类型的成员（除了柔性数组成员），不完整类型是指类型的大小未知或未定义例如，未指定数组大小的数组类型就是一种不完整类型，在结构体中，成员必须是完整类型，这样编译器才能确定每个成员在内存中的大小和偏移位置
struct ValidStructWithFuncPtr {
    int a;
    void (*func)();                                          // 这是一个函数指针，指向返回类型为 void 且无参数的函数
};
struct ValidStruct {
    int a;
    int flexibleArray[];                                     // 柔性数组成员，这是允许的，柔性数组成员是C语言的一种特殊数组成员，它允许在结构体的末尾定义一个大小不确定的数组。柔性数组成员的前提是结构体中必须有其他成员，并且柔性数组成员必须是结构体中的最后一个成员，柔性数组成员在定义结构体变量时，可以根据需要具体分配数组的大小
};

// struct [[nodiscard]] EnhancedStruct {
//     int importantValue;
// };                               // 5、可以包含属性的可选列表，应用到结构体类型（C23起）

#endif // STRUCT_TYPE struct 类型

/**
* @brief             结构体是一种类型，由一系列成员组成，其存储以有序序列分配（与联合类型相反，联合类型是由一系列成员组成，其存储相互重叠）、结构体的类型说明符与联合体（union）类型说明符相同，只是所用的关键词不同
* @return  int       Return Description
*
* @note              Revision History
*/
int structure_fn(void) {
#ifdef STRUCT_TYPE
  /*
  
  */
  int n = 10;
  struct ValidStruct *vs = malloc(sizeof(struct ValidStruct) + n * sizeof(int));    // 分配内存并初始化柔性数组
  vs->a = 1;
  for (int i = 0; i < n; i++) {
      vs->flexibleArray[i] = i;
  }
  
#endif // STRUCT_TYPE struct 类型  

  return 0;
}