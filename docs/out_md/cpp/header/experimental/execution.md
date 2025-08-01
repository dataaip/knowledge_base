# Experimental library header <experimental/execution>

From cppreference.com
< cpp‎ | header‎ | experimental
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

Experimental library headers

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Execution P2300 | | | | |
| ****<experimental/execution>**** | | | | |
| Filesystem TS | | | | |
| <experimental/filesystem> | | | | |
| Parallelism TS (v1, v2) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/algorithm` | | | | | | `experimental/execution_policy` | | | | | | `experimental/exception_list` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/numeric` | | | | | | <experimental/simd> | | | | | | `experimental/task_block` | | | | | |
| Library Fundamentals TS (v1, v2, v3) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/algorithm` | | | | | | <experimental/any> | | | | | | `experimental/array` | | | | | | `experimental/chrono` | | | | | | `experimental/deque` | | | | | | `experimental/forward_list` | | | | | | <experimental/functional> | | | | | | `experimental/future` | | | | | | `experimental/iterator` | | | | | | `experimental/list` | | | | | | `experimental/map` | | | | | | `experimental/memory` | | | | | | <experimental/memory_resource> | | | | | | `experimental/numeric` | | | | | | <experimental/optional> | | | | | | `experimental/propagate_const` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/random` | | | | | | `experimental/ratio` | | | | | | `experimental/regex` | | | | | | `experimental/scope` | | | | | | `experimental/set` | | | | | | `experimental/source_location` | | | | | | `experimental/string` | | | | | | <experimental/string_view> | | | | | | `experimental/system_error` | | | | | | `experimental/tuple` | | | | | | `experimental/type_traits` | | | | | | `experimental/unordered_map` | | | | | | `experimental/unordered_set` | | | | | | `experimental/utility` | | | | | | `experimental/vector` | | | | | |  | | | | | |
| Concurrency TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/atomic` | | | | | | `experimental/barrier` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/future` | | | | | | `experimental/latch` | | | | | |
| Ranges TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/ranges/algorithm> | | | | | | <experimental/ranges/concepts> | | | | | | <experimental/ranges/functional> | | | | | | <experimental/ranges/iterator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/ranges/random> | | | | | | <experimental/ranges/tuple> | | | | | | <experimental/ranges/type_traits> | | | | | | <experimental/ranges/utility> | | | | | |
| Coroutines TS | | | | |
| `experimental/coroutine` | | | | |
| Networking TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/buffer` | | | | | | `experimental/executor` | | | | | | `experimental/internet` | | | | | | `experimental/io_context` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/net> | | | | | | `experimental/netfwd` | | | | | | `experimental/socket` | | | | | | `experimental/timer` | | | | | |
| Reflection TS | | | | |
| <experimental/reflect> | | | | |

This header is part of execution library, based on P2300R7.

|  |  |
| --- | --- |
| Includes | |

|  |  |
| --- | --- |
|  | This section is incomplete |

### Synopsis

```
namespace std {
  // helper concepts
  template<class T>
    concept /*movable-value*/ = /*see-below*/; // exposition only
 
  template<class From, class To>
    concept /*decays-to*/ = same_as<decay_t<From>, To>; // exposition only
 
  template<class T>
    concept /*class-type*/ = /*decays-to*/<T, T> && is_class_v<T>;  // exposition only
 
  // queryable objects
  template<class T>
    concept queryable = destructible;
 
  // queries
  namespace queries { // exposition only
    struct forwarding_query_t;
    struct get_allocator_t;
    struct get_stop_token_t;
  }
  using queries::forwarding_query_t;
  using queries::get_allocator_t;
  using queries::get_stop_token_t;
  inline constexpr forwarding_query_t forwarding_query{};
  inline constexpr get_allocator_t get_allocator{};
  inline constexpr get_stop_token_t get_stop_token{};
 
  template<class T>
    using stop_token_of_t =
      remove_cvref_t<decltype(get_stop_token(declval<T>()))>;
 
  template<class T>
    concept /*forwarding-query*/ = // exposition only
      forwarding_query(T{});
 
  namespace /*exec-envs*/ { // exposition only
    struct empty_env {};
    struct get_env_t;
  }
  using /*exec-envs*/::empty_env;
  using /*exec-envs*/::get_env_t;
  inline constexpr get_env_t get_env {};
 
  template<class T>
    using env_of_t = decltype(get_env(declval<T>()));
}
 
namespace std::execution {
  // queries
  enum class forward_progress_guarantee;
  namespace queries { // exposition only
    struct get_scheduler_t;
    struct get_delegatee_scheduler_t;
    struct get_forward_progress_guarantee_t;
    template<class CPO>
      struct get_completion_scheduler_t;
  }
  using queries::get_scheduler_t;
  using queries::get_delegatee_scheduler_t;
  using queries::get_forward_progress_guarantee_t;
  using queries::get_completion_scheduler_t;
  inline constexpr get_scheduler_t get_scheduler{};
  inline constexpr get_delegatee_scheduler_t get_delegatee_scheduler{};
  inline constexpr get_forward_progress_guarantee_t get_forward_progress_guarantee{};
  template<class CPO>
    inline constexpr get_completion_scheduler_t<CPO> get_completion_scheduler{};
 
