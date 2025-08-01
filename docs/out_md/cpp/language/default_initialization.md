# Default-initialization

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Default-initialization**** | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

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
| ****Default initialization**** | | | | |
| Value initialization | | | | |
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

This is the initialization performed when an object is constructed with no initializer.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| T object ﻿`;` | (1) |  |
|  | | | | | | | | | |
| `new` T | (2) |  |
|  | | | | | | | | | |

### Explanation

Default-initialization is performed in three situations:

1) when a variable with automatic, static, or thread-local storage duration is declared with no initializer;2) when an object with dynamic storage duration is created by a new-expression with no initializer;3) when a base class or a non-static data member is not mentioned in a constructor initializer list and that constructor is called.

The effects of default-initialization are:

- if `T` is a (possibly cv-qualified) non-POD(until C++11) class type, the constructors are considered and subjected to overload resolution against the empty argument list. The constructor selected (which is one of the default constructors) is called to provide the initial value for the new object;
- if `T` is an array type, every element of the array is default-initialized;
- otherwise, no initialization is performed (see notes).

|  |  |
| --- | --- |
| Only (possibly cv-qualified) non-POD class types (or arrays thereof) with automatic storage duration were considered to be default-initialized when no initializer is used. Scalars and POD types with dynamic storage duration were considered to be not initialized (since C++11, this situation was reclassified as a form of default-initialization). | (until C++11) |

### Default-initialization of a const object

If a program calls for the default-initialization of an object of a const-qualified type `T`, T shall be a **const-default-constructible** class type or array thereof.

A class type `T` is const-default-constructible if default-initialization of `T` would invoke a user-provided constructor of `T` (not inherited from a base class)(since C++11) or if

|  |  |
| --- | --- |
| - each direct non-static data member `M` of `T` is of class type `X` (or array thereof), `X` is const-default-constructible, and - `T` has no direct variant members, and | (until C++11) |
| - each direct non-variant non-static data member `M` of `T` has a default member initializer or, if `M` is of class type `X` (or array thereof), `X` is const-default-constructible, - if `T` is a union with at least one non-static data member, exactly one variant member has a default member initializer, - if `T` is not a union, for each anonymous union member with at least one non-static data member (if any), exactly one non-static data member has a default member initializer, and | (since C++11) |

each potentially constructed base class of `T` is const-default-constructible.

### Indeterminate and erroneous values

|  |  |
| --- | --- |
| When storage for an object with automatic or dynamic storage duration is obtained, the object has an **indeterminate value**.  If no initialization is performed for an object, that object retains an indeterminate value until that value is replaced. | (until C++26) |
| When storage for an object with automatic or dynamic storage duration is obtained, the bytes comprising the storage for the object have the following initial value:   - If the object has dynamic storage duration, or is the object associated with a variable or function parameter whose first declaration is marked with `[[indeterminate]]`, the bytes have **indeterminate values**. - Otherwise, the bytes have **erroneous values**, where each value is determined by the implementation independently of the state of the program.   If no initialization is performed for an object (including subobjects), such a byte retains its initial value until that value is replaced.   - If any bit in the value representation has an indeterminate value, the object has an **indeterminate value**. - Otherwise, if any bit in the value representation has an erroneous value, the object has an **erroneous value**. | (since C++26) |

If an evaluation produces an indeterminate value, the behavior is undefined.

|  |  |
| --- | --- |
| If an evaluation produces an erroneous value, the behavior is erroneous. | (since C++26) |

#### Special cases

The following types are **uninitialized-friendly**:

|  |  |
| --- | --- |
| - std::byte | (since C++17) |

- unsigned char
- char, if its underlying type is unsigned char

Given an indeterminate or erroneous(since C++26) value value, the **uninitialized result value** of value is:

- An indeterminate value, if value is also an indeterminate value.

|  |  |
| --- | --- |
| - value, if value is an erroneous value. | (since C++26) |

If an evaluation eval produces an indeterminate or erroneous(since C++26) value value of an uninitialized-friendly type, the behavior is well-defined in the following cases:

- eval is the evaluation of one of the following expressions and operands:

:   - The second or third operand of a conditional expression.
    - The right operand of a comma expression.
    - The operand of an integral conversion, explicit cast or `static_cast` to an uninitialized-friendly type.
    - A discarded-value expression.
:   In this case, the result of the operation is the uninitialized result value of value.

