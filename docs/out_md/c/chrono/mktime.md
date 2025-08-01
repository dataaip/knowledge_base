# mktime

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
| ****mktime**** | | | | |
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
| time_t mktime( struct tm\* arg ); |  |  |
|  |  |  |

Renormalizes local calendar time expressed as a struct tm object and also converts it to time since epoch as a time_t object. arg->tm_wday and arg->tm_yday are ignored. The values in arg are not checked for being out of range.

A negative value of arg->tm_isdst causes `mktime` to attempt to determine if Daylight Saving Time was in effect in the specified time.

If the conversion to `time_t` is successful, the arg object is modified. All fields of arg are updated to fit their proper ranges. arg->tm_wday and arg->tm_yday are recalculated using information available in other fields.

### Parameters

|  |  |  |
| --- | --- | --- |
| arg | - | pointer to a tm object specifying local calendar time to convert |

### Return value

time since epoch as a time_t object on success, or -1 if arg cannot be represented as a time_t object (POSIX also requires `EOVERFLOW` to be stored in errno in this case).

### Notes

If the struct tm object was obtained from POSIX `strptime` or equivalent function, the value of `tm_isdst` is indeterminate, and needs to be set explicitly before calling `mktime`.

### Example

Run this code

```
#define _POSIX_C_SOURCE 200112L // for setenv on gcc
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    setenv("TZ", "/usr/share/zoneinfo/America/New_York", 1); // POSIX-specific
 
    struct tm tm = *localtime(&(time_t){time(NULL)});
    printf("Today is           %s", asctime(&tm));
    printf("(DST is %s)\n", tm.tm_isdst ? "in effect" : "not in effect");
    tm.tm_mon -= 100;  // tm_mon is now outside its normal range
    mktime(&tm);       // tm_isdst is not set to -1; today's DST status is used
    printf("100 months ago was %s", asctime(&tm));
    printf("(DST was %s)\n", tm.tm_isdst ? "in effect" : "not in effect");
}

```

Possible output:

```
Today is           Fri Apr 22 11:53:36 2016
(DST is in effect)
100 months ago was Sat Dec 22 10:53:36 2007
(DST was not in effect)

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.27.2.3 The mktime function (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.27.2.3 The mktime function (p: 285-286)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.27.2.3 The mktime function (p: 390-391)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.23.2.3 The mktime function (p: 340-341)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.12.2.3 The mktime function

### See also

|  |  |
| --- | --- |
| localtimelocaltime_rlocaltime_s(C23)(C11) | converts time since epoch to calendar time expressed as local time   (function) |
| C++ documentation for mktime | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/chrono/mktime&oldid=172293>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 June 2024, at 06:26.