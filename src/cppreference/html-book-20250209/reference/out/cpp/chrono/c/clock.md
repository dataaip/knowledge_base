# std::clock

From cppreference.com
< cpp‎ | chrono‎ | c
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

C-style date and time utilities

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| Time manipulation | | | | |
| difftime | | | | |
| time | | | | |
| ****clock**** | | | | |
| timespec_get(C++17) | | | | |
| Format conversions | | | | |
| asctime | | | | |
| ctime | | | | |
| strftime | | | | |
| wcsftime | | | | |
| gmtime | | | | |
| localtime | | | | |
| mktime | | | | |
| Constants | | | | |
| CLOCKS_PER_SEC | | | | |
| Types | | | | |
| tm | | | | |
| time_t | | | | |
| clock_t | | | | |
| timespec(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ctime>` |  |  |
| std::clock_t clock(); |  |  |
|  |  |  |

Returns the approximate processor time used by the process since the beginning of an implementation-defined era related to the program's execution. To convert result value to seconds divide it by CLOCKS_PER_SEC.

Only the difference between two values returned by different calls to `std::clock` is meaningful, as the beginning of the `std::clock` era does not have to coincide with the start of the program.

`std::clock` time may advance faster or slower than the wall clock, depending on the execution resources given to the program by the operating system. For example, if the CPU is shared by other processes, `std::clock` time may advance slower than wall clock. On the other hand, if the current process is multithreaded and more than one execution core is available, `std::clock` time may advance faster than wall clock.

### Return value

Processor time used by the program so far.

- If the processor time used is not available, returns (std::clock_t)(-1).
- If the value of the processor time used cannot be represented by std::clock_t, returns an unspecified value.

### Exceptions

Throws nothing.

### Notes

On POSIX-compatible systems, `clock_gettime` with clock id CLOCK_PROCESS_CPUTIME_ID offers better resolution.

The value returned by `clock()` may wrap around on some implementations. For example, on such an implementation, if std::clock_t is a signed 32-bit integer and CLOCKS_PER_SEC is 1'000'000, it will wrap after about 2147 seconds (about 36 minutes).

### Example

This example demonstrates the difference between `clock()` time and real time.

Run this code

```
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <thread>
 
// The function f() does some time-consuming work.
void f()
{
    volatile double d = 0;
    for (int n = 0; n != 10000; ++n)
        for (int m = 0; m != 10000; ++m)
            d += d * n * m;
}
 
int main()
{
    const std::clock_t c_start = std::clock();
    auto t_start = std::chrono::high_resolution_clock::now();
    std::thread t1(f);
    std::thread t2(f); // f() is called on two threads
    t1.join();
    t2.join();
    const std::clock_t c_end = std::clock();
    const auto t_end = std::chrono::high_resolution_clock::now();
 
    std::cout << std::fixed << std::setprecision(2) << "CPU time used: "
              << 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC << "ms\n"
              << "Wall clock time passed: "
              << std::chrono::duration<double, std::milli>(t_end - t_start) << '\n';
}

```

Possible output:

```
CPU time used: 1590.00ms
Wall clock time passed: 808.23ms

```

### See also

|  |  |
| --- | --- |
| ctime | converts a std::time_t object to a textual representation   (function) |
| time | returns the current time of the system as time since epoch   (function) |
| C documentation for clock | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/chrono/c/clock&oldid=180250>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 February 2025, at 18:13.