# wcsncat, wcsncat_s

From cppreference.com
< c‎ | string‎ | wide
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

 Null-terminated wide strings

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Character classification | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswalnum(C95) | | | | | | iswalpha(C95) | | | | | | iswlower(C95) | | | | | | iswupper(C95) | | | | | | iswdigit(C95) | | | | | | iswxdigit(C95) | | | | | | iswblank(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswctype(C95) | | | | | | iswcntrl(C95) | | | | | | iswgraph(C95) | | | | | | iswspace(C95) | | | | | | iswprint(C95) | | | | | | iswpunct(C95) | | | | | | wctype(C95) | | | | | | | Character manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | towlower(C95) | | | | | | towupper(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wctrans(C95) | | | | | | towctrans(C95) | | | | | | | Conversions to numeric formats | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstolwcstoll(C95)(C99) | | | | | | wcstofwcstodwcstold(C99)(C95)(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstoulwcstoull(C95)(C99) | | | | | | wcstoimaxwcstoumax(C99)(C99) | | | | | |  | | | | | | | String manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscpywcscpy_s(C95)(C11) | | | | | | wcsncpywcsncpy_s(C95)(C11) | | | | | | wcsxfrm(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscatwcscat_s(C95)(C11) | | | | | | ****wcsncatwcsncat_s****(C95)(C11) | | | | | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | String examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcslenwcsnlen_s(C95)(C11) | | | | | | wcsstr(C95) | | | | | | wcscmp(C95) | | | | | | wcsncmp(C95) | | | | | | wcscoll(C95) | | | | | | wcschr(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcsrchr(C95) | | | | | | wcspbrk(C95) | | | | | | wcsspn(C95) | | | | | | wcscspn(C95) | | | | | | wcstokwcstok_s(C95)(C11) | | | | | |  | | | | | | | Array manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcpywmemcpy_s(C95)(C11) | | | | | | wmemmovewmemmove_s(C95)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcmp(C95) | | | | | | wmemchr(C95) | | | | | | wmemset(C95) | | | | | |  | | | | | | | Types | | | | | | wchar_t wint_t(C95) | | | | | | wctrans_t wctype_t(C95)(C95) | | | | | | Macros | | | | | | WCHAR_MIN WCHAR_MAX(C95)(C95) | | | | | | WEOF(C95) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<wchar.h>` |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| wchar_t \*wcsncat( wchar_t \*dest, const wchar_t \*src, size_t count ); |  | (since C95)  (until C99) |
| wchar_t \*wcsncat( wchar_t \*restrict dest,                    const wchar_t \*restrict src, size_t count ); |  | (since C99) |
|  |  |  |
| --- | --- | --- |
| errno_t wcsncat_s( wchar_t \*restrict dest, rsize_t destsz,                     const wchar_t \*restrict src, rsize_t count ); | (2) | (since C11) |
|  |  |  |

1) Appends at most `count` wide characters from the wide string pointed to by `src`, stopping if the null terminator is copied, to the end of the character string pointed to by `dest`. The wide character src[0] replaces the null terminator at the end of `dest`. The null terminator is always appended in the end (so the maximum number of wide characters the function may write is count+1). The behavior is undefined if the destination array is not large enough for the contents of both `str` and `dest` and the terminating null wide character. The behavior is undefined if the strings overlap.2) Same as (1), except that this function may clobber the remainder of the destination array (from the last wide character written to `destsz`) and that the following errors are detected at runtime and call the currently installed constraint handler function:

:   - `src` or `dest` is a null pointer
    - `destsz` or `count` is zero or greater than RSIZE_MAX/sizeof(wchar_t)
    - there is no null wide character in the first `destsz` wide characters of `dest`
    - truncation would occur: `count` or the length of `src`, whichever is less, exceeds the space available between the null terminator of `dest` and `destsz`.
    - overlap would occur between the source and the destination strings
:   As with all bounds-checked functions, `wcsncat_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <wchar.h>.

### Parameters

|  |  |  |
| --- | --- | --- |
| dest | - | pointer to the null-terminated wide string to append to |
| src | - | pointer to the null-terminated wide string to copy from |
| count | - | maximum number of wide characters to copy |
| destsz | - | the size of the destination buffer |

### Return value

1) returns a copy of `dest`2) returns zero on success, returns non-zero on error. Also, on error, writes L'\0' to dest[0] (unless `dest` is a null pointer or `destsz` is zero or greater than RSIZE_MAX/sizeof(wchar_t)).

### Notes

Although truncation to fit the destination buffer is a security risk and therefore a runtime constraints violation for `wcsncat_s`, it is possible to get the truncating behavior by specifying `count` equal to the size of the destination array minus one: it will copy the first `count` wide characters and append the null terminator as always: wcsncat_s(dst, sizeof dst/sizeof \*dst, src, (sizeof dst/sizeof \*dst)-wcsnlen_s(dst, sizeof dst/sizeof \*dst)-1);

### Example

Run this code

```
#include <wchar.h> 
#include <stdio.h>
#include <locale.h>
 
int main(void) 
{
    wchar_t str[50] = L"Земля, прощай.";
    wcsncat(str, L" ", 1);
    wcsncat(str, L"В добрый путь.", 8); // only append the first 8 wide chars
    setlocale(LC_ALL, "en_US.utf8");
    printf("%ls", str);
}

```

Possible output:

```
Земля, прощай. В добрый

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.29.4.3.2 The wcsncat function (p: 315)

:   - K.3.9.2.2.2 The wcsncat_s function (p: 466-467)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.29.4.3.2 The wcsncat function (p: 432-433)

:   - K.3.9.2.2.2 The wcsncat_s function (p: 643-644)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.24.4.3.2 The wcsncat function (p: 378-379)

### See also

|  |  |
| --- | --- |
| wcscatwcscat_s(C95)(C11) | appends a copy of one wide string to another   (function) |
| strncatstrncat_s(C11) | concatenates a certain amount of characters of two strings   (function) |
| wcscpywcscpy_s(C95)(C11) | copies one wide string to another   (function) |
| C++ documentation for wcsncat | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/wide/wcsncat&oldid=140336>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 June 2022, at 08:23.