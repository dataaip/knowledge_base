# std::chrono::duration

From cppreference.com
< cpp‎ | chrono
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

Date and time library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Time point | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | time_point(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clock_time_conversion(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clock_cast(C++20) | | | | | |
| Duration | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****duration****(C++11) | | | | | |
| Clocks | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | system_clock(C++11) | | | | | | steady_clock(C++11) | | | | | | is_clock(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | utc_clock(C++20) | | | | | | tai_clock(C++20) | | | | | | high_resolution_clock(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | gps_clock(C++20) | | | | | | file_clock(C++20) | | | | | | local_t(C++20) | | | | | |
| Time of day | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_amis_pm(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | make12make24(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hh_mm_ss(C++20) | | | | | |  | | | | | |
| Calendar | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | day(C++20) | | | | | | month(C++20) | | | | | | year(C++20) | | | | | | weekday(C++20) | | | | | | operator/(C++20) | | | | | | year_month_day(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | year_month_day_last(C++20) | | | | | | year_month_weekday(C++20) | | | | | | year_month_weekday_last(C++20) | | | | | | weekday_indexed(C++20) | | | | | | weekday_last(C++20) | | | | | | month_day(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | month_day_last(C++20) | | | | | | month_weekday(C++20) | | | | | | month_weekday_last(C++20) | | | | | | year_month(C++20) | | | | | | last_speclast(C++20)(C++20) | | | | | |
| Time zone | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | tzdb(C++20) | | | | | | tzdb_list(C++20) | | | | | | get_tzdbget_tzdb_listreload_tzdbremote_version(C++20)(C++20)(C++20)(C++20) | | | | | | sys_info(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | local_info(C++20) | | | | | | nonexistent_local_time(C++20) | | | | | | ambiguous_local_time(C++20) | | | | | | locate_zone(C++20) | | | | | | current_zone(C++20) | | | | | | time_zone(C++20) | | | | | | choose(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | zoned_traits(C++20) | | | | | | zoned_time(C++20) | | | | | | time_zone_link(C++20) | | | | | | leap_second(C++20) | | | | | | leap_second_info(C++20) | | | | | | get_leap_second_info(C++20) | | | | | |  | | | | | |
| `chrono` I/O | | | | |
| parse(C++20) | | | | |
| C-style date and time | | | | |

****std::chrono::duration****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | duration::duration | | | | | | duration::operator= | | | | | | duration::count | | | | | | duration::zero | | | | | | duration::min | | | | | | duration::max | | | | | | duration::operator+duration::operator- | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | duration::operator++duration::operator-- | | | | | | duration::operator+=duration::operator-=duration::operator\*=duration::operator/=duration::operator%= | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+operator-operator\*operator/operator% | | | | | | operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(C++20) | | | | | | operator<<(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | duration_cast | | | | | | floor(C++17) | | | | | | ceil(C++17) | | | | | | round(C++17) | | | | | | abs(C++17) | | | | | | operator""h(C++14) | | | | | | operator""min(C++14) | | | | | | operator""s(C++14) | | | | | | operator""ms(C++14) | | | | | | operator""us(C++14) | | | | | | operator""ns(C++14) | | | | | | from_stream(C++20) | | | | | |  | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | common_type | | | | | | treat_as_floating_point | | | | | | duration_values | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | formatter<std::chrono::duration>(C++20) | | | | | | hash<std::chrono::duration>(C++26) | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<chrono>` |  |  |
| template<  class Rep,      class Period = std::ratio<1> > class duration; |  | (since C++11) |
|  |  |  |

Class template `std::chrono::duration` represents a time interval.

It consists of a count of ticks of type `Rep` and a tick period, where the tick period is a compile-time rational fraction representing the time in seconds from one tick to the next.

The only data stored in a `duration` is a tick count of type `Rep`. If `Rep` is floating point, then the `duration` can represent fractions of ticks. `Period` is included as part of the duration's type, and is only used when converting between different durations.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `rep` | `Rep`, an arithmetic type, or a class emulating an arithmetic type, representing the number of ticks |
| `period` | `Period`(until C++17)typename Period::type(since C++17), a std::ratio representing the tick period (i.e. the number of second's fractions per tick) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs new duration   (public member function) |
| operator= | assigns the contents   (public member function) |
| count | returns the count of ticks   (public member function) |
| zero[static] | returns the special duration value zero   (public static member function) |
| min[static] | returns the special duration value min   (public static member function) |
| max[static] | returns the special duration value max   (public static member function) |
| operator+operator- | implements unary + and unary -   (public member function) |
| operator++operator++(int)operator--operator--(int) | increments or decrements the tick count   (public member function) |
| operator+=operator-=operator\*=operator/=operator%= | implements compound assignment between two durations   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator+operator-operator\*operator/operator%(C++11) | implements arithmetic operations with durations as arguments   (function template) |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) | compares two durations   (function template) |
| duration_cast(C++11) | converts a duration to another, with a different tick interval   (function template) |
| floor(std::chrono::duration)(C++17) | converts a duration to another, rounding down   (function template) |
| ceil(std::chrono::duration)(C++17) | converts a duration to another, rounding up   (function template) |
| round(std::chrono::duration)(C++17) | converts a duration to another, rounding to nearest, ties to even   (function template) |
| abs(std::chrono::duration)(C++17) | obtains the absolute value of the duration   (function template) |
| operator<<(C++20) | performs stream output on a `duration`   (function template) |
| from_stream(C++20) | parses a `duration` from a stream according to the provided format   (function template) |

### Helper types

A type /\* intXX \*/ used in the table below means a signed integer type of at least XX bits.

|  |  |
| --- | --- |
| Type | Definition |
| `std::chrono::nanoseconds` | std::chrono::duration</\* int64 \*/, std::nano> |
| `std::chrono::microseconds` | std::chrono::duration</\* int55 \*/, std::micro> |
| `std::chrono::milliseconds` | std::chrono::duration</\* int45 \*/, std::milli> |
| `std::chrono::seconds` | std::chrono::duration</\* int35 \*/> |
| `std::chrono::minutes` | std::chrono::duration</\* int29 \*/, std::ratio<60>> |
| `std::chrono::hours` | std::chrono::duration</\* int23 \*/, std::ratio<3600>> |
| `std::chrono::days` (since C++20) | std::chrono::duration</\* int25 \*/, std::ratio<86400>> |
| `std::chrono::weeks` (since C++20) | std::chrono::duration</\* int22 \*/, std::ratio<604800>> |
| `std::chrono::months` (since C++20) | std::chrono::duration</\* int20 \*/, std::ratio<2629746>> |
| `std::chrono::years` (since C++20) | std::chrono::duration</\* int17 \*/, std::ratio<31556952>> |

Note: each of the predefined duration types up to `hours` covers a range of at least ±292 years.

|  |  |
| --- | --- |
| Each of the predefined duration types `days`, `weeks`, `months` and `years` covers a range of at least ±40000 years. `years` is equal to 365.2425 `days` (the average length of a Gregorian year). `months` is equal to 30.436875 `days` (exactly 1/12 of `years`). | (since C++20) |

### Helper classes

|  |  |
| --- | --- |
| std::common_type<std::chrono::duration>(C++11) | specializes the std::common_type trait   (class template specialization) |
| treat_as_floating_point(C++11) | indicates that a duration is convertible to duration with different tick period   (class template) |
| duration_values(C++11) | constructs zero, min, and max values of a tick count of given type   (class template) |
| std::formatter<std::chrono::duration>(C++20) | formatting support for `duration`   (class template specialization) |
| std::hash<std::chrono::duration>(C++26) | hash support for ****std::chrono::duration****   (class template specialization) |

### Helper specializations

|  |  |  |
| --- | --- | --- |
| template< class Rep, class Period >  constexpr bool enable_nonlocking_formatter_optimization<chrono::duration<Rep, Period>> = enable_nonlocking_formatter_optimization<Rep>; |  | (since C++23) |
|  |  |  |

This specialization of std::enable_nonlocking_formatter_optimization enables efficient implementation of std::print and std::println for printing a `chrono::duration` object when the template parameter `Rep` enables it.

### Literals

|  |  |
| --- | --- |
| Defined in inline namespace `std::literals::chrono_literals` | |
| operator""h(C++14) | a ****std::chrono::duration**** literal representing hours   (function) |
| operator""min(C++14) | a ****std::chrono::duration**** literal representing minutes   (function) |
| operator""s(C++14) | a ****std::chrono::duration**** literal representing seconds   (function) |
| operator""ms(C++14) | a ****std::chrono::duration**** literal representing milliseconds   (function) |
| operator""us(C++14) | a ****std::chrono::duration**** literal representing microseconds   (function) |
| operator""ns(C++14) | a ****std::chrono::duration**** literal representing nanoseconds   (function) |

|  |  |
| --- | --- |
| Note: the literal suffixes `d` and `y` do not refer to `days` and `years` but to day and year, respectively. | (since C++20) |

### Notes

The actual time interval (in seconds) that is held by a duration object d is roughly equal to d.count() \* D::period::num / D::period::den, where `D` is of type `chrono::duration<>` and d is an object of such type.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_chrono_udls` | `201304L` | (C++14) | User-defined literals for time types |

### Example

This example shows how to define several custom duration types and convert between types:

Run this code

```
#include <chrono>
#include <iostream>
 
using namespace std::chrono_literals;
 
template<typename T1, typename T2>
using mul = std::ratio_multiply<T1, T2>;
 
int main()
{
    using microfortnights = std::chrono::duration<float,
        mul<mul<std::ratio<2>, std::chrono::weeks::period>, std::micro>>;
    using nanocenturies = std::chrono::duration<float,
        mul<mul<std::hecto, std::chrono::years::period>, std::nano>>;
    using fps_24 = std::chrono::duration<double, std::ratio<1, 24>>;
 
    std::cout << "1 second is:\n";
 
    // integer scale conversion with no precision loss: no cast
    std::cout << std::chrono::milliseconds(1s).count() << " milliseconds\n"
              << std::chrono::microseconds(1s).count() << " microseconds\n"
              << std::chrono::nanoseconds(1s).count() << " nanoseconds\n";
 
    // integer scale conversion with precision loss: requires a cast
    std::cout << std::chrono::duration_cast<std::chrono::minutes>(1s).count()
              << " minutes\n";
    // alternative to duration_cast:
    std::cout << 1s / 1min << " minutes\n";
 
    // floating-point scale conversion: no cast
    std::cout << microfortnights(1s).count() << " microfortnights\n"
              << nanocenturies(1s).count() << " nanocenturies\n"
              << fps_24(1s).count() << " frames at 24fps\n";
}

```

Output:

```
1 second is:
1000 milliseconds
1000000 microseconds
1000000000 nanoseconds
0 minutes
0 minutes
0.82672 microfortnights
0.316887 nanocenturies
24 frames at 24fps

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/duration&oldid=179838>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 January 2025, at 08:47.