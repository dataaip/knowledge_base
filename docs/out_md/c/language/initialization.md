# Initialization

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
| ****Initialization**** | | | | |
| Declarations | | | | |
| Functions | | | | |
| Miscellaneous | | | | |
| History of C | | | | |
| Technical Specifications | | | | |

 ****Initialization****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Explicit initialization | | | | |
| Implicit initialization | | | | |
| Empty initialization | | | | |
| Scalar initialization | | | | |
| Array initialization | | | | |
| Struct and union initialization | | | | |

A declaration of an object may provide its initial value through the process known as **initialization**.

For each declarator, the initializer, if not omitted, may be one of the following:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `=` expression | (1) |  |
|  | | | | | | | | | |
| `=` `{` initializer-list `}` | (2) |  |
|  | | | | | | | | | |
| `=` `{` `}` | (3) | (since C23) |
|  | | | | | | | | | |

where initializer-list is a non-empty comma-separated list of initializer ﻿s (with an optional trailing comma), where each initializer has one of three possible forms:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| expression | (1) |  |
|  | | | | | | | | | |
| `{` initializer-list `}` | (2) |  |
|  | | | | | | | | | |
| `{` `}` | (3) | (since C23) |
|  | | | | | | | | | |
| designator-list `=` initializer | (4) | (since C99) |
|  | | | | | | | | | |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| where designator-list is a list of either array designators of the form `[` constant-expression `]` or struct/union member designators of the form `.` identifier ﻿; see array initialization and struct initialization.  Note: besides initializers, brace-enclosed initializer-list may appear in compound literals, which are expressions of the form:   |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `(` type `)` `{` initializer-list `}` |  |  | |  | | | | | | | | | | | `(` type `)` `{` `}` |  | (since C23) | |  | | | | | | | | | | | (since C99) |

### Explanation

The initializer specifies the initial value stored in an object.

#### Explicit initialization

If an initializer is provided, see

- scalar initialization for the initialization of scalar types
- array initialization for the initialization of array types
- struct initialization for the initialization of struct and union types.

#### Implicit initialization

If an initializer is not provided:

- objects with automatic storage duration are initialized to indeterminate values (which may be trap representations)
- objects with static and thread-local storage duration are empty-initialized

#### Empty initialization

|  |  |
| --- | --- |
| An object is empty-initialized if it is explicitly initialized from initializer = {}. | (since C23) |

In some cases, an object is empty-initialized if it is not initialized explicitly, that is:

- pointers are initialized to null pointer values of their types
- objects of integral types are initialized to unsigned zero
- objects of floating types are initialized to positive zero
- all elements of arrays, all members of structs, and the first members of unions are empty-initialized, recursively, plus all padding bits are initialized to zero

:   (on platforms where null pointer values and floating zeroes have all-bit-zero representations, this form of initialization for statics is normally implemented by allocating them in the .bss section of the program image)

### Notes

When initializing an object of static or thread-local storage duration, every expression in the initializer must be a constant expression or string literal.

Initializers cannot be used in declarations of objects of incomplete type, VLAs, and block-scope objects with linkage.

The initial values of function parameters are established as if by assignment from the arguments of a function call, rather than by initialization.

If an indeterminate value is used as an argument to any standard library call, the behavior is undefined. Otherwise, the result of any expression involving indeterminate values is an indeterminate value (e.g. int n;, n may not compare equal to itself and it may appear to change its value on subsequent reads)

|  |  |
| --- | --- |
| There is no special construct in C corresponding to value initialization in C++; however, = {0} (or (T){0} in compound literals)(since C99) can be used instead, as the C standard does not allow empty structs, empty unions, or arrays of zero length. | (until C23) |
| The empty initializer = {} (or (T){} in compound literals) can be used to achieve the same semantics as value initialization in C++. | (since C23) |

### Example

Run this code

```
#include <stdlib.h>
int a[2]; // initializes a to {0, 0}
int main(void)
{
    int i;          // initializes i to an indeterminate value
    static int j;   // initializes j to 0
    int k = 1;      // initializes k to 1
 
    // initializes int x[3] to 1,3,5
    // initializes int* p to &x[0]
    int x[] = { 1, 3, 5 }, *p = x;
 
    // initializes w (an array of two structs) to
    // { { {1,0,0}, 0}, { {2,0,0}, 0} }
    struct {int a[3], b;} w[] = {[0].a = {1}, [1].a[0] = 2};
 
    // function call expression can be used for a local variable
    char* ptr = malloc(10);
    free(ptr);
 
//  Error: objects with static storage duration require constant initializers
//  static char* ptr = malloc(10);
 
//  Error: VLA cannot be initialized
//  int vla[n] = {0};
}

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 6.7.9 Initialization (p: 100-105)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.7.9 Initialization (p: 139-144)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.7.8 Initialization (p: 125-130)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 6.5.7 Initialization

### See also

|  |  |
| --- | --- |
| C++ documentation for Initialization | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/initialization&oldid=147022>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 January 2023, at 10:03.