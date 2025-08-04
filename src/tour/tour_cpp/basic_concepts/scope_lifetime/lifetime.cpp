/**
* @file              lifetime.cpp
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

#include <iostream>

#define TOUR_CPP_BASIC_CONCEPTS_SCOPE_LIFTTIME

/*
辈子 C++ C++ 语言 基本概念 

每个对象和引用都有一个生命周期，这是一个运行时属性：对于任何对象或引用，程序的生命周期开始时有一个执行点，而程序的生命周期结束时有一个时刻。

对象的生命周期在以下情况下开始：
1）获得具有与其类型相符的对齐方式和大小的 storage，并且
2）它的初始化（如果有的话）是完整的（包括通过 no constructor 或 triminor default constructor 进行的默认初始化），除了
  如果对象是 Union 成员或其 SubObject，则仅当该 Union 成员是 Union 中的初始化成员或变为活动状态时，其生命周期才开始。
  如果对象嵌套在 Union 对象中，则如果包含的 Union 对象是由普通的特殊成员函数分配或构造的，则其生存期可能会开始。
  如果 Array 对象的生存期由 std：：allocator：：allocate 分配，则它的生存期也可能开始。
3）某些作在给定的存储区域中隐式创建隐式生命周期类型的对象，并启动其生命周期。如果隐式创建的对象的子对象不是隐式生存期类型，则其生存期不会隐式开始。
4）对象的生命周期在以下情况下结束：
  如果它是非类类型，则销毁对象（可能通过伪析构函数调用），或者
  如果它是类类型，则析构函数调用开始，或者
  对象占用的存储空间被释放，或被未嵌套在其中的对象重用。
对象的生命周期等于或嵌套在其存储生命周期内，请参阅存储持续时间。
引用的生命周期从其初始化完成时开始，到标量对象结束。
注意：引用对象的生命周期可能在引用的生命周期结束之前结束，这使得悬空引用成为可能。
非静态数据成员和基子对象的生命周期按照类初始化顺序开始和结束。

临时对象生存期
当纯右值具体化时，会创建临时对象，以便它可以用作 glvalue，这在以下情况下发生（自 C++17 起）：
将引用绑定到 Prvalue
从大括号括起来的初始化器列表中初始化 std：：initializer_list<T> 类型的对象（自 C++11 起）
从函数返回纯右值
创建 Prvalue（包括 T（a、b、c）和T{})
Lambda 表达式（自 C++11 起）
需要转换初始化器的 copy-initialization，
reference-initialization 设置为不同但可转换的类型或 bitfield。（直到 C++17）
对类 Prvalue 执行成员访问时
在数组纯右值上执行数组到指针转换或下标时
对于 sizeOf 和 TypeId 中未计算的作数
当纯右值显示为丢弃值表达式时（自 C++17 起）
此外，还会创建临时对象：
如果实现支持，则在函数调用表达式中传递或返回 trivially-copyable 类型的对象时（这允许在 CPU 寄存器中传递结构）
临时对象的物化通常会尽可能延迟，以避免创建不必要的临时对象：参见 copy elision。（自 C++17 起）
所有临时对象都作为评估完整表达式的最后一步被销毁，该表达式（词法上）包含它们的创建点，如果创建了多个临时对象，则它们将按与创建顺序相反的顺序销毁。即使该评估以引发异常结束，也是如此。
有以下例外情况：
  临时对象的生命周期可以通过绑定到 reference 来延长，有关详细信息，请参见 reference initialization 。
  在计算用于初始化或复制数组元素的 default 或 copy 构造函数的默认参数时创建的临时对象的生存期在数组的下一个元素开始初始化之前结束。
  在结构化绑定声明中创建的临时对象的生存期（由初始值设定项为具有唯一名称的变量引入）将延长到结构化绑定声明的末尾。（自 C++17 起）
  在 range-for 语句的 range-initializer 中创建的临时对象的生命周期（否则将在 range-initializer 的末尾销毁）将扩展到循环体的末尾。（自 C++23 起）

存储再利用
如果对象是简单的可破坏的，则程序不需要调用对象的析构函数来结束其生命周期（请注意，程序的正确行为可能取决于析构函数）。但是，如果程序显式终止了作为变量的 non-easy-destructable 对象的生命周期，则必须确保在隐式调用析构函数之前就地构造相同类型的新对象（例如，通过放置 new），即由于自动对象的范围退出或异常，由于线程本地对象的线程退出，（自 C++11 起）或由于静态对象的程序退出;否则，行为为 undefined。
class T {}; // trivial
struct B
{
    ~B() {} // non-trivial
};
void x()
{
    long long n; // automatic, trivial
    new (&n) double(3.14); // reuse with a different type okay
} // okay
void h()
{
    B b; // automatic non-trivially destructible
    b.~B(); // end lifetime (not required, since no side-effects)
    new (&b) T; // wrong type: okay until the destructor is called
} // destructor is called: undefined behavior
重用静态、线程局部（自 C++11 起）或自动存储持续时间的 const complete 对象所占用的存储是未定义的行为，因为此类对象可能存储在只读内存中：
struct B
{
    B(); // non-trivial
    ~B(); // non-trivial
};
const B b; // const static
void h()
{
    b.~B(); // end the lifetime of b
    new (const_cast<B*>(&b)) const B; // undefined behavior: attempted reuse of a const
}
在评估新表达式时，从 allocation 函数返回 storage 之后，但在评估新表达式的初始化器之前，认为 storage 是重用的：
struct S
{
    int m;
};
void f()
{
    S x{1};
    new(&x) S(x.m); // undefined behavior: the storage is reused
}
如果在另一个对象占用的地址处创建新对象，则所有指针、引用和原始对象的名称将自动引用新对象，并且一旦新对象的生命周期开始，就可以用于作新对象，但前提是原始对象可以透明地被新对象替换。
如果满足以下所有条件，则 objectx可透明地被 object 替换y:
  存储yexactly 叠加 storage locationx占领。
  y与x（忽略顶级 cv 限定符）。
  x不是完整的 const 对象。
  也不x也不y是基类子对象，或者是使用 [[no_unique_address]] 声明的成员子对象（自 C++20 起）。
  满足以下条件之一：
  x和y都是完整的对象。
  x和y是对象的直接子对象牛和呸分别和牛可透明地替换为呸.
struct C
{
    int i;
    void f();
    const C& operator=(const C&);
};
const C& C::operator=(const C& other)
{
    if (this != &other)
    {
        this->~C();          // lifetime of *this ends
        new (this) C(other); // new object of type C created
        f();                 // well-defined
    }
    return *this;
}
C c1;
C c2;
c1 = c2; // well-defined
c1.f();  // well-defined; c1 refers to a new object of type C
如果不满足上面列出的条件，则仍可以通过应用指针优化屏障 std：：launder 来获得指向新对象的有效指针：
struct A
{ 
    virtual int transmogrify();
};
struct B : A
{
    int transmogrify() override { ::new(this) A; return 2; }
};
inline int A::transmogrify() { ::new(this) B; return 1; }
void test()
{
    A i;
    int n = i.transmogrify();
    // int m = i.transmogrify(); // undefined behavior:
    // the new A object is a base subobject, while the old one is a complete object
    int m = std::launder(&i)->transmogrify(); // OK
    assert(m + n == 3);
}（自 C++17 起）
同样，如果在类成员或数组元素的存储中创建对象，则创建的对象只是原始对象的包含对象的子对象（成员或元素），如果满足以下条件：
  包含对象的生命周期已开始，但尚未结束
  新对象的存储完全覆盖原始对象的存储
  新对象与原始对象属于同一类型（忽略 cv-qualification）。
否则，如果没有 std：：launder ，原始子对象的名称就不能用于访问新对象：

本节不完整
原因：一个合适的例子（自 C++17 起）

提供存储
作为一种特殊情况，可以在 unsigned char 或 std：：byte（自 C++17 起）的数组中创建对象（在这种情况下，据说数组为对象提供了存储），如果
  数组的生存期已开始，但尚未结束
  新对象的存储完全适合数组
  没有满足嵌套在 Array 中的这些 constraints 的 Array 对象。
如果数组的该部分以前为另一个对象提供了存储，则该对象的生命周期将结束，因为其存储已被重用，但数组本身的生命周期不会结束（其存储不被视为已重用）。
template<typename... T>
struct AlignedUnion
{
    alignas(T...) unsigned char data[max(sizeof(T)...)];
};
int f()
{
    AlignedUnion<int, char> au;
    int *p = new (au.data) int;     // OK, au.data provides storage
    char *c = new (au.data) char(); // OK, ends lifetime of *p
    char *d = new (au.data + 1) char();
    return *c + *d; // OK
}

生命周期外访问
在对象的生命周期开始之前，但在分配对象将占用的存储空间之后，或者在对象的生命周期结束之后，在对象占用的存储空间被重用或释放之前，标识该对象的 glvalue 表达式的以下使用行为是未定义的： 除非正在构造或析构对象（适用单独的规则集）：
  左值到右值的转换（例如，对采用值的函数的函数的函数调用）。
  访问非静态数据成员或调用非静态成员函数。
  将引用绑定到虚拟基类子对象。
  dynamic_cast 或 typeid 表达式。
上述规则也适用于指针（将对虚拟基的引用绑定到指向虚拟基的指针的隐式转换替换为），并带有两个附加规则：
  只有在强制转换为（可能是 cv 限定的）void* 时，才允许static_cast指向 storage 的指针而不带对象。
  没有对象的存储指针如果被强制转换为可能的 cv 限定的 void* 只能static_cast指向可能符合 cv 的 char 的指针，或者可能是 cv 限定的 unsigned char 的指针，或者可能指向可能符合 cv 限定的 std：：byte（自 C++17 起）。
在构造和析构期间，通常允许调用非静态成员函数、访问非静态数据成员以及使用 typeid 和 dynamic_cast。但是，由于生存期尚未开始（在构造期间）或已经结束（在构造期间），因此只允许特定作。有关一个限制，请参阅构造和析构期间的虚拟函数调用。

笔记
在 CWG 问题 2256 解决之前，非类对象（存储持续时间结束）和类对象（构造顺序相反）之间的生命周期结束规则不同：
struct A
{
    int* p;
    ~A() { std::cout << *p; } // undefined behavior since CWG2256: n does not outlive a
                              // well-defined until CWG2256: prints 123
};
void f()
{
    A a;
    int n = 123; // if n did not outlive a, this could have been optimized out (dead store)
    a.p = &n;
}
在解析 RU007 之前，const 限定类型或引用类型的非静态成员会阻止其包含对象透明地可替换，这使得 std：：vector 和 std：:d eque 难以实现：
struct X { const int n; };
union U { X x; float f; };
void tong()
{
    U u = { {1} };
    u.f = 5.f;                          // OK: creates new subobject of 'u'
    X *p = new (&u.x) X {2};            // OK: creates new subobject of 'u'
    assert(p->n == 2);                  // OK
    assert(u.x.n == 2);                 // undefined until RU007:
                                        // 'u.x' does not name the new subobject
    assert(*std::launder(&u.x.n) == 2); // OK even until RU007
}

缺陷报告
以下行为改变缺陷报告追溯应用于以前发布的 C++ 标准。
博士	应用对象	发布时的行为	纠正行为
CWG 119	C++98	具有非平凡构造函数的类类型的对象只能在构造函数调用完成后开始其生命周期	其他初始化的生命周期也已启动
CWG 201	C++98	当数组初始化完成时，需要结束default 构造函数的 default 参数中临时对象的生命周期	生命周期在初始化下一个元素之前结束（还解决了CWG 问题 124)
CWG 274	C++98	仅当最终转换为CV 不合格的 char& 或 unsigned char& 时，指定超出生命周期对象的左值才能用作 static_cast 的作数	允许 CV 限定的 char&和未签名的 char&
CWG 597	C++98	以下行为未定义：1. 指向 out-of-lifetime 对象的指针被隐式转换为指向非虚拟基类2.引用 out-of-lifetime 对象的左值绑定到对非虚拟基类 3 的引用。引用 out-of-lifetime 对象的左值用作 static_cast 的作数（少数例外）	定义明确
CWG 2012	C++98	指定了引用的生命周期以匹配存储持续时间，要求 extern 引用在其初始值设定项运行之前处于活动状态	生命周期从初始化开始
CWG 2107	C++98	CWG 问题 124 的解决方法未应用于复制构造函数	应用的
CWG 2256	C++98	微不足道的可破坏对象的生命周期与其他对象不一致	保持一致
CWG 2470	C++98	多个数组可以为同一对象提供存储	只有一个提供
CWG 2489	C++98	char[] 无法提供存储，但可以在其存储中隐式创建对象不能在 char[] 的 storage 中隐式创建对象
CWG 2527	C++98	如果由于重用存储而未调用析构函数，并且程序依赖于其副作用，则行为未定义	在这种情况下，行为是明确定义的
CWG 2721	C++98	存放 NEW 的存储再利用的确切时间点尚不清楚	明确
CWG 2849	C++23	函数参数对象被视为 Range-for 循环临时对象生存期延长的临时对象不被视为临时对象
CWG 2854	C++98	异常对象是临时对象	它们不是临时对象
CWG 2867	C++17	在结构化绑定声明中创建的临时对象的生命周期未延长	extended to the end of the declaration （延伸到声明的末尾）
P0137R1	C++98	在 unsigned char 数组中创建对象会重复使用其存储	其存储不会重复使用
P0593R6	C++98	伪析构函数调用没有效果	它会销毁对象
P1971R0	C++98	const 限定类型或引用类型的非静态数据成员阻止了其包含对象被透明地替换	已删除限制
P2103R0	C++98	透明地可替换性不需要保持原始结构	需要

引用
C++23 标准 （ISO/IEC 14882：2024）：6.7.3 对象生命周期 [basic.life]11.9.5 建造和销毁 [class.cdtor]
C++20 标准 （ISO/IEC 14882：2020）：6.7.3 对象生命周期 [basic.life]11.10.4 构造和销毁 [class.cdtor]
C++17 标准 （ISO/IEC 14882：2017）：6.8 对象生命周期 [basic.life]15.7 建造和销毁 [class.cdtor]
C++14 标准 （ISO/IEC 14882：2014）：3 对象生命周期 [basic.life]12.7 建造和销毁 [class.cdtor]
C++11 标准 （ISO/IEC 14882：2011）：3.8 对象生命周期 [basic.life]12.7 建造和销毁 [class.cdtor]
C++03 标准 （ISO/IEC 14882：2003）：3.8 对象生命周期 [basic.life]12.7 建造和销毁 [class.cdtor]
C++98 标准 （ISO/IEC 14882：1998）：3.8 对象生命周期 [basic.life]12.7 建造和销毁 [class.cdtor]
*/

