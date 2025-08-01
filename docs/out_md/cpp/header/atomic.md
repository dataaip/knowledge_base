# Standard library header <atomic> (C++11)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | ****<atomic>**** (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the concurrency support library.

|  |  |
| --- | --- |
| Classes | |
| atomic(C++11) | atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   (class template) |
| atomic_ref(C++20) | provides atomic operations on non-atomic objects   (class template) |
| atomic_flag(C++11) | the lock-free boolean atomic type   (class) |
| memory_order(C++11) | defines memory ordering constraints for the given atomic operation   (enum) |
| atomic_bool(C++11) | std::atomic<bool>   (typedef) |
| atomic_char(C++11) | std::atomic<char>   (typedef) |
| atomic_schar(C++11) | std::atomic<signed char>   (typedef) |
| atomic_uchar(C++11) | std::atomic<unsigned char>   (typedef) |
| atomic_short(C++11) | std::atomic<short>   (typedef) |
| atomic_ushort(C++11) | std::atomic<unsigned short>   (typedef) |
| atomic_int(C++11) | std::atomic<int>   (typedef) |
| atomic_uint(C++11) | std::atomic<unsigned int>   (typedef) |
| atomic_long(C++11) | std::atomic<long>   (typedef) |
| atomic_ulong(C++11) | std::atomic<unsigned long>   (typedef) |
| atomic_llong(C++11) | std::atomic<long long>   (typedef) |
| atomic_ullong(C++11) | std::atomic<unsigned long long>   (typedef) |
| atomic_char8_t(C++20) | std::atomic<char8_t>   (typedef) |
| atomic_char16_t(C++11) | std::atomic<char16_t>   (typedef) |
| atomic_char32_t(C++11) | std::atomic<char32_t>   (typedef) |
| atomic_wchar_t(C++11) | std::atomic<wchar_t>   (typedef) |
| atomic_int8_t(C++11)(optional) | std::atomic<std::int8_t>   (typedef) |
| atomic_uint8_t(C++11)(optional) | std::atomic<std::uint8_t>   (typedef) |
| atomic_int16_t(C++11)(optional) | std::atomic<std::int16_t>   (typedef) |
| atomic_uint16_t(C++11)(optional) | std::atomic<std::uint16_t>   (typedef) |
| atomic_int32_t(C++11)(optional) | std::atomic<std::int32_t>   (typedef) |
| atomic_uint32_t(C++11)(optional) | std::atomic<std::uint32_t>   (typedef) |
| atomic_int64_t(C++11)(optional) | std::atomic<std::int64_t>   (typedef) |
| atomic_uint64_t(C++11)(optional) | std::atomic<std::uint64_t>   (typedef) |
| atomic_int_least8_t(C++11) | std::atomic<std::int_least8_t>   (typedef) |
| atomic_uint_least8_t(C++11) | std::atomic<std::uint_least8_t>   (typedef) |
| atomic_int_least16_t(C++11) | std::atomic<std::int_least16_t>   (typedef) |
| atomic_uint_least16_t(C++11) | std::atomic<std::uint_least16_t>   (typedef) |
| atomic_int_least32_t(C++11) | std::atomic<std::int_least32_t>   (typedef) |
| atomic_uint_least32_t(C++11) | std::atomic<std::uint_least32_t>   (typedef) |
| atomic_int_least64_t(C++11) | std::atomic<std::int_least64_t>   (typedef) |
| atomic_uint_least64_t(C++11) | std::atomic<std::uint_least64_t>   (typedef) |
| atomic_int_fast8_t(C++11) | std::atomic<std::int_fast8_t>   (typedef) |
| atomic_uint_fast8_t(C++11) | std::atomic<std::uint_fast8_t>   (typedef) |
| atomic_int_fast16_t(C++11) | std::atomic<std::int_fast16_t>   (typedef) |
| atomic_uint_fast16_t(C++11) | std::atomic<std::uint_fast16_t>   (typedef) |
| atomic_int_fast32_t(C++11) | std::atomic<std::int_fast32_t>   (typedef) |
| atomic_uint_fast32_t(C++11) | std::atomic<std::uint_fast32_t>   (typedef) |
| atomic_int_fast64_t(C++11) | std::atomic<std::int_fast64_t>   (typedef) |
| atomic_uint_fast64_t(C++11) | std::atomic<std::uint_fast64_t>   (typedef) |
| atomic_intptr_t(C++11)(optional) | std::atomic<std::intptr_t>   (typedef) |
| atomic_uintptr_t(C++11)(optional) | std::atomic<std::uintptr_t>   (typedef) |
| atomic_size_t(C++11) | std::atomic<std::size_t>   (typedef) |
| atomic_ptrdiff_t(C++11) | std::atomic<std::ptrdiff_t>   (typedef) |
| atomic_intmax_t(C++11) | std::atomic<std::intmax_t>   (typedef) |
| atomic_uintmax_t(C++11) | std::atomic<std::uintmax_t>   (typedef) |
| atomic_signed_lock_free(C++20) | a signed integral atomic type that is lock-free and for which waiting/notifying is most efficient   (typedef) |
| atomic_unsigned_lock_free(C++20) | an unsigned integral atomic type that is lock-free and for which waiting/notifying is most efficient   (typedef) |
| Functions | |
| atomic_is_lock_free(C++11) | checks if the atomic type's operations are lock-free   (function template) |
| atomic_storeatomic_store_explicit(C++11)(C++11) | atomically replaces the value of the atomic object with a non-atomic argument   (function template) |
| atomic_loadatomic_load_explicit(C++11)(C++11) | atomically obtains the value stored in an atomic object   (function template) |
| atomic_exchangeatomic_exchange_explicit(C++11)(C++11) | atomically replaces the value of the atomic object with non-atomic argument and returns the old value of the atomic   (function template) |
| atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit(C++11)(C++11)(C++11)(C++11) | atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   (function template) |
| atomic_fetch_addatomic_fetch_add_explicit(C++11)(C++11) | adds a non-atomic value to an atomic object and obtains the previous value of the atomic   (function template) |
| atomic_fetch_subatomic_fetch_sub_explicit(C++11)(C++11) | subtracts a non-atomic value from an atomic object and obtains the previous value of the atomic   (function template) |
| atomic_fetch_andatomic_fetch_and_explicit(C++11)(C++11) | replaces the atomic object with the result of bitwise AND with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_oratomic_fetch_or_explicit(C++11)(C++11) | replaces the atomic object with the result of bitwise OR with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_xoratomic_fetch_xor_explicit(C++11)(C++11) | replaces the atomic object with the result of bitwise XOR with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_maxatomic_fetch_max_explicit(C++26)(C++26) | replaces the atomic object with the result of std::max with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_fetch_minatomic_fetch_min_explicit(C++26)(C++26) | replaces the atomic object with the result of std::min with a non-atomic argument and obtains the previous value of the atomic   (function template) |
| atomic_waitatomic_wait_explicit(C++20)(C++20) | blocks the thread until notified and the atomic value changes   (function template) |
| atomic_notify_one(C++20) | notifies a thread blocked in atomic_wait   (function template) |
| atomic_notify_all(C++20) | notifies all threads blocked in atomic_wait   (function template) |
| atomic_flag_testatomic_flag_test_explicit(C++20)(C++20) | atomically returns the value of the flag   (function) |
| atomic_flag_test_and_setatomic_flag_test_and_set_explicit(C++11)(C++11) | atomically sets the flag to true and returns its previous value   (function) |
| atomic_flag_clearatomic_flag_clear_explicit(C++11)(C++11) | atomically sets the value of the flag to false   (function) |
| atomic_flag_waitatomic_flag_wait_explicit(C++20)(C++20) | blocks the thread until notified and the flag changes   (function) |
| atomic_flag_notify_one(C++20) | notifies a thread blocked in atomic_flag_wait   (function) |
| atomic_flag_notify_all(C++20) | notifies all threads blocked in atomic_flag_wait   (function) |
| atomic_init(C++11)(deprecated in C++20) | non-atomic initialization of a default-constructed atomic object   (function template) |
| kill_dependency(C++11) | removes the specified object from the std::memory_order_consume dependency tree   (function template) |
| atomic_thread_fence(C++11) | generic memory order-dependent fence synchronization primitive   (function) |
| atomic_signal_fence(C++11) | fence between a thread and a signal handler executed in the same thread   (function) |
| Macros | |
| ATOMIC_VAR_INIT(C++11)(deprecated in C++20) | constant initialization of an atomic variable of static storage duration   (function macro) |
| ATOMIC_FLAG_INIT(C++11) | initializes an std::atomic_flag to false   (macro constant) |

