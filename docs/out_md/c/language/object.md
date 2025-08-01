# Objects and alignment

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

 Basic Concepts

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Comments | | | | |
| ASCII | | | | |
| Character sets | | | | |
| Translation phases | | | | |
| Punctuation | | | | |
| Identifier | | | | |
| Scope | | | | |
| Lifetime | | | | |
| Lookup and name spaces | | | | |
| Type | | | | |
| Arithmetic types | | | | |
| ****Objects and alignment**** | | | | |
| The main() function | | | | |
| The as-if rule | | | | |
| Undefined behavior | | | | |
| Memory model and data races | | | | |

C programs create, destroy, access, and manipulate objects.

An object in C is a region of data storage in the execution environment, the contents of which can represent **values** (a value is the meaning of the contents of an object, when interpreted as having a specific type).

Every object has

- size (can be determined with `sizeof`)
- alignment requirement(can be determined by `_Alignof`(until C23)`alignof`(since C23))(since C11)
- storage duration (automatic, static, allocated, thread-local)
- lifetime (equal to storage duration or temporary)
- effective type (see below)
- value (which may be indeterminate)
- optionally, an identifier that denotes this object.

Objects are created by declarations, allocation functions, string literals, compound literals, and by non-lvalue expressions that return structures or unions with array members.

### Object representation

Except for bit-fields, objects are composed of contiguous sequences of one or more bytes, each consisting of CHAR_BIT bits, and can be copied with memcpy into an object of type unsigned char[n], where `n` is the size of the object. The contents of the resulting array are known as **object representation**.

If two objects have the same object representation, they compare equal (except if they are floating-point NaNs). The reverse is not true: two objects that compare equal may have different object representations because not every bit of the object representation needs to participate in the value. Such bits may be used for padding to satisfy alignment requirement, for parity checks, to indicate trap representations, etc.

If an object representation does not represent any value of the object type, it is known as **trap representation**. Accessing a trap representation in any way other than reading it through an lvalue expression of character type is undefined behavior. The value of a structure or union is never a trap representation even if any particular member is one.

For the objects of type char, signed char, and unsigned char, every bit of the object representation is required to participate in the value representation and each possible bit pattern represents a distinct value (no padding, trap bits, or multiple representations allowed).

When objects of integer types (short, int, long, long long) occupy multiple bytes, the use of those bytes is implementation-defined, but the two dominant implementations are **big-endian** (POWER, Sparc, Itanium) and **little-endian** (x86, x86_64): a big-endian platform stores the most significant byte at the lowest address of the region of storage occupied by the integer, a little-endian platform stores the least significant byte at the lowest address. See Endianness for detail. See also example below.

Although most implementations do not allow trap representations, padding bits, or multiple representations for integer types, there are exceptions; for example a value of an integer type on Itanium may be a trap representation.

### Effective type

Every object has an **effective type**, which determines which lvalue accesses are valid and which violate the strict aliasing rules.

If the object was created by a declaration, the declared type of that object is the object's **effective type**.

If the object was created by an allocation function (including realloc), it has no declared type. Such object acquires an effective type as follows:

- The first write to that object through an lvalue that has a type other than character type, at which time the type of that lvalue becomes this object's **effective type** for that write and all subsequent reads.
- memcpy or memmove copy another object into that object, or copy another object into that object as an array of character type, at which time the effective type of the source object (if it had one) becomes the effective type of this object for that write and all subsequent reads.
- Any other access to the object with no declared type, the effective type is the type of the lvalue used for the access.

### Strict aliasing

Given an object with **effective type** T1, using an lvalue expression (typically, dereferencing a pointer) of a different type T2 is undefined behavior, unless:

- T2 and T1 are compatible types.
- T2 is cvr-qualified version of a type that is compatible with T1.
- T2 is a signed or unsigned version of a type that is compatible with T1.
- T2 is an aggregate type or union type type that includes one of the aforementioned types among its members (including, recursively, a member of a subaggregate or contained union).
- T2 is a character type (char, signed char, or unsigned char).

```
int i = 7;
char* pc = (char*)(&i);
 
if (pc[0] == '\x7') // aliasing through char is OK
    puts("This system is little-endian");
else
    puts("This system is big-endian");
 
float* pf = (float*)(&i);
float d = *pf; // UB: float lvalue *p cannot be used to access int

```

