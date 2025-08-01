# strlen, strnlen_s

From cppreference.com
< c‎ | string‎ | byte
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

 Null-terminated byte strings

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Character manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | isalnum | | | | | | isalpha | | | | | | islower | | | | | | isupper | | | | | | isdigit | | | | | | isxdigit | | | | | | isblank(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iscntrl | | | | | | isgraph | | | | | | isspace | | | | | | isprint | | | | | | ispunct | | | | | | tolower | | | | | | toupper | | | | | |
| Conversions to and from numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atoiatolatoll(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | strtoulstrtoull(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoimaxstrtoumax(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | strfromfstrfromdstrfroml(C23)(C23)(C23) | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcpystrcpy_s(C11) | | | | | | strncpystrncpy_s(C11) | | | | | | strcatstrcat_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strncatstrncat_s(C11) | | | | | | strxfrm | | | | | | strdup(C23) | | | | | | strndup(C23) | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****strlenstrnlen_s****(C11) | | | | | | strcmp | | | | | | strncmp | | | | | | strcoll | | | | | | strchr | | | | | | strrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strspn | | | | | | strcspn | | | | | | strpbrk | | | | | | strstr | | | | | | strtokstrtok_s(C11) | | | | | |  | | | | | |
| Memory manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | memchr | | | | | | memcmp | | | | | | memsetmemset_explicitmemset_s(C23)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | memcpymemcpy_s(C11) | | | | | | memmovememmove_s(C11) | | | | | | memccpy(C23) | | | | | |
| Miscellaneous | | | | |
| strerrorstrerror_sstrerrorlen_s(C11)(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<string.h>` |  |  |
| size_t strlen( const char\* str ); | (1) |  |
| size_t strnlen_s( const char\* str, size_t strsz ); | (2) | (since C11) |
|  |  |  |

1) Returns the length of the given null-terminated byte string, that is, the number of characters in a character array whose first element is pointed to by str up to and not including the first null character. The behavior is undefined if str is not a pointer to a null-terminated byte string.2) Same as (1), except that the function returns zero if str is a null pointer and returns strsz if the null character was not found in the first strsz bytes of str. The behavior is undefined if str is not a pointer to a null-terminated byte string and strsz is greater than the size of that character array.

:   As with all bounds-checked functions, `strnlen_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <string.h>.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | pointer to the null-terminated byte string to be examined |
| strsz | - | maximum number of characters to examine |

### Return value

1) The length of the null-terminated byte string str.2) The length of the null-terminated byte string str on success, zero if str is a null pointer, strsz if the null character was not found.

### Notes

`strnlen_s` and `wcsnlen_s` are the only bounds-checked functions that do not invoke the runtime constraints handler. They are pure utility functions used to provide limited support for non-null terminated strings.

### Example

Run this code

```
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    const char str[] = "How many characters does this string contain?";
 
    printf("without null character: %zu\n", strlen(str));
    printf("with null character:    %zu\n", sizeof str);
 
#ifdef __STDC_LIB_EXT1__
    printf("without null character: %zu\n", strnlen_s(str, sizeof str));
#endif
}

```

Possible output:

```
without null character: 45
with null character:    46
without null character: 45

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.24.6.3 The strlen function (p: TBD)

:   - K.3.7.4.4 The strnlen_s function (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.24.6.3 The strlen function (p: TBD)

:   - K.3.7.4.4 The strnlen_s function (p: TBD)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.24.6.3 The strlen function (p: 372)

:   - K.3.7.4.4 The strnlen_s function (p: 623)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.21.6.3 The strlen function (p: 334)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.11.6.3 The strlen function

### See also

|  |  |
| --- | --- |
| wcslenwcsnlen_s(C95)(C11) | returns the length of a wide string   (function) |
| mblen | returns the number of bytes in the next multibyte character   (function) |
| C++ documentation for strlen | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/strlen&oldid=172378>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 13 June 2024, at 02:54.