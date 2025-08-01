# Standard library header <string>

From cppreference.com
< cpp‎ | header
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | ****<string>**** | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the strings library.

|  |  |
| --- | --- |
| Includes | |
| <compare>(C++20) | Three-way comparison operator support |
| <initializer_list>(C++11) | std::initializer_list class template |
| Classes | |
| char_traits | Class Template which describes properties of a character type   (class template) |
| std::char_traits<char> | (class template specialization) |
| std::char_traits<wchar_t> | (class template specialization) |
| std::char_traits<char8_t> (C++20) | (class template specialization) |
| std::char_traits<char16_t> (C++11) | (class template specialization) |
| std::char_traits<char32_t> (C++11) | (class template specialization) |
| basic_string | stores and manipulates sequences of characters   (class template) |
| std::string | std::basic_string<char> (typedef) |
| std::u8string (C++20) | std::basic_string<char8_t> (typedef) |
| std::u16string (C++11) | std::basic_string<char16_t> (typedef) |
| std::u32string (C++11) | std::basic_string<char32_t> (typedef) |
| std::wstring | std::basic_string<wchar_t> (typedef) |
| std::pmr::basic_string (C++17) | (alias template) |
| std::pmr::string (C++17) | std::pmr::basic_string<char> (typedef) |
| std::pmr::u8string (C++20) | std::pmr::basic_string<char8_t> (typedef) |
| std::pmr::u16string (C++17) | std::pmr::basic_string<char16_t> (typedef) |
| std::pmr::u32string (C++17) | std::pmr::basic_string<char32_t> (typedef) |
| std::pmr::wstring (C++17) | std::pmr::basic_string<wchar_t> (typedef) |
| std::hash<std::basic_string>(C++11) | hash support for strings   (class template specialization) |
| Functions | |
| operator+ | concatenates two strings, a string and a char, or a string and string_view   (function template) |
| operator==operator!=operator<operator>operator<=operator>=operator<=>(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) | lexicographically compares two strings   (function template) |
| std::swap(std::basic_string) | specializes the std::swap algorithm   (function template) |
| erase(std::basic_string)erase_if(std::basic_string)(C++20) | erases all elements satisfying specific criteria   (function template) |
| Input/output | |
| operator<<operator>> | performs stream input and output on strings   (function template) |
| getline | read data from an I/O stream into a string   (function template) |
| Numeric conversions | |
| stoistolstoll(C++11)(C++11)(C++11) | converts a string to a signed integer   (function) |
| stoulstoull(C++11)(C++11) | converts a string to an unsigned integer   (function) |
| stofstodstold(C++11)(C++11)(C++11) | converts a string to a floating point value   (function) |
| to_string(C++11) | converts an integral or floating-point value to `string`   (function) |
| to_wstring(C++11) | converts an integral or floating-point value to `wstring`   (function) |
| Range access | |
| begincbegin(C++11)(C++14) | returns an iterator to the beginning of a container or array   (function template) |
| endcend(C++11)(C++14) | returns an iterator to the end of a container or array   (function template) |
| rbegincrbegin(C++14) | returns a reverse iterator to the beginning of a container or array   (function template) |
| rendcrend(C++14) | returns a reverse end iterator for a container or array   (function template) |
| sizessize(C++17)(C++20) | returns the size of a container or array   (function template) |
| empty(C++17) | checks whether the container is empty   (function template) |
| data(C++17) | obtains the pointer to the underlying array   (function template) |
| Literals | |
| Defined in inline namespace `std::literals::string_literals` | |
| operator""s(C++14) | converts a character array literal to `basic_string`   (function) |

### Synopsis

