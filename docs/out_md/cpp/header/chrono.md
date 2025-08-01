# Standard library header <chrono> (C++11)

From cppreference.com
< cpp‎ | header
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | ****<chrono>**** (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the date and time library.

|  |  |
| --- | --- |
| Includes | |
| <compare>(C++20) | Three-way comparison operator support |
| Classes | |
| Duration | |
| Defined in namespace `std::chrono` | |
| duration(C++11) | a time interval   (class template) |
| treat_as_floating_point(C++11) | indicates that a duration is convertible to duration with different tick period   (class template) |
| duration_values(C++11) | constructs zero, min, and max values of a tick count of given type   (class template) |
| Convenience duration typedefs | |
| Defined in namespace `std::chrono` | |
| std::chrono::nanoseconds(C++11) | duration type with Period std::nano |
| std::chrono::microseconds(C++11) | duration type with Period std::micro |
| std::chrono::milliseconds(C++11) | duration type with Period std::milli |
| std::chrono::seconds(C++11) | duration type with Period std::ratio<1> |
| std::chrono::minutes(C++11) | duration type with Period std::ratio<60> |
| std::chrono::hours(C++11) | duration type with Period std::ratio<3600> |
| std::chrono::days(C++20) | duration type with Period std::ratio<86400> |
| std::chrono::weeks(C++20) | duration type with Period std::ratio<604800> |
| std::chrono::months(C++20) | duration type with Period std::ratio<2629746> |
| std::chrono::years(C++20) | duration type with Period std::ratio<31556952> |
| Time point | |
| Defined in namespace `std::chrono` | |
| time_point(C++11) | a point in time   (class template) |
| clock_time_conversion(C++20) | traits class defining how to convert time points of one clock to another   (class template) |
| Clocks | |
| Defined in namespace `std::chrono` | |
| is_clockis_clock_v(C++20) | determines if a type is a Clock (class template) (variable template) |
| system_clock(C++11) | wall clock time from the system-wide realtime clock   (class) |
| steady_clock(C++11) | monotonic clock that will never be adjusted   (class) |
| high_resolution_clock(C++11) | the clock with the shortest tick period available   (class) |
| utc_clock(C++20) | Clock for Coordinated Universal Time (UTC)   (class) |
| tai_clock(C++20) | Clock for International Atomic Time (TAI)   (class) |
| gps_clock(C++20) | Clock for GPS time   (class) |
| file_clock(C++20) | Clock used for file time   (typedef) |
| local_t(C++20) | pseudo-clock representing local time   (class) |
| Calendar | |
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
| Time of day | |
| Defined in namespace `std::chrono` | |
| hh_mm_ss(C++20) | represents a time of day   (class template) |
| Time zone | |
| Defined in namespace `std::chrono` | |
| tzdb(C++20) | describes a copy of the IANA time zone database   (class) |
| tzdb_list(C++20) | represents a linked list of tzdb   (class) |
| time_zone(C++20) | represents a time zone   (class) |
| sys_info(C++20) | represents information about a time zone at a particular time point   (class) |
| local_info(C++20) | represents information about a local time to UNIX time conversion   (class) |
| choose(C++20) | selects how an ambiguous local time should be resolved   (enum) |
| zoned_traits(C++20) | traits class for time zone pointers used by zoned_time   (class template) |
| zoned_time(C++20) | represents a time zone and a time point   (class) |
| time_zone_link(C++20) | represents an alternative name for a time zone   (class) |
| nonexistent_local_time(C++20) | exception thrown to report that a local time is nonexistent   (class) |
| ambiguous_local_time(C++20) | exception thrown to report that a local time is ambiguous   (class) |
| Leap second | |
| Defined in namespace `std::chrono` | |
| leap_second(C++20) | contains information about a leap second insertion   (class) |
| leap_second_info(C++20) | leap second insertion information   (class) |
| Specializations | |
| Defined in namespace `std` | |
| std::common_type<std::chrono::duration>(C++11) | specializes the std::common_type trait   (class template specialization) |
| std::common_type<std::chrono::time_point>(C++11) | specializes the std::common_type trait   (class template specialization) |
| std::formatter<std::chrono::duration>(C++20) | formatting support for `duration`   (class template specialization) |
| std::formatter<std::chrono::sys_time>(C++20) | formatting support for `sys_time`   (class template specialization) |
| std::formatter<std::chrono::utc_time>(C++20) | formatting support for `utc_time`   (class template specialization) |
| std::formatter<std::chrono::tai_time>(C++20) | formatting support for `tai_time`   (class template specialization) |
| std::formatter<std::chrono::gps_time>(C++20) | formatting support for `gps_time`   (class template specialization) |
| std::formatter<std::chrono::file_time>(C++20) | formatting support for `file_time`   (class template specialization) |
| std::formatter<std::chrono::local_time>(C++20) | formatting support for `local_time`   (class template specialization) |
| std::formatter<std::chrono::day>(C++20) | formatting support for `day`   (class template specialization) |
| std::formatter<std::chrono::month>(C++20) | formatting support for `month`   (class template specialization) |
| std::formatter<std::chrono::year>(C++20) | formatting support for `year`   (class template specialization) |
| std::formatter<std::chrono::weekday>(C++20) | formatting support for `weekday`   (class template specialization) |
| std::formatter<std::chrono::weekday_indexed>(C++20) | formatting support for `weekday_indexed`   (class template specialization) |
| std::formatter<std::chrono::weekday_last>(C++20) | formatting support for `weekday_last`   (class template specialization) |
| std::formatter<std::chrono::month_day>(C++20) | formatting support for `month_day`   (class template specialization) |
| std::formatter<std::chrono::month_day_last>(C++20) | formatting support for `month_day_last`   (class template specialization) |
| std::formatter<std::chrono::month_weekday>(C++20) | formatting support for `month_weekday`   (class template specialization) |
| std::formatter<std::chrono::month_weekday_last>(C++20) | formatting support for `month_weekday_last`   (class template specialization) |
| std::formatter<std::chrono::year_month>(C++20) | formatting support for `year_month`   (class template specialization) |
| std::formatter<std::chrono::year_month_day>(C++20) | formatting support for `year_month_day`   (class template specialization) |
| std::formatter<std::chrono::year_month_day_last>(C++20) | formatting support for `year_month_day_last`   (class template specialization) |
| std::formatter<std::chrono::year_month_weekday>(C++20) | formatting support for `year_month_weekday`   (class template specialization) |
| std::formatter<std::chrono::year_month_weekday_last>(C++20) | formatting support for `year_month_weekday_last`   (class template specialization) |
| std::formatter<std::chrono::hh_mm_ss>(C++20) | formatting support for `hh_mm_ss`   (class template specialization) |
| std::formatter<std::chrono::sys_info>(C++20) | formatting support for `sys_info`   (class template specialization) |
| std::formatter<std::chrono::local_info>(C++20) | formatting support for `local_info`   (class template specialization) |
| std::formatter<std::chrono::zoned_time>(C++20) | formatting support for `zoned_time`   (class template specialization) |
| std::hash<std::chrono::duration>(C++26) | hash support for std::chrono::duration   (class template specialization) |
| std::hash<std::chrono::time_point>(C++26) | hash support for std::chrono::time_point   (class template specialization) |
| std::hash<std::chrono::day>(C++26) | hash support for std::chrono::day   (class template specialization) |
| std::hash<std::chrono::month>(C++26) | hash support for std::chrono::month   (class template specialization) |
| std::hash<std::chrono::year>(C++26) | hash support for std::chrono::year   (class template specialization) |
| std::hash<std::chrono::weekday>(C++26) | hash support for std::chrono::weekday   (class template specialization) |
| std::hash<std::chrono::weekday_indexed>(C++26) | hash support for std::chrono::weekday_indexed   (class template specialization) |
| std::hash<std::chrono::weekday_last>(C++26) | hash support for std::chrono::weekday_last   (class template specialization) |
| std::hash<std::chrono::month_day>(C++26) | hash support for std::chrono::month_day   (class template specialization) |
| std::hash<std::chrono::month_day_last>(C++26) | hash support for std::chrono::month_day_last   (class template specialization) |
| std::hash<std::chrono::month_weekday>(C++26) | hash support for std::chrono::month_weekday   (class template specialization) |
| std::hash<std::chrono::month_weekday_last>(C++26) | hash support for std::chrono::month_weekday_last   (class template specialization) |
| std::hash<std::chrono::year_month>(C++26) | hash support for std::chrono::year_month   (class template specialization) |
| std::hash<std::chrono::year_month_day>(C++26) | hash support for std::chrono::year_month_day   (class template specialization) |
| std::hash<std::chrono::year_month_day_last>(C++26) | hash support for std::chrono::year_month_day_last   (class template specialization) |
| std::hash<std::chrono::year_month_weekday>(C++26) | hash support for std::chrono::year_month_weekday   (class template specialization) |
| std::hash<std::chrono::year_month_weekday_last>(C++26) | hash support for std::chrono::year_month_weekday_last   (class template specialization) |
| std::hash<std::chrono::zoned_time>(C++26) | hash support for std::chrono::zoned_time   (class template specialization) |
| std::hash<std::chrono::leap_second>(C++26) | hash support for std::chrono::leap_second   (class template specialization) |
| Forward declarations | |
| Defined in header `<functional>` | |
| hash(C++11) | hash function object   (class template) |

|  |  |
| --- | --- |
| Functions | |
| Duration | |
| Defined in namespace `std::chrono` | |
| operator+operator-operator\*operator/operator%(C++11) | implements arithmetic operations with durations as arguments   (function template) |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) | compares two durations   (function template) |
| duration_cast(C++11) | converts a duration to another, with a different tick interval   (function template) |
| floor(std::chrono::duration)(C++17) | converts a duration to another, rounding down   (function template) |
| ceil(std::chrono::duration)(C++17) | converts a duration to another, rounding up   (function template) |
| round(std::chrono::duration)(C++17) | converts a duration to another, rounding to nearest, ties to even   (function template) |
| abs(std::chrono::duration)(C++17) | obtains the absolute value of the duration   (function template) |
| Time point | |
| Defined in namespace `std::chrono` | |
| operator+operator-(C++11) | performs add and subtract operations involving a time point   (function template) |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++11)(C++11)(removed in C++20)(C++11)(C++11)(C++11)(C++11)(C++20) | compares two time points   (function template) |
| time_point_cast(C++11) | converts a time point to another time point on the same clock, with a different duration   (function template) |
| floor(std::chrono::time_point)(C++17) | converts a time_point to another, rounding down   (function template) |
| ceil(std::chrono::time_point)(C++17) | converts a time_point to another, rounding up   (function template) |
| round(std::chrono::time_point)(C++17) | converts a time_point to another, rounding to nearest, ties to even   (function template) |
| from_stream(std::chrono::sys_time)(C++20) | parses a `sys_time` from a stream according to the provided format   (function template) |
| from_stream(std::chrono::utc_time)(C++20) | parses a `utc_time` from a stream according to the provided format   (function template) |
| from_stream(std::chrono::tai_time)(C++20) | parses a `tai_time` from a stream according to the provided format   (function template) |
| from_stream(std::chrono::gps_time)(C++20) | parses a `gps_time` from a stream according to the provided format   (function template) |
| from_stream(std::chrono::file_time)(C++20) | parses a `file_time` from a stream according to the provided format   (function template) |
| from_stream(std::chrono::local_time)(C++20) | parses a `local_time` from a stream according to the provided format   (function template) |
| clock_cast(C++20) | convert time points of one clock to another   (function template) |
| Calendar | |
| Defined in namespace `std::chrono` | |
| operator==operator<=>(C++20) | compares two `day` values   (function) |
| operator==operator<=>(C++20) | compares two `month` values   (function) |
| operator==operator<=>(C++20) | compares two `year` values   (function) |
| operator==(C++20) | compares two `weekday` values   (function) |
| operator==(C++20) | compares two `weekday_indexed` values   (function) |
| operator==(C++20) | compares two `weekday_last` values   (function) |
| operator==operator<=>(C++20) | compares two `month_day` values   (function) |
| operator==operator<=>(C++20) | compares two `month_day_last` values   (function) |
| operator==(C++20) | compares two `month_weekday` values   (function) |
| operator==(C++20) | compares two `month_weekday_last` values   (function) |
| operator==operator<=>(C++20) | compares two `year_month` values   (function) |
| operator==operator<=>(C++20) | compares two `year_month_day` values   (function) |
| operator==operator<=>(C++20) | compares two `year_month_day_last` values   (function) |
| operator==(C++20) | compares two `year_month_weekday` values   (function) |
| operator==(C++20) | compares two `year_month_weekday_last` values   (function) |
| operator+operator-(C++20) | adds or subtracts a number of days and a `day`, or find the difference between two `day`s   (function) |
| operator+operator-(C++20) | performs arithmetic on `month`s   (function) |
| operator+operator-(C++20) | performs arithmetic on `year`s   (function) |
| operator+operator-(C++20) | performs arithmetic on `weekday`s   (function) |
| operator+operator-(C++20) | performs arithmetic on `year_month`   (function) |
| operator+operator-(C++20) | adds or subtracts a `year_month_day` and some number of years or months   (function) |
| operator+operator-(C++20) | adds or subtracts a `year_month_day_last` and some number of years or months   (function) |
| operator+operator-(C++20) | adds or subtracts a `year_month_weekday` and some number of years or months   (function) |
| operator+operator-(C++20) | adds or subtracts a `year_month_weekday_last` and some number of years or months   (function) |
| operator/(C++20) | conventional syntax for Gregorian calendar date creation   (function) |
| Time of day | |
| Defined in namespace `std::chrono` | |
| is_amis_pmmake12make24(C++20) | translates between a 12h/24h format time of day   (function) |
| Time zone | |
| Defined in namespace `std::chrono` | |
| get_tzdbget_tzdb_listreload_tzdbremote_version(C++20) | accesses and controls the global time zone database information   (function) |
| locate_zone(C++20) | locates a time_zone based on its name   (function) |
| operator==operator<=>(C++20) | compares two `time_zone` objects   (function) |
| operator==(C++20) | compares two `zoned_time` values   (function template) |
| operator==operator<=>(C++20) | compares two `time_zone_link` objects   (function) |
| Leap second | |
| Defined in namespace `std::chrono` | |
| get_leap_second_info(C++20) | obtains leap second insertion information from a `utc_time` object   (function template) |
| operator==operator<operator<=operator>operator>=operator<=>(C++20) | compares two `leap_second` values or a `leap_second` value and a sys_time   (function template) |
| I/O | |
| Defined in namespace `std::chrono` | |
| operator<<(C++20) | performs stream output on a `duration`   (function template) |
| operator<<(std::chrono::sys_time)(C++20) | performs stream output on a `sys_time`   (function template) |
| operator<<(std::chrono::utc_time)(C++20) | performs stream output on a `utc_time`   (function template) |
| operator<<(std::chrono::tai_time)(C++20) | performs stream output on a `tai_time`   (function template) |
| operator<<(std::chrono::gps_time)(C++20) | performs stream output on a `gps_time`   (function template) |
| operator<<(std::chrono::file_time)(C++20) | performs stream output on a `file_time`   (function template) |
| operator<<(C++20) | outputs a `day` into a stream   (function template) |
| operator<<(C++20) | outputs a `month` into a stream   (function template) |
| operator<<(C++20) | outputs a `year` into a stream   (function template) |
| operator<<(C++20) | outputs a `weekday` into a stream   (function template) |
| operator<<(C++20) | outputs a `weekday_indexed` into a stream   (function template) |
| operator<<(C++20) | outputs a `weekday_last` into a stream   (function template) |
| operator<<(C++20) | outputs a `month_day` into a stream   (function template) |
| operator<<(C++20) | outputs a `month_day_last` into a stream   (function template) |
| operator<<(C++20) | outputs a `month_weekday` into a stream   (function template) |
| operator<<(C++20) | outputs a `month_weekday_last` into a stream   (function template) |
| operator<<(C++20) | outputs a `year_month` into a stream   (function template) |
| operator<<(C++20) | outputs a `year_month_day` into a stream   (function template) |
| operator<<(C++20) | outputs a `year_month_day_last` into a stream   (function template) |
| operator<<(C++20) | outputs a `year_month_weekday` into a stream   (function template) |
| operator<<(C++20) | outputs a `year_month_weekday_last` into a stream   (function template) |
| operator<<(C++20) | outputs a `hh_mm_ss` into a stream   (function template) |
| operator<<(C++20) | outputs a `sys_info` into a stream   (function template) |
| operator<<(C++20) | outputs a `local_info` into a stream   (function template) |
| operator<<(C++20) | outputs a `zoned_time` into a stream   (function template) |
| from_stream(C++20) | parses a `day` from a stream according to the provided format   (function template) |
| from_stream(C++20) | parses a `month` from a stream according to the provided format   (function template) |
| from_stream(C++20) | parses a `year` from a stream according to the provided format   (function template) |
| from_stream(C++20) | parses a `weekday` from a stream according to the provided format   (function template) |
| from_stream(C++20) | parses a `month_day` from a stream according to the provided format   (function template) |
| from_stream(C++20) | parses a `year_month` from a stream according to the provided format   (function template) |
| from_stream(C++20) | parses a `year_month_day` from a stream according to the provided format   (function template) |
| parse(C++20) | parses a `chrono` object from a stream   (function template) |
| Literals | |
| Defined in inline namespace `std::literals::chrono_literals` | |
| operator""h(C++14) | a std::chrono::duration literal representing hours   (function) |
| operator""min(C++14) | a std::chrono::duration literal representing minutes   (function) |
| operator""s(C++14) | a std::chrono::duration literal representing seconds   (function) |
| operator""ms(C++14) | a std::chrono::duration literal representing milliseconds   (function) |
| operator""us(C++14) | a std::chrono::duration literal representing microseconds   (function) |
| operator""ns(C++14) | a std::chrono::duration literal representing nanoseconds   (function) |
| operator""d(C++20) | a std::chrono::day literal representing a day of a month   (function) |
| operator""y(C++20) | a std::chrono::year literal representing a particular year   (function) |

