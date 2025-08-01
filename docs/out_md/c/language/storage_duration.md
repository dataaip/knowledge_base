# Storage-class specifiers

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
| Bit-field | | | | |
| Atomic types (C11) | | | | |
| const | | | | |
| constexpr(C23) | | | | |
| volatile | | | | |
| restrict(C99) | | | | |
| Alignment specifiers | | | | |
| ****Storage duration and linkage**** | | | | |
| External and tentative definitions | | | | |
| typedef | | | | |
| Static assertions | | | | |
| Attributes (C23) | | | | |

Specify **storage duration** and **linkage** of objects and functions:

:   - `auto` - automatic duration and no linkage
    - `register` - automatic duration and no linkage; address of this variable cannot be taken
    - `static` - static duration and internal linkage (unless at block scope)
    - `extern` - static duration and external linkage (unless already declared internal)

|  |  |
| --- | --- |
| - `_Thread_local`(until C23)`thread_local`(since C23) - thread storage duration | (since C11) |

### Explanation

Storage-class specifiers appear in declarations and compound literal expressions(since C23). At most one specifier may be used, except that _Thread_local(until C23)thread_local(since C23) may be combined with static or extern to adjust linkage(since C11). The storage-class specifiers determine two independent properties of the names they declare: **storage duration** and **linkage**.

1) The auto specifier is only allowed for objects declared at block scope (except function parameter lists). It indicates automatic storage duration and no linkage, which are the defaults for these kinds of declarations.2) The register specifier is only allowed for objects declared at block scope, including function parameter lists. It indicates automatic storage duration and no linkage (which is the default for these kinds of declarations), but additionally hints the optimizer to store the value of this variable in a CPU register if possible. Regardless of whether this optimization takes place or not, variables declared register cannot be used as arguments to the address-of operator, cannot use `_Alignas`(until C23)`alignas`(since C23)(since C11), and register arrays are not convertible to pointers.3) The static specifier specifies both static storage duration (unless combined with _Thread_local)(since C11) and internal linkage (unless used at block scope). It can be used with functions at file scope and with variables at both file and block scope, but not in function parameter lists.4) The extern specifier specifies static storage duration (unless combined with _Thread_local(until C23)thread_local(since C23))(since C11) and external linkage. It can be used with function and object declarations in both file and block scope (excluding function parameter lists). If extern appears on a redeclaration of an identifier that was already declared with internal linkage, the linkage remains internal. Otherwise (if the prior declaration was external, no-linkage, or is not in scope), the linkage is external.

|  |  |
| --- | --- |
| 5) _Thread_local(until C23)thread_local(since C23) indicates **thread storage duration**. It cannot be used with function declarations. If it is used on a declaration of an object, it must be present on every declaration of the same object. If it is used on a block-scope declaration, it must be combined with either static or extern to decide linkage. | (since C11) |

If no storage-class specifier is provided, the defaults are:

:   extern for all functions
:   extern for objects at file scope
:   auto for objects at block scope

For any struct or union declared with a storage-class specifier, the storage duration (but not linkage) applies to their members, recursively.

Function declarations at block scope can use extern or none at all. Function declarations at file scope can use extern or static.

Function parameters cannot use any storage-class specifiers other than register. Note that static has special meaning in function parameters of array type.

### Storage duration

Every object has a property called **storage duration**, which limits the object lifetime. There are four kinds of storage duration in C:

:   - ******automatic****** storage duration. The storage is allocated when the block in which the object was declared is entered and deallocated when it is exited by any means (goto, return, reaching the end). One exception is the VLAs; their storage is allocated when the declaration is executed, not on block entry, and deallocated when the declaration goes out of scope, not when the block is exited(since C99). If the block is entered recursively, a new allocation is performed for every recursion level. All function parameters and non-static block-scope objects have this storage duration, as well as compound literals used at block scope(until C23)
    - ******static****** storage duration. The storage duration is the entire execution of the program, and the value stored in the object is initialized only once, prior to main function. All objects declared static and all objects with either internal or external linkage that aren't declared _Thread_local(until C23)thread_local(since C23)(since C11) have this storage duration.

|  |  |
| --- | --- |
| - ******thread****** storage duration. The storage duration is the entire execution of the thread in which it was created, and the value stored in the object is initialized when the thread is started. Each thread has its own, distinct, object. If the thread that executes the expression that accesses this object is not the thread that executed its initialization, the behavior is implementation-defined. All objects declared _Thread_local(until C23)thread_local(since C23) have this storage duration. | (since C11) |

:   - ******allocated****** storage duration. The storage is allocated and deallocated on request, using dynamic memory allocation functions.

#### Linkage