```
#include <compare>
#include <initializer_list>
 
namespace std {
  // character traits
  template<class CharT> struct char_traits; // freestanding
  template<> struct char_traits<char>;      // freestanding
  template<> struct char_traits<char8_t>;   // freestanding
  template<> struct char_traits<char16_t>;  // freestanding
  template<> struct char_traits<char32_t>;  // freestanding
  template<> struct char_traits<wchar_t>;   // freestanding
 
  // basic_string
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
    class basic_string;
 
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const basic_string<CharT, Traits, Allocator>& lhs,
                const basic_string<CharT, Traits, Allocator>& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(basic_string<CharT, Traits, Allocator>&& lhs,
                const basic_string<CharT, Traits, Allocator>& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const basic_string<CharT, Traits, Allocator>& lhs,
                basic_string<CharT, Traits, Allocator>&& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(basic_string<CharT, Traits, Allocator>&& lhs,
                basic_string<CharT, Traits, Allocator>&& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const CharT* lhs,
                const basic_string<CharT, Traits, Allocator>& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const CharT* lhs,
                basic_string<CharT, Traits, Allocator>&& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(CharT lhs,
                const basic_string<CharT, Traits, Allocator>& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(CharT lhs,
                basic_string<CharT, Traits, Allocator>&& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const basic_string<CharT, Traits, Allocator>& lhs,
                const CharT* rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(basic_string<CharT, Traits, Allocator>&& lhs,
                const CharT* rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const basic_string<CharT, Traits, Allocator>& lhs,
                CharT rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(basic_string<CharT, Traits, Allocator>&& lhs,
                CharT rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(const basic_string<CharT, Traits, Allocator>& lhs,
                type_identity_t<basic_string_view<CharT, Traits>> rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(basic_string<CharT, Traits, Allocator>&& lhs,
                type_identity_t<basic_string_view<CharT, Traits>> rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(type_identity_t<basic_string_view<CharT, Traits>> lhs,
                const basic_string<CharT, Traits, Allocator>& rhs);
  template<class CharT, class Traits, class Allocator>
    constexpr basic_string<CharT, Traits, Allocator>
      operator+(type_identity_t<basic_string_view<CharT, Traits>> lhs,
                basic_string<CharT, Traits, Allocator>&& rhs);
 
  template<class CharT, class Traits, class Allocator>
    constexpr bool
      operator==(const basic_string<CharT, Traits, Allocator>& lhs,
                 const basic_string<CharT, Traits, Allocator>& rhs) noexcept;
  template<class CharT, class Traits, class Allocator>
    constexpr bool operator==(const basic_string<CharT, Traits, Allocator>& lhs,
                              const CharT* rhs);
 
  template<class CharT, class Traits, class Allocator>
    constexpr /* see description */ operator<=>(const basic_string<CharT,
                                                Traits, Allocator>& lhs,
                                                const basic_string<CharT,
                                                Traits, Allocator>& rhs) noexcept;
  template<class CharT, class Traits, class Allocator>
    constexpr /* see description */ operator<=>(const basic_string<CharT,
                                                Traits, Allocator>& lhs,
                                                const CharT* rhs);
 
  // swap
  template<class CharT, class Traits, class Allocator>
    constexpr void
      swap(basic_string<CharT, Traits, Allocator>& lhs,
           basic_string<CharT, Traits, Allocator>& rhs)
        noexcept(noexcept(lhs.swap(rhs)));
 
  // inserters and extractors
  template<class CharT, class Traits, class Allocator>
    basic_istream<CharT, Traits>&
      operator>>(basic_istream<CharT, Traits>& is,
                 basic_string<CharT, Traits, Allocator>& str);
  template<class CharT, class Traits, class Allocator>
    basic_ostream<CharT, Traits>&
      operator<<(basic_ostream<CharT, Traits>& os,
                 const basic_string<CharT, Traits, Allocator>& str);
  template<class CharT, class Traits, class Allocator>
    basic_istream<CharT, Traits>&
      getline(basic_istream<CharT, Traits>& is,
              basic_string<CharT, Traits, Allocator>& str,
              CharT delim);
  template<class CharT, class Traits, class Allocator>
    basic_istream<CharT, Traits>&
      getline(basic_istream<CharT, Traits>&& is,
              basic_string<CharT, Traits, Allocator>& str,
              CharT delim);
  template<class CharT, class Traits, class Allocator>
    basic_istream<CharT, Traits>&
      getline(basic_istream<CharT, Traits>& is,
              basic_string<CharT, Traits, Allocator>& str);
  template<class CharT, class Traits, class Allocator>
    basic_istream<CharT, Traits>&
      getline(basic_istream<CharT, Traits>&& is,
              basic_string<CharT, Traits, Allocator>& str);
 
  // erasure
  template<class CharT, class Traits, class Allocator, class U = CharT>
    constexpr typename basic_string<CharT, Traits, Allocator>::size_type
      erase(basic_string<CharT, Traits, Allocator>& c, const U& value);
  template<class CharT, class Traits, class Allocator, class Pred>
    constexpr typename basic_string<CharT, Traits, Allocator>::size_type
      erase_if(basic_string<CharT, Traits, Allocator>& c, Pred pred);
 
  // basic_string typedef-names
  using string    = basic_string<char>;
  using u8string  = basic_string<char8_t>;
  using u16string = basic_string<char16_t>;
  using u32string = basic_string<char32_t>;
  using wstring   = basic_string<wchar_t>;
 
  // numeric conversions
  int stoi(const string& str, size_t* idx = nullptr, int base = 10);
  long stol(const string& str, size_t* idx = nullptr, int base = 10);
  unsigned long stoul(const string& str, size_t* idx = nullptr, int base = 10);
  long long stoll(const string& str, size_t* idx = nullptr, int base = 10);
  unsigned long long stoull(const string& str, size_t* idx = nullptr, int base = 10);
  float stof(const string& str, size_t* idx = nullptr);
  double stod(const string& str, size_t* idx = nullptr);
  long double stold(const string& str, size_t* idx = nullptr);
  string to_string(int val);
  string to_string(unsigned val);
  string to_string(long val);
  string to_string(unsigned long val);
  string to_string(long long val);
  string to_string(unsigned long long val);
  string to_string(float val);
  string to_string(double val);
  string to_string(long double val);
 
  int stoi(const wstring& str, size_t* idx = nullptr, int base = 10);
  long stol(const wstring& str, size_t* idx = nullptr, int base = 10);
  unsigned long stoul(const wstring& str, size_t* idx = nullptr, int base = 10);
  long long stoll(const wstring& str, size_t* idx = nullptr, int base = 10);
  unsigned long long stoull(const wstring& str, size_t* idx = nullptr, int base = 10);
  float stof(const wstring& str, size_t* idx = nullptr);
  double stod(const wstring& str, size_t* idx = nullptr);
  long double stold(const wstring& str, size_t* idx = nullptr);
  wstring to_wstring(int val);
  wstring to_wstring(unsigned val);
  wstring to_wstring(long val);
  wstring to_wstring(unsigned long val);
  wstring to_wstring(long long val);
  wstring to_wstring(unsigned long long val);
  wstring to_wstring(float val);
  wstring to_wstring(double val);
  wstring to_wstring(long double val);
 
  namespace pmr {
    template<class CharT, class Traits = char_traits<CharT>>
      using basic_string = std::basic_string<CharT, Traits, polymorphic_allocator<CharT>>;
 
    using string    = basic_string<char>;
    using u8string  = basic_string<char8_t>;
    using u16string = basic_string<char16_t>;
    using u32string = basic_string<char32_t>;
    using wstring   = basic_string<wchar_t>;
  }
 
  // hash support
  template<class T> struct hash;
  template<class A> struct hash<basic_string<char, char_traits<char>, A>>;
  template<class A> struct hash<basic_string<char8_t, char_traits<char8_t>, A>>;
  template<class A> struct hash<basic_string<char16_t, char_traits<char16_t>, A>>;
  template<class A> struct hash<basic_string<char32_t, char_traits<char32_t>, A>>;
  template<class A> struct hash<basic_string<wchar_t, char_traits<wchar_t>, A>>;
 
  inline namespace literals {
  inline namespace string_literals {
    // suffix for basic_string literals
    constexpr string    operator""s(const char* str, size_t len);
    constexpr u8string  operator""s(const char8_t* str, size_t len);
    constexpr u16string operator""s(const char16_t* str, size_t len);
    constexpr u32string operator""s(const char32_t* str, size_t len);
    constexpr wstring   operator""s(const wchar_t* str, size_t len);
  }
  }
}

```

