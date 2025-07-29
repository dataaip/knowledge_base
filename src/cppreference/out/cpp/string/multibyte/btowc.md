# std::btowc

From cppreference.com
< cpp‎ | string‎ | multibyte
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

Null-terminated multibyte strings

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbrlen | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | ****btowc**** | | | | | | mbrtowc | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | wctob | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | mbrtoc32(C++11) | | | | | | c8rtomb(C++20) | | | | | | c16rtomb(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| std::wint_t btowc( int c ); |  |  |
|  |  |  |

Widens a single-byte character c to its wide character equivalent.

Most multibyte character encodings use single-byte codes to represent the characters from the ASCII character set. This function may be used to convert such characters to wchar_t.

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | single-byte character to widen |

### Return value

WEOF if c is EOF.

Wide character representation of c if (unsigned char)c is a valid single-byte character in the initial shift state, WEOF otherwise.

### Example

Run this code

```
#include <clocale>
#include <cwchar>
#include <iostream>
 
void try_widen(char c)
{
    std::wint_t w = std::btowc(c);
    if (w != WEOF)
        std::cout << "The single-byte character " << +(unsigned char)c
                  << " widens to " << +w << '\n';
    else
        std::cout << "The single-byte character " << +(unsigned char)c
                  << " failed to widen\n";
}
 
int main()
{
    std::setlocale(LC_ALL, "lt_LT.iso88594");
    std::cout << std::hex << std::showbase << "In Lithuanian ISO-8859-4 locale:\n";
    try_widen('A');
    try_widen('\xdf'); // German letter ß (U+00df) in ISO-8859-4
    try_widen('\xf9'); // Lithuanian letter ų (U+0173) in ISO-8859-4
 
    std::setlocale(LC_ALL, "lt_LT.utf8");
    std::cout << "In Lithuanian UTF-8 locale:\n";
    try_widen('A');
    try_widen('\xdf');
    try_widen('\xf9');
}

```

Possible output:

```
In Lithuanian ISO-8859-4 locale:
The single-byte character 0x41 widens to 0x41
The single-byte character 0xdf widens to 0xdf
The single-byte character 0xf9 widens to 0x173
In Lithuanian UTF-8 locale:
The single-byte character 0x41 widens to 0x41
The single-byte character 0xdf failed to widen
The single-byte character 0xf9 failed to widen

```

### See also

|  |  |
| --- | --- |
| wctob | narrows a wide character to a single-byte narrow character, if possible   (function) |
| do_widen[virtual] | converts a character or characters from char to `CharT`   (virtual protected member function of `std::ctype<CharT>`) |
| C documentation for btowc | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/btowc&oldid=153036>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 June 2023, at 01:06.