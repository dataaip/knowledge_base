# std::mbrtowc

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbrlen | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | btowc | | | | | | ****mbrtowc**** | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | wctob | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | mbrtoc32(C++11) | | | | | | c8rtomb(C++20) | | | | | | c16rtomb(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| std::size_t mbrtowc( wchar_t\* pwc,  const char\* s,                       std::size_t n, std::mbstate_t\* ps ); |  |  |
|  |  |  |

Converts a narrow multibyte character to a wide character.

If s is not a null pointer, inspects at most n bytes of the multibyte character string, beginning with the byte pointed to by s to determine the number of bytes necessary to complete the next multibyte character (including any shift sequences). If the function determines that the next multibyte character in s is complete and valid, converts it to the corresponding wide character and stores it in \*pwc (if pwc is not null).

If s is a null pointer, the values of n and pwc are ignored and call is equivalent to std::mbrtowc(nullptr, "", 1, ps).

If the wide character produced is the null character, the conversion state stored in \*ps is the initial shift state.

### Parameters

|  |  |  |
| --- | --- | --- |
| pwc | - | pointer to the location where the resulting wide character will be written |
| s | - | pointer to the multibyte character string used as input |
| n | - | limit on the number of bytes in s that can be examined |
| ps | - | pointer to the conversion state used when interpreting the multibyte string |

### Return value

The first of the following that applies:

- ​0​ if the character converted from s (and stored in pwc if non-null) was the null character.
- the number of bytes [1...n] of the multibyte character successfully converted from s.
- static_cast<std::size_t>(-2) if the next n bytes constitute an incomplete, but so far valid, multibyte character. Nothing is written to \*pwc.
- static_cast<std::size_t>(-1) if encoding error occurs. Nothing is written to \*pwc, the value EILSEQ is stored in errno and the value of \*ps is left unspecified.

### Example

Run this code

```
#include <clocale>
#include <cstring>
#include <cwchar>
#include <iostream>
 
void print_mb(const char* ptr)
{
    std::mbstate_t state = std::mbstate_t(); // initial state
    const char* end = ptr + std::strlen(ptr);
    int len;
    wchar_t wc;
    while ((len = std::mbrtowc(&wc, ptr, end-ptr, &state)) > 0)
    {
        std::wcout << "Next " << len << " bytes are the character " << wc << '\n';
        ptr += len;
    }
}
 
int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    // UTF-8 narrow multibyte encoding
    const char* str = "z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                      // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
    print_mb(str);
}

```

Output:

```
Next 1 bytes are the character z
Next 2 bytes are the character ß
Next 3 bytes are the character 水
Next 4 bytes are the character 𝄋

```

### See also

|  |  |
| --- | --- |
| mbtowc | converts the next multibyte character to wide character   (function) |
| wcrtomb | converts a wide character to its multibyte representation, given state   (function) |
| do_in[virtual] | converts a string from `ExternT` to `InternT`, such as when reading from file   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| C documentation for mbrtowc | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrtowc&oldid=153082>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 June 2023, at 22:21.