# time_t

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
| time | | | | |
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
| ****time_t**** | | | | |
| clock_t | | | | |
| timespec(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<time.h>` |  |  |
| typedef /\* unspecified \*/ time_t; |  |  |
|  |  |  |

Real arithmetic type capable of representing times.

Although not defined by the C standard, this is almost always an integral value holding the number of seconds (not counting leap seconds) since 00:00, Jan 1 1970 UTC, corresponding to  POSIX time.

### Notes

The standard uses the term **calendar time** when referring to a value of type ****time_t****.

### Example

Show the start of the epoch.

Run this code

```
#include <stdio.h>
#include <time.h>
#include <stdint.h>
 
int main(void)
{
    time_t epoch = 0;
    printf("%jd seconds since the epoch began\n", (intmax_t)epoch);
    printf("%s", asctime(gmtime(&epoch)));
}

```

Possible output:

```
0 seconds since the epoch began
Thu Jan  1 00:00:00 1970

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.27.1/3 Components of time (p: 284)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.27.1/3 Components of time (p: 388)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.23.1/3 Components of time (p: 338)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.12.1 Components of time

### See also

|  |  |
| --- | --- |
| time | returns the current calendar time of the system as time since epoch   (function) |
| localtimelocaltime_rlocaltime_s(C23)(C11) | converts time since epoch to calendar time expressed as local time   (function) |
| gmtimegmtime_rgmtime_s(C23)(C11) | converts time since epoch to calendar time expressed as Coordinated Universal Time (UTC)   (function) |
| C++ documentation for time_t | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/chrono/time_t&oldid=144874>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 November 2022, at 16:52.