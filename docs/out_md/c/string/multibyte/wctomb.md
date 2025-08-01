# wctomb, wctomb_s

From cppreference.com
< c‎ | string‎ | multibyte
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

 Strings library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Null-terminated byte strings | | | | |
| Null-terminated multibyte strings | | | | |
| Null-terminated wide strings | | | | |

 Null-terminated multibyte strings

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Wide/multibyte conversions | | | | |
| mbsinit(C95) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbstowcsmbstowcs_s(C11) | | | | | | btowc(C95) | | | | | | mbrtowc(C95) | | | | | | mbsrtowcsmbsrtowcs_s(C95)(C11) | | | | | | mbrtoc8(C23) | | | | | | c8rtomb(C23) | | | | | | mbrtoc16(C11) | | | | | | c16rtomb(C11) | | | | | | c32rtomb(C11) | | | | | | mbrtoc32(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbtowc | | | | | | ****wctombwctomb_s****(C11) | | | | | | wcstombswcstombs_s(C11) | | | | | | wctob(C95) | | | | | | wcrtombwcrtomb_s(C95)(C11) | | | | | | wcsrtombswcsrtombs_s(C95)(C11) | | | | | | mbrlen(C95) | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbstate_t(C95) | | | | | | char8_t(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | char16_t(C11) | | | | | | char32_t(C11) | | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_CUR_MAX | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdlib.h>` |  |  |
| int wctomb( char \*s, wchar_t wc ); | (1) |  |
| errno_t wctomb_s( int \*restrict status, char \*restrict s, rsize_t ssz, wchar_t wc ); | (2) | (since C11) |
|  |  |  |

1) Converts a wide character `wc` to multibyte encoding and stores it (including any shift sequences) in the char array whose first element is pointed to by `s`. No more than MB_CUR_MAX characters are stored. The conversion is affected by the current locale's LC_CTYPE category. If `wc` is the null character, the null byte is written to `s`, preceded by any shift sequences necessary to restore the initial shift state. If `s` is a null pointer, this function resets the global conversion state and determines whether shift sequences are used.2) Same as (1), except that the result is returned in the out-parameter `status` and the following errors are detected at runtime and call the currently installed constraint handler function:

:   - `ssz` is less than the number of bytes that would be written (unless `s` is null)
    - `ssz` is greater than RSIZE_MAX (unless `s` is null)
    - `s` is a null pointer but `ssz` is not zero
:   As with all bounds-checked functions, `wctomb_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <stdlib.h>.

### Notes

Each call to `wctomb` updates the internal global conversion state (a static object of type mbstate_t, known only to this function). If the multibyte encoding uses shift states, this function is not reentrant. In any case, multiple threads should not call `wctomb` without synchronization: wcrtomb or `wctomb_s` may be used instead.

Unlike most bounds-checked functions, `wctomb_s` does not null-terminate its output, because it is designed to be used in loops that process strings character-by-character.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | pointer to the character array for output |
| wc | - | wide character to convert |
| ssz | - | maximum number of bytes to write to `s` (size of the array `s`) |
| status | - | pointer to an out-parameter where the result (length of the multibyte sequence or the shift sequence status) will be stored |

### Return value

1) If `s` is not a null pointer, returns the number of bytes that are contained in the multibyte representation of `wc` or -1 if `wc` is not a valid character. If `s` is a null pointer, resets its internal conversion state to represent the initial shift state and returns ​0​ if the current multibyte encoding is not state-dependent (does not use shift sequences) or a non-zero value if the current multibyte encoding is state-dependent (uses shift sequences).2) zero on success, in which case the multibyte representation of `wc` is stored in `s` and its length is stored in \*status, or, if `s` is null, the shift sequence status is stored in `status`). Non-zero on encoding error or runtime constraint violation, in which case (size_t)-1 is stored in \*status. The value stored in \*status never exceeds MB_CUR_MAX

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void demo(wchar_t wc)
{
    const char* dep = wctomb(NULL, wc) ? "Yes" : "No";
    printf("State-dependent encoding? %s.\n", dep);
 
    char mb[MB_CUR_MAX];
    int len = wctomb(mb, wc);
    printf("wide char '%lc' -> multibyte char [", wc);
    for (int idx = 0; idx < len; ++idx)
        printf("%s%#2x", idx ? " " : "", (unsigned char)mb[idx]);
    printf("]\n");
}
 
int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    printf("MB_CUR_MAX = %zu\n", MB_CUR_MAX);
    demo(L'A');
    demo(L'\u00df');
    demo(L'\U0001d10b');
}

```

Possible output:

```
MB_CUR_MAX = 6
State-dependent encoding? No.
wide char 'A' -> multibyte char [0x41]
State-dependent encoding? No.
wide char 'ß' -> multibyte char [0xc3 0x9f]
State-dependent encoding? No.
wide char '𝄋' -> multibyte char [0xf0 0x9d 0x84 0x8b]

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.22.7.3 The wctomb function (p: 261)

:   - K.3.6.4.1 The wctomb_s function (p: 443)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.7.3 The wctomb function (p: 358-359)

:   - K.3.6.4.1 The wctomb_s function (p: 610-611)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.20.7.3 The wctomb function (p: 322-323)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.10.7.3 The wctomb function

### See also

|  |  |
| --- | --- |
| mbtowc | converts the next multibyte character to wide character   (function) |
| wcrtombwcrtomb_s(C95)(C11) | converts a wide character to its multibyte representation, given state   (function) |
| C++ documentation for wctomb | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/multibyte/wctomb&oldid=133917>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 September 2021, at 13:42.