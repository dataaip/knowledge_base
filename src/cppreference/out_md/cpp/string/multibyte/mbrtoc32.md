# std::mbrtoc32

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbrlen | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | btowc | | | | | | mbrtowc | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | wctob | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | ****mbrtoc32****(C++11) | | | | | | c8rtomb(C++20) | | | | | | c16rtomb(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cuchar>` |  |  |
| std::size_t mbrtoc32( char32_t\* pc32,  const char\* s,                        std::size_t n, std::mbstate_t\* ps ); |  | (since C++11) |
|  |  |  |

Converts a narrow multibyte character to its UTF-32 character representation.

If s is not a null pointer, inspects at most n bytes of the multibyte character string, beginning with the byte pointed to by s to determine the number of bytes necessary to complete the next multibyte character (including any shift sequences). If the function determines that the next multibyte character in s is complete and valid, converts it to the corresponding 32-bit character and stores it in \*pc32 (if pc32 is not null).

If the multibyte character in \*s corresponds to a multi-char32_t sequence (not possible with UTF-32), then after the first call to this function, \*ps is updated in such a way that the next calls to `mbrtoc32` will write out the additional char32_t, without considering \*s.

If s is a null pointer, the values of n and pc32 are ignored and the call is equivalent to std::mbrtoc32(nullptr, "", 1, ps).

If the wide character produced is the null character, the conversion state \*ps represents the initial shift state.

The multibyte encoding used by this function is specified by the currently active C locale.

### Parameters

|  |  |  |
| --- | --- | --- |
| pc32 | - | pointer to the location where the resulting 32-bit character will be written |
| s | - | pointer to the multibyte character string used as input |
| n | - | limit on the number of bytes in s that can be examined |
| ps | - | pointer to the conversion state object used when interpreting the multibyte string |

### Return value

The first of the following that applies:

- ​0​ if the character converted from s (and stored in \*pc32 if non-null) was the null character.
- the number of bytes [1...n] of the multibyte character successfully converted from s.
- -3 if the next char32_t from a multi-char32_t character has now been written to \*pc32. No bytes are processed from the input in this case.
- -2 if the next n bytes constitute an incomplete, but so far valid, multibyte character. Nothing is written to \*pc32.
- -1 if encoding error occurs. Nothing is written to \*pc32, the value EILSEQ is stored in errno and the value of \*ps is unspecified.

### Examples

Run this code

```
#include <cassert>
#include <clocale>
#include <cstring>
#include <cuchar>
#include <cwchar>
#include <iomanip>
#include <iostream>
 
int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
 
    std::string str = "z\u00df\u6c34\U0001F34C"; // or u8"zß水🍌"
 
    std::cout << "Processing " << str.size() << " bytes: [ " << std::showbase;
    for (unsigned char c : str)
        std::cout << std::hex << +c << ' ';
    std::cout << "]\n";
 
    std::mbstate_t state{}; // zero-initialized to initial state
    char32_t c32;
    const char* ptr = str.c_str(), *end = str.c_str() + str.size() + 1;
 
    while (std::size_t rc = std::mbrtoc32(&c32, ptr, end - ptr, &state))
    {
        std::cout << "Next UTF-32 char: " << std::hex
                  << static_cast<int>(c32) << " obtained from ";
        assert(rc != (std::size_t) - 3); // no surrogates in UTF-32
        if (rc == (std::size_t) - 1)
            break;
        if (rc == (std::size_t) - 2)
            break;
        std::cout << std::dec << rc << " bytes [ ";
        for (std::size_t n = 0; n < rc; ++n)
            std::cout << std::hex << +static_cast<unsigned char>(ptr[n]) << ' ';
        std::cout << "]\n";
        ptr += rc;
    }
}

```

Output:

```
Processing 10 bytes: [ 0x7a 0xc3 0x9f 0xe6 0xb0 0xb4 0xf0 0x9f 0x8d 0x8c ]
Next UTF-32 char: 0x7a obtained from 1 bytes [ 0x7a ]
Next UTF-32 char: 0xdf obtained from 2 bytes [ 0xc3 0x9f ]
Next UTF-32 char: 0x6c34 obtained from 3 bytes [ 0xe6 0xb0 0xb4 ]
Next UTF-32 char: 0x1f34c obtained from 4 bytes [ 0xf0 0x9f 0x8d 0x8c ]

```

### See also

|  |  |
| --- | --- |
| c32rtomb(C++11) | converts a UTF-32 character to narrow multibyte encoding   (function) |
| do_in[virtual] | converts a string from `ExternT` to `InternT`, such as when reading from file   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| C documentation for mbrtoc32 | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrtoc32&oldid=177818>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 November 2024, at 14:45.