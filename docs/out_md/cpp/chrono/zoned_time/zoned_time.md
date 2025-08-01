# std::chrono::zoned_time<Duration,TimeZonePtr>::zoned_time

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
| ****zoned_time::zoned_time**** | | | | |
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
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| zoned_time(); | (1) | (since C++20) |
| zoned_time( const std::chrono::sys_time<Duration>& st ); | (2) | (since C++20) |
| zoned_time( const zoned_time& other ) = default; | (3) | (since C++20) |
| template< class Duration2 >  zoned_time( const std::chrono::zoned_time<Duration2, TimeZonePtr>& other ); | (4) | (since C++20) |
| explicit zoned_time( TimeZonePtr z ); | (5) | (since C++20) |
| explicit zoned_time( std::string_view name ); | (6) | (since C++20) |
| zoned_time( TimeZonePtr z, const std::chrono::sys_time<Duration>& st ); | (7) | (since C++20) |
| zoned_time( std::string_view name, const std::chrono::sys_time<Duration>& st ); | (8) | (since C++20) |
| zoned_time( TimeZonePtr z, const std::chrono::local_time<Duration>& tp ); | (9) | (since C++20) |
| zoned_time( std::string_view name, const std::chrono::local_time<Duration>& tp ); | (10) | (since C++20) |
| zoned_time( TimeZonePtr z, const std::chrono::local_time<Duration>& tp,              std::chrono::choose c ); | (11) | (since C++20) |
| zoned_time( std::string_view name,              const std::chrono::local_time<Duration>& tp, std::chrono::choose c ); | (12) | (since C++20) |
| template< class Duration2, class TimeZonePtr2 >  zoned_time( TimeZonePtr z, const std::chrono::zoned_time<Duration2, TimeZonePtr2>& zt ); | (13) | (since C++20) |
| template< class Duration2, class TimeZonePtr2 >  zoned_time( TimeZonePtr z,              const std::chrono::zoned_time<Duration2, TimeZonePtr2>& zt, std::chrono::choose ); | (14) | (since C++20) |
| template< class Duration2, class TimeZonePtr2 >  zoned_time( std::string_view name, const std::chrono::zoned_time<Duration2, TimeZonePtr2>& zt ); | (15) | (since C++20) |
| template< class Duration2, class TimeZonePtr2 >  zoned_time( std::string_view name,              const std::chrono::zoned_time<Duration2, TimeZonePtr2>& zt, std::chrono::choose ); | (16) | (since C++20) |
|  |  |  |

Constructs a `zoned_time` object, initializing the stored time zone pointer and time point according to the following table, where `traits` is std::chrono::zoned_traits<TimeZonePtr>:

| Overload | Time zone pointer (denoted `zone`) | Time point (a std::chrono::sys_time<duration>) | Notes |
| --- | --- | --- | --- |
| (1) | traits::default_zone() | default constructed | (a) |
| (2) | `st` |
| (3) | other.get_time_zone() | other.get_sys_time() | (b) |
| (4) | other.get_time_zone() | other.get_sys_time() | (e) |
| (5) | std::move(z) | default constructed |  |
| (6) | traits::locate_zone(name) | (c) |
| (7) | std::move(z) | `st` |  |
| (8) | traits::locate_zone(name) | (c) |
| (9) | std::move(z) | zone->to_sys(tp) | (d) |
| (10) | traits::locate_zone(name) | (c,d) |
| (11) | std::move(z) | zone->to_sys(tp, c) | (d) |
| (12) | traits::locate_zone(name) | (c,d) |
| (13,14) | std::move(z) | zt.get_sys_time() | (e) |
| (15,16) | traits::locate_zone(name) | (c,e) |

a) Constructors specified to call traits::default_zone() (1,2) do not participate in overload resolution if that expression is not well-formed.b) The defaulted copy constructor (3) is defined as deleted if std::is_copy_constructible_v<TimeZonePtr> is false.c) Constructors with a std::string_view parameter `name` (6,8,10,12,15,16) do not participate in overload resolution if traits::locate_zone(name) is not well-formed or if that expression is not convertible to `TimeZonePtr`.d) Constructors specified to call zone->to_sys (9-12) do not participate in overload resolution if that call expression is not well-formed or if the result is not convertible to std::chrono::sys_time<duration>.e) Constructors with a template parameter `Duration2` (4,13-16) do not participate in overload resolution if `Duration2` is not convertible to `Duration`.

The behavior is undefined if the time zone pointer (initialized as described above) does not refer to a time zone.

### Notes

`zoned_time` does not have a move constructor and attempting to move one will perform a copy instead using the defaulted copy constructor (3). Thus, when `TimeZonePtr` is a move-only type, `zoned_time` is immovable: it can be neither moved nor copied.

The constructors (14,16) accept a std::chrono::choose parameter, but that parameter has no effect.

### Example

Run this code

```
#include <chrono>
#include <iostream>
#include <string_view>
 
int main()
{
    using std::chrono_literals::operator""y;
    using std::operator""sv;
 
    std::cout << std::chrono::zoned_time{} << " : default\n";
 
    constexpr std::string_view location1{"America/Phoenix"sv};
    std::cout << std::chrono::zoned_time{location1} << " : " << location1 << '\n';
 
    const std::chrono::time_zone* timeZonePtr = std::chrono::locate_zone("UTC");
    std::cout << std::chrono::zoned_time{timeZonePtr} << " : UTC time zone\n";
 
    constexpr auto location2{"Europe/Rome"sv};
    std::cout << std::chrono::zoned_time{location2, std::chrono::local_days{2021y/12/31}}
              << " : " << location2 << '\n';
 
    constexpr auto location3{"Europe/Rome"sv};
    constexpr auto some_date = std::chrono::sys_time<std::chrono::days>{2021y/12/31};
    std::cout << std::chrono::zoned_time{location3, some_date}
              << " : " << location3 << '\n';
 
    const auto now =
        std::chrono::floor<std::chrono::minutes>(std::chrono::system_clock::now());
    constexpr auto location4{"Europe/Rome"sv};
    std::cout << std::chrono::zoned_time{location4, now} << " : " << location4 << '\n';
 
    constexpr auto NewYork{"America/New_York"sv};
    constexpr auto Tokyo{"Asia/Tokyo"sv};
    const std::chrono::zoned_time tz_Tokyo{Tokyo, now};
    const std::chrono::zoned_time tz_NewYork{NewYork, now};
    std::cout << std::chrono::zoned_time{Tokyo, tz_NewYork} << " : " << Tokyo << '\n';
    std::cout << std::chrono::zoned_time{NewYork, tz_Tokyo} << " : " << NewYork << '\n';
}

```

Possible output:

```
1970-01-01 00:00:00 UTC : default
1969-12-31 17:00:00 MST : America/Phoenix
1970-01-01 00:00:00 UTC : UTC time zone
2021-12-31 00:00:00 CET : Europe/Rome
2021-12-31 01:00:00 CET : Europe/Rome
2021-09-20 23:04:00 CEST : Europe/Rome
2021-09-21 06:04:00 JST : Asia/Tokyo
2021-09-20 17:04:00 EDT : America/New_York

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/zoned_time/zoned_time&oldid=161719>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 October 2023, at 10:30.