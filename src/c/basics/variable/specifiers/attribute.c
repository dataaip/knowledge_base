/**
* @file              attribute.c
* @brief             属性说明符序列(C23起)，引入了针对类型、对象、表达式等的实现定义属性
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.12.24
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.12.24 <td>0.1             <td>brightl         <td>属性说明符序列(C23起)使用，解释说明
* </table>
*/

#include "c/basics/variable/variable.h"
#include <stdio.h>

/**
* @brief             属性说明符序列(C23起)，引入了针对类型、对象、表达式等的实现定义属性
*
* @note              Revision History
*/
#define ATTRIBUTE_WORDS

/**
* @brief             C23 标准引入了属性（attributes）的概念，提供了一种标准化的方法来向编译器传达特定的信息或指示。这些属性可以应用于各种编程元素，如变量、函数、类型等，以控制编译器行为或优化代码
* @return  int       Return Description
*
* @note              Revision History
*/
int attribute_fn(void) {
#ifdef ATTRIBUTE_WORDS
  /*
  属性说明符序列(C23起)
  引入了针对类型、对象、表达式等的实现定义属性

  1、语法 [[attr]] [[attr1, attr2, attr3(args)]] [[属性前缀::attr(arg)]]
  [[gnu::hot]] [[gnu::const]] [[nodiscard]]
  int f(void);                                    // 以三个属性声明 f
  
  形式上，语法是 [[ 属性列表 ]]	(C23起)
  [[gnu::const, gnu::hot, nodiscard]]
  int f(void);                                    // 同上，但使用了包含三个属性的单个属性说明符
  
  其中，属性列表是由零个或多个属性标记组成的逗号分隔序列
  标准属性	                           (1)	
  属性前缀 :: 标识符	                  (2)	
  标准属性 ( 实参列表 (可选) )	         (3)	
  属性前缀 :: 标识符 ( 实参列表 (可选) )	(4)	
  其中，属性前缀（attribute-prefix）是一个标识符，参数列表（argument-list）是一个由括号、方括号和花括号平衡的令牌序列（balanced-token-sequence）
  1) 标准属性，例如 [[fallthrough]]
  2) 有命名空间的属性，例如 [[gnu::unused]]
  3) 有实参的标准属性，例如 [[deprecated("reason")]]
  4) 有命名空间和实参列表的属性，例如 [[gnu::nonnull(1)]]

  2、解释
  属性为实现定义的语言扩展（例如 GNU 和 IBM 的语言扩展__attribute__((...))、Microsoft 扩展__declspec()等）提供了统一的标准语法
  
  __attribute__是 GNU C/C++ 编译器的一个特性，它主要用于在声明函数、变量或类型时指定特殊的属性。这些属性可以影响编译器的行为，比如函数调用约定、变量的对齐方式等诸多方面
  函数属性
  noreturn属性：用于告知编译器被修饰的函数不会返回。例如，一个函数会调用exit()系统调用而终止程序，就可以使用这个属性
  constructor和destructor属性：constructor属性的函数会在main()函数之前自动执行，destructor属性的函数会在main()函数结束之后自动执行。这在进行一些初始化和清理工作时非常有用
  变量属性
  aligned属性：用于指定变量的对齐方式。例如，在某些硬件平台上，为了提高内存访问效率，需要对数据进行特定字节对齐
  类型属性
  packed属性：用于告诉编译器取消结构或联合的默认对齐，按照紧凑的方式进行存储  

  在 C 语言的发展过程中，不同的编译器厂商（如 GNU、IBM、Microsoft 等）为了满足一些特定的需求（如优化、与操作系统或硬件的特定交互等），开发了各自的语言扩展。这些扩展在语法和功能上都有所不同，这就导致了代码的可移植性问题。C23 标准尝试解决这个问题，为这些实现定义的语言扩展提供统一的标准语法
  C23 标准的作用 
  提高可移植性：之前，使用了特定编译器扩展（如__attribute__((...))或__declspec()）的代码在不同编译器之间移植时，往往需要大量的修改。C23 提供统一语法后，开发人员可以在一定程度上使用标准的方式来表示这些扩展，使得代码更容易在不同的 C 编译器环境下进行移植
  统一编译器行为：对于编译器开发者来说，C23 标准提供了一个指导框架。编译器厂商可以根据这个标准来调整自己的语言扩展实现，使得它们在遵循标准的同时，还能保留自己的特色功能。例如，当涉及到函数属性的指定时，编译器可以按照 C23 标准的统一语法来解析和处理这些属性，而不是各自为政

  旧的扩展方式
  在 GNU 中使用__attribute__((...))来指定函数属性，如noreturn
  在 Microsoft 中使用__declspec()来指定类似的属性（假设存在这样的功能等价情况）可能是完全不同的语法
  
  C23 标准下的可能情况（假设）
  C23 可能会定义一种统一的语法，如[[noreturn]]来表示函数不会返回。那么代码可能会变成这样
  [[noreturn]] void my_exit_function()

  不管是在 GNU 还是 Microsoft（假设它们都遵循 C23 的这个标准语法）编译器环境下，代码的表示方式更加统一，便于开发人员理解和使用

  3、属性可用在 C 程序中的几乎所有位置，而且可应用于几乎所有事物：类型、变量、函数、名字、代码块、整个翻译单元，不过每个特定的属性都仅在实现所容许之处有效：[[expect_true]] 可能是只能与 if，而非与类声明一同使用的属性，[[omp::parallel()]] 可能是应用到代码块或 for 循环，而非到类型 int 等的属性。（请注意这两个属性只是虚构的例子，有关标准与一些非标准属性，见下文）
  
  4、在声明中，属性既可以出现在整个声明之前，也可以紧跟在被声明的实体名称之后，在这种情况下它们会被合并。在大多数其他情况下，属性适用于紧接在前的实体
  C23 标准引入了属性（attributes）的概念，提供了一种标准化的方法来向编译器传达特定的信息或指示。这些属性可以应用于各种编程元素，如变量、函数、类型等，以控制编译器行为或优化代码
  属性的语法使用 [[...]] 双方括号的形式包围属性列表。属性可以出现在声明的不同位置，具体如下
  整个声明之前：属性适用于整个声明 属性适用于整个声明中的所有实体
  实体名称之后：属性适用于紧接在前的实体名称 属性仅适用于该实体
  [[attribute1, attribute2]]
  int variable [[attribute3]];    // 属性1、属性2应用于整个声明，属性3应用于variable
  [[attribute4]]
  int function() [[attribute5]];  // 属性4应用于整个声明，属性5应用于返回类型
  
  属性应用于整个声明
  [[nodiscard]]                   // 属性应用于整个声明，在这个例子中，[[nodiscard]] 属性指示编译器，返回值不应被忽略。如果调用者忽略了返回值，编译器可能会生成警告
  int compute_value() {
    return 42;
  }
  int main() {
    compute_value();              // 编译器可能会警告未使用返回值
    return 0;
  }
  属性应用于特定实体
  int variable [[deprecated]];    // 属性应用于变量，在这个例子中，[[deprecated]] 属性应用于 variable 变量，指示编译器该变量已过时。如果使用了该变量，编译器可能会生成警告
  int main() {
    variable = 5;                 // 编译器可能会生成警告，因为variable已过时
    return 0;
  }
  多个属性的示例
  [[nodiscard]]
  int compute_value() [[deprecated]];  // 属性1应用于整个声明，属性2应用于返回类型，在这个例子中，[[nodiscard]] 属性应用于整个 compute_value 函数声明，[[deprecated]] 属性应用于返回类型。如果调用了该函数，编译器可能会生成警告
  int main() {
    int value = compute_value();       // 编译器可能会生成警告，因为compute_value已过时
    return 0;
  }  

  5、在 C23 中，引入了属性（attributes）这一概念，以标准化的方法向编译器传达特定的信息或指示。属性的语法使用双左方括号 [[]] 来包围属性列表。这种语法结构有一些特定的规则和限制
  两个连续的左方括号记号 [[ 只能在以下两种情况下出现 
  引入属性说明符：用于声明属性
  在属性实参之内：用于嵌套属性
  
  引入属性说明符 这是指属性的声明位置，属性说明符使用 [[ 开头和 ]] 结尾
  [[nodiscard]]
  int compute_value() {
    return 42;
  }
  在属性实参之内，属性可以包含参数，这些参数本身可以是其他属性。这时嵌套的属性也需要使用 [[ 和 ]] 来表示
  [[deprecated("Use new_function instead"), maybe_unused]]
  void old_function() { }
  双左方括号 [[ 在 C23 中有其特定的使用场景和规则，只能用于引入属性说明符或在属性实参内使用

  6、除了下面列出的标准属性之外，实现可能支持具有实现定义行为的任意非标准属性。实现未知的所有属性都会被忽略，而不会导致错误
  在 C23 标准中，属性（attributes）为编译器提供了更多的信息，以便进行优化或传达特定的指令。虽然 C23 标准定义了一些标准属性，但实现（编译器）也可以支持自定义的非标准属性。此外，任何编译器未知的属性将被忽略，不会导致编译错误
  
  标准属性：这是 C23 标准中预定义的属性，所有符合 C23 标准的编译器都应该支持这些属性。例如，[[nodiscard]] 和 [[deprecated]] 是标准属性
  非标准属性：这些是由编译器实现定义的属性，不在 C23 标准中预定义。不同的编译器可能会支持不同的非标准属性，用来提供特定编译器的优化或功能。例如，特定编译器可能会支持 [[gnu::always_inline]] 这样的非标准属性
  未知属性的处理：对于编译器未知的属性，编译器将忽略它们，并且不会产生编译错误。这使得代码在不同编译器之间具有更好的兼容性

  [[nodiscard]] 和 [[deprecated]] 是标准属性，所有符合 C23 标准的编译器都应该支持它们
  [[gnu::always_inline]] 是一个非标准属性，特定于 GCC 编译器。这种属性可能提供特定编译器的优化功能
  如果编译器不认识 [[unknown_attribute]]，它会忽略这个属性，并且不会产生编译错误

  7、每个标准属性都预留给标准化使用。也就是说，每个非标准属性都由实现提供的属性前缀进行前缀修饰，例如[[gnu::may_alias]]和[[clang::no_sanitize]]
  非标准属性是由编译器实现提供的额外属性，这些属性需要冠以前缀以避免与标准属性冲突
  
  避免名称冲突：属性前缀确保非标准属性的名称不会与标准属性发生冲突。这意味着即使未来标准定义了新的属性，现有代码使用的非标准属性也不会受到影响
  明确属性来源：属性前缀清楚地表明了属性是由哪个编译器或实现提供的。这有助于开发者了解和选择特定编译器的优化和特性
  提高代码可移植性：使用属性前缀可以使代码更具可移植性。即使某些属性是特定编译器提供的，其他编译器可以忽略这些前缀属性，而不会引发错误

  在 C23 标准中，标准属性是保留的，所有符合标准的编译器都应该支持这些属性。为了避免与标准属性冲突，非标准属性必须使用属性前缀。例如，GCC 编译器使用 [[gnu::]] 前缀，Clang 编译器使用 [[clang::]] 前缀。这种设计确保了命名的一致性和代码的可移植性，提高了代码在不同编译环境中的兼容性和灵活性

  8、标准属性
  标准属性的拼写
  C 标准仅定义下列属性。每个名字形如 attr 的标准属性亦能拼写成 __attr__ 而其含义不变
  每个标准属性除了标准的 [[attr]] 形式，也可以拼写成 __attr__ 形式。例如，[[deprecated]] 可以写成 __deprecated__，这些不同的拼写方式在意义上是相同的。这种设计允许编写在某些老旧环境或特殊情况下依旧适用的代码
  __deprecated__
  void old_function_deprecated();
  __deprecated__("Use new_function instead")
  void another_old_function_deprecated();

  标准属性列表及其解释

  [[deprecated]] 和 [[deprecated("原因")]]
  说明：指示声明有此属性的名字或实体被弃用，即允许但因故不鼓励使用，即指示某个名字或实体已经过时，不建议使用。可以选择性地提供一个字符串参数，说明不建议使用的原因
  语法：[[ deprecated ]]、[[ __deprecated__ ]]、[[ deprecated ( 字符串字面量 ) ]]、[[ __deprecated__ ( 字符串字面量 ) ]]，字符串字面量 能用于解释弃用的理由并/或提议代替用实体的文本
  解释：指示允许使用以此属性声明的名字或实体，但因某种原因不鼓励使用。编译器通常会对这些使用情况发出警告。若指定 字符串字面量，则通常将它包含于警告中
  下列名字或实体的声明中允许使用这个属性：
  - typedef 名：[[deprecated]] typedef S* PS;
  - 对象：[[deprecated]] int x;
  - 结构体/联合体：struct [[deprecated]] S;
  - 结构体/联合体成员：union U { [[deprecated]] int n; };
  - 枚举：enum [[deprecated]] E {};
  - 枚举项：enum { A [[deprecated]], B [[deprecated]] = 42 };
  - 函数：[[deprecated]] void f(void); 
  注解：声明时未标记为弃用的名字或实体，可以在后续声明中添加 [[deprecated]] 属性，从而将其标记为弃用
  注解：声明为弃用的名字不能通过不带此属性的重声明变为未弃用，一旦某个名字或实体被声明为弃用，就不能通过后续的声明移除 [[deprecated]] 属性。即不能将一个已标记为弃用的名字或实体重声明为未弃用 
  举例：
  [[deprecated]]
  void old_function();
  [[deprecated("Use new_function instead")]]
  void another_old_function(); 

  [[fallthrough]] 
  说明：表明从前一个 case 标签的贯穿是有意的，并且不应该被对贯穿发出警告的编译器诊断，即用在 switch 语句中，指示从一个 case 标号到下一个 case 标号的落空是有意的，不应被编译器诊断为警告
  语法：[[ fallthrough ]]、[[ __fallthrough__ ]]，[[fallthrough]] 属性只能用于 switch 语句中的 case 或 default 分支，且必须作为独立的一行声明，紧跟在需要“直落”的 case 分支的最后一条语句之后
  解释：[[fallthrough]] 是 C23 标准引入的一种属性，用于明确指示 switch 语句中的某个 case 分支有意地“直落”到下一个 case 分支。这在避免编译器发出未明确意图的警告时非常有用，在很多编程语言中，switch 语句的 case 分支如果没有使用 break、return 等语句明确结束，会“直落”到下一个 case 分支。这种行为有时是有意的，但如果没有明确指示，编译器通常会发出警告，提示开发者可能是无意的遗漏。通过使用 [[fallthrough]] 属性，可以明确告诉编译器这是有意的行为，并避免警告
  举例：
  switch (value) {
    case 1:
      printf("Case 1\n");
      [[fallthrough]];
    case 2:
      printf("Case 2\n");
      [[fallthrough]];
    case 3:
      printf("Case 3\n");
      break;
    default:
      printf("Default case\n");
      break;
  }
  在这个例子中，对于输入 1，程序会连续打印 "Case 1", "Case 2" 和 "Case 3"，因为每个 case 分支都使用了 [[fallthrough]] 属性。对于输入 2，程序打印 "Case 2" 和 "Case 3"；对于输入 3，只打印 "Case 3"；对于输入 4，则进入默认分支，打印 "Default case"
  switch (value) {
    case 1:
      // some code
      [[fallthrough]];
    case 2:
      // falling through intentionally
      break;
  }

  [[nodiscard]] 和 [[nodiscard("原因")]]
  说明：[[nodiscard]] 是 C23 标准引入的一种属性，用于提示编译器某个函数的返回值不应被忽略。这有助于捕捉潜在的逻辑错误，因为忽略重要的返回值可能会导致未预料的行为或错误，建议编译器在函数的返回值被忽略时发出警告。可以选择性地提供一个字符串参数，说明忽略返回值的原因
  语法：基本形式 [[nodiscard]] 和 [[__nodiscard__]]，带字符串字面量的形式（用于提供警告信息）[[nodiscard("reason")]] 和 [[__nodiscard__("reason")]] 其中 reason 是一个字符串，用于解释为什么不应舍弃返回值
  工作原理：函数声明：当一个函数被声明为 [[nodiscard]] 时，调用该函数时返回值不应被忽略，编译器警告：如果调用时忽略了返回值，编译器将发出警告，提醒开发者需处理该返回值，自定义警告信息：通过提供字符串字面量，可以自定义警告信息，解释为什么返回值不应被忽略
  解释：出现于函数声明、枚举声明或结构体/联合体声明
  - 函数声明：当某个函数被声明为 [[nodiscard]] 时，该函数的返回值不应被忽略，如果一个函数被声明为 [[nodiscard]]，调用该函数时若忽略了其返回值，编译器会发出警告
  - 结构体、联合体、枚举的声明：当一个结构体、联合体或枚举被声明为 [[nodiscard]] 时，任何返回该类型的函数，其返回值都不应被忽略，如果一个枚举、结构体或联合体被声明为 [[nodiscard]]，任何返回该类型的函数，其返回值不应被忽略
  - 处理弃值表达式：如果从转型到 void 以外的弃值表达式调用声明为 [[nodiscard]] 的函数，或者调用返回声明 [[nodiscard]] 的结构体/联合体/枚举的函数，编译器会发出警告
  - 字符串字面量：当 [[nodiscard]] 属性带有字符串字面量时，编译器在发出警告时通常会包含该字符串作为警告信息的一部分，解释为什么不应忽略返回值
  举例：
  错误处理：某些函数返回错误码或状态，忽略这些返回值可能导致未处理的错误
  [[nodiscard]]
  int error_prone_function();   // 忽略返回值可能会导致错误未被检测到
  资源管理：某些函数返回需要手动释放的资源句柄
  [[nodiscard]]
  FILE* open_file(const char* filename);  // 忽略返回值可能会导致资源泄露
  重要计算结果：一些函数返回重要的计算结果，忽略这些结果可能会导致逻辑错误
  [[nodiscard]]
  int perform_critical_calculation();
  函数返回值的弃值表达式
  [[nodiscard]]
  int important_function() {
    return 42;
  }
  (void)important_function();             // 使用 void 转型避免警告
  int result = important_function();      // 正确使用，返回值被处理
  结构体返回值的弃值表达式
  [[nodiscard]]
  typedef struct {
    int id;
  } Resource;
  Resource acquire_resource() {
    Resource res = {1};
    return res;
  }
  (void)acquire_resource(); // 使用 void 转型避免警告
  Resource res = acquire_resource(); // 正确使用，返回值被处理  
  [[nodiscard]]
  int compute_value();
  [[nodiscard("Check the return value for errors")]]
  int compute_value_with_warning();

  [[maybe_unused]]
  说明：抑制对未使用实体的警告，即抑制编译器对未使用的变量、参数、或函数的警告
  语法：[[ maybe_unused ]]、[[ __maybe_unused__ ]]
  解释：此属性能出现在下列实体的声明中，若编译器对未使用实体发布警告，则对任何声明为 maybe_unused 的实体抑制该警告
  - typedef 名：[[maybe_unused]] typedef S* PS;
  - 对象：[[maybe_unused]] int x;
  - 结构体/联合体：struct [[maybe_unused]] S;
  - 结构体/联合体成员：union U { [[maybe_unused]] int n; };
  - 枚举：enum [[maybe_unused]] E {};
  - 枚举项：enum { A [[maybe_unused]], B [[maybe_unused]] = 42 };
  - 函数：[[maybe_unused]] void f(void);
  举例：
  [[maybe_unused]] void f([[maybe_unused]] _Bool cond1, [[maybe_unused]] _Bool cond2)
  {
     [[maybe_unused]] _Bool b = cond1 && cond2;
     assert(b);       // 发布模式中， assert 被编译掉，而 b 不被使用 无警告，因为它声明为 [[maybe_unused]]
  }                   // 参数 cond1 与 cond2 不被使用，无警告
  f(1, 1);
  [[maybe_unused]]
  void unused_function() {
    // This function might not be used
  }
  void function_with_unused_parameter([[maybe_unused]] int unused_param) {
    // ...
  }

  [[noreturn]] 和 [[_Noreturn]]
  说明：指示函数不会返回，即指示某个函数不会返回到调用者。这有助于编译器进行优化和错误检查
  语法：[[ noreturn ]]、[[ __noreturn__ ]] 和 [[ _Noreturn ]]（弃用）、[[ ___Noreturn__ ]]（弃用）
  解释：指示函数不会返回，此属性适用于函数名称，并指定函数不会通过执行 return 语句或到达函数体末尾而返回（它可能通过执行longjmp返回）。如果具有此属性的函数实际返回，则行为未定义。如果可以检测到这种情况，建议发出编译器诊断信息
  - 函数声明：指示函数不会返回，即函数不会通过执行 return 语句或到达函数体末尾而返回（可能通过执行 longjmp 返回）
  - 行为未定义：如果带有此属性的函数实际返回，则行为未定义。如果编译器检测到这种情况，建议发出诊断信息
  - 关键字弃用：在 C23 之前，_Noreturn 关键字用于指示这种行为。从 C23 开始，该关键字被弃用，取而代之的是 [[noreturn]] 属性
  标准库：以下标准库函数均被声明带有 noreturn 属性（C23 之前，它们曾以 _Noreturn 说明符声明）
  - abort()：程序支持工具，引发非正常的程序终止（不清理） abort() 函数会导致程序异常终止，并生成一个核心转储文件（如果系统支持）。该函数不会返回
  - exit()：程序支持工具，引发正常的程序终止并清理 exit() 函数会正常终止程序，执行全局对象的析构函数和任何已注册的 atexit 函数。该函数不会返回
  - _Exit()：程序支持工具，引发正常的程序终止但不清理 _Exit() 函数会立即终止程序，但不会执行全局对象的析构函数和已注册的 atexit 函数。该函数不会返回
  - quick_exit()：程序支持工具，引发正常的程序终止但不完全清理 quick_exit() 函数会快速终止程序，只执行已注册的 at_quick_exit 函数。该函数不会返回
  - thrd_exit()：程序支持工具 thrd_exit() 是线程库中的一个函数，用于终止调用它的线程，返回一个退出码。该函数不会返回
  - longjmp()：longjmp() 函数会将控制权转移到用 setjmp() 保存的环境中，而不会返回到调用它的地方。与 [[noreturn]] 属性不同的是，虽然 longjmp() 不会返回到调用它的位置，但它会恢复执行到 setjmp() 所保存的位置
  举例：
  [[noreturn]]
  void exit_program() {
    // This function does not return
    exit(1);
  }
  // [[_Noreturn]] 是 [[noreturn]] 的弃用拼写
  _Noreturn void exit_program_deprecated() {
    exit(1);
  }
  // #include <stdio.h>
  // #include <setjmp.h>          // setjmp.h：提供 setjmp 和 longjmp 函数，用于非本地跳转
  // #include <stdnoreturn.h>     // stdnoreturn.h：提供 noreturn 关键字，指示函数不会返回
  //  
  // jmp_buf my_jump_buffer;        // jmp_buf 是一个类型，用于保存调用 setjmp 时的环境信息（堆栈上下文、寄存器等）
  //  
  // noreturn void foo(int status)  // noreturn：指示 foo 函数不会返回到调用它的地方 
  // {
  //   printf("foo(%d) called\n", status);      // foo 函数接收一个整数参数 status，打印一条消息后，调用 longjmp 将控制权转移到调用 setjmp 的地方，同时返回值为 status + 1
  //   longjmp(my_jump_buffer, status + 1);     // 将从 setjmp 返回 status+1
  // }
  //
  // int main(void)
  // {
  //   volatile int count = 0;                  // setjmp 作用域中修改的局部变量必须为 volatile，volatile int count = 0：定义一个 volatile 修饰的局部变量 count，因为在 setjmp 和 longjmp 的作用域中修改的局部变量必须声明为 volatile，以确保其值不会在编译器优化中被意外改变
  //   if (setjmp(my_jump_buffer) != 5)         // setjmp(my_jump_buffer)：保存当前环境信息到 my_jump_buffer，并返回 0，if (setjmp(my_jump_buffer) != 5)：检查 setjmp 的返回值。如果返回值不是 5，则调用 foo(++count)
  //     foo(++count);
  // }
  // 运行解释
  //第一次调用 setjmp：
  //setjmp 保存当前环境，返回值为 0
  //进入 if 语句块，调用 foo(++count)。此时 count 为 1
  //
  //第一次调用 foo：
  //打印 foo(1) called
  //调用 longjmp(my_jump_buffer, 2)。这会使程序跳回到 setjmp 调用后的地方，并将 setjmp 的返回值设为 2
  //
  //第二次检查 setjmp 返回值：
  //setjmp 返回 2（由 longjmp 指定）
  //再次进入 if 语句块，调用 foo(++count)。此时 count 为 2
  //
  //第二次调用 foo：
  //打印 foo(2) called
  //调用 longjmp(my_jump_buffer, 3)
  //
  //重复上述过程，直到 setjmp 返回值为 5
  //结束：
  //当 setjmp 返回 5 时，不进入 if 语句块，程序结束 
  longjmp 和 goto 是两种不同的控制流工具，它们都可以改变程序执行的顺序，但其作用范围、用法和应用场景都有所不同。以下是对这两者的详细解释和比较
  
  longjmp 和 setjmp 是一对函数，用于实现非本地跳转。它们常用于从一个深层嵌套的函数调用中快速返回到一个特定的点。使用这对函数需要注意以下几点：
  setjmp：保存当前的环境信息，包括堆栈指针、程序计数器等。其返回值为 0
  longjmp：跳转到之前调用 setjmp 的位置，并恢复保存的环境，同时使 setjmp 返回一个指定的值（非 0）

  goto 是一种用于无条件跳转的基础控制流语句，可以在代码的任何地方跳转到标记的位置。goto 应该谨慎使用，过度使用会导致代码难以读懂和维护

  longjmp 和 setjmp 适用于需要跨函数边界的非本地跳转，一般用于异常处理或错误恢复
  goto 适用于简单的、函数内部的跳转，适当使用可以简化代码，但过度使用会导致代码难以维护
  在实际编程中，应该尽量避免使用 goto，而是使用结构化的编程方法（如循环和函数调用）来实现控制流。longjmp 和 setjmp 则应仅在确有必要的情况下使用，并确保代码的可读性和可维护性

  [[unsequenced]]
  说明：指示某个函数无状态、无作用、幂等且无依赖，向编译器提供函数访问对象的信息，使其可以推导函数调用的某些性质
  语法：[[ unsequenced ]]、[[ __unsequenced__ ]]
  [[unsequenced]]
  int pure_function() {
    return 42; // No side effects, idempotent
  }   
  [[reproducible]]
  说明：指示某个函数无作用且为幂等，即在相同输入下总是产生相同输出，向编译器提供函数访问对象的信息，使其可以推导函数调用的某些性质
  语法：[[ reproducible ]]、[[ __reproducible__ ]]
  [[reproducible]]
  int reproducible_function(int x) {
    return x * 2;                       // No side effects, produces the same result for the same input
  }
  C23 引入了一些新的函数属性，以帮助编译器更好地推导函数调用的性质，从而进行优化。这些属性包括 [[unsequenced]] 和 [[reproducible]]，它们分别提供了关于函数无作用、幂等、无状态和无关联的信息。下面我们详细解释这些属性及其含义
  解释 这些属性适用于函数声明符或具有函数类型的类型说明符。相应的属性是函数类型的一个特性
  
  无作用 对函数调用的求值是无效果的，如果在调用期间按顺序执行的任何存储操作是对与调用同步的对象的修改；如果此外该操作是可观察的，则对该对象的所有访问都必须基于函数的唯一指针参数
  无作用：函数调用不改变外部可观察状态，或者所有改变是可同步的
  定义：如果函数调用过程中，编入序列的任何存储操作，都是对某对象的同步于此次调用的修改，则该调用的执行是无作用的。简单来说，调用该函数不会产生任何对程序状态的影响，除非这些影响是可以准确同步的
  条件：
  如果函数调用涉及存储操作，这些操作必须同步于此次调用
  如果这些存储操作是可观察的（即，它们对外显现），那么所有对该对象的访问都必须基于函数的一个唯一指针形参

  幂等的 如果对一个评估 E 进行第二次评估可以紧接着原始评估进行，且不会改变产生的结果值（如果有结果值）或者执行的可观察状态，那么评估 E 是幂等的
  幂等：函数多次调用不会改变结果或状态
  定义：对于某个求值 E，若 E 的第二次求值可以紧跟第一次求值编入序列而不改变结果值（如果有）或执行的可观察状态，则它是幂等的。即，重复调用该函数不会产生额外的副作用，且结果一致
  条件：
  函数调用多次，结果不变且没有额外的副作用
  重复求值不会影响程序的可观察状态或结果值

  无状态 如果在函数 F 中或在由 F 调用的函数中，任何具有静态或线程存储持续时间的对象的定义是 const（但不是 volatile 限定的），那么函数 F 是无状态的
  无状态：函数不依赖于或修改静态或全局状态
  定义：如果函数 F 或其所调用的任何函数中，具有静态或线程存储期限的任何对象的定义均为 const 且无 volatile 限定，则 F 是无状态的。即，函数不依赖于或修改静态或线程局部的状态
  条件：
  函数中所有静态或线程存储期限的对象都必须是 const 且无 volatile 限定

  ？无关联 函数 F 是独立的，如果对于通过不是基于调用参数的左值调用 F 观察到的任何对象 X，在同一程序执行期间对 F 的所有调用中对 X 的所有访问都观察到相同的值；否则，如果访问基于指针参数，则应该有一个唯一的这样的指针参数 P，使得对 X 的任何访问都应该是基于 P 的左值
  对象 X 如果满足以下条件则被函数调用所观察：如果两者同步，如果 X 不是该调用的局部对象，如果 X 的生存期在函数调用之前开始，并且如果在调用期间对 X 的访问是有序的；如果存在 X 的最后一个值（如果有），在调用之前存储的该值被称为是该调用所观察到的 X 的值
  无关联：函数调用对外部对象的访问是唯一的或通过单一指针参数进行
  定义：对于函数 F，如果 F 的调用中可以通过非该调用的形参的左值而观察到任何对象 X，在同一次程序执行中所有对 F 的调用中，对 X 的所有访问都观察到相同的值，则 F 无关联。或者，如果访问是通过某个指针形参进行，则应当有一个唯一的这种指针形参 P，使得对 X 的任何访问都应当是基于 P 的左值访问
  条件：
  函数调用不会通过非形参的方式观察到不同的对象状态
  如果通过指针形参访问对象，则只有一个唯一的指针形参负责该访问
  
  注解：
  这些属性为编译器优化的目的而存在
  如果函数可重现，则可将先后多次调用当做一次调用
  如果函数无顺序，则可将先后多次调用当做一次调用，且这些调用可以并行化并任意重排
  
  C23 标准属性为编译器提供了更多的控制和优化可能性，同时增强了代码的可读性和可靠性。理解和正确使用这些属性，有助于编写更高效、更安全的 C 代码

  9、属性测试
  __has_c_attribute( 属性记号 )	检查 属性记号 所指名的属性记号的存在
  __has_c_attribute 是一个预处理器宏，用于检查某个特定属性是否存在。这个宏非常有用，可以用于条件编译，确保代码的兼容性和移植性。它可以用于检测标准属性和特定于厂商的属性，但它们的检测结果有所不同

  使用方法
  __has_c_attribute(属性记号) 在预处理阶段展开为一个整数，用于指示某个属性是否存在。对于标准属性，它将展开为该属性被添加到工作草案中的年份和月份。对于特定于厂商的属性，它将展开为一个非零的整数常量

  标准属性的检测结果
  对于标准属性，__has_c_attribute 将展开为属性被标准化时的年份和月份。例如，如果某个属性是在 2023 年 10 月被添加到标准中的，那么 __has_c_attribute 将展开为 202310
  #if __has_c_attribute(deprecated)
    [[deprecated]]
    void old_function() {
      // Implementation
    }
  #else
    void old_function() {
      // Implementation without deprecation
    }
  #endif
  在这个例子中，__has_c_attribute(deprecated) 检查 [[deprecated]] 属性是否存在。如果存在（假设展开值为 202310），则使用 [[deprecated]] 属性声明函数，否则提供一个没有 deprecated 属性的版本  

  特定于厂商的属性的检测结果
  对于特定于厂商的属性，__has_c_attribute 将展开为一个非零的整数常量，这个常量的具体值由编译器实现决定，只要它是非零整数即可
  #if __has_c_attribute(gnu::always_inline)
    [[gnu::always_inline]]
    void inline_function() {
      // Implementation
    }
  #else
    inline void inline_function() {
      // Implementation without always_inline attribute
    }
  #endif
  在这个例子中，__has_c_attribute(gnu::always_inline) 用于检查 [[gnu::always_inline]] 属性是否存在。如果存在（展开为一个非零整数），则使用 [[gnu::always_inline]] 属性声明函数，否则提供一个没有 always_inline 属性的版本  
  
  条件编译中的使用 __has_c_attribute 可以在 #if 和 #elif 表达式中使用，这使得它非常适合条件编译
  #if __has_c_attribute(nodiscard)
    [[nodiscard]]
    int compute_value() {
      return 42;
    }
  #else
    int compute_value() {
      return 42;
    }
  #endif
  在这个例子中，__has_c_attribute(nodiscard) 检查 [[nodiscard]] 属性是否存在。如果存在，则使用 [[nodiscard]] 属性声明函数，否则提供一个没有 nodiscard 属性的版本

  其他限制
  需要注意的是，__has_c_attribute 不能在 #ifdef、#ifndef 和 defined 中使用。只能在 #if 和 #elif 表达式中使用。因此，下面的代码是无效的
  #ifdef __has_c_attribute(nodiscard) // 错误
    // Code
  #endif

  __has_c_attribute 是一个非常有用的预处理器宏，用于检查特定属性的存在。它可以帮助开发者编写更具兼容性和移植性的代码，通过条件编译来适应不同的编译器和标准版本。对于标准属性，它展开为属性添加到标准中的年份和月份；对于特定于厂商的属性，它展开为一个非零的整数常量。在使用时要注意其适用范围，只能在 #if 和 #elif 中使用，不能在 #ifdef、#ifndef 和 defined 中使用

  属性记号	          属性	              值	           标准
  deprecated	      [[deprecated]]	    201904L	      (C23)
  fallthrough	      [[fallthrough]]	    201904L	      (C23)
  maybe_unused	    [[maybe_unused]]    201904L	      (C23)
  nodiscard	        [[nodiscard]]	      202003L	      (C23)
  noreturn          [[noreturn]]
  _Noreturn	        [[_Noreturn]]	      202202L	      (C23)
  unsequenced	      [[unsequenced]]	    202207L	      (C23)
  reproducible	    [[reproducible]]	  202207L	      (C23)    
  */

  // [[gnu::hot]] [[gnu::const]] [[nodiscard]]
  // int f(void);                                     // 1、以三个属性声明 f
  // [[gnu::const, gnu::hot, nodiscard]]
  // int f(void);                                     // 同上，但使用了包含三个属性的单个属性说明符
  
  void my_exit_function() __attribute__((noreturn));  // 2、用于告知编译器被修饰的函数不会返回。例如，一个函数会调用exit()系统调用而终止程序，就可以使用这个属性
  // void my_exit_function() {
  //   // 做一些清理工作
  //   exit(0);
  // }
  void init_function() __attribute__((constructor));  // 初始化代码，比如初始化全局变量等
  void fini_function() __attribute__((destructor));   // 清理代码，比如释放资源等
  int my_variable __attribute__((aligned(16)));       // 表示my_variable这个变量的存储地址将按照 16 字节对齐
  struct my_struct {                                  // 这个my_struct结构体将不会进行默认的对齐填充，节省内存空间，但可能会影响访问效率
    char a;
    int b;
  } __attribute__((packed));
  
  // [[attribute1, attribute2]]
  // int variable [[attribute3]];    // 5、属性1、属性2应用于整个声明，属性3应用于variable
  // [[attribute4]]
  // int function() [[attribute5]];  // 属性4应用于整个声明，属性5应用于返回类型

  // [[deprecated]]                  // 8、标准属性
  // void old_function();
  // [[deprecated("Use new_function instead")]]
  // void another_old_function();
  // switch (value) {
  //   case 1:
  //     // some code
  //     [[fallthrough]];
  //   case 2:
  //     // falling through intentionally
  //     break;
  // }
  // [[nodiscard]]
  // int compute_value();
  // [[nodiscard("Check the return value for errors")]]
  // int compute_value_with_warning();
  // [[maybe_unused]]
  // void unused_function() {
  //   // This function might not be used
  // }
  // void function_with_unused_parameter([[maybe_unused]] int unused_param) {
  //   // ...
  // }
  // [[noreturn]]
  // void exit_program() {
  //   // This function does not return
  //   exit(1);
  // }
  // // [[_Noreturn]] 是 [[noreturn]] 的弃用拼写
  // _Noreturn void exit_program_deprecated() {
  //   exit(1);
  // }
  // [[unsequenced]]
  // int pure_function() {
  //   return 42; // No side effects, idempotent
  // } 
  // [[reproducible]]
  // int reproducible_function(int x) {
  //   return x * 2; // No side effects, produces the same result for the same input
  // } 

#endif // ATTRIBUTE_WORDS  attribute 关键词  

  return 0;
}