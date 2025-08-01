# asprintf, aswprintf, vasprintf, vaswprintf

From cppreference.com
< c‎ | experimental‎ | dynamic
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

 Technical Specifications

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Extensions for embedded processors") | | | | |
| Dynamic memory extensions | | | | |
| Floating-point extensions part 1: Binary floating-point | | | | |
| Floating-point extensions part 4: Supplementary functions | | | | |

 Dynamic memory extensions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| fmemopen") | | | | |
| open_memstreamopen_wmemstream") | | | | |
| ****asprintfaswprintfvasprintfvaswprintf**** | | | | |
| getlinegetwlinegetdelimgetwdelim | | | | |
| strdup | | | | |
| strndup | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdio.h>` |  |  |
| int asprintf( char \*\*restrict strp, const char \*restrict fmt, ... ); | (1) | (dynamic memory TR) |
| int aswprintf( wchar_t \*\*restrict strp, const wchar_t \*restrict fmt, ... ); | (2) | (dynamic memory TR) |
| int vasprintf( char \*\*restrict strp, const char \*restrict fmt,                 va_list arg ); | (3) | (dynamic memory TR) |
| int vaswprintf( wchar_t \*\*restrict strp, const wchar_t \*restrict fmt,                  va_list arg ); | (4) | (dynamic memory TR) |
|  |  |  |

1) Analog of sprintf, except that it allocates a storage large enough to hold the output including the terminating null character, as if by a call to malloc, and returns a pointer to that storage via the first argument. This pointer should be passed to free to release the allocated storage when it is no longer needed.2) Same as (1), except that it works with wide characters wchar_t (by analogy with swprintf).3) Same as (1), with the variable argument list replaced by `arg`, which shall be initialized by the va_start macro (and possibly subsequent va_arg calls).4) Same as (3), except that it works with wide characters wchar_t.

### Parameters

|  |  |  |
| --- | --- | --- |
| strp | - | A pointer to a char\* or wchar_t\* which will contain the formatted output |
| fmt | - | A format string as with printf/wprintf and related functions |
| arg | - | Any extra arguments are used as with vsprintf and vswprintf |

### Return value

The number of characters written, just like sprintf (1), swprintf (2), vsprintf (3), or vswprintf (4), respectively. If memory allocation wasn't possible, or some other error occurs, these functions will return -1, and the contents of `strp` is undefined.

### Notes

These functions are GNU extensions, not in C or POSIX. They are also available under \*BSD. The FreeBSD implementation sets `strp` to `NULL` on error.

The `vasprintf` and `vaswprintf` functions do not invoke the va_end macro.

### Example

Can be tested with clang (C11)

Run this code

```
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
 
void test(const char *fmt, ...)
{
    char* dyn_buf;
 
    printf("Demo asprintf:\n");
    const int written_1 = asprintf(&dyn_buf, "%s", fmt);
    printf("dyn_buf: \"%s\"; %i chars were written\n", dyn_buf, written_1);
    free(dyn_buf);
 
    printf("Demo vasprintf:\n");
    va_list args;
    va_start(args, fmt);
    const int written_2 = vasprintf(&dyn_buf, fmt, args);
    va_end(args);
    printf("dyn_buf: \"%s\"; %i chars were written\n", dyn_buf, written_2);
    free(dyn_buf);
}
 
int main(void)
{
    test("Testing... %d, %d, %d", 1, 2, 3);
}

```

Output:

```
Demo asprintf:
dyn_buf: "Testing... %d, %d, %d"; 21 chars were written
Demo vasprintf:
dyn_buf: "Testing... 1, 2, 3"; 18 chars were written

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/experimental/dynamic/asprintf&oldid=161853>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 November 2023, at 04:45.