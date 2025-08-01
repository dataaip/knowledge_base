# std::c16rtomb

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbrlen | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | btowc | | | | | | mbrtowc | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | wctob | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | mbrtoc32(C++11) | | | | | | c8rtomb(C++20) | | | | | | ****c16rtomb****(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cuchar>` |  |  |
| std::size_t c16rtomb( char\* s, char16_t c16, std::mbstate_t\* ps ); |  | (since C++11) |
|  |  |  |

Converts a single code point from variable-length 16-bit character representation (typically, UTF-16) to a narrow multibyte character representation.

If s is not a null pointer and c16 is the last 16-bit code unit in a valid variable-length encoding of a code point, the function determines the number of bytes necessary to store the multibyte character representation of that code point (including any shift sequences, and taking into account the current multibyte conversion state \*ps), and stores the multibyte character representation in the character array whose first element is pointed to by s, updating \*ps as necessary. At most MB_CUR_MAX bytes can be written by this function.

If s is a null pointer, the call is equivalent to std::c16rtomb(buf, u'\0', ps) for some internal buffer `buf`.

If c16 is not the final code unit in a 16-bit representation of a wide character, it does not write to the array pointed to by s, only \*ps is updated.

If c16 is the null wide character u'\0', a null byte is stored, preceded by any shift sequence necessary to restore the initial shift state and the conversion state parameter \*ps is updated to represent the initial shift state.

The multibyte encoding used by this function is specified by the currently active C locale.

### Parameters

|  |  |  |
| --- | --- | --- |
| s | - | pointer to narrow character array where the multibyte character will be stored |
| c16 | - | the 16-bit character to convert |
| ps | - | pointer to the conversion state object used when interpreting the multibyte string |

### Return value

On success, returns the number of bytes (including any shift sequences) written to the character array whose first element is pointed to by s. This value may be ​0​, e.g. when processing the first char16_t in a surrogate pair.

On failure (if c16 is not a valid 16-bit character), returns -1, stores EILSEQ in errno, and leaves \*ps in unspecified state.

### Notes

The C++ standard defers to the C standard for the semantics of this function. In C11 as published, unlike std::mbrtoc16, which converts variable-width multibyte (such as UTF-8) to variable-width 16-bit (such as UTF-16) encoding, this function can only convert single-unit 16-bit encoding, meaning it cannot convert UTF-16 to UTF-8 despite that being the original intent of this function. This was corrected by the post-C11 defect report DR488.

### Example

The example assumes that the fix for the defect report 488 is applied.

Run this code

```
#include <climits>
#include <clocale>
#include <cuchar>
#include <iomanip>
#include <iostream>
#include <string_view>
 
int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::u16string_view strv = u"zß水🍌"; // or z\u00df\u6c34\U0001F34C
    std::cout << "Processing " << strv.size() << " UTF-16 code units: [ ";
    for (char16_t c : strv)
        std::cout << std::showbase << std::hex << static_cast<int>(c) << ' ';
    std::cout << "]\n";
 
    std::mbstate_t state{};
    char out[MB_LEN_MAX]{};
    for (char16_t c : strv)
    {
        std::size_t rc = std::c16rtomb(out, c, &state);
        std::cout << static_cast<int>(c) << " converted to [ ";
        if (rc != (std::size_t) - 1)
            for (unsigned char c8 : std::string_view{out, rc})
                std::cout << +c8 << ' ';
        std::cout << "]\n";
    }
}

```

Output:

```
Processing 5 UTF-16 code units: [ 0x7a 0xdf 0x6c34 0xd83c 0xdf4c ]
0x7a converted to [ 0x7a ]
0xdf converted to [ 0xc3 0x9f ]
0x6c34 converted to [ 0xe6 0xb0 0xb4 ]
0xd83c converted to [ ]
0xdf4c converted to [ 0xf0 0x9f 0x8d 0x8c ]

```

### See also

|  |  |
| --- | --- |
| mbrtoc16(C++11) | converts a narrow multibyte character to UTF-16 encoding   (function) |
| c8rtomb(C++20) | converts UTF-8 string to narrow multibyte encoding   (function) |
| do_out[virtual] | converts a string from `InternT` to `ExternT`, such as when writing to file   (virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) |
| C documentation for c16rtomb | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/c16rtomb&oldid=177814>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 23 November 2024, at 14:36.