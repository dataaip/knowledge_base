# std::chrono::utc_clock

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | duration(C++11) | | | | | |
| Clocks | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | system_clock(C++11) | | | | | | steady_clock(C++11) | | | | | | is_clock(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****utc_clock****(C++20) | | | | | | tai_clock(C++20) | | | | | | high_resolution_clock(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | gps_clock(C++20) | | | | | | file_clock(C++20) | | | | | | local_t(C++20) | | | | | |
| Time of day | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_amis_pm(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | make12make24(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hh_mm_ss(C++20) | | | | | |  | | | | | |
| Calendar | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | day(C++20) | | | | | | month(C++20) | | | | | | year(C++20) | | | | | | weekday(C++20) | | | | | | operator/(C++20) | | | | | | year_month_day(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | year_month_day_last(C++20) | | | | | | year_month_weekday(C++20) | | | | | | year_month_weekday_last(C++20) | | | | | | weekday_indexed(C++20) | | | | | | weekday_last(C++20) | | | | | | month_day(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | month_day_last(C++20) | | | | | | month_weekday(C++20) | | | | | | month_weekday_last(C++20) | | | | | | year_month(C++20) | | | | | | last_speclast(C++20)(C++20) | | | | | |
| Time zone | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | tzdb(C++20) | | | | | | tzdb_list(C++20) | | | | | | get_tzdbget_tzdb_listreload_tzdbremote_version(C++20)(C++20)(C++20)(C++20) | | | | | | sys_info(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | local_info(C++20) | | | | | | nonexistent_local_time(C++20) | | | | | | ambiguous_local_time(C++20) | | | | | | locate_zone(C++20) | | | | | | current_zone(C++20) | | | | | | time_zone(C++20) | | | | | | choose(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | zoned_traits(C++20) | | | | | | zoned_time(C++20) | | | | | | time_zone_link(C++20) | | | | | | leap_second(C++20) | | | | | | leap_second_info(C++20) | | | | | | get_leap_second_info(C++20) | | | | | |  | | | | | |
| `chrono` I/O | | | | |
| parse(C++20) | | | | |
| C-style date and time | | | | |

****std::chrono::utc_clock****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| utc_clock::now | | | | |
| utc_clock::to_sys | | | | |
| utc_clock::from_sys | | | | |
| Time point I/O | | | | |
| operator<< | | | | |
| formatter<std::chrono::utc_time> | | | | |
| from_stream | | | | |
| Leap second insertion information | | | | |
| leap_second_info | | | | |
| get_leap_second_info | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<chrono>` |  |  |
| class utc_clock; |  | (since C++20) |
|  |  |  |

The clock `std::chrono::utc_clock` is a Clock that represents Coordinated Universal Time (UTC). It measures time since 00:00:00 UTC, Thursday, 1 January 1970, including leap seconds.

`utc_clock` meets the Clock requirements. It does not meet the TrivialClock requirements unless the implementation can guarantee that now() does not throw an exception.

### Time point family

|  |  |  |
| --- | --- | --- |
| Defined in namespace `std::chrono` |  |  |
| template<class Duration>  using utc_time = std::chrono::time_point<std::chrono::utc_clock, Duration>; |  | (since C++20) |
| using utc_seconds = utc_time<std::chrono::seconds>; |  | (since C++20) |
|  |  |  |

|  |  |
| --- | --- |
| operator<<(std::chrono::utc_time)(C++20) | performs stream output on a `utc_time`   (function template) |
| from_stream(std::chrono::utc_time)(C++20) | parses a `utc_time` from a stream according to the provided format   (function template) |
| std::formatter<std::chrono::utc_time>(C++20) | formatting support for `utc_time`   (class template specialization) |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `rep` | signed arithmetic type representing the number of ticks in the clock's duration |
| `period` | a std::ratio type representing the tick period of the clock, in seconds |
| `duration` | std::chrono::duration<rep, period>, capable of representing negative durations |
| `time_point` | std::chrono::time_point<std::chrono::utc_clock> |

### Member constants

|  |  |
| --- | --- |
| constexpr bool is_steady[static] | true if the time between ticks is always constant, i.e. calls to now() return values that increase monotonically even in case of some external clock adjustment, otherwise false   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| now[static] | returns a std::chrono::time_point representing the current point in time   (public static member function) |
| to_sys[static] | converts `utc_time` to `sys_time`   (public static member function) |
| from_sys[static] | converts `sys_time` to `utc_time`   (public static member function) |

### Non-member functions

|  |  |
| --- | --- |
| get_leap_second_info(C++20) | obtains leap second insertion information from a `utc_time` object   (function template) |

### Helper classes

|  |  |
| --- | --- |
| leap_second_info(C++20) | leap second insertion information   (class) |

### Notes

The official UTC epoch is 1 January 1972. `utc_clock` uses 1 January 1970 instead to be consistent with std::chrono::system_clock.

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/utc_clock&oldid=161890>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 November 2023, at 22:31.