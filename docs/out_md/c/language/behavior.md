# Undefined behavior

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
| Objects and alignment | | | | |
| The main() function | | | | |
| The as-if rule | | | | |
| ****Undefined behavior**** | | | | |
| Memory model and data races | | | | |

The C language standard precisely specifies the observable behavior of C language programs, except for the ones in the following categories:

- **undefined behavior** - there are no restrictions on the behavior of the program. Examples of undefined behavior are memory accesses outside of array bounds, signed integer overflow, null pointer dereference, modification of the same scalar more than once in an expression without sequence points, access to an object through a pointer of a different type, etc. Compilers are not required to diagnose undefined behavior (although many simple situations are diagnosed), and the compiled program is not required to do anything meaningful.

- **unspecified behavior** - two or more behaviors are permitted and the implementation is not required to document the effects of each behavior. For example, order of evaluation, whether identical string literals are distinct, etc. Each unspecified behavior results in one of a set of valid results and may produce a different result when repeated in the same program.

- **implementation-defined behavior** - unspecified behavior where each implementation documents how the choice is made. For example, number of bits in a byte, or whether signed integer right shift is arithmetic or logical.

- **locale-specific behavior** - implementation-defined behavior that depends on the currently chosen locale. For example, whether islower returns true for any character other than the 26 lowercase Latin letters.

(Note: Strictly conforming programs do not depend on any unspecified, undefined, or implementation-defined behavior)

The compilers are required to issue diagnostic messages (either errors or warnings) for any programs that violates any C syntax rule or semantic constraint, even if its behavior is specified as undefined or implementation-defined or if the compiler provides a language extension that allows it to accept such program. Diagnostics for undefined behavior are not otherwise required.

### UB and optimization

Because correct C programs are free of undefined behavior, compilers may produce unexpected results when a program that actually has UB is compiled with optimization enabled:

For example,

#### Signed overflow

```
int foo(int x)
{
    return x + 1 > x; // either true or UB due to signed overflow
}

```

may be compiled as (demo)

```
foo:
        mov     eax, 1
        ret

```

#### Access out of bounds

```
int table[4] = {0};
int exists_in_table(int v)
{
    // return 1 in one of the first 4 iterations or UB due to out-of-bounds access
    for (int i = 0; i <= 4; i++)
        if (table[i] == v)
            return 1;
    return 0;
}

```

May be compiled as (demo)

```
exists_in_table:
        mov     eax, 1
        ret

```

#### Uninitialized scalar

```
_Bool p; // uninitialized local variable
if (p) // UB access to uninitialized scalar
    puts("p is true");
if (!p) // UB access to uninitialized scalar
    puts("p is false");

```

May produce the following output (observed with an older version of gcc):

```
p is true
p is false

```

```
size_t f(int x)
{
    size_t a;
    if (x) // either x nonzero or UB
        a = 42;
    return a;
}

```

May be compiled as (demo)

```
f:
        mov     eax, 42
        ret

```

#### Invalid scalar

```
int f(void)
{
    _Bool b = 0;
    unsigned char* p = (unsigned char*)&b;
    *p = 10;
    // reading from b is now UB
    return b == 0;
}

```

May be compiled as (demo)

```
f:
        mov     eax, 11
        ret

```

#### Null pointer dereference

```
int foo(int* p)
{
    int x = *p;
    if (!p)
        return x; // Either UB above or this branch is never taken
    else
        return 0;
}
 
int bar()
{
    int* p = NULL;
    return *p;    // Unconditional UB
}

```

may be compiled as (demo)

```
foo:
        xor     eax, eax
        ret
bar:
        ret

```

#### Access to pointer passed to realloc

Choose clang to observe the output shown

Run this code

```
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *p = (int*)malloc(sizeof(int));
    int *q = (int*)realloc(p, sizeof(int));
    *p = 1; // UB access to a pointer that was passed to realloc
    *q = 2;
    if (p == q) // UB access to a pointer that was passed to realloc
        printf("%d%d\n", *p, *q);
}

```

Possible output:

```
12

```

#### Infinite loop without side-effects

Choose clang to observe the output shown

Run this code

```
#include <stdio.h>
 
int fermat()
{
    const int MAX = 1000;
    // Endless loop with no side effects is UB
    for (int a = 1, b = 1, c = 1; 1;)
    {
        if (((a * a * a) == ((b * b * b) + (c * c * c))))
            return 1;
        ++a;
        if (a > MAX)
        {
            a = 1;
            ++b;
        }
        if (b > MAX)
        {
            b = 1;
            ++c;
        }
        if (c > MAX)
            c = 1;
    }
    return 0;
}
 
int main(void)
{
    if (fermat())
        puts("Fermat's Last Theorem has been disproved.");
    else
        puts("Fermat's Last Theorem has not been disproved.");
}

```

Possible output:

```
Fermat's Last Theorem has been disproved.

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 3.4 Behavior (p: TBD)

:   - 4 Conformance (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 3.4 Behavior (p: 3-4)

:   - 4 Conformance (p: 8)

- C11 standard (ISO/IEC 9899:2011):

:   - 3.4 Behavior (p: 3-4)

:   - 4/2 Undefined behavior (p: 8)

- C99 standard (ISO/IEC 9899:1999):

:   - 3.4 Behavior (p: 3-4)

:   - 4/2 Undefined behavior (p: 7)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 1.6 DEFINITIONS OF TERMS

### See also

|  |  |
| --- | --- |
| C++ documentation for Undefined behavior | |

### External links

|  |  |
| --- | --- |
| 1. | What Every C Programmer Should Know About Undefined Behavior #1/3 |
| 2. | What Every C Programmer Should Know About Undefined Behavior #2/3 |
| 3. | What Every C Programmer Should Know About Undefined Behavior #3/3 |
| 4. | Undefined behavior can result in time travel (among other things, but time travel is the funkiest) |
| 5. | Understanding Integer Overflow in C/C++ |
| 6. | Undefined Behavior and Fermat’s Last Theorem |
| 7. | Fun with NULL pointers, part 1 (local exploit in Linux 2.6.30 caused by UB due to null pointer dereference) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/behavior&oldid=178597>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 14:08.