### Synopsis

```
#include <compare>
 
namespace std {
  namespace chrono {
    // class template duration
    template<class Rep, class Period = ratio<1>> class duration;
 
    // class template time_point
    template<class Clock, class Duration = typename Clock::duration> class time_point;
  }
 
  // common_type specializations
  template<class Rep1, class Period1, class Rep2, class Period2>
    struct common_type<chrono::duration<Rep1, Period1>,
                       chrono::duration<Rep2, Period2>>;
 
  template<class Clock, class Duration1, class Duration2>
    struct common_type<chrono::time_point<Clock, Duration1>,
                       chrono::time_point<Clock, Duration2>>;
 
  namespace chrono {
    // customization traits
    template<class Rep> struct treat_as_floating_point;
    template<class Rep>
      inline constexpr bool treat_as_floating_point_v = treat_as_floating_point<Rep>::value;
 
    template<class Rep> struct duration_values;
 
    template<class T> struct is_clock;
    template<class T> inline constexpr bool is_clock_v = is_clock<T>::value;
 
    // duration arithmetic
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr common_type_t<duration<Rep1, Period1>, duration<Rep2, Period2>>
        operator+(const duration<Rep1, Period1>& lhs, const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr common_type_t<duration<Rep1, Period1>, duration<Rep2, Period2>>
        operator-(const duration<Rep1, Period1>& lhs, const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period, class Rep2>
      constexpr duration<common_type_t<Rep1, Rep2>, Period>
        operator*(const duration<Rep1, Period>& d, const Rep2& s);
    template<class Rep1, class Rep2, class Period>
      constexpr duration<common_type_t<Rep1, Rep2>, Period>
        operator*(const Rep1& s, const duration<Rep2, Period>& d);
    template<class Rep1, class Period, class Rep2>
      constexpr duration<common_type_t<Rep1, Rep2>, Period>
        operator/(const duration<Rep1, Period>& d, const Rep2& s);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr common_type_t<Rep1, Rep2>
        operator/(const duration<Rep1, Period1>& lhs, const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period, class Rep2>
      constexpr duration<common_type_t<Rep1, Rep2>, Period>
        operator%(const duration<Rep1, Period>& d, const Rep2& s);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr common_type_t<duration<Rep1, Period1>, duration<Rep2, Period2>>
        operator%(const duration<Rep1, Period1>& lhs, const duration<Rep2, Period2>& rhs);
 
    // duration comparisons
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr bool operator==(const duration<Rep1, Period1>& lhs,
                                const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr bool operator< (const duration<Rep1, Period1>& lhs,
                                const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr bool operator> (const duration<Rep1, Period1>& lhs,
                                const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr bool operator<=(const duration<Rep1, Period1>& lhs,
                                const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Rep2, class Period2>
      constexpr bool operator>=(const duration<Rep1, Period1>& lhs,
                                const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Rep2, class Period2>
      requires /* see description */
      constexpr auto operator<=>(const duration<Rep1, Period1>& lhs,
                                 const duration<Rep2, Period2>& rhs);
 
    // conversions
    template<class ToDuration, class Rep, class Period>
      constexpr ToDuration duration_cast(const duration<Rep, Period>& d);
    template<class ToDuration, class Rep, class Period>
      constexpr ToDuration floor(const duration<Rep, Period>& d);
    template<class ToDuration, class Rep, class Period>
      constexpr ToDuration ceil(const duration<Rep, Period>& d);
    template<class ToDuration, class Rep, class Period>
      constexpr ToDuration round(const duration<Rep, Period>& d);
 
    // duration I/O
    template<class CharT, class Traits, class Rep, class Period>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os,
                   const duration<Rep, Period>& d);
    template<class CharT, class Traits, class Rep, class Period, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    duration<Rep, Period>& d,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // convenience typedefs
    using nanoseconds  = duration</* signed integer type of at least 64 bits */, nano>;
    using microseconds = duration</* signed integer type of at least 55 bits */, micro>;
    using milliseconds = duration</* signed integer type of at least 45 bits */, milli>;
    using seconds      = duration</* signed integer type of at least 35 bits */>;
    using minutes      = duration</* signed integer type of at least 29 bits */,
                                  ratio<  60>>;
    using hours        = duration</* signed integer type of at least 23 bits */,
                                  ratio<3600>>;
    using days         = duration</* signed integer type of at least 25 bits */,
                                  ratio_multiply<ratio<24>, hours::period>>;
    using weeks        = duration</* signed integer type of at least 22 bits */,
                                  ratio_multiply<ratio<7>, days::period>>;
    using years        = duration</* signed integer type of at least 17 bits */,
                                  ratio_multiply<ratio<146097, 400>, days::period>>;
    using months       = duration</* signed integer type of at least 20 bits */,
                                  ratio_divide<years::period, ratio<12>>>;
 
    // time_point arithmetic
    template<class Clock, class Duration1, class Rep2, class Period2>
      constexpr time_point<Clock, common_type_t<Duration1, duration<Rep2, Period2>>>
        operator+(const time_point<Clock, Duration1>& lhs, const duration<Rep2, Period2>& rhs);
    template<class Rep1, class Period1, class Clock, class Duration2>
      constexpr time_point<Clock, common_type_t<duration<Rep1, Period1>, Duration2>>
        operator+(const duration<Rep1, Period1>& lhs, const time_point<Clock, Duration2>& rhs);
    template<class Clock, class Duration1, class Rep2, class Period2>
      constexpr time_point<Clock, common_type_t<Duration1, duration<Rep2, Period2>>>
        operator-(const time_point<Clock, Duration1>& lhs, const duration<Rep2, Period2>& rhs);
    template<class Clock, class Duration1, class Duration2>
      constexpr common_type_t<Duration1, Duration2>
        operator-(const time_point<Clock, Duration1>& lhs,
                  const time_point<Clock, Duration2>& rhs);
 
    // time_point comparisons
    template<class Clock, class Duration1, class Duration2>
       constexpr bool operator==(const time_point<Clock, Duration1>& lhs,
                                 const time_point<Clock, Duration2>& rhs);
    template<class Clock, class Duration1, class Duration2>
       constexpr bool operator< (const time_point<Clock, Duration1>& lhs,
                                 const time_point<Clock, Duration2>& rhs);
    template<class Clock, class Duration1, class Duration2>
       constexpr bool operator> (const time_point<Clock, Duration1>& lhs,
                                 const time_point<Clock, Duration2>& rhs);
    template<class Clock, class Duration1, class Duration2>
       constexpr bool operator<=(const time_point<Clock, Duration1>& lhs,
                                 const time_point<Clock, Duration2>& rhs);
    template<class Clock, class Duration1, class Duration2>
       constexpr bool operator>=(const time_point<Clock, Duration1>& lhs,
                                 const time_point<Clock, Duration2>& rhs);
    template<class Clock, class Duration1, three_way_comparable_with<Duration1> Duration2>
       constexpr auto operator<=>(const time_point<Clock, Duration1>& lhs,
                                  const time_point<Clock, Duration2>& rhs);
 
    // conversions
    template<class ToDuration, class Clock, class Duration>
      constexpr time_point<Clock, ToDuration>
        time_point_cast(const time_point<Clock, Duration>& t);
    template<class ToDuration, class Clock, class Duration>
      constexpr time_point<Clock, ToDuration> floor(const time_point<Clock, Duration>& tp);
    template<class ToDuration, class Clock, class Duration>
      constexpr time_point<Clock, ToDuration> ceil(const time_point<Clock, Duration>& tp);
    template<class ToDuration, class Clock, class Duration>
      constexpr time_point<Clock, ToDuration> round(const time_point<Clock, Duration>& tp);
 
    // specialized algorithms
    template<class Rep, class Period>
      constexpr duration<Rep, Period> abs(duration<Rep, Period> d);
 
    // class system_clock
    class system_clock;
 
    template<class Duration>
      using sys_time  = time_point<system_clock, Duration>;
    using sys_seconds = sys_time<seconds>;
    using sys_days    = sys_time<days>;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const sys_time<Duration>& tp);
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const sys_days& dp);
 
    template<class CharT, class Traits, class Duration, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    sys_time<Duration>& tp,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class utc_clock
    class utc_clock;
 
    template<class Duration>
      using utc_time  = time_point<utc_clock, Duration>;
    using utc_seconds = utc_time<seconds>;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const utc_time<Duration>& t);
    template<class CharT, class Traits, class Duration, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    utc_time<Duration>& tp,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    struct leap_second_info;
 
    template<class Duration>
      leap_second_info get_leap_second_info(const utc_time<Duration>& ut);
 
    // class tai_clock
    class tai_clock;
 
    template<class Duration>
      using tai_time  = time_point<tai_clock, Duration>;
    using tai_seconds = tai_time<seconds>;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const tai_time<Duration>& t);
    template<class CharT, class Traits, class Duration, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    tai_time<Duration>& tp,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class gps_clock
    class gps_clock;
 
    template<class Duration>
      using gps_time  = time_point<gps_clock, Duration>;
    using gps_seconds = gps_time<seconds>;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const gps_time<Duration>& t);
    template<class CharT, class Traits, class Duration, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    gps_time<Duration>& tp,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // type file_clock
    using file_clock = /* see description */;
 
    template<class Duration>
      using file_time = time_point<file_clock, Duration>;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const file_time<Duration>& tp);
    template<class CharT, class Traits, class Duration, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    file_time<Duration>& tp,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class steady_clock
    class steady_clock;
 
    // class high_resolution_clock
    class high_resolution_clock;
 
    // local time
    struct local_t {};
    template<class Duration>
      using local_time  = time_point<local_t, Duration>;
    using local_seconds = local_time<seconds>;
    using local_days    = local_time<days>;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const local_time<Duration>& tp);
    template<class CharT, class Traits, class Duration, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    local_time<Duration>& tp,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // time_point conversions
    template<class DestClock, class SourceClock>
      struct clock_time_conversion;
 
    template<class DestClock, class SourceClock, class Duration>
      auto clock_cast(const time_point<SourceClock, Duration>& t);
 
    // class last_spec
    struct last_spec;
 
    // class day
    class day;
 
    constexpr bool operator==(const day& x, const day& y) noexcept;
    constexpr strong_ordering operator<=>(const day& x, const day& y) noexcept;
 
    constexpr day  operator+(const day&  x, const days& y) noexcept;
    constexpr day  operator+(const days& x, const day&  y) noexcept;
    constexpr day  operator-(const day&  x, const days& y) noexcept;
    constexpr days operator-(const day&  x, const day&  y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const day& d);
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    day& d, basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class month
    class month;
 
    constexpr bool operator==(const month& x, const month& y) noexcept;
    constexpr strong_ordering operator<=>(const month& x, const month& y) noexcept;
 
    constexpr month  operator+(const month&  x, const months& y) noexcept;
    constexpr month  operator+(const months& x,  const month& y) noexcept;
    constexpr month  operator-(const month&  x, const months& y) noexcept;
    constexpr months operator-(const month&  x,  const month& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const month& m);
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    month& m, basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class year
    class year;
 
    constexpr bool operator==(const year& x, const year& y) noexcept;
    constexpr strong_ordering operator<=>(const year& x, const year& y) noexcept;
 
    constexpr year  operator+(const year&  x, const years& y) noexcept;
    constexpr year  operator+(const years& x, const year&  y) noexcept;
    constexpr year  operator-(const year&  x, const years& y) noexcept;
    constexpr years operator-(const year&  x, const year&  y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const year& y);
 
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    year& y, basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class weekday
    class weekday;
 
    constexpr bool operator==(const weekday& x, const weekday& y) noexcept;
 
    constexpr weekday operator+(const weekday& x, const days&    y) noexcept;
    constexpr weekday operator+(const days&    x, const weekday& y) noexcept;
    constexpr weekday operator-(const weekday& x, const days&    y) noexcept;
    constexpr days    operator-(const weekday& x, const weekday& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const weekday& wd);
 
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    weekday& wd, basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class weekday_indexed
    class weekday_indexed;
 
    constexpr bool operator==(const weekday_indexed& x, const weekday_indexed& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const weekday_indexed& wdi);
 
    // class weekday_last
    class weekday_last;
 
    constexpr bool operator==(const weekday_last& x, const weekday_last& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const weekday_last& wdl);
 
    // class month_day
    class month_day;
 
    constexpr bool operator==(const month_day& x, const month_day& y) noexcept;
    constexpr strong_ordering operator<=>(const month_day& x, const month_day& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const month_day& md);
 
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    month_day& md, basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class month_day_last
    class month_day_last;
 
    constexpr bool operator==(const month_day_last& x, const month_day_last& y) noexcept;
    constexpr strong_ordering operator<=>(const month_day_last& x,
                                          const month_day_last& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const month_day_last& mdl);
 
    // class month_weekday
    class month_weekday;
 
    constexpr bool operator==(const month_weekday& x, const month_weekday& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const month_weekday& mwd);
 
    // class month_weekday_last
    class month_weekday_last;
 
    constexpr bool operator==(const month_weekday_last& x, const month_weekday_last& y) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const month_weekday_last& mwdl);
 
    // class year_month
    class year_month;
 
    constexpr bool operator==(const year_month& x, const year_month& y) noexcept;
    constexpr strong_ordering operator<=>(const year_month& x, const year_month& y) noexcept;
 
    constexpr year_month operator+(const year_month& ym, const months& dm) noexcept;
    constexpr year_month operator+(const months& dm, const year_month& ym) noexcept;
    constexpr year_month operator-(const year_month& ym, const months& dm) noexcept;
    constexpr months operator-(const year_month& x, const year_month& y) noexcept;
    constexpr year_month operator+(const year_month& ym, const years& dy) noexcept;
    constexpr year_month operator+(const years& dy, const year_month& ym) noexcept;
    constexpr year_month operator-(const year_month& ym, const years& dy) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const year_month& ym);
 
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    year_month& ym, basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class year_month_day
    class year_month_day;
 
    constexpr bool operator==(const year_month_day& x, const year_month_day& y) noexcept;
    constexpr strong_ordering operator<=>(const year_month_day& x,
                                          const year_month_day& y) noexcept;
 
    constexpr year_month_day operator+(const year_month_day& ymd, const months& dm) noexcept;
    constexpr year_month_day operator+(const months& dm, const year_month_day& ymd) noexcept;
    constexpr year_month_day operator+(const year_month_day& ymd, const years& dy) noexcept;
    constexpr year_month_day operator+(const years& dy, const year_month_day& ymd) noexcept;
    constexpr year_month_day operator-(const year_month_day& ymd, const months& dm) noexcept;
    constexpr year_month_day operator-(const year_month_day& ymd, const years& dy) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const year_month_day& ymd);
 
    template<class CharT, class Traits, class Alloc = allocator<CharT>>
      basic_istream<CharT, Traits>&
        from_stream(basic_istream<CharT, Traits>& is, const CharT* fmt,
                    year_month_day& ymd,
                    basic_string<CharT, Traits, Alloc>* abbrev = nullptr,
                    minutes* offset = nullptr);
 
    // class year_month_day_last
    class year_month_day_last;
 
    constexpr bool operator==(const year_month_day_last& x,
                              const year_month_day_last& y) noexcept;
    constexpr strong_ordering operator<=>(const year_month_day_last& x,
                                          const year_month_day_last& y) noexcept;
 
    constexpr year_month_day_last
      operator+(const year_month_day_last& ymdl, const months& dm) noexcept;
    constexpr year_month_day_last
      operator+(const months& dm, const year_month_day_last& ymdl) noexcept;
    constexpr year_month_day_last
      operator+(const year_month_day_last& ymdl, const years& dy) noexcept;
    constexpr year_month_day_last
      operator+(const years& dy, const year_month_day_last& ymdl) noexcept;
    constexpr year_month_day_last
      operator-(const year_month_day_last& ymdl, const months& dm) noexcept;
    constexpr year_month_day_last
      operator-(const year_month_day_last& ymdl, const years& dy) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const year_month_day_last& ymdl);
 
    // class year_month_weekday
    class year_month_weekday;
 
    constexpr bool operator==(const year_month_weekday& x,
                              const year_month_weekday& y) noexcept;
 
    constexpr year_month_weekday
      operator+(const year_month_weekday& ymwd, const months& dm) noexcept;
    constexpr year_month_weekday
      operator+(const months& dm, const year_month_weekday& ymwd) noexcept;
    constexpr year_month_weekday
      operator+(const year_month_weekday& ymwd, const years& dy) noexcept;
    constexpr year_month_weekday
      operator+(const years& dy, const year_month_weekday& ymwd) noexcept;
    constexpr year_month_weekday
      operator-(const year_month_weekday& ymwd, const months& dm) noexcept;
    constexpr year_month_weekday
      operator-(const year_month_weekday& ymwd, const years& dy) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const year_month_weekday& ymwdi);
 
    // class year_month_weekday_last
    class year_month_weekday_last;
 
    constexpr bool operator==(const year_month_weekday_last& x,
                              const year_month_weekday_last& y) noexcept;
 
    constexpr year_month_weekday_last
      operator+(const year_month_weekday_last& ymwdl, const months& dm) noexcept;
    constexpr year_month_weekday_last
      operator+(const months& dm, const year_month_weekday_last& ymwdl) noexcept;
    constexpr year_month_weekday_last
      operator+(const year_month_weekday_last& ymwdl, const years& dy) noexcept;
    constexpr year_month_weekday_last
      operator+(const years& dy, const year_month_weekday_last& ymwdl) noexcept;
    constexpr year_month_weekday_last
      operator-(const year_month_weekday_last& ymwdl, const months& dm) noexcept;
    constexpr year_month_weekday_last
      operator-(const year_month_weekday_last& ymwdl, const years& dy) noexcept;
 
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const year_month_weekday_last& ymwdl);
 
    // civil calendar conventional syntax operators
    constexpr year_month
      operator/(const year& y, const month& m) noexcept;
    constexpr year_month
      operator/(const year& y, int m) noexcept;
    constexpr month_day
      operator/(const month& m, const day& d) noexcept;
    constexpr month_day
      operator/(const month& m, int d) noexcept;
    constexpr month_day
      operator/(int m, const day& d) noexcept;
    constexpr month_day
      operator/(const day& d, const month& m) noexcept;
    constexpr month_day
      operator/(const day& d, int m) noexcept;
    constexpr month_day_last
      operator/(const month& m, last_spec) noexcept;
    constexpr month_day_last
      operator/(int m, last_spec) noexcept;
    constexpr month_day_last
      operator/(last_spec, const month& m) noexcept;
    constexpr month_day_last
      operator/(last_spec, int m) noexcept;
    constexpr month_weekday
      operator/(const month& m, const weekday_indexed& wdi) noexcept;
    constexpr month_weekday
      operator/(int m, const weekday_indexed& wdi) noexcept;
    constexpr month_weekday
      operator/(const weekday_indexed& wdi, const month& m) noexcept;
    constexpr month_weekday
      operator/(const weekday_indexed& wdi, int m) noexcept;
    constexpr month_weekday_last
      operator/(const month& m, const weekday_last& wdl) noexcept;
    constexpr month_weekday_last
      operator/(int m, const weekday_last& wdl) noexcept;
    constexpr month_weekday_last
      operator/(const weekday_last& wdl, const month& m) noexcept;
    constexpr month_weekday_last
      operator/(const weekday_last& wdl, int m) noexcept;
    constexpr year_month_day
      operator/(const year_month& ym, const day& d) noexcept;
    constexpr year_month_day
      operator/(const year_month& ym, int d) noexcept;
    constexpr year_month_day
      operator/(const year& y, const month_day& md) noexcept;
    constexpr year_month_day
      operator/(int y, const month_day& md) noexcept;
    constexpr year_month_day
      operator/(const month_day& md, const year& y) noexcept;
    constexpr year_month_day
      operator/(const month_day& md, int y) noexcept;
    constexpr year_month_day_last
      operator/(const year_month& ym, last_spec) noexcept;
    constexpr year_month_day_last
      operator/(const year& y, const month_day_last& mdl) noexcept;
    constexpr year_month_day_last
      operator/(int y, const month_day_last& mdl) noexcept;
    constexpr year_month_day_last
      operator/(const month_day_last& mdl, const year& y) noexcept;
    constexpr year_month_day_last
      operator/(const month_day_last& mdl, int y) noexcept;
    constexpr year_month_weekday
      operator/(const year_month& ym, const weekday_indexed& wdi) noexcept;
    constexpr year_month_weekday
      operator/(const year& y, const month_weekday& mwd) noexcept;
    constexpr year_month_weekday
      operator/(int y, const month_weekday& mwd) noexcept;
    constexpr year_month_weekday
      operator/(const month_weekday& mwd, const year& y) noexcept;
    constexpr year_month_weekday
      operator/(const month_weekday& mwd, int y) noexcept;
    constexpr year_month_weekday_last
      operator/(const year_month& ym, const weekday_last& wdl) noexcept;
    constexpr year_month_weekday_last
      operator/(const year& y, const month_weekday_last& mwdl) noexcept;
    constexpr year_month_weekday_last
      operator/(int y, const month_weekday_last& mwdl) noexcept;
    constexpr year_month_weekday_last
      operator/(const month_weekday_last& mwdl, const year& y) noexcept;
    constexpr year_month_weekday_last
      operator/(const month_weekday_last& mwdl, int y) noexcept;
 
    // class template hh_mm_ss
    template<class Duration> class hh_mm_ss;
 
    template<class CharT, class Traits, class Duration>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const hh_mm_ss<Duration>& hms);
 
    // 12/24 hour functions
    constexpr bool is_am(const hours& h) noexcept;
    constexpr bool is_pm(const hours& h) noexcept;
    constexpr hours make12(const hours& h) noexcept;
    constexpr hours make24(const hours& h, bool is_pm) noexcept;
 
    // time zone database
    struct tzdb;
    class tzdb_list;
 
    // time zone database access
    const tzdb& get_tzdb();
    tzdb_list& get_tzdb_list();
    const time_zone* locate_zone(string_view tz_name);
    const time_zone* current_zone();
 
    // remote time zone database support
    const tzdb& reload_tzdb();
    string remote_version();
 
    // exception classes
    class nonexistent_local_time;
    class ambiguous_local_time;
 
    // information classes
    struct sys_info;
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const sys_info& si);
 
    struct local_info;
    template<class CharT, class Traits>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os, const local_info& li);
 
    // class time_zone
    enum class choose {earliest, latest};
    class time_zone;
 
    bool operator==(const time_zone& x, const time_zone& y) noexcept;
    strong_ordering operator<=>(const time_zone& x, const time_zone& y) noexcept;
 
    // class template zoned_traits
    template<class T> struct zoned_traits;
 
    // class template zoned_time
    template<class Duration, class TimeZonePtr = const time_zone*> class zoned_time;
 
    using zoned_seconds = zoned_time<seconds>;
 
    template<class Duration1, class Duration2, class TimeZonePtr>
      bool operator==(const zoned_time<Duration1, TimeZonePtr>& x,
                      const zoned_time<Duration2, TimeZonePtr>& y);
 
    template<class CharT, class Traits, class Duration, class TimeZonePtr>
      basic_ostream<CharT, Traits>&
        operator<<(basic_ostream<CharT, Traits>& os,
                   const zoned_time<Duration, TimeZonePtr>& t);
 
    // leap second support
    class leap_second;
 
    bool operator==(const leap_second& x, const leap_second& y);
    strong_ordering operator<=>(const leap_second& x, const leap_second& y);
 
    template<class Duration>
      constexpr bool operator==(const leap_second& x, const sys_time<Duration>& y);
    template<class Duration>
      constexpr bool operator< (const leap_second& x, const sys_time<Duration>& y);
    template<class Duration>
      constexpr bool operator< (const sys_time<Duration>& x, const leap_second& y);
    template<class Duration>
      constexpr bool operator> (const leap_second& x, const sys_time<Duration>& y);
    template<class Duration>
      constexpr bool operator> (const sys_time<Duration>& x, const leap_second& y);
    template<class Duration>
      constexpr bool operator<=(const leap_second& x, const sys_time<Duration>& y);
    template<class Duration>
      constexpr bool operator<=(const sys_time<Duration>& x, const leap_second& y);
    template<class Duration>
      constexpr bool operator>=(const leap_second& x, const sys_time<Duration>& y);
    template<class Duration>
      constexpr bool operator>=(const sys_time<Duration>& x, const leap_second& y);
    template<class Duration>
      requires three_way_comparable_with<sys_seconds, sys_time<Duration>>
      constexpr auto operator<=>(const leap_second& x, const sys_time<Duration>& y);
 
    // class time_zone_link
    class time_zone_link;
 
    bool operator==(const time_zone_link& x, const time_zone_link& y);
    strong_ordering operator<=>(const time_zone_link& x, const time_zone_link& y);
 
    // formatting
    template<class Duration> struct /*local-time-format-t*/;    // exposition only
    template<class Duration>
      /*local-time-format-t*/<Duration>
        local_time_format(local_time<Duration> time, const string* abbrev = nullptr,
                          const seconds* offset_sec = nullptr);
  }
 
  template<class Rep, class Period, class CharT>
    struct formatter<chrono::duration<Rep, Period>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::sys_time<Duration>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::utc_time<Duration>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::tai_time<Duration>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::gps_time<Duration>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::file_time<Duration>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::local_time<Duration>, CharT>;
  template<class Duration, class CharT>
    struct formatter<chrono::/*local-time-format-t*/<Duration>, CharT>;
  template<class CharT> struct formatter<chrono::day, CharT>;
  template<class CharT> struct formatter<chrono::month, CharT>;
  template<class CharT> struct formatter<chrono::year, CharT>;
  template<class CharT> struct formatter<chrono::weekday, CharT>;
  template<class CharT> struct formatter<chrono::weekday_indexed, CharT>;
  template<class CharT> struct formatter<chrono::weekday_last, CharT>;
  template<class CharT> struct formatter<chrono::month_day, CharT>;
  template<class CharT> struct formatter<chrono::month_day_last, CharT>;
  template<class CharT> struct formatter<chrono::month_weekday, CharT>;
  template<class CharT> struct formatter<chrono::month_weekday_last, CharT>;
  template<class CharT> struct formatter<chrono::year_month, CharT>;
  template<class CharT> struct formatter<chrono::year_month_day, CharT>;
  template<class CharT> struct formatter<chrono::year_month_day_last, CharT>;
  template<class CharT> struct formatter<chrono::year_month_weekday, CharT>;
  template<class CharT> struct formatter<chrono::year_month_weekday_last, CharT>;
  template<class Rep, class Period, class CharT>
    struct formatter<chrono::hh_mm_ss<duration<Rep, Period>>, CharT>;
  template<class CharT> struct formatter<chrono::sys_info, CharT>;
  template<class CharT> struct formatter<chrono::local_info, CharT>;
  template<class Duration, class TimeZonePtr, class CharT>
    struct formatter<chrono::zoned_time<Duration, TimeZonePtr>, CharT>;
 
  namespace chrono {
    // parsing
    template<class CharT, class Parsable>
      /* unspecified */
        parse(const CharT* fmt, Parsable& tp);
 
    template<class CharT, class Traits, class Alloc, class Parsable>
      /* unspecified */
        parse(const basic_string<CharT, Traits, Alloc>& format, Parsable& tp);
 
    template<class CharT, class traits, class Alloc, class Parsable>
      /* unspecified */
        parse(const CharT* fmt, Parsable& tp,
              basic_string<CharT, traits, Alloc>& abbrev);
 
    template<class CharT, class Traits, class Alloc, class Parsable>
      /* unspecified */
        parse(const basic_string<CharT, Traits, Alloc>& format, Parsable& tp,
              basic_string<CharT, Traits, Alloc>& abbrev);
 
    template<class CharT, class Parsable>
      /* unspecified */
        parse(const CharT* fmt, Parsable& tp, minutes& offset);
 
    template<class CharT, class Traits, class Alloc, class Parsable>
      /* unspecified */
        parse(const basic_string<CharT, Traits, Alloc>& format, Parsable& tp,
              minutes& offset);
 
    template<class CharT, class traits, class Alloc, class Parsable>
      /* unspecified */
        parse(const CharT* fmt, Parsable& tp,
              basic_string<CharT, traits, Alloc>& abbrev, minutes& offset);
 
    template<class CharT, class Traits, class Alloc, class Parsable>
      /* unspecified */
        parse(const basic_string<CharT, Traits, Alloc>& format, Parsable& tp,
              basic_string<CharT, Traits, Alloc>& abbrev, minutes& offset);
 
    // calendrical constants
    inline constexpr last_spec last{};
 
    inline constexpr weekday Sunday{0};
    inline constexpr weekday Monday{1};
    inline constexpr weekday Tuesday{2};
    inline constexpr weekday Wednesday{3};
    inline constexpr weekday Thursday{4};
    inline constexpr weekday Friday{5};
    inline constexpr weekday Saturday{6};
 
    inline constexpr month January{1};
    inline constexpr month February{2};
    inline constexpr month March{3};
    inline constexpr month April{4};
    inline constexpr month May{5};
    inline constexpr month June{6};
    inline constexpr month July{7};
    inline constexpr month August{8};
    inline constexpr month September{9};
    inline constexpr month October{10};
    inline constexpr month November{11};
    inline constexpr month December{12};
  }
 
  inline namespace literals {
  inline namespace chrono_literals {
    // suffixes for duration literals
    constexpr chrono::hours                    operator""h(unsigned long long);
    constexpr chrono::duration</* unspecified */,
                               ratio<3600, 1>> operator""h(long double);
 
    constexpr chrono::minutes                operator""min(unsigned long long);
    constexpr chrono::duration</* unspecified */,
                               ratio<60, 1>> operator""min(long double);
 
    constexpr chrono::seconds                     operator""s(unsigned long long);
    constexpr chrono::duration</* unspecified */> operator""s(long double);
 
    constexpr chrono::milliseconds                       operator""ms(unsigned long long);
    constexpr chrono::duration</* unspecified */, milli> operator""ms(long double);
 
    constexpr chrono::microseconds                       operator""us(unsigned long long);
    constexpr chrono::duration</* unspecified */, micro> operator""us(long double);
 
    constexpr chrono::nanoseconds                       operator""ns(unsigned long long);
    constexpr chrono::duration</* unspecified */, nano> operator""ns(long double);
 
    // non-member functions
    constexpr chrono::day  operator""d(unsigned long long d) noexcept;
 
    // non-member functions
    constexpr chrono::year operator""y(unsigned long long y) noexcept;
  }
  }
 
  namespace chrono {
    using namespace literals::chrono_literals;
  }
 
  // hash support
  template<class T> struct hash;
  template<class Rep, class Period>
    struct hash<chrono::duration<Rep, Period>>;
  template<class Clock, class Duration>
    struct hash<chrono::time_point<Clock, Duration>>;
  template<> struct hash<chrono::day>;
  template<> struct hash<chrono::month>;
  template<> struct hash<chrono::year>;
  template<> struct hash<chrono::weekday>;
  template<> struct hash<chrono::weekday_indexed>;
  template<> struct hash<chrono::weekday_last>;
  template<> struct hash<chrono::month_day>;
  template<> struct hash<chrono::month_day_last>;
  template<> struct hash<chrono::month_weekday>;
  template<> struct hash<chrono::month_weekday_last>;
  template<> struct hash<chrono::year_month>;
  template<> struct hash<chrono::year_month_day>;
  template<> struct hash<chrono::year_month_day_last>;
  template<> struct hash<chrono::year_month_weekday>;
  template<> struct hash<chrono::year_month_weekday_last>;
  template<class Duration, class TimeZonePtr>
    struct hash<chrono::zoned_time<Duration, TimeZonePtr>>;
  template<> struct hash<chrono::leap_second>;
}

```

