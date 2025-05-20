
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main(void) {

    /*
    双重指针间接操作绕过类型系统限制
    （1）双重指针间接操作绕过类型系统限制的典型场景，通常出现在需要 强制修改指针类型 或 实现底层泛型操作 时
     - 本质：通过强制类型转换，将 dst 的地址视为 char**，从而绕过编译器对 dst 原始类型的检查
     - 效果：无论 dst 原本是什么类型的指针（如 int*、float*），最终会被赋值为 src 的地址（强制转为 char*）

    （2）绕过类型系统的原理
     - 指针的二进制一致性：所有指针在内存中均为地址值（例如 4/8 字节整数），类型信息仅存在于编译器层面
     - 强制转换的欺骗性：通过 (char**) 强制转换，让编译器将 &dst 视为 char** 类型，从而允许写入 char* 类型的值

    （3）总结
     - 双重指针间接操作可用于绕过类型系统限制，但需谨慎处理 严格别名规则 和 内存对齐
     - 优先选择安全方案：如 union、memcpy 或 C11 泛型，避免直接操作指针类型

    （4）潜在风险
     - 违反严格别名规则（Strict Aliasing）规则：编译器假设不同类型的指针不会指向同一内存区域（优化依据）。风险：若 dst 的原始类型不是 char*，通过 char** 修改其值可能导致未定义行为
     - 内存对齐问题：风险：若 src 的地址不符合 dst 原始类型的对齐要求，访问时可能崩溃
     - 可维护性下降问题：绕过类型系统会掩盖代码的真实意图，增加调试难度
    
    （5）安全替代方案
     - 使用 union 实现类型泛化
     - 通过 memcpy 操作内存
     - C11 泛型（_Generic）
     */
    int dst = 0;
    char src = 'A';
    char **_da_dst = (char**)(&dst); // 将 dst 的地址强制解释为 char**
    *_da_dst = (char*)src;           // 通过双重指针修改 dst 的值

    // 使用 union 实现类型泛化
    typedef union {
      int *i;
      float *f;
      char *c;
    } GenericPtr;
    GenericPtr dst1;
    int *src1 = malloc(sizeof(int));
    dst1.i = src1; // 安全访问

    // 通过 memcpy 操作内存
    void *dst2 = NULL;
    int *src2 = malloc(sizeof(int));
    // 直接拷贝指针值（不依赖类型转换）
    memcpy(&dst2, &src2, sizeof(void*));

    /*
    通过 _Generic 实现 类型安全的指针赋值，确保 src 的类型与 dst 的目标类型兼容，set_ptr 宏通过 _Generic 实现了 类型安全的指针赋值，在编译期检查类型匹配性，避免直接绕过类型系统带来的风险。通过结合 typeof 和 _Generic，代码既保持了灵活性，又增强了安全性

    （1）宏展开逻辑：
     - typeof(dst) 获取 dst 的类型（如 int*），定义 _da_dst 为指向 dst 的指针（如 int**）
     - _Generic 根据 dst 的原始类型选择 src 的转换方式
     - 通过 *_da_dst 修改 dst 的值

    （2）类型安全检查：
     - 若 dst 是 int*，则 src 被强制转换为 int*
     - 若 dst 是 float*，则 src 被强制转换为 float*
     - 其他类型会触发编译错误（因 _Generic 无匹配分支）

    （3）关键点：
     - 类型匹配正确性：_Generic 直接匹配 dst 的原始类型（如 int*、float*），而非错误地匹配 int**
     - 语法合法性：使用 do { ... } while(0) 包裹宏，确保宏展开为合法语句、_Generic 分支返回转换后的值，而非直接赋值操作
     - 可扩展性：添加新类型支持只需扩展 _Generic 分支
    */
    #define set_ptr(dst, src) do {          \
        typeof(dst) *_da_dst = &(dst);      \
        *_da_dst = _Generic((dst),          \
            int*: (int*)(src),              \
            float*: (float*)(src)           \
        );                                  \
    } while(0)
    int a = 42;
    float b = 3.14;
    int *dst_int = NULL;
    float *dst_float = NULL;
    // 安全转换
    set_ptr(dst_int, &a);   // dst_int = &a
    set_ptr(dst_float, &b); // dst_float = &b
    // 跨类型转换（显式允许）
    void *p = &a;
    set_ptr(dst_int, p);    // dst_int = (int*)p

    /*
    ptrdiff_t
    - C 标准库中定义的类型（<stddef.h>），用于表示两个指针之间的差值（有符号整数）确保计算结果能正确存储所有可能的偏移量（即使结构体非常大）
    应用场景
    - 此偏移量通常用于通过成员反向定位外层结构体地址，常见于侵入式数据结构（如 Linux 内核链表、UT Hash 库）
    */
    typedef struct {
        int key;
        int value;
        int hh_dst;  // 目标
        int hh_src;  // 源
    } MyStruct;
    MyStruct* pdst = malloc(sizeof(MyStruct)); // 假设已初始化
    // hh_dst 成员相对于结构体起始地址的字节偏移量（byte offset）
    ptrdiff_t _pdst_hho = ((char*)(&(pdst)->hh_dst) - (char*)(pdst));

    return 0;
}