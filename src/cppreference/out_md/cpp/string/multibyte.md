# Null-terminated multibyte strings

From cppreference.com
< cpp‎ | string
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
| ****Multibyte strings**** | | | | |
| Wide strings | | | | |
| Primitive numeric conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

****Null-terminated multibyte strings****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Functions | | | | | | Wide/multibyte examination | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mblen | | | | | | mbrlen | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbsinit | | | | | |  | | | | | | | Multibyte/wide conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mbtowc | | | | | | mbstowcs | | | | | | btowc | | | | | | mbrtowc | | | | | | mbsrtowcs | | | | | | wctomb | | | | | | wcstombs | | | | | | wctob | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcrtomb | | | | | | wcsrtombs | | | | | | mbrtoc8(C++20) | | | | | | mbrtoc16(C++11) | | | | | | mbrtoc32(C++11) | | | | | | c8rtomb(C++20) | | | | | | c16rtomb(C++11) | | | | | | c32rtomb(C++11) | | | | | | |
| Types | | | | |
| mbstate_t | | | | |
| Macros | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | MB_LEN_MAX MB_CUR_MAX | | | | | | __STDC_UTF_16__ __STDC_UTF_32__(C++11)(C++11) | | | | | |

A null-terminated multibyte string (NTMBS), or "multibyte string", is a sequence of nonzero bytes followed by a byte with value zero (the terminating null character).

Each character stored in the string may occupy more than one byte. The encoding used to represent characters in a multibyte character string is locale-specific: it may be UTF-8, GB18030, EUC-JP, Shift-JIS, etc. For example, the char array {'\xe4','\xbd','\xa0','\xe5','\xa5','\xbd','\0'} is an NTMBS holding the string "你好" in UTF-8 multibyte encoding: the first three bytes encode the character 你, the next three bytes encode the character 好. The same string encoded in GB18030 is the char array {'\xc4', '\xe3', '\xba', '\xc3', '\0'}, where each of the two characters is encoded as a two-byte sequence.

In some multibyte encodings, any given multibyte character sequence may represent different characters depending on the previous byte sequences, known as "shift sequences". Such encodings are known as state-dependent: knowledge of the current shift state is required to interpret each character. An NTMBS is only valid if it begins and ends in the initial shift state: if a shift sequence was used, the corresponding unshift sequence has to be present before the terminating null character. Examples of such encodings are the 7-bit JIS, BOCU-1 and SCSU.

A multibyte character string is layout-compatible with null-terminated byte string (NTBS), that is, can be stored, copied, and examined using the same facilities, except for calculating the number of characters. If the correct locale is in effect, I/O functions also handle multibyte strings. Multibyte strings can be converted to and from wide strings using the std::codecvt member functions, std::wstring_convert, or the following locale-dependent conversion functions:

### Functions

|  |  |
| --- | --- |
| Multibyte/wide character conversions | |
| Defined in header `<cstdlib>` | |
| mblen | returns the number of bytes in the next multibyte character   (function) |
| mbtowc | converts the next multibyte character to wide character   (function) |
| wctomb | converts a wide character to its multibyte representation   (function) |
| mbstowcs | converts a narrow multibyte character string to wide string   (function) |
| wcstombs | converts a wide string to narrow multibyte character string   (function) |
| Defined in header `<cwchar>` | |
| mbrlen | returns the number of bytes in the next multibyte character, given state   (function) |
| mbsinit | checks if the std::mbstate_t object represents initial shift state   (function) |
| btowc | widens a single-byte narrow character to wide character, if possible   (function) |
| wctob | narrows a wide character to a single-byte narrow character, if possible   (function) |
| mbrtowc | converts the next multibyte character to wide character, given state   (function) |
| wcrtomb | converts a wide character to its multibyte representation, given state   (function) |
| mbsrtowcs | converts a narrow multibyte character string to wide string, given state   (function) |
| wcsrtombs | converts a wide string to narrow multibyte character string, given state   (function) |
| Defined in header `<cuchar>` | |
| mbrtoc8(C++20) | converts a narrow multibyte character to UTF-8 encoding   (function) |
| c8rtomb(C++20) | converts UTF-8 string to narrow multibyte encoding   (function) |
| mbrtoc16(C++11) | converts a narrow multibyte character to UTF-16 encoding   (function) |
| c16rtomb(C++11) | converts a UTF-16 character to narrow multibyte encoding   (function) |
| mbrtoc32(C++11) | converts a narrow multibyte character to UTF-32 encoding   (function) |
| c32rtomb(C++11) | converts a UTF-32 character to narrow multibyte encoding   (function) |

### Types

|  |  |
| --- | --- |
| Defined in header `<cwchar>` | |
| mbstate_t | conversion state information necessary to iterate multibyte character strings   (class) |

### Macros

|  |  |
| --- | --- |
| Defined in header `<climits>` | |
| MB_LEN_MAX | maximum number of bytes in a multibyte character   (macro constant) |
| Defined in header `<cstdlib>` | |
| MB_CUR_MAX | maximum number of bytes in a multibyte character in the current C locale (macro variable) |
| Defined in header `<cuchar>` | |
| __STDC_UTF_16__(C++11) | indicates that UTF-16 encoding is used by mbrtoc16 and c16rtomb   (macro constant) |
| __STDC_UTF_32__(C++11) | indicates that UTF-32 encoding is used by mbrtoc32 and c32rtomb   (macro constant) |

### See also

|  |  |
| --- | --- |
| C documentation for Null-terminated multibyte strings | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte&oldid=179249>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 January 2025, at 23:08.