# operator==,!=,<,<=,>,>=,<=>(std::basic_string)

From cppreference.com
< cpp‎ | string‎ | basic string
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

std::basic_string

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Member functions | | | | | | basic_string::basic_string | | | | | | basic_string::~basic_string | | | | | | basic_string::operator= | | | | | | basic_string::assign | | | | | | basic_string::assign_range(C++23) | | | | | | basic_string::get_allocator | | | | | | Element access | | | | | | basic_string::at | | | | | | [basic_string::operator[]](operator_at.html "cpp/string/basic string/operator at") | | | | | | basic_string::front(DR\*) | | | | | | basic_string::back(DR\*) | | | | | | basic_string::data | | | | | | basic_string::c_str | | | | | | basic_string::operator  basic_string_view(C++17) | | | | | | Iterators | | | | | | basic_string::beginbasic_string::cbegin(C++11) | | | | | | basic_string::endbasic_string::cend(C++11) | | | | | | basic_string::rbeginbasic_string::crbegin(C++11) | | | | | | basic_string::rendbasic_string::crend(C++11) | | | | | | Search | | | | | | basic_string::find | | | | | | basic_string::rfind | | | | | | basic_string::find_first_of | | | | | | basic_string::find_first_not_of | | | | | | basic_string::find_last_of | | | | | | basic_string::find_last_not_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | basic_string::clear | | | | | | basic_string::insert | | | | | | basic_string::insert_range(C++23) | | | | | | basic_string::erase | | | | | | basic_string::push_back | | | | | | basic_string::pop_back(DR\*) | | | | | | basic_string::append | | | | | | basic_string::append_range(C++23) | | | | | | basic_string::operator+= | | | | | | basic_string::replace | | | | | | basic_string::replace_with_range(C++23) | | | | | | basic_string::copy | | | | | | basic_string::resize | | | | | | basic_string::resize_and_overwrite(C++23) | | | | | | basic_string::swap | | | | | | Capacity | | | | | | basic_string::empty | | | | | | basic_string::sizebasic_string::length | | | | | | basic_string::max_size | | | | | | basic_string::reserve | | | | | | basic_string::capacity | | | | | | basic_string::shrink_to_fit(DR\*) | | | | | | Operations | | | | | | basic_string::compare | | | | | | basic_string::starts_with(C++20) | | | | | | basic_string::ends_with(C++20) | | | | | | basic_string::contains(C++23) | | | | | | basic_string::substr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Constants | | | | | | basic_string::npos | | | | | | Non-member functions | | | | | | operator+ | | | | | | swap(std::basic_string) | | | | | | erase(std::basic_string)erase_if(std::basic_string)(C++20)(C++20) | | | | | | I/O | | | | | | operator<<operator>> | | | | | | getline | | | | | | Comparison | | | | | | ****operator==operator!=operator<operator>operator<=operator>=operator<=>****(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | | | Numeric conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stoistolstoll(C++11)(C++11)(C++11) | | | | | | stoulstoull(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stofstodstold(C++11)(C++11)(C++11) | | | | | | to_string(C++11) | | | | | | to_wstring(C++11) | | | | | | | Literals | | | | | | operator""s(C++14) | | | | | | Helper classes | | | | | | hash<std::basic_string>(C++11) | | | | | | Deduction guides (C++17) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<string>` |  |  |
| Compare two `basic_string` objects |  |  |
| template< class CharT, class Traits, class Alloc >  bool operator==( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (1) | (noexcept since C++11) (constexpr since C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator!=( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (2) | (until C++20)  (noexcept since C++11) |
| template< class CharT, class Traits, class Alloc >  bool operator<( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (3) | (until C++20)  (noexcept since C++11) |
| template< class CharT, class Traits, class Alloc >  bool operator<=( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (4) | (until C++20)  (noexcept since C++11) |
| template< class CharT, class Traits, class Alloc >  bool operator>( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (5) | (until C++20)  (noexcept since C++11) |
| template< class CharT, class Traits, class Alloc >  bool operator>=( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (6) | (until C++20)  (noexcept since C++11) |
| template< class CharT, class Traits, class Alloc >  constexpr /\*comp-cat\*/      operator<=>( const std::basic_string<CharT,Traits,Alloc>& lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ) noexcept; | (7) | (since C++20) |
| Compare a `basic_string` object and null-terminated array of `T` |  |  |
| template< class CharT, class Traits, class Alloc >  bool operator==( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (8) | (constexpr since C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator==( const CharT\* lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (9) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator!=( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (10) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator!=( const CharT\* lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (11) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator<( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (12) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator<( const CharT\* lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (13) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator<=( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (14) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator<=( const CharT\* lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (15) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator>( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (16) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator>( const CharT\* lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (17) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator>=( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (18) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  bool operator>=( const CharT\* lhs, const std::basic_string<CharT,Traits,Alloc>& rhs ); | (19) | (until C++20) |
| template< class CharT, class Traits, class Alloc >  constexpr /\*comp-cat\*/      operator<=>( const std::basic_string<CharT,Traits,Alloc>& lhs, const CharT\* rhs ); | (20) | (since C++20) |
|  |  |  |

Compares the contents of a string with another string or a null-terminated array of `CharT`.

All comparisons are done via the compare() member function (which itself is defined in terms of `Traits::compare()`):

- Two strings are equal if both the size of lhs and rhs are equal and each character in lhs has equivalent character in rhs at the same position.

- The ordering comparisons are done lexicographically – the comparison is performed by a function equivalent to std::lexicographical_compareor std::lexicographical_compare_three_way(since C++20).

1-7) Compares two `basic_string` objects.8-20) Compares a `basic_string` object and a null-terminated array of `CharT`.

|  |  |
| --- | --- |
| The return type of three-way comparison operators (/\*comp-cat\*/) is Traits::comparison_category if that qualified-id exists and denotes a type, std::weak_ordering otherwise. If /\*comp-cat\*/ is not a comparison category type, the program is ill-formed.  The `<`, `<=`, `>`, `>=`, and `!=` operators are synthesized from operator<=> and operator== respectively. | (since C++20) |

### Parameters

|  |  |  |
| --- | --- | --- |
| lhs, rhs | - | strings whose contents to compare |

### Return value

1-6,8-19) true if the corresponding comparison holds, false otherwise.7,20) static_cast</\*comp-cat\*/>(lhs.compare(rhs) <=> 0).

### Complexity

Linear in the size of the strings.

### Notes

|  |  |
| --- | --- |
| If at least one parameter is of type std::string, std::wstring, std::u8string, std::u16string, or std::u32string, the return type of `operator<=>` is std::strong_ordering. | (since C++20) |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2064 | C++11 | whether overloads taking two `basic_string`s are noexcept was inconsistent; overloads taking a `CharT*` were noexcept but might raise UB | made consistent; noexcept removed |
| LWG 3432 | C++20 | the return type of `operator<=>` was not required to be a comparison category type | required |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string/operator_cmp&oldid=171034>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 April 2024, at 12:25.