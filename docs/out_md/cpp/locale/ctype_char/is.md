# std::ctype<char>::is

From cppreference.com
< cpp‎ | locale‎ | ctype char
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | locale | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

std::ctype

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
| ****ctype<char>::is**** | | | | |
| ctype<char>::scan_is | | | | |
| ctype<char>::scan_not | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| bool is( mask m, char c ) const; | (1) |  |
| const char\* is( const char\* low, const char\* high, mask\* vec ) const; | (2) |  |
|  |  |  |

1) Checks if the character c is classified by the mask m according to the classification table returned by the member function table(). Effectively calculates table()[(unsigned char)c] & m.2) For every character in the character array `[`low`,`high`)`, reads its full classification mask from the classification table returned by the member function table() (that is, evaluates table()[(unsigned char)\*p] and stores it in the corresponding element of the array pointed to by vec.

If (unsigned char)c >= std::ctype<char>::table_size, then an implementation-defined value is substituted instead of table()[(unsigned char)c], possibly different for different values of c.

### Parameters

|  |  |  |
| --- | --- | --- |
| c | - | character to classify |
| m | - | mask to use for classifying a single character |
| low | - | pointer to the first character in an array of characters to classify |
| high | - | one past the end pointer for the array of characters to classify |
| vec | - | pointer to the first element of the array of masks to fill |

### Return value

1) true if c is classified by m in table(), false otherwise.2) high

### Notes

Unlike the primary template std::ctype, this specialization does not perform a virtual function call when classifying characters. To customize the behavior, a derived class may provide a non-default classification table to the base class constructor.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 28 | C++98 | overload (2) copied the values from vec into table(), which is the reverse of the intended behavior | corrected |

### See also

|  |  |
| --- | --- |
| do_is[virtual] | classifies a character or a character sequence   (virtual protected member function of `std::ctype<CharT>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/ctype_char/is&oldid=160073>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 October 2023, at 10:04.