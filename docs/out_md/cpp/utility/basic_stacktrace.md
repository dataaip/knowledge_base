# std::basic_stacktrace

From cppreference.com
< cpp‎ | utility
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

Diagnostics library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception handling | | | | | | exception | | | | | | uncaught_exceptionuncaught_exceptions(until C++20\*)(C++17) | | | | | | exception_ptr(C++11) | | | | | | make_exception_ptr(C++11) | | | | | | current_exception(C++11) | | | | | | rethrow_exception(C++11) | | | | | | nested_exception(C++11) | | | | | | throw_with_nested(C++11) | | | | | | rethrow_if_nested(C++11) | | | | | | Exception handling failures | | | | | | terminate | | | | | | terminate_handler | | | | | | get_terminate(C++11) | | | | | | set_terminate | | | | | | bad_exception | | | | | | unexpected(until C++17\*) | | | | | | unexpected_handler(until C++17\*) | | | | | | get_unexpected(until C++17\*) | | | | | | set_unexpected(until C++17\*) | | | | | | Error numbers | | | | | | Error codes | | | | | | errno | | | | | | Assertions | | | | | | assert | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception categories | | | | | | logic_error | | | | | | invalid_argument | | | | | | domain_error | | | | | | length_error | | | | | | out_of_range | | | | | | runtime_error | | | | | | range_error | | | | | | overflow_error | | | | | | underflow_error | | | | | | tx_exception(TM TS) | | | | | | System error | | | | | | error_category(C++11) | | | | | | generic_category(C++11) | | | | | | system_category(C++11) | | | | | | error_condition(C++11) | | | | | | errc(C++11) | | | | | | error_code(C++11) | | | | | | system_error(C++11) | | | | | | Stacktrace | | | | | | stacktrace_entry(C++23) | | | | | | ****basic_stacktrace****(C++23) | | | | | | Debugging support | | | | | | is_debugger_present(C++26) | | | | | | breakpoint_if_debugging(C++26) | | | | | | breakpoint(C++26) | | | | | |

