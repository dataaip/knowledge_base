# std::ctype

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ****ctype**** | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

****std::ctype****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ctype::ctype | | | | |
| ctype::~ctype | | | | |
| ctype::isctype::do_is | | | | |
| ctype::scan_isctype::do_scan_is | | | | |
| ctype::scan_notctype::do_scan_not | | | | |
| ctype::toupperctype::do_toupper | | | | |
| ctype::tolowerctype::do_tolower | | | | |
| ctype::widenctype::do_widen | | | | |
| ctype::narrowctype::do_narrow | | | | |
| Member functions of ctype<char> | | | | |
| ctype<char>::ctype | | | | |
| ctype<char>::~ctype | | | | |
| ctype<char>::table | | | | |
| ctype<char>::classic_table | | | | |
| ctype<char>::is | | | | |
| ctype<char>::scan_is | | | | |
| ctype<char>::scan_not | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| template< class CharT >  class ctype; |  |  |
|  |  |  |

Class `ctype` encapsulates character classification features. All stream input operations performed through std::basic_istream<CharT> use the `std::ctype<CharT>` of the locale imbued in the stream to identify whitespace characters for input tokenization. Stream output operations apply `std::ctype<CharT>::widen()` to narrow-character arguments prior to output.

!std-ctype-inheritance.svg

Inheritance diagram

### Specializations

The standard library is guaranteed to provide the following specializations (they are required to be implemented by any locale object):

|  |  |
| --- | --- |
| Defined in header `<locale>` | |
| `std::ctype<char>` | provides narrow character equivalents of the minimal "C" locale classification. This specialization uses table lookup for character classification |
| std::ctype<wchar_t> | provides wide character classification appropriate to the native character set |

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `char_type` | `CharT` |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| std::locale::id `id` [static] | the identifier of the facet |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `ctype` facet   (public member function) |
| (destructor) | destructs a `ctype` facet   (protected member function) |
| is | invokes `do_is`   (public member function) |
| scan_is | invokes `do_scan_is`   (public member function) |
| scan_not | invokes `do_scan_not`   (public member function) |
| toupper | invokes `do_toupper`   (public member function) |
| tolower | invokes `do_tolower`   (public member function) |
| widen | invokes `do_widen`   (public member function) |
| narrow | invokes `do_narrow`   (public member function) |

### Protected member functions

|  |  |
| --- | --- |
| do_is[virtual] | classifies a character or a character sequence   (virtual protected member function) |
| do_scan_is[virtual] | locates the first character in a sequence that conforms to given classification   (virtual protected member function) |
| do_scan_not[virtual] | locates the first character in a sequence that fails given classification   (virtual protected member function) |
| do_toupper[virtual] | converts a character or characters to uppercase   (virtual protected member function) |
| do_tolower[virtual] | converts a character or characters to lowercase   (virtual protected member function) |
| do_widen[virtual] | converts a character or characters from char to `CharT`   (virtual protected member function) |
| do_narrow[virtual] | converts a character or characters from `CharT` to char   (virtual protected member function) |

## Inherited from std::ctype_base

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `mask` | unspecified BitmaskType type (enumeration, integer type, or bitset) |

### Member constants

|  |  |
| --- | --- |
| space[static] | the value of `mask` identifying whitespace character classification   (public static member constant) |
| print[static] | the value of `mask` identifying printable character classification   (public static member constant) |
| cntrl[static] | the value of `mask` identifying control character classification   (public static member constant) |
| upper[static] | the value of `mask` identifying uppercase character classification   (public static member constant) |
| lower[static] | the value of `mask` identifying lowercase character classification   (public static member constant) |
| alpha[static] | the value of `mask` identifying alphabetic character classification   (public static member constant) |
| digit[static] | the value of `mask` identifying digit character classification   (public static member constant) |
| punct[static] | the value of `mask` identifying punctuation character classification   (public static member constant) |
| xdigit[static] | the value of `mask` identifying hexadecimal digit character classification   (public static member constant) |
| blank[static] (C++11) | the value of `mask` identifying blank character classification   (public static member constant) |
| alnum[static] | alpha | digit   (public static member constant) |
| graph[static] | alnum | punct   (public static member constant) |

### Example

The following example demonstrates modification of a `ctype` other than `ctype<char>` to tokenize a CSV file:

Run this code

```
#include <iostream>
#include <locale>
#include <sstream>
 
struct csv_whitespace : std::ctype<wchar_t>
{
    bool do_is(mask m, char_type c) const
    {
        if ((m & space) && c == L' ')
            return false; // space will NOT be classified as whitespace
 
        if ((m & space) && c == L',')
            return true; // comma will be classified as whitespace
 
        return ctype::do_is(m, c); // leave the rest to the base class
    }
};
 
int main()
{
    std::wstring in = L"Column 1,Column 2,Column 3\n123,456,789";
    std::wstring token;
 
    std::wcout << "default locale:\n";
    std::wistringstream s1(in);
    while (s1 >> token)
        std::wcout << "  " << token << '\n';
 
    std::wcout << "locale with modified ctype:\n";
    std::wistringstream s2(in);
    csv_whitespace* my_ws = new csv_whitespace;
    s2.imbue(std::locale(s2.getloc(), my_ws));
    while (s2 >> token)
        std::wcout << "  " << token << '\n';
}

```

Output:

```
default locale:
  Column
  1,Column
  2,Column
  3
  123,456,789
locale with modified ctype:
  Column 1
  Column 2
  Column 3
  123
  456
  789

```

### See also

|  |  |
| --- | --- |
| ctype<char> | specialization of ****std::ctype**** for type char   (class template specialization) |
| ctype_base | defines character classification categories   (class) |
| ctype_byname | represents the system-supplied ****std::ctype**** for the named locale   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/ctype&oldid=177710>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 November 2024, at 00:20.