### Synopsis

```
namespace std {
  /* until C++20:
  enum memory_order {
    memory_order_relaxed,
    memory_order_consume,
    memory_order_acquire,
    memory_order_release,
    memory_order_acq_rel,
    memory_order_seq_cst
  };
  */
 
  enum class memory_order : /* unspecified */;
  inline constexpr memory_order memory_order_relaxed = memory_order::relaxed;
  inline constexpr memory_order memory_order_consume = memory_order::consume;
  inline constexpr memory_order memory_order_acquire = memory_order::acquire;
  inline constexpr memory_order memory_order_release = memory_order::release;
  inline constexpr memory_order memory_order_acq_rel = memory_order::acq_rel;
  inline constexpr memory_order memory_order_seq_cst = memory_order::seq_cst;
 
  template<class T>
    T kill_dependency(T y) noexcept;
 
  // lock-free property
  #define ATOMIC_BOOL_LOCK_FREE /* unspecified */
  #define ATOMIC_CHAR_LOCK_FREE /* unspecified */
  #define ATOMIC_CHAR8_T_LOCK_FREE /* unspecified */
  #define ATOMIC_CHAR16_T_LOCK_FREE /* unspecified */
  #define ATOMIC_CHAR32_T_LOCK_FREE /* unspecified */
  #define ATOMIC_WCHAR_T_LOCK_FREE /* unspecified */
  #define ATOMIC_SHORT_LOCK_FREE /* unspecified */
  #define ATOMIC_INT_LOCK_FREE /* unspecified */
  #define ATOMIC_LONG_LOCK_FREE /* unspecified */
  #define ATOMIC_LLONG_LOCK_FREE /* unspecified */
  #define ATOMIC_POINTER_LOCK_FREE /* unspecified */
 
  // class template atomic_ref
  template<class T> struct atomic_ref;
  // partial specialization for pointers
  template<class T> struct atomic_ref<T*>;
 
  // class template atomic
  template<class T> struct atomic;
  // partial specialization for pointers
  template<class T> struct atomic<T*>;
 
  // non-member functions
  template<class T>
    bool atomic_is_lock_free(const volatile atomic<T>*) noexcept;
  template<class T>
    bool atomic_is_lock_free(const atomic<T>*) noexcept;
  template<class T>
    void atomic_store(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    void atomic_store(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    void atomic_store_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                               memory_order) noexcept;
  template<class T>
    void atomic_store_explicit(atomic<T>*, typename atomic<T>::value_type,
                               memory_order) noexcept;
  template<class T>
    T atomic_load(const volatile atomic<T>*) noexcept;
  template<class T>
    T atomic_load(const atomic<T>*) noexcept;
  template<class T>
    T atomic_load_explicit(const volatile atomic<T>*, memory_order) noexcept;
  template<class T>
    T atomic_load_explicit(const atomic<T>*, memory_order) noexcept;
  template<class T>
    T atomic_exchange(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_exchange(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_exchange_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                               memory_order) noexcept;
  template<class T>
    T atomic_exchange_explicit(atomic<T>*, typename atomic<T>::value_type,
                               memory_order) noexcept;
  template<class T>
    bool atomic_compare_exchange_weak(volatile atomic<T>*,
                                      typename atomic<T>::value_type*,
                                      typename atomic<T>::value_type) noexcept;
  template<class T>
    bool atomic_compare_exchange_weak(atomic<T>*,
                                      typename atomic<T>::value_type*,
                                      typename atomic<T>::value_type) noexcept;
  template<class T>
    bool atomic_compare_exchange_strong(volatile atomic<T>*,
                                        typename atomic<T>::value_type*,
                                        typename atomic<T>::value_type) noexcept;
  template<class T>
    bool atomic_compare_exchange_strong(atomic<T>*,
                                        typename atomic<T>::value_type*,
                                        typename atomic<T>::value_type) noexcept;
  template<class T>
    bool atomic_compare_exchange_weak_explicit(volatile atomic<T>*,
                                               typename atomic<T>::value_type*,
                                               typename atomic<T>::value_type,
                                               memory_order, memory_order) noexcept;
  template<class T>
    bool atomic_compare_exchange_weak_explicit(atomic<T>*,
                                               typename atomic<T>::value_type*,
                                               typename atomic<T>::value_type,
                                               memory_order, memory_order) noexcept;
  template<class T>
    bool atomic_compare_exchange_strong_explicit(volatile atomic<T>*,
                                                 typename atomic<T>::value_type*,
                                                 typename atomic<T>::value_type,
                                                 memory_order, memory_order) noexcept;
  template<class T>
    bool atomic_compare_exchange_strong_explicit(atomic<T>*,
                                                 typename atomic<T>::value_type*,
                                                 typename atomic<T>::value_type,
                                                 memory_order, memory_order) noexcept;
 
  template<class T>
    T atomic_fetch_add(volatile atomic<T>*, typename atomic<T>::difference_type) noexcept;
  template<class T>
    T atomic_fetch_add(atomic<T>*, typename atomic<T>::difference_type) noexcept;
  template<class T>
    T atomic_fetch_add_explicit(volatile atomic<T>*, typename atomic<T>::difference_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_add_explicit(atomic<T>*, typename atomic<T>::difference_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_sub(volatile atomic<T>*, typename atomic<T>::difference_type) noexcept;
  template<class T>
    T atomic_fetch_sub(atomic<T>*, typename atomic<T>::difference_type) noexcept;
  template<class T>
    T atomic_fetch_sub_explicit(volatile atomic<T>*, typename atomic<T>::difference_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_sub_explicit(atomic<T>*, typename atomic<T>::difference_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_and(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_and(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_and_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_and_explicit(atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_or(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_or(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_or_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                               memory_order) noexcept;
  template<class T>
    T atomic_fetch_or_explicit(atomic<T>*, typename atomic<T>::value_type,
                               memory_order) noexcept;
  template<class T>
    T atomic_fetch_xor(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_xor(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_xor_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_xor_explicit(atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_max(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_max(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_max_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_max_explicit(atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_min(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_min(atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    T atomic_fetch_min_explicit(volatile atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
  template<class T>
    T atomic_fetch_min_explicit(atomic<T>*, typename atomic<T>::value_type,
                                memory_order) noexcept;
 
  template<class T>
    void atomic_wait(const volatile atomic<T>*, typename atomic<T>::value_type);
  template<class T>
    void atomic_wait(const atomic<T>*, typename atomic<T>::value_type);
  template<class T>
    void atomic_wait_explicit(const volatile atomic<T>*,
                              typename atomic<T>::value_type, memory_order);
  template<class T>
    void atomic_wait_explicit(const atomic<T>*,
                              typename atomic<T>::value_type, memory_order);
  template<class T>
    void atomic_notify_one(volatile atomic<T>*);
  template<class T>
    void atomic_notify_one(atomic<T>*);
  template<class T>
    void atomic_notify_all(volatile atomic<T>*);
  template<class T>
    void atomic_notify_all(atomic<T>*);
 
  // type aliases
  using atomic_bool           = atomic<bool>;
  using atomic_char           = atomic<char>;
  using atomic_schar          = atomic<signed char>;
  using atomic_uchar          = atomic<unsigned char>;
  using atomic_short          = atomic<short>;
  using atomic_ushort         = atomic<unsigned short>;
  using atomic_int            = atomic<int>;
  using atomic_uint           = atomic<unsigned int>;
  using atomic_long           = atomic<long>;
  using atomic_ulong          = atomic<unsigned long>;
  using atomic_llong          = atomic<long long>;
  using atomic_ullong         = atomic<unsigned long long>;
  using atomic_char8_t        = atomic<char8_t>;
  using atomic_char16_t       = atomic<char16_t>;
  using atomic_char32_t       = atomic<char32_t>;
  using atomic_wchar_t        = atomic<wchar_t>;
 
  using atomic_int8_t         = atomic<int8_t>;
  using atomic_uint8_t        = atomic<uint8_t>;
  using atomic_int16_t        = atomic<int16_t>;
  using atomic_uint16_t       = atomic<uint16_t>;
  using atomic_int32_t        = atomic<int32_t>;
  using atomic_uint32_t       = atomic<uint32_t>;
  using atomic_int64_t        = atomic<int64_t>;
  using atomic_uint64_t       = atomic<uint64_t>;
 
  using atomic_int_least8_t   = atomic<int_least8_t>;
  using atomic_uint_least8_t  = atomic<uint_least8_t>;
  using atomic_int_least16_t  = atomic<int_least16_t>;
  using atomic_uint_least16_t = atomic<uint_least16_t>;
  using atomic_int_least32_t  = atomic<int_least32_t>;
  using atomic_uint_least32_t = atomic<uint_least32_t>;
  using atomic_int_least64_t  = atomic<int_least64_t>;
  using atomic_uint_least64_t = atomic<uint_least64_t>;
 
  using atomic_int_fast8_t    = atomic<int_fast8_t>;
  using atomic_uint_fast8_t   = atomic<uint_fast8_t>;
  using atomic_int_fast16_t   = atomic<int_fast16_t>;
  using atomic_uint_fast16_t  = atomic<uint_fast16_t>;
  using atomic_int_fast32_t   = atomic<int_fast32_t>;
  using atomic_uint_fast32_t  = atomic<uint_fast32_t>;
  using atomic_int_fast64_t   = atomic<int_fast64_t>;
  using atomic_uint_fast64_t  = atomic<uint_fast64_t>;
 
  using atomic_intptr_t       = atomic<intptr_t>;
  using atomic_uintptr_t      = atomic<uintptr_t>;
  using atomic_size_t         = atomic<size_t>;
  using atomic_ptrdiff_t      = atomic<ptrdiff_t>;
  using atomic_intmax_t       = atomic<intmax_t>;
  using atomic_uintmax_t      = atomic<uintmax_t>;
 
  using atomic_signed_lock_free   = /* see description */;
  using atomic_unsigned_lock_free = /* see description */;
 
  // flag type and operations
  struct atomic_flag;
 
  bool atomic_flag_test(const volatile atomic_flag*) noexcept;
  bool atomic_flag_test(const atomic_flag*) noexcept;
  bool atomic_flag_test_explicit(const volatile atomic_flag*, memory_order) noexcept;
  bool atomic_flag_test_explicit(const atomic_flag*, memory_order) noexcept;
  bool atomic_flag_test_and_set(volatile atomic_flag*) noexcept;
  bool atomic_flag_test_and_set(atomic_flag*) noexcept;
  bool atomic_flag_test_and_set_explicit(volatile atomic_flag*, memory_order) noexcept;
  bool atomic_flag_test_and_set_explicit(atomic_flag*, memory_order) noexcept;
  void atomic_flag_clear(volatile atomic_flag*) noexcept;
  void atomic_flag_clear(atomic_flag*) noexcept;
  void atomic_flag_clear_explicit(volatile atomic_flag*, memory_order) noexcept;
  void atomic_flag_clear_explicit(atomic_flag*, memory_order) noexcept;
 
  void atomic_flag_wait(const volatile atomic_flag*, bool) noexcept;
  void atomic_flag_wait(const atomic_flag*, bool) noexcept;
  void atomic_flag_wait_explicit(const volatile atomic_flag*,
                                 bool, memory_order) noexcept;
  void atomic_flag_wait_explicit(const atomic_flag*,
                                 bool, memory_order) noexcept;
  void atomic_flag_notify_one(volatile atomic_flag*) noexcept;
  void atomic_flag_notify_one(atomic_flag*) noexcept;
  void atomic_flag_notify_all(volatile atomic_flag*) noexcept;
  void atomic_flag_notify_all(atomic_flag*) noexcept;
 
  // fences
  extern "C" void atomic_thread_fence(memory_order) noexcept;
  extern "C" void atomic_signal_fence(memory_order) noexcept;
}
 
// deprecated
namespace std {
  template<class T>
    void atomic_init(volatile atomic<T>*, typename atomic<T>::value_type) noexcept;
  template<class T>
    void atomic_init(atomic<T>*, typename atomic<T>::value_type) noexcept;
 
  #define ATOMIC_VAR_INIT(value) /* see description */
 
  #define ATOMIC_FLAG_INIT /* see description */
}

```

