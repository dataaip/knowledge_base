/**
* @file              structure.c
* @brief             结构体类型 代码文件，测试结构体 struct
* @version           0.3
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.13
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.13 <td>0.1             <td>brightl         <td>全局、局部结构体声明方式、固定底层类型、无固定底层类型
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>结构体类型使用、特性、内存布局
* <tr><td>2024.11.13 <td>0.3             <td>brightl         <td>结构体类型初始化
* </table>
*/

#include "c/variable/variable.h"
#include <stdalign.h>     // 内存对齐定义的头文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

void g(void);

/**
* @brief             struct 属性说明符序列(可选) 名字(可选) { 结构体声明列表 }、struct 属性说明符序列(可选) 名字
*
* @note              结构体（struct）是一种复合数据类型，它由一组按顺序排列的成员组成，每个成员可以是不同类型的变量。与结构体相对的是联合体（union），其成员在内存中是重叠存储的。结构体的定义和声明有特定的语法规则
*/
#define STRUCT_TYPE

#ifdef STRUCT_TYPE
/*
声明方式、语法、规则
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

typedef struct typeStruct {
  int a;
  float b;
} tStruct;                          // 使用 typedef 重新定义 struct 类型、提升命名空间

struct qs* p = NULL;                // 声明一个指向 struct qs 的指针 p
struct qs { int a; };               // 定义 struct qs，包含一个整型成员 a 

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
  结构体特性、使用、初始化
  1、结构体成员的地址是按定义顺序递增的
  2、指向结构体的指针可以转换为指向其首成员的指针，反之亦然
  3、位域成员的地址指向其分配单元
  4、在结构体的成员之间和最后可能有填充字节，但首成员前没有填充字节
  5、结构体的大小至少等于其所有成员的大小之和，但由于对齐要求，实际大小可能更大
  6、柔性数组成员 是一种在定义结构体时使用的特殊数组成员，允许我们在不指定数组大小的情况下定义数组成员。柔性数组成员通常用于需要动态分配大小的结构体
  7、匿名结构体是一种特殊的结构体类型，它本身没有名字，直接作为外围结构体或联合体的一部分。因此，匿名结构体的成员可以直接作为外围结构体或联合体的成员来访问
  8、若不以任何具名成员定义结构体（包含经由匿名嵌套结构体或联合体获得的成员），则程序行为未定义，即如果一个结构体没有任何具名成员（即所有成员都是通过匿名嵌套结构体或联合体获得的成员），那么根据标准，访问这些成员的行为是未定义的，这是因为标准要求至少有一个具名成员来确保结构体的有效使用
  9、前置声明 有时需要让一个结构体引用另一个结构体，这种情况经常出现在定义具有相互依赖关系的数据结构时，为了实现这一点，可以使用前向声明（forward declaration），前向声明允许你先声明一个结构体的名字，而不立即定义它的内容。这种结构体名字在定义之前会被视为不完整类型（incomplete type），只能用来声明指针而不能直接使用。这种特性有助于解决结构体彼此引用的问题
  10、不完整类型的成员 结构体初始化规则 在 C 语言中，一个结构体在其定义结束之前是一个不完整类型，这意味着在定义结构体时，不能包含其自身类型的成员，这是因为在结构体定义结束之前，编译器不知道结构体的大小，可以包含指向其自身类型的指针成员，这是合法且常用的，例如在链表和树的实现中
  11、结构体声明的作用域 结构体声明不会建立新的作用域，这意味着在结构体声明列表中引入的嵌套类型、枚举及枚举项在结构体声明的外围作用域中是可见的
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

  struct FlexArrayStruct {                                                       // 6、定义结构体：结构体中拥有至少一个具名成员，并在结构体的最后一个成员定义一个数组但不指定大小，动态分配内存：在实际使用时，通过动态分配内存的方式为结构体分配额外的空间，以容纳柔性数组成员所需的内存，访问柔性数组成员：访问柔性数组成员时，结构体表现得好像该数组成员拥有分配的额外内存的部分
    int count;   // 具名成员
    char data[]; // 柔性数组成员
  };
  const char* sampleString = "Hello, World!";
  size_t strLength = strlen(sampleString);
  struct FlexArrayStruct* fas = malloc(sizeof(struct FlexArrayStruct) + strLength + 1);   // 动态分配内存，包括结构体本身和字符串的长度，分配的内存大小为 sizeof(struct FlexArrayStruct) （结构体除柔性数组成员外的大小）加上字符串的长度 strLength 再加1（用于字符串的终止符 \0）
  if (!fas) {
    perror("Failed to allocate memory");
    return 1;
  }
  fas->count = strLength;                                                                      // 设置具名成员的值，设置 count 成员的值为字符串的长度
  memcpy(fas->data, sampleString, strLength + 1);                                 // 复制字符串到柔性数组成员，将字符串复制到 data 柔性数组成员中
  print_purple("FlexArrayStruct Count: %d\n", fas->count);                                     // 输出结果
  print_purple("FlexArrayStruct Data: %s\n", fas->data);                                       // 输出结果，使用 fas->data 访问柔性数组成员，并输出字符串内容
  free(fas);                                                                              // 释放内存，柔性数组成员不能作为数组元素或其他结构体的成员，初始化和赋值操作会忽略柔性数组成员，使用 sizeof 计算结构体大小时不会包含柔性数组成员的部分。要确保在访问柔性数组成员时已经正确分配了额外的存储空间，否则会导致未定义行为                         
  struct s { 
    int n; 
    double d[];                                        // s.d 是柔性数组元素 
  };                                                   // 当你访问灵活数组成员时，访问操作会依据分配给整个结构体对象的内存大小来解释灵活数组的大小，具体来说：灵活数组成员是在结构体中定义的一个不完整数组成员，其大小在编译时未知，当你动态分配结构体内存时，你可以指定灵活数组成员所需的实际大小，访问灵活数组的元素时，编译器假设你已经为结构体的灵活数组部分分配了足够的内存并使用这个大小来解释灵活数组的边界
  struct s t1 = { 0 };                                 // OK：d 如同为 double d[1]，但访问是 UB，如果没有为灵活数组成员分配额外的存储空间，它会表现得像是一个具有1个元素的数组。但是，如果访问该元素或生成一个指向该元素后面位置的指针，则会导致未定义行为
  // struct s t2 = { 1, { 4.2 } };                        // 错误：初始化忽略柔性数组，只能初始化具名成员，灵活数组成员被忽略
  struct s *s1 = malloc(sizeof (struct s) + 64); // 若 sizeof (double) == 8，如同 d 为 double d[8]
  struct s *s2 = malloc(sizeof (struct s) + 40); // 若 sizeof (double) == 8，如同 d 为 double d[5]
  s1 = malloc(sizeof (struct s) + 10);           // 若 sizeof (double) == 8，现在如同 d 为 double d[1]
  double *dp = &(s1->d[0]);                            // OK，获取地址没问题，包含8个完整字节
  *dp = 42;                                            // OK，赋值没问题，包含8个完整字节
  s1->d[1]++;                                          // 未定义行为，不能将超出的2字节作为 double 访问
  s2 = malloc(sizeof (struct s) + 6);             // 同上，但访问为 UB，因为缺少两个字节作为完整的 double
  dp = &(s2->d[0]);                                    // OK，获取地址没问题
  *dp = 42;                                            // 未定义行为，字节数不够
  *s1 = *s2;                                           // 只复制 s.n，没有任何 s.d 的元素，除了 sizeof (struct s) 中捕获的元素，
  print_purple("s sizeof = %zu. int sizeof = %zu. double sizeof = %zu.\n", sizeof(struct s), sizeof(int), sizeof(double));  // 输出 sizeof(int) 的值 sizeof 运算符会忽略灵活数组成员，但可能会有更多的尾部填充
  // struct Invalid {
  //   struct s arr[10];                                  // 非法：具有灵活数组成员的结构体不能作为数组元素
  // };
  // struct AnotherInvalid {
  //   struct s example;                                  // 非法：具有灵活数组成员的结构体不能作为其他结构体的成员
  // };

  struct v {                            
    union {                               // 匿名联合体  匿名联合体是没有名字的联合体类型
      struct { int i, j; };               // 匿名结构体  匿名结构体是没有名字的结构体类型
      struct { long k, l; } w;
    };
    int m;
  } v1;
  v1.i = 2;                               // 7、合法，匿名结构体的成员可以直接在外围结构体或联合体中使用，就好像它们是外围结构体或联合体的成员一样，如果外围结构体或联合体也是匿名的，那么同样的规则递归应用，这意味着更内层的匿名结构体成员也可以直接在更外层的结构体或联合体中使用
  // v1.k = 3;                            // 非法：内层结构体非匿名
  v1.w.k = 5;                             // 合法：使用w名称获取

  struct UndefinedBehaviorExample {       // 8、具名成员是指在结构体或联合体中拥有名字的成员。它们可以直接通过成员名来访问，未定义行为意味着程序的行为不可预测，可能会导致程序运行时崩溃、产生错误结果，甚至出现安全问题
    struct {         // 匿名结构体
        int member1; // 匿名结构体的成员
    };
    union {            // 匿名联合体
        float member2; // 匿名联合体的成员
    };
  };
  struct UndefinedBehaviorExample uexample; // 尝试访问匿名结构体和联合体的成员
  uexample.member1 = 10;                    // 这种访问方式会导致未定义行为
  uexample.member2 = 3.14f;                 // 这种访问方式会导致未定义行为
  print_purple("Member 1: %d\n", uexample.member1);
  print_purple("Member 2: %f\n", uexample.member2);  
  struct DefinedBehaviorExample {           // 定义一个包含匿名嵌套结构体和联合体，并且有具名成员的结构体
    int named_member;                       // 具名成员
    struct {                                // 匿名结构体
        int member1;                        // 匿名结构体的成员
    };
    union {                                 // 匿名联合体
        float member2;                      // 匿名联合体的成员
    };
  };
  struct DefinedBehaviorExample dexample;
  dexample.named_member = 5;                // 访问具名成员
  dexample.member1 = 10;                    // 访问匿名结构体和联合体的成员
  dexample.member2 = 3.14f;                 // 访问匿名结构体和联合体的成员
  print_purple("Named member: %d\n", dexample.named_member);
  print_purple("Member 1: %d\n", dexample.member1);
  print_purple("Member 2: %f\n", dexample.member2);  
  
  struct y;             // 9、前置声明 struct y ，通过前向声明，可以让结构体相互引用，解决了在定义相互依赖数据结构时的困难。前向声明使得编写复杂的数据结构变得更加灵活和可行
  struct x {            // 定义 struct x，包含一个指向 struct y 的指针
      struct y *p;      // 这里 struct y 是不完整类型，只能声明指针,前向声明允许在定义结构体之前引用它。前向声明的结构体在定义之前被视为不完整类型，只能用来声明指针但不能直接操作
      // 其他成员...
  };
  struct y {            // 现在定义 struct y，包含一个指向 struct x 的指针
      struct x *q;      // 这里 struct x 是完整类型
      // 其他成员...
  };
  struct x instanceX;             // 创建结构体的实例
  struct y instanceY;             // 创建结构体的实例
  instanceX.p = &instanceY;       // 相互引用
  instanceY.q = &instanceX;       // 相互引用
  print_purple("instanceX.p: %p\n", (void*)instanceX.p);
  print_purple("instanceY.q: %p\n", (void*)instanceY.q);
  g();                            // 如果在一个作用域中重新声明了一个结构体标签，它会隐藏在更高作用域中具有相同标签的结构体，直到当前作用域结束
  struct qs global_instance;
  global_instance.a = 10;         // 使用全局定义的 struct qs
  print_purple("Global instance a: %d\n", global_instance.a);

  struct Node {
    int value;
    struct Node* next;            // 10、指向同类型结构体的指针成员，此行 Node 还不是完整类型 只能是指针
  };
  struct Node node1;
  struct Node node2;
  node1.value = 1;
  node1.next = &node2;
  node2.value = 2;
  node2.next = NULL;
  print_purple("Node1 value: %d\n", node1.value);
  print_purple("Node2 value: %d\n", node1.next->value);    
  
  struct Container {              // 11、定义一个结构体包含嵌套类型和枚举
    struct Inner {
      int x;
    } inner;
    enum { RED, GREEN, BLUE } color;
  };
  struct Container container;
  container.inner.x = 10;         // 访问嵌套结构体和枚举
  container.color = GREEN;        // 访问嵌套结构体和枚举
  print_purple("Inner x: %d\n", container.inner.x);
  print_purple("Color: %d\n", container.color);  

  int color = BLUE;               // 直接访问枚举项（在外围作用域可见）
  print_purple("Color from enum: %d\n", color);

  struct car // 声明结构体类型
  {
    char *make;
    int year;
  }; 
  struct car c = {.year = 1923, .make = "Nash"}; // 声明并初始化之前声明的结构体类型的对象
  print_purple("Car: %d %s\n", c.year, c.make);
 
  struct spaceship // 声明结构体类型、该类型的对象和指向它的指针
  {
    char *model;
    int max_speed;
  } ship = {"T-65 X-wing starfighter", 1050}, *pship = &ship;
  print_purple("Spaceship: %s. Max speed: %d km/h\n\n", ship.model, ship.max_speed);
  char* pmake = (char *)pship; // 能转型指向结构体的指针为指向其首成员的指针，反之亦然
  pship = (struct spaceship *)pmake; 

  struct As {char a; double b; char c;};  // 打印结构体的成员偏移量和结构体的整体大小，来展示结构体对齐和填充的概念，在 C 语言中，编译器为了满足硬件对齐要求，可能会在结构体成员之间插入填充字节（padding bytes），以确保每个成员在内存中恰当地对齐
  print_purple(
      "Offset of char a = %zu\n"
      "Offset of double b = %zu\n"
      "Offset of char c = %zu\n"
      "Size of struct As = %zu\n\n",
      offsetof(struct As, a),
      offsetof(struct As, b),
      offsetof(struct As, c),
      sizeof(struct As)
  );
  struct Bs {char a; char b; double c;}; // 打印结构体的成员偏移量和结构体的整体大小，来展示结构体对齐和填充的概念，在 C 语言中，编译器为了满足硬件对齐要求，可能会在结构体成员之间插入填充字节（padding bytes），以确保每个成员在内存中恰当地对齐
  print_purple(
      "Offset of char a = %zu\n"
      "Offset of char b = %zu\n"
      "Offset of double c = %zu\n"
      "Size of struct Bs = %zu\n\n",
      offsetof(struct Bs, a),
      offsetof(struct Bs, b),
      offsetof(struct Bs, c),
      sizeof(struct Bs)
  );

#endif // STRUCT_TYPE struct 类型  

  return 0;
}

/**
* @brief             brief
*
* @note              Revision History
*/
void g(void) {
    struct qs;                   // 新的局部 struct qs 的前置声明它隐藏全局 struct qs 直至此块结束
    struct qs *p;                // 指向局部 struct qs 的指针，若无上面的前置声明，则它会指向文件作用域的 qs
    struct qs { char* p; };      // 局部 struct qs 的定义
    struct qs local_instance;    // 在这个作用域内，struct qs 是局部定义的，不是全局的 struct qs
    local_instance.p = "Local struct s"; // 使用局部定义的 struct qs
    print_purple("Local instance p: %s\n", local_instance.p);
}