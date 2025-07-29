# Value-initialization

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | switch | | | | | |
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | ****Value-initialization**** | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

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

 Initialization

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Initializer | | | | |
| Default initialization | | | | |
| ****Value initialization**** | | | | |
| Direct initialization | | | | |
| Copy-initialization | | | | |
| List initialization (C++11) | | | | |
| Aggregate initialization | | | | |
| Reference initialization | | | | |
| Copy elision | | | | |
| Static initialization | | | | |
| Zero initialization | | | | |
| Constant initialization | | | | |
| Dynamic non-local initialization | | | | |
| Ordered dynamic initialization | | | | |
| Unordered dynamic initialization | | | | |
| Class member initialization | | | | |
| Member initializer list | | | | |
| Default member initializer (C++11) | | | | |

This is the initialization performed when an object is constructed with an empty initializer.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| T `()` | (1) |  |
|  | | | | | | | | | |
| `new` T `()` | (2) |  |
|  | | | | | | | | | |
| Class`::`Class`(`...`)` `:` member `()` `{` ... `}` | (3) |  |
|  | | | | | | | | | |
| T object `{};` | (4) | (since C++11) |
|  | | | | | | | | | |
| T `{}` | (5) | (since C++11) |
|  | | | | | | | | | |
| `new` T `{}` | (6) | (since C++11) |
|  | | | | | | | | | |
| Class`::`Class`(`...`)` `:` member `{}` `{` ... `}` | (7) | (since C++11) |
|  | | | | | | | | | |

### Explanation

Value-initialization is performed in these situations:

1,5) when a nameless temporary object is created with the initializer consisting of an empty pair of parentheses or braces(since C++11);2,6) when an object with dynamic storage duration is created by a new expression with the initializer consisting of an empty pair of parentheses or braces(since C++11);3,7) when a non-static data member or a base class is initialized using a member initializer with an empty pair of parentheses or braces(since C++11);4) when a named object (automatic, static, or thread-local) is declared with the initializer consisting of a pair of braces.

In all cases, if the empty pair of braces `{}` is used and `T` is an aggregate type, aggregate initialization is performed instead of value-initialization.

|  |  |
| --- | --- |
| If `T` is a class type that has no default constructor but has a constructor taking std::initializer_list, list-initialization is performed. | (since C++11) |

The effects of value-initialization are:

- If `T` is a (possibly cv-qualified) class type:

:   - If the default-initialization for `T` selects a constructor, and the constructor is not user-declared(until C++11)user-provided(since C++11), the object is first zero-initialized.
    - In any case, the object is default-initialized.

- Otherwise, if `T` is an array type, each element of the array is value-initialized.
- Otherwise, the object is zero-initialized.

### Notes

The syntax T object(); does not initialize an object; it declares a function that takes no arguments and returns `T`. The way to value-initialize a named variable before C++11 was T object = T();, which value-initializes a temporary and then copy-initializes the object: most compilers optimize out the copy in this case.

References cannot be value-initialized.

As described in function-style cast, the syntax T() (1) is prohibited if `T` names an array type, while T{} (5) is allowed.

All standard containers (std::vector, std::list, etc.) value-initialize their elements when constructed with a single `size_type` argument or when grown by a call to resize(), unless their allocator customizes the behavior of construct.

### Example

Run this code

```
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
 
struct T1
{
    int mem1;
    std::string mem2;
    virtual void foo() {} // make sure T1 is not an aggregate
}; // implicit default constructor
 
struct T2
{
    int mem1;
    std::string mem2;
    T2(const T2&) {} // user-provided copy constructor
};                   // no default constructor
 
struct T3
{
    int mem1;
    std::string mem2;
    T3() {} // user-provided default constructor
};
 
std::string s{}; // class => default-initialization, the value is ""
 
int main()
{
    int n{};                // scalar => zero-initialization, the value is 0
    assert(n == 0);
    double f = double();    // scalar => zero-initialization, the value is 0.0
    assert(f == 0.0);
    int* a = new int[10](); // array => value-initialization of each element
    assert(a[9] == 0);      //          the value of each element is 0
    T1 t1{};                // class with implicit default constructor =>
    assert(t1.mem1 == 0);   //     t1.mem1 is zero-initialized, the value is 0
    assert(t1.mem2 == "");  //     t1.mem2 is default-initialized, the value is ""
//  T2 t2{};                // error: class with no default constructor
    T3 t3{};                // class with user-provided default constructor =>
    std::cout << t3.mem1;   //     t3.mem1 is default-initialized to indeterminate value
    assert(t3.mem2 == "");  //     t3.mem2 is default-initialized, the value is ""
    std::vector<int> v(3);  // value-initialization of each element
    assert(v[2] == 0);      // the value of each element is 0
    std::cout << '\n';
    delete[] a;
}

```

Possible output:

```
42

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 178 | C++98 | there was no value-initialization; empty initializer invoked default- initialization (though new T() also performs zero-initialization) | empty initializer invoke value-initialization |
| CWG 543 | C++98 | value-initialization for a class object without any user-provided constructors was equivalent to value- initializing each subobject (which need not zero- initialize a member with user-provided default constructor) | zero-initializes the entire object, then calls the default constructor |
| CWG 1301 | C++11 | value-initialization of unions with deleted default constructors led to zero-initialization | they are default-initialized |
| CWG 1368 | C++98 | any user-provided constructor caused zero-initialization to be skipped | only a user-provided default constructor skips zero-initialization |
| CWG 1502 | C++11 | value-initializing a union without a user-provided default constructor only zero-initialized the object, despite default member initializers | performs default- initialization after zero-initialization |
| CWG 1507 | C++98 | value-initialization for a class object without any user-provided constructors did not check the validity of the default constructor when the latter is trivial | the validity of trivial default constructor is checked |
| CWG 2820 | C++98 | the default-initialization following the zero- initialization required a non-trivial constructor | not required |
| CWG 2859 | C++98 | value-initialization for a class object might involve zero-initialization even if the default-initialization does not actually select a user-provided constructor | there is no zero-initialization in this case |

### See also

- default constructor
- `explicit`
- aggregate initialization
- list-initialization
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/value_initialization&oldid=174122>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 August 2024, at 23:28.