#### Class template std::chrono::duration

```
namespace std::chrono {
  template<class Rep, class Period = ratio<1>>
  class duration {
  public:
    using rep    = Rep;
    using period = typename Period::type;
 
  private:
    rep rep_;       // exposition only
 
  public:
    // construct/copy/destroy
    constexpr duration() = default;
    template<class Rep2>
      constexpr explicit duration(const Rep2& r);
    template<class Rep2, class Period2>
      constexpr duration(const duration<Rep2, Period2>& d);
    ~duration() = default;
    duration(const duration&) = default;
    duration& operator=(const duration&) = default;
 
    // observer
    constexpr rep count() const;
 
    // arithmetic
    constexpr common_type_t<duration> operator+() const;
    constexpr common_type_t<duration> operator-() const;
    constexpr duration& operator++();
    constexpr duration  operator++(int);
    constexpr duration& operator--();
    constexpr duration  operator--(int);
 
    constexpr duration& operator+=(const duration& d);
    constexpr duration& operator-=(const duration& d);
 
    constexpr duration& operator*=(const rep& rhs);
    constexpr duration& operator/=(const rep& rhs);
    constexpr duration& operator%=(const rep& rhs);
    constexpr duration& operator%=(const duration& rhs);
 
    // special values
    static constexpr duration zero() noexcept;
    static constexpr duration min() noexcept;
    static constexpr duration max() noexcept;
  };
}

```