****std::basic_stacktrace****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| basic_stacktrace::basic_stacktrace | | | | |
| basic_stacktrace::~basic_stacktrace | | | | |
| basic_stacktrace::operator= | | | | |
| basic_stacktrace::current | | | | |
| basic_stacktrace::get_allocator | | | | |
| Iterators | | | | |
| basic_stacktrace::beginbasic_stacktrace::cbegin | | | | |
| basic_stacktrace::endbasic_stacktrace::cend | | | | |
| basic_stacktrace::rbeginbasic_stacktrace::crbegin | | | | |
| basic_stacktrace::rendbasic_stacktrace::crend | | | | |
| Capacity | | | | |
| basic_stacktrace::empty | | | | |
| basic_stacktrace::size | | | | |
| basic_stacktrace::max_size | | | | |
| Element access | | | | |
| [basic_stacktrace::operator[]](basic_stacktrace/operator_at.html "cpp/utility/basic stacktrace/operator at") | | | | |
| basic_stacktrace::at | | | | |
| Modifiers | | | | |
| basic_stacktrace::swap | | | | |
| Non-member functions | | | | |
| operator== operator<=> | | | | |
| swap(std::basic_stacktrace) | | | | |
| to_string(std::basic_stacktrace) | | | | |
| operator<< | | | | |
| Helper classes | | | | |
| hash<std::basic_stacktrace> | | | | |
| formatter<std::basic_stacktrace> | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<stacktrace>` |  |  |
| template< class Allocator >  class basic_stacktrace; | (1) | (since C++23) |
| using stacktrace =      std::basic_stacktrace<std::allocator<std::stacktrace_entry>>; | (2) | (since C++23) |
| namespace pmr {  using stacktrace =      std::basic_stacktrace<std::pmr::polymorphic_allocator<std::stacktrace_entry>>; } | (3) | (since C++23) |
|  |  |  |

1) The `basic_stacktrace` class template represents a snapshot of the whole stacktrace or its given part. It satisfies the requirement of AllocatorAwareContainer, SequenceContainer, and ReversibleContainer, except that only move, assignment, swap, and operations for const-qualified sequence containers are supported, and the semantics of comparison functions are different from those required for a container.2) Convenience type alias for the `basic_stacktrace` using the default std::allocator.3) Convenience type alias for the `basic_stacktrace` using the polymorphic allocator.

The **invocation sequence** of the current evaluation \(\small{ {x}_{0} }\)x0 in the current thread of execution is a sequence \(\small{ ({x}_{0}, \dots, {x}_{n})}\)(x0, ..., xn) of evaluations such that, for \(\small{i \ge 0}\)i≥0, \(\small{ {x}_{i} }\)xi is within the function invocation \(\small{ {x}_{i+1} }\)xi+1.

A **stacktrace** is an approximate representation of an invocation sequence and consists of stacktrace entries.

A **stacktrace entry** represents an evaluation in a stacktrace. It is represented by std::stacktrace_entry in the C++ standard library.

### Template parameters

|  |  |  |
| --- | --- | --- |
| Allocator | - | An allocator that is used to acquire/release memory and to construct/destroy the elements in that memory. The type must meet the requirements of Allocator. The program is ill-formed if `Allocator::value_type` is not std::stacktrace_entry. |

### Member types

|  |  |
| --- | --- |
| Member type | Definition |
| `value_type` | std::stacktrace_entry |
| `const_reference` | const value_type& |
| `reference` | value_type& |
| `const_iterator` | implementation-defined const LegacyRandomAccessIterator type that models `random_access_iterator` |
| `iterator` | `const_iterator` |
| `reverse_iterator` | std::reverse_iterator<iterator> |
| `reverse_const_iterator` | std::reverse_iterator<const_iterator> |
| `difference_type` | implementation-defined signed integer type |
| `size_type` | implementation-defined unsigned integer type |
| `allocator_type` | `Allocator` |

### Member functions

|  |  |
| --- | --- |
| (constructor) | creates a new `basic_stacktrace`   (public member function) |
| (destructor) | destroys the `basic_stacktrace`   (public member function) |
| operator= | assigns to the `basic_stacktrace`   (public member function) |
| current[static] | obtains the current stacktrace or its given part   (public static member function) |
| get_allocator | returns the associated allocator   (public member function) |
| Iterators | |
| begincbegin | returns an iterator to the beginning   (public member function) |
| endcend | returns an iterator to the end   (public member function) |
| rbegincrbegin | returns a reverse iterator to the beginning   (public member function) |
| rendcrend | returns a reverse iterator to the end   (public member function) |
| Capacity | |
| empty | checks whether the `basic_stacktrace` is empty   (public member function) |
| size | returns the number of stacktrace entries   (public member function) |
| max_size | returns the maximum possible number of stacktrace entries   (public member function) |
| Element access | |
| [operator[]](basic_stacktrace/operator_at.html "cpp/utility/basic stacktrace/operator at") | access specified stacktrace entry   (public member function) |
| at | access specified stacktrace entry with bounds checking   (public member function) |
| Modifiers | |
| swap | swaps the contents   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| operator==operator<=>(C++23) | compares the sizes and the contents of two `basic_stacktrace` values   (function template) |
| std::swap(std::basic_stacktrace)(C++23) | specializes the std::swap algorithm   (function template) |
| to_string(C++23) | returns a string with a description of the `basic_stacktrace`   (function template) |
| operator<<(C++23) | performs stream output of `basic_stracktrace`   (function template) |

### Helper classes

|  |  |
| --- | --- |
| std::hash<std::basic_stacktrace>(C++23) | hash support for ****std::basic_stacktrace****   (class template specialization) |
| std::formatter<std::basic_stacktrace>(C++23) | formatting support for `basic_stacktrace`   (class template specialization) |

### Notes

Support for custom allocators is provided for using `basic_stacktrace` on a hot path or in embedded environments. Users can allocate `stacktrace_entry` objects on the stack or in some other place, where appropriate.

The sequence of std::stacktrace_entry objects owned by a `std::basic_stacktrace` is immutable, and either is empty or represents a contiguous interval of the whole stacktrace.

boost::stacktrace::basic_stacktrace (available in Boost.Stacktrace) can be used instead when `std::basic_stacktrace` is not available.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_stacktrace` | `202011L` | (C++23) | Stacktrace library |
| `__cpp_lib_formatters` | `202302L` | (C++23) | Formatting std::thread::id and std::stacktrace |

### Example

The output obtained using Compiler Explorer: msvc and gcc.

Run this code

```
#include <iostream>
#include <stacktrace>
 
int nested_func(int c)
{
    std::cout << std::stacktrace::current() << '\n';
    return c + 1;
}
 
int func(int b)
{
    return nested_func(b + 1);
}
 
int main()
{
    std::cout << func(777);
}

```

Possible output:

```
// msvc output (the lines ending with '⤶' arrows are split to fit the width):
0> C:\Users\ContainerAdministrator\AppData\Local\Temp\compiler-explorer-compiler20221122-⤶
31624-2ja1sf.8ytzw\example.cpp(6): output_s!nested_func+0x1F
1> C:\Users\ContainerAdministrator\AppData\Local\Temp\compiler-explorer-compiler20221122-⤶
31624-2ja1sf.8ytzw\example.cpp(12): output_s!func+0x15
2> C:\Users\ContainerAdministrator\AppData\Local\Temp\compiler-explorer-compiler20221122-⤶
31624-2ja1sf.8ytzw\example.cpp(15): output_s!main+0xE
3> D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288): output_s!⤶
__scrt_common_main_seh+0x10C
4> KERNEL32!BaseThreadInitThunk+0x14
5> ntdll!RtlUserThreadStart+0x21
779
 
gcc output:
   0# nested_func(int) at /app/example.cpp:7
   1# func(int) at /app/example.cpp:13
   2#      at /app/example.cpp:18
   3#      at :0
   4#      at :0
   5# 
 
779

```

### See also

|  |  |
| --- | --- |
| stacktrace_entry(C++23) | representation of an evaluation in a stacktrace   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/basic_stacktrace&oldid=168072>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 January 2024, at 01:38.