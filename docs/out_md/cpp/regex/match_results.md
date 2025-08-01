# std::match_results

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
| sub_match(C++11) | | | | |
| ****match_results****(C++11) | | | | |
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

****std::match_results****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| match_results::match_results | | | | |
| match_results::~match_results | | | | |
| match_results::operator= | | | | |
| match_results::get_allocator | | | | |
| State | | | | |
| match_results::ready | | | | |
| Element access | | | | |
| match_results::size | | | | |
| match_results::max_size | | | | |
| match_results::empty | | | | |
| match_results::length | | | | |
| match_results::position | | | | |
| match_results::str | | | | |
| [match_results::operator[]](match_results/operator_at.html "cpp/regex/match results/operator at") | | | | |
| match_results::prefix | | | | |
| match_results::suffix | | | | |
| Iterators | | | | |
| match_results::beginmatch_results::cbegin | | | | |
| match_results::endmatch_results::cend | | | | |
| Format | | | | |
| match_results::format | | | | |
| Modifiers | | | | |
| match_results::swap | | | | |
| Non-member functions | | | | |
| operator==operator!=(until C++20) | | | | |
| swap(std::match_results) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<regex>` |  |  |
| template<  class BidirIt,      class Alloc = std::allocator<std::sub_match<BidirIt>> > class match_results; | (1) | (since C++11) |
| namespace pmr {  template <class BidirIt>      using match_results = std::match_results<BidirIt,                                std::pmr::polymorphic_allocator<                                    std::sub_match<BidirIt>>>; } | (2) | (since C++17) |
|  |  |  |

The class template `std::match_results` holds a collection of character sequences that represent the result of a regular expression match.

This is a specialized allocator-aware container. It can only be default created, obtained from std::regex_iterator, or modified by std::regex_search or std::regex_match. Because `std::match_results` holds std::sub_matches, each of which is a pair of iterators into the original character sequence that was matched, it's undefined behavior to examine `std::match_results` if the original character sequence was destroyed or iterators to it were invalidated for other reasons.

The first std::sub_match (index 0) contained in a `std::match_result` always represents the full match within a target sequence made by a regex, and subsequent std::sub_matches represent sub-expression matches corresponding in sequence to the left parenthesis delimiting the sub-expression in the regex.

`std::match_results` meets the requirements of a AllocatorAwareContainer and of a SequenceContainer, except that only copy assignment, move assignment, and operations defined for a constant containers are supported, and that the semantics of comparison functions are different from those required for a container.

### Type requirements

|  |  |  |
| --- | --- | --- |
| -`BidirIt` must meet the requirements of LegacyBidirectionalIterator. | | |
| -`Alloc` must meet the requirements of Allocator. | | |

### Specializations

Several specializations for common character sequence types are provided:

|  |  |
| --- | --- |
| Defined in header `<regex>` | |
| Type | Definition |
| `std::cmatch` | std::match_results<const char\*> |
| `std::wcmatch` | std::match_results<const wchar_t\*> |
| `std::smatch` | std::match_results<std::string::const_iterator> |
| `std::wsmatch` | std::match_results<std::wstring::const_iterator> |
| `std::pmr::cmatch` (C++17) | std::pmr::match_results<const char\*> |
| `std::pmr::wcmatch` (C++17) | std::pmr::match_results<const wchar_t\*> |
| `std::pmr::smatch` (C++17) | std::pmr::match_results<std::string::const_iterator> |
| `std::pmr::wsmatch` (C++17) | std::pmr::match_results<std::wstring::const_iterator> |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `allocator_type` | `Allocator` |
| `value_type` | std::sub_match<BidirIt> |
| `const_reference` | const value_type& |
| `reference` | `value_type&` |
| `const_iterator` | **implementation-defined** (depends on the underlying container) |
| `iterator` | `const_iterator` |
| `difference_type` | std::iterator_traits<BidirIt>::difference_type |
| `size_type` | std::allocator_traits<Alloc>::size_type |
| `char_type` | std::iterator_traits<BidirIt>::value_type |
| `string_type` | std::basic_string<char_type> |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs the object   (public member function) |
| (destructor) | destructs the object   (public member function) |
| operator= | assigns the contents   (public member function) |
| get_allocator | returns the associated allocator   (public member function) |
| State | |
| ready | checks if the results are available   (public member function) |
| Size | |
| empty | checks whether the match was successful   (public member function) |
| size | returns the number of matches in a fully-established result state   (public member function) |
| max_size | returns the maximum possible number of sub-matches   (public member function) |
| Element access | |
| length | returns the length of the particular sub-match   (public member function) |
| position | returns the position of the first character of the particular sub-match   (public member function) |
| str | returns the sequence of characters for the particular sub-match   (public member function) |
| [operator[]](match_results/operator_at.html "cpp/regex/match results/operator at") | returns specified sub-match   (public member function) |
| prefix | returns sub-sequence between the beginning of the target sequence and the beginning of the full match   (public member function) |
| suffix | returns sub-sequence between the end of the full match and the end of the target sequence   (public member function) |
| Iterators | |
| begincbegin | returns iterator to the beginning of the list of sub-matches   (public member function) |
| endcend | returns iterator to the end of the list of sub-matches   (public member function) |
| Format | |
| format | formats match results for output   (public member function) |
| Modifiers | |
| swap | swaps the contents   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator!=(removed in C++20) | lexicographically compares the values in the two match result   (function template) |
| std::swap(std::match_results)(C++11) | specializes the std::swap algorithm   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/match_results&oldid=167116>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 December 2023, at 06:15.