  // schedulers
  template<class S>
    concept scheduler = /*see-below*/;
 
  // receivers
  template<class R>
    inline constexpr bool enable_receiver = /*see-below*/;
 
  template<class R>
    concept receiver = /*see-below*/;
 
  template<class R, class Completions>
    concept receiver_of = /*see-below*/;
 
  namespace receivers { // exposition only
    struct set_value_t;
    struct set_error_t;
    struct set_stopped_t;
  }
  using receivers::set_value_t;
  using receivers::set_error_t;
  using receivers::set_stopped_t;
  inline constexpr set_value_t set_value{};
  inline constexpr set_error_t set_error{};
  inline constexpr set_stopped_t set_stopped{};
 
  // operation states
  template<class O>
    concept operation_state = /*see-below*/;
 
  namespace /*op-state*/ { // exposition only
    struct start_t;
  }
  using /*op-state*/::start_t;
  inline constexpr start_t start{};
 
  // senders
  template<class S>
    inline constexpr bool enable_sender = /* see description */;
 
  template<class S>
    concept sender = /*see-below*/;
 
  template<class S, class E = empty_env>
    concept sender_in = /*see-below*/;
 
  template<class S, class R>
    concept sender_to = /*see-below*/;
 
  template <class S, class Sig, class E = empty_env>
    concept sender_of = /* see description */;
 
  template<class... Ts>
    struct /*type-list*/; // exposition only
 
  template<class S, class E = empty_env>
    using /*single-sender-value-type*/ = /* see description */; // exposition only
 
  template<class S, class E = empty_env>
    concept /*single-sender*/ = /* see description */; // exposition only
 
  // completion signatures
  namespace /*completion-signatures*/ { // exposition only
    struct get_completion_signatures_t;
  }
  using /*completion-signatures*/::get_completion_signatures_t;
  inline constexpr get_completion_signatures_t get_completion_signatures {};
 
  template<class S, class E = empty_env>
      requires sender_in<S, E>
    using completion_signatures_of_t = /*call-result-t*/<get_completion_signatures_t, S, E>;
 
  template<class... Ts>
    using /*decayed-tuple*/ = tuple<decay_t<Ts>...>; // exposition only
 
  template<class... Ts>
    using /*variant-or-empty*/ = /* see description */; // exposition only
 
  template<class S,
           class E = empty_env,
           template<class...> class Tuple = /*decayed-tuple*/,
           template<class...> class Variant = /*variant-or-empty*/>
      requires sender_in<S, E>
    using value_types_of_t = /* see description */;
 
  template<class S,
           class Env = empty_env,
           template<class...> class Variant = /*variant-or-empty*/>
      requires sender_in<S, E>
    using error_types_of_t = /* see description */;
 
  template<class S, class E = empty_env>
      requires sender_in<S, E>
    inline constexpr bool sends_stopped = /* see description */;
 
  // the connect sender algorithm
  namespace /*senders-connect*/ { // exposition only
    struct connect_t;
  }
  using /*senders-connect*/::connect_t;
  inline constexpr connect_t connect{};
 
  template<class S, class R>
    using connect_result_t = decltype(connect(declval<S>(), declval<R>()));
 
  // sender factories
  namespace /*senders-factories*/ { // exposition only
    struct schedule_t;
    struct transfer_just_t;
  }
  inline constexpr /* unspecified */ just{};
  inline constexpr /* unspecified */ just_error{};
  inline constexpr /* unspecified */ just_stopped{};
  using /*senders-factories*/::schedule_t;
  using /*senders-factories*/::transfer_just_t;
  inline constexpr schedule_t schedule{};
  inline constexpr transfer_just_t transfer_just{};
  inline constexpr /* unspecified */ read{};
 
  template<scheduler S>
    using schedule_result_t = decltype(schedule(declval<S>()));
 
  // sender adaptors
  namespace /*sender-adaptor-closure*/ { // exposition only
    template</*class-type*/ D>
      struct sender_adaptor_closure { };
  }
  using /*sender-adaptor-closure*/::sender_adaptor_closure;
 
