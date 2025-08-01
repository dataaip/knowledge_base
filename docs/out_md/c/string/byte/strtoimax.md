# strtoimax, strtoumax

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atoiatolatoll(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | strtoulstrtoull(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****strtoimaxstrtoumax****(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | strfromfstrfromdstrfroml(C23)(C23)(C23) | | | | | |
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
| Defined in header `<inttypes.h>` |  |  |
| intmax_t strtoimax( const char\* restrict nptr,                      char\*\* restrict endptr, int base ); | (1) | (since C99) |
| uintmax_t strtoumax( const char\* restrict nptr,                       char\*\* restrict endptr, int base ); | (2) | (since C99) |
|  |  |  |

Interprets an integer value in a byte string pointed to by nptr.

Discards any whitespace characters (as identified by calling isspace) until the first non-whitespace character is found, then takes as many characters as possible to form a valid **base-n** (where n=`base`) integer number representation and converts them to an integer value. The valid integer value consists of the following parts:

- (optional) plus or minus sign
- (optional) prefix (`0`) indicating octal base (applies only when the base is 8 or ​0​)
- (optional) prefix (`0x` or `0X`) indicating hexadecimal base (applies only when the base is 16 or ​0​)
- a sequence of digits

The set of valid values for base is `{0, 2, 3, ..., 36}`. The set of valid digits for base-`2` integers is `{0, 1}`, for base-`3` integers is `{0, 1, 2}`, and so on. For bases larger than `10`, valid digits include alphabetic characters, starting from `Aa` for base-`11` integer, to `Zz` for base-`36` integer. The case of the characters is ignored.

Additional numeric formats may be accepted by the currently installed C locale.

If the value of `base` is ​0​, the numeric base is auto-detected: if the prefix is `0`, the base is octal, if the prefix is `0x` or `0X`, the base is hexadecimal, otherwise the base is decimal.

If the minus sign was part of the input sequence, the numeric value calculated from the sequence of digits is negated as if by unary minus in the result type.

The functions sets the pointer pointed to by endptr to point to the character past the last character interpreted. If endptr is a null pointer, it is ignored.

If the nptr is empty or does not have the expected form, no conversion is performed, and (if endptr is not a null pointer) the value of nptr is stored in the object pointed to by endptr.

### Parameters

|  |  |  |
| --- | --- | --- |
| nptr | - | pointer to the null-terminated byte string to be interpreted |
| endptr | - | pointer to a pointer to character |
| base | - | **base** of the interpreted integer value |

### Return value

- If successful, an integer value corresponding to the contents of `str` is returned.
- If the converted value falls out of range of corresponding return type, a range error occurs (setting errno to ERANGE) and INTMAX_MAX, INTMAX_MIN, UINTMAX_MAX or ​0​ is returned, as appropriate.
- If no conversion can be performed, ​0​ is returned.

### Example

Run this code

```
#include <errno.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char* endptr = NULL;
 
    printf("%ld\n", strtoimax(" -123junk", &endptr, 10)); // base 10
    printf("%ld\n", strtoimax("11111111", &endptr, 2));   // base 2
    printf("%ld\n", strtoimax("XyZ", &endptr, 36));       // base 36
    printf("%ld\n", strtoimax("010", &endptr, 0));        // octal auto-detection
    printf("%ld\n", strtoimax("10", &endptr, 0));         // decimal auto-detection
    printf("%ld\n", strtoimax("0x10", &endptr, 0));       // hexadecimal auto-detection
 
    // range error: LONG_MAX+1 --> LONG_MAX
    errno = 0;
    printf("%ld\n", strtoimax("9223372036854775808", &endptr, 10));
    printf("%s\n", strerror(errno));
}

```

Output:

```
-123
255
44027
8
10
16
9223372036854775807
Numerical result out of range

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 7.8.2.3 The strtoimax and strtoumax functions (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 7.8.2.3 The strtoimax and strtoumax functions (p: TBD)

- C11 standard (ISO/IEC 9899:2011):

:   - 7.8.2.3 The strtoimax and strtoumax functions (p: 219)

- C99 standard (ISO/IEC 9899:1999):

:   - 7.8.2.3 The strtoimax and strtoumax functions (p: 200)

### See also

|  |  |
| --- | --- |
| wcstoimaxwcstoumax(C99)(C99) | converts a wide string to intmax_t or uintmax_t   (function) |
| strtolstrtoll(C99) | converts a byte string to an integer value   (function) |
| strtoul strtoull(C99) | converts a byte string to an unsigned integer value   (function) |
| C++ documentation for strtoimax, strtoumax | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/strtoimax&oldid=178835>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 December 2024, at 03:20.