#### Class template std::atomic

```
namespace std {
  template<class T> struct atomic {
    using value_type = T;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const volatile noexcept;
    bool is_lock_free() const noexcept;
 
    // operations on atomic types
    constexpr atomic() noexcept(is_nothrow_default_constructible_v<T>);
    constexpr atomic(T) noexcept;
    atomic(const atomic&) = delete;
    atomic& operator=(const atomic&) = delete;
    atomic& operator=(const atomic&) volatile = delete;
 
    T load(memory_order = memory_order::seq_cst) const volatile noexcept;
    T load(memory_order = memory_order::seq_cst) const noexcept;
    operator T() const volatile noexcept;
    operator T() const noexcept;
    void store(T, memory_order = memory_order::seq_cst) volatile noexcept;
    void store(T, memory_order = memory_order::seq_cst) noexcept;
    T operator=(T) volatile noexcept;
    T operator=(T) noexcept;
 
    T exchange(T, memory_order = memory_order::seq_cst) volatile noexcept;
    T exchange(T, memory_order = memory_order::seq_cst) noexcept;
    bool compare_exchange_weak(T&, T, memory_order, memory_order) volatile noexcept;
    bool compare_exchange_weak(T&, T, memory_order, memory_order) noexcept;
    bool compare_exchange_strong(T&, T, memory_order, memory_order) volatile noexcept;
    bool compare_exchange_strong(T&, T, memory_order, memory_order) noexcept;
    bool compare_exchange_weak(T&, T,
                               memory_order = memory_order::seq_cst) volatile noexcept;
    bool compare_exchange_weak(T&, T, memory_order = memory_order::seq_cst) noexcept;
    bool compare_exchange_strong(T&, T,
                                 memory_order = memory_order::seq_cst) volatile noexcept;
    bool compare_exchange_strong(T&, T, memory_order = memory_order::seq_cst) noexcept;
 
    void wait(T, memory_order = memory_order::seq_cst) const volatile noexcept;
    void wait(T, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() volatile noexcept;
    void notify_one() noexcept;
    void notify_all() volatile noexcept;
    void notify_all() noexcept;
  };
}

```

