/**
* @file              arrays.c
* @brief             数组 类型代码文件，测试数组类型包括 array
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.16
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.13 <td>0.1             <td>brightl         <td>全局、局部枚举声明方式
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>数组类型使用特性、存储大小
* <tr><td>2024.11.13 <td>0.2             <td>brightl         <td>一维数组、二维数组、三维数组、多维数组
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

void fadd(double a[static 10], const double b[static 10]); // [static] 不需要边界检查
int foo(const int a[20]); // const 限定符 转为指针 int f(const int* a); 
int goo(const int a[const 20]); // const 限定符 转为指针 int f(const int* a);第二个 const 关键字在数组大小前没有实际的语义作用。编译器会忽略这个 const
void fsadd(double a[static restrict 10], const double b[static restrict 10]); //
int al(void); // 重分配数组的大小、VAL数组
void foovla(size_t x, int a[*]); // 带有*的变长数组
void printArrayElements(int *p, size_t size); // 隐式转换 arr -> ptr
void arr_ptr_fn(int a[], int sz); // 数组类型作为形参转换
void arr_fn(int (*a)[3]); // 数组指针作为形参不会转换 


/**
* @brief             一般的数组声明符的语法：[static(可选) 限定符(可选) 表达式(可选)] 属性说明符序列(可选)、[限定符(可选) static(可选) 表达式(可选)] 属性说明符序列(可选)、未指定大小的 VLA 的声明符：[限定符(可选) * ] 属性说明符序列(可选)
*
* @note              在数组声明的声明语法中，类型说明符序列指定元素类型（必须是完整的对象类型），数组类型有几种变体：已知常量大小的数组、变长度数组，以及未知大小数组
*/
#define ARRAY_TYPE

/**
* @brief             数组类型分类
*
* @note              Revision History
*/
#ifdef ARRAY_TYPE
/*
普通数组
*/
float cats[11], *dogs[17];
const int arrc[10];         
static int arrs[10];
void arrsr(double a[static restrict 10], const double b[static restrict 10]);

/*
变长数组 非常量长度数组与从它们派生的类型（指向它们的指针等等）被通称为“可变修改类型”（VM）
任何可变修改类型的对象只能声明于 块作用域 或 函数原型作用域 中
*/
extern int n;
// int A[n];                         // 错误：文件作用域 VLA
// extern int (*p2)[n];              // 错误：文件作用域 VM
int B[100];                          // OK：文件作用域的已知常量大小数组
void fvla(int m, int C[m][m]);       // OK：原型作用域 VLA
int *static_pointer;                 // 具有静态存储期的指针
// extern int arr[n];                   // 不合法，VLA类型的变量不能具有链接，这意味着你不能将VLA声明为外部变量或静态全局变量
 
/*
未知大小数组：若忽略数组声明器中的 表达式，则它声明一个未知大小数组。除了函数形参列表中的情况（这种数组被转换成指针），以及有初始化器的情况之外，这种类型都是不完整类型（注意，以 * 代替大小声明的拥有未指定大小的 VLA 是完整类型） (C99起)
*/
extern int arr[];   // arr 的类型是“边界未知的 int 数组”
int a[] = {1,2,3};  // a 的类型是“3 个 int 的数组”

#endif // ARRAY_TYPE array 数组