#### Class template std::char_traits

```
namespace std {
  template<> struct char_traits<char> {
    using char_type  = char;
    using int_type   = int;
    using off_type   = streamoff;
    using pos_type   = streampos;
    using state_type = mbstate_t;
    using comparison_category = strong_ordering;
 
    static constexpr void assign(char_type& c1, const char_type& c2) noexcept;
    static constexpr bool eq(char_type c1, char_type c2) noexcept;
    static constexpr bool lt(char_type c1, char_type c2) noexcept;
 
    static constexpr int compare(const char_type* s1, const char_type* s2, size_t n);
    static constexpr size_t length(const char_type* s);
    static constexpr const char_type* find(const char_type* s, size_t n,
                                           const char_type& a);
    static constexpr char_type* move(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* copy(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* assign(char_type* s, size_t n, char_type a);
 
    static constexpr int_type not_eof(int_type c) noexcept;
    static constexpr char_type to_char_type(int_type c) noexcept;
    static constexpr int_type to_int_type(char_type c) noexcept;
    static constexpr bool eq_int_type(int_type c1, int_type c2) noexcept;
    static constexpr int_type eof() noexcept;
  };
 
  template<> struct char_traits<char8_t> {
    using char_type  = char8_t;
    using int_type   = unsigned int;
    using off_type   = streamoff;
    using pos_type   = u8streampos;
    using state_type = mbstate_t;
    using comparison_category = strong_ordering;
 
    static constexpr void assign(char_type& c1, const char_type& c2) noexcept;
    static constexpr bool eq(char_type c1, char_type c2) noexcept;
    static constexpr bool lt(char_type c1, char_type c2) noexcept;
 
    static constexpr int compare(const char_type* s1, const char_type* s2, size_t n);
    static constexpr size_t length(const char_type* s);
    static constexpr const char_type* find(const char_type* s, size_t n,
                                           const char_type& a);
    static constexpr char_type* move(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* copy(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* assign(char_type* s, size_t n, char_type a);
    static constexpr int_type not_eof(int_type c) noexcept;
    static constexpr char_type to_char_type(int_type c) noexcept;
    static constexpr int_type to_int_type(char_type c) noexcept;
    static constexpr bool eq_int_type(int_type c1, int_type c2) noexcept;
    static constexpr int_type eof() noexcept;
  };
 
  template<> struct char_traits<char16_t> {
    using char_type  = char16_t;
    using int_type   = uint_least16_t;
    using off_type   = streamoff;
    using pos_type   = u16streampos;
    using state_type = mbstate_t;
    using comparison_category = strong_ordering;
 
    static constexpr void assign(char_type& c1, const char_type& c2) noexcept;
    static constexpr bool eq(char_type c1, char_type c2) noexcept;
    static constexpr bool lt(char_type c1, char_type c2) noexcept;
 
    static constexpr int compare(const char_type* s1, const char_type* s2, size_t n);
    static constexpr size_t length(const char_type* s);
    static constexpr const char_type* find(const char_type* s, size_t n,
                                           const char_type& a);
    static constexpr char_type* move(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* copy(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* assign(char_type* s, size_t n, char_type a);
 
    static constexpr int_type not_eof(int_type c) noexcept;
    static constexpr char_type to_char_type(int_type c) noexcept;
    static constexpr int_type to_int_type(char_type c) noexcept;
    static constexpr bool eq_int_type(int_type c1, int_type c2) noexcept;
    static constexpr int_type eof() noexcept;
  };
 
  template<> struct char_traits<char32_t> {
    using char_type  = char32_t;
    using int_type   = uint_least32_t;
    using off_type   = streamoff;
    using pos_type   = u32streampos;
    using state_type = mbstate_t;
    using comparison_category = strong_ordering;
 
    static constexpr void assign(char_type& c1, const char_type& c2) noexcept;
    static constexpr bool eq(char_type c1, char_type c2) noexcept;
    static constexpr bool lt(char_type c1, char_type c2) noexcept;
 
    static constexpr int compare(const char_type* s1, const char_type* s2, size_t n);
    static constexpr size_t length(const char_type* s);
    static constexpr const char_type* find(const char_type* s, size_t n,
                                           const char_type& a);
    static constexpr char_type* move(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* copy(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* assign(char_type* s, size_t n, char_type a);
 
    static constexpr int_type not_eof(int_type c) noexcept;
    static constexpr char_type to_char_type(int_type c) noexcept;
    static constexpr int_type to_int_type(char_type c) noexcept;
    static constexpr bool eq_int_type(int_type c1, int_type c2) noexcept;
    static constexpr int_type eof() noexcept;
  };
 
  template<> struct char_traits<wchar_t> {
    using char_type  = wchar_t;
    using int_type   = wint_t;
    using off_type   = streamoff;
    using pos_type   = wstreampos;
    using state_type = mbstate_t;
    using comparison_category = strong_ordering;
 
    static constexpr void assign(char_type& c1, const char_type& c2) noexcept;
    static constexpr bool eq(char_type c1, char_type c2) noexcept;
    static constexpr bool lt(char_type c1, char_type c2) noexcept;
 
    static constexpr int compare(const char_type* s1, const char_type* s2, size_t n);
    static constexpr size_t length(const char_type* s);
    static constexpr const char_type* find(const char_type* s, size_t n,
                                           const char_type& a);
    static constexpr char_type* move(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* copy(char_type* s1, const char_type* s2, size_t n);
    static constexpr char_type* assign(char_type* s, size_t n, char_type a);
 
    static constexpr int_type not_eof(int_type c) noexcept;
    static constexpr char_type to_char_type(int_type c) noexcept;
    static constexpr int_type to_int_type(char_type c) noexcept;
    static constexpr bool eq_int_type(int_type c1, int_type c2) noexcept;
    static constexpr int_type eof() noexcept;
  };
}

```