#### Specializations of std::atomic for integral types

```
namespace std {
  template<> struct atomic</* integral */> {
    using value_type = /* integral */;
    using difference_type = value_type;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const volatile noexcept;
    bool is_lock_free() const noexcept;
 
    constexpr atomic() noexcept;
    constexpr atomic(/* integral */) noexcept;
    atomic(const atomic&) = delete;
    atomic& operator=(const atomic&) = delete;
    atomic& operator=(const atomic&) volatile = delete;
 
    void store(/* integral */, memory_order = memory_order::seq_cst) volatile noexcept;
    void store(/* integral */, memory_order = memory_order::seq_cst) noexcept;
    /* integral */ operator=(/* integral */) volatile noexcept;
    /* integral */ operator=(/* integral */) noexcept;
    /* integral */ load(memory_order = memory_order::seq_cst) const volatile noexcept;
    /* integral */ load(memory_order = memory_order::seq_cst) const noexcept;
    operator /* integral */() const volatile noexcept;
    operator /* integral */() const noexcept;
 
    /* integral */ exchange(/* integral */,
                        memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ exchange(/* integral */,
                        memory_order = memory_order::seq_cst) noexcept;
    bool compare_exchange_weak(/* integral */&, /* integral */,
                               memory_order, memory_order) volatile noexcept;
    bool compare_exchange_weak(/* integral */&, /* integral */,
                               memory_order, memory_order) noexcept;
    bool compare_exchange_strong(/* integral */&, /* integral */,
                                 memory_order, memory_order) volatile noexcept;
    bool compare_exchange_strong(/* integral */&, /* integral */,
                                 memory_order, memory_order) noexcept;
    bool compare_exchange_weak(/* integral */&, /* integral */,
                               memory_order = memory_order::seq_cst) volatile noexcept;
    bool compare_exchange_weak(/* integral */&, /* integral */,
                               memory_order = memory_order::seq_cst) noexcept;
    bool compare_exchange_strong(/* integral */&, /* integral */,
                                 memory_order = memory_order::seq_cst) volatile noexcept;
    bool compare_exchange_strong(/* integral */&, /* integral */,
                                 memory_order = memory_order::seq_cst) noexcept;
 
    /* integral */ fetch_add(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_add(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
    /* integral */ fetch_sub(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_sub(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
    /* integral */ fetch_and(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_and(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
    /* integral */ fetch_or(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_or(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
    /* integral */ fetch_xor(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_xor(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
    /* integral */ fetch_max(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_max(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
    /* integral */ fetch_min(/* integral */,
                         memory_order = memory_order::seq_cst) volatile noexcept;
    /* integral */ fetch_min(/* integral */,
                         memory_order = memory_order::seq_cst) noexcept;
 
    /* integral */ operator++(int) volatile noexcept;
    /* integral */ operator++(int) noexcept;
    /* integral */ operator--(int) volatile noexcept;
    /* integral */ operator--(int) noexcept;
    /* integral */ operator++() volatile noexcept;
    /* integral */ operator++() noexcept;
    /* integral */ operator--() volatile noexcept;
    /* integral */ operator--() noexcept;
    /* integral */ operator+=(/* integral */) volatile noexcept;
    /* integral */ operator+=(/* integral */) noexcept;
    /* integral */ operator-=(/* integral */) volatile noexcept;
    /* integral */ operator-=(/* integral */) noexcept;
    /* integral */ operator&=(/* integral */) volatile noexcept;
    /* integral */ operator&=(/* integral */) noexcept;
    /* integral */ operator|=(/* integral */) volatile noexcept;
    /* integral */ operator|=(/* integral */) noexcept;
    /* integral */ operator^=(/* integral */) volatile noexcept;
    /* integral */ operator^=(/* integral */) noexcept;
 
    void wait(/* integral */,
              memory_order = memory_order::seq_cst) const volatile noexcept;
    void wait(/* integral */, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() volatile noexcept;
    void notify_one() noexcept;
    void notify_all() volatile noexcept;
    void notify_all() noexcept;
  };
}

```