/**
* @brief             数组是由连续无空隙分配的，拥有特定元素类型的对象构成的。这些对象的数目数量（数组大小）在数组生存期间决不改变
* @return  int       Return Description
*
* @note              Revision History
*/
int arrays_fn(void) {
#ifdef ARRAY_TYPE
  /*
  在数组声明的声明语法中，类型说明符的序列指定元素类型（必须是一个完整对象类型如 int、char），而 声明符 的形式为 [10]、[restrict 10]
  一般的数组 声明符 的语法 [static(可选) 限定符(可选) 表达式(可选)] 属性说明符序列(可选)、[限定符(可选) static(可选) 表达式(可选)] 属性说明符序列(可选)
  未指定大小的 VLA 的声明符（只能出现于函数原型作用域）[限定符(可选) * ] 属性说明符序列(可选)
  表达式 任何无逗号运算符的表达式，表明数组中的元素数量
  限定符 const、restrict 和 volatile 限定符的任意混合，只允许出现于函数形参列表中，它们对数组形参所转换得到的指针类型赋予限定
  属性说明符序列	(C23起)可选的属性列表，应用到被声明的数组

  基本声明形式：int arr[10];，声明一个包含 10 个 int 的数组
  带 const 限定符：void foo(const int arr[10]); 声明一个参数不能修改的数组
  带 static 关键字：void bar(int arr[static 10]); 提示编译器数组至少有 10 个元素
  带 restrict 限定符：void baz(int arr[restrict 10]); 提示编译器优化指针访问
  未指定大小的 VLA：void qux(int n, int arr[n][*]); 声明一个可变长度数组
  属性说明符序列：void fun(int arr[10] [[deprecated]]); 向编译器传达额外信息  
  */
  float cats[11], *dogs[17];       // cats 是 11 个 float 组成的数组，dogs 是 17 个指向 float 的指针组成的数组
  const int arrc[10];              // 这声明了一个长度为 10 的 const int 数组 arrc，数组中的元素是常量，这意味着一旦初始化后，其元素值不能被修改
  static int arrs[10];             // 如果声明在函数外 static 关键字使得这个数组的作用域被限制在声明它的文件中（文件作用域），但其生命周期是整个程序运行期间、如果声明在函数内：static 关键字使得数组在函数的多次调用间保持其值（静态局部变量）
  // restrict int arrr[10];        // 非法 restrict 只能用于指针，而不能直接用于数组声明，int arrr[10]; int *restrict p = arrr; // p 是一个指向数组 arrr 的 restrict 指针
  // int arrc[const 10];           // 非法 限定符 const、restrict 和 volatile 限定符的任意混合，只允许出现于函数形参列表中，它们对数组形参所转换得到的指针类型赋予限定
  // int arrs[static 10];          // 非法 限定符 const、restrict 和 volatile 限定符的任意混合，只允许出现于函数形参列表中，它们对数组形参所转换得到的指针类型赋予限定
  // int arrr[restrict 10];        // 非法 限定符 const、restrict 和 volatile 限定符的任意混合，只允许出现于函数形参列表中，它们对数组形参所转换得到的指针类型赋予限定
  // int arrvla[10][*];            // 非法 若大小是 * ，则声明是对于未指定大小的 VLA 的。这种声明只能出现于函数原型作用域，并声明一个完整类型的数组
  void fool(int arrc[const 10]);   // void foo(int arrc[const 10]);：实际上等价于 void foo(int *arrc);。虽然语法上允许 const 出现在数组大小前面，但它在语义上没有影响
  void bar(int arrs[static 10]);   // static 关键字在这里用于表示传递给 arrs 的指针必须指向至少包含 10 个 int 元素的数组。这是一种优化提示，告知编译器可以假定传入的数组至少有 10 个元素，从而可以进行相应的优化，如减少边界检查
  void baz(int arrr[restrict 10]); // restrict 限定符表示指针 arrr 是唯一访问其所指向数据块的方式。在函数 baz 中，arrr 指针是访问数据的唯一方式，没有其他指针会访问相同的数据。使用 restrict 限定符可以帮助编译器进行优化，因为它可以假设没有别名指针会修改 arrr 所指向的数据
  void qux(int n, int arrvla[n][*]);  // 声明了一个函数，该函数接受一个整数和一个二维可变长度数组作为参数 n 指定了数组的第一维大小，而第二维的大小未在声明中指定（使用 [*] 表示）这种声明方式允许函数处理在运行时确定大小的数组，使代码更加灵活
  
  /*
  数组类型有几种变体：已知常量大小的数组、变长度数组，以及未知大小数组
  1、已知常量大小数组 若数组声明符中的 表达式 为整数常量表达式，拥有大于零的值，且元素类型是一种拥有已知常量大小的类型（即元素不是VLA） (C99起)，则声明符声明的是已知常量大小的数组，
  已知常量大小的数组可以用数组初始化器提供它们的初始值
  在函数形参列表中，数组声明符中允许有额外的语法元素：关键词 static 及 限定符，它们可以以任意顺序在大小表达式之前出现（即便省略大小表达式也可以出现它们）
  对于函数中在数组形参的 [ 和 ] 中使用关键词 static 的情况，每次对这种函数函数调用中，实际参数的值必须是一个指向数组首地址的合法指针，该数组至少有 表达式 所指定的元素数目
  若存在 限定符，则它们对数组参数类型所转换得的指针类型赋予限定
  */
  int n[10];                    // 整数常量是常量表达式
  char o[sizeof(double)];       // sizeof 是常量表达式
  enum { MAX_SZ=100 };
  int ne[MAX_SZ];               // 枚举常量是常量表达式
  int a[5] = {1,2,3};           // 声明 int[5] 数组 且初始化为 1,2,3,0,0
  char str[] = "abc";           // 声明 char[4] 数组 且初始化为 'a','b','c','\0'
  double fa[10] = {0}, fb[20] = {0};
  fadd(fa, fb);            // OK static 边界检查通过
  double fx[5] = {0};
  fadd(fx, fb);            // 未定义行为：数组参数太小  fx static 边界检查不通过
  foo(fa);
  goo(fa);
  fsadd(fa, fb);           // 编译器数组优化

  /*
  2、变长度数组 非常量长度数组 若 表达式 不是整数常量表达式，则数组声明器声明一个非常量大小的数组（VLA）
  变长数组（VLA, Variable Length Array）和变长修改类型（VM, Variable Modified type）有一些特定的限制和要求，变长数组 (VLA): 数组的大小在编译时未知，而在运行时确定的数组、变长修改类型 (VM): 包含VLA或者指向VLA的指针的类型
  每次控制流经过该声明时，会求值 表达式（而且它必须每次求值为大于零的值），然后分配数组（对应地，VLA 的生存期在其声明离开作用域时结束）。VLA 实例的大小不会在其生存期中改变，但在另一次经过同一代码时，它可能被分配不同大小
  若大小是 * ，则声明是对于未指定大小的 VLA 的。这种声明只能出现于函数原型作用域，并声明一个完整类型的数组。其实，所有函数原型作用域中的 VLA 声明符都被处理成如同用 * 替换 表达式
  变长数组 非常量长度数组与从它们派生的类型（指向它们的指针，等等）被通称为“可变修改类型”（VM）。任何可变修改类型的对象只能声明于块作用域或函数原型作用域中
  VLA 必须拥有自动或分配存储期，指向 VLA 的指针，但不是 VLA 自身亦可拥有静态存储期，VM 类型不能拥有链接
  变长数组 可变修改的类型不能是结构体或联合体的成员，变长数组和变长修改类型不能作为结构体或联合体的成员。原因在于结构体和联合体的大小在编译时必须是确定的，而VLA的大小在编译时是未知的
  C标准允许编译器定义一个宏常量 __STDC_NO_VLA__ 来指示是否支持VLA和VM类型：C99标准: 如果定义为1，表示编译器不支持VLA和VM类型、C11标准（到C23前）: 如果定义为1，表示编译器不支持具有自动存储期的VLA对象，但仍必须支持分配存储期的VLA对象
  */
  al();             // 重分配 a 数组的大小 10 次，每次拥有不同大小                                                
  foovla(5, a);  // 若大小是 * ，则声明是对于未指定大小的 VLA 的。这种声明只能出现于函数原型作用域，并声明一个完整类型的数组。其实，所有函数原型作用域中的 VLA 声明符都被处理成如同用 * 替换 表达式
  int n1 = 3;
  int A[n1];        // 变长数组 可变修改类型的对象声明于块作用域
  int (*p2)[n1];    // 变长数组指针 可变修改类型的对象声明于块作用域
  int B[100];                          
  void fvla(int m, int C[m][m]);  // 变长数组指针 可变修改类型的对象声明于函数原型作用域
  void quB(int n, int ala[n][*]); // 变长数组指针 可变修改类型的对象声明于函数原型作用域
  int arr[n1];                          // arr 是一个 VLA，具有自动存储期
  int *arrn = malloc(n1 * sizeof(int)); // arrn 是一个 VLA，由 molloc 分配，动态分配内存
  // static int arr[n1];                   // 这是不合法的，VLA 不能具有静态存储期，尝试声明一个静态VLA
  static_pointer = arr;                 // 静态指针指向 VLA，指针具有静态存储期，VLA具有自动存储期
  int c[n1][n1];
  fvla(n1, c);                     // 变长数组存储期与作用域
  // struct tag {                          // 可变修改的类型不能是结构体或联合体的成员
  //   int z[n1];                          // 错误： VLA 结构体成员
  //   int (*y)[n1];                       // 错误： VM 结构体成员
  // };

  /*
  3、未知大小数组 若忽略数组声明器中的 表达式，则它声明一个未知大小数组。除了函数形参列表中的情况（这种数组被转换成指针），以及有初始化器的情况之外，这种类型都是不完整类型（注意，以 * 代替大小声明的拥有未指定大小的 VLA 是完整类型） (C99起)
  在 struct 定义中，未知大小数组可以作为最后一个元素出现（只要有至少一个其他具名成员），这种情况下，这是称为柔性数组成员的特殊情形。细节见 struct
  */
  extern int x[];                // x 的类型是“边界未知的 int 数组”
  int aun[] = {1,2,3};           // a 的类型是“3 个 int 的数组”
  struct s {int n; double d[];}; // s.d 是柔性数组成员
  struct s *s1 = malloc(sizeof (struct s) + (sizeof (double) * 8)); // 如同 d 是 double d[8]

  /*
  4、限定符 在C99及以后的标准中，如果数组类型声明中有 const、volatile 或 restrict 限定符，这些限定符实际上应用于数组的元素类型，而不是数组类型本身。这可以通过使用 typedef 来实现
  在C23之前的标准中，数组类型被认为与其元素类型具有相同的限定符。这意味着数组类型本身没有 const、volatile 或 restrict 限定符，只是其元素类型具有这些限定符
  在C23标准中，对数组类型的处理更为严格，数组类型本身被认为具有这些限定符。如果一个数组是 const 的，那么这个数组类型也被认为是 const 的，因此不允许将 const 数组类型转换为 void* 指针
  在C标准中，不允许直接将 _Atomic 限定符应用于数组类型，但允许数组的元素类型是原子类型
  */
  typedef int cA[2][3];                         // 在这个例子中，typedef 定义了一个二维数组类型 cA。当我们声明 const cA ca 时，实际上我们声明的是一个二维数组，其元素类型是 const int。因此，ca[0] 的类型是 const int*，而不是 int*，这就是为什么尝试将 ca[0] 赋值给 int* 指针 pi 会产生错误
  const cA ca = {{4, 5, 6}, {7, 8, 9}};         // const int 的数组的数组
  int* cpi = ca[0];                             // 错误：ca[0] 类型为 const int*
  void *unqual_ptr = ca; // C23 前 OK；C23 起错误 C23之前，将一个 const 数组类型转换为 void* 是合法的，因为数组类型本身没有 const 限定符，仅其元素类型有、在C23标准下，这个转换将被视为错误，因为 ca 是一个 const 数组类型，不能转换为一个未限定的 void* 指针
  typedef int tA[2];
  // _Atomic tA ta0 = {0};    // 错误，_Atomic tA ta0 和 _Atomic(tA) ta1 是错误的，因为 _Atomic 不能应用于数组类型
  // _Atomic(tA) ta1 = {0};   // 错误，_Atomic tA ta0 和 _Atomic(tA) ta1 是错误的，因为 _Atomic 不能应用于数组类型
  _Atomic int ta2[2] = {0};  // OK，_Atomic int ta2[2] 和 _Atomic(int) ta3[2] 是合法的，因为它们声明了一个数组，其元素类型是 _Atomic int
  _Atomic(int) ta3[2] = {0}; // OK，_Atomic int ta2[2] 和 _Atomic(int) ta3[2] 是合法的，因为它们声明了一个数组，其元素类型是 _Atomic int
  
  /*
  5、赋值 数组类型的对象不是可修改左值，尽管它们可以取地址，但它们不能出现于赋值运算符的左侧。不过，拥有数组成员的结构体是可修改左值，并可以赋值
  在C语言中，数组名本身不是可修改左值。这意味着你不能直接对一个数组整体进行赋值操作。数组名在表达式中通常会被转换为指向其第一个元素的指针，但它不能出现在赋值运算符的左侧
  结构体是可修改左值: 与数组不同，结构体类型的对象是可修改左值。这意味着你可以对结构体整体进行赋值操作。即使一个结构体包含数组成员，结构体整体仍然是可修改的，这是因为结构体在C语言中的定义允许对整个结构体对象进行操作，包括赋值、传递和返回。这些操作会触发对结构体中所有成员（包括数组成员）进行逐成员的赋值或拷贝
  */
  int aq[3] = {1, 2, 3}, bq[3] = {4, 5, 6};
  int arrq[5];
  int *pq = arrq;                               // 合法，arrq 被转换为指向其第一个元素的指针
  // arrq = {1, 2, 3, 4, 5};                    // 错误，不能对数组整体赋值
  int (*pq1)[3] = &aq;                          // OK，可以取地址
  // aq = bq;                                   // 错误，aq 是数组
  struct { int cq[3]; } sq1, sq2 = {3,4,5};
  sq1 = sq2;                                    // OK：可以对拥有数组成员的结构体赋值
  
  /*
  6、数组到指针转换 在C语言中，数组到指针的隐式转换是一种常见的操作。这个转换在特定的上下文中会自动发生，将数组类型的左值表达式转换为指向其第一个元素的指针。这种转换的结果是一个非左值指针，可以用于指向数组的元素
  隐式转换的上下文不会转换为指针的情况：作为取地址运算符（&）的操作数、作为 sizeof 运算符的操作数、作为 typeof 和 typeof_unqual 的操作数（C23起）、作为用于数组初始化的字符串字面量、作为 _Alignof 的操作数（C11起）
  数组类型的左值表达式会隐式转换为指向其首元素的指针：函数参数、表达式中的操作数
  当数组类型用于函数形参列表时，它会转换成对应的指针类型： int f(int a[2]) 和 int f(int* a) 声明同一个函数。因为函数实际参数类型为指针类型，使用数组实参的函数调用会进行一个数组到指针转换；被调用函数无法获得实参数组的大小，所以必须显式传递size
  */
  int arrcs[5];           
  int (*pcs)[5] = &arrcs;           // pcs 是指向数组的指针，当数组作为 & 运算符的操作数时，得到的是数组的地址，而不是数组首元素的指针
  size_t sizecs = sizeof(arrcs);    // sizecs 是数组的大小，单位是字节，当数组作为 sizeof 运算符的操作数时，得到的是数组的大小，而不是指向数组首元素的指针
  typeof(arrcs) another_arrcs;      // another_arrcs 是与 arrcs 类型相同的数组，typeof 和 typeof_unqual 运算符会获得数组的真实类型，而不是进行隐式转换，需要 C23 支持，假设 typeof 是可用的
  char strcs[] = "hello";           // strcs 是字符数组，包含字符串 "hello" 和结尾的 '\0'，字符串字面量用于初始化字符数组时，不会发生隐式转换
  size_t aligncs = _Alignof(arrcs); // aligncs 是数组的对齐要求，_Alignof 运算符会获得数组的对齐要求，而不是进行隐式转换
  register int rarr[5];             // register 修饰符和数组 如果声明一个数组为 register，则尝试对该数组取地址的行为是未定义的。这是因为 register 修饰符建议编译器将变量存储在寄存器中，而不是内存中，数组通常不适合存储在寄存器中，这是因为 register 修饰符和数组的存储需求冲突，编译器无法保证将数组存储在寄存器中
  // int *rp = &rarr;               // 错误：行为未定义，不能取 `register` 数组的地址
  int arrfun[5] = {1, 2, 3, 4, 5};
  printArrayElements(arrfun, 5);      // 隐式转换: arrfun 转换为指向其首元素的指针，在调用 printArrayElements(arrfun, 5) 时，arrfun 被隐式转换为指向其首元素的指针
  int *pfun = arrfun;                         // 隐式转换: arrfun 转换为指向其首元素的指针，在 int *pfun = arrfun; 赋值中，arrfun 同样被隐式转换为指向其首元素的指针
  for (int i = 0; i < 5; ++i) {
    print_purple("%d ", pfun[i]);
  }
  print_purple("\n");
  int afun[3] = {1,2,3};
  int* pfun1 = a;
  print_purple("afun is %zu\n", sizeof afun);         // 打印数组大小
  print_purple("pfun1 is %zu\n", sizeof pfun1);       // 打印指针大小  
  arr_ptr_fn(afun, 3);                          // 数组形参转换为指针 当你在函数声明中使用数组形参时，编译器会将该参数转换为指向数组首元素的指针。这意味着以下两个函数声明实际上是等价的
  arr_fn(&afun);                                    // 传递指向数组的指针（无需传递其大小）
  
  /*
  7、多维数组 当数组的元素是另一个数组时，我们称数组是多维的
  当用数组到指针转换时，多维数组被转换成指向其首元素的指针，例如指向首行的指针
  若支持 VLA 则 (C11 起)多维数组可以在每一维度可变修改，允许数组的每一维度在运行时动态确定大小。例如，int am2[nm][2*nm] 是一个二维VLA数组，大小在运行时由 nm 决定
  */
  int a1[2] = {1, 2};                    // 一维数组 元素个数 1，2
  int *pm0 = a1;                         // 指向一维数组的首元素
  int am[2][3] = {{1,2,3}, {4,5,6}};     // 二维数组 2x3 矩阵（2 个元素的数组，每个元素为 3 个 int 的数组）可视作行主导排列的 2x3 矩阵
  int (*pm1)[3] = am;                    // 指向首个 3 个元素行的指针、pm1 是一个指向包含3个整数的数组的指针、am 被隐式转换为指向它的首行的指针，即 int (*)[3] 类型
  int bm[3][3][3];                       // 三维数组 3x3x3 立方体
  int (*pm2)[3][3] = bm;                 // 指向首个 3x3 平面的指针 、pm2 是一个指向 3x3 二维平面的指针、bm 被隐式转换为指向其首个 3x3 平面的指针，即 int (*)[3][3] 类型
  int nm = 10;
  int am2[nm][2*nm];                     // 若支持 VLA 则 (C11起)多维数组可以在每一维度可变修改        

  /*
  8、零长度数组 在C语言标准中，不允许声明零长度数组。这意味着你不能定义一个长度为零的数组。
  一些编译器（特别是C99标准之前）提供零长度数组作为扩展，典型用例是实现柔性数组成员（FAM）。柔性数组成员在结构体中用于定义可变长度的最后一个数组成员
  */
  int arrv[0];  // 这是非法的，标准C语言不允许声明零长度数组
  struct S {    // C99及以后的标准：引入了柔性数组成员的标准语法
    int n;
    int arr[];  // 柔性数组成员，允许在定义结构体时不指定数组大小
  };

  /*
  9、副作用
  可变长度数组（VLA）VLA 是C99引入的一种特性，允许数组的大小在运行时确定，而不是编译时
  大小表达式的副作用：如果VLA的大小表达式中包含副作用，编译器保证这些副作用将正确产生。副作用是指表达式在求值过程中对程序状态的改变，例如++（递增）操作符
  */
  int nv = 5;
  int arrvl[nv];  // 合法的VLA语法，数组大小由变量nv决定
  int nv1 = 5, mv1 = 5;
  size_t szv1 = sizeof(int (*[nv1++])[mv1++]);  // nv1 和 mv1 作为数组大小表达式的一部分，int (*[nv1++])[mv1++]：这是一个指向大小为mv1++的数组的指针数组，其大小为nv1++、sizeof 操作符：计算表达式的大小，而不实际创建该类型的对象，副作用保证：C标准保证在上述表达式中nv1会被自增，mv1也会被自增，但在某些情况下（如sizeof操作的结果不依赖副效应时），mv1可能不会被自增，具体行为：语句执行后，nv1一定会增加1，而mv1可能增加也可能不增加，这取决于编译器的实现和优化
  /*
  int (*[n++])[m++] 表示一个包含 n++ 个指向 int [m++] 数组的指针数组
  sizeof(int (*[n++])[m++]) 表达式：解析为一个指向数组的指针的大小，其中该数组包含n++个元素，每个元素是一个大小为m++的数组、n和m的副作用（自增操作）应在表达式求值期间产生
  执行顺序：n最初为5，m最初为5、sizeof计算类型的大小，但不实际创建该类型的对象、求值期间，n和m应该自增
  结果：sizeof返回的是类型的大小，而副作用使得n变为6、m的自增操作在某些编译器实现中可能被优化掉，因此m可能保持为5或变为6
  
  int * n10[10] 这个声明表示一个包含 10 个元素的数组，每个元素是一个指向 int 类型的指针、n10 是一个数组这个数组有 10 个元素，每个元素是一个指向 int 类型的指针
  int (*n20)[10] 这个声明表示一个指向包含 10 个 int 类型元素的数组的指针、n20 是一个指针这个指针指向一个数组，该数组包含 10 个 int 类型的元素
  int (*n30[5])[10] 这个声明表示一个包含 5 个元素的数组，每个元素是一个指向包含 10 个 int 类型元素的数组的指针、n30 是一个数组。这个数组有 5 个元素，每个元素是一个指向包含 10 个 int 类型元素的数组的指针
  */

#endif // ARRAY array 类型    

  return 0;  
}