These rules control whether when compiling a function that receives two pointers, the compiler must emit code that re-reads one after writing through another:

```
// int* and double* cannot alias
void f1(int* pi, double* pd, double d)
{
    // the read from *pi can be done only once, before the loop
    for (int i = 0; i < *pi; i++)
        *pd++ = d;
}

```

```
struct S { int a, b; };
 
// int* and struct S* may alias because S is an aggregate type with a member of type int
void f2(int* pi, struct S* ps, struct S s)
{
    // read from *pi must take place after every write through *ps
    for (int i = 0; i < *pi; i++)
        *ps++ = s;
}

```

Note that restrict qualifier can be used to indicate that two pointers do not alias even if the rules above permit them to be.

Note that type-punning may also be performed through the inactive member of a union.

### Alignment

Every complete object type has a property called **alignment requirement**, which is an integer value of type size_t representing the number of bytes between successive addresses at which objects of this type can be allocated. The valid alignment values are non-negative integral powers of two.

|  |  |
| --- | --- |
| The alignment requirement of a type can be queried with `_Alignof`(until C23)`alignof`(since C23). | (since C11) |

In order to satisfy alignment requirements of all members of a struct, padding may be inserted after some of its members.

Run this code

```
#include <stdalign.h>
#include <stdio.h>
 
// objects of struct S can be allocated at any address
// because both S.a and S.b can be allocated at any address
struct S
{
    char a; // size: 1, alignment: 1
    char b; // size: 1, alignment: 1
}; // size: 2, alignment: 1
 
// objects of struct X must be allocated at 4-byte boundaries
// because X.n must be allocated at 4-byte boundaries
// because int's alignment requirement is (usually) 4
struct X
{
    int n;  // size: 4, alignment: 4
    char c; // size: 1, alignment: 1
    // three bytes padding
}; // size: 8, alignment: 4
 
int main(void)
{
    printf("sizeof(struct S) = %zu\n", sizeof(struct S));
    printf("alignof(struct S) = %zu\n", alignof(struct S));
    printf("sizeof(struct X) = %zu\n", sizeof(struct X));
    printf("alignof(struct X) = %zu\n", alignof(struct X));
}

```

Possible output:

```
sizeof(struct S) = 2
alignof(struct S) = 1
sizeof(struct X) = 8
alignof(struct X) = 4

```

Each object type imposes its alignment requirement on every object of that type. The weakest (smallest) alignment is the alignment of the types char, signed char, and unsigned char, and equals 1. The strictest (largest) **fundamental alignment** of any type is implementation-definedand equal to the alignment of max_align_t(since C11).

Fundamental alignments are supported for objects of all kinds of storage durations.

|  |  |
| --- | --- |
| If an object's alignment is made stricter (larger) than max_align_t using `_Alignof`(until C23)`alignof`(since C23), it has **extended alignment requirement**. A struct or union type whose member has extended alignment is an **over-aligned type**. It is implementation-defined if over-aligned types are supported, and their support may be different in each kind of storage duration.  If a struct or union type `S` does not have any member of an over-aligned type or declared with an alignment specifier that specifies an extended alignment, `S` has a fundamental alignment.  The atomic version of every arithmetic or pointer type has a fundamental alignment. | (since C11) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| DR 445 | C11 | a type might have extended alignment without _Alignas involved | it must have fundamental alignment |

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 3.15 object (p: 5)

:   - 6.2.6 Representations of types (p: 33-35)

:   - 6.2.8 Alignment of objects (p: 36-37)

:   - 6.5/6-7 Expressions (p: 55-56)

- C11 standard (ISO/IEC 9899:2011):

:   - 3.15 object (p: 6)

:   - 6.2.6 Representations of types (p: 44-46)

:   - 6.2.8 Alignment of objects (p: 48-49)

:   - 6.5/6-7 Expressions (p: 77)

- C99 standard (ISO/IEC 9899:1999):

:   - 3.2 alignment (p: 3)

:   - 3.14 object (p: 5)

:   - 6.2.6 Representations of types (p: 37-39)

:   - 6.5/6-7 Expressions (p: 67-68)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 1.6 Definitions of terms

### See also

|  |  |
| --- | --- |
| C++ documentation for Object | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/object&oldid=179995>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2025, at 06:52.