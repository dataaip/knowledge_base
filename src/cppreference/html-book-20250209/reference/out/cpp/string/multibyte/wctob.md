# std::wctob

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbrlen | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | btowc | | | | | | mbrtowc | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | ****wctob**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | mbrtoc32(C++11) | | | | | | c8rtomb(C++20) | | | | | | c16rtomb(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| int wctob( std::wint_t c ); |  |  |
|  |  |  |

Narrows a wide character c if its multibyte character equivalent in the initial shift state is a single byte.

This is typically possible for the characters from the ASCII character set, since most multibyte encodings (such as UTF-8) use single bytes to encode those characters.

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | wide character to narrow |

### Return value

EOF if c does not represent a multibyte character with length 1 in initial shift state.

Otherwise, the single-byte representation of c as unsigned char converted to int.

### Example

Run this code

```
#include <clocale>
#include <cwchar>
#include <iostream>
 
void try_narrowing(wchar_t c)
{
    int cn = std::wctob(c);
    if (cn != EOF)
        std::cout << '\'' << int(c) << "' narrowed to " << +cn << '\n';
    else
        std::cout << '\'' << int(c) << "' could not be narrowed\n";
}
 
int main()
{
    std::setlocale(LC_ALL, "th_TH.utf8");
    std::cout << std::hex << std::showbase << "In Thai UTF-8 locale:\n";
    try_narrowing(L'a');
    try_narrowing(L'๛');
 
    std::setlocale(LC_ALL, "th_TH.tis620");
    std::cout << "In Thai TIS-620 locale:\n";
    try_narrowing(L'a');
    try_narrowing(L'๛');
}

```

Output:

```
In Thai UTF-8 locale:
'0x61' narrowed to 0x61
'0xe5b' could not be narrowed
In Thai TIS-620 locale:
'0x61' narrowed to 0x61
'0xe5b' narrowed to 0xfb

```

### See also

|  |  |
| --- | --- |
| btowc | widens a single-byte narrow character to wide character, if possible   (function) |
| narrow | narrows characters   (public member function of `std::basic_ios<CharT,Traits>`) |
| narrow | invokes `do_narrow`   (public member function of `std::ctype<CharT>`) |
| C documentation for wctob | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wctob&oldid=153090>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 June 2023, at 22:51.