# wcstok, wcstok_s

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Character classification | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswalnum(C95) | | | | | | iswalpha(C95) | | | | | | iswlower(C95) | | | | | | iswupper(C95) | | | | | | iswdigit(C95) | | | | | | iswxdigit(C95) | | | | | | iswblank(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswctype(C95) | | | | | | iswcntrl(C95) | | | | | | iswgraph(C95) | | | | | | iswspace(C95) | | | | | | iswprint(C95) | | | | | | iswpunct(C95) | | | | | | wctype(C95) | | | | | | | Character manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | towlower(C95) | | | | | | towupper(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wctrans(C95) | | | | | | towctrans(C95) | | | | | | | Conversions to numeric formats | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstolwcstoll(C95)(C99) | | | | | | wcstofwcstodwcstold(C99)(C95)(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstoulwcstoull(C95)(C99) | | | | | | wcstoimaxwcstoumax(C99)(C99) | | | | | |  | | | | | | | String manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscpywcscpy_s(C95)(C11) | | | | | | wcsncpywcsncpy_s(C95)(C11) | | | | | | wcsxfrm(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscatwcscat_s(C95)(C11) | | | | | | wcsncatwcsncat_s(C95)(C11) | | | | | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | String examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcslenwcsnlen_s(C95)(C11) | | | | | | wcsstr(C95) | | | | | | wcscmp(C95) | | | | | | wcsncmp(C95) | | | | | | wcscoll(C95) | | | | | | wcschr(C95) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcsrchr(C95) | | | | | | wcspbrk(C95) | | | | | | wcsspn(C95) | | | | | | wcscspn(C95) | | | | | | ****wcstokwcstok_s****(C95)(C11) | | | | | |  | | | | | | | Array manipulation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcpywmemcpy_s(C95)(C11) | | | | | | wmemmovewmemmove_s(C95)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcmp(C95) | | | | | | wmemchr(C95) | | | | | | wmemset(C95) | | | | | |  | | | | | | | Types | | | | | | wchar_t wint_t(C95) | | | | | | wctrans_t wctype_t(C95)(C95) | | | | | | Macros | | | | | | WCHAR_MIN WCHAR_MAX(C95)(C95) | | | | | | WEOF(C95) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<wchar.h>` |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| wchar_t\* wcstok( wchar_t\* str, const wchar_t\* delim, wchar_t\*\* ptr ); |  | (since C95)  (until C99) |
| wchar_t\* wcstok( wchar_t\*  restrict str, const wchar_t\* restrict delim,                   wchar_t\*\* restrict ptr ); |  | (since C99) |
|  |  |  |
| --- | --- | --- |
| wchar_t\* wcstok_s( wchar_t\* restrict str, rsize_t\* restrict strmax,                     const wchar_t\* restrict delim, wchar_t\*\* restrict ptr); | (2) | (since C11) |
|  |  |  |

1) Finds the next token in a null-terminated wide string pointed to by str. The separator characters are identified by null-terminated wide string pointed to by delim. This function is designed to be called multiples times to obtain successive tokens from the same string.

:   - If str != NULL, the call is treated as the first call to `wcstok` for this particular wide string. The function searches for the first wide character which is **not** contained in delim.

    :   - If no such wide character was found, there are no tokens in str at all, and the function returns a null pointer.
        - If such wide character was found, it is the **beginning of the token**. The function then searches from that point on for the first wide character that **is** contained in delim.

        :   - If no such wide character was found, str has only one token, and future calls to `wcstok` will return a null pointer
            - If such wide character was found, it is **replaced** by the null wide character L'\0' and the parser state (typically a pointer to the following wide character) is stored in the user-provided location \*ptr.

        - The function then returns the pointer to the beginning of the token

    - If str == NULL, the call is treated as a subsequent call to `wcstok`: the function continues from where it left in the previous invocation with the same \*ptr. The behavior is the same as if the pointer to the wide character that follows the last detected token is passed as str.

2) Same as (1), except that on every step, writes the number of characters left to see in str into \*strmax. Repeat calls (with null str) must pass both strmax and ptr with the values stored by the previous call. Also, the following errors are detected at runtime and call the currently installed constraint handler function, without storing anything in the object pointed to by ptr

:   - strmax, delim, or ptr is a null pointer
    - on a non-initial call (with null str), \*ptr is a null pointer
    - on the first call, \*strmax is zero or greater than RSIZE_MAX / sizeof(wchar_t)
    - search for the end of a token reaches the end of the source string (as measured by the initial value of \*strmax) without encountering the null terminator
:   As all bounds-checked functions, `wcstok_s` is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including <wchar.h>.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | pointer to the null-terminated wide string to tokenize |
| delim | - | pointer to the null-terminated wide string identifying delimiters |
| ptr | - | pointer to an object of type wchar_t\*, which is used by both `wcstok` and `wcstok_s` to store the internal state of the parser |
| strmax | - | pointer to an object which initially holds the size of str: wcstok_s stores the number of characters that remain to be examined |

### Return value

Returns pointer to the beginning of the next token or null pointer if there are no more tokens.

### Note

This function is destructive: it writes the L'\0' characters in the elements of the string str. In particular, a wide string literal cannot be used as the first argument of `wcstok`.

Unlike strtok, `wcstok` does not update static storage: it stores the parser state in the user-provided location.

Unlike most other tokenizers, the delimiters in `wcstok` can be different for each subsequent token, and can even depend on the contents of the previous tokens.

The implementation of wcstok_s in the Windows CRT is incompatible with the C standard, it is merely an alias for wcstok.

### Example

Run this code

```
#include <stdio.h>
#include <wchar.h>
 
int main(void)
{
    wchar_t input[] = L"A bird came down the walk";
    printf("Parsing the input string '%ls'\n", input);
    wchar_t* buffer;
    wchar_t* token = wcstok(input, L" ", &buffer);
    while (token)
    {
        printf("%ls\n", token);
        token = wcstok(NULL, L" ", &buffer);
    }
 
    printf("Contents of the input string now: '");
    for (size_t n = 0; n < sizeof input / sizeof *input; ++n)
        input[n] ? printf("%lc", input[n]) : printf("\\0");
    puts("'");
}

```

Output:

```
Parsing the input string 'A bird came down the walk'
A
bird
came
down
the
walk
Contents of the input string now: 'A\0bird\0came\0down\0the\0walk\0'

```

### References

- C11 standard (ISO/IEC 9899:2011):

:   - 7.29.4.5.7 The wcstok function (p: 437-438)

:   - K.3.9.2.3.1 The wcstok_s function (p: 645-646)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.24.4.5.7 The wcstok function (p: 383-384)

### See also

|  |  |
| --- | --- |
| strtokstrtok_s(C11) | finds the next token in a byte string   (function) |
| C++ documentation for wcstok | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/wide/wcstok&oldid=168847>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 January 2024, at 15:51.