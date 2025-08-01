# Bit-field

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

 Classes

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| Overview | | | | |
| `class`/`struct` types | | | | |
| `union` types | | | | |
| Injected-class-name | | | | |
| Members | | | | |
| Data members | | | | |
| Static members | | | | |
| The `this` pointer | | | | |
| Nested classes | | | | |
| Member templates | | | | |
| ****Bit-fields**** | | | | |
| `using`-declarations | | | | |
| Member functions | | | | |
| Member access specifiers | | | | |
| Constructors and member initializer lists | | | | |
| Default member initializer (C++11) | | | | |
| `friend` specifier | | | | |
| `explicit` specifier | | | | |
| Converting constructor | | | | |
| Special member functions | | | | |
| Default constructor | | | | |
| Copy constructor | | | | |
| Move constructor (C++11) | | | | |
| Copy assignment operator | | | | |
| Move assignment operator (C++11) | | | | |
| Destructor | | | | |
| Inheritance | | | | |
| Base and derived classes | | | | |
| Empty base optimization (EBO) | | | | |
| Virtual member functions | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

Declares a class data member with explicit size, in bits. Adjacent bit-field members may (or may not) be packed to share and straddle the individual bytes.

A bit-field declaration is a class data member declaration which uses the following declarator:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| identifier ﻿(optional) attr ﻿(optional) `:` size | (1) |  |
|  | | | | | | | | | |
| identifier ﻿(optional) attr ﻿(optional) `:` size brace-or-equal-initializer | (2) | (since C++20) |
|  | | | | | | | | | |

The **type** of the bit-field is introduced by the decl-specifier-seq of the declaration syntax.

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) sequence of any number of attributes |
| identifier | - | the name of the bit-field that is being declared. The name is optional: unnamed bit-fields introduce the specified number of padding bits. |
| size | - | an integral constant expression with a value greater or equal to zero. When greater than zero, this is the number of bits that this bit-field will occupy. The value zero is only allowed for nameless bit-fields and has special meaning. |
| brace-or-equal-initializer | - | default member initializer to be used with this bit-field |

### Explanation

The type of a bit-field can only be integral (including bool) or (possibly cv-qualified) enumeration type, an unnamed bit-field cannot be declared with a cv-qualified type.

A bit-field cannot be a static data member.

There are no bit-field prvalues: lvalue-to-rvalue conversion always produces an object of the underlying type of the bit-field.

The number of bits in a bit-field sets the limit to the range of values it can hold:

Run this code

```
#include <iostream>
 
struct S
{
    // three-bit unsigned field, allowed values are 0...7
    unsigned int b : 3;
};
 
int main()
{
    S s = {6};
 
    ++s.b; // store the value 7 in the bit-field
    std::cout << s.b << '\n';
 
    ++s.b; // the value 8 does not fit in this bit-field
    std::cout << s.b << '\n'; // formally implementation-defined, typically 0
}

```

Possible output:

```
7
0

```

Multiple adjacent bit-fields are usually packed together (although this behavior is implementation-defined):

Run this code

```
#include <bit>
#include <cstdint>
#include <iostream>
 
struct S
{
    // will usually occupy 2 bytes:
    unsigned char b1 : 3; // 1st 3 bits (in 1st byte) are b1
    unsigned char    : 2; // next 2 bits (in 1st byte) are blocked out as unused
    unsigned char b2 : 6; // 6 bits for b2 - doesn't fit into the 1st byte => starts a 2nd
    unsigned char b3 : 2; // 2 bits for b3 - next (and final) bits in the 2nd byte
};
 
int main()
{
    std::cout << sizeof(S) << '\n'; // usually prints 2
 
    S s;
    // set distinguishable field values
    s.b1 = 0b111;
    s.b2 = 0b101111;
    s.b3 = 0b11;
 
    // show layout of fields in S
    auto i = std::bit_cast<std::uint16_t>(s);
    // usually prints 1110000011110111
    // breakdown is:  └┬┘├┘└┬┘└─┬──┘└┤
    //                b1 u  a   b2  b3
    // where “u” marks the unused :2 specified in the struct, and
    // “a” marks compiler-added padding to byte-align the next field.
    // Byte-alignment is happening because b2's type is declared unsigned char;
    // if b2 were declared uint16_t there would be no “a”, b2 would abut “u”.
    for (auto b = i; b; b >>= 1) // print LSB-first
        std::cout << (b & 1);
    std::cout << '\n';
}

```

Possible output:

```
2
1110000011110111

```

The special unnamed bit-field of size zero can be forced to break up padding. It specifies that the next bit-field begins at the beginning of its allocation unit:

Run this code

```
#include <iostream>
 
struct S
{
    // will usually occupy 2 bytes:
    // 3 bits: value of b1
    // 5 bits: unused
    // 2 bits: value of b2
    // 6 bits: unused
    unsigned char b1 : 3;
    unsigned char :0; // start a new byte
    unsigned char b2 : 2;
};
 
int main()
{
    std::cout << sizeof(S) << '\n'; // usually prints 2
                                    // would usually print 1 if not for
                                    // the padding break in line 11
}

```

Possible output:

```
2

```

If the specified size of the bit-field is greater than the size of its type, the value is limited by the type: a std::uint8_t b : 1000; would still hold values in the range `[`​0​`,`255`]`. The extra bits are padding bits.

Because bit-fields do not necessarily begin at the beginning of a byte, address of a bit-field cannot be taken. Pointers and non-const references to bit-fields are not possible. When initializing a const reference from a bit-field, a temporary is created (its type is the type of the bit-field), copy initialized with the value of the bit-field, and the reference is bound to that temporary.

|  |  |
| --- | --- |
| There are no default member initializers for bit-fields: int b : 1 = 0; and int b : 1 {0} are ill-formed. | (until C++20) |
| In case of ambiguity between the size of the bit-field and the default member initializer, the longest sequence of tokens that forms a valid size is chosen:   ```text int a; const int b = 0;   struct S {     // simple cases     int x1 : 8 = 42; // OK; "= 42" is brace-or-equal-initializer     int x2 : 8 {42}; // OK; "{42}" is brace-or-equal-initializer       // ambiguities     int y1 : true ? 8 : a = 42;   // OK; brace-or-equal-initializer is absent     int y2 : true ? 8 : b = 42;   // error: cannot assign to const int     int y3 : (true ? 8 : b) = 42; // OK; "= 42" is brace-or-equal-initializer     int z : 1 || new int{0};      // OK; brace-or-equal-initializer is absent }; ``` | (since C++20) |

### Notes

The following properties of bit-fields are **implementation-defined**:

- The value that results from assigning or initializing a signed bit-field with a value out of range, or from incrementing a signed bit-field past its range.
- Everything about the actual allocation details of bit-fields within the class object.

:   - For example, on some platforms, bit-fields don't straddle bytes, on others they do.
    - Also, on some platforms, bit-fields are packed left-to-right, on others right-to-left.

In the C programming language, the width of a bit-field cannot exceed the width of the underlying type, and whether int bit-fields that are not explicitly signed or unsigned are signed or unsigned is implementation-defined. For example, int b : 3; may have the range of values `[`​0​`,`7`]` or `[`-4`,`3`]` in C, but only the latter choice is allowed in C++.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 324 | C++98 | it was unspecified whether the return value of an assignment to a bit-field is a bit-field | added bit-field specifications for operators which may return lvalues |
| CWG 739 | C++98 | signedness of bit-fields that are neither declared signed nor unsigned were implementation-defined | consistent with underlying types |
| CWG 2229 | C++98 | unnamed bit-fields could be declared with a cv-qualified type | prohibited |
| CWG 2511 | C++98 | cv-qualifications were not allowed in bit-field types | bit-fields can have cv-qualified enumeration types |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 11.4.10 Bit-fields [class.bit]

- C++20 standard (ISO/IEC 14882:2020):

:   - 11.4.9 Bit-fields [class.bit]

- C++17 standard (ISO/IEC 14882:2017):

:   - 12.2.4 Bit-fields [class.bit]

- C++14 standard (ISO/IEC 14882:2014):

:   - 9.6 Bit-fields [class.bit]

- C++11 standard (ISO/IEC 14882:2011):

:   - 9.6 Bit-fields [class.bit]

- C++03 standard (ISO/IEC 14882:2003):

:   - 9.6 Bit-fields [class.bit]

- C++98 standard (ISO/IEC 14882:1998):

:   - 9.6 Bit-fields [class.bit]

### See also

|  |  |
| --- | --- |
| bitset | implements constant length bit array   (class template) |
| vector<bool> | space-efficient dynamic bitset   (class template specialization) |
| ****Bit manipulation**** (C++20) | utilities to access, manipulate, and process individual bits and bit sequences |
| C documentation for Bit-fields | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/bit_field&oldid=180235>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 February 2025, at 14:14.