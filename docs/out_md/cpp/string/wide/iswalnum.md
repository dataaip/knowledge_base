# std::iswalnum

From cppreference.com
< cpp‎ | string‎ | wide
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

Null-terminated wide strings

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Character classification | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****iswalnum**** | | | | | | iswalpha | | | | | | iswlower | | | | | | iswupper | | | | | | iswdigit | | | | | | iswxdigit | | | | | | wctype | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswblank(C++11) | | | | | | iswctype | | | | | | iswcntrl | | | | | | iswgraph | | | | | | iswspace | | | | | | iswprint | | | | | | iswpunct | | | | | |
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

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwctype>` |  |  |
| int iswalnum( std::wint_t ch ); |  |  |
|  |  |  |

Checks if the given wide character is an alphanumeric character, i.e. either a number (0123456789), an uppercase letter (`ABCDEFGHIJKLMNOPQRSTUVWXYZ`), a lowercase letter (`abcdefghijklmnopqrstuvwxyz`) or any alphanumeric character specific to the current locale.

If the value of ch is neither representable as a wchar_t nor equal to the value of the macro WEOF, the behavior is undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| ch | - | wide character |

### Return value

Non-zero value if the wide character is an alphanumeric character, zero otherwise.

### Notes

ISO 30112 specifies which Unicode characters are included in the POSIX alnum category.

### Example

Run this code

```
#include <clocale>
#include <cwctype>
#include <iostream>
 
int main()
{
    wchar_t c = L'\u13ad'; // the Cherokee letter HA ('Ꭽ')
 
    std::cout << std::hex << std::showbase << std::boolalpha;
    std::cout << "in the default locale, iswalnum(" << (std::wint_t)c << ") = "
              << (bool)std::iswalnum(c) << '\n';
 
    std::setlocale(LC_ALL, "en_US.utf8");
    std::cout << "in Unicode locale, iswalnum(" << (std::wint_t)c << ") = "
              << (bool)std::iswalnum(c) << '\n';
}

```

Possible output:

```
in the default locale, iswalnum(0x13ad) = false
in Unicode locale, iswalnum(0x13ad) = true

```

### See also

|  |  |
| --- | --- |
| isalnum(std::locale) | checks if a character is classified as alphanumeric by a locale   (function template) |
| isalnum | checks if a character is alphanumeric   (function) |
| C documentation for iswalnum | |

| ASCII values | | | characters | iscntrl  iswcntrl | isprint  iswprint | isspace  iswspace | isblank  iswblank | isgraph  iswgraph | ispunct  iswpunct | isalnum  ****iswalnum**** | isalpha  iswalpha | isupper  iswupper | islower  iswlower | isdigit  iswdigit | isxdigit  iswxdigit |
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

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/wide/iswalnum&oldid=153092>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 June 2023, at 23:14.