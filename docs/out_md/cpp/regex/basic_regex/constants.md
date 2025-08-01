# std::basic_regex constants

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
| basic_regex::imbue | | | | |
| Modifiers | | | | |
| basic_regex::swap | | | | |
| ****Constants**** | | | | |
| Non-member Functions | | | | |
| swap(std::basic_regex) | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<regex>` |  |  |
| static constexpr std::regex_constants::syntax_option_type icase =  std::regex_constants::icase;  static constexpr std::regex_constants::syntax_option_type nosubs =      std::regex_constants::nosubs;  static constexpr std::regex_constants::syntax_option_type optimize =      std::regex_constants::optimize;  static constexpr std::regex_constants::syntax_option_type collate =      std::regex_constants::collate;  static constexpr std::regex_constants::syntax_option_type ECMAScript =      std::regex_constants::ECMAScript;  static constexpr std::regex_constants::syntax_option_type basic =      std::regex_constants::basic;  static constexpr std::regex_constants::syntax_option_type extended =      std::regex_constants::extended;  static constexpr std::regex_constants::syntax_option_type awk =      std::regex_constants::awk;  static constexpr std::regex_constants::syntax_option_type grep =      std::regex_constants::grep;  static constexpr std::regex_constants::syntax_option_type egrep = std::regex_constants::egrep; |  |  |
| static constexpr std::regex_constants::syntax_option_type multiline =      std::regex_constants::multiline; |  | (since C++17) |
|  |  |  |

std::basic_regex defines several constants that govern general regex matching syntax.

These constants are duplicated from std::regex_constants:

|  |  |
| --- | --- |
| Grammar option | Effect(s) |
| `ECMAScript` | Use the Modified ECMAScript regular expression grammar. |
| `basic` | Use the basic POSIX regular expression grammar (grammar documentation). |
| `extended` | Use the extended POSIX regular expression grammar (grammar documentation). |
| `awk` | Use the regular expression grammar used by the **awk** utility in POSIX (grammar documentation). |
| `grep` | Use the regular expression grammar used by the **grep** utility in POSIX. This is effectively the same as the `basic` option with the addition of newline '\n' as an alternation separator. |
| `egrep` | Use the regular expression grammar used by the **grep** utility, with the **-E** option, in POSIX. This is effectively the same as the `extended` option with the addition of newline '\n' as an alternation separator in addition to '|'. |
| Grammar variation | Effect(s) |
| `icase` | Character matching should be performed without regard to case. |
| `nosubs` | When performing matches, all marked sub-expressions `(expr)` are treated as non-marking sub-expressions `(?:expr)`. No matches are stored in the supplied std::regex_match structure and mark_count() is zero. |
| `optimize` | Instructs the regular expression engine to make matching faster, with the potential cost of making construction slower. For example, this might mean converting a non-deterministic FSA to a deterministic FSA. |
| `collate` | Character ranges of the form **"[a-b]"** will be locale sensitive. |
| `multiline` (C++17) | Specifies that `^` shall match the beginning of a line and `$` shall match the end of a line, if the ECMAScript engine is selected. |

At most one grammar option can be chosen out of `ECMAScript`, `basic`, `extended`, `awk`, `grep`, `egrep`. If no grammar is chosen, `ECMAScript` is assumed to be selected. The other options serve as variations, such that std::regex("meow", std::regex::icase) is equivalent to std::regex("meow", std::regex::ECMAScript|std::regex::icase).

### See also

|  |  |
| --- | --- |
| syntax_option_type(C++11) | general options controlling regex behavior   (typedef) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex/constants&oldid=160998>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 October 2023, at 22:48.