/*
我们被要求深入解释C++中对象生命周期的概念，包括举例说明和总结。根据提供的文本，C++对象的生命周期是一个运行时属性，从对象获得存储并完成初始化开始，到对象被销毁或存储被重用结束。我们将详细讨论生命周期的开始、结束、临时对象、存储重用、透明替换以及生命周期外访问等关键概念。

### 1. 生命周期的开始和结束
- **生命周期开始**：当对象获得存储（具有适当大小和对齐），并且初始化完成时（包括默认初始化）。对于联合体成员，只有当该成员被初始化或激活时，其生命周期才开始。
- **生命周期结束**：对于非类类型，对象被销毁（可能通过伪析构函数）；对于类类型，析构函数调用开始；或者对象占用的存储被释放或重用。

#### 示例1：基本生命周期
```cpp
#include <iostream>
struct S {
    int data;
    S(int d) : data(d) { std::cout << "S(" << data << ") constructed\n"; }
    ~S() { std::cout << "S(" << data << ") destroyed\n"; }
};

int main() {
    S s1(1); // 生命周期开始：构造完成
    {
        S s2(2); // 生命周期开始
    } // s2生命周期结束：离开作用域，调用析构函数
    // s1生命周期结束：main函数结束
}
```
输出：
```
S(1) constructed
S(2) constructed
S(2) destroyed
S(1) destroyed
```

### 2. 临时对象的生命周期
临时对象在以下情况下创建（物化）：
- 将引用绑定到纯右值（prvalue）。
- 从函数返回纯右值。
- 创建纯右值（如 `T()` 或 `T{}`）。
- 等等。

临时对象在完整表达式结束时被销毁，除非其生命周期被延长（如绑定到引用）。

#### 示例2：临时对象的生命周期
```cpp
#include <iostream>
struct T {
    int value;
    T(int v) : value(v) { std::cout << "T(" << value << ") constructed\n"; }
    ~T() { std::cout << "T(" << value << ") destroyed\n"; }
};

T createT(int v) { return T(v); }

int main() {
    const T& ref = createT(10); // 临时对象绑定到const引用，生命周期延长至引用的作用域
    std::cout << "ref.value = " << ref.value << std::endl;
} // 临时对象在此销毁
```
输出：
```
T(10) constructed
ref.value = 10
T(10) destroyed
```

### 3. 存储重用与透明替换
存储可以被新对象重用，但必须满足透明替换的条件，否则需要通过`std::launder`访问新对象。

透明替换条件（新对象必须）：
- 占据原对象相同的存储位置。
- 与原对象类型相同（忽略cv限定符）。
- 原对象不是const对象。
- 不是基类子对象或声明为`[[no_unique_address]]`的成员子对象。
- 要么都是完整对象，要么是直接子对象且其父对象可透明替换。

#### 示例3：透明替换
```cpp
#include <iostream>
#include <new>
struct C {
    int i;
    void f() { std::cout << "C::f() called, i = " << i << std::endl; }
    C(int val) : i(val) {}
    ~C() { std::cout << "C destroyed\n"; }
};

int main() {
    C c(10);
    c.f(); // 输出: C::f() called, i = 10

    // 结束c的生命周期（显式调用析构函数）
    c.~C();
    // 在相同存储位置构造新对象
    new (&c) C(20); // 透明替换

    c.f(); // 输出: C::f() called, i = 20
} // 注意：这里会再次调用析构函数，但对象已被替换
```
输出：
```
C::f() called, i = 10
C destroyed
C::f() called, i = 20
C destroyed
```

### 4. 生命周期外访问
在生命周期之外访问对象是未定义行为，包括：
- 左值到右值转换（如读取值）。
- 访问非静态成员或调用非静态成员函数。
- 将引用绑定到虚基类子对象。
- 使用`dynamic_cast`或`typeid`。

#### 示例4：生命周期外访问（未定义行为）
```cpp
#include <iostream>
int main() {
    int* p = nullptr;
    {
        int x = 10;
        p = &x;
    } // x的生命周期结束
    std::cout << *p << std::endl; // 未定义行为：访问生命周期结束的对象
}
```
此代码可能导致崩溃或输出任意值。

### 5. 提供存储
`unsigned char`或`std::byte`数组可以为对象提供存储，而不结束数组的生命周期。

#### 示例5：在数组中提供存储
```cpp
#include <new>
#include <cstring>
int main() {
    alignas(int) unsigned char buffer[sizeof(int)]; // 提供存储
    // 在buffer中创建int对象
    int* p = new (buffer) int(42);
    // 结束p的生命周期（不释放buffer，因为数组还在生命周期内）
    p->~int();
    // 重用存储
    new (buffer) int(100);
    // 注意：不能直接使用buffer，需通过指针访问
}
```

### 总结
1. **生命周期开始**：对象获得存储并完成初始化（联合成员需激活）。
2. **生命周期结束**：销毁（调用析构函数）或存储被释放/重用。
3. **临时对象**：在完整表达式结束时销毁，除非绑定到引用（生命周期延长）。
4. **存储重用**：
   - 可以显式结束对象生命周期并在相同存储上构造新对象。
   - 透明替换允许原指针/引用自动引用新对象（满足严格条件）。
   - 否则，需使用`std::launder`。
5. **提供存储**：`unsigned char`或`std::byte`数组可以为对象提供存储。
6. **生命周期外访问**：未定义行为，必须避免。

**核心原则**：
- 确保在对象的生命周期内访问对象。
- 使用引用延长临时对象的生命周期。
- 存储重用时，确保满足透明替换条件或使用`std::launder`。
- 避免在生命周期外访问对象，以防止未定义行为。
*/

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto lifetime_fn() -> int
{

    std::cout << "lifetime function begin..." << std::endl;

    return 0;
}