#### Class template std::basic_string

```
namespace std {
  template<class CharT, class Traits = char_traits<CharT>,
           class Allocator = allocator<CharT>>
  class basic_string {
  public:
    // types
    using traits_type            = Traits;
    using value_type             = CharT;
    using allocator_type         = Allocator;
    using size_type              = typename allocator_traits<Allocator>::size_type;
    using difference_type        = typename allocator_traits<Allocator>::difference_type;
    using pointer                = typename allocator_traits<Allocator>::pointer;
    using const_pointer          = typename allocator_traits<Allocator>::const_pointer;
    using reference              = value_type&;
    using const_reference        = const value_type&;
 
    using iterator               = /* implementation-defined */;
    using const_iterator         = /* implementation-defined */;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    static constexpr size_type npos = size_type(-1);
 
    // construct/copy/destroy
    constexpr basic_string() noexcept(noexcept(Allocator()))
      : basic_string(Allocator()) { }
    constexpr explicit basic_string(const Allocator& a) noexcept;
    constexpr basic_string(const basic_string& str);
    constexpr basic_string(basic_string&& str) noexcept;
    constexpr basic_string(const basic_string& str, size_type pos,
                           const Allocator& a = Allocator());
    constexpr basic_string(const basic_string& str, size_type pos, size_type n,
                           const Allocator& a = Allocator());
    constexpr basic_string(basic_string&& str, size_type pos,
                           const Allocator& a = Allocator());
    constexpr basic_string(basic_string&& str, size_type pos, size_type n,
                           const Allocator& a = Allocator());
    template<class T>
      constexpr basic_string(const T& t, size_type pos, size_type n,
                             const Allocator& a = Allocator());
    template<class T>
      constexpr explicit basic_string(const T& t, const Allocator& a = Allocator());
    constexpr basic_string(const CharT* s, size_type n, const Allocator& a = Allocator());
    constexpr basic_string(const CharT* s, const Allocator& a = Allocator());
    basic_string(nullptr_t) = delete;
    constexpr basic_string(size_type n, CharT c, const Allocator& a = Allocator());
    template<class InputIt>
      constexpr basic_string(InputIt begin, InputIt end,
                             const Allocator& a = Allocator());
    template<container-compatible-range<CharT> R>
      constexpr basic_string(from_range_t, R&& rg, const Allocator& a = Allocator());
    constexpr basic_string(initializer_list<CharT>, const Allocator& = Allocator());
    constexpr basic_string(const basic_string&, const Allocator&);
    constexpr basic_string(basic_string&&, const Allocator&);
    constexpr ~basic_string();
 
    constexpr basic_string& operator=(const basic_string& str);
    constexpr basic_string& operator=(basic_string&& str)
      noexcept(allocator_traits<Allocator>::propagate_on_container_move_assignment::value ||
               allocator_traits<Allocator>::is_always_equal::value);
    template<class T>
      constexpr basic_string& operator=(const T& t);
    constexpr basic_string& operator=(const CharT* s);
    basic_string& operator=(nullptr_t) = delete;
    constexpr basic_string& operator=(CharT c);
    constexpr basic_string& operator=(initializer_list<CharT>);
 
    // iterators
    constexpr iterator       begin() noexcept;
    constexpr const_iterator begin() const noexcept;
    constexpr iterator       end() noexcept;
    constexpr const_iterator end() const noexcept;
 
    constexpr reverse_iterator       rbegin() noexcept;
    constexpr const_reverse_iterator rbegin() const noexcept;
    constexpr reverse_iterator       rend() noexcept;
    constexpr const_reverse_iterator rend() const noexcept;
 
    constexpr const_iterator         cbegin() const noexcept;
    constexpr const_iterator         cend() const noexcept;
    constexpr const_reverse_iterator crbegin() const noexcept;
    constexpr const_reverse_iterator crend() const noexcept;
 
    // capacity
    constexpr size_type size() const noexcept;
    constexpr size_type length() const noexcept;
    constexpr size_type max_size() const noexcept;
    constexpr void resize(size_type n, CharT c);
    constexpr void resize(size_type n);
    template<class Operation>
      constexpr void resize_and_overwrite(size_type n, Operation op);
    constexpr size_type capacity() const noexcept;
    constexpr void reserve(size_type res_arg);
    constexpr void shrink_to_fit();
    constexpr void clear() noexcept;
    constexpr bool empty() const noexcept;
 
    // element access
    constexpr const_reference operator[](size_type pos) const;
    constexpr reference       operator[](size_type pos);
    constexpr const_reference at(size_type n) const;
    constexpr reference       at(size_type n);
 
    constexpr const CharT& front() const;
    constexpr CharT&       front();
    constexpr const CharT& back() const;
    constexpr CharT&       back();
 
    // modifiers
    constexpr basic_string& operator+=(const basic_string& str);
    template<class T>
      constexpr basic_string& operator+=(const T& t);
    constexpr basic_string& operator+=(const CharT* s);
    constexpr basic_string& operator+=(CharT c);
    constexpr basic_string& operator+=(initializer_list<CharT>);
    constexpr basic_string& append(const basic_string& str);
    constexpr basic_string& append(const basic_string& str, size_type pos,
                                   size_type n = npos);
    template<class T>
      constexpr basic_string& append(const T& t);
    template<class T>
      constexpr basic_string& append(const T& t, size_type pos, size_type n = npos);
    constexpr basic_string& append(const CharT* s, size_type n);
    constexpr basic_string& append(const CharT* s);
    constexpr basic_string& append(size_type n, CharT c);
    template<class InputIt>
      constexpr basic_string& append(InputIt first, InputIt last);
    template<container-compatible-range<CharT> R>
      constexpr basic_string& append_range(R&& rg);
    constexpr basic_string& append(initializer_list<CharT>);
 
    constexpr void push_back(CharT c);
 
    constexpr basic_string& assign(const basic_string& str);
    constexpr basic_string& assign(basic_string&& str)
      noexcept(allocator_traits<Allocator>::propagate_on_container_move_assignment::value ||
               allocator_traits<Allocator>::is_always_equal::value);
    constexpr basic_string& assign(const basic_string& str, size_type pos,
                                   size_type n = npos);
    template<class T>
      constexpr basic_string& assign(const T& t);
    template<class T>
      constexpr basic_string& assign(const T& t, size_type pos, size_type n = npos);
    constexpr basic_string& assign(const CharT* s, size_type n);
    constexpr basic_string& assign(const CharT* s);
    constexpr basic_string& assign(size_type n, CharT c);
    template<class InputIt>
      constexpr basic_string& assign(InputIt first, InputIt last);
    template<container-compatible-range<CharT> R>
      constexpr basic_string& assign_range(R&& rg);
    constexpr basic_string& assign(initializer_list<CharT>);
 
    constexpr basic_string& insert(size_type pos, const basic_string& str);
    constexpr basic_string& insert(size_type pos1, const basic_string& str,
                                   size_type pos2, size_type n = npos);
    template<class T>
      constexpr basic_string& insert(size_type pos, const T& t);
    template<class T>
      constexpr basic_string& insert(size_type pos1, const T& t,
                                     size_type pos2, size_type n = npos);
    constexpr basic_string& insert(size_type pos, const CharT* s, size_type n);
    constexpr basic_string& insert(size_type pos, const CharT* s);
    constexpr basic_string& insert(size_type pos, size_type n, CharT c);
    constexpr iterator insert(const_iterator p, CharT c);
    constexpr iterator insert(const_iterator p, size_type n, CharT c);
    template<class InputIt>
      constexpr iterator insert(const_iterator p, InputIt first, InputIt last);
    template<container-compatible-range<CharT> R>
      constexpr iterator insert_range(const_iterator p, R&& rg);
    constexpr iterator insert(const_iterator p, initializer_list<CharT>);
 
    constexpr basic_string& erase(size_type pos = 0, size_type n = npos);
    constexpr iterator erase(const_iterator p);
    constexpr iterator erase(const_iterator first, const_iterator last);
 
    constexpr void pop_back();
 
    constexpr basic_string& replace(size_type pos1, size_type n1, const basic_string& str);
    constexpr basic_string& replace(size_type pos1, size_type n1, const basic_string& str,
                                    size_type pos2, size_type n2 = npos);
    template<class T>
      constexpr basic_string& replace(size_type pos1, size_type n1, const T& t);
    template<class T>
      constexpr basic_string& replace(size_type pos1, size_type n1, const T& t,
                                      size_type pos2, size_type n2 = npos);
    constexpr basic_string& replace(size_type pos, size_type n1, const CharT* s,
                                    size_type n2);
    constexpr basic_string& replace(size_type pos, size_type n1, const CharT* s);
    constexpr basic_string& replace(size_type pos, size_type n1, size_type n2, CharT c);
    constexpr basic_string& replace(const_iterator i1, const_iterator i2,
                                    const basic_string& str);
    template<class T>
      constexpr basic_string& replace(const_iterator i1, const_iterator i2, const T& t);
    constexpr basic_string& replace(const_iterator i1, const_iterator i2, const CharT* s,
                                    size_type n);
    constexpr basic_string& replace(const_iterator i1, const_iterator i2, const CharT* s);
    constexpr basic_string& replace(const_iterator i1, const_iterator i2, size_type n,
                                    CharT c);
    template<class InputIt>
      constexpr basic_string& replace(const_iterator i1, const_iterator i2,
                                      InputIt j1, InputIt j2);
    template<container-compatible-range<CharT> R>
      constexpr basic_string& replace_with_range(const_iterator i1, const_iterator i2,
                                                 R&& rg);
    constexpr basic_string& replace(const_iterator, const_iterator,
                                    initializer_list<CharT>);
 
    constexpr size_type copy(CharT* s, size_type n, size_type pos = 0) const;
 
    constexpr void swap(basic_string& str)
      noexcept(allocator_traits<Allocator>::propagate_on_container_swap::value ||
               allocator_traits<Allocator>::is_always_equal::value);
 
    // string operations
    constexpr const CharT* c_str() const noexcept;
    constexpr const CharT* data() const noexcept;
    constexpr CharT* data() noexcept;
    constexpr operator basic_string_view<CharT, Traits>() const noexcept;
    constexpr allocator_type get_allocator() const noexcept;
 
    template<class T>
      constexpr size_type find(const T& t,
                               size_type pos = 0) const noexcept(/* see description */);
    constexpr size_type find(const basic_string& str, size_type pos = 0) const noexcept;
    constexpr size_type find(const CharT* s, size_type pos, size_type n) const;
    constexpr size_type find(const CharT* s, size_type pos = 0) const;
    constexpr size_type find(CharT c, size_type pos = 0) const noexcept;
    template<class T>
      constexpr size_type rfind(const T& t, size_type pos = npos)
        const noexcept(/* see description */);
    constexpr size_type rfind(const basic_string& str,
                              size_type pos = npos) const noexcept;
    constexpr size_type rfind(const CharT* s, size_type pos, size_type n) const;
    constexpr size_type rfind(const CharT* s, size_type pos = npos) const;
    constexpr size_type rfind(CharT c, size_type pos = npos) const noexcept;
 
    template<class T>
      constexpr size_type find_first_of(const T& t, size_type pos = 0)
        const noexcept(/* see description */);
    constexpr size_type find_first_of(const basic_string& str,
                                      size_type pos = 0) const noexcept;
    constexpr size_type find_first_of(const CharT* s, size_type pos, size_type n) const;
    constexpr size_type find_first_of(const CharT* s, size_type pos = 0) const;
    constexpr size_type find_first_of(CharT c, size_type pos = 0) const noexcept;
    template<class T>
      constexpr size_type find_last_of(const T& t, size_type pos = npos)
        const noexcept(/* see description */);
    constexpr size_type find_last_of(const basic_string& str,
                                     size_type pos = npos) const noexcept;
    constexpr size_type find_last_of(const CharT* s, size_type pos, size_type n) const;
    constexpr size_type find_last_of(const CharT* s, size_type pos = npos) const;
    constexpr size_type find_last_of(CharT c, size_type pos = npos) const noexcept;
 
    template<class T>
      constexpr size_type find_first_not_of(const T& t, size_type pos = 0)
        const noexcept(/* see description */);
    constexpr size_type find_first_not_of(const basic_string& str,
                                          size_type pos = 0) const noexcept;
    constexpr size_type find_first_not_of(const CharT* s, size_type pos, size_type n) const;
    constexpr size_type find_first_not_of(const CharT* s, size_type pos = 0) const;
    constexpr size_type find_first_not_of(CharT c, size_type pos = 0) const noexcept;
    template<class T>
      constexpr size_type find_last_not_of(const T& t, size_type pos = npos)
        const noexcept(/* see description */);
    constexpr size_type find_last_not_of(const basic_string& str,
                                         size_type pos = npos) const noexcept;
    constexpr size_type find_last_not_of(const CharT* s, size_type pos, size_type n) const;
    constexpr size_type find_last_not_of(const CharT* s, size_type pos = npos) const;
    constexpr size_type find_last_not_of(CharT c, size_type pos = npos) const noexcept;
 
    constexpr basic_string substr(size_type pos = 0, size_type n = npos) const &;
    constexpr basic_string substr(size_type pos = 0, size_type n = npos) &&;
 
    template<class T>
      constexpr int compare(const T& t) const noexcept(/* see description */);
    template<class T>
      constexpr int compare(size_type pos1, size_type n1, const T& t) const;
    template<class T>
      constexpr int compare(size_type pos1, size_type n1, const T& t,
                            size_type pos2, size_type n2 = npos) const;
    constexpr int compare(const basic_string& str) const noexcept;
    constexpr int compare(size_type pos1, size_type n1, const basic_string& str) const;
    constexpr int compare(size_type pos1, size_type n1, const basic_string& str,
                          size_type pos2, size_type n2 = npos) const;
    constexpr int compare(const CharT* s) const;
    constexpr int compare(size_type pos1, size_type n1, const CharT* s) const;
    constexpr int compare(size_type pos1, size_type n1, const CharT* s, size_type n2) const;
 
    constexpr bool starts_with(basic_string_view<CharT, Traits> x) const noexcept;
    constexpr bool starts_with(CharT x) const noexcept;
    constexpr bool starts_with(const CharT* x) const;
    constexpr bool ends_with(basic_string_view<CharT, Traits> x) const noexcept;
    constexpr bool ends_with(CharT x) const noexcept;
    constexpr bool ends_with(const CharT* x) const;
 
    constexpr bool contains(basic_string_view<CharT, Traits> x) const noexcept;
    constexpr bool contains(CharT x) const noexcept;
    constexpr bool contains(const CharT* x) const;
  };
 
  template<class InputIt,
           class Allocator = allocator<typename iterator_traits<InputIt>::value_type>>
    basic_string(InputIt, InputIt, Allocator = Allocator())
      -> basic_string<typename iterator_traits<InputIt>::value_type,
                      char_traits<typename iterator_traits<InputIt>::value_type>,
                      Allocator>;
 
  template<ranges::input_range R,
           class Allocator = allocator<ranges::range_value_t<R>>>
    basic_string(from_range_t, R&&, Allocator = Allocator())
      -> basic_string<ranges::range_value_t<R>, char_traits<ranges::range_value_t<R>>,
                      Allocator>;
 
  template<class CharT,
           class Traits,
           class Allocator = allocator<CharT>>
    explicit basic_string(basic_string_view<CharT, Traits>, const Allocator& = Allocator())
      -> basic_string<CharT, Traits, Allocator>;
 
  template<class CharT,
           class Traits,
           class Allocator = allocator<CharT>>
    basic_string(basic_string_view<CharT, Traits>,
                 typename /* see description */::size_type,
                 typename /* see description */::size_type,
                 const Allocator& = Allocator())
      -> basic_string<CharT, Traits, Allocator>;
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 209 | C++98 | the declarations of the following std::basic_string members used inconsistent styles in the synopsis:  - `void push_back(CharT c);` - `basic_string& assign(const basic_string& str);` - `void swap(basic_string& str);` | uniformed the styles |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/string&oldid=163931>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 06:53.