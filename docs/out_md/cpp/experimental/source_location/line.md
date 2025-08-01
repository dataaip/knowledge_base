# std::experimental::source_location::line

From cppreference.com
< cpp‎ | experimental‎ | source location
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Library fundamentals v2

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::propagate_const | | | | |
| experimental::not_fn | | | | |
| experimental::observer_ptr | | | | |
| experimental::make_array | | | | |
| experimental::to_array | | | | |
| experimental::ostream_joiner | | | | |
| experimental::gcd | | | | |
| experimental::lcm | | | | |
| experimental::source_location | | | | |
| experimental::randint | | | | |
| detection idiom | | | | |
| uniform container erasure | | | | |
| logical operator type traits | | | | |

std::experimental::source_location

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Creation | | | | |
| source_location::source_location | | | | |
| source_location::current | | | | |
| Field Access | | | | |
| ****source_location::line**** | | | | |
| source_location::column | | | | |
| source_location::file_name | | | | |
| source_location::function_name | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr std::uint_least32_t line() const noexcept; |  | (library fundamentals TS v2) |
|  |  |  |

Returns the line number represented by this object.

### Parameters

(none)

### Return value

The line number represented by this object.

### Example

Run this code

```
#include <experimental/source_location>
#include <iostream>
#include <string_view>
using std::experimental::source_location;
 
inline void cur_line(
    const std::string_view message = "",
    const source_location& location = source_location::current())
{
    std::cout
        << location.line() // <- the call-site line #
        << ") "
        << message; 
}
 
int main()
{
    cur_line("++" "\n");
    cur_line(); std::cout << "Hello," "\n";
    cur_line(); std::cout << "C++20!" "\n";
    cur_line("--" "\n");
}

```

Output:

```
18) ++
19) Hello,
20) C++20!
21) --

```

### See also

|  |  |
| --- | --- |
| column | return the column number represented by this object   (public member function) |
| file_name | return the file name represented by this object   (public member function) |
| function_name | return the name of the function represented by this object, if any   (public member function) |
| C++ documentation for Filename and line information | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/source_location/line&oldid=156317>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 August 2023, at 23:06.