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
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>结构体类型使用、特性、内存布局
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
  根据需要具体分配 ValidStruct 结构体中 flexibleArray 数组的大小
  */
  int n = 10;
  struct ValidStruct *vs = malloc(sizeof(struct ValidStruct) + n * sizeof(int));    // 分配内存并初始化柔性数组
  vs->a = 1;
  for (int i = 0; i < n; i++) {
      vs->flexibleArray[i] = i;
  }
  /*
  1、结构体成员的地址是按定义顺序递增的
  2、指向结构体的指针可以转换为指向其首成员的指针，反之亦然
  3、位域成员的地址指向其分配单元
  4、在结构体的成员之间和最后可能有填充字节，但首成员前没有填充字节
  5、结构体的大小至少等于其所有成员的大小之和，但由于对齐要求，实际大小可能更大
  */
  struct Example {
    int a;
    float b;
    char c;
  };
  struct Example example;                                                       // 1、在结构体对象内，其成员的地址按照成员定义的顺序递增，这意味着在内存中，结构体成员是按它们在结构体定义中的顺序排列的：&example.a < &example.b < &example.c
  struct Example *ptrStruct = &example;
  
  int *ptrInt = (int *)ptrStruct;                                               // 2、指向结构体的指针可以转换为指向其首成员的指针，反之亦然，ptrInt 指向 example.a
  struct Example *ptrStruct2 = (struct Example *)ptrInt;                        // 2、首成员的指针逆转位结构体的指针，ptrInt 指向结构体 ptrStruct2
  
  struct BitFieldExample {                                                      // 3、若首成员为位域，则指向其分配单元的指针，位域成员是特殊的按位存储的成员。虽然不能直接获取位域成员的地址，但可以获取其分配单元的地址，位域（bit field）是 C 语言中的一种特殊结构体成员，允许你以 位 为单位定义结构体成员的大小，位域通常用于节省内存或实现硬件寄存器的映射                                       
    unsigned int a : 3;                                         // 占用3个位
    unsigned int b : 5;                                         // 占用5个位
  };                                                            // 这个例子中，struct BitFieldExample 有两个位域成员 a 和 b。成员 a 占用3个位，成员 b 占用5个位
  struct BitFieldExample bitexample;                            // 由于位域成员是按位存储的，不能直接获取它们的地址，这是因为C语言标准不允许对位域成员取地址，但可以获取包含这些位域的分配单元的地址
  // unsigned int *bptr = &example.a;                           // 错误，无法获取位域成员的地址，bitexample.a 和 bitexample.b 共享一个 unsigned int 类型的分配单元，如果我们尝试获取 a 或 b 的地址，编译器会报错
  unsigned int *bptr = (unsigned int *)&bitexample;             // 获取分配单元的地址，可以获取包含位域的分配单元的地址，即整个结构体的地址
  
  struct BitFieldExample bitexample1 = {5, 3};
  unsigned int *bitptr = (unsigned int *)&bitexample1;          // 获取分配单元的地址   
  print_purple("Value of the allocation unit: %u\n", *bitptr);  // 打印分配单元的值，5 的二进制表示是 101（3 位），3 的二进制表示是（5 位需要写作 00011），合并位域在内存中，a 和 b 会被合并到同一个分配单元（通常是一个 unsigned int），其合并为一个 8 位的二进制数 00011 101，这个二进制数可以被解释为一个 unsigned int，为了便于解释，我们将其扩展为 32 位 0000 0000 0000 0000 0000 0000 0011 101 这个二进制数转换为十进制是 53
  print_purple("Binary output of the allocation unit: ");       // unsigned int 只用了 8 位，其余位数未定义，因为内存对齐或结构填充策略导致的
  for (int i = 31; i >= 0; i--) {
    print_purple("%d", (*bitptr >> i) & 1);
  }
  print_purple("\n");
  print_purple("Address of bitexample1: %p\n", (void*)&bitexample1);
  // print_purple("Address of bitexample1.a: %p\n", (void*)&bitexample1.a);  // 错误，无法获取位域成员的地址
  // print_purple("Address of bitexample1.b: %p\n", (void*)&bitexample1.b);  // 错误，无法获取位域成员的地址
  print_purple("Value of bitexample1.a: %u\n", bitexample1.a);
  print_purple("Value of bitexample1.b: %u\n", bitexample1.b);  
  
  struct BitFieldExample3 {
    unsigned int a : 3;
    unsigned int b : 5;
    unsigned int c : 6;
    unsigned int d : 20; // 如果加上这个成员，编译器可能会使用新的分配单元，假设 unsigned int 是32位（4字节），那么 a 和 b 会共享同一个 unsigned int 分配单元，如果加上成员 c，编译器可能会在需要时使用新的分配单元
  };
  print_purple("Size of struct BitFieldExample3: %zu\n", sizeof(struct BitFieldExample3));
  struct BitFieldExample3 bitexample3 = {5, 3, 25, 1};   //  unit 1：011001 00011 101 、unit 2：0000 0000 0000 0000 0001
  unsigned int *bitptr3 = (unsigned int *)&bitexample3;  //  获取分配单元的地址
  print_purple("bitptr3 = %p, bitptr3[0] = %p, bitptr3[1] = %p.\n", bitptr3, &bitptr3[0], &bitptr3[1]);
  print_purple("Value of the allocation unit 1: %u\n", bitptr3[0]);   // 打印分配单元的值 unit 1
  print_purple("Value of the allocation unit 2: %u\n", bitptr3[1]);   // 打印分配单元的值 unit 2
  print_purple("Binary output of the allocation unit 1: "); // 打印二进制表示 unit 1
  for (int i = 31; i >= 0; i--) {
    print_purple("%d", (bitptr3[0] >> i) & 1);
  }
  print_purple("\n");
  print_purple("Binary output of the allocation unit 2: "); // 打印二进制表示 unit 2
  for (int i = 31; i >= 0; i--) {
    print_purple("%d", (bitptr3[1] >> i) & 1);
  }
  print_purple("\n");  

  struct Example2 {                                                              // 4、在任意两个成员间和最后的成员后可能存在无名的填充字节，但首成员前不会有，填充字节（padding bytes）是编译器为了对齐（alignment）成员而插入的字节，对齐是为了提高内存访问效率，例如，某些架构可能要求 int 类型变量在 4 字节边界对齐，如果一个 char 类型成员后面紧跟一个 int 类型成员，编译器可能会插入填充字节来满足对齐要求
    char c;  // 1 byte
    int i;   // 4 bytes, may be aligned to 4-byte boundary
  };                                                                             // 4、内存布局可能是：[c][padding][i][i][i][i]
  
  struct Example3 {                                                              // 5、结构体的大小至少与其成员的大小之和一样大，这意味着结构体的大小不仅包括所有成员的大小，还可能包含填充字节
    char c;  // 1 byte
    int i;   // 4 bytes, but aligned to 4-byte boundary
  };
  print_purple("Size of struct: %zu\n", sizeof(struct Example3));                // 5、可能输出 8，结构体大小至少是 5 bytes，但由于对齐要求，实际大小可能是 8 bytes.

#endif // STRUCT_TYPE struct 类型  

  return 0;
}