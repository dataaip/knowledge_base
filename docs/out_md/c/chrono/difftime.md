# difftime

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
| ****difftime**** | | | | |
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
| time_t | | | | |
| clock_t | | | | |
| timespec(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<time.h>` |  |  |
| double difftime( time_t time_end, time_t time_beg ); |  |  |
|  |  |  |

Computes difference between two calendar times as time_t objects (time_end - time_beg) in seconds. If `time_end` refers to time point before `time_beg` then the result is negative.

### Parameters

|  |  |  |
| --- | --- | --- |
| time_beg, time_end | - | times to compare |

### Return value

Difference between two times in seconds.

### Notes

On POSIX systems, time_t is measured in seconds, and `difftime` is equivalent to arithmetic subtraction, but C and C++ allow fractional units for time_t.

### Example

The following program computes the number of seconds that have passed since the beginning of the month.

Run this code

```
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t now = time(0);
 
    struct tm beg = *localtime(&now);
 
    // set beg to the beginning of the month
    beg.tm_hour = 0,
    beg.tm_min = 0,
    beg.tm_sec = 0,
    beg.tm_mday = 1;
 
    double seconds = difftime(now, mktime(&beg));
 
    printf("%.f seconds have passed since the beginning of the month.\n", seconds);
 
    return 0;
}

```

Output:

```
1937968 seconds have passed since the beginning of the month.

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.27.2.2 The difftime function (p: 285)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.27.2.2 The difftime function (p: 390)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.23.2.2 The difftime function (p: 338)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 7.12.2.2 The difftime function (p: 171)

### See also

|  |  |
| --- | --- |
| C++ documentation for difftime | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/chrono/difftime&oldid=144873>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 November 2022, at 16:51.