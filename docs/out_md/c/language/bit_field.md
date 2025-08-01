# Bit-fields

From cppreference.com
< c‎ | language
 C

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Language | | | | |
| Headers | | | | |
| Type support | | | | |
| Program utilities | | | | |
| Variadic function support | | | | |
| Error handling | | | | |
| Dynamic memory management | | | | |
| Strings library | | | | |
| Algorithms | | | | |
| Numerics | | | | |
| Date and time utilities | | | | |
| Input/output support | | | | |
| Localization support | | | | |
| Concurrency support (C11) | | | | |
| Technical Specifications | | | | |
| Symbol index | | | | |

 C language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Basic concepts | | | | |
| Keywords | | | | |
| Preprocessor | | | | |
| Statements | | | | |
| Expressions | | | | |
| Initialization | | | | |
| Declarations | | | | |
| Functions | | | | |
| Miscellaneous | | | | |
| History of C | | | | |
| Technical Specifications | | | | |

 Declarations

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Pointer | | | | |
| Array | | | | |
| enum | | | | |
| struct | | | | |
| union | | | | |
| ****Bit-field**** | | | | |
| Atomic types (C11) | | | | |
| const | | | | |
| constexpr(C23) | | | | |
| volatile | | | | |
| restrict(C99) | | | | |
| Alignment specifiers | | | | |
| Storage duration and linkage | | | | |
| External and tentative definitions | | | | |
| typedef | | | | |
| Static assertions | | | | |
| Attributes (C23) | | | | |

Declares a member with explicit width, in bits. Adjacent bit-field members may be packed to share and straddle the individual bytes.

A bit-field declaration is a struct or union member declaration which uses the following declarator:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| identifier ﻿(optional) `:` width |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| identifier | - | a name of the bit-field that is being declared. The name is optional: nameless bit-fields introduce the specified number of bits of padding |
| width | - | an integer constant expression with a value greater or equal to zero and less or equal the number of bits in the underlying type. When greater than zero, this is the number of bits that this bit-field will occupy. The value zero is only allowed for nameless bit-fields and has special meaning: it specifies that the next bit-field in the class definition will begin at an allocation unit's boundary. |

### Explanation

Bit-fields can have only one of the following (possibly const or volatile qualified) types:

- unsigned int, for unsigned bit-fields (e.g. unsigned int b : 3; has the range `[`​0​`,`7`]`)
- signed int, for signed bit-fields (signed int b : 3; has the range `[`-4`,`3`]`)
- int, for bit-fields with implementation-defined signedness (note that this differs from the meaning of the keyword int everywhere else, where it means "signed int"). For example, int b : 3; may have the range of values `[`​0​`,`7`]` or `[`-4`,`3`]`.

|  |  |
| --- | --- |
| - _Bool, for single-bit bit-fields (e.g. bool x : 1;) has the range `[`​0​`,`1`]` and implicit conversions to and from it follow the boolean conversion rules. | (since C99) |
| - bit-precise integer types (e.g. _BitInt(5) : 4; has the range `[`-8`,`7`]` and unsigned _BitInt(5) : 4; has the range `[`​0​`,`15`]`). | (since C23) |

Additional implementation-defined types may be acceptable. It is also implementation-defined whether a bit-field may have atomic type.(since C11)
The number of bits in a bit-field (width) sets the limit to the range of values it can hold:

Run this code

```
#include <stdio.h>
 
struct S
{
    // three-bit unsigned field,
    // allowed values are 0...7
    unsigned int b : 3;
};
 
int main(void)
{
    struct S s = {7};
    ++s.b; // unsigned overflow
    printf("%d\n", s.b); // output: 0
}

```

Multiple adjacent bit-fields are permitted to be (and usually are) packed together:

Run this code

```
#include <stdio.h>
 
struct S
{
    // will usually occupy 4 bytes:
    // 5 bits: value of b1
    // 11 bits: unused
    // 6 bits: value of b2
    // 2 bits: value of b3
    // 8 bits: unused
    unsigned b1 : 5, : 11, b2 : 6, b3 : 2;
};
 
int main(void)
{
    printf("%zu\n", sizeof(struct S)); // usually prints 4
}

```

The special **unnamed bit-field** of width zero breaks up padding: it specifies that the next bit-field begins at the beginning of the next allocation unit:

Run this code

```
#include <stdio.h>
 
struct S
{
    // will usually occupy 8 bytes:
    // 5 bits: value of b1
    // 27 bits: unused
    // 6 bits: value of b2
    // 15 bits: value of b3
    // 11 bits: unused
    unsigned b1 : 5;
    unsigned    : 0; // starts a new unsigned int
    unsigned b2 : 6;
    unsigned b3 : 15;
};
 
int main(void)
{
    printf("%zu\n", sizeof(struct S)); // usually prints 8
}

```

Because bit-fields do not necessarily begin at the beginning of a byte, address of a bit-field cannot be taken. Pointers to bit-fields are not possible. Bit-fields cannot be used with `sizeof` and `_Alignas`(since C11)(until C23)`alignas`(since C23)(since C11).

### Notes

The following usages of bit-fields causes **undefined behavior**:

- Calling offsetof on a bit-field.

The following properties of bit-fields are **unspecified**:

- Alignment of the allocation unit that holds a bit-field.

The following properties of bit-fields are **implementation-defined**:

- Whether bit-fields of type int are treated as signed or unsigned.
- Whether types other than int, signed int, unsigned int, _Bool(since C99), and (possibly unsigned) _BitInt(N)(since C23) are permitted.

|  |  |
| --- | --- |
| - Whether atomic types are permitted. | (since C11) |

- Whether a bit-field can straddle an allocation unit boundary.
- The order of bit-fields within an allocation unit (on some platforms, bit-fields are packed left-to-right, on others right-to-left).

|  |  |
| --- | --- |
| Even though the number of bits in the object representation of _Bool is at least CHAR_BIT, the width of the bit-field of type _Bool cannot be greater than 1. | (since C99) |

In the C++ programming language, the width of a bit-field can exceed the width of the underlying type (but the extra bits are padding bits), and bit-fields of type int are always signed.

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.7.2.1 Structure and union specifiers

- C17 standard (ISO/IEC 9899:2018):

:   - 6.7.2.1 Structure and union specifiers

- C11 standard (ISO/IEC 9899:2011):

:   - 6.7.2.1 Structure and union specifiers

- C99 standard (ISO/IEC 9899:1999):

:   - 6.7.2.1 Structure and union specifiers

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.5.2.1 Structure and union specifiers

### See also

|  |  |
| --- | --- |
| C++ documentation for Bit-field | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/bit_field&oldid=180012>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2025, at 18:58.