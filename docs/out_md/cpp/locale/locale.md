# std::locale

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Locales and facets | | | | | | Locales | | | | | | has_facet | | | | | | use_facet | | | | | | ****locale**** | | | | | | Facet category base classes | | | | | | ctype_base | | | | | | codecvt_base | | | | | | messages_base | | | | | | time_base | | | | | | money_base | | | | | | ctype facets | | | | | | ctype | | | | | | ctype<char> | | | | | | ctype_byname | | | | | | codecvt | | | | | | codecvt_byname | | | | | | numeric facets | | | | | | num_get | | | | | | num_put | | | | | | numpunct | | | | | | numpunct_byname | | | | | | collate facets | | | | | | collate | | | | | | collate_byname | | | | | | time facets | | | | | | time_get | | | | | | time_put | | | | | | time_get_byname | | | | | | time_put_byname | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | monetary facets | | | | | | money_get | | | | | | money_put | | | | | | moneypunct | | | | | | moneypunct_byname | | | | | | messages facets | | | | | | messages | | | | | | messages_byname | | | | | | Character classification and conversion | | | | | | Character classification | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isspace | | | | | | iscntrl | | | | | | isupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | islower | | | | | | isalpha | | | | | | ispunct | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isdigit | | | | | | isxdigit | | | | | | isalnum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | isblank(C++11) | | | | | | isprint | | | | | | isgraph | | | | | | | | Character conversions | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | toupper | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tolower | | | | | | | | String and stream conversions | | | | | | wstring_convert(C++11/17/26\*) | | | | | | wbuffer_convert(C++11/17/26\*) | | | | | | Unicode conversion facets | | | | | | codecvt_utf8(C++11/17/26\*) | | | | | | codecvt_utf16(C++11/17/26\*) | | | | | | codecvt_utf8_utf16(C++11/17/26\*) | | | | | | codecvt_mode(C++11/17/26\*) | | | | | | C library locales | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | LC_ALLLC_COLLATELC_CTYPELC_MONETARYLC_NUMERICLC_TIME | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | setlocale | | | | | | localeconv | | | | | | lconv | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

