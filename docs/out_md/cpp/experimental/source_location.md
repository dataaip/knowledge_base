# std::experimental::source_location

From cppreference.com
< cpp‎ | experimental
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
| ****experimental::source_location**** | | | | |
| experimental::randint | | | | |
| detection idiom | | | | |
| uniform container erasure | | | | |
| logical operator type traits | | | | |

****std::experimental::source_location****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Creation | | | | |
| source_location::source_location | | | | |
| source_location::current | | | | |
| Field Access | | | | |
| source_location::line | | | | |
| source_location::column | | | | |
| source_location::file_name | | | | |
| source_location::function_name | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/source_location>` |  |  |
| struct source_location; |  | (library fundamentals TS v2) |
|  |  |  |

The `source_location` class represents certain information about the source code, such as file names, line numbers, and function names. Previously, functions that desire to obtain this information about the call site (for logging, testing, or debugging purposes) must use macros so that predefined macros like __LINE__ and __FILE__ are expanded in the context of the caller. The `source_location` class provides a better alternative.

### Member functions

|  |  |
| --- | --- |
| Creation | |
| (constructor) | constructs a new `source_location` with implementation-defined values   (public member function) |
| current[static] | constructs a new `source_location`   (public static member function) |
| Other special member functions | |
| (destructor)(implicitly declared) | destructs a `source_location`   (public member function) |
| operator=(implicitly declared) | implicitly declared copy/move assignment operators   (public member function) |
| Field access | |
| line | return the line number represented by this object   (public member function) |
| column | return the column number represented by this object   (public member function) |
| file_name | return the file name represented by this object   (public member function) |
| function_name | return the name of the function represented by this object, if any   (public member function) |

### Example

Run this code

```
#include <experimental/source_location>
#include <iostream>
#include <string_view>
 
void log(const std::string_view message,
         const std::experimental::source_location location =
               std::experimental::source_location::current())
{
    std::cout << "info:"
              << location.file_name() << ':'
              << location.line() << ' '
              << message << '\n';
}
 
int main()
{
    log("Hello world!");
}

```

Possible output:

```
info:main.cpp:15 Hello world!

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/source_location&oldid=164578>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 December 2023, at 23:52.