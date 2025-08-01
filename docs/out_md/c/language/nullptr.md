# Predefined null pointer constant (since C23)

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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| value category | | | | |
| evaluation order and sequence points | | | | |
| constant expressions | | | | |
| implicit conversions | | | | |
| generic selection (C11) | | | | |
| constants and literals | | | | |
| integer constant | | | | |
| floating constant | | | | |
| character constant | | | | |
| true/false(C23) | | | | |
| ****nullptr****(C23) | | | | |
| string literal | | | | |
| compound literal (C99) | | | | |
| operators | | | | |
| operator precedence | | | | |
| member access and indirection | | | | |
| logical operators | | | | |
| comparison operators | | | | |
| arithmetic operators | | | | |
| assignment operators | | | | |
| increment and decrement | | | | |
| function call, comma, conditional operator | | | | |
| sizeof | | | | |
| _Alignof(C11\*) | | | | |
| cast operators | | | | |

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `nullptr` |  | (since C23) |
|  | | | | | | | | | |

### Explanation

The keyword nullptr denotes a predefined null pointer constant. It is a non-lvalue of type nullptr_t. nullptr can be converted to a pointer types or bool, where the result is the null pointer value of that type or false respectively.

### Keywords

nullptr

### Example

Demonstrates that a copy of nullptr can also be used as a null pointer constant.

Run this code

```
#include <stddef.h>
#include <stdio.h>
 
void g(int*)
{
    puts("Function g called");
}
 
#define DETECT_NULL_POINTER_CONSTANT(e) \
    _Generic(e,                         \
        void* : puts("void*"),          \
        nullptr_t : puts("nullptr_t"),  \
        default : puts("integer")       \
    )
 
int main()
{
    g(nullptr); // OK
    g(NULL); // OK
    g(0); // OK
 
    auto cloned_nullptr = nullptr;
    g(cloned_nullptr); // OK
 
    [[maybe_unused]] auto cloned_NULL = NULL;
//  g(cloned_NULL); // implementation-defined: maybe OK
 
    [[maybe_unused]] auto cloned_zero = 0;
//  g(cloned_zero); // Error
 
    DETECT_NULL_POINTER_CONSTANT(((void*)0));
    DETECT_NULL_POINTER_CONSTANT(0);
    DETECT_NULL_POINTER_CONSTANT(nullptr);
    DETECT_NULL_POINTER_CONSTANT(NULL); // implementation-defined
}

```

Possible output:

```
Function g called
Function g called
Function g called
Function g called
void*
integer
nullptr_t
void*

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.4.4.6 Predefined constants (p: 66)

### See also

|  |  |
| --- | --- |
| NULL | implementation-defined null pointer constant   (macro constant) |
| nullptr_t(C23) | the type of the predefined null pointer constant ****nullptr****   (typedef) |
| C++ documentation for nullptr | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/nullptr&oldid=176317>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 September 2024, at 11:05.