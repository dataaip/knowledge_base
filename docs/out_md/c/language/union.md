# Union declaration

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
| ****union**** | | | | |
| Bit-field | | | | |
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

A union is a type consisting of a sequence of members whose storage overlaps (as opposed to struct, which is a type consisting of a sequence of members whose storage is allocated in an ordered sequence). The value of at most one of the members can be stored in a union at any one time.

The type specifier for a union is identical to the `struct` type specifier except for the keyword used:

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `union` attr-spec-seq ﻿(optional) name ﻿(optional) `{` struct-declaration-list `}` | (1) |  |
|  | | | | | | | | | |
| `union` attr-spec-seq ﻿(optional) name | (2) |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| name | - | the name of the union that's being defined |
| struct-declaration-list | - | any number of variable declarations, bit-field declarations, and static assert declarations. Members of incomplete type and members of function type are not allowed. |
| attr-spec-seq | - | (C23)optional list of attributes, applied to the union type, not allowed for (2) if such form is not followed by a `;` (i.e. not a forward declaration). |

### Explanation

The union is only as big as necessary to hold its largest member (additional unnamed trailing padding may also be added). The other members are allocated in the same bytes as part of that largest member.

A pointer to a union can be cast to a pointer to each of its members (if a union has bit-field members, the pointer to a union can be cast to the pointer to the bit-field's underlying type). Likewise, a pointer to any member of a union can be cast to a pointer to the enclosing union.

|  |  |
| --- | --- |
| If the member used to access the contents of a union is not the same as the member last used to store a value, the object representation of the value that was stored is reinterpreted as an object representation of the new type (this is known as **type punning**). If the size of the new type is larger than the size of the last-written type, the contents of the excess bytes are unspecified (and may be a trap representation). Before C99 TC3 (DR 283) this behavior was undefined, but commonly implemented this way. | (since C99) |

|  |  |
| --- | --- |
| Similar to struct, an unnamed member of a union whose type is a union without name is known as **anonymous union**. Every member of an anonymous union is considered to be a member of the enclosing struct or union keeping their union layout. This applies recursively if the enclosing struct or union is also anonymous.   ```text struct v {    union // anonymous union    {        struct { int i, j; }; // anonymous structure        struct { long k, l; } w;    };    int m; } v1;   v1.i = 2;   // valid v1.k = 3;   // invalid: inner structure is not anonymous v1.w.k = 5; // valid ```   Similar to struct, the behavior of the program is undefined if union is defined without any named members (including those obtained via anonymous nested structs or unions). | (since C11) |

### Keywords

union

### Notes

See struct initialization for the rules about initialization of structs and unions.

### Example

Run this code

```
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
 
int main(void)
{
    union S
    {
        uint32_t u32;
        uint16_t u16[2];
        uint8_t  u8;
    } s = {0x12345678}; // s.u32 is now the active member
    printf("Union S has size %zu and holds %x\n", sizeof s, s.u32);
    s.u16[0] = 0x0011;  // s.u16 is now the active member
    // reading from s.u32 or from s.u8 reinterprets the object representation
//  printf("s.u8 is now %x\n", s.u8); // unspecified, typically 11 or 00
//  printf("s.u32 is now %x\n", s.u32); // unspecified, typically 12340011 or 00115678
 
    // pointers to all members of a union compare equal to themselves and the union
    assert((uint8_t*)&s == &s.u8);
 
    // this union has 3 bytes of trailing padding
    union pad
    {
        char  c[5]; // occupies 5 bytes
        float f;    // occupies 4 bytes, imposes alignment 4
    } p = { .f = 1.23 }; // the size is 8 to satisfy float's alignment
    printf("size of union of char[5] and float is %zu\n", sizeof p);
}

```

Possible output:

```
Union S has size 4 and holds 12345678
size of union of char[5] and float is 8

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| DR 499 | C11 | members of anonymous structs/unions were considered members of the enclosing struct/union | they retain their memory layout |

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.7.2.1 Structure and union specifiers (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.7.2.1 Structure and union specifiers (p: 81-84)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.7.2.1 Structure and union specifiers (p: 112-117)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.7.2.1 Structure and union specifiers (p: 101-104)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.5.2.1 Structure and union specifiers

### See also

|  |  |
| --- | --- |
| C++ documentation for Union declaration | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/union&oldid=168508>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 January 2024, at 22:58.