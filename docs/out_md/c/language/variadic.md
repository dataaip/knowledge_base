# Variadic arguments

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

 Functions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| function declaration | | | | |
| function definition | | | | |
| ****variadic arguments**** | | | | |
| inline(C99) | | | | |
| _Noreturn(C11) | | | | |

Variadic functions are functions that may be called with different number of arguments.

Only prototyped function declarations may be variadic. This is indicated by the parameter of the form ... which must appear last in the parameter list and must follow at least one named parameter(until C23). The ellipsis parameter and the proceeding parameter must be delimited by ,.

```
// Prototyped declaration
int printx(const char* fmt, ...); // function declared this way
printx("hello world");     // may be called with one
printx("a=%d b=%d", a, b); // or more arguments
 
int printz(...); // OK since C23 and in C++
// Error until C23: ... must follow at least one named parameter
 
// int printy(..., const char* fmt); // Error: ... must be the last
// int printa(const char* fmt...);   // Error in C: ',' is required; OK in C++

```

At the function call, each argument that is a part of the variable argument list undergoes special implicit conversions known as default argument promotions.

Within the body of a function that uses variadic arguments, the values of these arguments may be accessed using the `<stdarg.h>` library facilities:

|  |  |
| --- | --- |
| Defined in header `<stdarg.h>` | |
| va_start | enables access to variadic function arguments   (function macro) |
| va_arg | accesses the next variadic function argument   (function macro) |
| va_copy(C99) | makes a copy of the variadic function arguments   (function macro) |
| va_end | ends traversal of the variadic function arguments   (function macro) |
| va_list | holds the information needed by va_start, va_arg, va_end, and va_copy   (typedef) |

### Notes

Although old-style (prototype-less) function declarations allow the subsequent function calls to use any number of arguments, they are not allowed to be variadic (as of C89). The definition of such function must specify a fixed number of parameters and cannot use the `stdarg.h` macros.

```
// old-style declaration, removed in C23
int printx(); // function declared this way
printx("hello world");     // may be called with one
printx("a=%d b=%d", a, b); // or more arguments
// the behavior of at least one of these calls is undefined, depending on
// the number of parameters the function is defined to take

```

### Example

Run this code

```
#include <stdio.h>
#include <time.h>
#include <stdarg.h>
 
void tlog(const char* fmt,...)
{
    char msg[50];
    strftime(msg, sizeof msg, "%T", localtime(&(time_t){time(NULL)}));
    printf("[%s] ", msg);
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}
 
int main(void)
{
   tlog("logging %d %d %d...\n", 1, 2, 3);
}

```

Output:

```
[10:21:38] logging 1 2 3...

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 6.7.6.3/9 Function declarators (including prototypes) (p: 96)

:   - 7.16 Variable arguments <stdarg.h> (p: 197-199)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.7.6.3/9 Function declarators (including prototypes) (p: 133)

:   - 7.16 Variable arguments <stdarg.h> (p: 269-272)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.7.5.3/9 Function declarators (including prototypes) (p: 119)

:   - 7.15 Variable arguments <stdarg.h> (p: 249-252)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.5.4.3/5 Function declarators (including prototypes)

:   - 4.8 VARIABLE ARGUMENTS <stdarg.h>

### See also

|  |  |
| --- | --- |
| C++ documentation for Variadic arguments | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/variadic&oldid=142118>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 17 August 2022, at 18:05.