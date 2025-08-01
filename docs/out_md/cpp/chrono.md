# Date and time utilities

From cppreference.com
< cpp
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
| ****Date and time library**** | | | | |
| Input/output library | | | | |
| Filesystem library (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

****Date and time library****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Time point | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | time_point(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clock_time_conversion(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clock_cast(C++20) | | | | | |
| Duration | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | duration(C++11) | | | | | |
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

C++ includes support for two types of time manipulation:

- The `chrono` library, a flexible collection of types that track time with varying degrees of precision (e.g. std::chrono::time_point).
- C-style date and time library (e.g. std::time).

### Chrono library (since C++11)

The `chrono` library defines three(until C++20)five(since C++20) main types as well as utility functions and common typedefs:

- clocks
- time points
- durations

|  |  |
| --- | --- |
| - calendar dates - time zone information | (since C++20) |

#### Clocks

A clock consists of a starting point (or epoch) and a tick rate. For example, a clock may have an epoch of January 1, 1970 and tick every second. C++ defines several clock types:

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| system_clock(C++11) | wall clock time from the system-wide realtime clock   (class) |
| steady_clock(C++11) | monotonic clock that will never be adjusted   (class) |
| high_resolution_clock(C++11) | the clock with the shortest tick period available   (class) |
| is_clockis_clock_v(C++20) | determines if a type is a Clock (class template) (variable template) |
| utc_clock(C++20) | Clock for Coordinated Universal Time (UTC)   (class) |
| tai_clock(C++20) | Clock for International Atomic Time (TAI)   (class) |
| gps_clock(C++20) | Clock for GPS time   (class) |
| file_clock(C++20) | Clock used for file time   (typedef) |
| local_t(C++20) | pseudo-clock representing local time   (class) |

#### Time point

A time point is a duration of time that has passed since the epoch of a specific clock.

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| time_point(C++11) | a point in time   (class template) |
| clock_time_conversion(C++20) | traits class defining how to convert time points of one clock to another   (class template) |
| clock_cast(C++20) | convert time points of one clock to another   (function template) |

#### Duration

A duration consists of a span of time, defined as some number of ticks of some time unit. For example, "42 seconds" could be represented by a duration consisting of 42 ticks of a 1-second time unit.

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| duration(C++11) | a time interval   (class template) |

#### Time of day (since C++20)

`hh_mm_ss` splits a duration representing time elapsed since midnight into hours, minutes, seconds, and fractional seconds, as applicable. It is primarily a formatting tool.

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| hh_mm_ss(C++20) | represents a time of day   (class template) |
| is_amis_pmmake12make24(C++20) | translates between a 12h/24h format time of day   (function) |

#### Calendar (since C++20)

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| last_spec(C++20) | tag class indicating the **last** day or weekday in a month   (class) |
| day(C++20) | represents a day of a month   (class) |
| month(C++20) | represents a month of a year   (class) |
| year(C++20) | represents a year in the Gregorian calendar   (class) |
| weekday(C++20) | represents a day of the week in the Gregorian calendar   (class) |
| weekday_indexed(C++20) | represents the nth weekday of a month   (class) |
| weekday_last(C++20) | represents the last weekday of a month   (class) |
| month_day(C++20) | represents a specific day of a specific month   (class) |
| month_day_last(C++20) | represents the last day of a specific month   (class) |
| month_weekday(C++20) | represents the nth weekday of a specific month   (class) |
| month_weekday_last(C++20) | represents the last weekday of a specific month   (class) |
| year_month(C++20) | represents a specific month of a specific year   (class) |
| year_month_day(C++20) | represents a specific year, month, and day   (class) |
| year_month_day_last(C++20) | represents the last day of a specific year and month   (class) |
| year_month_weekday(C++20) | represents the nth weekday of a specific year and month   (class) |
| year_month_weekday_last(C++20) | represents the last weekday of a specific year and month   (class) |
| operator/(C++20) | conventional syntax for Gregorian calendar date creation   (function) |

#### Time zone (since C++20)

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| tzdb(C++20) | describes a copy of the IANA time zone database   (class) |
| tzdb_list(C++20) | represents a linked list of tzdb   (class) |
| get_tzdbget_tzdb_listreload_tzdbremote_version(C++20) | accesses and controls the global time zone database information   (function) |
| locate_zone(C++20) | locates a time_zone based on its name   (function) |
| current_zone(C++20) | returns the current time_zone   (function) |
| time_zone(C++20) | represents a time zone   (class) |
| sys_info(C++20) | represents information about a time zone at a particular time point   (class) |
| local_info(C++20) | represents information about a local time to UNIX time conversion   (class) |
| choose(C++20) | selects how an ambiguous local time should be resolved   (enum) |
| zoned_traits(C++20) | traits class for time zone pointers used by zoned_time   (class template) |
| zoned_time(C++20) | represents a time zone and a time point   (class) |
| leap_second(C++20) | contains information about a leap second insertion   (class) |
| leap_second_info(C++20) | leap second insertion information   (class) |
| get_leap_second_info(C++20) | obtains leap second insertion information from a `utc_time` object   (function template) |
| time_zone_link(C++20) | represents an alternative name for a time zone   (class) |
| nonexistent_local_time(C++20) | exception thrown to report that a local time is nonexistent   (class) |
| ambiguous_local_time(C++20) | exception thrown to report that a local time is ambiguous   (class) |

#### Literals (since C++14)

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in inline namespace `std::literals::chrono_literals` | |
| operator""y(C++20) | a std::chrono::year literal representing a particular year   (function) |
| operator""d(C++20) | a std::chrono::day literal representing a day of a month   (function) |
| operator""h(C++14) | a std::chrono::duration literal representing hours   (function) |
| operator""min(C++14) | a std::chrono::duration literal representing minutes   (function) |
| operator""s(C++14) | a std::chrono::duration literal representing seconds   (function) |
| operator""ms(C++14) | a std::chrono::duration literal representing milliseconds   (function) |
| operator""us(C++14) | a std::chrono::duration literal representing microseconds   (function) |
| operator""ns(C++14) | a std::chrono::duration literal representing nanoseconds   (function) |

#### Chrono I/O (since C++20)

|  |  |
| --- | --- |
| Defined in header `<chrono>` | |
| Defined in namespace `std::chrono` | |
| parse(C++20) | parses a `chrono` object from a stream   (function template) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_chrono` | `201510L` | (C++17) | Rounding functions for std::chrono::duration and std::chrono::time_point |
| `201611L` | (C++17) | constexpr for all the member functions of std::chrono::duration and std::chrono::time_point |
| `201907L` | (C++20) | Calendars and Time zones |
| `202306L` | (C++26) | Hashing support for `std::chrono` value classes |

### C-style date and time library

Also provided are the C-style date and time functions, such as std::time_t, std::difftime, and CLOCKS_PER_SEC.

### Example

Measures and displays an execution time of a function call.

Run this code

```
#include <chrono>
#include <iostream>
 
long Fibonacci(unsigned n)
{
    return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}
 
int main()
{
    const auto start{std::chrono::steady_clock::now()};
    const auto fb{Fibonacci(42)};
    const auto end{std::chrono::steady_clock::now()};
    const std::chrono::duration<double> elapsed_seconds{end - start};
 
    std::cout << "Fibonacci(42): " << fb << "\nElapsed time: ";
//  std::cout << elapsed_seconds.count() << "s\n"; // Before C++20
    std::cout << elapsed_seconds << '\n'; // C++20's chrono::duration operator<<
}

```

Possible output:

```
Fibonacci(42): 267914296
Elapsed time: 0.791429s

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono&oldid=179908>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2025, at 11:46.