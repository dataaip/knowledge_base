# std::execution::scheduler

From cppreference.com
< cpp‎ | execution
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

Execution Library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Execution concepts | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****scheduler**** | | | | | | receiver") | | | | | | receiver_of") | | | | | | operation_state") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sender") | | | | | | sender_in") | | | | | | sender_to") | | | | | |  | | | | | | | | Execution components | | | | | | Execution contexts | | | | | | run_loop") | | | | | | Execution domains | | | | | | default_domain") | | | | | | Forward progress guarantee | | | | | | forward_progress_guarantee") | | | | | | Environments | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | empty_env") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_env") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | env_of_t") | | | | | | | | Queries | | | | | | std::stop_token_of_t") | | | | | | std::get_stop_token") | | | | | | std::get_allocator") | | | | | | std::forwarding_query") | | | | | | get_scheduler") | | | | | | get_domain") | | | | | | get_forward_progress_guarantee") | | | | | | get_delegation_scheduler") | | | | | | get_completion_scheduler") | | | | | | Completion signatures | | | | | | completion_signatures") | | | | | | completion_signatures_of_t") | | | | | | transform_completion_signatures") | | | | | | transform_completion_signatures_of") | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | value_types_of_t") | | | | | | error_types_of_t") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tag_of_t") | | | | | | sends_stopped") | | | | | | | | Sender adaptor closures | | | | | | sender_adaptor_closure") | | | | | | Coroutine utility | | | | | | as_awaitable") | | | | | | with_awaitable_senders") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Core operations | | | | | | Operation state | | | | | | connect connect_result_t") | | | | | | start") | | | | | | Completion | | | | | | set_value") | | | | | | set_error") | | | | | | set_stopped") | | | | | | Transformation | | | | | | transform_env") | | | | | | transform_sender") | | | | | | apply_sender") | | | | | | Sender algorithms | | | | | | Sender factories | | | | | | just | | | | | | just_error | | | | | | just_stopped | | | | | | read_env | | | | | | schedule schedule_result_t | | | | | | Sender adaptors | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | starts_on") | | | | | | continues_on") | | | | | | on | | | | | | then | | | | | | upon_error | | | | | | upon_stopped | | | | | | let_value | | | | | | let_error | | | | | | let_stopped | | | | | | schedule_from") | | | | | | when_all | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | when_all_with_variant") | | | | | | into_variant | | | | | | stopped_as_optional | | | | | | stopped_as_error | | | | | | bulk") | | | | | | split") | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | | Sender consumers | | | | | | this_thread::sync_wait | | | | | | this_thread::sync_wait_with_variant") | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<execution>` |  |  |
| template< class Sch >  concept scheduler =      std::derived_from<          typename std::remove_cvref_t<Sch>::scheduler_concept,          scheduler_t> &&      /\*queryable\*/<Sch> &&      requires(Sch&& sch)      {          {               std::execution::schedule(std::forward<Sch>(sch))          } -> std::execution::sender;          {              auto(                  std::execution::get_completion_scheduler<                      std::execution::set_value_t>(                          std::execution::get_env(                              std::execution::schedule(                                  std::forward<Sch>(sch)))))          } -> std::same_as<std::remove_cvref_t<Sch>>;      } &&      std::equality_comparable<std::remove_cvref_t<Sch>> &&      std::copy_constructible<std::remove_cvref_t<Sch>>; }; | (1) | (since C++26) |
| Helper tag type |  |  |
| struct scheduler_t {}; | (2) | (since C++26) |
|  |  |  |

The concept `scheduler` is modeled by types that are **schedulers**, that is, lightweight handlers to execution resources such as thread pools that work with the C++ execution library.

### Semantic requirements

Given a scheduler of type `Sch` and execution environment of type `Env` such that sender_in<schedule_result_t<Sch>, Env> is satisfied, then /\*sender-in-of\*/<schedule_result_t<Sch>, Env> is modeled.

The scheduler's copy constructor, destructor, equality comparison, or swap member functions must be non-throwing.

All of those member functions as well as the scheduler type's `schedule` function must be thread-safe.

Two schedulers are equal only if they represent the same execution resource.

For a given scheduler `sch`, the expression get_completion_scheduler<set_value_t>(get_env(schedule(sch))) compares equal to `sch`.

For a given scheduler `sch`, if the expression get_domain(sch) is well-formed, then the expression get_domain(get_env(schedule(sch))) is also well-formed and has the same type.

The destructor of a scheduler must not block pending completion of any receivers connected to the sender objects returned from schedule (the underlying resource may provide a separate API to wait for completion of submitted function objects)

### Examples

simple wrapper for std::execution::run_loop that constantly polls run_loop's queue on a single dedicated thread. Demo using draft reference implementation: <https://godbolt.org/z/146fY4Y91>

Run this code

```
#include <execution>
#include <iostream>
#include <thread>
 
class single_thread_context
{
    std::execution::run_loop loop_{};
    std::jthread thread_;
 
public:
    single_thread_context()
        : thread_([this] { loop_.run(); })
    {}
    single_thread_context(single_thread_context&&) = delete;
 
    ~single_thread_context()
    {
        loop_.finish();
    }
 
    std::execution::scheduler auto get_scheduler() noexcept
    {
        return loop_.get_scheduler();
    }
};
 
int main()
{
    single_thread_context ctx;
 
    std::execution::sender auto snd =
        std::execution::schedule(ctx.get_scheduler())
        | std::execution::then([]
            {
                std::cout << "Hello world! Have an int.\n";
                return 015;
            })
        | std::execution::then([](int arg) { return arg + 42; });
 
    auto [i] = std::this_thread::sync_wait(snd).value();
 
    std::cout << "Back in the main thread, result is " << i << '\n';
}

```

Output:

```
Hello world! Have an int.
Back in the main thread, result is 55

```

### See also

|  |  |
| --- | --- |
| execution::schedule(C++26) | prepares a task graph for execution on a given scheduler (customization point object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/execution/scheduler&oldid=177026>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 October 2024, at 05:39.