#### Class template std::chrono::time_point

```
namespace std::chrono {
  template<class Clock, class Duration = typename Clock::duration>
  class time_point {
  public:
    using clock    = Clock;
    using duration = Duration;
    using rep      = typename duration::rep;
    using period   = typename duration::period;
 
  private:
    duration d_;                                                // exposition only
 
  public:
    // construct
    constexpr time_point();                                     // has value epoch
    constexpr explicit time_point(const duration& d);           // same as time_point() + d
    template<class Duration2>
      constexpr time_point(const time_point<clock, Duration2>& t);
 
    // observer
    constexpr duration time_since_epoch() const;
 
    // arithmetic
    constexpr time_point& operator++();
    constexpr time_point operator++(int);
    constexpr time_point& operator--();
    constexpr time_point operator--(int);
    constexpr time_point& operator+=(const duration& d);
    constexpr time_point& operator-=(const duration& d);
 
    // special values
    static constexpr time_point min() noexcept;
    static constexpr time_point max() noexcept;
  };
}

```

#### Class template std::common_type's specialization for std::chrono::duration

```
namespace std {
  template<class Rep1, class Period1, class Rep2, class Period2>
    struct common_type<chrono::duration<Rep1, Period1>,
                       chrono::duration<Rep2, Period2>> {
      using type = chrono::duration<common_type_t<Rep1, Rep2>, /* see description */>;
    };
}

```

