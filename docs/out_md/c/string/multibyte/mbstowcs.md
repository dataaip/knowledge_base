# mbstowcs, mbstowcs_s

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****mbstowcsmbstowcs_s****(C11) | | | | | | btowc(C95) | | | | | | mbrtowc(C95) | | | | | | mbsrtowcsmbsrtowcs_s(C95)(C11) | | | | | | mbrtoc8(C23) | | | | | | c8rtomb(C23) | | | | | | mbrtoc16(C11) | | | | | | c16rtomb(C11) | | | | | | c32rtomb(C11) | | | | | | mbrtoc32(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbtowc | | | | | | wctombwctomb_s(C11) | | | | | | wcstombswcstombs_s(C11) | | | | | | wctob(C95) | | | | | | wcrtombwcrtomb_s(C95)(C11) | | | | | | wcsrtombswcsrtombs_s(C95)(C11) | | | | | | mbrlen(C95) | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbstate_t(C95) | | | | | | char8_t(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | char16_t(C11) | | | | | | char32_t(C11) | | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_CUR_MAX | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stdlib.h>` |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| size_t mbstowcs( wchar_t          \*dst, const char          \*src, size_t len) |  | (until C99) |
| size_t mbstowcs( wchar_t \*restrict dst, const char \*restrict src, size_t len) |  | (since C99) |
|  |  |  |
| --- | --- | --- |
| errno_t mbstowcs_s(size_t \*restrict retval, wchar_t \*restrict dst,                    rsize_t dstsz, const char \*restrict src, rsize_t len); | (2) | (since C11) |
|  |  |  |

1) Converts a multibyte character string from the array whose first element is pointed to by `src` to its wide character representation. Converted characters are stored in the successive elements of the array pointed to by `dst`. No more than `len` wide characters are written to the destination array. Each character is converted as if by a call to mbtowc, except that the mbtowc conversion state is unaffected. The conversion stops if: \* The multibyte null character was converted and stored. \* An invalid (in the current C locale) multibyte character was encountered. \* The next wide character to be stored would exceed `len`. If `src` and `dst` overlap, the behavior is undefined2) Same as (1), except that \* conversion is as-if by mbrtowc, not mbtowc \* the function returns its result as an out-parameter `retval` \* if no null character was written to `dst` after `len` wide characters were written, then L'\0' is stored in `dst[len]`, which means len+1 total wide characters are written \* if `dst` is a null pointer, the number of wide characters that would be produced is stored in \*retval \* the function clobbers the destination array from the terminating null and until `dstsz` \* If `src` and `dst` overlap, the behavior is unspecified. \* the following errors are detected at runtime and call the currently installed constraint handler function:

:   - `retval` or `src` is a null pointer
    - `dstsz` or `len` is greater than RSIZE_MAX/sizeof(wchar_t) (unless `dst` is null)
    - `dstsz` is not zero (unless `dst` is null)
    - There is no null character in the first `dstsz` multibyte characters in the `src` array and `len` is greater than `dstsz` (unless `dst` is null)
:   As with all bounds-checked functions, `mbstowcs_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <stdlib.h>.

### Notes

In most implementations, `mbstowcs` updates a global static object of type mbstate_t as it processes through the string, and cannot be called simultaneously by two threads, mbsrtowcs should be used in such cases.

POSIX specifies a common extension: if `dst` is a null pointer, this function returns the number of wide characters that would be written to `dst`, if converted. Similar behavior is standard for `mbstowcs_s` and for mbsrtowcs.

### Parameters

|  |  |  |
| --- | --- | --- |
| dst | - | pointer to wide character array where the wide string will be stored |
| src | - | pointer to the first element of a null-terminated multibyte string to convert |
| len | - | number of wide characters available in the array pointed to by dst |
| dstsz | - | max number of wide characters that will be written (size of the `dst` array) |
| retval | - | pointer to a size_t object where the result will be stored |

### Return value

1) On success, returns the number of wide characters, excluding the terminating L'\0', written to the destination array. On conversion error (if invalid multibyte character was encountered), returns (size_t)-1.2) zero on success (in which case the number of wide characters excluding terminating zero that were, or would be written to `dst`, is stored in \*retval), non-zero on error. In case of a runtime constraint violation, stores (size_t)-1 in \*retval (unless `retval` is null) and sets dst[0] to L'\0' (unless `dst` is null or `dstmax` is zero or greater than RSIZE_MAX)

### Example

Run this code

```
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
 
int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    const char* mbstr = u8"z\u00df\u6c34\U0001F34C"; // or u8"zß水🍌"
    wchar_t wstr[5];
    mbstowcs(wstr, mbstr, 5);
    wprintf(L"MB string: %s\n", mbstr);
    wprintf(L"Wide string: %ls\n", wstr);
}

```

Output:

```
MB string: zß水🍌
Wide string: zß水🍌

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.8.1 The mbstowcs function (p: 359)

:   - K.3.6.5.1 The mbstowcs_s function (p: 611-612)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.20.8.1 The mbstowcs function (p: 323)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.10.8.1 The mbstowcs function

### See also

|  |  |
| --- | --- |
| mbsrtowcsmbsrtowcs_s(C95)(C11) | converts a narrow multibyte character string to wide string, given state   (function) |
| wcstombswcstombs_s(C11) | converts a wide string to narrow multibyte character string   (function) |
| C++ documentation for mbstowcs | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/multibyte/mbstowcs&oldid=102011>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 May 2018, at 01:17.