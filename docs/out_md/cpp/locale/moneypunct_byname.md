# std::moneypunct_byname

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | ****moneypunct_byname**** | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| template< class CharT, bool Intl = false >  class moneypunct_byname : public std::moneypunct<CharT, Intl>; |  |  |
|  |  |  |

`std::moneypunct_byname` is a std::moneypunct facet which encapsulates monetary formatting preferences of a locale specified at its construction.

### Specializations

The standard library is guaranteed to provide every specialization that satisfies the following type requirements:

- `CharT` is one of char and wchar_t, and
- `Intl` is a possible specialization on a bool parameter.

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `pattern` | std::money_base::pattern |
| `string_type` | std::basic_string<CharT> |

### Member functions

|  |  |
| --- | --- |
| ****(constructor)**** | constructs a new `moneypunct_byname` facet   (public member function) |
| ****(destructor)**** | destroys a `moneypunct_byname` facet   (protected member function) |

## std::moneypunct_byname::moneypunct_byname

|  |  |  |
| --- | --- | --- |
| explicit moneypunct_byname( const char\* name, std::size_t refs = 0 ); |  |  |
| explicit moneypunct_byname( const std::string& name, std::size_t refs = 0 ); |  | (since C++11) |
|  |  |  |

Constructs a new `std::moneypunct_byname` facet for a locale with name.

refs is used for resource management: if refs == 0, the implementation destroys the facet, when the last std::locale object holding it is destroyed. Otherwise, the object is not destroyed.

### Parameters

|  |  |  |
| --- | --- | --- |
| name | - | the name of the locale |
| refs | - | the number of references that link to the facet |

## std::moneypunct_byname::~moneypunct_byname

|  |  |  |
| --- | --- | --- |
| protected:  ~moneypunct_byname(); |  |  |
|  |  |  |

Destroys the facet.

## Inherited from std::moneypunct

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `char_type` | `CharT` |
| `string_type` | std::basic_string<CharT> |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| std::locale::id `id` [static] | the identifier of the facet |
| const bool `intl` [static] | International |

### Member functions

|  |  |
| --- | --- |
| decimal_point | invokes `do_decimal_point`   (public member function of `std::moneypunct<CharT,International>`) |
| thousands_sep | invokes `do_thousands_sep`   (public member function of `std::moneypunct<CharT,International>`) |
| grouping | invokes `do_grouping`   (public member function of `std::moneypunct<CharT,International>`) |
| curr_symbol | invokes `do_curr_symbol`   (public member function of `std::moneypunct<CharT,International>`) |
| positive_signnegative_sign | invokes `do_positive_sign` or `do_negative_sign`   (public member function of `std::moneypunct<CharT,International>`) |
| frac_digits | invokes `do_frac_digits`   (public member function of `std::moneypunct<CharT,International>`) |
| pos_formatneg_format | invokes `do_pos_format`/`do_neg_format`   (public member function of `std::moneypunct<CharT,International>`) |

### Protected member functions

|  |  |
| --- | --- |
| do_decimal_point[virtual] | provides the character to use as decimal point   (virtual protected member function of `std::moneypunct<CharT,International>`) |
| do_thousands_sep[virtual] | provides the character to use as thousands separator   (virtual protected member function of `std::moneypunct<CharT,International>`) |
| do_grouping[virtual] | provides the numbers of digits between each pair of thousands separators   (virtual protected member function of `std::moneypunct<CharT,International>`) |
| do_curr_symbol[virtual] | provides the string to use as the currency identifier   (virtual protected member function of `std::moneypunct<CharT,International>`) |
| do_positive_signdo_negative_sign[virtual] | provides the string to indicate a positive or negative value   (virtual protected member function of `std::moneypunct<CharT,International>`) |
| do_frac_digits[virtual] | provides the number of digits to display after the decimal point   (virtual protected member function of `std::moneypunct<CharT,International>`) |
| do_pos_formatdo_neg_format[virtual] | provides the formatting pattern for currency values   (virtual protected member function of `std::moneypunct<CharT,International>`) |

## Inherited from std::money_base

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| enum part { none, space, symbol, sign, value }; | unscoped enumeration type |
| struct pattern { char field[4]; }; | the monetary format type |

|  |  |
| --- | --- |
| Enumeration constant | Description |
| `none` | whitespace is permitted but not required except in the last position, where whitespace is not permitted |
| `space` | one or more whitespace characters are required |
| `symbol` | the sequence of characters returned by std::moneypunct::curr_symbol is required |
| `sign` | the first of the characters returned by std::moneypunct::positive_sign or std::moneypunct::negative_sign is required |
| `value` | the absolute numeric monetary value is required |

### Example

This example demonstrates how to apply monetary formatting rules of another language without changing the rest of the locale.

Run this code

```
#include <iomanip>
#include <iostream>
#include <locale>
 
int main()
{
    long double mon = 1234567;
    std::locale::global(std::locale("en_US.utf8"));
    std::wcout.imbue(std::locale());
    std::wcout << L"american locale: " << std::showbase
               << std::put_money(mon) << '\n';
    std::wcout.imbue(std::locale(std::wcout.getloc(),
                                 new std::moneypunct_byname<wchar_t>("ru_RU.utf8")));
    std::wcout << L"american locale with russian moneypunct: "
               << std::put_money(mon) << '\n';
}

```

Output:

```
american locale: $12,345.67
american locale with russian moneypunct: 12 345.67 руб

```

### See also

|  |  |
| --- | --- |
| moneypunct | defines monetary formatting parameters used by std::money_get and std::money_put   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/moneypunct_byname&oldid=178037>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 26 November 2024, at 18:22.