/**
* @brief             [static] 边界检查
* @param   a         Param Description
* @param   b         Param Description
*
* @note              对 fadd 的调用可能进行编译时边界检查 并且允许诸如预读取 10 个 double 的优化
*/
void fadd(double a[static 10], const double b[static 10]) { 
  for (int i = 0; i < 10; i++)
  {
    if (a[i] < 0.0) return;
    a[i] += b[i];
  }
}

/**
* @brief             const 关键词
* @param   a         Param Description
* @return  int       Return Description
*
* @note              Revision History
*/
int foo(const int a[20]){
  // 此函数中，a 类型为 const int*（指向 const int 的指针），由于数组参数在函数声明中会退化为指针，因此 const int a[20] 会被理解为 const int *a，a 是一个指向 const int 类型的指针，这意味着通过 a 不能修改数组元素的值
  // a[0] = 10; // 这里不允许修改数组元素，因为它们是 const int f(const int a[10]); 等价于 in t f(const int *a); 这确保了 a 是一个 const 指针，指向一个常量整数数组的首元素，函数内部不能修改数组的内容
  return 0;
}

/**
* @brief             const 关键词
* @param   a         Param Description
* @return  int       Return Description
*
* @note              Revision History
*/
int goo(const int a[const 20]) {
  // 此函数中，a 类型为 const int* const（指向 const int 的 const 指针）
  // a[0] = 10;
  return 0; // 尽管 const int g(const int a[const 10]); 实际上等价于 int a(const int *a); 虽然语法上允许 第二个 const 出现在数组，但它在语义上没有影响
}

