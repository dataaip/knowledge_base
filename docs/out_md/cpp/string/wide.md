# Null-terminated wide strings

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
| Multibyte strings | | | | |
| ****Wide strings**** | | | | |
| Primitive numeric conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_chars(C++17) | | | | | | to_chars_result(C++17) | | | | | | from_chars(C++17) | | | | | | from_chars_result(C++17) | | | | | | chars_format(C++17) | | | | | |
| Text encoding identifications | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | text_encoding(C++26) | | | | | |

****Null-terminated wide strings****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Character classification | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswalnum | | | | | | iswalpha | | | | | | iswlower | | | | | | iswupper | | | | | | iswdigit | | | | | | iswxdigit | | | | | | wctype | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswblank(C++11) | | | | | | iswctype | | | | | | iswcntrl | | | | | | iswgraph | | | | | | iswspace | | | | | | iswprint | | | | | | iswpunct | | | | | |
| Character manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | towlower | | | | | | towupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | towctrans | | | | | | wctrans | | | | | |
| Conversions to numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstolwcstoll(C++11) | | | | | | wcstofwcstodwcstold(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstoulwcstoull(C++11) | | | | | | wcstoimaxwcstouimax(C++11)(C++11) | | | | | |  | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcslen | | | | | | wcscmp | | | | | | wcscoll | | | | | | wcsncmp | | | | | | wcschr | | | | | | wcsrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcspbrk | | | | | | wcsspn | | | | | | wcscspn | | | | | | wcsstr | | | | | | wcstok | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscpy | | | | | | wcsncpy | | | | | | wcsxfrm | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscat | | | | | | wcsncat | | | | | |  | | | | | |
| Array manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcpy | | | | | | wmemmove | | | | | | wmemcmp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemchr | | | | | | wmemset | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Types | | | | | | wctrans_t | | | | | | wctype_t | | | | | | wint_t | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Macros | | | | | | WCHAR_MIN WCHAR_MAX WEOF | | | | | |

A null-terminated wide string is a sequence of valid wide characters, ending with a null character.

### Functions

|  |  |
| --- | --- |
| Character classification | |
| Defined in header `<cwctype>` | |
| iswalnum | checks if a wide character is alphanumeric   (function) |
| iswalpha | checks if a wide character is alphabetic   (function) |
| iswlower | checks if a wide character is lowercase   (function) |
| iswupper | checks if a wide character is an uppercase character   (function) |
| iswdigit | checks if a wide character is a digit   (function) |
| iswxdigit | checks if a wide character is a hexadecimal character   (function) |
| iswcntrl | checks if a wide character is a control character   (function) |
| iswgraph | checks if a wide character is a graphical character   (function) |
| iswspace | checks if a wide character is a space character   (function) |
| iswblank(C++11) | checks if a wide character is a blank character   (function) |
| iswprint | checks if a wide character is a printing character   (function) |
| iswpunct | checks if a wide character is a punctuation character   (function) |
| iswctype | classifies a wide character according to the specified `LC_CTYPE` category   (function) |
| wctype | looks up a character classification category in the current C locale   (function) |
| Character manipulation | |
| Defined in header `<cwctype>` | |
| towlower | converts a wide character to lowercase   (function) |
| towupper | converts a wide character to uppercase   (function) |
| towctrans | performs character mapping according to the specified `LC_CTYPE` mapping category   (function) |
| wctrans | looks up a character mapping category in the current C locale   (function) |

| ASCII values | | | characters | iscntrl  iswcntrl | isprint  iswprint | isspace  iswspace | isblank  iswblank | isgraph  iswgraph | ispunct  iswpunct | isalnum  iswalnum | isalpha  iswalpha | isupper  iswupper | islower  iswlower | isdigit  iswdigit | isxdigit  iswxdigit |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| decimal | hexadecimal | octal |
| 0–8 | `\x0`–`\x8` | `\0`–`\10` | control codes (`NUL`, etc.) | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 9 | `\x9` | `\11` | tab (`\t`) | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 10–13 | `\xA`–`\xD` | `\12`–`\15` | whitespaces (`\n`, `\v`, `\f`, `\r`) | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 14–31 | `\xE`–`\x1F` | `\16`–`\37` | control codes | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 32 | `\x20` | `\40` | space | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 33–47 | `\x21`–`\x2F` | `\41`–`\57` | `!"#$%&'()*+,-./` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 48–57 | `\x30`–`\x39` | `\60`–`\71` | `0123456789` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** |
| 58–64 | `\x3A`–`\x40` | `\72`–`\100` | `:;<=>?@` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 65–70 | `\x41`–`\x46` | `\101`–`\106` | `ABCDEF` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** |
| 71–90 | `\x47`–`\x5A` | `\107`–`\132` | `GHIJKLMNOP` `QRSTUVWXYZ` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 91–96 | `\x5B`–`\x60` | `\133`–`\140` | `[\]^_`` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 97–102 | `\x61`–`\x66` | `\141`–`\146` | `abcdef` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** |
| 103–122 | `\x67`–`\x7A` | `\147`–`\172` | `ghijklmnop` `qrstuvwxyz` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** |
| 123–126 | `\x7B`–`\x7E` | `\172`–`\176` | `{|}~` | ****`0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`≠0`**** | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |
| 127 | `\x7F` | `\177` | backspace character (`DEL`) | ****`≠0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** | ****`0`**** |

|  |  |
| --- | --- |
| Conversions to numeric formats | |
| Defined in header `<cwchar>` | |
| wcstolwcstoll | converts a wide string to an integer value   (function) |
| wcstoulwcstoull | converts a wide string to an unsigned integer value   (function) |
| wcstofwcstodwcstold | converts a wide string to a floating-point value   (function) |
| Defined in header `<cinttypes>` | |
| wcstoimaxwcstoumax(C++11)(C++11) | converts a wide string to std::intmax_t or std::uintmax_t   (function) |

|  |  |
| --- | --- |
| String manipulation | |
| Defined in header `<cwchar>` | |
| wcscpy | copies one wide string to another   (function) |
| wcsncpy | copies a certain amount of wide characters from one string to another   (function) |
| wcscat | appends a copy of one wide string to another   (function) |
| wcsncat | appends a certain amount of wide characters from one wide string to another   (function) |
| wcsxfrm | transform a wide string so that `wcscmp` would produce the same result as `wcscoll`   (function) |
| String examination | |
| Defined in header `<cwchar>` | |
| wcslen | returns the length of a wide string   (function) |
| wcscmp | compares two wide strings   (function) |
| wcsncmp | compares a certain amount of characters from two wide strings   (function) |
| wcscoll | compares two wide strings in accordance to the current locale   (function) |
| wcschr | finds the first occurrence of a wide character in a wide string   (function) |
| wcsrchr | finds the last occurrence of a wide character in a wide string   (function) |
| wcsspn | returns the length of the maximum initial segment that consists of only the wide characters found in another wide string   (function) |
| wcscspn | returns the length of the maximum initial segment that consists of only the wide **not** found in another wide string   (function) |
| wcspbrk | finds the first location of any wide character in one wide string, in another wide string   (function) |
| wcsstr | finds the first occurrence of a wide string within another wide string   (function) |
| wcstok | finds the next token in a wide string   (function) |

|  |  |
| --- | --- |
| Wide character array manipulation | |
| Defined in header `<cwchar>` | |
| wmemcpy | copies a certain amount of wide characters between two non-overlapping arrays   (function) |
| wmemmove | copies a certain amount of wide characters between two, possibly overlapping, arrays   (function) |
| wmemcmp | compares a certain amount of wide characters from two arrays   (function) |
| wmemchr | finds the first occurrence of a wide character in a wide character array   (function) |
| wmemset | copies the given wide character to every position in a wide character array   (function) |

### Types

|  |  |
| --- | --- |
| Defined in header `<cwctype>` | |
| wctrans_t | scalar type that holds locale-specific character mapping   (typedef) |
| wctype_t | scalar type that holds locale-specific character classification   (typedef) |
| Defined in header `<cwctype>` | |
| Defined in header `<cwchar>` | |
| wint_t | integer type that can hold any valid wide character and at least one more value   (typedef) |

### Macros

|  |  |
| --- | --- |
| Defined in header `<cwchar>` | |
| WEOF | a non-character value of type std::wint_t used to indicate errors   (macro constant) |
| WCHAR_MIN | the smallest valid value of wchar_t   (macro constant) |
| WCHAR_MAX | the largest valid value of wchar_t   (macro constant) |

### See also

|  |  |
| --- | --- |
| C documentation for Null-terminated wide strings | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/wide&oldid=167386>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 December 2023, at 05:42.