#### Class template std::common_type's specialization for std::chrono::time_point

```
namespace std {
  template<class Clock, class Duration1, class Duration2>
    struct common_type<chrono::time_point<Clock, Duration1>,
                       chrono::time_point<Clock, Duration2>> {
      using type = chrono::time_point<Clock, common_type_t<Duration1, Duration2>>;
    };
}

```

#### Class template std::chrono::treat_as_floating_point

```
template<class Rep> struct treat_as_floating_point : is_floating_point<Rep> { };

```

#### Class template std::chrono::duration_values

```
namespace std::chrono {
  template<class Rep>
    struct duration_values {
    public:
      static constexpr Rep zero() noexcept;
      static constexpr Rep min() noexcept;
      static constexpr Rep max() noexcept;
    };
}

```

#### Class std::chrono::system_clock

```
namespace std::chrono {
  class system_clock {
  public:
    using rep        = /* see description */;
    using period     = ratio</* unspecified */, /* unspecified */>;
    using duration   = chrono::duration<rep, period>;
    using time_point = chrono::time_point<system_clock>;
    static constexpr bool is_steady = /* unspecified */;
 
    static time_point now() noexcept;
 
    // mapping to/from C type time_t
    static time_t      to_time_t  (const time_point& t) noexcept;
    static time_point  from_time_t(time_t t) noexcept;
  };
}

```

