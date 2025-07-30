# std::regex_search

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
| match_results(C++11) | | | | |
| Algorithms | | | | |
| regex_match(C++11) | | | | |
| ****regex_search****(C++11) | | | | |
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

|  |  |  |
| --- | --- | --- |
| Defined in header `<regex>` |  |  |
| template< class BidirIt, class Alloc, class CharT, class Traits >  bool regex_search( BidirIt first, BidirIt last,                     std::match_results<BidirIt, Alloc>& m,                     const std::basic_regex<CharT, Traits>& e,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (1) | (since C++11) |
| template< class BidirIt, class CharT, class Traits >  bool regex_search( BidirIt first, BidirIt last,                     const std::basic_regex<CharT, Traits>& e,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (2) | (since C++11) |
| template< class CharT, class Alloc, class Traits >  bool regex_search( const CharT\* str,                     std::match_results<const CharT\*, Alloc>& m,                     const std::basic_regex<CharT, Traits>& e,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (3) | (since C++11) |
| template< class CharT, class Traits >  bool regex_search( const CharT\* str, const std::basic_regex<CharT, Traits>& e,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (4) | (since C++11) |
| template< class STraits, class SAlloc, class Alloc,  class CharT, class Traits >  bool regex_search      ( const std::basic_string<CharT, STraits, SAlloc>& s,        std::match_results            <typename std::basic_string<CharT, STraits, SAlloc>::const_iterator,             Alloc>& m,        const std::basic_regex<CharT, Traits>& e,        std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (5) | (since C++11) |
| template< class STraits, class SAlloc, class CharT, class Traits >  bool regex_search( const std::basic_string<CharT, STraits, SAlloc>& s,                     const std::basic_regex<CharT, Traits>& e,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (6) | (since C++11) |
| template< class STraits, class SAlloc, class Alloc,  class CharT, class Traits >  bool regex_search      ( const std::basic_string<CharT, STraits, SAlloc>&&,        std::match_results            <typename std::basic_string<CharT, STraits, SAlloc>::const_iterator,             Alloc>&,        const std::basic_regex<CharT, Traits>&,        std::regex_constants::match_flag_type flags = std::regex_constants::match_default ) = delete; | (7) | (since C++11) |
|  |  |  |

Determines if there is a match between the regular expression e and some subsequence in the target character sequence. The detailed match result is stored in m (if present).

1,2) The target character sequence is represented by the range ``first`,`last`)`.

|  |  |
| --- | --- |
| If `BidirIt` does not satisfy the requirements of [LegacyBidirectionalIterator, the behavior is undefined. | (until C++23) |
| If `BidirIt` does not model `bidirectional_iterator`, the behavior is undefined. | (since C++23) |

3,4) The target character sequence is represented by the range ``str`,`str + [std::char_traits<CharT>::length(str)`)`.5,6) The target character sequence is represented by the string s.7) The target character sequence cannot be represented by a std::string rvalue.

If a match does not exist, the following expressions involving m (if exists) should yield the specified values:

| Expression | Value |
| --- | --- |
| m.ready() | true |
| m.size() | ​0​ |
| m.empty() | true |

If a match exists, given any integer in `(`​0`,`m.size()`)` as n, the following expressions involving m should yield the specified values for each overload listed below:

| Expression | Value | | |
| --- | --- | --- | --- |
| Overload (1) | Overload (3) | Overload (5) |
| m.ready() | true | | |
| m.size() | 1 + e.mark_count() | | |
| m.empty() | false | | |
| m.prefix().first | first | str | s.begin() |
| m.prefix().second | m[0].first | | |
| m.prefix().matched | m.prefix().first != m.prefix().second | | |
| m.suffix().first | m[0].second | | |
| m.suffix().second | last | std::char_traits<CharT>::     length(str) + str | s.end() |
| m.suffix().matched | m.suffix().first != m.suffix().second | | |
| m[[0]](match_results/operator_at.html "cpp/regex/match results/operator at").first | the start of the sequence that matched e | | |
| m[[0]](match_results/operator_at.html "cpp/regex/match results/operator at").second | the end of the sequence that matched e | | |
| m[[0]](match_results/operator_at.html "cpp/regex/match results/operator at").matched | true | | |
| m[[n]](match_results/operator_at.html "cpp/regex/match results/operator at").first | - last if marked sub-expression n did not participate in the match - the start of the sequence otherwise matching sub-expression n otherwise | | |
| m[[n]](match_results/operator_at.html "cpp/regex/match results/operator at").second | - last if marked sub-expression n did not participate in the match - the end of the sequence otherwise matching sub-expression n otherwise | | |
| m[[n]](match_results/operator_at.html "cpp/regex/match results/operator at").matched | - false if marked sub-expression n did not participate in the match - true otherwise | | |

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | the target character range |
| str | - | the target null-terminated C-style string |
| s | - | the target std::basic_string |
| m | - | the match results |
| e | - | the regular expression |
| flags | - | flags used to determine how the match will be performed |

### Return value

Returns true if a match exists, false otherwise.

### Notes

In order to examine all matches within the target sequence, `std::regex_search` may be called in a loop, restarting each time from m[0].second of the previous call. std::regex_iterator offers an easy interface to this iteration.

### Example

Run this code

```
#include <cstddef>
#include <iostream>
#include <regex>
#include <string>
 
int main()
{
    std::string lines[] = {"Roses are #ff0000",
                           "violets are #0000ff",
                           "all of my base are belong to you"};
 
    std::regex color_regex("#([a-f0-9]{2})"
                            "([a-f0-9]{2})"
                            "([a-f0-9]{2})");
 
    // simple match
    for (const auto& line : lines)
        std::cout << line << ": " << std::boolalpha
                  << std::regex_search(line, color_regex) << '\n';
    std::cout << '\n';
 
    // show contents of marked subexpressions within each match
    std::smatch color_match;
    for (const auto& line : lines)
        if (std::regex_search(line, color_match, color_regex))
        {
            std::cout << "matches for '" << line << "'\n";
            std::cout << "Prefix: '" << color_match.prefix() << "'\n";
            for (std::size_t i = 0; i < color_match.size(); ++i) 
                std::cout << i << ": " << color_match[i] << '\n';
            std::cout << "Suffix: '" << color_match.suffix() << "\'\n\n";
        }
 
    // repeated search (see also std::regex_iterator)
    std::string log(R"(
        Speed:	366
        Mass:	35
        Speed:	378
        Mass:	32
        Speed:	400
	Mass:	30)");
    std::regex r(R"(Speed:\t\d*)");
    for (std::smatch sm; regex_search(log, sm, r);)
    {
        std::cout << sm.str() << '\n';
        log = sm.suffix();
    }
 
    // C-style string demo
    std::cmatch cm;
    if (std::regex_search("this is a test", cm, std::regex("test"))) 
        std::cout << "\nFound " << cm[0] << " at position "
                  << cm.prefix().length() << '\n';
}

```

Output:

```
Roses are #ff0000: true
violets are #0000ff: true
all of my base are belong to you: false
 
matches for 'Roses are #ff0000'
Prefix: 'Roses are '
0: #ff0000
1: ff
2: 00
3: 00
Suffix: ''
 
matches for 'violets are #0000ff'
Prefix: 'violets are '
0: #0000ff
1: 00
2: 00
3: ff
Suffix: ''
 
Speed:	366
Speed:	378
Speed:	400
 
Found test at position 10

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2205 | C++11 | n could be zero in the postcondition | can only be positive |
| LWG 2329 | C++11 | overload (5) accepted `basic_string` rvalues, which could result in dangling iterators | rejected via deleted overload (7) |

### See also

|  |  |
| --- | --- |
| basic_regex(C++11) | regular expression object   (class template) |
| match_results(C++11) | identifies one regular expression match, including all sub-expression matches   (class template) |
| regex_match(C++11) | attempts to match a regular expression to an entire character sequence   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_search&oldid=177667>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 November 2024, at 21:38.