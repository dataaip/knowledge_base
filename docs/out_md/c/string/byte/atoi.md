# atoi, atol, atoll

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****atoiatolatoll****(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | strtoulstrtoull(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoimaxstrtoumax(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | strfromfstrfromdstrfroml(C23)(C23)(C23) | | | | | |
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
| int       atoi ( const char\* str ); | (1) |  |
| long      atol ( const char\* str ); | (2) |  |
| long long atoll( const char\* str ); | (3) | (since C99) |
|  |  |  |

Interprets an integer value in a byte string pointed to by str. The implied radix is always 10.

Discards any whitespace characters until the first non-whitespace character is found, then takes as many characters as possible to form a valid integer number representation and converts them to an integer value. The valid integer value consists of the following parts:

- (optional) plus or minus sign
- numeric digits

If the value of the result cannot be represented, i.e. the converted value falls out of range of the corresponding return type, the behavior is undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | pointer to the null-terminated byte string to be interpreted |

### Return value

Integer value corresponding to the contents of str on success.

If no conversion can be performed, ​0​ is returned.

### Notes

The name stands for "ASCII to integer".

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    printf("%i\n", atoi(" -123junk"));
    printf("%i\n", atoi(" +321dust"));
    printf("%i\n", atoi("0"));
    printf("%i\n", atoi("0042")); // treated as a decimal number with leading zeros
    printf("%i\n", atoi("0x2A")); // only leading zero is converted discarding "x2A"
    printf("%i\n", atoi("junk")); // no conversion can be performed
    printf("%i\n", atoi("2147483648")); // UB: out of range of int
}

```

Possible output:

```
-123
321
0
42
0
0
-2147483648

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.22.1.2 The atoi, atol, and atoll functions (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.22.1.2 The atoi, atol, and atoll functions (p: 249)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.22.1.2 The atoi, atol, and atoll functions (p: 341)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.20.1.2 The atoi, atol, and atoll functions (p: 307)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 4.10.1.2 The atoi function

:   - 4.10.1.3 The atol function

### See also

|  |  |
| --- | --- |
| strtolstrtoll(C99) | converts a byte string to an integer value   (function) |
| strtoul strtoull(C99) | converts a byte string to an unsigned integer value   (function) |
| wcstolwcstoll(C95)(C99) | converts a wide string to an integer value   (function) |
| wcstoulwcstoull(C95)(C99) | converts a wide string to an unsigned integer value   (function) |
| C++ documentation for atoi, atol, atoll | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/atoi&oldid=180157>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 February 2025, at 21:14.