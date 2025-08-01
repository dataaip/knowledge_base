# **decay-copy**

From cppreference.com
< cpp‎ | standard library
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

Standard library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Customization point object (C++20) | | | | |
| Exposition-only entities | | | | |
| ******decay-copy******(C++11) | | | | |
| **synth-three-way****synth-three-way-result**(C++20)(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| template< class T >  typename std::decay<T>::type decay-copy( T&& value ); |  | (since C++11)  (until C++20)  (exposition only\*) |
| template< class T >      requires std::convertible_to<T, std::decay_t<T>>  constexpr std::decay_t<T> decay-copy( T&& value ) noexcept(std::is_nothrow_convertible_v<T, std::decay_t<T>>); |  | (since C++20)  (exposition only\*) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Returns std::forward<T>(value) (implicitly converted to the decayed type), a decayed prvalue copy of value.

### Parameters

|  |  |  |
| --- | --- | --- |
| value | - | the value to be copied |

### Return value

A decayed copy of value as a prvalue.

### Notes

`decay-copy` was introduced by the resolution of LWG issue 929. It is initially used in the concurrency support library to ensure that arguments are decayed when passing-by-value, and is later used in the ranges library.

The language feature auto(x) introduced in C++23 also allows decayed copies to be created as prvalues. The only difference is that `decay-copy` always materializes value and produces a copy, while auto(expr) is a no-op if expr is a prvalue.

All usages of `decay-copy` in the standard library (see below) except views::all, ranges::take_view and ranges::drop_view are replaced with auto(x) since C++23.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3724 | C++20 | `decay-copy` was not constrained | constrained |

### See also

|  |  |
| --- | --- |
| (constructor) | constructs new `thread` object   (public member function of `std::thread`) |
| (constructor) | constructs new `jthread` object   (public member function of `std::jthread`) |
| async(C++11) | runs a function asynchronously (potentially in a new thread) and returns a std::future that will hold the result   (function template) |
| ranges::begin(C++20) | returns an iterator to the beginning of a range (customization point object) |
| ranges::end(C++20) | returns a sentinel indicating the end of a range (customization point object) |
| ranges::rbegin(C++20) | returns a reverse iterator to a range (customization point object) |
| ranges::rend(C++20) | returns a reverse end iterator to a range (customization point object) |
| ranges::size(C++20) | returns an integer equal to the size of a range (customization point object) |
| ranges::data(C++20) | obtains a pointer to the beginning of a contiguous range (customization point object) |
| views::all_tviews::all(C++20) | a `view` that includes all elements of a `range` (alias template) (range adaptor object) |
| ranges::take_viewviews::take(C++20) | a `view` consisting of the first N elements of another `view` (class template) (range adaptor object) |
| ranges::drop_viewviews::drop(C++20) | a `view` consisting of elements of another `view`, skipping the first N elements (class template) (range adaptor object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/standard_library/decay-copy&oldid=157132>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 22 August 2023, at 13:30.