  namespace /*sender-adaptors*/ { // exposition only
    struct on_t;
    struct transfer_t;
    struct schedule_from_t;
    struct then_t;
    struct upon_error_t;
    struct upon_stopped_t;
    struct let_value_t;
    struct let_error_t;
    struct let_stopped_t;
    struct bulk_t;
    struct split_t;
    struct when_all_t;
    struct when_all_with_variant_t;
    struct transfer_when_all_t;
    struct transfer_when_all_with_variant_t;
    struct into_variant_t;
    struct stopped_as_optional_t;
    struct stopped_as_error_t;
    struct ensure_started_t;
  }
  using /*sender-adaptors*/::on_t;
  using /*sender-adaptors*/::transfer_t;
  using /*sender-adaptors*/::schedule_from_t;
  using /*sender-adaptors*/::then_t;
  using /*sender-adaptors*/::upon_error_t;
  using /*sender-adaptors*/::upon_stopped_t;
  using /*sender-adaptors*/::let_value_t;
  using /*sender-adaptors*/::let_error_t;
  using /*sender-adaptors*/::let_stopped_t;
  using /*sender-adaptors*/::bulk_t;
  using /*sender-adaptors*/::split_t;
  using /*sender-adaptors*/::when_all_t;
  using /*sender-adaptors*/::when_all_with_variant_t;
  using /*sender-adaptors*/::transfer_when_all_t;
  using /*sender-adaptors*/::transfer_when_all_with_variant_t;
  using /*sender-adaptors*/::into_variant_t;
  using /*sender-adaptors*/::stopped_as_optional_t;
  using /*sender-adaptors*/::stopped_as_error_t;
  using /*sender-adaptors*/::ensure_started_t;
 
  inline constexpr on_t on{};
  inline constexpr transfer_t transfer{};
  inline constexpr schedule_from_t schedule_from{};
 
  inline constexpr then_t then{};
  inline constexpr upon_error_t upon_error{};
  inline constexpr upon_stopped_t upon_stopped{};
 
  inline constexpr let_value_t let_value{};
  inline constexpr let_error_t let_error{};
  inline constexpr let_stopped_t let_stopped{};
 
  inline constexpr bulk_t bulk{};
 
  inline constexpr split_t split{};
  inline constexpr when_all_t when_all{};
  inline constexpr when_all_with_variant_t when_all_with_variant{};
  inline constexpr transfer_when_all_t transfer_when_all{};
  inline constexpr transfer_when_all_with_variant_t
    transfer_when_all_with_variant{};
 
  inline constexpr into_variant_t into_variant{};
 
  inline constexpr stopped_as_optional_t stopped_as_optional;
 
  inline constexpr stopped_as_error_t stopped_as_error;
 
  inline constexpr ensure_started_t ensure_started{};
 
  // sender consumers
  namespace /*sender-consumers*/ { // exposition only
    struct start_detached_t;
  }
  using /*sender-consumers*/::start_detached_t;
  inline constexpr start_detached_t start_detached{};
 
  // sender and receiver utilities
  // [exec.utils.rcvr.adptr]
  template<
      /*class-type*/ Derived,
      receiver Base = /* unspecified */> // arguments are not associated entities
    class receiver_adaptor;
 
  template<class Fn>
    concept /*completion-signature*/ = // exposition only
      /* see description */;
 
  // [exec.utils.cmplsigs]
  template</*completion-signature*/... Fns>
    struct completion_signatures {};
 
  template<class... Args> // exposition only
    using /*default-set-value*/ =
      completion_signatures<set_value_t(Args...)>;
 
  template<class Err> // exposition only
    using /*default-set-error*/ =
      completion_signatures<set_error_t(Err)>;
 
  template<class Sigs> // exposition only
    concept /*valid-completion-signatures*/ = /* see description */;
 
  // [exec.utils.mkcmplsigs]
  template<
    sender Sndr,
    class Env = empty_env,
    /*valid-completion-signatures*/ AddlSigs = completion_signatures<>,
    template<class...> class SetValue = /* see description */,
    template<class> class SetError = /* see description */,
    /*valid-completion-signatures*/ SetStopped = completion_signatures<set_stopped_t()>>
      requires sender_in<Sndr, Env>
  using make_completion_signatures = completion_signatures</* see description */>;
 
  // execution resources
  class run_loop;
}
 
namespace std::this_thread {
  // queries
  namespace queries { // exposition only
    struct execute_may_block_caller_t;
  }
  using queries::execute_may_block_caller_t;
  inline constexpr execute_may_block_caller_t execute_may_block_caller{};
 
  namespace /*this-thread*/ { // exposition only
    struct /*sync-wait-env*/; // exposition only
    template<class S>
        requires sender_in<S, /*sync-wait-env*/>
      using /*sync-wait-type*/ = /*see-below*/; // exposition only
    template<class S>
      using /*sync-wait-with-variant-type*/ = /*see-below*/; // exposition only
 
    struct sync_wait_t;
    struct sync_wait_with_variant_t;
  }
  using /*this-thread*/::sync_wait_t;
  using /*this-thread*/::sync_wait_with_variant_t;
  inline constexpr sync_wait_t sync_wait{};
  inline constexpr sync_wait_with_variant_t sync_wait_with_variant{};
}
 
namespace std::execution {
  // one-way execution
  namespace execute { // exposition only
    struct execute_t;
  }
  using execute::execute_t;
  inline constexpr execute_t execute{};
 
  // [exec.as.awaitable]
  namespace /*coro-utils*/ { // exposition only
    struct as_awaitable_t;
  }
  using /*coro-utils*/::as_awaitable_t;
  inline constexpr as_awaitable_t as_awaitable;
 
  // [exec.with.awaitable.senders]
  template</*class-type*/ Promise>
    struct with_awaitable_senders;
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/execution&oldid=169365>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2024, at 20:01.