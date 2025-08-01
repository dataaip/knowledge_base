# std::chrono::operator==,<,<=,>,>=,<=>(std::chrono::leap_second)

From cppreference.com
< cpp‎ | chrono‎ | leap second
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

std::chrono::leap_second

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| leap_second::date | | | | |
| Nonmember functions | | | | |
| ****operator==operator<operator<=operator>operator>=operator<=>**** | | | | |
| Helper classes | | | | |
| hash<std::chrono::leap_second>(C++26) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<chrono>` |  |  |
| constexpr bool operator==( const std::chrono::leap_second& x,                             const std::chrono::leap_second& y ) noexcept; | (1) | (since C++20) |
| constexpr std::strong_ordering operator<=>( const std::chrono::leap_second& x,                                              const std::chrono::leap_second& y ) noexcept; | (2) | (since C++20) |
| template< class Duration >  constexpr bool operator==( const std::chrono::leap_second& x, const std::chrono::sys_time<Duration>& y ) noexcept; | (3) | (since C++20) |
| template< class Duration >  constexpr bool operator< ( const std::chrono::leap_second& x, const std::chrono::sys_time<Duration>& y ) noexcept; | (4) | (since C++20) |
| template< class Duration >  constexpr bool operator< ( const std::chrono::sys_time<Duration>& x, const std::chrono::leap_second& y ) noexcept; | (5) | (since C++20) |
| template< class Duration >  constexpr bool operator> ( const std::chrono::leap_second& x, const std::chrono::sys_time<Duration>& y ) noexcept; | (6) | (since C++20) |
| template< class Duration >  constexpr bool operator> ( const std::chrono::sys_time<Duration>& x, const std::chrono::leap_second& y ) noexcept; | (7) | (since C++20) |
| template< class Duration >  constexpr bool operator<=( const std::chrono::leap_second& x, const std::chrono::sys_time<Duration>& y ) noexcept; | (8) | (since C++20) |
| template< class Duration >  constexpr bool operator<=( const std::chrono::sys_time<Duration>& x, const std::chrono::leap_second& y ) noexcept; | (9) | (since C++20) |
| template< class Duration >  constexpr bool operator>=( const std::chrono::leap_second& x, const std::chrono::sys_time<Duration>& y ) noexcept; | (10) | (since C++20) |
| template< class Duration >  constexpr bool operator>=( const std::chrono::sys_time<Duration>& x, const std::chrono::leap_second& y ) noexcept; | (11) | (since C++20) |
| template< class Duration >      requires std::three_way_comparable_with<          std::chrono::sys_seconds, std::chrono::sys_time<Duration>>  constexpr auto operator<=>( const std::chrono::leap_second& x, const std::chrono::sys_time<Duration>& y ) noexcept; | (12) | (since C++20) |
|  |  |  |

Compares the date and time represented by the objects x and y.

Return type of (12) is deduced from x.date() <=> y, and hence the three-way comparison result type of std::chrono::seconds and `Duration`.

The `!=` operator is synthesized from `operator==`.

### Return value

1) x.date() == y.date()2) x.date() <=> y.date()3) x.date() == y4) x.date() < y5) x < y.date()6) x.date() > y7) x > y.date()8) x.date() <= y9) x <= y.date()10) x.date() >= y11) x >= y.date()12) x.date() <=> y
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/leap_second/operator_cmp&oldid=161600>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 October 2023, at 09:11.