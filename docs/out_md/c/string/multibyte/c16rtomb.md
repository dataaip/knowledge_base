# c16rtomb

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbstowcsmbstowcs_s(C11) | | | | | | btowc(C95) | | | | | | mbrtowc(C95) | | | | | | mbsrtowcsmbsrtowcs_s(C95)(C11) | | | | | | mbrtoc8(C23) | | | | | | c8rtomb(C23) | | | | | | mbrtoc16(C11) | | | | | | ****c16rtomb****(C11) | | | | | | c32rtomb(C11) | | | | | | mbrtoc32(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbtowc | | | | | | wctombwctomb_s(C11) | | | | | | wcstombswcstombs_s(C11) | | | | | | wctob(C95) | | | | | | wcrtombwcrtomb_s(C95)(C11) | | | | | | wcsrtombswcsrtombs_s(C95)(C11) | | | | | | mbrlen(C95) | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbstate_t(C95) | | | | | | char8_t(C23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | char16_t(C11) | | | | | | char32_t(C11) | | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_CUR_MAX | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<uchar.h>` |  |  |
| size_t c16rtomb( char\* restrict s, char16_t c16, mbstate_t\* restrict ps ); |  | (since C11) |
|  |  |  |

Converts a single code point from its variable-length 16-bit wide character representation (typically, UTF-16) to its narrow multibyte character representation.

If s is not a null pointer and c16 is the last 16-bit code unit in a valid variable-length encoding of a code point, the function determines the number of bytes necessary to store the multibyte character representation of that code point (including any shift sequences, and taking into account the current multibyte conversion state \*ps), and stores the multibyte character representation in the character array whose first element is pointed to by s, updating \*ps as necessary. At most MB_CUR_MAX bytes can be written by this function.

If s is a null pointer, the call is equivalent to c16rtomb(buf, u'\0', ps) for some internal buffer `buf`.

If c16 is the null wide character u'\0', a null byte is stored, preceded by any shift sequence necessary to restore the initial shift state and the conversion state parameter \*ps is updated to represent the initial shift state.

If c16 is not the final code unit in a 16-bit representation of a wide character, it does not write to the array pointed to by s, only \*ps is updated.

If the macro __STDC_UTF_16__ is defined, the 16-bit encoding used by this function is UTF-16; otherwise, it is implementation-defined. The macro is always defined and the encoding is always UTF-16.(since C23) In any case, the multibyte character encoding used by this function is specified by the currently active C locale.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | pointer to narrow character array where the multibyte character will be stored |
| c16 | - | the 16-bit wide character to convert |
| ps | - | pointer to the conversion state object used when interpreting the multibyte string |

### Return value

On success, returns the number of bytes (including any shift sequences) written to the character array whose first element is pointed to by s. This value may be ​0​, e.g. when processing the leading char16_t units in a multi-char16_t-unit sequence (occurs when processing the leading surrogate in a surrogate pair of UTF-16).

On failure (if c16 is not a valid 16-bit code unit), returns -1, stores EILSEQ in errno, and leaves \*ps in unspecified state.

### Notes

In C11 as published, unlike mbrtoc16, which converts variable-width multibyte (such as UTF-8) to variable-width 16-bit (such as UTF-16) encoding, this function can only convert single-unit 16-bit encoding, meaning it cannot convert UTF-16 to UTF-8 despite that being the original intent of this function. This was corrected by the post-C11 defect report DR488.

### Example

Note: this example assumes the fix for the defect report DR488 is applied

Run this code

```
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <uchar.h>
 
mbstate_t state;
 
int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    const char16_t in[] = u"zß水🍌"; // or "z\u00df\u6c34\U0001F34C"
    const size_t in_sz = sizeof in / sizeof *in;
 
    printf("Processing %zu UTF-16 code units: [ ", in_sz);
    for (size_t n = 0; n < in_sz; ++n)
        printf("%#x ", in[n]);
    puts("]");
 
    char out[MB_CUR_MAX * in_sz];
    char *p = out;
    for (size_t n = 0; n < in_sz; ++n)
    {
        size_t rc = c16rtomb(p, in[n], &state);
        if (rc == (size_t)-1)
            break;
        p += rc;
    }
 
    size_t out_sz = p - out;
    printf("into %zu UTF-8 code units: [ ", out_sz);
    for (size_t x = 0; x < out_sz; ++x)
        printf("%#x ", +(unsigned char)out[x]);
    puts("]");
}

```

Output:

```
Processing 6 UTF-16 code units: [ 0x7a 0xdf 0x6c34 0xd83c 0xdf4c 0 ]
into 11 UTF-8 code units: [ 0x7a 0xc3 0x9f 0xe6 0xb0 0xb4 0xf0 0x9f 0x8d 0x8c 0 ]

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.28.1.2 The c16rtomb function (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.28.1.2 The c16rtomb function (p: TBD)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.28.1.2 The c16rtomb function (p: 399-400)

### See also

|  |  |
| --- | --- |
| mbrtoc16(C11) | converts a narrow multibyte character to UTF-16 encoding   (function) |
| C++ documentation for c16rtomb | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/multibyte/c16rtomb&oldid=154043>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 June 2023, at 06:53.