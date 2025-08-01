# std::wmemcmp

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstolwcstoll(C++11) | | | | | | wcstofwcstodwcstold(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcstoulwcstoull(C++11) | | | | | | wcstoimaxwcstouimax(C++11)(C++11) | | | | | |  | | | | | |
| String manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcslen | | | | | | wcscmp | | | | | | wcscoll | | | | | | wcsncmp | | | | | | wcschr | | | | | | wcsrchr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcspbrk | | | | | | wcsspn | | | | | | wcscspn | | | | | | wcsstr | | | | | | wcstok | | | | | |  | | | | | |
| String examination | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscpy | | | | | | wcsncpy | | | | | | wcsxfrm | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wcscat | | | | | | wcsncat | | | | | |  | | | | | |
| Array manipulation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemcpy | | | | | | wmemmove | | | | | | ****wmemcmp**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | wmemchr | | | | | | wmemset | | | | | |  | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Types | | | | | | wctrans_t | | | | | | wctype_t | | | | | | wint_t | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Macros | | | | | | WCHAR_MIN WCHAR_MAX WEOF | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cwchar>` |  |  |
| int wmemcmp( const wchar_t\* lhs, const wchar_t\* rhs, std::size_t count ); |  |  |
|  |  |  |

Compares the first count wide characters of the wide character arrays pointed to by lhs and rhs. The comparison is done lexicographically.

The sign of the result is the sign of the difference between the values of the first pair of wide characters that differ in the arrays being compared.

If count is zero, the function does nothing.

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | pointers to the wide character arrays to compare |
| count | - | number of wide characters to examine |

### Return value

Negative value if the value of the first differing wide character in lhs is less than the value of the corresponding wide character in rhs: lhs precedes rhs in lexicographical order.

​0​ if all count wide characters of lhs and rhs are equal.

Positive value if the value of the first differing wide character in lhs is greater than the value of the corresponding wide character in rhs: rhs precedes lhs in lexicographical order.

### Notes

This function is not locale-sensitive and pays no attention to the values of the wchar_t objects it examines: nulls as well as invalid wide characters are compared too.

### Example

Run this code

```
#include <clocale>
#include <cwchar>
#include <iostream>
#include <locale>
#include <string>
 
void demo(const wchar_t* lhs, const wchar_t* rhs, std::size_t sz)
{
    std::wcout << std::wstring(lhs, sz);
    int rc = std::wmemcmp(lhs, rhs, sz);
    if (rc == 0)
        std::wcout << " compares equal to ";
    else if (rc < 0)
        std::wcout << " precedes ";
    else if (rc > 0)
        std::wcout << " follows ";
    std::wcout << std::wstring(rhs, sz) << " in lexicographical order\n";
}
 
int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
 
    wchar_t a1[] = {L'α',L'β',L'γ'};
    constexpr std::size_t sz = sizeof a1 / sizeof *a1;
    wchar_t a2[sz] = {L'α',L'β',L'δ'};
 
    demo(a1, a2, sz);
    demo(a2, a1, sz);
    demo(a1, a1, sz);
}

```

Possible output:

```
αβγ precedes αβδ in lexicographical order
αβδ follows αβγ in lexicographical order
αβγ compares equal to αβγ in lexicographical order

```

### See also

|  |  |
| --- | --- |
| wcscmp | compares two wide strings   (function) |
| memcmp | compares two buffers   (function) |
| wcsncmp | compares a certain amount of characters from two wide strings   (function) |
| C documentation for wmemcmp | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/wide/wmemcmp&oldid=153128>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 June 2023, at 11:14.