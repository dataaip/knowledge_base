# std::execution::when_all

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Execution concepts | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | scheduler | | | | | | receiver") | | | | | | receiver_of") | | | | | | operation_state") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sender") | | | | | | sender_in") | | | | | | sender_to") | | | | | |  | | | | | | | | Execution components | | | | | | Execution contexts | | | | | | run_loop") | | | | | | Execution domains | | | | | | default_domain") | | | | | | Forward progress guarantee | | | | | | forward_progress_guarantee") | | | | | | Environments | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | empty_env") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | get_env") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | env_of_t") | | | | | | | | Queries | | | | | | std::stop_token_of_t") | | | | | | std::get_stop_token") | | | | | | std::get_allocator") | | | | | | std::forwarding_query") | | | | | | get_scheduler") | | | | | | get_domain") | | | | | | get_forward_progress_guarantee") | | | | | | get_delegation_scheduler") | | | | | | get_completion_scheduler") | | | | | | Completion signatures | | | | | | completion_signatures") | | | | | | completion_signatures_of_t") | | | | | | transform_completion_signatures") | | | | | | transform_completion_signatures_of") | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | value_types_of_t") | | | | | | error_types_of_t") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tag_of_t") | | | | | | sends_stopped") | | | | | | | | Sender adaptor closures | | | | | | sender_adaptor_closure") | | | | | | Coroutine utility | | | | | | as_awaitable") | | | | | | with_awaitable_senders") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Core operations | | | | | | Operation state | | | | | | connect connect_result_t") | | | | | | start") | | | | | | Completion | | | | | | set_value") | | | | | | set_error") | | | | | | set_stopped") | | | | | | Transformation | | | | | | transform_env") | | | | | | transform_sender") | | | | | | apply_sender") | | | | | | Sender algorithms | | | | | | Sender factories | | | | | | just | | | | | | just_error | | | | | | just_stopped | | | | | | read_env | | | | | | schedule schedule_result_t | | | | | | Sender adaptors | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | starts_on") | | | | | | continues_on") | | | | | | on | | | | | | then | | | | | | upon_error | | | | | | upon_stopped | | | | | | let_value | | | | | | let_error | | | | | | let_stopped | | | | | | schedule_from") | | | | | | ****when_all**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | when_all_with_variant") | | | | | | into_variant | | | | | | stopped_as_optional | | | | | | stopped_as_error | | | | | | bulk") | | | | | | split") | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | | Sender consumers | | | | | | this_thread::sync_wait | | | | | | this_thread::sync_wait_with_variant") | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<execution>` |  |  |
| execution::sender auto when_all( execution::sender auto... inputs ); |  | (since C++26) |
|  |  |  |

### Parameters

|  |  |  |
| --- | --- | --- |
| inputs | - | senders upon which the completion of `when_all` is blocked. Can only include senders that can complete with a single set of values. |

### Return value

Returns a sender that completes once all of the input senders have completed. The values sent by this sender are the values sent by each of the input senders, in order of the arguments passed to `when_all`.

### Notes

- The sender returned by `when_all` completes inline on the execution resource on which the last input sender completes, unless `stop` is requested before `when_all` is started, in which case it completes inline within the call to start.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| when_all(concurrency TS) | produces a future that becomes ready when all given futures or `shared_futures` are ready   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/execution/when_all&oldid=176771>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 October 2024, at 10:36.