#### Specializations of std::atomic for floating-point types

```
namespace std {
  template<> struct atomic</* floating-point */> {
    using value_type = /* floating-point */;
    using difference_type = value_type;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const volatile noexcept;
    bool is_lock_free() const noexcept;
 
    constexpr atomic() noexcept;
    constexpr atomic(/* floating-point */) noexcept;
    atomic(const atomic&) = delete;
    atomic& operator=(const atomic&) = delete;
    atomic& operator=(const atomic&) volatile = delete;
 
    void store(/* floating-point */,
               memory_order = memory_order_seq_cst) volatile noexcept;
    void store(/* floating-point */,
               memory_order = memory_order_seq_cst) noexcept;
    /* floating-point */ operator=(/* floating-point */) volatile noexcept;
    /* floating-point */ operator=(/* floating-point */) noexcept;
    /* floating-point */ load(memory_order = memory_order_seq_cst) volatile noexcept;
    /* floating-point */ load(memory_order = memory_order_seq_cst) noexcept;
    operator /* floating-point */() volatile noexcept;
    operator /* floating-point */() noexcept;
 
    /* floating-point */ exchange(/* floating-point */,
                            memory_order = memory_order_seq_cst) volatile noexcept;
    /* floating-point */ exchange(/* floating-point */,
                            memory_order = memory_order_seq_cst) noexcept;
    bool compare_exchange_weak(/* floating-point */&, /* floating-point */,
                               memory_order, memory_order) volatile noexcept;
    bool compare_exchange_weak(/* floating-point */&, /* floating-point */,
                               memory_order, memory_order) noexcept;
    bool compare_exchange_strong(/* floating-point */&, /* floating-point */,
                                 memory_order, memory_order) volatile noexcept;
    bool compare_exchange_strong(/* floating-point */&, /* floating-point */,
                                 memory_order, memory_order) noexcept;
    bool compare_exchange_weak(/* floating-point */&, /* floating-point */,
                               memory_order = memory_order_seq_cst) volatile noexcept;
    bool compare_exchange_weak(/* floating-point */&, /* floating-point */,
                               memory_order = memory_order_seq_cst) noexcept;
    bool compare_exchange_strong(/* floating-point */&, /* floating-point */,
                                 memory_order = memory_order_seq_cst) volatile noexcept;
    bool compare_exchange_strong(/* floating-point */&, /* floating-point */,
                                 memory_order = memory_order_seq_cst) noexcept;
 
    /* floating-point */ fetch_add(/* floating-point */,
                             memory_order = memory_order_seq_cst) volatile noexcept;
    /* floating-point */ fetch_add(/* floating-point */,
                             memory_order = memory_order_seq_cst) noexcept;
    /* floating-point */ fetch_sub(/* floating-point */,
                             memory_order = memory_order_seq_cst) volatile noexcept;
    /* floating-point */ fetch_sub(/* floating-point */,
                             memory_order = memory_order_seq_cst) noexcept;
 
    /* floating-point */ operator+=(/* floating-point */) volatile noexcept;
    /* floating-point */ operator+=(/* floating-point */) noexcept;
    /* floating-point */ operator-=(/* floating-point */) volatile noexcept;
    /* floating-point */ operator-=(/* floating-point */) noexcept;
 
    void wait(/* floating-point */,
              memory_order = memory_order::seq_cst) const volatile noexcept;
    void wait(/* floating-point */,
              memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() volatile noexcept;
    void notify_one() noexcept;
    void notify_all() volatile noexcept;
    void notify_all() noexcept;
  };
}

```

