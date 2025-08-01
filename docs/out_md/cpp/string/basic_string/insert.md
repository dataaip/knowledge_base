# std::basic_string<CharT,Traits,Allocator>::insert

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Member functions | | | | | | basic_string::basic_string | | | | | | basic_string::~basic_string | | | | | | basic_string::operator= | | | | | | basic_string::assign | | | | | | basic_string::assign_range(C++23) | | | | | | basic_string::get_allocator | | | | | | Element access | | | | | | basic_string::at | | | | | | [basic_string::operator[]](operator_at.html "cpp/string/basic string/operator at") | | | | | | basic_string::front(DR\*) | | | | | | basic_string::back(DR\*) | | | | | | basic_string::data | | | | | | basic_string::c_str | | | | | | basic_string::operator  basic_string_view(C++17) | | | | | | Iterators | | | | | | basic_string::beginbasic_string::cbegin(C++11) | | | | | | basic_string::endbasic_string::cend(C++11) | | | | | | basic_string::rbeginbasic_string::crbegin(C++11) | | | | | | basic_string::rendbasic_string::crend(C++11) | | | | | | Search | | | | | | basic_string::find | | | | | | basic_string::rfind | | | | | | basic_string::find_first_of | | | | | | basic_string::find_first_not_of | | | | | | basic_string::find_last_of | | | | | | basic_string::find_last_not_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Modifiers | | | | | | basic_string::clear | | | | | | ****basic_string::insert**** | | | | | | basic_string::insert_range(C++23) | | | | | | basic_string::erase | | | | | | basic_string::push_back | | | | | | basic_string::pop_back(DR\*) | | | | | | basic_string::append | | | | | | basic_string::append_range(C++23) | | | | | | basic_string::operator+= | | | | | | basic_string::replace | | | | | | basic_string::replace_with_range(C++23) | | | | | | basic_string::copy | | | | | | basic_string::resize | | | | | | basic_string::resize_and_overwrite(C++23) | | | | | | basic_string::swap | | | | | | Capacity | | | | | | basic_string::empty | | | | | | basic_string::sizebasic_string::length | | | | | | basic_string::max_size | | | | | | basic_string::reserve | | | | | | basic_string::capacity | | | | | | basic_string::shrink_to_fit(DR\*) | | | | | | Operations | | | | | | basic_string::compare | | | | | | basic_string::starts_with(C++20) | | | | | | basic_string::ends_with(C++20) | | | | | | basic_string::contains(C++23) | | | | | | basic_string::substr | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Constants | | | | | | basic_string::npos | | | | | | Non-member functions | | | | | | operator+ | | | | | | swap(std::basic_string) | | | | | | erase(std::basic_string)erase_if(std::basic_string)(C++20)(C++20) | | | | | | I/O | | | | | | operator<<operator>> | | | | | | getline | | | | | | Comparison | | | | | | operator==operator!=operator<operator>operator<=operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | | | Numeric conversions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stoistolstoll(C++11)(C++11)(C++11) | | | | | | stoulstoull(C++11)(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stofstodstold(C++11)(C++11)(C++11) | | | | | | to_string(C++11) | | | | | | to_wstring(C++11) | | | | | | | Literals | | | | | | operator""s(C++14) | | | | | | Helper classes | | | | | | hash<std::basic_string>(C++11) | | | | | | Deduction guides (C++17) | | | | | |

|  |  |  |
| --- | --- | --- |
| basic_string& insert( size_type index, size_type count, CharT ch ); | (1) | (constexpr since C++20) |
| basic_string& insert( size_type index, const CharT\* s ); | (2) | (constexpr since C++20) |
| basic_string& insert( size_type index, const CharT\* s, size_type count ); | (3) | (constexpr since C++20) |
| basic_string& insert( size_type index, const basic_string& str ); | (4) | (constexpr since C++20) |
|  |  |  |
| --- | --- | --- |
|  | (5) |  |
| basic_string& insert( size_type index, const basic_string& str,                        size_type s_index, size_type count ); |  | (until C++14) |
| basic_string& insert( size_type index, const basic_string& str,                        size_type s_index, size_type count = npos ); |  | (since C++14)  (constexpr since C++20) |
|  |  |  |
| --- | --- | --- |
|  | (6) |  |
| iterator insert( iterator pos, CharT ch ); |  | (until C++11) |
| iterator insert( const_iterator pos, CharT ch ); |  | (since C++11)  (constexpr since C++20) |
|  |  |  |
| --- | --- | --- |
|  | (7) |  |
| void insert( iterator pos, size_type count, CharT ch ); |  | (until C++11) |
| iterator insert( const_iterator pos, size_type count, CharT ch ); |  | (since C++11)  (constexpr since C++20) |
|  |  |  |
| --- | --- | --- |
|  | (8) |  |
| template< class InputIt >  void insert( iterator pos, InputIt first, InputIt last ); |  | (until C++11) |
| template< class InputIt >  iterator insert( const_iterator pos, InputIt first, InputIt last ); |  | (since C++11)  (constexpr since C++20) |
|  |  |  |
| --- | --- | --- |
| iterator insert( const_iterator pos, std::initializer_list<CharT> ilist ); | (9) | (since C++11)  (constexpr since C++20) |
| template< class StringViewLike >  basic_string& insert( size_type index, const StringViewLike& t ); | (10) | (since C++17)  (constexpr since C++20) |
| template< class StringViewLike >  basic_string& insert( size_type index, const StringViewLike& t,                       size_type t_index, size_type count = npos ); | (11) | (since C++17)  (constexpr since C++20) |
|  |  |  |

Inserts characters into the string.

1) Inserts count copies of character ch at the position index.2) Inserts null-terminated character string pointed to by s at the position index. The length of the string is determined by the first null character using Traits::length(s).3) Inserts the characters in the range ``s`,`s + count`)` at the position index. The range can contain null characters.4) Inserts string str at the position index.5) Inserts a string, obtained by str.substr(s_index, count) at the position index.6) Inserts character ch before the character pointed by pos.7) Inserts count copies of character ch before the element (if any) pointed by pos.8) Inserts characters from the range `[`first`,`last`)` before the element (if any) pointed by pos, as if by insert(pos - begin(), basic_string(first, last, get_allocator())).

