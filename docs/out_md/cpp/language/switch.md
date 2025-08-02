# `switch` statement

From cppreference.com
< cpp‎ | language
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Freestanding and hosted | | | | |
| Language | | | | |
| Standard library | | | | |
| Standard library headers | | | | |
| Named requirements | | | | |
| Feature test macros (C++20) | | | | |
| Language support library | | | | |
| Concepts library (C++20) | | | | |
| Diagnostics library | | | | |
| Memory management library | | | | |
| Metaprogramming library (C++11) | | | | |
| General utilities library | | | | |
| Containers library | | | | |
| Iterators library | | | | |
| Ranges library (C++20) | | | | |
| Algorithms library | | | | |
| Strings library | | | | |
| Text processing library | | | | |
| Numerics library | | | | |
| Date and time library | | | | |
| Input/output library | | | | |
| Filesystem library (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

C++ language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General topics | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Preprocessor | | | | | | Comments | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Keywords | | | | | | Escape sequences | | | | | |
| Flow control | | | | |
| Conditional execution statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****switch**** | | | | | |
| Iteration statements (loops) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | for | | | | | | range-`for` (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | while | | | | | | `do-while` | | | | | |
| Jump statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | continue - break | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | goto - return | | | | | |
| Functions | | | | |
| Function declaration | | | | |
| Lambda function expression | | | | |
| `inline` specifier | | | | |
| Dynamic exception specifications (until C++17\*) | | | | |
| `noexcept` specifier (C++11) | | | | |
| Exceptions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `throw`-expression | | | | | | `try` block | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | `catch` handler | | | | | |
| Namespaces | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace declaration | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace aliases | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Fundamental types | | | | | | Enumeration types | | | | | | Function types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class/struct types | | | | | | Union types | | | | | |  | | | | | |
| Specifiers | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const`/`volatile` | | | | | | decltype (C++11) | | | | | | auto (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | constexpr (C++11) | | | | | | consteval (C++20) | | | | | | constinit (C++20) | | | | | |
| Storage duration specifiers | | | | |
| Initialization | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Expressions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operators | | | | | | Operator precedence | | | | | |
| Alternative representations | | | | |
| Literals | | | | |
| Boolean - Integer - Floating-point | | | | |
| Character - String - nullptr (C++11) | | | | |
| User-defined (C++11) | | | | |
| Utilities | | | | |
| Attributes (C++11) | | | | |
| Types | | | | |
| `typedef` declaration | | | | |
| Type alias declaration (C++11) | | | | |
| Casts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | static_cast | | | | | | const_cast | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Explicit conversions | | | | | | dynamic_cast | | | | | | reinterpret_cast | | | | | |
| Memory allocation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `new` expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `delete` expression | | | | | |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class declaration | | | | | | Constructors | | | | | | `this` pointer | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Access specifiers | | | | | | `friend` specifier | | | | | |  | | | | | |
| Class-specific function properties | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Virtual function | | | | | | `override` specifier (C++11) | | | | | | `final` specifier (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | explicit (C++11) | | | | | | static | | | | | |  | | | | | |
| Special member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default constructor | | | | | | Copy constructor | | | | | | Move constructor (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Copy assignment | | | | | | Move assignment (C++11) | | | | | | Destructor | | | | | |
| Templates | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class template | | | | | | Function template | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Template specialization | | | | | | Parameter packs (C++11) | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Inline assembly | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | History of C++ | | | | | |

 Statements

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Labels | | | | |
| label : statement | | | | |
| Expression statements | | | | |
| expression ; | | | | |
| Compound statements | | | | |
| `{` statement... `}` | | | | |
| Selection statements | | | | |
| if | | | | |
| ****switch**** | | | | |
| Iteration statements | | | | |
| while | | | | |
| do while | | | | |
| for | | | | |
| range for (C++11) | | | | |
| Jump statements | | | | |
| break | | | | |
| continue | | | | |
| return | | | | |
| goto | | | | |
| Declaration statements | | | | |
| declaration ; | | | | |
| Try blocks | | | | |
| try block | | | | |
| Transactional memory | | | | |
| `synchronized`, `atomic_commit`, etc (TM TS) | | | | |

Transfers control to one of several statements, depending on the value of a condition.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr ﻿(optional) `switch` `(` init-statement ﻿(optional) condition `)` statement |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) any number of attributes |
| init-statement | - | (since C++17) any of the following:  - an expression statement (which may be a null statement ;) - a simple declaration, typically a declaration of a variable with initializer, but it may declare arbitrarily many variables or structured bindings  |  |  | | --- | --- | | - an alias declaration | (since C++23) |   Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon. |
| condition | - | a condition |
| statement | - | a statement (typically a compound statement) |

### Condition

A condition can either be an expression or a simple declaration.

|  |  |
| --- | --- |
| - If it can be syntactically resolved as a structured binding declaration, it is interpreted as a structured binding declaration. | (since C++26) |

- If it can be syntactically resolved as an expression, it is treated as an expression. Otherwise, it is treated as a declaration that is not a structured binding declaration(since C++26).

When control reaches condition, the condition will yield a value, which is used to determine which label the control will go to.

#### Expression

If condition is an expression, the value it yields is the the value of the expression.

#### Declaration

If condition is a simple declaration, the value it yields is the value of the decision variable (see below).

##### Non-structured binding declaration

The declaration has the following restrictions:

- Syntactically conforms to the following form:

|  |  |
| --- | --- |
| - type-specifier-seq declarator `=` assignment-expression | (until C++11) |
| - attribute-specifier-seq(optional) decl-specifier-seq declarator brace-or-equal-initializer | (since C++11) |

- The declarator cannot specify a function or an array.
- The type specifier sequence(until C++11)declaration specifier sequence can only contain type specifiers and constexpr, and it(since C++11) cannot define a class or enumeration.

The decision variable of the declaration is the declared variable.

|  |  |
| --- | --- |
| Structured binding declaration The declaration has the following restrictions:   - The expression in its initializer cannot be of an array type. - The declaration specifier sequence can only contain type specifiers and constexpr.   The decision variable of the declaration is the invented variable e introduced by the declaration. | (since C++26) |

#### Type

condition can only yield the following types:

- integral types
- enumeration types
- class types

If the yielded value is of a class type, it is contextually implicitly converted to an integral or enumeration type.

If the (possibly converted) type is subject to integral promotions , the yielded value is converted to the promoted type.

### Labels

Any statement within the switch statement can be labeled with one or more following labels:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr ﻿(optional) `case` constant-expression `:` | (1) |  |
|  | | | | | | | | | |
| attr ﻿(optional) `default:` | (2) |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) any number of attributes |
| constant-expression | - | a converted constant expression of the adjusted type of the switch condition |

A case or default label is associated with the innermost switch statement enclosing it.

If any of the following conditions is satisfied, the program is ill-formed:

- A switch statement is associated with multiple case labels whose constant-expression ﻿s have the same value after conversions.
- A switch statement is associated with multiple default labels.

### Control flow transfer

When the condition of a switch statement yields a (possibly converted) value:

- If one of the associated case label constants has the same value, control is passed to the statement labeled by the matched case label.
- Otherwise, if there is an associated default label, control is passed to the statement labeled by the default label.
- Otherwise, none of the statements in the switch statement will be executed.

case and default labels in themselves do not alter the flow of control. To exit from a switch statement from the middle, see break statements.

Compilers may issue warnings on fallthrough (reaching the next case or default label without a break) unless the attribute `[[fallthrough]]` appears immediately before the case label to indicate that the fallthrough is intentional(since C++17).

```
switch (1)
{
    case 1:
        std::cout << '1'; // prints "1",
    case 2:
        std::cout << '2'; // then prints "2"
}

```

```
switch (1)
{
    case 1:
        std::cout << '1'; // prints "1"
        break;            // and exits the switch
    case 2:
        std::cout << '2';
        break;
}

```

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| switch statements with initializer If init-statement is used, the switch statement is equivalent to   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `{`  init-statement  `switch` `(` condition `)` statement  } |  |  | |  | | | | | | | | | |   Except that names declared by the init-statement (if init-statement is a declaration) and names declared by condition (if condition is a declaration) are in the same scope, which is also the scope of statement. | (since C++17) |

### Notes

Because transfer of control is not permitted to enter the scope of a variable, if a declaration statement is encountered inside the statement, it has to be scoped in its own compound statement:

```
switch (1)
{
    case 1:
        int x = 0; // initialization
        std::cout << x << '\n';
        break;
    default:
        // compilation error: jump to default:
        // would enter the scope of 'x' without initializing it
        std::cout << "default\n";
        break;
}

```

```
switch (1)
{
    case 1:
        {
            int x = 0;
            std::cout << x << '\n';
            break;
        } // scope of 'x' ends here
    default:
        std::cout << "default\n"; // no error
        break;
}

```

### Keywords

switch,
case,
default

### Example

The following code shows several usage cases of the switch statement:

Run this code

```
#include <iostream>
 
int main()
{
    const int i = 2;
    switch (i)
    {
        case 1:
            std::cout << '1';
        case 2:              // execution starts at this case label
            std::cout << '2';
        case 3:
            std::cout << '3';
            [[fallthrough]]; // C++17 attribute to silent the warning on fallthrough
        case 5:
            std::cout << "45";
            break;           // execution of subsequent statements is terminated
        case 6:
            std::cout << '6';
    }
 
    std::cout << '\n';
 
    switch (i)
    {
        case 4:
            std::cout << 'a';
        default:
            std::cout << 'd'; // there are no applicable constant expressions 
                              // therefore default is executed
    }
 
    std::cout << '\n';
 
    switch (i)
    {
        case 4:
            std::cout << 'a'; // nothing is executed
    }
 
    // when enumerations are used in a switch statement, many compilers
    // issue warnings if one of the enumerators is not handled
    enum color { RED, GREEN, BLUE };
    switch (RED)
    {
        case RED:
            std::cout << "red\n";
            break;
        case GREEN:
            std::cout << "green\n";
            break;
        case BLUE:
            std::cout << "blue\n";
            break;
    }
 
    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    struct Device
    {
        enum State { SLEEP, READY, BAD };
        auto state() const { return m_state; }
 
        /* ... */
 
    private:
        State m_state{};
    };
 
    switch (auto dev = Device{}; dev.state())
    {
        case Device::SLEEP:
            /* ... */
            break;
        case Device::READY:
            /* ... */
            break;
        case Device::BAD:
            /* ... */
            break;
    }
 
    // pathological examples
 
    // the statement does not have to be a compound statement
    switch (0)
        std::cout << "this does nothing\n";
 
    // labels do not require a compound statement either
    switch (int n = 1)
        case 0:
        case 1:
            std::cout << n << '\n';
}

```

Output:

```
2345
d
red
1

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1767 | C++98 | condition ﻿s of types that are not subject to integral promotion could not be promoted | do not promote condition ﻿s of these types |
| CWG 2629 | C++98 | condition could be a declaration of a floating-point variable | prohibited |

### See also

|  |  |
| --- | --- |
| C documentation for switch | |

### External links

|  |  |
| --- | --- |
| 1. | Loop unrolling using Duff's Device |
| 2. | Duff's device can be used to implement coroutines in C/C++ |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/switch&oldid=178554>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 13:13.