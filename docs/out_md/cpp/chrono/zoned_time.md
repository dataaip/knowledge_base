# std::chrono::zoned_time

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | system_clock(C++11) | | | | | | steady_clock(C++11) | | | | | | is_clock(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | utc_clock(C++20) | | | | | | tai_clock(C++20) | | | | | | high_resolution_clock(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | gps_clock(C++20) | | | | | | file_clock(C++20) | | | | | | local_t(C++20) | | | | | |
| Time of day | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_amis_pm(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | make12make24(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | hh_mm_ss(C++20) | | | | | |  | | | | | |
| Calendar | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | day(C++20) | | | | | | month(C++20) | | | | | | year(C++20) | | | | | | weekday(C++20) | | | | | | operator/(C++20) | | | | | | year_month_day(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | year_month_day_last(C++20) | | | | | | year_month_weekday(C++20) | | | | | | year_month_weekday_last(C++20) | | | | | | weekday_indexed(C++20) | | | | | | weekday_last(C++20) | | | | | | month_day(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | month_day_last(C++20) | | | | | | month_weekday(C++20) | | | | | | month_weekday_last(C++20) | | | | | | year_month(C++20) | | | | | | last_speclast(C++20)(C++20) | | | | | |
| Time zone | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | tzdb(C++20) | | | | | | tzdb_list(C++20) | | | | | | get_tzdbget_tzdb_listreload_tzdbremote_version(C++20)(C++20)(C++20)(C++20) | | | | | | sys_info(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | local_info(C++20) | | | | | | nonexistent_local_time(C++20) | | | | | | ambiguous_local_time(C++20) | | | | | | locate_zone(C++20) | | | | | | current_zone(C++20) | | | | | | time_zone(C++20) | | | | | | choose(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | zoned_traits(C++20) | | | | | | ****zoned_time****(C++20) | | | | | | time_zone_link(C++20) | | | | | | leap_second(C++20) | | | | | | leap_second_info(C++20) | | | | | | get_leap_second_info(C++20) | | | | | |  | | | | | |
| `chrono` I/O | | | | |
| parse(C++20) | | | | |
| C-style date and time | | | | |

****std::chrono::zoned_time****

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
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<chrono>` |  |  |
| template<  class Duration,      class TimeZonePtr = const std::chrono::time_zone\* > class zoned_time; |  | (since C++20) |
| using zoned_seconds = std::chrono::zoned_time<std::chrono::seconds>; |  | (since C++20) |
|  |  |  |

The class `zoned_time` represents a logical pairing of a time zone and a std::chrono::time_point whose resolution is `Duration`.

An invariant of `zoned_time` is that it always refers to a valid time zone and represents an existing and unambiguous time point in that time zone. Consistent with this invariant, `zoned_time` has no move constructor or move assignment operator; attempts to move a `zoned_time` will perform a copy.

The program is ill-formed if `Duration` is not a specialization of std::chrono::duration.

The template parameter `TimeZonePtr` allows users to supply their own time zone pointer types and further customize the behavior of `zoned_time` via std::chrono::zoned_traits. Custom time zone types need not support all the operations supported by std::chrono::time_zone, only those used by the functions actually called on the `zoned_time`.

`TimeZonePtr` must be MoveConstructible. Move-only `TimeZonePtr`s are allowed but difficult to use, as the `zoned_time` will be immovable and it is not possible to access the stored `TimeZonePtr`.

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `duration` | std::common_type_t<Duration, std::chrono::seconds> |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `zoned_time`   (public member function) |
| operator= | assigns value to a `zoned_time`   (public member function) |
| get_time_zone | obtains a copy of the time zone pointer   (public member function) |
| operator local_timeget_local_time | obtains the stored time point as a `local_time`   (public member function) |
| operator sys_timeget_sys_time | obtains the stored time point as a `sys_time`   (public member function) |
| get_info | obtain information about the time zone at the stored time point   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==(C++20) | compares two `zoned_time` values   (function template) |
| operator<<(C++20) | outputs a `zoned_time` into a stream   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::formatter<std::chrono::zoned_time>(C++20) | formatting support for `zoned_time`   (class template specialization) |
| std::hash<std::chrono::zoned_time>(C++26) | hash support for ****std::chrono::zoned_time****   (class template specialization) |

### Helper specializations

|  |  |  |
| --- | --- | --- |
| template< class Duration >  constexpr bool enable_nonlocking_formatter_optimization <chrono::zoned_time<Duration, const chrono::time_zone\*>> = true; |  | (since C++23) |
|  |  |  |

This specialization of std::enable_nonlocking_formatter_optimization enables efficient implementation of std::print and std::println for printing a `chrono::zoned_time` object.

### Deduction guides

### Example

Run this code

```
#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string_view>
 
int main()
{
    constexpr std::string_view locations[] =
    {
        "Africa/Casablanca",   "America/Argentina/Buenos_Aires",
        "America/Barbados",    "America/Indiana/Petersburg",
        "America/Tarasco_Bar", "Antarctica/Casey",
        "Antarctica/Vostok",   "Asia/Magadan",
        "Asia/Manila",         "Asia/Shanghai",
        "Asia/Tokyo",          "Atlantic/Bermuda",
        "Australia/Darwin",    "Europe/Isle_of_Man",
        "Europe/Laputa",       "Indian/Christmas",
        "Indian/Cocos",        "Pacific/Galapagos",
    };
 
    constexpr auto width = std::ranges::max_element(locations, {},
        [](const auto& s){ return s.length(); })->length();
 
    for (const auto location : locations)
        try
        {
            // may throw if 'location' is not in the time zone database
            const std::chrono::zoned_time zt{location, std::chrono::system_clock::now()};
            std::cout << std::setw(width) << location << " - Zoned Time: " << zt << '\n';
        }
        catch (std::runtime_error& ex)
        {
            std::cout << "Error: " << ex.what() << '\n';
        }
}

```

Possible output:

```

             Africa/Casablanca - Zoned Time: 2023-06-29 20:58:34.697449319 +01
America/Argentina/Buenos_Aires - Zoned Time: 2023-06-29 16:58:34.709957354 -03
              America/Barbados - Zoned Time: 2023-06-29 15:58:34.709977888 AST
    America/Indiana/Petersburg - Zoned Time: 2023-06-29 15:58:34.709998072 EDT
Error: tzdb: cannot locate zone: America/Tarasco_Bar
              Antarctica/Casey - Zoned Time: 2023-06-30 06:58:34.710093685 +11
             Antarctica/Vostok - Zoned Time: 2023-06-30 01:58:34.710107932 +06
                  Asia/Magadan - Zoned Time: 2023-06-30 06:58:34.710121831 +11
                   Asia/Manila - Zoned Time: 2023-06-30 03:58:34.710134751 PST
                 Asia/Shanghai - Zoned Time: 2023-06-30 03:58:34.710153259 CST
                    Asia/Tokyo - Zoned Time: 2023-06-30 04:58:34.710172815 JST
              Atlantic/Bermuda - Zoned Time: 2023-06-29 16:58:34.710191043 ADT
              Australia/Darwin - Zoned Time: 2023-06-30 05:28:34.710236720 ACST
            Europe/Isle_of_Man - Zoned Time: 2023-06-29 20:58:34.710256834 BST
Error: tzdb: cannot locate zone: Europe/Laputa
              Indian/Christmas - Zoned Time: 2023-06-30 02:58:34.710360409 +07
                  Indian/Cocos - Zoned Time: 2023-06-30 02:28:34.710377520 +0630
             Pacific/Galapagos - Zoned Time: 2023-06-29 13:58:34.710389952 -06

```

### See also

|  |  |
| --- | --- |
| time_zone(C++20) | represents a time zone   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/zoned_time&oldid=173866>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 July 2024, at 04:27.