#### Specializations of std::atomic for pointer types

```
namespace std {
  template<class T> struct atomic<T*> {
    using value_type = T*;
    using difference_type = ptrdiff_t;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const volatile noexcept;
    bool is_lock_free() const noexcept;
 
    constexpr atomic() noexcept;
    constexpr atomic(T*) noexcept;
    atomic(const atomic&) = delete;
    atomic& operator=(const atomic&) = delete;
    atomic& operator=(const atomic&) volatile = delete;
 
    void store(T*, memory_order = memory_order::seq_cst) volatile noexcept;
    void store(T*, memory_order = memory_order::seq_cst) noexcept;
    T* operator=(T*) volatile noexcept;
    T* operator=(T*) noexcept;
    T* load(memory_order = memory_order::seq_cst) const volatile noexcept;
    T* load(memory_order = memory_order::seq_cst) const noexcept;
    operator T*() const volatile noexcept;
    operator T*() const noexcept;
 
    T* exchange(T*, memory_order = memory_order::seq_cst) volatile noexcept;
    T* exchange(T*, memory_order = memory_order::seq_cst) noexcept;
    bool compare_exchange_weak(T*&, T*, memory_order, memory_order) volatile noexcept;
    bool compare_exchange_weak(T*&, T*, memory_order, memory_order) noexcept;
    bool compare_exchange_strong(T*&, T*, memory_order, memory_order) volatile noexcept;
    bool compare_exchange_strong(T*&, T*, memory_order, memory_order) noexcept;
    bool compare_exchange_weak(T*&, T*,
                               memory_order = memory_order::seq_cst) volatile noexcept;
    bool compare_exchange_weak(T*&, T*,
                               memory_order = memory_order::seq_cst) noexcept;
    bool compare_exchange_strong(T*&, T*,
                                 memory_order = memory_order::seq_cst) volatile noexcept;
    bool compare_exchange_strong(T*&, T*,
                                 memory_order = memory_order::seq_cst) noexcept;
 
    T* fetch_add(ptrdiff_t, memory_order = memory_order::seq_cst) volatile noexcept;
    T* fetch_add(ptrdiff_t, memory_order = memory_order::seq_cst) noexcept;
    T* fetch_sub(ptrdiff_t, memory_order = memory_order::seq_cst) volatile noexcept;
    T* fetch_sub(ptrdiff_t, memory_order = memory_order::seq_cst) noexcept;
    T* fetch_max(T*, memory_order = memory_order::seq_cst) volatile noexcept;
    T* fetch_max(T*, memory_order = memory_order::seq_cst) noexcept;
    T* fetch_min(T*, memory_order = memory_order::seq_cst) volatile noexcept;
    T* fetch_min(T*, memory_order = memory_order::seq_cst) noexcept;
 
    T* operator++(int) volatile noexcept;
    T* operator++(int) noexcept;
    T* operator--(int) volatile noexcept;
    T* operator--(int) noexcept;
    T* operator++() volatile noexcept;
    T* operator++() noexcept;
    T* operator--() volatile noexcept;
    T* operator--() noexcept;
    T* operator+=(ptrdiff_t) volatile noexcept;
    T* operator+=(ptrdiff_t) noexcept;
    T* operator-=(ptrdiff_t) volatile noexcept;
    T* operator-=(ptrdiff_t) noexcept;
 
    void wait(T*, memory_order = memory_order::seq_cst) const volatile noexcept;
    void wait(T*, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() volatile noexcept;
    void notify_one() noexcept;
    void notify_all() volatile noexcept;
    void notify_all() noexcept;
  };
}

```

