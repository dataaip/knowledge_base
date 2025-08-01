# timespec_get

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
| ****timespec_get****(C11) | | | | |
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
| int timespec_get( struct timespec \*ts, int base ); | (1) | (since C11) |
| #define TIME_UTC /\* implementation-defined \*/ | (2) | (since C11) |
|  |  |  |

1) Modifies the timespec object pointed to by ts to hold the current calendar time in the time base base.2) Expands to a value suitable for use as the base argument of `timespec_get`

Other macro constants beginning with `TIME_` may be provided by the implementation to indicate additional time bases

If base is `TIME_UTC`, then

- ts->tv_sec is set to the number of seconds since an implementation defined epoch, truncated to a whole value
- ts->tv_nsec member is set to the integral number of nanoseconds, rounded to the resolution of the system clock

### Parameters

|  |  |  |
| --- | --- | --- |
| ts | - | pointer to an object of type struct timespec |
| base | - | `TIME_UTC` or another nonzero integer value indicating the time base |

### Return value

The value of base if successful, zero otherwise.

### Notes

The POSIX function `clock_gettime(CLOCK_REALTIME, ts)` may also be used to populate a `timespec` with the time since the Epoch.

### Example

Run this code

```
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    char buff[100];
    strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
    printf("Current time: %s.%09ld UTC\n", buff, ts.tv_nsec);
}

```

Possible output:

```
Current time: 02/18/15 14:34:03.048508855 UTC

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.27.2.5 The timespec_get function (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.27.2.5 The timespec_get function (p: 286)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.27.2.5 The timespec_get function (p: 390)

### See also

|  |  |
| --- | --- |
| timespec(C11) | time in seconds and nanoseconds  (struct) |
| timespec_getres(C23) | returns the resolution of calendar time based on a given time base   (function) |
| time | returns the current calendar time of the system as time since epoch   (function) |
| C++ documentation for timespec_get | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/chrono/timespec_get&oldid=180263>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 February 2025, at 20:49.