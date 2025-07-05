/**
* @file              lifetime.c
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.05
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.05 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <stdio.h>  // 头文件

#define TOUR_C_BASIC_CONCEPTS_SCOPE_LIFETIME

/*
### 辈子C C 语言 基本概念

C 中的每个对象都存在，具有常量地址，保留其最后存储的值（除非值不确定），并且对于 VLA，在程序执行的一部分（称为此对象的生命周期）内保留其大小（自 C99 起）。

对于使用自动、静态和线程存储持续时间声明的对象，生命周期等于其存储持续时间（请注意非 VLA 和 VLA 自动存储持续时间之间的差异）。

对于具有已分配存储持续时间的对象，生存期从分配函数返回（包括从 realloc 返回）开始，到调用 realloc 或 deallocation 函数时结束。请注意，由于已分配的对象没有声明的类型，因此首先用于访问此对象的左值表达式的类型将成为其有效类型。

在对象的生命周期之外访问对象是未定义的行为。
int* foo(void) {
    int a = 17; // a has automatic storage duration
    return &a;
}  // lifetime of a ends
int main(void) {
    int* p = foo(); // p points to an object past lifetime ("dangling pointer")
    int n = *p; // undefined behavior
}
指向生存期结束的对象（或对象之后的对象）的指针具有不确定的值。

临时生存期
具有由非左值表达式指定的数组成员（直接成员或嵌套结构/联合成员的成员）的结构和联合对象具有临时生命周期。临时生命周期从引用此类对象的表达式被求值时开始，并在包含的完整表达式或完整声明符结束时（自 C11 起）在下一个序列点结束（直到 C11）。
任何修改具有临时生存期的对象尝试都会导致未定义的行为。
struct T { double a[4]; };
struct T f(void) { return (struct T){3.15}; }
double g1(double* x) { return *x; }
void g2(double* x) { *x = 1.0; }
int main(void)
{
    double d = g1(f().a); // C99: UB access to a[0] in g1 whose lifetime ended
                          //      at the sequence point at the start of g1
                          // C11: OK, d is 3.15
    g2(f().a); // C99: UB modification of a[0] whose lifetime ended at the sequence point
               // C11: UB attempt to modify a temporary object
}

引用
C17 标准 （ISO/IEC 9899：2018）：6.2.4 对象的存储持续时间 （p： 30）
C11 标准 （ISO/IEC 9899：2011）：6.2.4 对象的存储持续时间 （p： 38-39）
C99 标准 （ISO/IEC 9899：1999）：6.2.4 对象的存储持续时间 （p： 32）
C89/C90 标准 （ISO/IEC 9899：1990）：3.1.2.4 对象的存储持续时间
*/

/*
我们正在讨论C语言中对象的生命周期概念。生命周期是指对象存在的时间段，在此期间对象具有常量地址，并保留其最后存储的值（除非值未初始化）。对于变长数组（VLA），其大小也在生命周期内保持不变。生命周期之外访问对象是未定义行为（UB）。

C语言中对象的生命周期与其存储持续时间密切相关。存储持续时间分为四种：自动、静态、线程和已分配。

1. 自动存储持续时间：对象在进入其声明块时创建，在退出块时销毁。注意：非VLA和VLA的自动存储持续时间有所不同。非VLA的自动存储对象在块入口创建，块出口销毁；而VLA则在声明点创建，在块出口销毁。

2. 静态存储持续时间：对象在程序开始执行时创建，在程序结束时销毁。

3. 线程存储持续时间（C11引入）：对象在进入其线程时创建，在线程结束时销毁。

4. 已分配存储持续时间：通过动态内存分配函数（如malloc, calloc, realloc）创建，通过free销毁。生命周期从分配函数成功返回开始，到调用释放函数结束。

特别需要注意的是，已分配的对象没有声明类型，因此第一个用于访问该对象的左值表达式的类型将成为其有效类型。

另外，C语言中有一个“临时生命周期”的概念，主要涉及由非左值表达式（如函数返回的结构体/联合体）中的数组成员。临时生命周期开始于表达式求值，结束于包含该表达式的完整表达式或完整声明符的末尾（C11起）或下一个序列点（C11之前）。在临时生命周期内修改对象是未定义行为。

举例说明：

例1：自动存储持续时间的生命周期
```c
#include <stdio.h>

int *foo(void) {
    int a = 17; // a具有自动存储持续时间，生命周期从foo函数开始执行时开始
    return &a;   // 返回a的地址，但是当函数返回时，a的生命周期结束
} // 生命周期结束

int main(void) {
    int *p = foo(); // p成为悬垂指针，指向已经结束生命周期的对象
    int n = *p;     // 未定义行为（UB）：访问生命周期已结束的对象
    printf("%d\n", n); // 可能崩溃或输出不可预测的值
    return 0;
}
```

例2：已分配存储持续时间的生命周期
```c
#include <stdlib.h>

int main(void) {
    int *p = malloc(sizeof(int)); // 分配内存，p指向的对象的生命周期开始
    if (p) {
        *p = 10; // 合法：在生命周期内
        free(p); // 生命周期结束
        // 之后不能再访问*p
        // *p = 20; // 未定义行为
    }
    return 0;
}
```

例3：临时生命周期（C11）
```c
struct T { double a[4]; };

struct T f(void) {
    // 返回一个临时结构体对象，其数组成员具有临时生命周期
    return (struct T){ {1.0, 2.0, 3.0, 4.0} };
}

int main(void) {
    // 在C11中，f().a的临时生命周期持续到完整表达式结束（即分号）
    double d = f().a[0]; // C11：合法，d被赋值为1.0

    // 但是，尝试修改具有临时生命周期的对象是未定义行为
    // f().a[0] = 10.0; // UB

    return 0;
}
```

总结：

1. 生命周期是对象存在的期间，在此期间访问对象是安全的。
2. 生命周期与存储持续时间密切相关：
   - 自动：块入口/声明点到块出口（非VLA在块入口，VLA在声明点）。
   - 静态：整个程序运行期。
   - 线程：线程运行期。
   - 已分配：从分配成功到释放。
3. 在生命周期外访问对象是未定义行为（UB）。
4. 临时生命周期：某些临时对象（如函数返回的结构体中的数组）的临时生命周期仅限于完整表达式内（C11起），在此生命周期内修改它们是UB。
5. 注意避免悬垂指针（指向生命周期结束的对象的指针）。

开发建议：
- 避免返回局部自动变量的指针或引用。
- 动态分配的内存确保在不再需要时释放，且释放后不再使用。
- 对于临时对象，避免修改操作，并注意其生命周期短暂，不要保存指向其内部数据的指针。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
int lifetime_fn()
{

    printf("lifetime function begin...");

    return 0;
}