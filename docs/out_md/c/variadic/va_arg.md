# va_arg

From cppreference.com
< c‎ | variadic
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

 Variadic functions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| va_start | | | | |
| ****va_arg**** | | | | |
| va_copy(C99) | | | | |
| va_end | | | | |
| va_list | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdarg.h>` |  |  |
| T va_arg( va_list ap, T ); |  |  |
|  |  |  |

The `va_arg` macro expands to an expression of type T that corresponds to the next parameter from the va_list ap.

Prior to calling `va_arg`, ap must be initialized by a call to either va_start or va_copy, with no intervening call to va_end. Each invocation of the `va_arg` macro modifies ap to point to the next variable argument.

If the type of the next argument in ap (after promotions) is not compatible with T, the behavior is undefined, unless:

- one type is a signed integer type, the other type is the corresponding unsigned integer type, and the value is representable in both types; or
- one type is pointer to void and the other is a pointer to a character type.

If `va_arg` is called when there are no more arguments in ap, the behavior is undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| ap | - | an instance of the va_list type |
| T | - | the type of the next parameter in ap |

### Expanded value

the next variable parameter in ap

### Example

Run this code

```
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
 
double stddev(int count, ...)
{
    double sum = 0;
    double sum_sq = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
    {
        double num = va_arg(args, double);
        sum += num;
        sum_sq += num*num;
    }
    va_end(args);
    return sqrt(sum_sq / count - (sum / count) * (sum / count));
}
 
int main(void)
{
    printf("%f\n", stddev(4, 25.0, 27.3, 26.9, 25.7));
}

```

Output:

```
0.920258

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.16.2.2 The va_arg macro (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.16.1.1 The va_arg macro (p: TBD)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.16.1.1 The va_arg macro (p: 269-270)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.15.1.1 The va_arg macro (p: 249-250)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.8.1.2 The va_arg macro

### See also

|  |  |
| --- | --- |
| va_copy(C99) | makes a copy of the variadic function arguments   (function macro) |
| va_end | ends traversal of the variadic function arguments   (function macro) |
| va_list | holds the information needed by va_start, va_arg, va_end, and va_copy   (typedef) |
| va_start | enables access to variadic function arguments   (function macro) |
| C++ documentation for va_arg | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/variadic/va_arg&oldid=179734>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 January 2025, at 16:04.