#### Class std::chrono::utc_clock

```
namespace std::chrono {
  class utc_clock {
  public:
    using rep                       = /* a signed arithmetic type */;
    using period                    = ratio</* unspecified */, /* unspecified */>;
    using duration                  = chrono::duration<rep, period>;
    using time_point                = chrono::time_point<utc_clock>;
    static constexpr bool is_steady = /* unspecified */;
 
    static time_point now();
 
    template<class Duration>
      static sys_time<common_type_t<Duration, seconds>>
        to_sys(const utc_time<Duration>& t);
    template<class Duration>
      static utc_time<common_type_t<Duration, seconds>>
        from_sys(const sys_time<Duration>& t);
  };
}

```

#### Class std::chrono::tai_clock

```
namespace std::chrono {
  class tai_clock {
  public:
    using rep                       = /* a signed arithmetic type */;
    using period                    = ratio</* unspecified */, /* unspecified */>;
    using duration                  = chrono::duration<rep, period>;
    using time_point                = chrono::time_point<tai_clock>;
    static constexpr bool is_steady = /* unspecified */;
 
    static time_point now();
 
    template<class Duration>
      static sys_time<common_type_t<Duration, seconds>>
        to_sys(const tai_time<Duration>& t);
    template<class Duration>
      static tai_time<common_type_t<Duration, seconds>>
        from_sys(const sys_time<Duration>& t);
  };
}

```

#### Class std::chrono::gps_clock

```
namespace std::chrono {
  class gps_clock {
  public:
    using rep                       = /* a signed arithmetic type */;
    using period                    = ratio</* unspecified */, /* unspecified */>;
    using duration                  = chrono::duration<rep, period>;
    using time_point                = chrono::time_point<gps_clock>;
    static constexpr bool is_steady = /* unspecified */;
 
    static time_point now();
 
    template<class Duration>
      static sys_time<common_type_t<Duration, seconds>>
        to_sys(const gps_time<Duration>& t);
    template<class Duration>
      static gps_time<common_type_t<Duration, seconds>>
        from_sys(const sys_time<Duration>& t);
  };
}

```

#### Class std::chrono::steady_clock

```
namespace std::chrono {
  class steady_clock {
  public:
    using rep        = /* unspecified */;
    using period     = ratio</* unspecified */, /* unspecified */>;
    using duration   = chrono::duration<rep, period>;
    using time_point = chrono::time_point</* unspecified */, duration>;
    static constexpr bool is_steady = true;
 
    static time_point now() noexcept;
  };
}

```

#### Class std::chrono::high_resolution_clock

```
namespace std::chrono {
  class high_resolution_clock {
  public:
    using rep        = /* unspecified */;
    using period     = ratio</* unspecified */, /* unspecified */>;
    using duration   = chrono::duration<rep, period>;
    using time_point = chrono::time_point</* unspecified */, duration>;
    static constexpr bool is_steady = /* unspecified */;
 
    static time_point now() noexcept;
  };
}

```

#### Class template std::chrono::clock_time_conversion

```
namespace std::chrono {
  template<class DestClock, class SourceClock>
  struct clock_time_conversion {};
 
  template<class Clock>
  struct clock_time_conversion<Clock, Clock> {
    template<class Duration>
      time_point<Clock, Duration>
        operator()(const time_point<Clock, Duration>& t) const;
  };
 
  template<>
  struct clock_time_conversion<system_clock, system_clock> {
    template<class Duration>
      sys_time<Duration>
        operator()(const sys_time<Duration>& t) const;
  };
 
  template<>
  struct clock_time_conversion<utc_clock, utc_clock> {
    template<class Duration>
      utc_time<Duration>
        operator()(const utc_time<Duration>& t) const;
  };
 
  template<>
  struct clock_time_conversion<utc_clock, system_clock> {
    template<class Duration>
      utc_time<common_type_t<Duration, seconds>>
        operator()(const sys_time<Duration>& t) const;
  };
 
  template<>
  struct clock_time_conversion<system_clock, utc_clock> {
    template<class Duration>
      sys_time<common_type_t<Duration, seconds>>
        operator()(const utc_time<Duration>& t) const;
  };
 
  template<class SourceClock>
  struct clock_time_conversion<system_clock, SourceClock> {
    template<class Duration>
      auto operator()(const time_point<SourceClock, Duration>& t) const
        -> decltype(SourceClock::to_sys(t));
  };
 
  template<class DestClock>
  struct clock_time_conversion<DestClock, system_clock> {
    template<class Duration>
      auto operator()(const sys_time<Duration>& t) const
        -> decltype(DestClock::from_sys(t));
  };
 
  template<class SourceClock>
  struct clock_time_conversion<utc_clock, SourceClock> {
    template<class Duration>
      auto operator()(const time_point<SourceClock, Duration>& t) const
        -> decltype(SourceClock::to_utc(t));
  };
 
  template<class DestClock>
  struct clock_time_conversion<DestClock, utc_clock> {
    template<class Duration>
      auto operator()(const utc_time<Duration>& t) const
        -> decltype(DestClock::from_utc(t));
  };
}

```

