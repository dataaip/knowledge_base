# Experimental library header <experimental/ranges/iterator>

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
| <experimental/execution> | | | | |
| Filesystem TS | | | | |
| <experimental/filesystem> | | | | |
| Parallelism TS (v1, v2) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/algorithm` | | | | | | `experimental/execution_policy` | | | | | | `experimental/exception_list` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/numeric` | | | | | | <experimental/simd> | | | | | | `experimental/task_block` | | | | | |
| Library Fundamentals TS (v1, v2, v3) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/algorithm` | | | | | | <experimental/any> | | | | | | `experimental/array` | | | | | | `experimental/chrono` | | | | | | `experimental/deque` | | | | | | `experimental/forward_list` | | | | | | <experimental/functional> | | | | | | `experimental/future` | | | | | | `experimental/iterator` | | | | | | `experimental/list` | | | | | | `experimental/map` | | | | | | `experimental/memory` | | | | | | <experimental/memory_resource> | | | | | | `experimental/numeric` | | | | | | <experimental/optional> | | | | | | `experimental/propagate_const` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/random` | | | | | | `experimental/ratio` | | | | | | `experimental/regex` | | | | | | `experimental/scope` | | | | | | `experimental/set` | | | | | | `experimental/source_location` | | | | | | `experimental/string` | | | | | | <experimental/string_view> | | | | | | `experimental/system_error` | | | | | | `experimental/tuple` | | | | | | `experimental/type_traits` | | | | | | `experimental/unordered_map` | | | | | | `experimental/unordered_set` | | | | | | `experimental/utility` | | | | | | `experimental/vector` | | | | | |  | | | | | |
| Concurrency TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/atomic` | | | | | | `experimental/barrier` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/future` | | | | | | `experimental/latch` | | | | | |
| Ranges TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/ranges/algorithm> | | | | | | <experimental/ranges/concepts> | | | | | | <experimental/ranges/functional> | | | | | | ****<experimental/ranges/iterator>**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/ranges/random> | | | | | | <experimental/ranges/tuple> | | | | | | <experimental/ranges/type_traits> | | | | | | <experimental/ranges/utility> | | | | | |
| Coroutines TS | | | | |
| `experimental/coroutine` | | | | |
| Networking TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/buffer` | | | | | | `experimental/executor` | | | | | | `experimental/internet` | | | | | | `experimental/io_context` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/net> | | | | | | `experimental/netfwd` | | | | | | `experimental/socket` | | | | | | `experimental/timer` | | | | | |
| Reflection TS | | | | |
| <experimental/reflect> | | | | |

This header is part of the ranges library.

### Iterator-related concepts

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |

#### Iterator concepts

|  |  |
| --- | --- |
| Readable | specifies that a type is readable by applying operator `*`   (concept) |
| Writable | specifies that a value can be written to an iterator's referenced object   (concept) |
| WeaklyIncrementable | specifies that a `Semiregular` type can be incremented with pre- and post-increment operators   (concept) |
| Incrementable | specifies that the increment operation on a `WeaklyIncrementable` type is equality-preserving and that the type is `EqualityComparable`   (concept) |
| Iterator | specifies that objects of a type can be incremented and dereferenced   (concept) |
| Sentinel | specifies that objects of a type is a sentinel for an `Iterator` type   (concept) |
| SizedSentinel | specifies that the `-` operator can be applied to an iterator and a sentinel to calculate their difference in constant time   (concept) |
| InputIterator | specifies that a type is an input iterator, that is, its referenced values can be read and it can be both pre- and post-incremented   (concept) |
| OutputIterator | specifies that a type is an output iterator for a given value type, that is, values of that type can be written to it and it can be both pre- and post-incremented   (concept) |
| ForwardIterator | specifies that an `InputIterator` is a forward iterator, supporting equality comparison and multi-pass   (concept) |
| BidirectionalIterator | specifies that a `ForwardIterator` is a bidirectional iterator, supporting movement backwards   (concept) |
| RandomAccessIterator | specifies that a `BidirectionalIterator` is a random-access iterator, supporting advancement in constant time and subscripting   (concept) |

#### Indirect callable concepts

|  |  |
| --- | --- |
| IndirectUnaryInvocableIndirectRegularUnaryInvocable | specifies that a callable type can be invoked with the result of dereferencing a `Readable` type   (concept) |
| IndirectUnaryPredicate | specifies that a callable object, when invoked with the result of dereferencing a `Readable` type, satisfies `Predicate`   (concept) |
| IndirectRelation | specifies that a callable object, when invoked with the result of dereferencing some `Readable` types, satisfies `Relation`   (concept) |
| IndirectStrictWeakOrder | specifies that a callable object, when invoked with the result of dereferencing some `Readable` types, satisfies `StrictWeakOrder`   (concept) |

#### Common algorithm requirements

|  |  |
| --- | --- |
| IndirectlyMovable | specifies that values may be moved from a `Readable` type to a `Writable` type   (concept) |
| IndirectlyMovableStorable | specifies that values may be moved from a `Readable` type to a `Writable` type and that the move may be performed via an intermediate object   (concept) |
| IndirectlyCopyable | specifies that values may be copied from a `Readable` type to a `Writable` type   (concept) |
| IndirectlyCopyableStorable | specifies that values may be copied from a `Readable` type to a `Writable` type and that the copy may be performed via an intermediate object   (concept) |
| IndirectlySwappable | specifies that the values referenced by two `Readable` types can be swapped   (concept) |
| IndirectlyComparable | specifies that the values referenced by two `Readable` types can be compared   (concept) |
| Permutable | specifies the common requirements of algorithms that reorder elements in place   (concept) |
| Mergeable | specifies the requirements of algorithms that merge sorted sequences into an output sequence by copying elements   (concept) |
| Sortable | specifies the common requirements of algorithms that permute sequences into ordered sequences   (concept) |

#### Concept utilities

|  |  |
| --- | --- |
| indirect_result_of | compute the result of invoking a callable object on the result of dereferencing some set of `Readable` types   (class template) |
| projected | helper template for specifying the constraints on algorithms that accept projections   (class template) |

### Iterator primitives

#### Iterator utilities

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |
| iter_move") | casts the result of dereferencing an object to its associated rvalue reference type (customization point object) |
| iter_swap") | swap the values referenced by two dereferenceable objects (customization point object) |

#### Iterator traits

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |
| difference_type | obtains the difference type of a `WeaklyIncrementable` type   (class template) |
| value_type | obtains the value type of a `Readable` type   (class template) |
| iterator_category | obtains the iterator category of an input iterator type   (class template) |
| iterator_traits") | compatibility traits class that collects an iterator’s associated types (alias template) |
| reference_trvalue_reference_titer_common_reference_t | obtains a dereferenceable object's associated reference types (alias template) |

#### Iterator category tags

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |
| input_iterator_tagoutput_iterator_tagforward_iterator_tagbidirectional_iterator_tagrandom_access_iterator_tag | empty class types used to indicate iterator categories   (class) |

#### std::iterator_traits specializations

|  |  |
| --- | --- |
| Defined in namespace `std` | |
| std::iterator_traits<InputIterator>std::iterator_traits<OutputIterator>") | specializes std::iterator_traits for ranges TS iterators   (class template specialization) |

#### Iterator operations

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |
| advance | advances an iterator by given distance   (function template) |
| distance | returns the distance between an iterator and a sentinel, or between the beginning and the end of a range   (function template) |
| next | increment an iterator   (function template) |
| prev | decrement an iterator   (function template) |

### Iterator adaptors

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |
| reverse_iterator") | iterator adaptor for reverse-order traversal   (class template) |
| back_insert_iterator") | iterator adaptor for insertion at the end of a container   (class template) |
| front_insert_iterator") | iterator adaptor for insertion at the front of a container   (class template) |
| insert_iterator") | iterator adaptor for insertion into a container   (class template) |
| move_iterator") | iterator adaptor which dereferences to an rvalue reference   (class template) |
| move_sentinel") | sentinel adaptor for use with `move_iterator`   (class template) |
| common_iterator") | adapt an iterator-sentinel pair into a common iterator type for use with legacy algorithms   (class template) |
| counted_iterator") | iterator adaptor that keeps track of its distance from its starting position   (class template) |
| default_sentinel") | empty sentinel type for use with iterator types that know the bound of their range   (class) |
| dangling | wrapper for a possibly dangling iterator   (class template) |
| safe_iterator_t | alias template that wraps the iterator type of an rvalue range with `dangling` (alias template) |
| unreachable") | sentinel type used with any iterator to denote an infinite range   (class) |

### Stream iterators

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::ranges` | |
| istream_iterator") | input iterator that reads from std::basic_istream   (class template) |
| ostream_iterator") | output iterator that writes to std::basic_ostream   (class template) |
| istreambuf_iterator") | input iterator that reads from std::basic_streambuf   (class template) |
| ostreambuf_iterator") | output iterator that writes to std::basic_streambuf   (class template) |

