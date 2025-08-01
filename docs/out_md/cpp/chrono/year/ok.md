# std::chrono::year::ok

From cppreference.com
< cpp‎ | chrono‎ | year
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

std::chrono::year

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| year::year | | | | |
| year::operator++year::operator-- | | | | |
| year::operator+=year::operator-= | | | | |
| year::operator+year::operator- | | | | |
| year::is_leap | | | | |
| year::operator int | | | | |
| ****year::ok**** | | | | |
| year::min | | | | |
| year::max | | | | |
| Nonmember functions | | | | |
| operator==operator<=> | | | | |
| operator+operator- | | | | |
| operator<< | | | | |
| from_stream | | | | |
| operator""y | | | | |
| Helper classes | | | | |
| formatter<std::chrono::year> | | | | |
| hash<std::chrono::year>(C++26) | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr bool ok() const noexcept; |  | (since C++20) |
|  |  |  |

Checks if the year value stored in \*this is in the valid range, i.e., `[`-32767`,`32767`]`.

### Return value

true if the year value stored in \*this is in the range `[`-32767`,`32767`]`. Otherwise false.

### Possible implementation

See the implementations in
libstdc++,
libc++,
and Howard Hinnant's
date.h.

|  |
| --- |
| ```text class Year {     short year_;   // exposition-only   public:       bool ok() const noexcept { return year_ != std::numeric_limits<short>::min(); }       /*...*/ }; ``` |

### Example

Run this code

```
#include <chrono>
#include <iomanip>
#include <iostream>
 
int main()
{
    std::cout << "input year │ internal value │ ok()\n" << std::boolalpha;
 
    for (const int i : {2020, 0x8000, 0x8001, 0xFFFF, 0x18000})
    {
        const std::chrono::year y{i};
        std::cout << std::setw(10) << i << " │ "
                  << std::setw(14) << static_cast<int>(y) << " │ "
                  << y.ok() << '\n';
    }
}

```

Possible output:

```
input year │ internal value │ ok()
      2020 │           2020 │ true
     32768 │         -32768 │ false
     32769 │         -32767 │ true
     65535 │             -1 │ true
     98304 │         -32768 │ false

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/year/ok&oldid=156895>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 August 2023, at 23:06.