#### Class std::chrono::last_spec

```
namespace std::chrono {
  struct last_spec {
    explicit last_spec() = default;
  };
}

```

#### Class std::chrono::day

```
namespace std::chrono {
  class day {
    unsigned char d_;           // exposition only
  public:
    day() = default;
    constexpr explicit day(unsigned d) noexcept;
 
    constexpr day& operator++()    noexcept;
    constexpr day  operator++(int) noexcept;
    constexpr day& operator--()    noexcept;
    constexpr day  operator--(int) noexcept;
 
    constexpr day& operator+=(const days& d) noexcept;
    constexpr day& operator-=(const days& d) noexcept;
 
    constexpr explicit operator unsigned() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::month

```
namespace std::chrono {
  class month {
    unsigned char m_;           // exposition only
  public:
    month() = default;
    constexpr explicit month(unsigned m) noexcept;
 
    constexpr month& operator++()    noexcept;
    constexpr month  operator++(int) noexcept;
    constexpr month& operator--()    noexcept;
    constexpr month  operator--(int) noexcept;
 
    constexpr month& operator+=(const months& m) noexcept;
    constexpr month& operator-=(const months& m) noexcept;
 
    constexpr explicit operator unsigned() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::year

```
namespace std::chrono {
  class year {
    short y_;                   // exposition only
  public:
    year() = default;
    constexpr explicit year(int y) noexcept;
 
    constexpr year& operator++()    noexcept;
    constexpr year  operator++(int) noexcept;
    constexpr year& operator--()    noexcept;
    constexpr year  operator--(int) noexcept;
 
    constexpr year& operator+=(const years& y) noexcept;
    constexpr year& operator-=(const years& y) noexcept;
 
    constexpr year operator+() const noexcept;
    constexpr year operator-() const noexcept;
 
    constexpr bool is_leap() const noexcept;
 
    constexpr explicit operator int() const noexcept;
    constexpr bool ok() const noexcept;
 
    static constexpr year min() noexcept;
    static constexpr year max() noexcept;
  };
}

```

#### Class std::chrono::weekday

```
namespace std::chrono {
  class weekday {
    unsigned char wd_;          // exposition only
  public:
    weekday() = default;
    constexpr explicit weekday(unsigned wd) noexcept;
    constexpr weekday(const sys_days& dp) noexcept;
    constexpr explicit weekday(const local_days& dp) noexcept;
 
    constexpr weekday& operator++()    noexcept;
    constexpr weekday  operator++(int) noexcept;
    constexpr weekday& operator--()    noexcept;
    constexpr weekday  operator--(int) noexcept;
 
    constexpr weekday& operator+=(const days& d) noexcept;
    constexpr weekday& operator-=(const days& d) noexcept;
 
    constexpr unsigned c_encoding() const noexcept;
    constexpr unsigned iso_encoding() const noexcept;
    constexpr bool ok() const noexcept;
 
    constexpr weekday_indexed operator[](unsigned index) const noexcept;
    constexpr weekday_last    operator[](last_spec) const noexcept;
  };
}

```

#### Class std::chrono::weekday_indexed

```
namespace std::chrono {
  class weekday_indexed {
    chrono::weekday  wd_;       // exposition only
    unsigned char    index_;    // exposition only
 
  public:
    weekday_indexed() = default;
    constexpr weekday_indexed(const chrono::weekday& wd, unsigned index) noexcept;
 
    constexpr chrono::weekday weekday() const noexcept;
    constexpr unsigned        index()   const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::weekday_last

```
namespace std::chrono {
  class weekday_last {
    chrono::weekday wd_;                // exposition only
 
    public:
    constexpr explicit weekday_last(const chrono::weekday& wd) noexcept;
 
    constexpr chrono::weekday weekday() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::month_day

```
namespace std::chrono {
  class month_day {
    chrono::month m_;           // exposition only
    chrono::day   d_;           // exposition only
 
  public:
    month_day() = default;
    constexpr month_day(const chrono::month& m, const chrono::day& d) noexcept;
 
    constexpr chrono::month month() const noexcept;
    constexpr chrono::day   day()   const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::month_day_last

```
namespace std::chrono {
  class month_day_last {
    chrono::month m_;                   // exposition only
 
  public:
    constexpr explicit month_day_last(const chrono::month& m) noexcept;
 
    constexpr chrono::month month() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::month_weekday

```
namespace std::chrono {
  class month_weekday {
    chrono::month           m_;         // exposition only
    chrono::weekday_indexed wdi_;       // exposition only
  public:
    constexpr month_weekday(const chrono::month& m,
                            const chrono::weekday_indexed& wdi) noexcept;
 
    constexpr chrono::month           month()           const noexcept;
    constexpr chrono::weekday_indexed weekday_indexed() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::month_weekday_last

```
namespace std::chrono {
  class month_weekday_last {
    chrono::month        m_;    // exposition only
    chrono::weekday_last wdl_;  // exposition only
  public:
    constexpr month_weekday_last(const chrono::month& m,
                                 const chrono::weekday_last& wdl) noexcept;
 
    constexpr chrono::month        month()        const noexcept;
    constexpr chrono::weekday_last weekday_last() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::year_month

```
namespace std::chrono {
  class year_month {
    chrono::year  y_;           // exposition only
    chrono::month m_;           // exposition only
 
  public:
    year_month() = default;
    constexpr year_month(const chrono::year& y, const chrono::month& m) noexcept;
 
    constexpr chrono::year  year()  const noexcept;
    constexpr chrono::month month() const noexcept;
 
    constexpr year_month& operator+=(const months& dm) noexcept;
    constexpr year_month& operator-=(const months& dm) noexcept;
    constexpr year_month& operator+=(const years& dy)  noexcept;
    constexpr year_month& operator-=(const years& dy)  noexcept;
 
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::year_month_day

```
namespace std::chrono {
  class year_month_day {
    chrono::year  y_;           // exposition only
    chrono::month m_;           // exposition only
    chrono::day   d_;           // exposition only
 
  public:
    year_month_day() = default;
    constexpr year_month_day(const chrono::year& y, const chrono::month& m,
                             const chrono::day& d) noexcept;
    constexpr year_month_day(const year_month_day_last& ymdl) noexcept;
    constexpr year_month_day(const sys_days& dp) noexcept;
    constexpr explicit year_month_day(const local_days& dp) noexcept;
 
    constexpr year_month_day& operator+=(const months& m) noexcept;
    constexpr year_month_day& operator-=(const months& m) noexcept;
    constexpr year_month_day& operator+=(const years& y)  noexcept;
    constexpr year_month_day& operator-=(const years& y)  noexcept;
 
    constexpr chrono::year  year()  const noexcept;
    constexpr chrono::month month() const noexcept;
    constexpr chrono::day   day()   const noexcept;
 
    constexpr          operator sys_days()   const noexcept;
    constexpr explicit operator local_days() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::year_month_day_last

```
namespace std::chrono {
  class year_month_day_last {
    chrono::year           y_;          // exposition only
    chrono::month_day_last mdl_;        // exposition only
 
  public:
    constexpr year_month_day_last(const chrono::year& y,
                                  const chrono::month_day_last& mdl) noexcept;
 
    constexpr year_month_day_last& operator+=(const months& m) noexcept;
    constexpr year_month_day_last& operator-=(const months& m) noexcept;
    constexpr year_month_day_last& operator+=(const years& y)  noexcept;
    constexpr year_month_day_last& operator-=(const years& y)  noexcept;
 
    constexpr chrono::year           year()           const noexcept;
    constexpr chrono::month          month()          const noexcept;
    constexpr chrono::month_day_last month_day_last() const noexcept;
    constexpr chrono::day            day()            const noexcept;
 
    constexpr          operator sys_days()   const noexcept;
    constexpr explicit operator local_days() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::year_month_weekday

```
namespace std::chrono {
  class year_month_weekday {
    chrono::year            y_;         // exposition only
    chrono::month           m_;         // exposition only
    chrono::weekday_indexed wdi_;       // exposition only
 
  public:
    year_month_weekday() = default;
    constexpr year_month_weekday(const chrono::year& y, const chrono::month& m,
                                 const chrono::weekday_indexed& wdi) noexcept;
    constexpr year_month_weekday(const sys_days& dp) noexcept;
    constexpr explicit year_month_weekday(const local_days& dp) noexcept;
 
    constexpr year_month_weekday& operator+=(const months& m) noexcept;
    constexpr year_month_weekday& operator-=(const months& m) noexcept;
    constexpr year_month_weekday& operator+=(const years& y)  noexcept;
    constexpr year_month_weekday& operator-=(const years& y)  noexcept;
 
    constexpr chrono::year            year()            const noexcept;
    constexpr chrono::month           month()           const noexcept;
    constexpr chrono::weekday         weekday()         const noexcept;
    constexpr unsigned                index()           const noexcept;
    constexpr chrono::weekday_indexed weekday_indexed() const noexcept;
 
