# Deduction guides for `std::chrono::zoned_time`

From cppreference.com
< cpp‎ | chrono‎ | zoned time
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

std::chrono::zoned_time

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| zoned_time::zoned_time | | | | |
| zoned_time::operator= | | | | |
| zoned_time::get_time_zone | | | | |
| zoned_time::get_sys_timezoned_time::operator sys_time | | | | |
| zoned_time::get_local_timezoned_time::operator local_time | | | | |
| zoned_time::get_info | | | | |
| Nonmember functions | | | | |
| operator== | | | | |
| operator<< | | | | |
| Helper classes | | | | |
| formatter<std::chrono::zoned_time> | | | | |
| hash<std::chrono::zoned_time>(C++26) | | | | |
| ****Deduction guides**** | | | | |

|  |  |  |
| --- | --- | --- |
| zoned_time() -> zoned_time<std::chrono::seconds>; | (1) | (since C++20) |
| template< class Duration >  zoned_time( std::chrono::sys_time<Duration> ) -> zoned_time<std::common_type_t<Duration, std::chrono::seconds>>; | (2) | (since C++20) |
| template< class TimeZonePtrOrName >  zoned_time( TimeZonePtrOrName&& ) -> zoned_time<std::chrono::seconds, /\* see below \*/>; | (3) | (since C++20) |
| template< class TimeZonePtrOrName, class Duration >  zoned_time( TimeZonePtrOrName&&, std::chrono::sys_time<Duration> ) -> zoned_time<std::common_type_t<Duration, std::chrono::seconds>, /\* see below \*/>; | (4) | (since C++20) |
| template< class TimeZonePtrOrName, class Duration >  zoned_time( TimeZonePtrOrName&&, std::chrono::local_time<Duration>,              std::chrono::choose = std::chrono::choose::earliest ) -> zoned_time<std::common_type_t<Duration, std::chrono::seconds>, /\* see below \*/>; | (5) | (since C++20) |
| template< class TimeZonePtrOrName, class Duration, class TimeZonePtr2 >  zoned_time( TimeZonePtrOrName&&, std::chrono::zoned_time<Duration, TimeZonePtr2>,              std::chrono::choose = std::chrono::choose::earliest ) -> zoned_time<std::common_type_t<Duration, std::chrono::seconds>, /\* see below \*/>; | (6) | (since C++20) |
|  |  |  |

These deduction guides normalize `Duration` to a minimum resolution of std::chrono::seconds, and provide correct handling for time zone names specified using types convertible to std::string_view.

3-6) If std::is_convertible_v<TimeZonePtrOrName, std::string_view> is true, the deduced second template argument is const std::chrono::time_zone\*. Otherwise it is std::remove_cvref_t<TimeZonePtrOrName>.
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/zoned_time/deduction_guides&oldid=161726>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 October 2023, at 10:38.