/**
* @brief             restrict 关键词
* @param   a         Param Description
* @param   b         Param Description
*
* @note              static: 在函数参数中的数组声明中，static 关键字表示：当函数被调用时，传递给参数 a 和 b 的指针不应为空，并且指向的数组至少有 10 个元素。这个信息可以帮助编译器进行优化，因为它可以假定数组中至少有 10 个元素，不需要进行边界检查
* @note              restrict: restrict 关键字表示：在函数的生命周期内，指针 a 和 b 是唯一访问它们所指向内存区域的方式。这意味着在函数 fadd 中，指向数组 a 和 b 的指针不会别的指针所别引用。这允许编译器进行更激进的优化，因为它可以假定没有别的途径来修改或访问这些数组
*/
void fsadd(double a[static restrict 10], const double b[static restrict 10]) {
  /*
  代码逻辑 循环遍历数组 a 和 b 的每一个元素，从索引 0 到 9、如果数组 a 的当前元素 a[i] 小于 0.0，则终止循环、如果 a[i] 不小于 0.0，则将 b[i] 的值加到 a[i] 上
  优化效果 由于使用了 static 和 restrict 关键字，编译器可以做以下优化 循环展开: 编译器可能会将循环展开，以减少循环控制开销。例如，它可以将每次迭代处理多个数组元素，以减少循环次数，循环重排: 编译器可以重新排列循环中的代码，以提高缓存命中率和指令流水线效率。比如在确保没有数据依赖的情况下，编译器可以对计算操作进行重排序
  */
  for (int i = 0; i < 10; i++) {  // 循环可被打开或重排
    if (a[i] < 0.0)
        break;
    a[i] += b[i];
  }
  /*
  循环展开 是一种编译器优化技术，通过减少循环控制开销来提高程序的运行效率。具体做法是将循环体的操作重复多次，以减少循环控制代码的执行次数，减少循环控制开销: 通过减少循环控制代码的执行次数，总体上减少了 CPU 的指令执行数量。提高指令流水线效率: 连续的计算操作可以更好地适应 CPU 指令流水线，提高执行效率
  for (int i = 0; i < 10; i += 2) {
    if (a[i] < 0.0)
      break;
    a[i] += b[i];

    if (a[i + 1] < 0.0)
      break;
    a[i + 1] += b[i + 1];
  }  
  */

  /* 
  循环重排 是指编译器在确保数据依赖关系不被破坏的前提下，对循环中的代码进行重排序，例如，将条件判断和加法操作分离，以便更好地利用 CPU 的分支预测和流水线能力
  for (int i = 0; i < 10; i++) {
    if (a[i] >= 0.0) {
      a[i] += b[i];
    } else {
      break;
    }
  }  
  */
}

