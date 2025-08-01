# strfromf, strfromd, strfroml

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | atoiatolatoll(C99) | | | | | | atof | | | | | | strtolstrtoll(C99) | | | | | | strtoulstrtoull(C99) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoimaxstrtoumax(C99)(C99) | | | | | | strtofstrtodstrtold(C99)(C99) | | | | | | ****strfromfstrfromdstrfroml****(C23)(C23)(C23) | | | | | |
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
| int strfromf( char\* restrict s, size_t n, const char\* restrict format, float fp ); |  | (since C23) |
| int strfromd( char\* restrict s, size_t n, const char\* restrict format, double fp ); |  | (since C23) |
| int strfroml( char\* restrict s, size_t n, const char\* restrict format, long double fp ); |  | (since C23) |
|  |  |  |

Converts a floating-point value to a byte string.

The functions are equivalent to snprintf(s, n, format, fp), except that the format string shall only contain the character %, an optional precision that does not contain an asterisk \*, and one of the conversion specifiers `a`, `A`, `e`, `E`, `f`, `F`, `g`, or `G`, which applies to the type double, float, or long double) indicated by the function suffix (rather than by a length modifier). Use of these functions with any other format string results in undefined behavior.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | pointer to a character string to write to |
| n | - | up to n - 1 characters may be written, plus the null terminator |
| format | - | pointer to a null-terminated byte string specifying how to interpret the data |
| fp | - | floating-point value to convert |

### Return value

The number of characters that would have been written had n been sufficiently large, not counting the terminating null character. Thus, the null-terminated output has been completely written if and only if the returned value is both nonnegative and less than n.

### Example

Run this code

```
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char buffer[32];
    int written;
    const char* format[] = {"%a", "%A", "%e", "%E", "%f", "%F", "%g", "%G"};
 
    for (size_t fmt = 0; fmt != sizeof format / sizeof format[0]; ++fmt)
    {
        written = strfromf(buffer, sizeof buffer, format[fmt], 3.1415f);
        printf("strfromf(... %s ...) = %2i, buffer: \"%s\"\n",
               format[fmt], written, buffer);
    }
    puts("");
 
    for (size_t fmt = 0; fmt != sizeof format / sizeof format[0]; ++fmt)
    {
        written = strfromd(buffer, sizeof buffer, format[fmt], 3.1415);
        printf("strfromd(... %s ...) = %2i, buffer: \"%s\"\n",
               format[fmt], written, buffer);
    }
    puts("");
 
    for (size_t fmt = 0; fmt != sizeof format / sizeof format[0]; ++fmt)
    {
        written = strfroml(buffer, sizeof buffer, format[fmt], 3.1415);
        printf("strfroml(... %s ...) = %2i, buffer: \"%s\"\n",
               format[fmt], written, buffer);
    }
}

```

Output:

```
strfromf(... %a ...) = 13, buffer: "0x1.921cacp+1"
strfromf(... %A ...) = 13, buffer: "0X1.921CACP+1"
strfromf(... %e ...) = 12, buffer: "3.141500e+00"
strfromf(... %E ...) = 12, buffer: "3.141500E+00"
strfromf(... %f ...) =  8, buffer: "3.141500"
strfromf(... %F ...) =  8, buffer: "3.141500"
strfromf(... %g ...) =  6, buffer: "3.1415"
strfromf(... %G ...) =  6, buffer: "3.1415"
 
strfromd(... %a ...) = 20, buffer: "0x1.921cac083126fp+1"
strfromd(... %A ...) = 20, buffer: "0X1.921CAC083126FP+1"
strfromd(... %e ...) = 12, buffer: "3.141500e+00"
strfromd(... %E ...) = 12, buffer: "3.141500E+00"
strfromd(... %f ...) =  8, buffer: "3.141500"
strfromd(... %F ...) =  8, buffer: "3.141500"
strfromd(... %g ...) =  6, buffer: "3.1415"
strfromd(... %G ...) =  6, buffer: "3.1415"
 
strfroml(... %a ...) = 20, buffer: "0xc.90e5604189378p-2"
strfroml(... %A ...) = 20, buffer: "0XC.90E5604189378P-2"
strfroml(... %e ...) = 12, buffer: "3.141500e+00"
strfroml(... %E ...) = 12, buffer: "3.141500E+00"
strfroml(... %f ...) =  8, buffer: "3.141500"
strfroml(... %F ...) =  8, buffer: "3.141500"
strfroml(... %g ...) =  6, buffer: "3.1415"
strfroml(... %G ...) =  6, buffer: "3.1415"

```

### Reference

- C23 standard (ISO/IEC 9899:2024):

:   - 7.24.1.3 The strfromd, strfromf, and strfroml functions

### See also

|  |  |
| --- | --- |
| printffprintfsprintfsnprintfprintf_sfprintf_ssprintf_ssnprintf_s(C99)(C11)(C11)(C11)(C11) | prints formatted output to stdout, a file stream or a buffer   (function) |
| strtofstrtodstrtold(C99)(C99) | converts a byte string to a floating-point value   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/string/byte/strfromf&oldid=178809>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 December 2024, at 21:27.