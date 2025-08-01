# Multi-threaded executions and data races (since C++11)

From cppreference.com
< cpp‎ | language
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

C++ language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General topics | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Preprocessor | | | | | | Comments | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Keywords | | | | | | Escape sequences | | | | | |
| Flow control | | | | |
| Conditional execution statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | switch | | | | | |
| Iteration statements (loops) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | for | | | | | | range-`for` (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | while | | | | | | `do-while` | | | | | |
| Jump statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | continue - break | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | goto - return | | | | | |
| Functions | | | | |
| Function declaration | | | | |
| Lambda function expression | | | | |
| `inline` specifier | | | | |
| Dynamic exception specifications (until C++17\*) | | | | |
| `noexcept` specifier (C++11) | | | | |
| Exceptions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `throw`-expression | | | | | | `try` block | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | `catch` handler | | | | | |
| Namespaces | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace declaration | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace aliases | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Fundamental types | | | | | | Enumeration types | | | | | | Function types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class/struct types | | | | | | Union types | | | | | |  | | | | | |
| Specifiers | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const`/`volatile` | | | | | | decltype (C++11) | | | | | | auto (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | constexpr (C++11) | | | | | | consteval (C++20) | | | | | | constinit (C++20) | | | | | |
| Storage duration specifiers | | | | |
| Initialization | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Expressions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operators | | | | | | Operator precedence | | | | | |
| Alternative representations | | | | |
| Literals | | | | |
| Boolean - Integer - Floating-point | | | | |
| Character - String - nullptr (C++11) | | | | |
| User-defined (C++11) | | | | |
| Utilities | | | | |
| Attributes (C++11) | | | | |
| Types | | | | |
| `typedef` declaration | | | | |
| Type alias declaration (C++11) | | | | |
| Casts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | static_cast | | | | | | const_cast | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Explicit conversions | | | | | | dynamic_cast | | | | | | reinterpret_cast | | | | | |
| Memory allocation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `new` expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `delete` expression | | | | | |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class declaration | | | | | | Constructors | | | | | | `this` pointer | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Access specifiers | | | | | | `friend` specifier | | | | | |  | | | | | |
| Class-specific function properties | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Virtual function | | | | | | `override` specifier (C++11) | | | | | | `final` specifier (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | explicit (C++11) | | | | | | static | | | | | |  | | | | | |
| Special member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default constructor | | | | | | Copy constructor | | | | | | Move constructor (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Copy assignment | | | | | | Move assignment (C++11) | | | | | | Destructor | | | | | |
| Templates | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class template | | | | | | Function template | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Template specialization | | | | | | Parameter packs (C++11) | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Inline assembly | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | History of C++ | | | | | |

 Basic Concepts

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Comments | | | | |
| ASCII | | | | |
| Punctuation | | | | |
| Names and identifiers | | | | |
| Types | | | | |
| Fundamental types | | | | |
| Objects | | | | |
| Scope | | | | |
| Object lifetime | | | | |
| Storage duration and linkage | | | | |
| Definitions and ODR | | | | |
| Name lookup | | | | |
| Qualified name lookup | | | | |
| Unqualified name lookup | | | | |
| The as-if rule | | | | |
| Undefined behavior | | | | |
| Memory model | | | | |
| ****Multi-threaded executions and data races**** (C++11) | | | | |
| Character sets and encodings | | | | |
| Phases of translation | | | | |
| The `main` function | | | | |
| Modules (C++20) | | | | |

A **thread of execution** is a flow of control within a program that begins with the invocation of a specific top-level function (by std::thread, std::async, std::jthread(since C++20) or other means), and recursively including every function invocation subsequently executed by the thread.

- When one thread creates another, the initial call to the top-level function of the new thread is executed by the new thread, not by the creating thread.

Any thread can potentially access any object and function in the program:

- Objects with automatic and thread-local storage duration may still be accessed by another thread through a pointer or by reference.
- Under a hosted implementation, a C++ program can have more than one thread running concurrently. The execution of each thread proceeds as defined by the rest of this page. The execution of the entire program consists of an execution of all of its threads.
- Under a freestanding implementation, it is implementation-defined whether a program can have more than one thread of execution.

For a signal handler that is not executed as a result of a call to std::raise, it is unspecified which thread of execution contains the signal handler invocation.

### Data races

Different threads of execution are always allowed to access (read and modify) different memory locations concurrently, with no interference and no synchronization requirements.

Two expression evaluations **conflict** if one of them modifies a memory location or starts/ends the lifetime of an object in a memory location, and the other one reads or modifies the same memory location or starts/ends the lifetime of an object occupying storage that overlaps with the memory location.

A program that has two conflicting evaluations has a **data race** unless

- both evaluations execute on the same thread or in the same signal handler, or
- both conflicting evaluations are atomic operations (see std::atomic), or
- one of the conflicting evaluations **happens-before** another (see std::memory_order).

If a data race occurs, the behavior of the program is undefined.

(In particular, release of a std::mutex is **synchronized-with**, and therefore, **happens-before** acquisition of the same mutex by another thread, which makes it possible to use mutex locks to guard against data races.)

```
int cnt = 0;
auto f = [&] { cnt++; };
std::thread t1{f}, t2{f}, t3{f}; // undefined behavior

```

```
std::atomic<int> cnt{0};
auto f = [&] { cnt++; };
std::thread t1{f}, t2{f}, t3{f}; // OK

```

#### Container data races

All containers in the standard library except `std`::vector<bool> guarantee that concurrent modifications on contents of the contained object in different elements in the same container will never result in data races.

```
std::vector<int> vec = {1, 2, 3, 4};
auto f = & { vec[index] = 5; };
std::thread t1{f, 0}, t2{f, 1}; // OK
std::thread t3{f, 2}, t4{f, 2}; // undefined behavior

```

```
std::vector<bool> vec = {false, false};
auto f = & { vec[index] = true; };
std::thread t1{f, 0}, t2{f, 1}; // undefined behavior

```

### Memory order

When a thread reads a value from a memory location, it may see the initial value, the value written in the same thread, or the value written in another thread. See std::memory_order for details on the order in which writes made from threads become visible to other threads.

### Forward progress

#### Obstruction freedom

When only one thread that is not blocked in a standard library function executes an atomic function that is lock-free, that execution is guaranteed to complete (all standard library lock-free operations are obstruction-free).

#### Lock freedom

When one or more lock-free atomic functions run concurrently, at least one of them is guaranteed to complete (all standard library lock-free operations are lock-free — it is the job of the implementation to ensure they cannot be live-locked indefinitely by other threads, such as by continuously stealing the cache line).

#### Progress guarantee

In a valid C++ program, every thread eventually does one of the following:

- Terminates.
- Invokes std::this_thread::yield.
- Makes a call to an library I/O function.
- Performs an access through a volatile glvalue.
- Performs an atomic operation or a synchronization operation.
- Continues execution of a trivial infinite loop (see below).

A thread is said to **make progress** if it performs one of the execution steps above, blocks in a standard library function, or calls an atomic lock-free function that does not complete because of a non-blocked concurrent thread.

This allows the compilers to remove, merge and reorder all loops that have no observable behavior, without having to prove that they would eventually terminate because it can assume that no thread of execution can execute forever without performing any of these observable behaviors. An affordance is made for trivial infinite loops, which cannot be removed nor reordered.

#### Trivial infinite loops

A **trivially empty iteration statement** is an iteration statement matching one of the following forms:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `while (` condition `) ;` | (1) |  |
|  | | | | | | | | | |
| `while (` condition `) { }` | (2) |  |
|  | | | | | | | | | |
| `do ; while (` condition `) ;` | (3) |  |
|  | | | | | | | | | |
| `do { } while (` condition `) ;` | (4) |  |
|  | | | | | | | | | |
| `for (` init-statement condition ﻿(optional) `; ) ;` | (5) |  |
|  | | | | | | | | | |
| `for (` init-statement condition ﻿(optional) `; ) { }` | (6) |  |
|  | | | | | | | | | |

1) A while statement whose loop body is an empty simple statement.2) A while statement whose loop body is an empty compound statement.3) A do-while statement whose loop body is an empty simple statement.4) A do-while statement whose loop body is an empty compound statement.5) A for statement whose loop body is an empty simple statement, the for statement does not have an iteration-expression.6) A for statement whose loop body is an empty compound statement, the for statement does not have an iteration-expression.

The **controlling expression** of a trivially empty iteration statement is:

1-4) condition.5,6) condition if present, otherwise true.

A **trivial infinite loop** is a trivially empty iteration statement for which the converted controlling expression is a constant expression, when manifestly constant-evaluated, and evaluates to true.

The loop body of a trivial infinite loop is replaced with a call to the function std::this_thread::yield. It is implementation-defined whether this replacement occurs on freestanding implementations.

```
for (;;); // trivial infinite loop, well defined as of P2809
for (;;) { int x; } // undefined behavior

```

|  |  |
| --- | --- |
| Concurrent forward progress If a thread offers **concurrent forward progress guarantee**, it will **make progress** (as defined above) in finite amount of time, for as long as it has not terminated, regardless of whether other threads (if any) are making progress.  The standard encourages, but doesn't require that the main thread and the threads started by std::thread and std::jthread(since C++20) offer concurrent forward progress guarantee. Parallel forward progress If a thread offers **parallel forward progress guarantee**, the implementation is not required to ensure that the thread will eventually make progress if it has not yet executed any execution step (I/O, volatile, atomic, or synchronization), but once this thread has executed a step, it provides **concurrent forward progress** guarantees (this rule describes a thread in a thread pool that executes tasks in arbitrary order). Weakly parallel forward progress If a thread offers **weakly parallel forward progress guarantee**, it does not guarantee to eventually make progress, regardless of whether other threads make progress or not.  Such threads can still be guaranteed to make progress by blocking with forward progress guarantee delegation: if a thread `P` blocks in this manner on the completion of a set of threads `S`, then at least one thread in `S` will offer a forward progress guarantee that is same or stronger than `P`. Once that thread completes, another thread in `S` will be similarly strengthened. Once the set is empty, `P` will unblock.  The parallel algorithms from the C++ standard library block with forward progress delegation on the completion of an unspecified set of library-managed threads. | (since C++17) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1953 | C++11 | two expression evaluations that start/end the lifetimes of objects with overlapping storages did not conflict | they conflict |
| LWG 2200 | C++11 | it was unclear whether the container data race requirement only applies to sequence containers | applies to all containers |
| P2809R3 | C++11 | the behavior of executing “trivial”[[1]](multithread.html#cite_note-1) infinite loops was undefined | properly defines “trivial infinite loops” and made the behavior well-defined |

1. ↑ “Trivial” here means executing the infinite loop never makes any progress.
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/multithread&oldid=179724>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 January 2025, at 22:15.