# time

From cppreference.com
< c‎ | chrono
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

 Date and time utilities

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Time manipulation | | | | |
| difftime | | | | |
| ****time**** | | | | |
| clock | | | | |
| timespec_get(C11) | | | | |
| timespec_getres(C23) | | | | |
| Format conversions | | | | |
| asctimeasctime_s(deprecated in C23)(C11) | | | | |
| ctimectime_s(deprecated in C23)(C11) | | | | |
| strftime | | | | |
| wcsftime(C95) | | | | |
| gmtimegmtime_rgmtime_s(C23)(C11) | | | | |
| localtimelocaltime_rlocaltime_s(C23)(C11) | | | | |
| mktime | | | | |
| Constants | | | | |
| CLOCKS_PER_SEC | | | | |
| Types | | | | |
| tm | | | | |
| time_t | | | | |
| clock_t | | | | |
| timespec(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<time.h>` |  |  |
| time_t time( time_t\* arg ); |  |  |
|  |  |  |

Returns the current calendar time encoded as a time_t object, and also stores it in the time_t object pointed to by arg (unless arg is a null pointer)

### Parameters

|  |  |  |
| --- | --- | --- |
| arg | - | pointer to a time_t object where the time will be stored, or a null pointer |

### Return value

Current calendar time encoded as time_t object on success, (time_t)(-1) on error. If arg is not a null pointer, the return value is also stored in the object pointed to by arg.

### Notes

The encoding of calendar time in time_t is unspecified, but most systems conform to POSIX specification and return a value of integral type holding the number of seconds since the Epoch. Implementations in which time_t is a 32-bit signed integer (many historical implementations) fail in the year 2038.

### Example

Run this code

```
#include <stdint.h>
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t result = time(NULL);
    if (result != (time_t)(-1))
        printf("The current time is %s(%jd seconds since the Epoch)\n",
               asctime(gmtime(&result)), (intmax_t)result);
}

```

Possible output:

```
The current time is Fri Apr 24 15:05:25 2015
(1429887925 seconds since the Epoch)

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.27.2.4 The time function (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.27.2.4 The time function (p: 286)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.27.2.4 The time function (p: 391)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.23.2.4 The time function (p: 341)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.12.2.4 The time function

### See also

|  |  |
| --- | --- |
| localtimelocaltime_rlocaltime_s(C23)(C11) | converts time since epoch to calendar time expressed as local time   (function) |
| gmtimegmtime_rgmtime_s(C23)(C11) | converts time since epoch to calendar time expressed as Coordinated Universal Time (UTC)   (function) |
| timespec_get(C11) | returns the calendar time in seconds and nanoseconds based on a given time base   (function) |
| C++ documentation for time | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/chrono/time&oldid=180264>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 February 2025, at 20:54.