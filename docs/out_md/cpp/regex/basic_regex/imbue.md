# std::basic_regex<CharT,Traits>::imbue

From cppreference.com
< cpp‎ | regex‎ | basic regex
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

Regular expressions library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| basic_regex(C++11) | | | | |
| sub_match(C++11) | | | | |
| match_results(C++11) | | | | |
| Algorithms | | | | |
| regex_match(C++11) | | | | |
| regex_search(C++11) | | | | |
| regex_replace(C++11) | | | | |
| Iterators | | | | |
| regex_iterator(C++11) | | | | |
| regex_token_iterator(C++11) | | | | |
| Exceptions | | | | |
| regex_error(C++11) | | | | |
| Traits | | | | |
| regex_traits(C++11) | | | | |
| Constants | | | | |
| syntax_option_type(C++11) | | | | |
| match_flag_type(C++11) | | | | |
| error_type(C++11) | | | | |
| Regex Grammar | | | | |
| Modified ECMAScript-262(C++11) | | | | |

std::basic_regex

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member Functions | | | | |
| basic_regex::basic_regex | | | | |
| basic_regex::~basic_regex | | | | |
| basic_regex::operator= | | | | |
| basic_regex::assign | | | | |
| Observers | | | | |
| basic_regex::mark_count | | | | |
| basic_regex::flags | | | | |
| Locale | | | | |
| basic_regex::getloc | | | | |
| ****basic_regex::imbue**** | | | | |
| Modifiers | | | | |
| basic_regex::swap | | | | |
| Constants | | | | |
| Non-member Functions | | | | |
| swap(std::basic_regex) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| locale_type imbue( locale_type loc ); |  | (since C++11) |
|  |  |  |

Replaces the current locale with loc. The regular expression does not match any character sequence after the call.

Effectively calls traits_i.imbue(loc) where `traits_i` is a default initialized instance of the type `Traits` stored within the regular expression object.

### Parameters

|  |  |  |
| --- | --- | --- |
| loc | - | new locale to use |

### Return value

The locale before the call to this function. Effectively returns the result of expression traits_i.imbue(loc).

### Exceptions

May throw implementation-defined exceptions.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| getloc | get locale information   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex/imbue&oldid=161001>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 October 2023, at 22:56.