/**
* @brief             重新分配 n 变长数组
* @return  int       Return Description
*
* @note              可变长、性能开销评估
*/
int al(void) {
  int n = 1;
label:;
  int a[n];        // 重分配 10 次，每次拥有不同大小
  print_purple("The array has %zu elements. %zu. %zu. address = %p\n", sizeof a / sizeof *a, sizeof a, sizeof *a, &a);
  if (n++ < 10)
    goto label;  // 离开作用域的 VLA 结束其生存期
  return 0;    
}

/**
* @brief             带 * 的变长数组
* @param   x         Param Description
* @param   a         Param Description
*
* @note              若大小是 * ，则声明是对于未指定大小的 VLA 的。这种声明只能出现于函数原型作用域，并声明一个完整类型的数组。其实，所有函数原型作用域中的 VLA 声明符都被处理成如同用 * 替换 表达式
*/
void foovla(size_t x, int a[x]) { // 只能是 x 替代 * 变长数组（VLA, Variable Length Array）和常规数组有一些关键的区别，特别是在函数参数传递和局部变量的使用中。这些区别会影响到 sizeof 操作符的结果
  /*
  函数参数中的变长数组: 在函数参数中声明的变长数组实际上是一个指针。sizeof 操作符返回的是指针的大小，而不是数组本身的大小
  局部变量中的变长数组: 在函数体内声明的变长数组是一个真正的数组。sizeof 操作符返回的是整个数组的大小
  */
  int b[x]; 
  print_purple("size of a %zu. %zu\n", sizeof a, sizeof *a); // 在函数参数列表中声明 int a[x]，实际上并不会分配一个真正的数组，而是等同于 int *a。这与C语言的数组参数传递规则有关 在函数参数中传递数组时，编译器实际上传递的是指向数组第一个元素的指针。因此 sizeof a 计算的是指针的大小，而不是数组的大小。sizeof *a 是指针所指向的元素的大小，也就是 sizeof(int)
  print_purple("size of b %zu. %zu\n", sizeof b, sizeof *b); // 在函数体内声明 int b[x] 时，b 是一个真正的变长数组。对于变长数组，sizeof 操作符的行为与普通的固定大小数组是一样的 sizeof b 计算的是整个数组的大小，即 x * sizeof(int)。sizeof *b 是数组第一个元素的大小，也就是 sizeof(int)
}

