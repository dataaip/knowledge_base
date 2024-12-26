/**
* @file              restrict.c
* @brief             restrict(C99) 类型限定符，在 C 类型系统中每一个独立的类型都有数个该类型的限定版本，对应 const、volatile，以及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。此节描述 restrict 限定符的效果
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>restrict(C99) 类型限定符使用、说明和解释
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>

/**
* @brief             在 C99 标准中引入的 restrict 类型限定符旨在帮助编译器进行优化。它告诉编译器，通过被 restrict 限定的指针所访问的内存地址不会通过任何其他指针进行访问。这种限定符主要用于指针，可以帮助编译器更好地优化代码，从而提升性能
*
* @note              当你声明一个指针为 restrict 时，实际上是在告诉编译器：仅通过这个指针访问的内存不会通过其他指针访问，编译器可以假定没有其他指针访问这段内存，从而进行更激进的优化
*/
#define RESTRICT_WORDS

/**
* @brief             关键字 restrict 只用于限定指针；该关键字用于告知编译器，所有修改该指针所指向内容的操作全部都是基于(base on)该指针的，即不存在其它进行修改操作的途径；这样的后果是帮助编译器进行更好的代码优化，生成更有效率的汇编代码
* @return  int       Return Description
*
* @note              Revision History
*/
int restrict_fn(void) {
#ifdef RESTRICT_WORDS
  /*
  restrict(C99) 类型限定符
  在 C 类型系统中每一个独立的类型都有数个该类型的限定版本，对应 const、volatile，以及对于指向对象指针的 restrict 限定符中的一个、两个或全部三个。此节描述 restrict 限定符的效果
  在 C99 标准中引入的 restrict 类型限定符旨在帮助编译器进行优化。它告诉编译器，通过被 restrict 限定的指针所访问的内存地址不会通过任何其他指针进行访问。这种限定符主要用于指针，可以帮助编译器更好地优化代码，从而提升性能
  当你声明一个指针为 restrict 时，实际上是在告诉编译器：仅通过这个指针访问的内存不会通过其他指针访问，编译器可以假定没有其他指针访问这段内存，从而进行更激进的优化

  restrict 限定指针
  1、restrict 的使用规则 仅有指向对象类型的指针及其（可能多维的）数组(C23起)可被 restrict 限定
  restrict 只能用于指向对象（变量、数组元素等）的指针，而不能用于其他类型
  不能直接用于基本数据类型，如 int、float 等
  不能用于函数指针，restrict 关键字在 C 语言中用于指针，表示通过该指针访问的内存不会通过其他指针进行访问，从而允许编译器进行优化。然而，restrict 关键字不能用于函数指针。这是因为 restrict 的设计初衷是用于优化内存访问，而函数指针并不涉及内存区域的访问和重叠，因此不需要 restrict 关键字
  内存访问优化：restrict 关键字主要用于指示编译器可以假设通过该指针访问的内存区域是独占的，从而可以进行更激进的优化。这种优化只对数据指针有效，因为数据指针指向内存中的数据，而函数指针指向代码的入口点，不涉及内存区域的重叠问题
  函数指针的语义：函数指针用于指向函数，调用函数时涉及的是函数的执行而不是内存读写。restrict 关键字对内存读写的优化并不适用于函数调用
  标准限制：C 标准（C99 及后续版本）明确规定了 restrict 关键字只能用于数据指针，而不能用于函数指针
  
  具体而言，以下是错误的
  int restrict *p
  float (* restrict f9)(void)

  2、限制语义仅适用于左值表达式；例如，强制转换为受限限定指针或调用返回受限限定指针的函数不是左值，并且限定符没有效果
  restrict 限定符的语义仅适用于左值表达式。这句原文的意思是说，只有在左值上下文中，restrict 限定符才有实际的作用。如果是在非左值上下文中使用，那么 restrict 限定符是没有效果的
  左值（lvalue）：表示一个对象，可以出现在赋值操作符的左侧。例如变量、数组元素、指针解引用等
  右值（rvalue）：表示一个值（数据），不能出现在赋值操作符的左侧。例如常量、表达式的结果、函数调用的返回值等

  3、在声明受限制指针 restrict P 的块的每次执行期间（通常是在P作为函数参数的函数体的每次执行期间），如果通过P（直接或间接）可访问的某个对象以任何方式被修改，那么在该块中对该对象的所有访问（包括读取和写入）都必须通过P（直接或间接）进行，否则行为是未定义的
  在声明了 restrict 指针 P 的块的每次执行（典型例子是函数体的执行，其中 P 为函数形参）中，若某个可由 P（直接或间接）访问的对象会被任何手段修改，则该块中对该对象的所有访问（读或写），都必须经由 P 进行，否则行为未定义

  4、如果对象从未被修改，可以通过不同的受限限定 restrict 指针进行别名化和访问（请注意，如果通过别名化的受限限定指针 restrict 所指向的对象本身又是指针，这种别名化可能会抑制优化）
  如果一个对象从未被修改，那么即便是通过不同的 restrict 限定指针进行别名化访问，也不会违反 restrict 的语义。换句话说，如果你保证对象只读，那么多个 restrict 限定指针访问同一对象是安全的，不会破坏编译器的优化假设
  如果 restrict 限定指针本身指向的是另一个指针（而不是基本类型或常规对象），那么这种别名化可能会抑制优化。原因在于指向指针的指针可能会引入额外的间接访问，编译器很难确保这种间接访问不会引入额外的修改或冲突，从而限制优化的能力
  指针指向指针：在这种情况下，restrict 指针指向的是一个指针，而不是直接指向具体的数据对象
  间接访问：通过 restrict 指针间接访问最终的数据对象，是通过两步操作完成的：先访问指针，再通过这个指针访问数据对象

  5、从一个受限指针 restrict 赋值给另一个受限指针 restrict 是未定义行为，除非是从某个外部块中的指向对象的指针赋值给某个内部块中的指针（包括在调用具有受限指针 restrict 参数的函数时使用受限指针 restrict 参数），或者在从函数返回时（以及在其他情况下，当源指针所在的块结束时）
  在 C99 标准中，restrict 关键字的使用有一些严格的规则，以确保编译器能够安全地进行优化。特别是，将一个 restrict 指针赋值给另一个指针的行为在某些情况下是未定义的，但在其他特定情况下是允许的
  未定义行为：一般情况下，将一个 restrict 指针赋值给另一个指针（包括另一个 restrict 指针或普通指针）是未定义行为。这是因为这样赋值可能破坏编译器对 restrict 指针独占访问内存区域的假设
  
  合法行为：在特定情况下，这种赋值是允许的，并且行为是定义明确的。主要包括以下几种情况
  将指向外部块的 restrict 指针赋值给内部块中的指针
  将 restrict 指针作为参数传递给函数
  从函数返回 restrict 指针
  当前一个 restrict 指针的生命周期结束时，将其赋值给另一个指针

  6、restrict 指针可以自由地赋值给非 restrict 指针，只要编译器还能优化代码，优化机会还是会保留的

  restrict 限定数组
  7、若以 restrict 类型限定符声明数组类型（通过使用 typedef），则数组类型无 restrict 限定，但其元素类型有 restrict 限定 (C23前)始终认为数组类型与其元素类型同等地拥有 restrict 限定(C23起)
  C23 之前：restrict 关键字仅应用于数组元素类型，而不是整个数组类型。将带有 restrict 限定符的对象的地址赋值给无限定符的指针是合法的
  C23 起：restrict 关键字应用于整个数组类型及其元素类型。将带有 restrict 限定符的对象的地址赋值给无限定符的指针是非法的，因为这违反了 restrict 的独占访问假设

  restrict 限定函数参数
  8、在函数声明中，关键词 restrict 可以出现于方括号内，用以声明函数参数的数组类型。它对数组所转换得的指针类型赋予进行限定，即数组转为指针后限定
  void f(int n, float * restrict r, float * restrict s)
  void f(int m, int n, float a[restrict m][n], float b[restrict m][n]); 参数 a 和 b 都是二维浮点数组，且它们的每一个指针元素都带有 restrict 限定符。这意味着在函数 f 的执行期间，编译器可以假设通过 a 和 b 访问的内存区域是独立的，不会重叠。这种假设使得编译器可以进行更多的优化

  注解
  restrict 限定符的预期用途（如同 “register” 存储类）是促进优化，从组成一个符合标准的程序的所有预处理翻译单元中删除该限定符的所有实例不会改变其含义（即可观察的行为）
  restrict 限定符的预期用途（类似于 register 存储类）是促进优化。如果从构成符合标准的程序的所有预处理翻译单元中删除所有 restrict 限定符，该程序的含义（即可观察的行为）不会改变

  编译器可以忽略任何一个或全部使用 restrict 的别名使用暗示
  编译器可以自由地忽略任何或所有与 restrict 使用相关的别名（aliasing）含义。这意味着即使程序员使用了 restrict，编译器也可以选择不利用这些信息进行优化

  欲避免未定义行为，程序员应该确保 restrict 限定指针所做的别名引用断言不会违规
  为了避免未定义行为，程序员必须确保由 restrict 限定的指针所做的别名断言不被违反。也就是说，程序员需要保证使用 restrict 限定符的指针确实不会与其他指针指向同一内存区域，否则可能会导致未定义行为

  许多编译器提供作为 restrict 对立面的语言扩展：指示即使指针类型不同，也可以别名使用的属性：“may_alias”（gcc）
  许多编译器提供了一种与 restrict 相反的语言扩展，用于指示即使指针类型不同，这些指针也可能别名。例如，GCC 提供的 may_alias 属性，may_alias 扩展是一种编译器属性，告诉编译器即使指针类型不同，这些指针也可能指向相同的内存区域。这与 restrict 的作用相反。restrict 用于指示某个指针是唯一访问某一块内存区域的方式，从而允许更激进的优化，而 may_alias 则用于指示指针可能别名，从而避免优化导致的错误
  int * __attribute__((may_alias)) ptr; 这个属性告诉编译器，即使 ptr 的类型与其他指针不同，它们也可能指向相同的内存区域，编译器应考虑这种可能性，在没有 may_alias 属性的情况下，编译器可能假设 float 类型的指针和 int 类型的指针不会指向同一内存区域，从而进行一些不安全的优化

  使用模式
  9、restrict 限定指针有几种常用的使用模式
  
  文件作用域：
  文件作用域的 restrict 限定指针必须在程序运行期间指向单个数组的元素。该数组对象不可以通过 restrict 指针和通过其声明名称（若有的话）或另一个 restrict 指针两种方式一同引用
  在文件作用域中，一个被 restrict 限定的指针在程序执行期间必须指向单个数组对象。这个数组对象不能既通过这个受限 restrict 指针被引用，又通过其声明的名称（如果有的话）或者另一个受限指针 restrict 被引用
  
  文件作用域 restrict 指针对访问动态分配的全局数组有用；restrict 语义令通过此指针的引用，和通过静态数组的声明名称引用该数组效率相当
  在文件作用域中，受限制 restrict 指针对于提供对动态分配的全局数组的访问很有用。restrict 语义使得通过这种指针进行的引用优化成为可能，其效果与通过静态数组的声明名称进行引用的优化效果一样好。也就是说，文件作用域中的受限制 restrict 指针能够在访问动态分配的全局数组时，实现高效的引用优化，就像通过静态数组的名称进行引用一样高效

  函数形参
  最广泛的 restrict 限定指针使用，是用作函数形参
  在下例中，编译器可能推断出被修改对象不会有别名引用，从而能更大胆地优化循环。在 f 的入口处，必须提供 restrict 指针对关联数组的独占访问。特别是，在 f 内 b 或 c 都不可以指入 a 所关联的数组，因为它们都不是以基于 a 的指针值赋值的。对于 b，因为其声明的 const 限定符这是显然的，但对于 c，需要检查 f 的函数体
  在这段代码示例中，函数 f 的参数 a 被声明为 restrict 指针。这意味着在 f 的执行过程中，编译器可以假定通过 a 指针访问的数组（也就是 a 所关联的数组）不会有别名引用。简单来说，就是编译器认为不会有其他指针（除了基于 a 的指针值进行赋值得到的指针外）同时指向 a 所关联的数组并对其进行修改，基于这样的假设，编译器就能更大胆地去优化循环等代码逻辑
  例如在 f 函数中的循环语句 for (i=0; i<n; i++) a[i] = b[i] + c[i];，因为 a 是 restrict 指针，编译器会认为只有通过 a 这个途径在这个函数内对其关联的数组进行操作，不会出现其他 “隐藏” 的指针也在操作同一个数组的情况，所以可以采用更高效的方式生成相应的机器指令，比如更合理地安排数据加载、存储顺序以及利用寄存器等资源来提升代码的执行效率
  float x[100];
  float *c;
  void f(int n, float * restrict a, float * const b)  // float * restrict a: a 是一个 restrict 限定的指针，指向的数组是唯一通过 a 访问的，不会通过其他指针访问、float * const b: b 是一个常量指针（指针本身不可修改），指向的数组可以通过其他指针（如 c）访问
  {
    int i;
    for (i=0; i<n; i++)         // 独占访问要求：在 f 函数的入口处，参数 a 作为 restrict 指针必须对其关联的数组有独占访问权。这意味着在 f 函数的整个执行过程中，别的指针不能偷偷地 “闯入” 并指向这个和 a 相关的同一个数组，除非这个指针是基于 a 的指针值进行赋值得到的
      a[i] = b[i] + c[i];       // 在函数 f 中，参数 a 被声明为 restrict。这意味着在调用 f 函数时，通过 a 访问的内存区域不能通过其他指针参数（如 b）或全局变量（如 c）访问。这一限定符允许编译器更大胆地优化代码，因为它可以假设 a 指向的内存区域没有别名引用
  }                            
  void g3(void)                 
  {
    float d[100], e[100];
    c = x; 
    f(100, d, e);               // OK f(100, d, e); 和 f(50, d, d+50); 是有效调用，因为 a 和 b 指向的数组没有重叠
    f(50, d, d+50);             // OK
    f(99, d+1, d);              // 未定义行为，f(99, d+1, d); 和 f(99, d+1, e); 是未定义行为，因为在这两种情况下，a 和 b 指向的内存区域重叠，违反了 restrict 的约束
    c = d; 
    f(99, d+1, e);              // 未定义行为
    f(99, e, d+1);              // OK
  }
  请注意，允许 c 指向与 b 相关联的数组。还请注意，对于这些目的，与特定指针相关联的 “数组” 仅指通过该指针实际引用的数组对象的那部分
  请注意，在上述示例中，编译器可以推断出 a 和 b 不会别名，因为 b 的常量性保证了它在函数体中不能依赖于 a。等效地，程序员可以编写void f(int n, float *a, float const * restrict b)，在这种情况下，编译器可以推断出通过 b 引用的对象不能被修改，因此不能同时使用 b 和 a 引用任何已修改的对象，如果程序员编写 void f(int n, float * restrict a, float *b)，那么编译器在不检查函数体的情况下将无法推断出 a 和 b 不别名。一般来说，最好在函数原型中用 restrict 显式注释所有不别名的指针
  const 与 restrict 对于参数 b，它被声明为 const，这意味着通过 b 不能修改其指向的内存区域。这一点与 restrict 结合，编译器可以确定通过 b 访问的内存不会被修改，更有助于优化
  void f(int n, float * a, float const * restrict b) 这种情况下，编译器同样可以理解，通过 b 引用的对象不会被修改，并且通过 a 和 b 引用的对象不会互相影响

  restrict：用于指示某个指针是唯一访问某一内存区域的方式，允许编译器进行更大胆的优化
  函数参数中的 restrict：在函数参数中使用 restrict 可以显著提高性能，因为编译器可以假设这些指针不会别名使用
  const 与 restrict 结合：通过将指针声明为 const，可以进一步优化，因为编译器可以确定这些指针引用的内存不会被修改
  void f(int n, float * restrict a, float const * b)
  void f(int n, float * a, float const * restrict b)
  void f(int n, float * restrict a, float * b)

  通常情况下，最好在函数原型中用 restrict 显式标注所有不会别名使用的指针

  块作用域
  一个块作用域的 restrict 限定指针会做一个限于其块内的别名引用断言。它允许局部断言仅应用到重要的块，譬如紧凑循环。它亦使得将使用 restrict 限定指针的函数转换成宏成为可能
  块作用域中的 restrict 限定符用于限制指针的别名引用，仅在特定块内有效。通过这种方式，可以在短小的代码段（如紧凑的循环）中应用 restrict，从而提高优化效率，而不会影响整个函数的行为。这在将使用 restrict 限定指针的代码转换为宏时尤其有用
  块作用域中的 restrict 限定符在宏定义中，可以帮助编译器在特定代码块（如循环）中进行更好的优化，同时避免了全局作用域的限制，使得代码更加灵活和高效
  float x[100];
  float *c;
  #define f3(N, A, B)                                  \
  do                                                   \
  { int n = (N);                                       \  // 在 f3 宏中，float * restrict a = (A); 表示指针 a 是 restrict 限定的，意味着在该块作用域内，通过 a 访问的内存区域不会通过其他指针访问。这使得编译器可以对这段代码进行更激进的优化
    float * restrict a = (A);                          \  // 由于 restrict 仅在宏定义的块内有效，不会影响宏外的代码，提高了代码灵活性
    float * const    b = (B);                          \  // float * const b = (B); 表示指针 b 是常量指针，即 b 本身不可修改，但可以通过 b 修改其指向的内容
    int i;                                             \  // 这个宏 f3 定义了一个内联的紧凑循环。通过使用 do { ... } while(0) 结构，确保宏在每次调用时都像一个单一的语句块
    for ( i=0; i<n; i++ )                              \  // 在宏内，定义了局部变量 n、a、b 和 i，这些变量仅在宏块内生效，不会与宏外的变量产生冲突
      a[i] = b[i] + c[i];                              \
  } while(0)
  float d[100], e[100];
  c = x;
  f3(100, d, e);   // 有效调用，f3(100, d, e); 和 f3(50, d, d+50); 是有效的，因为在块作用域内，a 和 b 的访问没有冲突，并且编译器可以利用 restrict 进行优化
  f3(50, d, d+50); // 有效调用，c 是全局变量，在宏内的循环中也被使用，但这不会影响 a 和 b 的 restrict 性质，因为 restrict 的别名约束只适用于块内的局部变量
  
  局部优化：通过在块作用域内使用 restrict，可以在局部代码段（如循环）中进行优化，而不影响整个函数的其他部分
  宏的灵活性：将使用 restrict 的代码转换为宏，使得这一优化技术可以在各处灵活应用，而无需重复编写相同的代码
  防止别名冲突：通过块作用域内的 restrict 限定，可以防止局部指针产生别名冲突，从而提高代码效率

  结构体成员
  作为结构体成员的 restrict 限定指针，所做的别名引用断言作用域，是用于访问该结构体的标识符的作用域。即使结构体声明于文件作用域，当用以访问此结构体的标识符拥有块作用域时，结构体中的别名引用断言亦拥有块作用域；别名引用断言仅在块执行或函数调用中生效，具体取决于此结构体类型的对象是如何创造的
  当 restrict 限定指针作为结构体成员时，别名引用断言的作用域是由用于访问该结构体实例的标识符的作用域决定的。即使结构体类型本身在文件作用域，如果结构体变量在块作用域中声明，那么别名引用断言也在该块作用域中生效
  struct t                  // restrict 指针断言
  {
    int n;                  // 成员指向无交集的存储区
    float * restrict p;
    float * restrict q;
  };
  void ff(struct t r, struct t s)
  {
    struct t u;
    // r、s、u 拥有块作用域
    // r.p、r.q、s.p、s.q、u.p、u.q 应该在每次执行 ff 时全部指向无交集的存储区
    // ...
  }
  这种设计在高性能计算中尤为重要。例如，在复杂的数值计算或图像处理代码中，确保不同指针访问的内存区域不重叠，可以显著提高内存访问效率
  restrict 限定指针作为结构体的成员，其别名引用断言的作用域由结构体实例的作用域决定
  结构体实例在块作用域内时，restrict 限定只在该块作用域内生效
  这允许编译器在局部作用域内进行更好的优化，而不影响全局作用域的代码行为
  在函数 ff 中，每次调用函数时，r、s 和 u 的 restrict 指针提供了独占内存访问的保证，防止数据竞争，提升性能

  // int foo(int *a, int *b)
  // {
  //   *a = 5;
  //   *b = 6;
  //   return *a + *b;
  // }
  // int rfoo(int *restrict a, int *restrict b)
  // {
  //   *a = 5;
  //   *b = 6;
  //   return *a + *b;
  // }
  可能的输出：
  ; 所生成的 64 位 Intel 平台的代码：
  foo:
    movl    $5, (%rdi)    ; 存储 5 于 *a
    movl    $6, (%rsi)    ; 存储 6 于 *b
    movl    (%rdi), %eax  ; 从 *a 读回值，考虑到前面的存储会修改它
    addl    $6, %eax      ; 将从 *a 读得的值加 6
    ret
  rfoo:
    movl      $11, %eax   ; 结果是 11，编译时常量
    movl      $5, (%rdi)  ; 存储 5 于 *a
    movl      $6, (%rsi)  ; 存储 6 于 *b
    ret
  
  关键字 restrict 只用于限定指针；该关键字用于告知编译器，所有修改该指针所指向内容的操作全部都是基于(base on)该指针的，即不存在其它进行修改操作的途径；这样的后果是帮助编译器进行更好的代码优化，生成更有效率的汇编代码   
  */
  // int restrict *resp;              // 1、错误 restrict 限定的是 *resp
  // float (* restrict resf9)(void);  // 错误 restrict 不能用于函数指针，restrict 只应限定指针，而不应直接限定基本数据类型或函数指针  
  int restrictnum = 10;
  float restrictnum1 = 10.f;
  int * restrict restp = &restrictnum;                // restp 是一个指向 int 的指针，并且被 restrict 限定
  float * restrict restq = &restrictnum1;             // restq 是一个指向 float 的指针，并且被 restrict 限定
  int * restrict restarr[10];                         // restarr 是一个数组，数组的每个元素是一个被 restrict 限定的指向 int 的指针
  print_purple("restrict restp = %d.\n", *restp);
  print_purple("restrict restq = %.2f.\n", *restq);

  int * restrict restp1 = &restrictnum;               // 2、限制语义仅适用于左值表达式
  *restp1 = 10;                                       // 左值上下文中的 restrict：这里 restp1 是一个左值，并且有 restrict 限定，所以编译器可以进行优化  
  int *restq1 = (int * restrict) restp1;              // 非左值上下文中的 restrict（无效）：这里 restp1 不是左值，restrict 限定无效
  *restq1 = 10;                                       // 这行代码中，restq1 是一个左值，但 restrict 限定信息已经丢失 ，(int * restrict) p 是一个强制转换表达式，结果不是左值，因此 restrict 限定符无效。赋值给 q 后，q 的 restrict 限定符信息已经丢失，所以在 *q = 10 这一行中，编译器不能利用 restrict 信息进行优化 
  print_purple("restrict restp1 = %d.\n", *restp1);
  print_purple("restrict restq1 = %d.\n", *restq1);
  int * restrict barrest(void);                       // 函数返回值中的 restrict（无效）：bar() 函数返回一个 restrict 限定的指针，但返回值本身不是左值，因此 restrict 限定符无效

  // void f(int n, int * restrict p, int * restrict q) {
  //   while (n-- > 0)                    // 3、必须由声明了 restrict 的指针 p 进行所有访问（读或写），否则会发生定义行为
  //     *p++ = *q++;                     // 通过 *p 修改的对象与通过 *q 读取的无一相同
  //                                      // 编译器可以自由地优化、向量化、做页面映射等等。
  // }
  // void g(void) {
  //   extern int d[100];
  //   f(50, d + 50, d);                  // OK，不会 p 和 q 不会重复访问
  //   f(50, d + 1, d);                   // 未定义行为：f 中的 p 和 q 均可访问 d[1]
  // }

  const int * restrict crestp = &restrictnum;  // 4、crestp 是 restrict 限定的指针，并且它们指向的对象是 const 类型（只读）。因为对象不会被修改，编译器可以假设通过 crestp 的访问不会相互影响，从而进行优化
  int acrestp = *crestp;
  int ** restrict crestpp;                     // crestpp 是 restrict 指向指针的指针。因为 crestpp 指向的对象本身是指针，编译器在处理间接访问 *crestpp 时，难以保证这些指针不会引入冲突或修改，从而可能抑制优化
  int *acrestpp = *crestpp;                
  // *acrestpp = 10;                           // 由于 crestpp 指向的是指针，它们的间接访问可能引入冲突，限制优化
  // 初始化 crestpp：crestpp 是一个 restrict 指向指针的指针。它指向某个 int* 类型的指针
  // 间接访问 *crestpp：int *acrestpp = *crestpp; 这行代码首先通过 crestpp 访问到一个 int* 类型的指针，并将其赋值给 acrestpp
  // 修改内存 *acrestpp = 10;：这行代码通过 acrestpp 修改了内存中的一个整数值
  // 地址冲突的潜在风险：编译器无法保证 *crestpp 指向的 int* 指针没有通过其他途径被修改或访问。也就是说，crestpp 指向的内存位置可能还被其他指针间接访问或修改，从而引入内存访问冲突
  // 优化限制：为了进行优化，编译器需要确定内存访问彼此独立且没有冲突。当无法确定时，编译器不得不保守地假设可能存在冲突，从而限制优化。例如，它无法重排序指令或进行寄存器重用优化，因为无法确定对内存的访问是否安全
  int ** restrict crestpp0;                    // crestpp 是一个 restrict 指针，指向一个 int* 指针
  int *acrestpp1 = *crestpp0;                  // acrestpp1 和 acrestpp2 都间接指向 crestpp 指向的 int* 指针
  int *acrestpp2 = *crestpp0;                  // 但是编译器无法确定 *crestpp 是否会被其他指针（例如 acrestpp2）间接访问和修改。这意味着编译器必须假设 *crestpp 可能通过其他指针被修改，从而抑制某些优化
  // *acrestpp1 = 10;
  // *acrestpp2 = 20;

  // int* restrict restrictp1 = &a;          // 5、从一个受限指针 restrict 赋值给另一个受限指针 restrict 是未定义行为
  // int* restrict restrictp2 = &b;
  // restrictp1 = restrictp2;                // 未定义行为
  int * restrict outerrestp;                 // 将指向外部块的 restrict 指针赋值给内部块中的指针，外部块的 restrict 指针
  {
    int *outerrestq = outerrestp;            // 合法：outerrestq 在 outerrestp 所在块的内部
  }
  // void process_array(int * restrict arr); // 将 restrict 指针作为参数传递给函数
  // int * restrict arrrestp;
  // process_array(arrrestp);                // 合法：将 restrict 指针作为函数参数传递
  // int * restrict get_restricted_ptr(int * restrict input) {
  //   return input;                         // 合法：从函数返回 restrict 指针
  // }  
  int * restrict outerrestp1;                // 外部块的 restrict 指针
  {
    int *outerrestq1 = outerrestp1;          // 合法：outerrestq1 在 outerrestp1 所在块的内部
  }
  int *outerrestqr = outerrestp1;            // outerrestp1 的生命周期结束后，可以将其赋值给另一个指针

  // void f(int n, float * restrict r, float * restrict s) {
  //   float * p = r, * q = s;               // OK    
  //   while (n-- > 0)                       // 6、restrict 指针可以自由地赋值给非 restrict 指针，只要编译器还能优化代码，优化机会还是保留
  //     *p++ = *q++;                        // 几乎肯定优化成仅如 *r++ = *s++ 一般
  // }

  typedef int *array_t[10];                     // 7、若以 restrict 类型限定符声明数组类型（通过使用 typedef），则数组类型无 restrict 限定，但其元素类型有 restrict 限定 (C23前)始终认为数组类型与其元素类型同等地拥有 restrict 限定(C23起)
  // restrict array_t a;                        // a 的类型是 int *restrict[10]，在这个声明中，restrict 关键字应用于数组的元素类型，而不是数组类型本身。也就是说，数组 a 的每个元素都是一个 int * restrict 类型的指针。这意味着每个指针都具有 restrict 限定符，但数组 a 本身并不具有 restrict 限定符，注：clang 和 icc 以 array_t 不是指针类型为由拒绝
  // void *unqual_ptr = &a;                     // C23 前 OK 在这种情况下，unqual_ptr 是一个 void* 类型的指针，指向数组 a，这种转换是合法的，因为 restrict 限定符只影响指针的行为，而不影响数组本身； C23 起错误，在 C23 标准及之后的标准中，这种转换被视为非法，因为 restrict 限定符适用于整个数组类型和它的元素类型，赋值给无限定符的指针会违反 restrict 的独占访问假设，clang 即使在 C89-C17 模式也应用 C++/C23 中的规则，
  
  // void f(int m, int n, float a[restrict m][n], float b[restrict m][n]);
  // void g12(int n, float (*p)[n]) {           // 8、在函数声明中，关键词 restrict 可以出现于方括号内，用以声明函数参数的数组类型。它对数组所转换得的指针类型赋予进行限定
  //   f(10, n, p, p+10);                       // OK，在第一次调用中，m 的值是 10，因此 a 和 b 分别指向 p 和 p + 10，即 p 指向的数组和紧接在其后的数组。这种情况是安全的，因为 p 和 p + 10 指向的内存区域不会重叠                 
  //   f(20, n, p, p+10);                       // 可能是未定义行为（取决于 f 所为），在第二次调用中，m 的值是 20，因此 a 和 b 分别指向 p 和 p + 10，即 p 指向的数组和紧接在其后的 20 个数组。在这种情况下，p 和 p + 10 所指向的内存区域可能存在重叠，具体取决于 n 的值和 f 函数的实现。如果 n 的值较小，例如只有 1，那么 p 和 p + 10 实际上可能指向同一个内存区域的部分
  // }

  float *restrict resta, *restrict restb;       // 9、文件作用域
  float restc[100];                             // 编译器可以从 restrict 限定符推断 resta、restb 和 restc 都没有潜在的别名引用
  // int init(int n)
  // {
  //    float * t = malloc(2*n*sizeof(float));
  //    resta = t;      // resta 引用前半
  //    restb = t + n;  // restb 引用后半
  // }
  void fnres1(int n, float * restrict a, float const * b);  // 函数形参 编译器可以优化基于 a 的唯一性，但不能假设 b 所指向的内存区域没有别名
  void fnres2(int n, float * a, float const * restrict b);  // 编译器可以假设通过 b 访问的内存区域是唯一访问的，且不会被修改，这允许更好的优化
  void fnres3(int n, float * restrict a, float * b);        // 编译器可以优化基于 a 的唯一性，但不能假设 b 所指向的内存区域没有别名，并且 b 的内容是可修改的
  // #define f3(N, A, B)                                \   // 块作用域中的 restrict 限定符在宏定义中，可以帮助编译器在特定代码块（如循环）中进行更好的优化，同时避免了全局作用域的限制，使得代码更加灵活和高效
  // do                                                 \
  // { int n = (N);                                     \
  //   float * restrict a = (A);                        \
  //   float * const    b = (B);                        \
  //   int i;                                           \
  //   for ( i=0; i<n; i++ )                            \
  //     a[i] = b[i] + c[i];                            \
  // } while(0);
  struct t                                        // 块作用域，结构体 t 定义了两个 restrict 限定指针成员 p 和 q，这些指针指向的内存区域在相应的作用域内不能通过其他指针访问，restrict 限定符指示编译器，这些指针所指向的内存区域是独占访问的，可以用于优化
  {
    int n;
    float * restrict p;
    float * restrict q;
  };
  // void ff(struct t r, struct t s)              // r 和 s 是函数 ff 的参数，u 是函数 ff 内的局部变量。这些结构体实例在块作用域内
  // {                                            // 虽然结构体 t 在文件作用域中声明，但在 ff 函数中使用的 r、s 和 u 是在块作用域内，这意味着它们的 restrict 限定指针的别名断言也是在这个作用域内生效
  //   struct t u;
  //   // r、s、u 拥有块作用域
  //   // r.p、r.q、s.p、s.q、u.p、u.q 应该在
  //   // 每次执行 ff 时全部指向无交集的存储区
  //   // ...
  // }                                            // 别名引用断言 r.p、r.q、s.p、s.q、u.p、u.q 都是 restrict 限定指针，每次调用 ff 函数时，编译器可以假设这些指针在函数调用期间指向的内存区域是独占的，不会与其他指针别名。这允许编译器进行更激进的优化，在 ff 函数的执行过程中，可以确保 r.p、r.q、s.p、s.q、u.p 和 u.q 指向的内存区域不会交叉，从而避免数据竞争和提升性能
  void ff(struct t r, struct t s);

#endif // RESTRICT_WORDS  restrict 关键词  

  return 0;
}