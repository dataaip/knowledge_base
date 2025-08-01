# tolower

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | isalnum | | | | | | isalpha | | | | | | islower | | | | | | isupper | | | | | | isdigit | | | | | | isxdigit | | | | | | isblank(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iscntrl | | | | | | isgraph | | | | | | isspace | | | | | | isprint | | | | | | ispunct | | | | | | ****tolower**** | | | | | | toupper | | | | | |
| Conversions to and from numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atoiatolatoll(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | strtoulstrtoull(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoimaxstrtoumax(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | strfromfstrfromdstrfroml(C23)(C23)(C23) | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcpystrcpy_s(C11) | | | | | | strncpystrncpy_s(C11) | | | | | | strcatstrcat_s(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strncatstrncat_s(C11) | | | | | | strxfrm | | | | | | strdup(C23) | | | | | | strndup(C23) | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strlenstrnlen_s(C11) | | | | | | strcmp | | | | | | strncmp | | | | | | strcoll | | | | | | strchr | | | | | | strrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strspn | | | | | | strcspn | | | | | | strpbrk | | | | | | strstr | | | | | | strtokstrtok_s(C11) | | | | | |  | | | | | |
| Memory manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | memchr | | | | | | memcmp | | | | | | memsetmemset_explicitmemset_s(C23)(C11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | memcpymemcpy_s(C11) | | | | | | memmovememmove_s(C11) | | | | | | memccpy(C23) | | | | | |
| Miscellaneous | | | | |
| strerrorstrerror_sstrerrorlen_s(C11)(C11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ctype.h>` |  |  |
| int tolower( int ch ); |  |  |
|  |  |  |

Converts the given character to lowercase according to the character conversion rules defined by the currently installed C locale.

In the default "C" locale, the following uppercase letters `ABCDEFGHIJKLMNOPQRSTUVWXYZ` are replaced with respective lowercase letters `abcdefghijklmnopqrstuvwxyz`.

### Parameters

|  |  |  |
| --- | --- | --- |
| ch | - | character to be converted. If the value of `ch` is not representable as unsigned char and does not equal EOF, the behavior is undefined. |

### Return value

Lowercase version of `ch` or unmodified `ch` if no lowercase version is listed in the current C locale.

### Example

Run this code

```
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <limits.h>
 
int main(void)
{
    /* In the default locale: */
    for (unsigned char u = 0; u < UCHAR_MAX; u++) {
        unsigned char l = tolower(u);
        if (l != u) printf("%c%c ", u, l);
    }
    printf("\n\n");
 
    unsigned char c = '\xb4'; // the character Ž in ISO-8859-15
                              // but ´ (acute accent) in ISO-8859-1
    setlocale(LC_ALL, "en_US.iso88591");
    printf("in iso8859-1, tolower('0x%x') gives 0x%x\n", c, tolower(c));
    setlocale(LC_ALL, "en_US.iso885915");
    printf("in iso8859-15, tolower('0x%x') gives 0x%x\n", c, tolower(c));
}

```

Possible output:

```
Aa Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm Nn Oo Pp Qq Rr Ss Tt Uu Vv Ww Xx Yy Zz
 
in iso8859-1, tolower('0xb4') gives 0xb4
in iso8859-15, tolower('0xb4') gives 0xb8

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 7.4.2.1 The tolower function (p: 147)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.4.2.1 The tolower function (p: 203)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.4.2.1 The tolower function (p: 184)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.3.2.1 The tolower function

### See also

|  |  |
| --- | --- |
| toupper | converts a character to uppercase   (function) |
| towlower(C95) | converts a wide character to lowercase   (function) |
| C++ documentation for tolower | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/tolower&oldid=140535>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 June 2022, at 14:57.