#### Class template std::atomic_ref

```
namespace std {
  template<class T> struct atomic_ref {
  private:
    T* ptr;             // exposition only
  public:
    using value_type = T;
    static constexpr size_t required_alignment = /* implementation-defined */;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const noexcept;
 
    explicit atomic_ref(T&);
    atomic_ref(const atomic_ref&) noexcept;
    atomic_ref& operator=(const atomic_ref&) = delete;
 
    void store(T, memory_order = memory_order_seq_cst) const noexcept;
    T operator=(T) const noexcept;
    T load(memory_order = memory_order_seq_cst) const noexcept;
    operator T() const noexcept;
 
    T exchange(T, memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_weak(T&, T,
                               memory_order, memory_order) const noexcept;
    bool compare_exchange_strong(T&, T,
                                 memory_order, memory_order) const noexcept;
    bool compare_exchange_weak(T&, T,
                               memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_strong(T&, T,
                                 memory_order = memory_order_seq_cst) const noexcept;
 
    void wait(T, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() const noexcept;
    void notify_all() const noexcept;
  };
}

```

#### Specializations of std::atomic_ref for integral types

```
namespace std {
  template<> struct atomic_ref</* integral */> {
  private:
    /* integral */* ptr;        // exposition only
  public:
    using value_type = /* integral */;
    using difference_type = value_type;
    static constexpr size_t required_alignment = /* implementation-defined */;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const noexcept;
 
    explicit atomic_ref(/* integral */&);
    atomic_ref(const atomic_ref&) noexcept;
    atomic_ref& operator=(const atomic_ref&) = delete;
 
    void store(/* integral */, memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ operator=(/* integral */) const noexcept;
    /* integral */ load(memory_order = memory_order_seq_cst) const noexcept;
    operator /* integral */() const noexcept;
 
    /* integral */ exchange(/* integral */,
                      memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_weak(/* integral */&, /* integral */,
                               memory_order, memory_order) const noexcept;
    bool compare_exchange_strong(/* integral */&, /* integral */,
                                 memory_order, memory_order) const noexcept;
    bool compare_exchange_weak(/* integral */&, /* integral */,
                               memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_strong(/* integral */&, /* integral */,
                                 memory_order = memory_order_seq_cst) const noexcept;
 
    /* integral */ fetch_add(/* integral */,
                       memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ fetch_sub(/* integral */,
                       memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ fetch_and(/* integral */,
                       memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ fetch_or(/* integral */,
                      memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ fetch_xor(/* integral */,
                       memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ fetch_max(/* integral */,
                       memory_order = memory_order_seq_cst) const noexcept;
    /* integral */ fetch_min(/* integral */,
                       memory_order = memory_order_seq_cst) const noexcept;
 
    /* integral */ operator++(int) const noexcept;
    /* integral */ operator--(int) const noexcept;
    /* integral */ operator++() const noexcept;
    /* integral */ operator--() const noexcept;
    /* integral */ operator+=(/* integral */) const noexcept;
    /* integral */ operator-=(/* integral */) const noexcept;
    /* integral */ operator&=(/* integral */) const noexcept;
    /* integral */ operator

```