****std::locale****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| locale::id | | | | |
| locale::facet | | | | |
| Member functions | | | | |
| locale::locale | | | | |
| locale::~locale | | | | |
| locale::operator= | | | | |
| locale::combine | | | | |
| locale::name | | | | |
| locale::encoding(C++26) | | | | |
| locale::operator==locale::operator!=(until C++20) | | | | |
| locale::operator()") | | | | |
| Static member functions | | | | |
| locale::global | | | | |
| locale::classic | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<locale>` |  |  |
| class locale; |  |  |
|  |  |  |

An object of class `std::locale` is an immutable indexed set of immutable facets. Each stream object of the C++ input/output library is associated with an `std::locale` object and uses its facets for parsing and formatting of all data. In addition, a locale object is associated with each std::basic_regex object.(since C++11) Locale objects can also be used as predicates that perform string collation with the standard containers and algorithms and can be accessed directly to obtain or modify the facets they hold.

Each locale constructed in a C++ program holds at least the following standard facets (i.e. std::has_facet returns true for all these facet types), but a program may define additional specializations or completely new facets and add them to any existing locale object.

| Supported facets | |
| --- | --- |
| std::ctype<char> std::ctype<wchar_t> | std::codecvt<char, char, std::mbstate_t> std::codecvt<wchar_t, char, std::mbstate_t> |
| std::num_get<char> std::num_get<wchar_t> | std::numpunct<char> std::numpunct<wchar_t> |
| std::num_put<char> std::num_put<wchar_t> |
| std::money_get<char> std::money_get<wchar_t> | std::moneypunct<char> std::moneypunct<char, true> std::moneypunct<wchar_t> std::moneypunct<wchar_t, true> |
| std::money_put<char> std::money_put<wchar_t> |
| std::time_get<char> std::time_get<wchar_t> | std::collate<char> std::collate<wchar_t> |
| std::time_put<char> std::time_put<wchar_t> | std::messages<char> std::messages<wchar_t> |
| Deprecated facets | |
| std::codecvt<char16_t, char, std::mbstate_t> (since C++11)(deprecated in C++20) std::codecvt<char32_t, char, std::mbstate_t> (since C++11)(deprecated in C++20) std::codecvt<char16_t, char8_t, std::mbstate_t> (since C++20)(deprecated) std::codecvt<char32_t, char8_t, std::mbstate_t> (since C++20)(deprecated) | |

Internally, a locale object is implemented as if it is a reference-counted pointer to an array (indexed by std::locale::id) of reference-counted pointers to facets: copying a locale only copies one pointer and increments several reference counts. To maintain the standard C++ library thread safety guarantees (operations on different objects are always thread-safe), both the locale reference count and each facet reference count are updated in a thread-safe manner, similar to std::shared_ptr.

### Member types

|  |  |
| --- | --- |
| Type | Description |
| id | the facet index type: each facet class must declare or inherit a public static member of this type   (class) |
| facet | the base class for all facet categories: each facet of any category is derived from this type   (class) |
| category | int   (typedef) |

### Member constants

|  |  |
| --- | --- |
| Name | Explanation |
| const category none[static] | a zero value indicating no facet category   (public static member constant) |
| const category collate[static] | a bitmask value indicating the collate facet category   (public static member constant) |
| const category ctype[static] | a bitmask value indicating the ctype facet category   (public static member constant) |
| const category monetary[static] | a bitmask value indicating the monetary facet category   (public static member constant) |
| const category numeric[static] | a bitmask value indicating the numeric facet category   (public static member constant) |
| const category time[static] | a bitmask value indicating the time facet category   (public static member constant) |
| const category messages[static] | a bitmask value indicating the messages facet category   (public static member constant) |
| const category all[static] | collate | ctype | monetary | numeric | time | messages   (public static member constant) |

`std::locale` member functions expecting a `category` argument require one of the category values defined above, or the union of two or more such values. The `LC` constants are not accepted.

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new locale   (public member function) |
| (destructor) | destructs the locale and the facets whose reference count becomes zero   (public member function) |
| operator= | replaces a locale   (public member function) |
| combine | constructs a locale with compile-time identified facet copied from another locale   (public member function) |
| name | returns the name of the locale or "\*" if unnamed   (public member function) |
| encoding(C++26) | returns the character encoding scheme associated with the locale   (public member function) |
| operator==operator!=(removed in C++20) | equality comparison between locale objects   (public member function) |
| operator()") | lexicographically compares two strings using this locale's collate facet   (public member function) |
| global[static] | changes the global locale   (public static member function) |
| classic[static] | obtains a reference to the "C" locale   (public static member function) |

### Example

Demonstrates the typical prologue of a locale-sensitive program (cross-platform).

Run this code

```
#include <iostream>
#include <locale>
 
int main()
{
    std::wcout << L"User-preferred locale setting is "
               << std::locale("").name().c_str() << L'\n';
    // on startup, the global locale is the "C" locale
    std::wcout << 1000.01 << L'\n';
 
    // replace the C++ global locale and the "C" locale with the user-preferred locale
    std::locale::global(std::locale(""));
    // use the new global locale for future wide character output
    std::wcout.imbue(std::locale());
 
    // output the same number again
    std::wcout << 1000.01 << L'\n';
}

```

Possible output:

```
User-preferred locale setting is en_US.UTF8
1000.01
1,000.01

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 340 | C++98 | the set of standard facets that all locales need to hold was unclear | made clear |
| LWG 347 | C++98 | parameters of type `category` could accept `LC` constants | not accepted anymore |

### See also

|  |  |
| --- | --- |
| text_encoding(C++26) | describes an interface for accessing the IANA Character Sets registry   (class) |
| use_facet | obtains a facet from a locale   (function template) |
| has_facet | checks if a locale implements a specific facet   (function template) |
| imbue | sets locale   (public member function of `std::ios_base`) |
| getloc | returns current locale   (public member function of `std::ios_base`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/locale/locale&oldid=179110>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 January 2025, at 22:14.