# ctime, ctime_s

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
| ****ctimectime_s****(deprecated in C23)(C11) | | | | |
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
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| char\*                ctime( const time_t\* timer ); |  | (until C23) |
| [[deprecated]] char\* ctime( const time_t\* timer ); |  | (since C23) |
|  |  |  |
| --- | --- | --- |
| errno_t ctime_s( char \*buf, rsize_t bufsz, const time_t\* timer ); | (2) | (since C11) |
|  |  |  |

1) Converts given time since epoch to a calendar local time and then to a textual representation, as if by calling asctime(localtime(timer)) or asctime(localtime_r(timer, &(struct tm){0}))(since C23). This function is deprecated and should not be used in new code.(since C23)2) Same as (1), except that the function is equivalent to asctime_s(buf, bufsz, localtime_s(timer, &(struct tm){0})), and the following errors are detected at runtime and call the currently installed constraint handler function:

:   - `buf` or `timer` is a null pointer
    - `bufsz` is less than 26 or greater than RSIZE_MAX
:   As with all bounds-checked functions, `ctime_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <time.h>.

The resulting string has the following format:

```
Www Mmm dd hh:mm:ss yyyy\n

```

- `Www` - the day of the week (one of `Mon`, `Tue`, `Wed`, `Thu`, `Fri`, `Sat`, `Sun`).
- `Mmm` - the month (one of `Jan`, `Feb`, `Mar`, `Apr`, `May`, `Jun`, `Jul`, `Aug`, `Sep`, `Oct`, `Nov`, `Dec`).
- `dd` - the day of the month
- `hh` - hours
- `mm` - minutes
- `ss` - seconds
- `yyyy` - years

The function does not support localization.

### Parameters

|  |  |  |
| --- | --- | --- |
| timer | - | pointer to a time_t object specifying the time to print |
| buf | - | pointer to the first element of a char array of size at least `bufsz` |
| bufsz | - | max number of bytes to output, typically the size of the buffer pointed to by `buf` |

### Return value

1) pointer to a static null-terminated character string holding the textual representation of date and time. The string may be shared between asctime and `ctime`, and may be overwritten on each invocation of any of those functions.2) zero on success (in which case the string representation of time has been written out to the array pointed to by `buf`), or non-zero on failure (in which case, the terminating null character is always written to buf[0] unless `buf` is a null pointer or `bufsz` is zero or greater than RSIZE_MAX.

### Notes

`ctime` returns a pointer to static data and is not thread-safe. In addition, it modifies the static tm object which may be shared with gmtime and localtime. POSIX marks this function obsolete and recommends strftime instead. The C standard also recommends strftime instead of `ctime` and `ctime_s` because `strftime` is more flexible and locale-sensitive.

The behavior of `ctime` is undefined for the values of time_t that result in the string longer than 25 characters (e.g. year 10000).

### Example

Run this code

```
#define __STDC_WANT_LIB_EXT1__ 1
#include <time.h>
#include <stdio.h>
 
int main(void)
{
    time_t result = time(NULL);
    printf("%s", ctime(&result));
 
#ifdef __STDC_LIB_EXT1__
    char str[26];
    ctime_s(str,sizeof str,&result);
    printf("%s", str);
#endif
}

```

Possible output:

```
Tue May 26 21:51:03 2015
Tue May 26 21:51:03 2015

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.27.3.2 The ctime function (p: 287-288)

:   - K.3.8.2.2 The ctime_s function (p: 454)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.27.3.2 The ctime function (p: 393)

:   - K.3.8.2.2 The ctime_s function (p: 626)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.23.3.2 The ctime function (p: 342)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.12.3.2 The ctime function

### See also

|  |  |
| --- | --- |
| asctimeasctime_s(deprecated in C23)(C11) | converts a tm object to a textual representation   (function) |
| strftime | converts a tm object to custom textual representation   (function) |
| C++ documentation for ctime | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/chrono/ctime&oldid=142715>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 September 2022, at 22:04.