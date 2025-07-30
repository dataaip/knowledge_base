# Standard library header <execution> (C++17)

From cppreference.com
< cpp‎ | header
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | ****<execution>**** (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the execution and algorithm libraries.

|  |  |
| --- | --- |
| Classes | |
| is_execution_policy(C++17) | test whether a class represents an execution policy   (class template) |
| Defined in namespace `std::execution` | |
| sequenced_policyparallel_policyparallel_unsequenced_policyunsequenced_policy(C++17)(C++17)(C++17)(C++20) | execution policy types   (class) |
| Constants | |
| Defined in namespace `std::execution` | |
| seqparpar_unsequnseq(C++17)(C++17)(C++17)(C++20) | global execution policy objects   (constant) |

|  |  |
| --- | --- |
|  | This section is incomplete Reason: links to execution library subpages |

### Synopsis

```
namespace std {
  // execution policy type trait
  template<class T>
  struct is_execution_policy;
  template<class T>
  constexpr bool is_execution_policy_v = is_execution_policy<T>::value;
}
 
namespace std::execution {
  // sequenced execution policy
  class sequenced_policy;
 
  // parallel execution policy
  class parallel_policy;
 
  // parallel and unsequenced execution policy
  class parallel_unsequenced_policy;
 
  // unsequenced execution policy
  class unsequenced_policy;
 
  // execution policy objects
  inline constexpr sequenced_policy seq{ /* unspecified */ };
  inline constexpr parallel_policy par{ /* unspecified */ };
  inline constexpr parallel_unsequenced_policy par_unseq{ /* unspecified */ };
  inline constexpr unsequenced_policy unseq{ /* unspecified */ };
}
 
namespace std {
  // helper concepts
  template<class T>
  concept /*movable-value*/ = /* see description */; // exposition only
 
  template<class From, class To>
  concept /*decays-to*/ = same_as<decay_t<From>, To>; // exposition only
 
  template<class T>
  concept /*class-type*/ = /*decays-to*/<T, T> && is_class_v<T>; // exposition only
 
  // queryable objects
  template<class T>
  concept /*queryable*/ = /* see description */; // exposition only
 
  // queries
  struct forwarding_query_t
  { /* unspecified */
  };
  struct get_allocator_t
  { /* unspecified */
  };
  struct get_stop_token_t
  { /* unspecified */
  };
 
  inline constexpr forwarding_query_t forwarding_query{};
  inline constexpr get_allocator_t get_allocator{};
  inline constexpr get_stop_token_t get_stop_token{};
 
  template<class T>
  using stop_token_of_t = remove_cvref_t<decltype(get_stop_token(declval<T>()))>;
 
  template<class T>
  concept /*forwarding-query*/ = forwarding_query(T{}); // exposition only
}
 
namespace std::execution {
  // queries
  struct get_domain_t
  { /* unspecified */
  };
  struct get_scheduler_t
  { /* unspecified */
  };
  struct get_delegation_scheduler_t
  { /* unspecified */
  };
  struct get_forward_progress_guarantee_t
  { /* unspecified */
  };
  template<class CPO>
  struct get_completion_scheduler_t
  { /* unspecified */
  };
 
  inline constexpr get_domain_t get_domain{};
  inline constexpr get_scheduler_t get_scheduler{};
  inline constexpr get_delegation_scheduler_t get_delegation_scheduler{};
  enum class forward_progress_guarantee;
  inline constexpr get_forward_progress_guarantee_t get_forward_progress_guarantee{};
  template<class CPO>
  constexpr get_completion_scheduler_t<CPO> get_completion_scheduler{};
 
  struct empty_env
  {};
  struct get_env_t
  { /* unspecified */
  };
  inline constexpr get_env_t get_env{};
 
  template<class T>
  using env_of_t = decltype(get_env(declval<T>()));
 
  // execution domains
  struct default_domain;
 
  // schedulers
  struct scheduler_t
  {};
 
  template<class Sch>
  concept scheduler = /* see description */;
 
  // receivers
  struct receiver_t
  {};
 
  template<class Rcvr>
  concept receiver = /* see description */;
 
  template<class Rcvr, class Completions>
  concept receiver_of = /* see description */;
 
  struct set_value_t
  { /* unspecified */
  };
  struct set_error_t
  { /* unspecified */
  };
  struct set_stopped_t
  { /* unspecified */
  };
 
  inline constexpr set_value_t set_value{};
  inline constexpr set_error_t set_error{};
  inline constexpr set_stopped_t set_stopped{};
 
  // operation states
  struct operation_state_t
  {};
 
  template<class O>
  concept operation_state = /* see description */;
 
  struct start_t;
  inline constexpr start_t start{};
 
  // senders
  struct sender_t
  {};
 
  template<class Sndr>
  concept sender = /* see description */;
 
  template<class Sndr, class Env = empty_env>
  concept sender_in = /* see description */;
 
  template<class Sndr, class Rcvr>
  concept sender_to = /* see description */;
 
  template<class... Ts>
  struct /*type-list*/; // exposition only
 
  // completion signatures
  struct get_completion_signatures_t;
  inline constexpr get_completion_signatures_t get_completion_signatures{};
 
  template<class Sndr, class Env = empty_env>
    requires sender_in<Sndr, Env>
  using completion_signatures_of_t =
    /*call-result-t*/<get_completion_signatures_t, Sndr, Env>;
 
  template<class... Ts>
  using /*decayed-tuple*/ = tuple<decay_t<Ts>...>; // exposition only
 
  template<class... Ts>
  using /*variant-or-empty*/ = /* see description */; // exposition only
 
  template<class Sndr,
           class Env                        = empty_env,
           template<class...> class Tuple   = /*decayed-tuple*/,
           template<class...> class Variant = /*variant-or-empty*/>
    requires sender_in<Sndr, Env>
  using value_types_of_t = /* see description */;
 
  template<class Sndr,
           class Env                        = empty_env,
           template<class...> class Variant = /*variant-or-empty*/>
    requires sender_in<Sndr, Env>
  using error_types_of_t = /* see description */;
 
  template<class Sndr, class Env = empty_env>
    requires sender_in<Sndr, Env>
  constexpr bool sends_stopped = /* see description */;
 
  template<class Sndr, class Env>
  using /*single-sender-value-type*/ = /* see description */; // exposition only
 
  template<class Sndr, class Env>
  concept /*single-sender*/ = /* see description */; // exposition only
 
  template<sender Sndr>
  using tag_of_t = /* see description */;
 
  // sender transformations
  template<class Domain, sender Sndr, /*queryable*/... Env>
    requires(sizeof...(Env) <= 1)
  constexpr sender decltype(auto) transform_sender(
    Domain dom,
    Sndr&& sndr,
    const Env&... env) noexcept(/* see description */);
 
  // environment transformations
  template<class Domain, sender Sndr, /*queryable*/ Env>
  constexpr /*queryable*/ decltype(auto) transform_env(Domain dom,
                                                       Sndr&& sndr,
                                                       Env&& env) noexcept;
 
  // sender algorithm application
  template<class Domain, class Tag, sender Sndr, class... Args>
  constexpr decltype(auto) apply_sender(Domain dom,
                                        Tag,
                                        Sndr&& sndr,
                                        Args&&... args) noexcept(/* see description */);
 
  // the connect sender algorithm
  struct connect_t;
  inline constexpr connect_t connect{};
 
  template<class Sndr, class Rcvr>
  using connect_result_t = decltype(connect(declval<Sndr>(), declval<Rcvr>()));
 
  // sender factories
  struct just_t
  { /* unspecified */
  };
  struct just_error_t
  { /* unspecified */
  };
  struct just_stopped_t
  { /* unspecified */
  };
  struct schedule_t
  { /* unspecified */
  };
 
  inline constexpr just_t just{};
  inline constexpr just_error_t just_error{};
  inline constexpr just_stopped_t just_stopped{};
  inline constexpr schedule_t schedule{};
  inline constexpr /* unspecified */ read_env{};
 
  template<scheduler Sndr>
  using schedule_result_t = decltype(schedule(declval<Sndr>()));
 
  // sender adaptors
  template</*class-type*/ D>
  struct sender_adaptor_closure
  {};
 
  struct starts_on_t
  { /* unspecified */
  };
  struct continues_on_t
  { /* unspecified */
  };
  struct on_t
  { /* unspecified */
  };
  struct schedule_from_t
  { /* unspecified */
  };
  struct then_t
  { /* unspecified */
  };
  struct upon_error_t
  { /* unspecified */
  };
  struct upon_stopped_t
  { /* unspecified */
  };
  struct let_value_t
  { /* unspecified */
  };
  struct let_error_t
  { /* unspecified */
  };
  struct let_stopped_t
  { /* unspecified */
  };
  struct bulk_t
  { /* unspecified */
  };
  struct split_t
  { /* unspecified */
  };
  struct when_all_t
  { /* unspecified */
  };
  struct when_all_with_variant_t
  { /* unspecified */
  };
  struct into_variant_t
  { /* unspecified */
  };
  struct stopped_as_optional_t
  { /* unspecified */
  };
  struct stopped_as_error_t
  { /* unspecified */
  };
 
  inline constexpr starts_on_t starts_on{};
  inline constexpr continues_on_t continues_on{};
  inline constexpr on_t on{};
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
  inline constexpr into_variant_t into_variant{};
  inline constexpr stopped_as_optional_t stopped_as_optional{};
  inline constexpr stopped_as_error_t stopped_as_error{};
 
  // sender and receiver utilities
 
  template<class Fn>
  concept /*completion-signature*/ = /* see description */; // exposition only
 
  template</*completion-signature*/... Fns>
  struct completion_signatures
  {};
 
  template<class Sigs>
  concept /*valid-completion-signatures*/ = /* see description */; // exposition only
 
  template</*valid-completion-signatures*/ InputSignatures,
           /*valid-completion-signatures*/ AdditionalSignatures = completion_signatures<>,
           template<class...> class SetValue                    = /* see description */,
           template<class> class SetError                       = /* see description */,
           /*valid-completion-signatures*/ SetStopped =
             completion_signatures<set_stopped_t()>>
  using transform_completion_signatures = completion_signatures</* see description */>;
 
  template<sender Sndr,
           class Env                                            = empty_env,
           /*valid-completion-signatures*/ AdditionalSignatures = completion_signatures<>,
           template<class...> class SetValue                    = /* see description */,
           template<class> class SetError                       = /* see description */,
           /*valid-completion-signatures*/ SetStopped =
             completion_signatures<set_stopped_t()>>
    requires sender_in<Sndr, Env>
  using transform_completion_signatures_of =
    transform_completion_signatures<completion_signatures_of_t<Sndr, Env>,
                                    AdditionalSignatures,
                                    SetValue,
                                    SetError,
                                    SetStopped>;
 
  // run_loop
  class run_loop;
}
 
namespace std::this_thread {
  // consumers
  struct sync_wait_t
  { /* unspecified */
  };
  struct sync_wait_with_variant_t
  { /* unspecified */
  };
 
  inline constexpr sync_wait_t sync_wait{};
  inline constexpr sync_wait_with_variant_t sync_wait_with_variant{};
}
 
namespace std::execution {
  struct as_awaitable_t
  { /* unspecified */
  };
  inline constexpr as_awaitable_t as_awaitable{};
 
  template</*class-type*/ Promise>
  struct with_awaitable_senders;
}

```

#### Helper concepts

```
namespace std {
  template<class T>
  concept /*movable-value*/ = // exposition only
    move_constructible<decay_t<T>> && constructible_from<decay_t<T>, T> &&
    (!is_array_v<remove_reference_t<T>>);
}
 
namespace std {
  template<class T>
  concept /*queryable*/ = destructible<T>; // exposition only
}
 
namespace std::execution {
  template<class Sndr, class Env>
  concept /*single-sender*/ = sender_in<Sndr, Env> && requires {
    typename /*single-sender-value-type*/<Sndr, Env>;
  };
}

```

#### Helper classes

```
namespace std::execution {
  struct /*empty-variant*/
  { // exposition only
    /*empty-variant*/() = delete;
  };
}

```

#### `enum` std::forward_progress_guarantee

```
namespace std::execution {
  enum class forward_progress_guarantee
  {
    concurrent,
    parallel,
    weakly_parallel
  };
}

```

#### Concept `scheduler`

```
namespace std::execution {
  template<class Sch>
  concept scheduler =
    derived_from<typename remove_cvref_t<Sch>::scheduler_concept, scheduler_t> &&
    /*queryable*/<Sch> &&
    requires(Sch&& sch) {
      {
        schedule(std::forward<Sch>(sch))
      } -> sender;
      {
        auto(get_completion_scheduler<set_value_t>(
          get_env(schedule(std::forward<Sch>(sch)))))
      } -> same_as<remove_cvref_t<Sch>>;
    } && equality_comparable<remove_cvref_t<Sch>> &&
    copy_constructible<remove_cvref_t<Sch>>;
}

```

#### Concept `receiver`")

```
namespace std::execution {
  template<class Rcvr>
  concept receiver =
    derived_from<typename remove_cvref_t<Rcvr>::receiver_concept, receiver_t> &&
    requires(const remove_cvref_t<Rcvr>& rcvr) {
      {
        get_env(rcvr)
      } -> /*queryable*/;
    } && move_constructible<remove_cvref_t<Rcvr>> && // rvalues are movable, and
    constructible_from<remove_cvref_t<Rcvr>, Rcvr>;  // lvalues are copyable
 
  template<class Signature, class Rcvr>
  concept /*valid-completion-for*/ = requires(Signature* sig) {
    []<class Tag, class... Args>(Tag(*)(Args...))
      requires /*callable*/<Tag, remove_cvref_t<Rcvr>, Args...>
    {
    }
    (sig);
  };
 
  template<class Rcvr, class Completions>
  concept /*has-completions*/ = requires(Completions* completions) {
    []</*valid-completion-for*/<Rcvr>... Sigs>(completion_signatures<Sigs...>*) {
    }(completions);
  };
 
  template<class Rcvr, class Completions>
  concept receiver_of = receiver<Rcvr> && /*has-completions*/<Rcvr, Completions>;
}

```

#### Concept `operation_state`")

```
namespace std::execution {
  template<class O>
  concept operation_state =
    derived_from<typename O::operation_state_concept, operation_state_t> &&
    is_object_v<O> && requires(O& o) {
      {
        start(o)
      } noexcept;
    };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/execution&oldid=176718>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 October 2024, at 13:30.