|  |  |
| --- | --- |
| This overload does not participate in overload resolution if `InputIt` does not satisfy [LegacyInputIterator. | (since C++11) |

9) Inserts elements from initializer list ilist before the element (if any) pointed by pos.10) Implicitly converts t to a string view sv as if by std::basic_string_view<CharT, Traits> sv = t;, then inserts the elements from sv before the element (if any) pointed by index, as if by insert(index, sv.data(), sv.size()). This overload participates in overload resolution only if std::is_convertible_v<const StringViewLike&,  
                      std::basic_string_view<CharT, Traits>> is true and std::is_convertible_v<const StringViewLike&, const CharT\*> is false.11) Implicitly converts t to a string view sv as if by std::basic_string_view<CharT, Traits> sv = t;, then inserts, before the element (if any) pointed by index, the characters from the subview ``t_index`,`t_index + count`)` of sv.

- If the requested subview lasts past the end of sv, or if count == npos, the resulting subview is `[`t_index`,`sv.size()`)`.
- If t_index > sv.size(), or if index > size(), [std::out_of_range is thrown.
 This overload participates in overload resolution only if std::is_convertible_v<const StringViewLike&,  
                      std::basic_string_view<CharT, Traits>> is true and std::is_convertible_v<const StringViewLike&, const CharT\*> is false.

If pos is not a valid iterator on \*this, the behavior is undefined.

### Parameters

|  |  |  |
| --- | --- | --- |
| index | - | position at which the content will be inserted |
| pos | - | iterator before which the characters will be inserted |
| ch | - | character to insert |
| count | - | number of characters to insert |
| s | - | pointer to the character string to insert |
| str | - | string to insert |
| first, last | - | range defining characters to insert |
| s_index | - | position of the first character in str to insert |
| ilist | - | std::initializer_list to insert the characters from |
| t | - | object (convertible to std::basic_string_view) to insert the characters from |
| t_index | - | position of the first character in t to insert |
| Type requirements | | |
| -`InputIt` must meet the requirements of LegacyInputIterator. | | |

### Return value

1-5) \*this6-9) An iterator which refers to the copy of the first inserted character or pos if no characters were inserted (count == 0 or first == last or ilist.size() == 0)10,11) \*this

### Exceptions

1-4,10) Throws std::out_of_range if index > size().5) Throws std::out_of_range if index > size() or if s_index > str.size().11) Throws std::out_of_range if index > size() or if t_index > sv.size().

In all cases, throws std::length_error if size() + ins_count > max_size() where ins_count is the number of characters that will be inserted.

|  |  |
| --- | --- |
| In all cases, if std::allocator_traits<Allocator>::allocate throws an exception, it is rethrown. | (since C++20) |

If an exception is thrown for any reason, this function has no effect (strong exception safety guarantee).

### Example

Run this code

```
#include <cassert>
#include <iterator>
#include <string>
 
using namespace std::string_literals;
 
int main()
{
    std::string s = "xmplr";
 
    // insert(size_type index, size_type count, char ch)
    s.insert(0, 1, 'E');
    assert("Exmplr" == s);
 
    // insert(size_type index, const char* s)
    s.insert(2, "e");
    assert("Exemplr" == s);
 
    // insert(size_type index, string const& str)
    s.insert(6, "a"s);
    assert("Exemplar" == s);
 
    // insert(size_type index, string const& str,
    //        size_type s_index, size_type count)
    s.insert(8, " is an example string."s, 0, 14);
    assert("Exemplar is an example" == s);
 
    // insert(const_iterator pos, char ch)
    s.insert(s.cbegin() + s.find_first_of('n') + 1, ':');
    assert("Exemplar is an: example" == s);
 
    // insert(const_iterator pos, size_type count, char ch)
    s.insert(s.cbegin() + s.find_first_of(':') + 1, 2, '=');
    assert("Exemplar is an:== example" == s);
 
    // insert(const_iterator pos, InputIt first, InputIt last)
    {
        std::string seq = " string";
        s.insert(s.begin() + s.find_last_of('e') + 1,
            std::begin(seq), std::end(seq));
        assert("Exemplar is an:== example string" == s);
    }
 
    // insert(const_iterator pos, std::initializer_list<char>)
    s.insert(s.cbegin() + s.find_first_of('g') + 1, {'.'});
    assert("Exemplar is an:== example string." == s);
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 7 | C++98 | overload (8) referred to a non-existing overload | refers to overload (4) correctly |
| LWG 847 | C++98 | there was no exception safety guarantee | added strong exception safety guarantee |
| LWG 2946 | C++17 | overload (10) caused ambiguity in some cases | avoided by making it a template |

### See also

|  |  |
| --- | --- |
| insert_range(C++23) | inserts a range of characters   (public member function) |
| append | appends characters to the end   (public member function) |
| push_back | appends a character to the end   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string/insert&oldid=171131>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 April 2024, at 06:23.