    constexpr          operator sys_days()   const noexcept;
    constexpr explicit operator local_days() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class std::chrono::year_month_weekday_last

```
namespace std::chrono {
  class year_month_weekday_last {
    chrono::year         y_;    // exposition only
    chrono::month        m_;    // exposition only
    chrono::weekday_last wdl_;  // exposition only
 
  public:
    constexpr year_month_weekday_last(const chrono::year& y, const chrono::month& m,
                                      const chrono::weekday_last& wdl) noexcept;
 
    constexpr year_month_weekday_last& operator+=(const months& m) noexcept;
    constexpr year_month_weekday_last& operator-=(const months& m) noexcept;
    constexpr year_month_weekday_last& operator+=(const years& y)  noexcept;
    constexpr year_month_weekday_last& operator-=(const years& y)  noexcept;
 
    constexpr chrono::year         year()         const noexcept;
    constexpr chrono::month        month()        const noexcept;
    constexpr chrono::weekday      weekday()      const noexcept;
    constexpr chrono::weekday_last weekday_last() const noexcept;
 
    constexpr          operator sys_days()   const noexcept;
    constexpr explicit operator local_days() const noexcept;
    constexpr bool ok() const noexcept;
  };
}

```

#### Class template std::chrono::hh_mm_ss

```
namespace std::chrono {
  template<class Duration> class hh_mm_ss {
  public:
    static constexpr unsigned fractional_width = /* see description */;
    using precision                            = /* see description */;
 
    constexpr hh_mm_ss() noexcept : hh_mm_ss{Duration::zero()} {}
    constexpr explicit hh_mm_ss(Duration d);
 
    constexpr bool is_negative() const noexcept;
    constexpr chrono::hours hours() const noexcept;
    constexpr chrono::minutes minutes() const noexcept;
    constexpr chrono::seconds seconds() const noexcept;
    constexpr precision subseconds() const noexcept;
 
    constexpr explicit operator precision() const noexcept;
    constexpr precision to_duration() const noexcept;
 
  private:
    bool            is_neg;     // exposition only
    chrono::hours   h;          // exposition only
    chrono::minutes m;          // exposition only
    chrono::seconds s;          // exposition only
    precision       ss;         // exposition only
  };
}

```

#### Class std::chrono::tzdb

```
namespace std::chrono {
  struct tzdb {
    string                 version;
    vector<time_zone>      zones;
    vector<time_zone_link> links;
    vector<leap_second>    leap_seconds;
 
    const time_zone* locate_zone(string_view tz_name) const;
    const time_zone* current_zone() const;
  };
}

```

#### Class std::chrono::tzdb_list

```
namespace std::chrono {
  class tzdb_list {
  public:
    tzdb_list(const tzdb_list&) = delete;
    tzdb_list& operator=(const tzdb_list&) = delete;
 
    // unspecified additional constructors
 
    class const_iterator;
 
    const tzdb& front() const noexcept;
 
    const_iterator erase_after(const_iterator p);
 
    const_iterator begin() const noexcept;
    const_iterator end()   const noexcept;
 
    const_iterator cbegin() const noexcept;
    const_iterator cend()   const noexcept;
  };
}

```

#### Class std::chrono::nonexistent_local_time

```
namespace std::chrono {
  class nonexistent_local_time : public runtime_error {
  public:
    template<class Duration>
      nonexistent_local_time(const local_time<Duration>& tp, const local_info& i);
  };
}

```

#### Class std::chrono::ambiguous_local_time

```
namespace std::chrono {
  class ambiguous_local_time : public runtime_error {
  public:
    template<class Duration>
      ambiguous_local_time(const local_time<Duration>& tp, const local_info& i);
  };
}

```

#### Class std::chrono::sys_info

```
namespace std::chrono {
  struct sys_info {
    sys_seconds   begin;
    sys_seconds   end;
    seconds       offset;
    minutes       save;
    string        abbrev;
  };
}

```

#### Class std::chrono::local_info

```
namespace std::chrono {
  struct local_info {
    static constexpr int unique      = 0;
    static constexpr int nonexistent = 1;
    static constexpr int ambiguous   = 2;
 
    int result;
    sys_info first;
    sys_info second;
  };
}

```

#### Class std::chrono::time_zone

```
namespace std::chrono {
  class time_zone {
  public:
    time_zone(time_zone&&) = default;
    time_zone& operator=(time_zone&&) = default;
 
    // unspecified additional constructors
 
    string_view name() const noexcept;
 
    template<class Duration> sys_info   get_info(const sys_time<Duration>& st)   const;
    template<class Duration> local_info get_info(const local_time<Duration>& tp) const;
 
    template<class Duration>
      sys_time<common_type_t<Duration, seconds>>
        to_sys(const local_time<Duration>& tp) const;
 
    template<class Duration>
      sys_time<common_type_t<Duration, seconds>>
        to_sys(const local_time<Duration>& tp, choose z) const;
 
    template<class Duration>
      local_time<common_type_t<Duration, seconds>>
        to_local(const sys_time<Duration>& tp) const;
  };
}

```

#### Class template std::chrono::zoned_traits

```
namespace std::chrono {
  template<class T> struct zoned_traits {};
 
  template<> struct zoned_traits<const time_zone*> {
    static const time_zone* default_zone();
    static const time_zone* locate_zone(string_view name);
  };
}

```

#### Class template std::chrono::zoned_time

```
namespace std::chrono {
  template<class Duration, class TimeZonePtr = const time_zone*>
  class zoned_time {
  public:
    using duration = common_type_t<Duration, seconds>;
 
  private:
    TimeZonePtr        zone_;                   // exposition only
    sys_time<duration> tp_;                     // exposition only
 
    using traits = zoned_traits<TimeZonePtr>;   // exposition only
 
  public:
    zoned_time();
    zoned_time(const zoned_time&) = default;
    zoned_time& operator=(const zoned_time&) = default;
 
    zoned_time(const sys_time<Duration>& st);
    explicit zoned_time(TimeZonePtr z);
    explicit zoned_time(string_view name);
 
    template<class Duration2>
      zoned_time(const zoned_time<Duration2, TimeZonePtr>& zt);
 
    zoned_time(TimeZonePtr z,    const sys_time<Duration>& st);
    zoned_time(string_view name, const sys_time<Duration>& st);
 
    zoned_time(TimeZonePtr z,    const local_time<Duration>& tp);
    zoned_time(string_view name, const local_time<Duration>& tp);
    zoned_time(TimeZonePtr z,    const local_time<Duration>& tp, choose c);
    zoned_time(string_view name, const local_time<Duration>& tp, choose c);
 
    template<class Duration2, class TimeZonePtr2>
      zoned_time(TimeZonePtr z, const zoned_time<Duration2, TimeZonePtr2>& zt);
    template<class Duration2, class TimeZonePtr2>
      zoned_time(TimeZonePtr z, const zoned_time<Duration2, TimeZonePtr2>& zt, choose);
 
    template<class Duration2, class TimeZonePtr2>
      zoned_time(string_view name, const zoned_time<Duration2, TimeZonePtr2>& zt);
    template<class Duration2, class TimeZonePtr2>
      zoned_time(string_view name, const zoned_time<Duration2, TimeZonePtr2>& zt, choose);
 
    zoned_time& operator=(const sys_time<Duration>& st);
    zoned_time& operator=(const local_time<Duration>& ut);
 
    operator sys_time<duration>() const;
    explicit operator local_time<duration>() const;
 
    TimeZonePtr          get_time_zone()  const;
    local_time<duration> get_local_time() const;
    sys_time<duration>   get_sys_time()   const;
    sys_info             get_info()       const;
  };
 
  zoned_time() -> zoned_time<seconds>;
 
  template<class Duration>
    zoned_time(sys_time<Duration>)
      -> zoned_time<common_type_t<Duration, seconds>>;
 
  template<class TimeZonePtrOrName>
    using /*time-zone-representation*/ =        // exposition only
      conditional_t<is_convertible_v<TimeZonePtrOrName, string_view>,
                    const time_zone*,
                    remove_cvref_t<TimeZonePtrOrName>>;
 
  template<class TimeZonePtrOrName>
    zoned_time(TimeZonePtrOrName&&)
      -> zoned_time<seconds, /*time-zone-representation*/<TimeZonePtrOrName>>;
 
  template<class TimeZonePtrOrName, class Duration>
    zoned_time(TimeZonePtrOrName&&, sys_time<Duration>)
      -> zoned_time<common_type_t<Duration, seconds>,
                    /*time-zone-representation*/<TimeZonePtrOrName>>;
 
  template<class TimeZonePtrOrName, class Duration>
    zoned_time(TimeZonePtrOrName&&, local_time<Duration>,
               choose = choose::earliest)
      -> zoned_time<common_type_t<Duration, seconds>,
                    /*time-zone-representation*/<TimeZonePtrOrName>>;
 
  template<class Duration, class TimeZonePtrOrName, class TimeZonePtr2>
    zoned_time(TimeZonePtrOrName&&, zoned_time<Duration, TimeZonePtr2>,
               choose = choose::earliest)
      -> zoned_time<common_type_t<Duration, seconds>,
                    /*time-zone-representation*/<TimeZonePtrOrName>>;
}

```

#### Class std::chrono::leap_second

```
namespace std::chrono {
  class leap_second {
  public:
    leap_second(const leap_second&)            = default;
    leap_second& operator=(const leap_second&) = default;
 
    // unspecified additional constructors
 
    constexpr sys_seconds date() const noexcept;
    constexpr seconds value() const noexcept;
  };
}

```

#### Class std::chrono::time_zone_link

```
namespace std::chrono {
  class time_zone_link {
  public:
    time_zone_link(time_zone_link&&)            = default;
    time_zone_link& operator=(time_zone_link&&) = default;
 
    // unspecified additional constructors
 
    string_view name()   const noexcept;
    string_view target() const noexcept;
  };
}

```

#### Class template **local-time-format-t**

```
namespace std::chrono {
  template<class Duration> struct /*local-time-format-t*/ {       // exposition only
    local_time<Duration> time;                                    // exposition only
    const string* abbrev;                                         // exposition only
    const seconds* offset_sec;                                    // exposition only
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/chrono&oldid=163994>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 07:21.