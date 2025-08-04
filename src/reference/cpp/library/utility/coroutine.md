# Coroutine support (C++20)

From cppreference.com

****Coroutine support****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Coroutine traits | | | | |
| coroutine_traits(C++20) | | | | |
| Coroutine handle | | | | |
| coroutine_handle(C++20) | | | | |
| No-op coroutines | | | | |
| noop_coroutine_promise(C++20) | | | | |
| noop_coroutine(C++20) | | | | |
| Trivial awaitables | | | | |
| suspend_never(C++20) | | | | |
| suspend_always(C++20) | | | | |
| Range generators | | | | |
| generator(C++23) | | | | |

The coroutine support library defines several types that provide compile and run-time support for coroutines.

### Coroutine traits

|  |  |
| --- | --- |
| Defined in header `<coroutine>` | |
| coroutine_traits(C++20) | trait type for discovering coroutine promise types   (class template) |

### Coroutine handle

|  |  |
| --- | --- |
| Defined in header `<coroutine>` | |
| coroutine_handle(C++20) | used to refer to a suspended or executing coroutine   (class template) |

### No-op coroutines

|  |  |
| --- | --- |
| Defined in header `<coroutine>` | |
| noop_coroutine(C++20) | creates a coroutine handle that has no observable effects when resumed or destroyed   (function) |
| noop_coroutine_promise(C++20) | used for coroutines with no observable effects   (class) |
| noop_coroutine_handle(C++20) | std::coroutine_handle<std::noop_coroutine_promise>, intended to refer to a no-op coroutine   (typedef) |

### Trivial awaitables

|  |  |
| --- | --- |
| Defined in header `<coroutine>` | |
| suspend_never(C++20) | indicates that an await-expression should never suspend   (class) |
| suspend_always(C++20) | indicates that an await-expression should always suspend   (class) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_impl_coroutine` | `201902L` | (C++20) | Coroutines (compiler support) |
| `__cpp_lib_coroutine` | `201902L` | (C++20) | Coroutines (library support) |
| `__cpp_lib_generator` | `202207L` | (C++23) | std::generator: synchronous coroutine generator for ranges |

### See also

|  |  |
| --- | --- |
| generator(C++23) | A `view` that represents synchronous coroutine generator   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/coroutine&oldid=162075>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 November 2023, at 11:39.