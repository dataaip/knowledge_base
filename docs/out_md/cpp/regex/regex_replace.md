# std::regex_replace

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
| regex_search(C++11) | | | | |
| ****regex_replace****(C++11) | | | | |
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
| template< class OutputIt, class BidirIt, class Traits, class CharT,  class STraits, class SAlloc >  OutputIt regex_replace( OutputIt out, BidirIt first, BidirIt last,                          const std::basic_regex<CharT, Traits>& re,                          const std::basic_string<CharT, STraits, SAlloc>& fmt,                          std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (1) | (since C++11) |
| template< class OutputIt, class BidirIt, class Traits, class CharT >  OutputIt regex_replace( OutputIt out, BidirIt first, BidirIt last,                          const std::basic_regex<CharT, Traits>& re,                          const CharT\* fmt,                          std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (2) | (since C++11) |
| template< class Traits, class CharT,  class STraits, class SAlloc, class FTraits, class FAlloc >  std::basic_string<CharT, STraits, SAlloc>      regex_replace( const std::basic_string<CharT, STraits, SAlloc>& str,                     const std::basic_regex<CharT, Traits>& re,                     const std::basic_string<CharT, FTraits, FAlloc>& fmt,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (3) | (since C++11) |
| template< class Traits, class CharT, class STraits, class SAlloc >  std::basic_string<CharT, STraits, SAlloc>      regex_replace( const std::basic_string<CharT, STraits, SAlloc>& str,                     const std::basic_regex<CharT, Traits>& re,                     const CharT\* fmt,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (4) | (since C++11) |
| template< class Traits, class CharT, class STraits, class SAlloc >  std::basic_string<CharT>      regex_replace( const CharT\* s, const std::basic_regex<CharT, Traits>& re,                     const std::basic_string<CharT, STraits, SAlloc>& fmt,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (5) | (since C++11) |
| template< class Traits, class CharT >  std::basic_string<CharT>      regex_replace( const CharT\* s, const std::basic_regex<CharT, Traits>& re,                     const CharT\* fmt,                     std::regex_constants::match_flag_type flags = std::regex_constants::match_default ); | (6) | (since C++11) |
|  |  |  |

`regex_replace` uses the regular expression re to perform substitution on the target character sequence:

1,2) Copies characters in the range ``first`,`last`)` to out, replacing any sequences that match re with characters formatted by fmt. Equivalent to:

```
using iter_type = std::regex_iterator<BidirIt, CharT, Traits>;
iter_type seq_begin(first, last, re, flags), seq_end;
 
using result_type = std::match_results<BidirIt>;
result_type m;
 
bool need_to_copy = (flags & std::regex_constants::format_no_copy) == 0;
bool format_all = (flags & std::regex_constants::format_first_only) != 0;
 
for (iter_type i = seq_begin; i != seq.end(); ++i)
{
    m = *i;
    if (need_to_copy)
        out = std::copy(m.prefix().first, m.prefix().second, out);
    if (format_all || i == seq_begin)
        out = /* replace-expr */
}
 
if (need_to_copy)
    out = m.ready()
              ? std::copy(m.suffix().first, m.suffix().second, out)
              : std::copy(first, last, out);
 
return out;

```

1) The expression /\* replace-expr \*/ is m.format(out, fmt, flags).2) The expression /\* replace-expr \*/ is m.format(out, fmt, fmt + [std::char_traits<CharT>::length(fmt), flags).3,4) Equivalent to std::basic_string<CharT, STraits, SAlloc> result;  
regex_replace(std::back_inserter(result),  
              str.begin(), str.end(), re, fmt, flags);  
return result;.5,6) Equivalent to std::basic_string<CharT, STraits, SAlloc> result;  
regex_replace(std::back_inserter(result),  
              s, s + std::char_traits<CharT>::length(s), re, fmt, flags);  
return result;.

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | the target character range |
| str | - | the target std::string |
| s | - | the target null-terminated C-style string |
| re | - | the regular expression |
| fmt | - | the regex replacement format string, exact syntax depends on the value of flags |
| flags | - | flags used to determine how the match will be performed |
| out | - | output iterator to store the result of the replacement |

### Return value

As described above.

### Exceptions

May throw std::regex_error to indicate an error condition.

### Example

Run this code

```
#include <iostream>
#include <iterator>
#include <regex>
#include <string>
 
int main()
{
    std::string text = "Quick brown fox";
    std::regex vowel_re("a|e|i|o|u");
 
    // write the results to an output iterator
    std::regex_replace(std::ostreambuf_iterator<char>(std::cout),
                       text.begin(), text.end(), vowel_re, "*");
 
    // construct a string holding the results
    std::cout << '\n' << std::regex_replace(text, vowel_re, "[$&]") << '\n';
}

```

Output:

```
Q**ck br*wn f*x
Q[u][i]ck br[o]wn f[o]x

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2213 | C++11 | out was not updated by the replacements | out is updated |

### See also

|  |  |
| --- | --- |
| regex_search(C++11) | attempts to match a regular expression to any part of a character sequence   (function template) |
| match_flag_type(C++11) | options specific to matching   (typedef) |
| replace | replaces specified portion of a string   (public member function of `std::basic_string<CharT,Traits,Allocator>`) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_replace&oldid=177682>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 17 November 2024, at 21:59.