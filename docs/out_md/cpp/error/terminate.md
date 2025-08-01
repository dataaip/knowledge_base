# std::terminate

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception handling | | | | | | exception | | | | | | uncaught_exceptionuncaught_exceptions(until C++20\*)(C++17) | | | | | | exception_ptr(C++11) | | | | | | make_exception_ptr(C++11) | | | | | | current_exception(C++11) | | | | | | rethrow_exception(C++11) | | | | | | nested_exception(C++11) | | | | | | throw_with_nested(C++11) | | | | | | rethrow_if_nested(C++11) | | | | | | Exception handling failures | | | | | | ****terminate**** | | | | | | terminate_handler | | | | | | get_terminate(C++11) | | | | | | set_terminate | | | | | | bad_exception | | | | | | unexpected(until C++17\*) | | | | | | unexpected_handler(until C++17\*) | | | | | | get_unexpected(until C++17\*) | | | | | | set_unexpected(until C++17\*) | | | | | | Error numbers | | | | | | Error codes | | | | | | errno | | | | | | Assertions | | | | | | assert | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Exception categories | | | | | | logic_error | | | | | | invalid_argument | | | | | | domain_error | | | | | | length_error | | | | | | out_of_range | | | | | | runtime_error | | | | | | range_error | | | | | | overflow_error | | | | | | underflow_error | | | | | | tx_exception(TM TS) | | | | | | System error | | | | | | error_category(C++11) | | | | | | generic_category(C++11) | | | | | | system_category(C++11) | | | | | | error_condition(C++11) | | | | | | errc(C++11) | | | | | | error_code(C++11) | | | | | | system_error(C++11) | | | | | | Stacktrace | | | | | | stacktrace_entry(C++23) | | | | | | basic_stacktrace(C++23) | | | | | | Debugging support | | | | | | is_debugger_present(C++26) | | | | | | breakpoint_if_debugging(C++26) | | | | | | breakpoint(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<exception>` |  |  |
|  |  |  |
| --- | --- | --- |
| void terminate(); |  | (until C++11) |
| [[noreturn]] void terminate() noexcept; |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

`std::terminate()` is called by the C++ runtime when the program cannot continue for any of the following reasons:

1) An exception is thrown and not caught (it is implementation-defined whether any stack unwinding is done in this case).2) A function directly invoked by the exception handling mechanism while handling an exception that has not yet been caught exits via an exception (e.g. a destructor of some local object, or a copy constructor constructing a catch-clause parameter).3) The constructor or the destructor of a static or thread-local(since C++11) object throws an exception.4) A function registered with std::atexit or std::at_quick_exit(since C++11) throws an exception.

|  |  |
| --- | --- |
| 5) A dynamic exception specification is violated and the default handler for std::unexpected is executed.6) A non-default handler for std::unexpected throws an exception that violates the previously violated dynamic exception specification, if the specification does not include std::bad_exception. | (until C++17) |

|  |  |
| --- | --- |
| 7) A noexcept specification is violated (it is implementation-defined whether any stack unwinding is done in this case).8) std::nested_exception::rethrow_nested is called for an object that isn't holding a captured exception.9) An exception is thrown from the initial function of std::thread.10) A joinable std::thread is destroyed or assigned to.11) std::condition_variable::wait, std::condition_variable::wait_until, or std::condition_variable::wait_for fails to reach its postcondition (e.g. if relocking the mutex throws). | (since C++11) |

|  |  |
| --- | --- |
| 12) A function invoked by a parallel algorithm exits via an uncaught exception and the execution policy specifies termination. | (since C++17) |

`std::terminate()` may also be called directly from the program.

When `std::terminate` is called due to a thrown exception, an implicit try/catch handler is considered active. Thus, calling std::current_exception will return the thrown exception.

In any case, `std::terminate` calls the currently installed std::terminate_handler. The default std::terminate_handler calls std::abort.

|  |  |
| --- | --- |
| If a destructor reset the terminate handler during stack unwinding and the unwinding later led to `terminate` being called, the handler that was installed at the end of the throw expression is the one that will be called. (note: it was ambiguous whether re-throwing applied the new handlers) | (until C++11) |
| If a destructor reset the terminate handler during stack unwinding, it is unspecified which handler is called if the unwinding later led to `terminate` being called. | (since C++11) |

### Notes

If the handler mechanism is not wanted, e.g. because it requires atomic operations which may bloat binary size, a direct call to std::abort is preferred when terminating the program abnormally.

Some compiler intrinsics, e.g. `__builtin_trap` (gcc, clang, and icc) or `__debugbreak` (msvc), can be used to terminate the program as fast as possible.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2111 | C++11 | effect of calling std::set_terminate during stack unwinding differs from C++98 and breaks some ABIs | made unspecified |

### See also

|  |  |
| --- | --- |
| terminate_handler | the type of the function called by ****std::terminate****   (typedef) |
| abort | causes abnormal program termination (without cleaning up)   (function) |
| breakpoint(C++26) | pauses the running program when called   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/error/terminate&oldid=173424>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 July 2024, at 09:57.