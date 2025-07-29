# std::sub_match

From cppreference.com
< cpp‎ | regex
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
| ****sub_match****(C++11) | | | | |
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

****std::sub_match****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| sub_match::sub_match | | | | |
| sub_match::length | | | | |
| sub_match::strsub_match::operator string_type | | | | |
| sub_match::compare | | | | |
| sub_match::swap | | | | |
| Non-member functions | | | | |
| operator==operator!=operator<<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | |
| operator<< | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<regex>` |  |  |
| template< class BidirIt >  class sub_match; |  | (since C++11) |
|  |  |  |

The class template `std::sub_match` is used by the regular expression engine to denote sequences of characters matched by marked sub-expressions.
A match is a ``begin`,`end`)` pair within the target range matched by the regular expression, but with additional observer functions to enhance code clarity.

Only the default constructor is publicly accessible. Instances of `std::sub_match` are normally constructed and populated as a part of a [std::match_results container during the processing of one of the regex algorithms.

The member functions return defined default values unless the `matched` member is true.

`std::sub_match` inherits from std::pair<BidirIt, BidirIt>, although it cannot be treated as a std::pair object because member functions such as assignment will not work as expected.

### Type requirements

|  |  |  |
| --- | --- | --- |
| -`BidirIt` must meet the requirements of LegacyBidirectionalIterator. | | |

### Specializations

Several specializations for common character sequence types are provided:

|  |  |
| --- | --- |
| Defined in header `<regex>` | |
| Type | Definition |
| `std::csub_match` | std::sub_match<const char\*> |
| `std::wcsub_match` | std::sub_match<const wchar_t\*> |
| `std::ssub_match` | std::sub_match<std::string::const_iterator> |
| `std::wssub_match` | std::sub_match<std::wstring::const_iterator> |

### Nested types

|  |  |
| --- | --- |
| Type | Definition |
| `iterator` | `BidirIt` |
| `value_type` | std::iterator_traits<BidirIt>::value_type |
| `difference_type` | std::iterator_traits<BidirIt>::difference_type |
| `string_type` | std::basic_string<value_type> |

### Data members

|  |  |
| --- | --- |
| Member | Description |
| bool `matched` | whether this match was successful   (public member object) |

## Inherited from std::pair

|  |  |
| --- | --- |
| BidirIt first | start of the match sequence   (public member object) |
| BidirIt second | one-past-the-end of the match sequence   (public member object) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs the match object   (public member function) |
| Observers | |
| length | returns the length of the match (if any)   (public member function) |
| stroperator string_type | converts to the underlying string type   (public member function) |
| compare | compares matched subsequence (if any)   (public member function) |
| Modifiers | |
| swap | swaps the contents   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) | compares a `sub_match` with another `sub_match`, a string, or a character   (function template) |
| operator<< | outputs the matched character subsequence   (function template) |

### Example

Run this code

```
#include <cassert>
#include <iostream>
#include <regex>
#include <string>
 
int main()
{
    std::string sentence{"Friday the thirteenth."};
    const std::regex re{"([A-z]+) ([a-z]+) ([a-z]+)"};
    std::smatch words;
    std::regex_search(sentence, words, re);
    std::cout << std::boolalpha;
    for (const auto& m : words)
    {
        assert(m.matched);
        std::cout << "m: [" << m << "], m.length(): " << m.length() << ", "
                     "*m.first: '" << *m.first << "', "
                     "*m.second: '" << *m.second << "'\n";
    }
}

```

Output:

```
m: [Friday the thirteenth], m.length(): 21, *m.first: 'F', *m.second: '.'
m: [Friday], m.length(): 6, *m.first: 'F', *m.second: ' '
m: [the], m.length(): 3, *m.first: 't', *m.second: ' '
m: [thirteenth], m.length(): 10, *m.first: 't', *m.second: '.'

```

### See also

|  |  |
| --- | --- |
| regex_token_iterator(C++11) | iterates through the specified sub-expressions within all regex matches in a given string or through unmatched substrings   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match&oldid=178384>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 December 2024, at 13:51.