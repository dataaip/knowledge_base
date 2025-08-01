# std::atof

From cppreference.com
< cpp‎ | string‎ | byte
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Freestanding and hosted | | | | |
| Language | | | | |
| Standard library | | | | |
| Standard library headers | | | | |
| Named requirements | | | | |
| Feature test macros (C++20) | | | | |
| Language support library | | | | |
| Concepts library (C++20) | | | | |
| Diagnostics library | | | | |
| Memory management library | | | | |
| Metaprogramming library (C++11) | | | | |
| General utilities library | | | | |
| Containers library | | | | |
| Iterators library | | | | |
| Ranges library (C++20) | | | | |
| Algorithms library | | | | |
| Strings library | | | | |
| Text processing library | | | | |
| Numerics library | | | | |
| Date and time library | | | | |
| Input/output library | | | | |
| Filesystem library (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

Text processing library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Localization library | | | | |
| Regular expressions library (C++11) | | | | |
| Formatting library (C++20) | | | | |
| Null-terminated sequence utilities | | | | |
| Byte strings | | | | |
| Multibyte strings | | | | |
| Wide strings | | | | |
| Primitive numeric conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

Null-terminated byte strings

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Character classification | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | isalnum | | | | | | isalpha | | | | | | islower | | | | | | isupper | | | | | | isdigit | | | | | | isxdigit | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | iscntrl | | | | | | isgraph | | | | | | isspace | | | | | | isprint | | | | | | ispunct | | | | | |
| Character manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | |
| Conversions to numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****atof**** | | | | | | atoiatolatoll(C++11) | | | | | | strtolstrtoll(C++11) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strtoulstrtoull(C++11) | | | | | | strtofstrtodstrtold(C++11)(C++11) | | | | | | strtoimaxstrtouimax(C++11)(C++11) | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcpy | | | | | | strncpy | | | | | | strxfrm | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strcat | | | | | | strncat | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strlen | | | | | | strcmp | | | | | | strncmp | | | | | | strcoll | | | | | | strchr | | | | | | strrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | strspn | | | | | | strcspn | | | | | | strpbrk | | | | | | strstr | | | | | | strtok | | | | | |  | | | | | |
| Character array functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | memchr | | | | | | memcmp | | | | | | memset | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | memcpy | | | | | | memmove | | | | | |  | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | strerror | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cstdlib>` |  |  |
| double atof( const char\* str ); |  |  |
|  |  |  |

Interprets a floating point value in a byte string pointed to by str.

Function discards any whitespace characters (as determined by std::isspace) until first non-whitespace character is found. Then it takes as many characters as possible to form a valid floating-point representation and converts them to a floating-point value. The valid floating-point value can be one of the following:

- decimal floating-point expression. It consists of the following parts:

:   - (optional) plus or minus sign
    - nonempty sequence of decimal digits optionally containing decimal-point character (as determined by the current C locale) (defines significand)
    - (optional) `e` or `E` followed with optional minus or plus sign and nonempty sequence of decimal digits (defines exponent to base 10)

|  |  |
| --- | --- |
| - hexadecimal floating-point expression. It consists of the following parts:   - (optional) plus or minus sign - `0x` or `0X` - nonempty sequence of hexadecimal digits optionally containing a decimal-point character (as determined by the current C locale) (defines significand) - (optional) `p` or `P` followed with optional minus or plus sign and nonempty sequence of decimal digits (defines exponent to base 2)   - infinity expression. It consists of the following parts:   - (optional) plus or minus sign - `INF` or `INFINITY` ignoring case   - not-a-number expression. It consists of the following parts:   - (optional) plus or minus sign - `NAN` or `NAN(`**char_sequence**`)` ignoring case of the `NAN` part. **char_sequence** can only contain digits, Latin letters, and underscores. The result is a quiet NaN floating-point value. | (since C++11) |

- any other expression that may be accepted by the currently installed C locale

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | pointer to the null-terminated byte string to be interpreted |

### Return value

double value corresponding to the contents of str on success. If the converted value falls out of range of the return type, the return value is undefined. If no conversion can be performed, 0.0 is returned.

### Example

Run this code

```
#include <cstdlib>
#include <iostream>
 
int main()
{
    std::cout << std::atof("0.0000000123") << '\n'
              << std::atof("0.012") << '\n'
              << std::atof("15e16") << '\n'
              << std::atof("-0x1afp-2") << '\n'
              << std::atof("inF") << '\n'
              << std::atof("Nan") << '\n'
              << std::atof("invalid") << '\n';
}

```

Output:

```
1.23e-08
0.012
1.5e+17
-107.75
inf
nan
0

```

### See also

|  |  |
| --- | --- |
| stofstodstold(C++11)(C++11)(C++11) | converts a string to a floating point value   (function) |
| strtofstrtodstrtold | converts a byte string to a floating-point value   (function) |
| from_chars(C++17) | converts a character sequence to an integer or floating-point value   (function) |
| atoiatolatoll(C++11) | converts a byte string to an integer value   (function) |
| C documentation for atof | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/byte/atof&oldid=152809>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 June 2023, at 08:28.