# strtoul, strtoull

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atoiatolatoll(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | ****strtoulstrtoull****(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoimaxstrtoumax(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | strfromfstrfromdstrfroml(C23)(C23)(C23) | | | | | |
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
| Defined in header `<stdlib.h>` |  |  |
|  |  |  |
| --- | --- | --- |
| unsigned long      strtoul( const char          \*str, char          \*\*str_end,                               int base ); |  | (until C99) |
| unsigned long      strtoul( const char \*restrict str, char \*\*restrict str_end,                               int base ); |  | (since C99) |
|  |  |  |
| --- | --- | --- |
| unsigned long long strtoull( const char \*restrict str, char \*\*restrict str_end,                               int base ); |  | (since C99) |
|  |  |  |

Interprets an unsigned integer value in a byte string pointed to by `str`.

Discards any whitespace characters (as identified by calling isspace) until the first non-whitespace character is found, then takes as many characters as possible to form a valid **base-n** (where n=`base`) unsigned integer number representation and converts them to an integer value. The valid unsigned integer value consists of the following parts:

- (optional) plus or minus sign
- (optional) prefix (`0`) indicating octal base (applies only when the base is 8 or ​0​)
- (optional) prefix (`0x` or `0X`) indicating hexadecimal base (applies only when the base is 16 or ​0​)
- a sequence of digits

The set of valid values for base is `{0, 2, 3, ..., 36}`. The set of valid digits for base-`2` integers is `{0, 1}`, for base-`3` integers is `{0, 1, 2}`, and so on. For bases larger than `10`, valid digits include alphabetic characters, starting from `Aa` for base-`11` integer, to `Zz` for base-`36` integer. The case of the characters is ignored.

Additional numeric formats may be accepted by the currently installed C locale.

If the value of `base` is ​0​, the numeric base is auto-detected: if the prefix is `0`, the base is octal, if the prefix is `0x` or `0X`, the base is hexadecimal, otherwise the base is decimal.

If the minus sign was part of the input sequence, the numeric value calculated from the sequence of digits is negated as if by unary minus in the result type, which applies unsigned integer wraparound rules.

The functions sets the pointer pointed to by `str_end` to point to the character past the last character interpreted. If `str_end` is a null pointer, it is ignored.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | pointer to the null-terminated byte string to be interpreted |
| str_end | - | pointer to a pointer to character, might be set to a position past the last character interpreted |
| base | - | **base** of the interpreted integer value |

### Return value

Integer value corresponding to the contents of `str` on success. If the converted value falls out of range of corresponding return type, range error occurs (errno is set to `ERANGE`) and ULONG_MAX or ULLONG_MAX is returned. If no conversion can be performed, ​0​ is returned.

### Example

Run this code

```
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    const char *p = "10 200000000000000000000000000000 30 -40 - 42";
    printf("Parsing '%s':\n", p);
    char *end = NULL;
    for (unsigned long i = strtoul(p, &end, 10);
         p != end;
         i = strtoul(p, &end, 10))
    {
        printf("'%.*s' -> ", (int)(end - p), p);
        p = end;
        if (errno == ERANGE)
        {
            errno = 0;
            printf("range error, got ");
        }
        printf("%lu\n", i);
    }
    printf("After the loop p points to '%s'\n", p);
}

```

Output:

```
Parsing '10 200000000000000000000000000000 30 -40 - 42':
'10' -> 10
' 200000000000000000000000000000' -> range error, got 18446744073709551615
' 30' -> 30
' -40' -> 18446744073709551576
After the loop p points to ' - 42'

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.24.1.7 The strtol, strtoll, strtoul, and strtoull functions (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.22.1.4 The strtol, strtoll, strtoul, and strtoull functions (p: 251-252)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.1.4 The strtol, strtoll, strtoul, and strtoull functions (p: 344-345)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.20.1.4 The strtol, strtoll, strtoul, and strtoull functions (p: 310-311)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.10.1.6 The strtoul function

### See also

|  |  |
| --- | --- |
| wcstoulwcstoull(C95)(C99) | converts a wide string to an unsigned integer value   (function) |
| atoiatolatoll(C99) | converts a byte string to an integer value   (function) |
| strtolstrtoll(C99) | converts a byte string to an integer value   (function) |
| C++ documentation for strtoul | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/strtoul&oldid=145488>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 December 2022, at 13:52.