# std::ctype_byname

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ****ctype_byname**** | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| template< class CharT >  class ctype_byname : public std::ctype<CharT>; |  |  |
|  |  |  |

`std::ctype_byname` is a std::ctype facet which encapsulates character classification rules of the locale specified at its construction.

### Specializations

The standard library is guaranteed to provide the following specializations:

|  |  |
| --- | --- |
| Defined in header `<locale>` | |
| std::ctype_byname<char> | provides narrow character classification (uses table lookup for character classification) |
| std::ctype_byname<wchar_t> | provides wide character classification |

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `mask` | typename std::ctype<CharT>::mask |

### Member functions

|  |  |
| --- | --- |
| ****(constructor)**** | constructs a new `ctype_byname` facet   (public member function) |
| ****(destructor)**** | destroys a `ctype_byname` facet   (protected member function) |

## std::ctype_byname::ctype_byname

|  |  |  |
| --- | --- | --- |
| explicit ctype_byname( const char\* name, std::size_t refs = 0 ); |  |  |
| explicit ctype_byname( const std::string& name, std::size_t refs = 0 ); |  | (since C++11) |
|  |  |  |

Constructs a new `std::ctype_byname` facet for a locale with name.

refs is used for resource management: if refs == 0, the implementation destroys the facet, when the last std::locale object holding it is destroyed. Otherwise, the object is not destroyed.

### Parameters

|  |  |  |
| --- | --- | --- |
| name | - | the name of the locale |
| refs | - | the number of references that link to the facet |

## std::ctype_byname::~ctype_byname

|  |  |  |
| --- | --- | --- |
| protected:  ~ctype_byname(); |  |  |
|  |  |  |

Destroys the facet.

## Inherited from std::ctype<CharT> (only if `CharT` is not char)

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
| is | invokes `do_is`   (public member function of `std::ctype<CharT>`) |
| scan_is | invokes `do_scan_is`   (public member function of `std::ctype<CharT>`) |
| scan_not | invokes `do_scan_not`   (public member function of `std::ctype<CharT>`) |
| toupper | invokes `do_toupper`   (public member function of `std::ctype<CharT>`) |
| tolower | invokes `do_tolower`   (public member function of `std::ctype<CharT>`) |
| widen | invokes `do_widen`   (public member function of `std::ctype<CharT>`) |
| narrow | invokes `do_narrow`   (public member function of `std::ctype<CharT>`) |

### Protected member functions

|  |  |
| --- | --- |
| do_toupper[virtual] | converts a character or characters to uppercase   (virtual protected member function of `std::ctype<CharT>`) |
| do_tolower[virtual] | converts a character or characters to lowercase   (virtual protected member function of `std::ctype<CharT>`) |
| do_widen[virtual] | converts a character or characters from char to `CharT`   (virtual protected member function of `std::ctype<CharT>`) |
| do_narrow[virtual] | converts a character or characters from `CharT` to char   (virtual protected member function of `std::ctype<CharT>`) |
| do_is[virtual] | classifies a character or a character sequence   (virtual protected member function of `std::ctype<CharT>`) |
| do_scan_is[virtual] | locates the first character in a sequence that conforms to given classification   (virtual protected member function of `std::ctype<CharT>`) |
| do_scan_not[virtual] | locates the first character in a sequence that fails given classification   (virtual protected member function of `std::ctype<CharT>`) |

## Inherited from std::ctype<char> (only if `CharT` is char)

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `char_type` | char |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| std::locale::id `id` [static] | the identifier of the facet |
| const std::size_t `table_size` [static] | size of the classification table, at least 256 |

### Member functions

|  |  |
| --- | --- |
| table | obtains the character classification table   (public member function of `std::ctype<char>`) |
| classic_table[static] | obtains the "C" locale character classification table   (public static member function of `std::ctype<char>`) |
| is | classifies a character or a character sequence, using the classification table   (public member function of `std::ctype<char>`) |
| scan_is | locates the first character in a sequence that conforms to given classification, using the classification table   (public member function of `std::ctype<char>`) |
| scan_not | locates the first character in a sequence that fails given classification, using the classification table   (public member function of `std::ctype<char>`) |
| toupper | invokes `do_toupper`   (public member function of `std::ctype<CharT>`) |
| tolower | invokes `do_tolower`   (public member function of `std::ctype<CharT>`) |
| widen | invokes `do_widen`   (public member function of `std::ctype<CharT>`) |
| narrow | invokes `do_narrow`   (public member function of `std::ctype<CharT>`) |

### Protected member functions

|  |  |
| --- | --- |
| do_toupper[virtual] | converts a character or characters to uppercase   (virtual protected member function of `std::ctype<CharT>`) |
| do_tolower[virtual] | converts a character or characters to lowercase   (virtual protected member function of `std::ctype<CharT>`) |
| do_widen[virtual] | converts a character or characters from char to `CharT`   (virtual protected member function of `std::ctype<CharT>`) |
| do_narrow[virtual] | converts a character or characters from `CharT` to char   (virtual protected member function of `std::ctype<CharT>`) |

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

### Notes

std::ctype_byname<char> was incorrectly declared as an explicit specialization in the synopsis of <locale>, and the declaration was removed by the resolution of LWG issue 1298, but it remains a required specialization, just like std::ctype_byname<wchar_t>.

### Example

Run this code

```
#include <iostream>
#include <locale>
 
int main()
{
    wchar_t c = L'\u00de'; // capital letter thorn
 
    std::locale loc("C");
 
    std::cout << "isupper('Þ', C locale) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';
 
    loc = std::locale(loc, new std::ctype_byname<wchar_t>("en_US.utf8"));
 
    std::cout << "isupper('Þ', C locale with Unicode ctype) returned "
              << std::boolalpha << std::isupper(c, loc) << '\n';
}

```

Output:

```
isupper('Þ', C locale) returned false
isupper('Þ', C locale with Unicode ctype) returned true

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 16 | C++98 | the definition of the explicit specialization std::ctype_byname<char> misspecified the name and parameter list of `do_narrow` | corrected |
| LWG 616 | C++98 | the typename disambiguator was missing in the definition of `mask` | added |

### See also

|  |  |
| --- | --- |
| ctype | defines character classification tables   (class template) |
| ctype<char> | specialization of std::ctype for type char   (class template specialization) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/ctype_byname&oldid=177977>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 November 2024, at 23:38.