### Synopsis

```
namespace std { namespace experimental { namespace ranges { inline namespace v1 {
 
template <class T> concept bool /* dereferenceable */ // exposition only
  = requires(T& t) { {*t} -> auto&&; };
 
namespace {
  constexpr /* unspecified */ iter_move = /* unspecified */;
  constexpr /* unspecified */ iter_swap = /* unspecified */;
}
 
template <class> struct difference_type;
template <class T> using difference_type_t
  = typename difference_type<T>::type;
 
template <class> struct value_type;
template <class T> using value_type_t
  = typename value_type<T>::type;
 
template <class> struct iterator_category;
template <class T> using iterator_category_t
  = typename iterator_category<T>::type;
 
template </* dereferenceable */ T> using reference_t
  = decltype(*declval<T&>());
 
template </* dereferenceable */ T>
    requires /* see definition */ using rvalue_reference_t
  = decltype(ranges::iter_move(declval<T&>()));
 
template <class In>
concept bool Readable = /* see definition */;
 
template <class Out, class T>
concept bool Writable = /* see definition */;
 
template <class I>
concept bool WeaklyIncrementable = /* see definition */;
 
template <class I>
concept bool Incrementable = /* see definition */;
 
template <class I>
concept bool Iterator = /* see definition */;
 
template <class S, class I>
concept bool Sentinel = /* see definition */;
 
template <class S, class I>
  constexpr bool disable_sized_sentinel = false;
 
template <class S, class I>
concept bool SizedSentinel = /* see definition */;
 
template <class I>
concept bool InputIterator = /* see definition */;
 
template <class I>
concept bool OutputIterator = /* see definition */;
 
template <class I>
concept bool ForwardIterator = /* see definition */;
 
template <class I>
concept bool BidirectionalIterator = /* see definition */;
 
template <class I>
concept bool RandomAccessIterator = /* see definition */;
 
template <class F, class I>
concept bool IndirectUnaryInvocable = /* see definition */;
 
template <class F, class I>
concept bool IndirectRegularUnaryInvocable = /* see definition */;
 
template <class F, class I>
concept bool IndirectUnaryPredicate = /* see definition */;
 
template <class F, class I1, class I2 = I1>
concept bool IndirectRelation = /* see definition */;
 
template <class F, class I1, class I2 = I1>
concept bool IndirectStrictWeakOrder = /* see definition */;
 
template <class> struct indirect_result_of;
 
template <class F, class... Is>
  requires Invocable<F, reference_t<Is>...>
struct indirect_result_of<F(Is...)>;
 
template <class F>
using indirect_result_of_t
  = typename indirect_result_of<F>::type;
 
template <Readable I, IndirectRegularUnaryInvocable<I> Proj>
struct projected;
 
template <WeaklyIncrementable I, class Proj>
struct difference_type<projected<I, Proj>>;
 
template <class In, class Out>
concept bool IndirectlyMovable = /* see definition */;
 
template <class In, class Out>
concept bool IndirectlyMovableStorable = /* see definition */;
 
template <class In, class Out>
concept bool IndirectlyCopyable = /* see definition */;
 
template <class In, class Out>
concept bool IndirectlyCopyableStorable = /* see definition */;
 
template <class I1, class I2 = I1>
concept bool IndirectlySwappable = /* see definition */;
 
template <class I1, class I2, class R = equal_to<>, class P1 = identity,
    class P2 = identity>
concept bool IndirectlyComparable = /* see definition */;
 
template <class I>
concept bool Permutable = /* see definition */;
 
template <class I1, class I2, class Out,
    class R = less<>, class P1 = identity, class P2 = identity>
concept bool Mergeable = /* see definition */;
 
template <class I, class R = less<>, class P = identity>
concept bool Sortable = /* see definition */;
 
template <class Iterator> using iterator_traits = /* see definition */;
 
template <Readable T> using iter_common_reference_t
  = common_reference_t<reference_t<T>, value_type_t<T>&>;
 
struct output_iterator_tag { };
struct input_iterator_tag { };
struct forward_iterator_tag : input_iterator_tag { };
struct bidirectional_iterator_tag : forward_iterator_tag { };
struct random_access_iterator_tag : bidirectional_iterator_tag { };
 
namespace {
  constexpr /* unspecified */ advance = /* unspecified */;
  constexpr /* unspecified */ distance = /* unspecified */;
  constexpr /* unspecified */ next = /* unspecified */;
  constexpr /* unspecified */ prev = /* unspecified */;
}
 
template <BidirectionalIterator I> class reverse_iterator;
 
template <class I1, class I2>
    requires EqualityComparableWith<I1, I2>
  constexpr bool operator==(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
template <class I1, class I2>
    requires EqualityComparableWith<I1, I2>
  constexpr bool operator!=(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator<(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator>(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator>=(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator<=(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
 
template <class I1, class I2>
    requires SizedSentinel<I1, I2>
  constexpr difference_type_t<I2> operator-(
    const reverse_iterator<I1>& x,
    const reverse_iterator<I2>& y);
template <RandomAccessIterator I>
  constexpr reverse_iterator<I> operator+(
    difference_type_t<I> n,
    const reverse_iterator<I>& x);
 
template <BidirectionalIterator I>
constexpr reverse_iterator<I> make_reverse_iterator(I i);
 
template <class Container> class back_insert_iterator;
template <class Container>
  back_insert_iterator<Container> back_inserter(Container& x);
 
template <class Container> class front_insert_iterator;
template <class Container>
  front_insert_iterator<Container> front_inserter(Container& x);
 
template <class Container> class insert_iterator;
template <class Container>
  insert_iterator<Container> inserter(Container& x, iterator_t<Container> i);
 
template <InputIterator I> class move_iterator;
 
template <class I1, class I2>
    requires EqualityComparableWith<I1, I2>
  constexpr bool operator==(
    const move_iterator<I1>& x, const move_iterator<I2>& y);
template <class I1, class I2>
    requires EqualityComparableWith<I1, I2>
  constexpr bool operator!=(
    const move_iterator<I1>& x, const move_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator<(
    const move_iterator<I1>& x, const move_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator<=(
    const move_iterator<I1>& x, const move_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator>(
    const move_iterator<I1>& x, const move_iterator<I2>& y);
template <class I1, class I2>
    requires StrictTotallyOrderedWith<I1, I2>
  constexpr bool operator>=(
    const move_iterator<I1>& x, const move_iterator<I2>& y);
 
template <class I1, class I2>
    requires SizedSentinel<I1, I2>
  constexpr difference_type_t<I2> operator-(
    const move_iterator<I1>& x,
    const move_iterator<I2>& y);
template <RandomAccessIterator I>
  constexpr move_iterator<I> operator+(
    difference_type_t<I> n,
    const move_iterator<I>& x);
 
template <InputIterator I>
  constexpr move_iterator<I> make_move_iterator(I i);
 
template <Semiregular S> class move_sentinel;
 
template <class I, Sentinel<I> S>
  constexpr bool operator==(
    const move_iterator<I>& i, const move_sentinel<S>& s);
template <class I, Sentinel<I> S>
  constexpr bool operator==(
    const move_sentinel<S>& s, const move_iterator<I>& i);
template <class I, Sentinel<I> S>
  constexpr bool operator!=(
    const move_iterator<I>& i, const move_sentinel<S>& s);
template <class I, Sentinel<I> S>
  constexpr bool operator!=(
    const move_sentinel<S>& s, const move_iterator<I>& i);
 
template <class I, SizedSentinel<I> S>
  constexpr difference_type_t<I> operator-(
    const move_sentinel<S>& s, const move_iterator<I>& i);
template <class I, SizedSentinel<I> S>
  constexpr difference_type_t<I> operator-(
    const move_iterator<I>& i, const move_sentinel<S>& s);
 
template <Semiregular S>
  constexpr move_sentinel<S> make_move_sentinel(S s);
 
template <Iterator I, Sentinel<I> S>
  requires !Same<I, S>
class common_iterator;
 
template <Readable I, class S>
struct value_type<common_iterator<I, S>>;
 
template <InputIterator I, class S>
struct iterator_category<common_iterator<I, S>>;
 
template <ForwardIterator I, class S>
struct iterator_category<common_iterator<I, S>>;
 
template <class I1, class I2, Sentinel<I2> S1, Sentinel<I1> S2>
bool operator==(
  const common_iterator<I1, S1>& x, const common_iterator<I2, S2>& y);
template <class I1, class I2, Sentinel<I2> S1, Sentinel<I1> S2>
  requires EqualityComparableWith<I1, I2>
bool operator==(
  const common_iterator<I1, S1>& x, const common_iterator<I2, S2>& y);
template <class I1, class I2, Sentinel<I2> S1, Sentinel<I1> S2>
bool operator!=(
  const common_iterator<I1, S1>& x, const common_iterator<I2, S2>& y);
 
template <class I2, SizedSentinel<I2> I1, SizedSentinel<I2> S1, SizedSentinel<I1> S2>
difference_type_t<I2> operator-(
  const common_iterator<I1, S1>& x, const common_iterator<I2, S2>& y);
 
class default_sentinel;
 
template <Iterator I> class counted_iterator;
 
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr bool operator==(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
constexpr bool operator==(
  const counted_iterator<auto>& x, default_sentinel);
constexpr bool operator==(
  default_sentinel, const counted_iterator<auto>& x);
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr bool operator!=(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
constexpr bool operator!=(
  const counted_iterator<auto>& x, default_sentinel y);
constexpr bool operator!=(
  default_sentinel x, const counted_iterator<auto>& y);
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr bool operator<(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr bool operator<=(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr bool operator>(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr bool operator>=(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
 
template <class I1, class I2>
    requires Common<I1, I2>
  constexpr difference_type_t<I2> operator-(
    const counted_iterator<I1>& x, const counted_iterator<I2>& y);
template <class I>
  constexpr difference_type_t<I> operator-(
    const counted_iterator<I>& x, default_sentinel y);
template <class I>
  constexpr difference_type_t<I> operator-(
    default_sentinel x, const counted_iterator<I>& y);
template <RandomAccessIterator I>
  constexpr counted_iterator<I>
    operator+(difference_type_t<I> n, const counted_iterator<I>& x);
 
template <Iterator I>
  constexpr counted_iterator<I> make_counted_iterator(I i, difference_type_t<I> n);
 
class unreachable;
template <Iterator I>
  constexpr bool operator==(const I&, unreachable) noexcept;
template <Iterator I>
  constexpr bool operator==(unreachable, const I&) noexcept;
template <Iterator I>
  constexpr bool operator!=(const I&, unreachable) noexcept;
template <Iterator I>
  constexpr bool operator!=(unreachable, const I&) noexcept;
 
template <class T> class dangling;
 
template <class T, class CharT = char, class Traits = char_traits<CharT>,
    class Distance = ptrdiff_t>
  class istream_iterator;
 
template <class T, class CharT, class Traits, class Distance>
  bool operator==(const istream_iterator<T, CharT, Traits, Distance>& x,
    const istream_iterator<T, CharT, Traits, Distance>& y);
template <class T, class CharT, class Traits, class Distance>
  bool operator==(default_sentinel x,
    const istream_iterator<T, CharT, Traits, Distance>& y);
template <class T, class CharT, class Traits, class Distance>
  bool operator==(const istream_iterator<T, CharT, Traits, Distance>& x,
    default_sentinel y);
template <class T, class CharT, class Traits, class Distance>
  bool operator!=(const istream_iterator<T, CharT, Traits, Distance>& x,
    const istream_iterator<T, CharT, Traits, Distance>& y);
template <class T, class CharT, class Traits, class Distance>
  bool operator!=(default_sentinel x,
    const istream_iterator<T, CharT, Traits, Distance>& y);
template <class T, class CharT, class Traits, class Distance>
  bool operator!=(const istream_iterator<T, CharT, Traits, Distance>& x,
    default_sentinel y);
 
template <class T, class CharT = char, class Traits = char_traits<CharT>>
  class ostream_iterator;
 
template <class CharT, class Traits = char_traits<CharT> >
  class istreambuf_iterator;
 
template <class CharT, class Traits>
  bool operator==(const istreambuf_iterator<CharT, Traits>& a,
    const istreambuf_iterator<CharT, Traits>& b);
template <class CharT, class Traits>
  bool operator==(default_sentinel a,
    const istreambuf_iterator<CharT, Traits>& b);
template <class CharT, class Traits>
  bool operator==(const istreambuf_iterator<CharT, Traits>& a,
    default_sentinel b);
template <class CharT, class Traits>
  bool operator!=(const istreambuf_iterator<CharT, Traits>& a,
    const istreambuf_iterator<CharT, Traits>& b);
template <class CharT, class Traits>
  bool operator!=(default_sentinel a,
    const istreambuf_iterator<CharT, Traits>& b);
template <class CharT, class Traits>
  bool operator!=(const istreambuf_iterator<CharT, Traits>& a,
    default_sentinel b);
 
template <class CharT, class Traits = char_traits<CharT> >
  class ostreambuf_iterator;
 
}}}}
 
namespace std {
  template <experimental::ranges::Iterator Out>
    struct iterator_traits<Out>;
  template <experimental::ranges::InputIterator In>
    struct iterator_traits<In>;
  template <experimental::ranges::InputIterator In>
      requires experimental::ranges::Sentinel<In, In>
    struct iterator_traits;
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/ranges/iterator&oldid=146960>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 January 2023, at 09:20.