#### Specializations of std::atomic_ref for floating-point types

```
namespace std {
  template<> struct atomic_ref</* floating-point */> {
  private:
    /* floating-point */* ptr;  // exposition only
  public:
    using value_type = /* floating-point */;
    using difference_type = value_type;
    static constexpr size_t required_alignment = /* implementation-defined */;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const noexcept;
 
    explicit atomic_ref(/* floating-point */&);
    atomic_ref(const atomic_ref&) noexcept;
    atomic_ref& operator=(const atomic_ref&) = delete;
 
    void store(/* floating-point */, memory_order = memory_order_seq_cst) const noexcept;
    /* floating-point */ operator=(/* floating-point */) const noexcept;
    /* floating-point */ load(memory_order = memory_order_seq_cst) const noexcept;
    operator /* floating-point */() const noexcept;
 
    /* floating-point */ exchange(/* floating-point */,
                            memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_weak(/* floating-point */&, /* floating-point */,
                               memory_order, memory_order) const noexcept;
    bool compare_exchange_strong(/* floating-point */&, /* floating-point */,
                                 memory_order, memory_order) const noexcept;
    bool compare_exchange_weak(/* floating-point */&, /* floating-point */,
                               memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_strong(/* floating-point */&, /* floating-point */,
                                 memory_order = memory_order_seq_cst) const noexcept;
 
    /* floating-point */ fetch_add(/* floating-point */,
                             memory_order = memory_order_seq_cst) const noexcept;
    /* floating-point */ fetch_sub(/* floating-point */,
                             memory_order = memory_order_seq_cst) const noexcept;
 
    /* floating-point */ operator+=(/* floating-point */) const noexcept;
    /* floating-point */ operator-=(/* floating-point */) const noexcept;
 
    void wait(/* floating-point */, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() const noexcept;
    void notify_all() const noexcept;
  };
}

```

#### Specializations of std::atomic_ref for pointer types

```
namespace std {
  template<class T> struct atomic_ref<T*> {
  private:
    T** ptr;        // exposition only
  public:
    using value_type = T*;
    using difference_type = ptrdiff_t;
    static constexpr size_t required_alignment = /* implementation-defined */;
 
    static constexpr bool is_always_lock_free = /* implementation-defined */;
    bool is_lock_free() const noexcept;
 
    explicit atomic_ref(T*&);
    atomic_ref(const atomic_ref&) noexcept;
    atomic_ref& operator=(const atomic_ref&) = delete;
 
    void store(T*, memory_order = memory_order_seq_cst) const noexcept;
    T* operator=(T*) const noexcept;
    T* load(memory_order = memory_order_seq_cst) const noexcept;
    operator T*() const noexcept;
 
    T* exchange(T*, memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_weak(T*&, T*,
                               memory_order, memory_order) const noexcept;
    bool compare_exchange_strong(T*&, T*,
                                 memory_order, memory_order) const noexcept;
    bool compare_exchange_weak(T*&, T*,
                               memory_order = memory_order_seq_cst) const noexcept;
    bool compare_exchange_strong(T*&, T*,
                                 memory_order = memory_order_seq_cst) const noexcept;
 
    T* fetch_add(difference_type, memory_order = memory_order_seq_cst) const noexcept;
    T* fetch_sub(difference_type, memory_order = memory_order_seq_cst) const noexcept;
    T* fetch_max(T *, memory_order = memory_order::seq_cst) const noexcept;
    T* fetch_min(T *, memory_order = memory_order::seq_cst) const noexcept;
 
    T* operator++(int) const noexcept;
    T* operator--(int) const noexcept;
    T* operator++() const noexcept;
    T* operator--() const noexcept;
    T* operator+=(difference_type) const noexcept;
    T* operator-=(difference_type) const noexcept;
 
    void wait(T*, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() const noexcept;
    void notify_all() const noexcept;
  };
}

```

#### Class std::atomic_flag

```
namespace std {
  struct atomic_flag {
    constexpr atomic_flag() noexcept;
    atomic_flag(const atomic_flag&) = delete;
    atomic_flag& operator=(const atomic_flag&) = delete;
    atomic_flag& operator=(const atomic_flag&) volatile = delete;
 
    bool test(memory_order = memory_order::seq_cst) const volatile noexcept;
    bool test(memory_order = memory_order::seq_cst) const noexcept;
    bool test_and_set(memory_order = memory_order::seq_cst) volatile noexcept;
    bool test_and_set(memory_order = memory_order::seq_cst) noexcept;
    void clear(memory_order = memory_order::seq_cst) volatile noexcept;
    void clear(memory_order = memory_order::seq_cst) noexcept;
 
    void wait(bool, memory_order = memory_order::seq_cst) const volatile noexcept;
    void wait(bool, memory_order = memory_order::seq_cst) const noexcept;
    void notify_one() volatile noexcept;
    void notify_one() noexcept;
    void notify_all() volatile noexcept;
    void notify_all() noexcept;
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/atomic&oldid=171531>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 May 2024, at 19:19.