/**
* @brief             变长数组的作用域与存储期
* @param   m         Param Description
* @param   C         Param Description
*
* @note              Revision History
*/
void fvla(int m, int C[m][m]) {             // OK ：块作用域/自动存储期到 VLA 的指针
  typedef int VLA[m][m];                    // OK ：块作用域 VLA
  int D[m];                                 // OK ：块作用域/自动存储期 VLA
  //  static int E[m];                      // 错误：静态存储期 VLA
  //  extern int F[m];                      // 错误：拥有链接的 VLA
  int (*s)[m];                              // OK：块作用域/自动存储期 VM
  s = malloc(m * sizeof(int));              // OK：s 指向已分配存储中的 VLA
  //  extern int (*r)[m];                   // 错误：拥有链接的 VM
  static int (*q)[m] = &B;                  // OK：块作用域/静态存储期的 VM
}

/**
* @brief             数组和指针的转换
* @param   p         Param Description
* @param   size      Param Description
*
* @note              Revision History
*/
void printArrayElements(int *p, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    print_purple("%d ", p[i]);
  }
  print_purple("\n");
}

/**
* @brief             数组类型作为形参转换
* @param   a         Param Description
* @param   sz        Param Description
*
* @note              实际上声明 void f(int* a, int sz)
*/
void arr_ptr_fn(int a[], int sz) { // 实际上声明 void f(int* a, int sz)，需要显式传递数组大小，由于数组在传递时被转换为指针，函数内部无法直接确定数组的大小。为了处理整个数组，必须显式传递数组的大小
  for(int i = 0; i < sz; ++i) {
    print_purple("%d", a[i]);
  }
  print_purple("\n");
}

/**
* @brief             数组指针作为形参不会转换 
* @param   a         Param Description
*
* @note              不会对数组指针形参进行转换
*/
void arr_fn(int (*a)[3]) {         // 不会对数组指针形参进行转换，当一个函数参数被声明为指向数组的指针时，这种声明方式不会进行数组到指针的转换。这是因为指向数组的指针本身已经是一个指针类型，没有必要进行进一步的转换
  for (int i = 0; i < 3; ++i) {    // 参数 a 被声明为 int (*a)[10]，它表示一个指向包含10个整型元素的数组的指针。由于 a 本身是一个指针，因此不需要进行任何额外的数组到指针转换。a 可以直接用于访问数组中的元素
    print_purple("%d", (*a)[i]); // 函数调用时 传递 arr 数组的地址。表达式 &arr 的类型是 int (*)[10]，这正好匹配 g 函数的参数类型
  }
  print_purple("\n");
}