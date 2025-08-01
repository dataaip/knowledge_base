# std::experimental::scope_success

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

Library fundamentals v3

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| experimental::scope_exit | | | | |
| experimental::scope_fail | | | | |
| ****experimental::scope_success**** | | | | |
| experimental::unique_resource | | | | |

****std::experimental::scope_success****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| scope_success::scope_success | | | | |
| scope_success::~scope_success | | | | |
| Modifiers | | | | |
| scope_success::release | | | | |
| Deduction guides | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/scope>` |  |  |
| template< class EF >  class scope_success; |  | (library fundamentals TS v3) |
|  |  |  |

The class template `scope_success` is a general-purpose scope guard intended to call its exit function when a scope is normally exited.

`scope_success` is not CopyConstructible, CopyAssignable or MoveAssignable, however, it may be MoveConstructible if `EF` meets some requirements, which permits wrapping a `scope_success` into another object.

A `scope_success` may be either active, i.e. calls its exit function on destruction, or inactive, i.e. does nothing on destruction. A `scope_success` is active after constructed from an exit function.

A `scope_success` can become inactive by calling release() on it either manually or automatically (by the move constructor). An inactive `scope_success` may also be obtained by initializing with another inactive `scope_success`. Once a `scope_success` is inactive, it cannot become active again.

A `scope_success` effectively holds an `EF` and a bool flag indicating if it is active, alongwith a counter of uncaught exceptions used for detecting whether the destructor is called during stack unwinding.

### Template parameters

|  |  |  |
| --- | --- | --- |
| EF | - | type of stored exit function |
| Type requirements | | |
| -`EF` shall be either:  - a Destructible FunctionObject type, - an lvalue reference to FunctionObject, - an lvalue reference to function. | | |
| -Calling an lvalue of std::remove_reference_t<EF> with no argument shall be well-formed. | | |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `scope_success`   (public member function) |
| (destructor) | calls the exit function when the scope is exited normally if the `scope_success` is active, then destroys the `scope_success`   (public member function) |
| operator=[deleted] | `scope_success` is not assignable   (public member function) |
| Modifiers | |
| release | makes the `scope_success` inactive   (public member function) |

### Deduction guides

### Notes

Constructing a `scope_success` of dynamic storage duration might lead to unexpected behavior.

Constructing a `scope_success` is constructed from another `scope_success` created in a different thread might also lead to unexpected behavior since the count of uncaught exceptions obtained in different threads may be compared during the destruction.

If the `EF` stored in a `scope_success` object refers to a local variable of the function where it is defined, e.g., as a lambda capturing the variable by reference, and that variable is used as a return operand in that function, that variable might have already been returned when the `scope_success`'s destructor executes, calling the exit function. This can lead to surprising behavior.

### Example

Run this code

```
#include <iostream>
#include <cstdlib>
#include <string_view>
#include <experimental/scope>
 
void print_exit_status(std::string_view name, bool exit_status, bool did_throw) {
  std::cout << name << ":\n";
  std::cout << "  Throwed exception  " << (did_throw ? "yes" : "no") << "\n";
  std::cout << "  Exit status        " << (exit_status ? "finished" : "pending") << "\n\n";
}
 
// Randomly throw an exception (50% chance)
void maybe_throw() {
    if (std::rand() >= RAND_MAX / 2)
        throw std::exception{};
}
 
int main() {
  bool exit_status{false}, did_throw{false};
 
  // Manual handling at "end of scope"
  try {
    maybe_throw();
    exit_status = true; 
  } catch (...) { did_throw = true; }
  print_exit_status("Manual handling", exit_status, did_throw);
 
  // Using scope_exit: runs on scope exit (success or exception)
  exit_status = did_throw = false;
  try {
    auto guard = std::experimental::scope_exit{[&]{ exit_status = true; } };
    maybe_throw();
  } catch (...) { did_throw = true; }
  print_exit_status("scope_exit", exit_status, did_throw);
 
  // Using scope_fail: runs only if an exception occurs
  exit_status = did_throw = false;
  try {
    auto guard = std::experimental::scope_fail{[&]{ exit_status = true; } };
    maybe_throw();
  } catch (...) { did_throw = true; }
  print_exit_status("scope_fail", exit_status, did_throw);
 
  // Using scope_success: runs only if no exception occurs
  exit_status = did_throw = false;
  try {
    auto guard = std::experimental::scope_success{[&]{ exit_status = true; } };
    maybe_throw();
  } catch (...) { did_throw = true; }
  print_exit_status("scope_success", exit_status, did_throw);
}

```

Output:

```
Manual handling:
  Throwed exception  yes
  Exit status        pending
 
scope_exit:
  Throwed exception  no
  Exit status        finished
 
scope_fail:
  Throwed exception  yes
  Exit status        finished
 
scope_success:
  Throwed exception  yes
  Exit status        pending

```

### See also

|  |  |
| --- | --- |
| scope_exit | wraps a function object and invokes it on exiting the scope   (class template) |
| scope_fail | wraps a function object and invokes it on exiting the scope through an exception   (class template) |
| default_delete(C++11) | default deleter for unique_ptr   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/scope_success&oldid=131207>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 July 2021, at 23:03.