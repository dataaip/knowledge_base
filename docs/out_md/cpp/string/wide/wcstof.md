# std::wcstof, std::wcstod, std::wcstold

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswalnum | | | | | | iswalpha | | | | | | iswlower | | | | | | iswupper | | | | | | iswdigit | | | | | | iswxdigit | | | | | | wctype | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iswblank(C++11) | | | | | | iswctype | | | | | | iswcntrl | | | | | | iswgraph | | | | | | iswspace | | | | | | iswprint | | | | | | iswpunct | | | | | |
| Character manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | towlower | | | | | | towupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | towctrans | | | | | | wctrans | | | | | |
| Conversions to numeric formats | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstolwcstoll(C++11) | | | | | | ****wcstofwcstodwcstold****(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstoulwcstoull(C++11) | | | | | | wcstoimaxwcstouimax(C++11)(C++11) | | | | | |  | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcslen | | | | | | wcscmp | | | | | | wcscoll | | | | | | wcsncmp | | | | | | wcschr | | | | | | wcsrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcspbrk | | | | | | wcsspn | | | | | | wcscspn | | | | | | wcsstr | | | | | | wcstok | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscpy | | | | | | wcsncpy | | | | | | wcsxfrm | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscat | | | | | | wcsncat | | | | | |  | | | | | |
| Array manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcpy | | | | | | wmemmove | | | | | | wmemcmp | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemchr | | | | | | wmemset | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Types | | | | | | wctrans_t | | | | | | wctype_t | | | | | | wint_t | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Macros | | | | | | WCHAR_MIN WCHAR_MAX WEOF | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| float       wcstof( const wchar_t\* str, wchar_t\*\* str_end ); |  | (since C++11) |
| double      wcstod( const wchar_t\* str, wchar_t\*\* str_end ); |  |  |
| long double wcstold( const wchar_t\* str, wchar_t\*\* str_end ); |  | (since C++11) |
|  |  |  |

Interprets a floating point value in a wide string pointed to by str.

Function discards any whitespace characters (as determined by std::iswspace) until first non-whitespace character is found. Then it takes as many characters as possible to form a valid floating-point representation and converts them to a floating-point value. The valid floating-point value can be one of the following:

- decimal floating-point expression. It consists of the following parts:

:   - (optional) plus or minus sign
    - nonempty sequence of decimal digits optionally containing decimal-point character (as determined by the current C locale) (defines significand)
    - (optional) `e` or `E` followed with optional minus or plus sign and nonempty sequence of decimal digits (defines exponent to base 10)

|  |  |
| --- | --- |
| - hexadecimal floating-point expression. It consists of the following parts:   - (optional) plus or minus sign - `0x` or `0X` - nonempty sequence of hexadecimal digits optionally containing a decimal-point character (as determined by the current C locale) (defines significand) - (optional) `p` or `P` followed with optional minus or plus sign and nonempty sequence of decimal digits (defines exponent to base 2)   - infinity expression. It consists of the following parts:   - (optional) plus or minus sign - `INF` or `INFINITY` ignoring case   - not-a-number expression. It consists of the following parts:   - (optional) plus or minus sign - `NAN` or `NAN(`**char_sequence**`)` ignoring case of the `NAN` part. **char_sequence** can only contain digits, Latin letters, and underscores. The result is a quiet NaN floating-point value. | (since C++11) |

- any other expression that may be accepted by the currently installed C locale

The functions sets the pointer pointed to by str_end to point to the wide character past the last character interpreted. If str_end is a null pointer, it is ignored.

### Parameters

|  |  |  |
| --- | --- | --- |
| str | - | pointer to the null-terminated wide string to be interpreted |
| str_end | - | pointer to a pointer to a wide character |

### Return value

Floating point value corresponding to the contents of str on success. If the converted value falls out of range of corresponding return type, range error occurs and HUGE_VAL, HUGE_VALF or HUGE_VALL is returned. If no conversion can be performed, ​0​ is returned.

### Example

Run this code

```
#include <cerrno>
#include <clocale>
#include <cwchar>
#include <iostream>
#include <string>
 
int main()
{
    const wchar_t* p = L"111.11 -2.22 0X1.BC70A3D70A3D7P+6 -Inf 1.18973e+4932zzz";
    wchar_t* end;
    std::wcout << "Parsing L\"" << p << "\":\n";
    for (double f = std::wcstod(p, &end); p != end; f = std::wcstod(p, &end))
    {
        std::wcout << "  '" << std::wstring(p, end-p) << "' -> ";
        p = end;
        if (errno == ERANGE)
        {
            std::wcout << "range error, got ";
            errno = 0;
        }
        std::wcout << f << '\n';
    }
 
    if (std::setlocale(LC_NUMERIC, "de_DE.utf8"))
    {
        std::wcout << L"With de_DE.utf8 locale:\n";
        std::wcout << L"  '123.45' -> " << std::wcstod(L"123.45", 0) << L'\n';
        std::wcout << L"  '123,45' -> " << std::wcstod(L"123,45", 0) << L'\n';
    }
}

```

Output:

```
Parsing L"111.11 -2.22 0X1.BC70A3D70A3D7P+6 -Inf 1.18973e+4932zzz":
  '111.11' -> 111.11
  ' -2.22' -> -2.22
  ' 0X1.BC70A3D70A3D7P+6' -> 111.11
  ' -Inf' -> -inf
  ' 1.18973e+4932' -> range error, got inf
With de_DE.utf8 locale:
  '123.45' -> 123
  '123,45' -> 123.45

```

### See also

|  |  |
| --- | --- |
| strtofstrtodstrtold | converts a byte string to a floating-point value   (function) |
| C documentation for wcstof | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/wide/wcstof&oldid=153119>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 June 2023, at 10:26.