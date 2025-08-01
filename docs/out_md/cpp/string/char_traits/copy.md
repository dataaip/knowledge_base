# std::char_traits<char>::copy, std::char_traits<wchar_t>::copy, std::char_traits<char8_t>::copy, std::char_traits<char16_t>::copy, std::char_traits<char32_t>::copy

From cppreference.com
< cpp‎ | string‎ | char traits
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

Strings library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| basic_string | | | | |
| basic_string_view(C++17) | | | | |
| char_traits | | | | |

std::char_traits

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| char_traits::assign | | | | |
| char_traits::eqchar_traits::lt | | | | |
| char_traits::move | | | | |
| ****char_traits::copy**** | | | | |
| char_traits::compare | | | | |
| char_traits::length | | | | |
| char_traits::find | | | | |
| char_traits::to_char_type | | | | |
| char_traits::to_int_type | | | | |
| char_traits::eq_int_type | | | | |
| char_traits::eof | | | | |
| char_traits::not_eof | | | | |

|  |  |  |
| --- | --- | --- |
| static char_type\*      copy( char_type\* dest, const char_type\* src, std::size_t count ); |  | (constexpr since C++20) |
|  |  |  |

Copies count characters from the character string pointed to by src to the character string pointed to by dest.

If ``dest`,`dest + count`)` and `[`src`,`src + count`)` overlap, the behavior is undefined.

See [CharTraits for the general requirements on character traits for `X::copy`.

### Parameters

|  |  |  |
| --- | --- | --- |
| dest | - | pointer to a character string to copy to |
| src | - | pointer to a character string to copy from |
| count | - | the number of characters to copy |

### Return value

dest

### Exceptions

Throws nothing.

### Complexity

Linear in count.

### See also

|  |  |
| --- | --- |
| assign[static] | assigns a character   (public static member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/char_traits/copy&oldid=158859>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 September 2023, at 01:06.