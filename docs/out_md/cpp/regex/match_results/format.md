# std::match_results<BidirIt,Alloc>::format

From cppreference.com
< cpp‎ | regex‎ | match results
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

std::match_results

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
| [match_results::operator[]](operator_at.html "cpp/regex/match results/operator at") | | | | |
| match_results::prefix | | | | |
| match_results::suffix | | | | |
| Iterators | | | | |
| match_results::beginmatch_results::cbegin | | | | |
| match_results::endmatch_results::cend | | | | |
| Format | | | | |
| ****match_results::format**** | | | | |
| Modifiers | | | | |
| match_results::swap | | | | |
| Non-member functions | | | | |
| operator==operator!=(until C++20) | | | | |
| swap(std::match_results) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class OutputIt >  OutputIt format( OutputIt out,                   const char_type\* fmt_first, const char_type\* fmt_last,                   std::regex_constants::match_flag_type flags = std::regex_constants::format_default ) const; | (1) | (since C++11) |
| template< class OutputIt, class ST, class SA >  OutputIt format( OutputIt out,                   const basic_string<char_type,ST,SA>& fmt,                   std::regex_constants::match_flag_type flags = std::regex_constants::format_default ) const; | (2) | (since C++11) |
| template< class ST, class SA >  std::basic_string<char_type,ST,SA>       format( const std::basic_string<char_type,ST,SA>& fmt,              std::regex_constants::match_flag_type flags = std::regex_constants::format_default ) const; | (3) | (since C++11) |
| string_type format( const char_type\* fmt_s,  std::regex_constants::match_flag_type flags = std::regex_constants::format_default ) const; | (4) | (since C++11) |
|  |  |  |

`format` outputs a format string, replacing any format specifiers or escape sequences in that string with match data from \*this.

1) The format character sequence is defined by the range ``fmt_first`,`fmt_last`)`. The resulting character sequence is copied to out.2) The format character sequence is defined by the characters in fmt. The resulting character sequence is copied to out.3,4) The format character sequence is defined by the characters in fmt and fmt_s respectively. The resulting character sequence is copied to a newly constructed [std::basic_string, which is returned.

The flags bitmask determines which format specifiers and escape sequences are recognized.

The behavior of `format` is undefined if ready() != true.

### Parameters

|  |  |  |
| --- | --- | --- |
| fmt_begin, fmt_end | - | pointers to a range of characters defining the format character sequence |
| fmt | - | std::basic_string defining the format character sequence |
| fmt_s | - | pointer to a null-terminated character string defining the format character sequence |
| out | - | iterator that the resulting character sequence is copied to |
| flags | - | std::regex_constants::match_flag_type bitmask specifying which format specifiers and escape sequences are recognized |
| Type requirements | | |
| -`OutputIt` must meet the requirements of LegacyOutputIterator. | | |

### Return value

1,2) out3,4) The newly constructed string containing resulting character sequence.

### Exceptions

May throw implementation-defined exceptions.

### Example

Run this code

```
#include <iostream>
#include <regex>
#include <string>
 
int main()
{
    std::string s = "for a good time, call 867-5309";
    std::regex phone_regex("\\d{3}-\\d{4}");
    std::smatch phone_match;
 
    if (std::regex_search(s, phone_match, phone_regex))
    {
        std::string fmt_s = phone_match.format(
            "$`"   // $` means characters before the match
            "[$&]" // $& means the matched characters
            "$'"); // $' means characters following the match
        std::cout << fmt_s << '\n';
    }   
}

```

Output:

```
for a good time, call [867-5309]

```

### See also

|  |  |
| --- | --- |
| regex_replace(C++11) | replaces occurrences of a regular expression with formatted replacement text   (function template) |
| match_flag_type(C++11) | options specific to matching   (typedef) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/match_results/format&oldid=161010>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 October 2023, at 23:19.