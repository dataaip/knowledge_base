# std::mbrlen

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | ****mbrlen**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | btowc | | | | | | mbrtowc | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | wctob | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | mbrtoc32(C++11) | | | | | | c8rtomb(C++20) | | | | | | c16rtomb(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| std::size_t mbrlen( const char\* s, std::size_t n, std::mbstate_t\* ps); |  |  |
|  |  |  |

Determines the size, in bytes, of the remainder of the multibyte character whose first byte is pointed to by s, given the current conversion state ps.

This function is equivalent to the call std::mbrtowc(nullptr, s, n, ps ? ps : &internal) for some hidden object internal of type std::mbstate_t, except that the expression ps is evaluated only once.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | pointer to an element of a multibyte character string |
| n | - | limit on the number of bytes in s that can be examined |
| ps | - | pointer to the variable holding the conversion state |

### Return value

- ​0​ if the next n or fewer bytes complete the null character.
- The number of bytes (between 1 and n) that complete a valid multibyte character.
- std::size_t(-1) if encoding error occurs.
- std::size_t(-2) if the next n bytes are part of a possibly valid multibyte character, which is still incomplete after examining all n bytes.

### Example

Run this code

```
#include <clocale>
#include <cwchar>
#include <iostream>
#include <string>
 
int main()
{
    // allow mbrlen() to work with UTF-8 multibyte encoding
    std::setlocale(LC_ALL, "en_US.utf8");
 
    // UTF-8 narrow multibyte encoding
    std::string str = "水"; // or u8"\u6c34" or "\xe6\xb0\xb4"
    std::mbstate_t mb = std::mbstate_t();
 
    // simple use: length of a complete multibyte character
    const std::size_t len = std::mbrlen(&str[0], str.size(), &mb);
    std::cout << "The length of " << str << " is " << len << " bytes\n";
 
    // advanced use: restarting in the middle of a multibyte character
    const std::size_t len1 = std::mbrlen(&str[0], 1, &mb);
    if (len1 == std::size_t(-2))
        std::cout << "The first 1 byte of " << str
                  << " is an incomplete multibyte char (mbrlen returns -2)\n";
 
    const std::size_t len2 = std::mbrlen(&str[1], str.size() - 1, &mb);
    std::cout << "The remaining " << str.size() - 1 << " bytes of " << str
              << " hold " << len2 << " bytes of the multibyte character\n";
 
    // error case:
    std::cout << "Attempting to call mbrlen() in the middle of " << str
              << " while in initial shift state returns "
              << (int)mbrlen(&str[1], str.size(), &mb) << '\n';
}

```

Output:

```
The length of 水 is 3 bytes.
The first 1 byte of 水 is an incomplete multibyte char (mbrlen returns -2)
The remaining 2 bytes of 水 hold 2 bytes of the multibyte character
Attempting to call mbrlen() in the middle of 水 while in initial shift state returns -1

```

### See also

|  |  |
| --- | --- |
| mbrtowc | converts the next multibyte character to wide character, given state   (function) |
| mblen | returns the number of bytes in the next multibyte character   (function) |
| do_length[virtual] | calculates the length of the `ExternT` string that would be consumed by conversion into given `InternT` buffer   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| C documentation for mbrlen | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrlen&oldid=176689>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 October 2024, at 12:37.