Linkage refers to the ability of an identifier (variable or function) to be referred to in other scopes. If a variable or function with the same identifier is declared in several scopes, but cannot be referred to from all of them, then several instances of the variable are generated. The following linkages are recognized:

:   - ******no linkage******. The variable or function can be referred to only from the scope it is in (block scope). All block scope variables that are not declared `extern` have this linkage, as well as all function parameters and all identifiers that aren't functions or variables.

:   - ******internal linkage******. The variable or function can be referred to from all scopes in the current translation unit. All file scope variables which are declared `static` or `constexpr`(since C23) have this linkage, and all file scope functions declared `static` (static function declarations are only allowed at file scope).

:   - ******external linkage******. The variable or function can be referred to from any other translation units in the entire program. All file scope variables which are not declared `static` or `constexpr`(since C23) have this linkage, all file scope function declarations which are not declared `static`, all block scope function declarations, and, additionally, all variables or functions declared `extern` have this linkage unless a prior declaration with internal linkage is visible at that point.

If the same identifier appears with both internal and external linkage in the same translation unit, the behavior is undefined. This is possible when tentative definitions are used.

#### Linkage and libraries

|  |  |
| --- | --- |
|  | This section is incomplete Reason: should this be a separate top-level entry in c/language under Miscellaneous? |

Declarations with external linkage are commonly made available in header files so that all translation units that #include the file may refer to the same identifier that are defined elsewhere.

Any declaration with internal linkage that appears in a header file results in a separate and distinct object in each translation unit that includes that file.

|  |  |
| --- | --- |
| Library interface, header file "flib.h":   ```text #ifndef FLIB_H #define FLIB_H void f(void);              // function declaration with external linkage extern int state;          // variable declaration with external linkage static const int size = 5; // definition of a read-only variable with internal linkage enum { MAX = 10 };         // constant definition inline int sum (int a, int b) { return a + b; } // inline function definition #endif // FLIB_H ```   Library implementation, source file "flib.c":   ```text #include "flib.h"   static void local_f(int s) {} // definition with internal linkage (only used in this file) static int local_state;       // definition with internal linkage (only used in this file)   int state;                       // definition with external linkage (used by main.c) void f(void) { local_f(state); } // definition with external linkage (used by main.c) ```   Application code, source file "main.c":   ```text #include "flib.h"   int main(void) {     int x[MAX] = {size}; // uses the constant and the read-only variable     state = 7;           // modifies state in flib.c     f();                 // calls f() in flib.c } ``` |  |

### Keywords

auto,
register,
static,
extern,
_Thread_local
thread_local

### Notes

|  |  |
| --- | --- |
| The keyword _Thread_local is usually used through the convenience macro thread_local, defined in the header <threads.h>. | (until C23) |

The `typedef` and `constexpr`(since C23) specifiers are formally listed as storage-class specifiers in the C language grammar, but do not specify storage.

|  |  |
| --- | --- |
| The auto specifier is also used for type inference. | (since C23) |

Names at file scope that are const and not extern have external linkage in C (as the default for all file-scope declarations), but internal linkage in C++.

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
 
// static storage duration
int A;
 
int main(void)
{
    printf("&A = %p\n", (void*)&A);
 
    // automatic storage duration
    int A = 1;   // hides global A
    printf("&A = %p\n", (void*)&A);
 
    // allocated storage duration
    int* ptr_1 = malloc(sizeof(int));   // start allocated storage duration
    printf("address of int in allocated memory = %p\n", (void*)ptr_1);
    free(ptr_1);                        // stop allocated storage duration
}

```

Possible output:

```
&A = 0x600ae4
&A = 0x7ffefb064f5c
address of int in allocated memory = 0x1f28c30

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.2.2 Linkages of identifiers (p: 35-36)

:   - 6.2.4 Storage durations of objects (p: 36-37)

:   - 6.7.1 Storage-class specifiers (p: 97-100)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.2.2 Linkages of identifiers (p: 29-30)

:   - 6.2.4 Storage durations of objects (p: 30)

:   - 6.7.1 Storage-class specifiers (p: 79)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.2.2 Linkages of identifiers (p: 36-37)

:   - 6.2.4 Storage durations of objects (p: 38-39)

:   - 6.7.1 Storage-class specifiers (p: 109-110)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.2.2 Linkages of identifiers (p: 30-31)

:   - 6.2.4 Storage durations of objects (p: 32)

:   - 6.7.1 Storage-class specifiers (p: 98-99)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.1.2.2 Linkages of identifiers

:   - 3.1.2.4 Storage durations of objects

:   - 3.5.1 Storage-class specifiers

### See also

|  |  |
| --- | --- |
| C++ documentation for Storage class specifiers | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/storage_duration&oldid=179994>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2025, at 06:50.