- eval is an evaluation of the right operand of a simple assignment operator whose left operand is an lvalue of an uninitialized-friendly type.

:   In this case, the value of the object referred to by the left operand is replaced by the uninitialized result value of value.

- eval is the evaluation of the initialization expression when initializing an object of an uninitialized-friendly type.

|  |  |
| --- | --- |
| - value cannot be of type std::byte if the object being initialized is not of type std::byte. | (since C++17) |

:   In this case, that object is initialized to the uninitialized result value of value.

Converting an indeterminate value of an uninitialized-friendly type produces an indeterminate value.

|  |  |
| --- | --- |
| Converting an erroneous value of an uninitialized-friendly type produces an erroneous value, the result of the conversion is the value of the converted operand. | (since C++26) |

```
// Case 1: Uninitialized objects with dynamic storage duration
// All C++ versions: indeterminate value + undefined behavior
int f(bool b)
{
    unsigned char* c = new unsigned char;
    unsigned char d = *c; // OK, “d” has an indeterminate value
    int e = d;            // undefined behavior
    return b ? d : 0;     // undefined behavior if “b” is true
}
 
// Case 2: Uninitialized objects with automatic storage duration
// until C++26: indeterminate value + undefined behavior
// since C++26: erroneous value + erroneous behavior
int g(bool b)
{
    unsigned char c;     // “c” has an indeterminate/erroneous value
 
    unsigned char d = c; // no undefined/erroneous behavior,
                         // but “d” has an indeterminate/erroneous value
 
    assert(c == d);      // holds, but both integral promotions have
                         // undefined/erroneous behavior
 
    int e = d;           // undefined/erroneous behavior
    return b ? d : 0;    // undefined/erroneous behavior if “b” is true
}
 
// Same as case 2
void h()
{
    int d1, d2;  // “d1” and “d2” have indeterminate/erroneous values
    int e1 = d1; // undefined/erroneous behavior
    int e2 = d1; // undefined/erroneous behavior
 
    assert(e1 == e2); // holds
    assert(e1 == d1); // holds, undefined/erroneous behavior
    assert(e2 == d1); // holds, undefined/erroneous behavior
 
    // no undefined/erroneous behavior,
    // but “d2” has an indeterminate/erroneous value
    std::memcpy(&d2, &d1, sizeof(int));
 
    assert(e1 == d2); // holds, undefined/erroneous behavior
    assert(e2 == d2); // holds, undefined/erroneous behavior
}

```

### Notes

References and const scalar objects cannot be default-initialized.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_constexpr` | `201907L` | (C++20) | Trivial default-initialization and asm-declaration in constexpr functions |

### Example

Run this code

```
#include <string>
 
struct T1 { int mem; };
 
struct T2
{
    int mem;
    T2() {} // “mem” is not in the initializer list
};
 
int n; // static non-class, a two-phase initialization is done:
       // 1) zero-initialization initializes n to zero
       // 2) default-initialization does nothing, leaving n being zero
 
int main()
{
    [[maybe_unused]]
    int n;            // non-class, the value is indeterminate
    std::string s;    // class, calls default constructor, the value is ""
    std::string a[2]; // array, default-initializes the elements, the value is {"", ""}
//  int& r;           // Error: a reference
//  const int n;      // Error: a const non-class
//  const T1 t1;      // Error: const class with implicit default constructor
    [[maybe_unused]]
    T1 t1;            // class, calls implicit default constructor
    const T2 t2;      // const class, calls the user-provided default constructor
                      // t2.mem is default-initialized
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 178 | C++98 | there was no value-initialization; empty initializer invoked default-initialization (though new T() also performs zero-initialization) | empty initializer invokes value-initialization |
| CWG 253 | C++98 | default-initialization of a const object could not call an implicitly declared default constructor | allowed if all subobjects are initialized |
| CWG 616 | C++98 | lvalue to rvalue conversion of any uninitialized object was always UB | indeterminate unsigned char is allowed |
| CWG 1787 | C++98 | read from an indeterminate unsigned char cached in a register was UB | made well-defined |

### See also

- converting constructor
- default constructor
- `explicit`
- initialization
  - aggregate initialization
  - constant initialization
  - copy-initialization
  - direct-initialization
  - list-initialization
  - reference initialization
  - value-initialization
  - zero-initialization
- `new`

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/default_initialization&oldid=171164>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 April 2024, at 23:42.