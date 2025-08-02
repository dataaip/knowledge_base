# std::current_exception

From cppreference.com
< cpp‎ | error
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception handling | | | | | | exception | | | | | | uncaught_exceptionuncaught_exceptions(until C++20\*)(C++17) | | | | | | exception_ptr(C++11) | | | | | | make_exception_ptr(C++11) | | | | | | ****current_exception****(C++11) | | | | | | rethrow_exception(C++11) | | | | | | nested_exception(C++11) | | | | | | throw_with_nested(C++11) | | | | | | rethrow_if_nested(C++11) | | | | | | Exception handling failures | | | | | | terminate | | | | | | terminate_handler | | | | | | get_terminate(C++11) | | | | | | set_terminate | | | | | | bad_exception | | | | | | unexpected(until C++17\*) | | | | | | unexpected_handler(until C++17\*) | | | | | | get_unexpected(until C++17\*) | | | | | | set_unexpected(until C++17\*) | | | | | | Error numbers | | | | | | Error codes | | | | | | errno | | | | | | Assertions | | | | | | assert | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception categories | | | | | | logic_error | | | | | | invalid_argument | | | | | | domain_error | | | | | | length_error | | | | | | out_of_range | | | | | | runtime_error | | | | | | range_error | | | | | | overflow_error | | | | | | underflow_error | | | | | | tx_exception(TM TS) | | | | | | System error | | | | | | error_category(C++11) | | | | | | generic_category(C++11) | | | | | | system_category(C++11) | | | | | | error_condition(C++11) | | | | | | errc(C++11) | | | | | | error_code(C++11) | | | | | | system_error(C++11) | | | | | | Stacktrace | | | | | | stacktrace_entry(C++23) | | | | | | basic_stacktrace(C++23) | | | | | | Debugging support | | | | | | is_debugger_present(C++26) | | | | | | breakpoint_if_debugging(C++26) | | | | | | breakpoint(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<exception>` |  |  |
| std::exception_ptr current_exception() noexcept; |  | (since C++11)  (constexpr since C++26) |
|  |  |  |

If called during exception handling (typically, in a catch clause), captures the current exception object and creates an std::exception_ptr that holds either a copy or a reference to that exception object (depending on the implementation). The referenced object remains valid at least as long as there is an `exception_ptr` object that refers to it.

If the implementation of this function requires a call to new and the call fails, the returned pointer will hold a reference to an instance of std::bad_alloc.

If the implementation of this function requires copying the captured exception object and its copy constructor throws an exception, the returned pointer will hold a reference to the exception thrown. If the copy constructor of the thrown exception object also throws, the returned pointer may hold a reference to an instance of std::bad_exception to break the endless loop.

If the function is called when no exception is being handled, an empty std::exception_ptr is returned.

This function can be called in a std::terminate_handler to retrieve the exception which has provoked the invocation of std::terminate.

### Return value

An instance of std::exception_ptr holding a reference to the exception object, or a copy of the exception object, or to an instance of std::bad_alloc or to an instance of std::bad_exception.

### Notes

On the implementations that follow Itanium C++ ABI (GCC, Clang, etc), exceptions are allocated on the heap when thrown (except for std::bad_alloc in some cases), and this function simply creates the smart pointer referencing the previously-allocated object, On MSVC, exceptions are allocated on stack when thrown, and this function performs the heap allocation and copies the exception object.

On Windows in managed CLR environments [[1]](https://learn.microsoft.com/en-us/cpp/dotnet/exceptions-in-cpp-cli), the implementation will store a std::bad_exception when the current exception is a managed exception ([[2]](https://github.com/microsoft/STL/blob/65aab97a8e75e7ba409002e518ed799006dfb285/stl/src/excptptr.cpp#L367)). Note that catch(...) catches also managed exceptions:

```
#include <exception>
 
int main()
{
    try
    {
        throw gcnew System::Exception("Managed exception");
    }
    catch (...)
    {
        std::exception_ptr ex = std::current_exception();
        try
        {
            std::rethrow_exception(ex);
        }
        catch (std::bad_exception const &)
        {
            // This will be printed.
            std::cout << "Bad exception" << std::endl;
        }
    }
}

```

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_constexpr_exceptions` | `202411L` | (C++26) | constexpr for exception types |

### Example

Run this code

```
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
 
void handle_eptr(std::exception_ptr eptr) // passing by value is OK
{
    try
    {
        if (eptr)
            std::rethrow_exception(eptr);
    }
    catch(const std::exception& e)
    {
        std::cout << "Caught exception: '" << e.what() << "'\n";
    }
}
 
int main()
{
    std::exception_ptr eptr;
 
    try
    {
        [[maybe_unused]]
        char ch = std::string().at(1); // this generates a std::out_of_range
    }
    catch(...)
    {
        eptr = std::current_exception(); // capture
    }
 
    handle_eptr(eptr);
 
} // destructor for std::out_of_range called here, when the eptr is destructed

```

Possible output:

```
Caught exception: 'basic_string::at: __n (which is 1) >= this->size() (which is 0)'

```

### See also

|  |  |
| --- | --- |
| exception_ptr(C++11) | shared pointer type for handling exception objects   (typedef) |
| rethrow_exception(C++11) | throws the exception from an std::exception_ptr   (function) |
| make_exception_ptr(C++11) | creates an std::exception_ptr from an exception object   (function template) |
| uncaught_exceptionuncaught_exceptions(removed in C++20\*)(C++17) | checks if exception handling is currently in progress   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/error/current_exception&oldid=177869>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 November 2024, at 12:26.