# Logical operators

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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | ****Logical operators**** | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Returns the result of a boolean operation.

| Operator name | Syntax | Over​load​able | Prototype examples (for class T) | |
| --- | --- | --- | --- | --- |
| Inside class definition | Outside class definition |
| negation | not a !a | Yes | bool T::operator!() const; | bool operator!(const T &a); |
| AND | a and b a && b | Yes | bool T::operator&&(const T2 &b) const; | bool operator&&(const T &a, const T2 &b); |
| inclusive OR | a or b a || b | Yes | bool T::operator||(const T2 &b) const; | bool operator||(const T &a, const T2 &b); |
| ****Notes****   - The keyword-like forms (and,or,not) and the symbol-like forms (&&,||,!) can be used interchangeably (see alternative representations). - All built-in operators return bool, and most user-defined overloads also return bool so that the user-defined operators can be used in the same manner as the built-ins. However, in a user-defined operator overload, any type can be used as return type (including void). - Builtin operators `&&` and `||` perform short-circuit evaluation (do not evaluate the second operand if the result is known after evaluating the first), but overloaded operators behave like regular function calls and always evaluate both operands. | | | | |

### Explanation

The logic operator expressions have the form

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `!` rhs | (1) |  |
|  | | | | | | | | | |
| lhs `&&` rhs | (2) |  |
|  | | | | | | | | | |
| lhs `||` rhs | (3) |  |
|  | | | | | | | | | |

1) Logical NOT2) Logical AND3) Logical inclusive OR

If the operand is not bool, it is converted to bool using contextual conversion to bool: it is only well-formed if the declaration `bool t(arg)` is well-formed, for some invented temporary `t`.

The result is a bool prvalue.

For the built-in logical NOT operator, the result is true if the operand is false. Otherwise, the result is false.

For the built-in logical AND operator, the result is true if both operands are true. Otherwise, the result is false. This operator is short-circuiting: if the first operand is false, the second operand is not evaluated.

For the built-in logical OR operator, the result is true if either the first or the second operand (or both) is true. This operator is short-circuiting: if the first operand is true, the second operand is not evaluated.

Note that bitwise logic operators do not perform short-circuiting.

### Results

|  |  |  |
| --- | --- | --- |
| a | true | false |
| !a | false | true |

| and | | a | |
| --- | --- | --- | --- |
| true | false |
| b | true | true | false |
| false | false | false |

| or | | a | |
| --- | --- | --- | --- |
| true | false |
| b | true | true | true |
| false | true | false |

In overload resolution against user-defined operators, the following built-in function signatures participate in overload resolution:

|  |  |  |
| --- | --- | --- |
| bool operator!(bool) |  |  |
| bool operator&&(bool, bool) |  |  |
| bool operator||(bool, bool) |  |  |
|  |  |  |

### Example

Run this code

```
#include <iostream>
#include <sstream>
#include <string>
 
int main()
{
    int n = 2;
    int* p = &n;
    // pointers are convertible to bool
    if (    p && *p == 2  // "*p" is safe to use after "p &&"
        || !p &&  n != 2) // || has lower precedence than &&
        std::cout << "true\n";
 
    // streams are also convertible to bool
    std::stringstream cin;
    cin << "3...\n" << "2...\n" << "1...\n" << "quit";
    std::cout << "Enter 'quit' to quit.\n";
    for (std::string line;    std::cout << "> "
                           && std::getline(cin, line)
                           && line != "quit";)
        std::cout << line << '\n';
}

```

Output:

```
true
Enter 'quit' to quit.
> 3...
> 2...
> 1...
>

```

### Standard library

Because the short-circuiting properties of `operator&&` and `operator||` do not apply to overloads, and because types with boolean semantics are uncommon, only two standard library classes overload these operators:

|  |  |
| --- | --- |
| operator! | applies a unary arithmetic operator to each element of the valarray   (public member function of `std::valarray<T>`) |
| operator&&operator|| | applies binary operators to each element of two valarrays, or a valarray and a value   (function template) |
| operator! | checks if an error has occurred (synonym of fail())   (public member function of `std::basic_ios<CharT,Traits>`) |

### See also

Operator precedence

Operator overloading

|  |  |
| --- | --- |
| logical_and | function object implementing x && y   (class template) |
| logical_or | function object implementing x || y   (class template) |
| logical_not | function object implementing !x   (class template) |

| Common operators | | | | | | |
| --- | --- | --- | --- | --- | --- | --- |
| assignment | increment decrement | arithmetic | ****logical**** | comparison | member access | other |
| a = b  a += b  a -= b  a \*= b  a /= b  a %= b  a &= b  a |= b  a ^= b  a <<= b  a >>= b | ++a  --a  a++  a-- | +a  -a  a + b  a - b  a \* b  a / b  a % b  ~a  a & b  a | b  a ^ b  a << b  a >> b | !a  a && b  a || b | a == b  a != b  a < b  a > b  a <= b  a >= b  a <=> b | a[...]  \*a  &a  a->b  a.b  a->\*b  a.\*b | function call  a(...) |
| comma  a, b |
| conditional  a ? b : c |
| Special operators | | | | | | |
| static_cast converts one type to another related type  dynamic_cast converts within inheritance hierarchies  const_cast adds or removes cv-qualifiers  reinterpret_cast converts type to unrelated type  C-style cast converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  new creates objects with dynamic storage duration  delete destructs objects previously created by the new expression and releases obtained memory area  sizeof queries the size of a type  sizeof... queries the size of a pack (since C++11)  typeid queries the type information of a type  noexcept checks if an expression can throw an exception (since C++11)  alignof queries alignment requirements of a type (since C++11) | | | | | | |

|  |  |
| --- | --- |
| C documentation for Logical operators | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/operator_logical&oldid=172240>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 June 2024, at 04:30.