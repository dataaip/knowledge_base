# std::toupper(std::locale)

From cppreference.com
< cpp‎ | locale
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

Localization library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****toupper**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| template< class CharT >  CharT toupper( CharT ch, const locale& loc ); |  |  |
|  |  |  |

Converts the character ch to uppercase if possible, using the conversion rules specified by the given locale's std::ctype facet.

### Parameters

|  |  |  |
| --- | --- | --- |
| ch | - | character |
| loc | - | locale |

### Return value

Returns the uppercase form of ch if one is listed in the locale, otherwise returns ch unchanged.

### Notes

Only 1:1 character mapping can be performed by this function, e.g. the uppercase form of 'ß' is (with some exceptions) the two-character string "SS", which cannot be obtained by std::toupper.

### Possible implementation

|  |
| --- |
| ```text template<class CharT> CharT toupper(CharT ch, const std::locale& loc) {     return std::use_facet<std::ctype<CharT>>(loc).toupper(ch); } ``` |

### Example

Run this code

```
#include <cwctype>
#include <iostream>
#include <locale>
 
int main()
{
    wchar_t c = L'\u017f'; // Latin small letter Long S ('ſ')
 
    std::cout << std::hex << std::showbase;
 
    std::cout << "in the default locale, toupper(" << (std::wint_t)c << ") = "
              << (std::wint_t)std::toupper(c, std::locale()) << '\n';
 
    std::cout << "in Unicode locale, toupper(" << (std::wint_t)c << ") = "
              << (std::wint_t)std::toupper(c, std::locale("en_US.utf8")) << '\n';
}

```

Possible output:

```
in the default locale, toupper(0x17f) = 0x17f
in Unicode locale, toupper(0x17f) = 0x53

```

### See also

|  |  |
| --- | --- |
| tolower(std::locale) | converts a character to lowercase using the `ctype` facet of a locale   (function template) |
| toupper | converts a character to uppercase   (function) |
| towupper | converts a wide character to uppercase   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/toupper&oldid=160220>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 October 2023, at 10:34.