# Standard library header <ranges> (C++20)

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | ****<ranges>**** (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the ranges library.

### Namespace aliases

|  |  |  |
| --- | --- | --- |
| namespace std {  namespace views = ranges::views; } |  |  |
|  |  |  |

The namespace alias `std::views` is provided as a shorthand for `std::ranges::views`.

|  |  |
| --- | --- |
| Includes | |
| <compare>(C++20) | Three-way comparison operator support |
| <initializer_list>(C++11) | std::initializer_list class template |
| <iterator> | Range iterators |
| Concepts | |
| Range concepts | |
| Defined in namespace `std::ranges` | |
| ranges::range(C++20) | specifies that a type is a range, that is, it provides a `begin` iterator and an `end` sentinel   (concept) |
| ranges::borrowed_range(C++20) | specifies that a type is a `range` and iterators obtained from an expression of it can be safely returned without danger of dangling   (concept) |
| ranges::sized_range(C++20) | specifies that a range knows its size in constant time   (concept) |
| ranges::view(C++20) | specifies that a range is a view, that is, it has constant time copy/move/assignment   (concept) |
| ranges::input_range(C++20) | specifies a range whose iterator type satisfies `input_iterator`   (concept) |
| ranges::output_range(C++20) | specifies a range whose iterator type satisfies `output_iterator`   (concept) |
| ranges::forward_range(C++20) | specifies a range whose iterator type satisfies `forward_iterator`   (concept) |
| ranges::bidirectional_range(C++20) | specifies a range whose iterator type satisfies `bidirectional_iterator`   (concept) |
| ranges::random_access_range(C++20) | specifies a range whose iterator type satisfies `random_access_iterator`   (concept) |
| ranges::contiguous_range(C++20) | specifies a range whose iterator type satisfies `contiguous_iterator`   (concept) |
| ranges::common_range(C++20) | specifies that a range has identical iterator and sentinel types   (concept) |
| ranges::viewable_range(C++20) | specifies the requirements for a `range` to be safely convertible to a `view`   (concept) |
| ranges::constant_range(C++23) | specifies that a range has read-only elements   (concept) |
| Functions | |
| Range conversions | |
| Defined in namespace `std::ranges` | |
| ranges::to(C++23) | constructs a new non-view object from an input range   (function template) |
| Classes | |
| Range primitives | |
| Defined in namespace `std::ranges` | |
| ranges::iterator_tranges::const_iterator_tranges::sentinel_tranges::const_sentinel_t(C++20)(C++23)(C++20)(C++23) | obtains iterator and sentinel types of a range (alias template) |
| ranges::range_difference_tranges::range_size_tranges::range_value_t(C++20)(C++20)(C++20) | obtains size, difference, and value types of a range (alias template) |
| ranges::range_reference_tranges::range_const_reference_tranges::range_rvalue_reference_tranges::range_common_reference_t(C++20)(C++23)(C++20)(C++20) | obtains reference types of a range (alias template) |
| Views | |
| Defined in namespace `std::ranges` | |
| ranges::view_interface(C++20) | helper class template for defining a `view`, using the curiously recurring template pattern   (class template) |
| ranges::subrange(C++20) | combines an iterator-sentinel pair into a `view`   (class template) |
| Dangling iterator handling | |
| Defined in namespace `std::ranges` | |
| ranges::dangling(C++20) | a placeholder type indicating that an iterator or a `subrange` should not be returned since it would be dangling   (class) |
| ranges::borrowed_iterator_tranges::borrowed_subrange_t(C++20) | obtains iterator type or `subrange` type of a `borrowed_range` (alias template) |
| Other utilities | |
| Defined in namespace `std::ranges` | |
| ranges::elements_of(C++23) | tags a range to be treated as a sequence rather than a single value   (class template) |
| Factories | |
| Defined in namespace `std::ranges` | |
| ranges::empty_viewviews::empty(C++20) | an empty `view` with no elements (class template) (variable template) |
| ranges::single_viewviews::single(C++20) | a `view` that contains a single element of a specified value (class template) (customization point object) |
| ranges::iota_viewviews::iota(C++20) | a `view` consisting of a sequence generated by repeatedly incrementing an initial value (class template) (customization point object) |
| ranges::repeat_viewviews::repeat(C++23) | a `view` consisting of a generated sequence by repeatedly producing the same value (class template) (customization point object) |
| ranges::basic_istream_viewviews::istream(C++20) | a `view` consisting of the elements obtained by successive application of `operator>>` on the associated input stream (class template) (customization point object) |
| Adaptors | |
| Defined in namespace `std::ranges` | |
| ranges::range_adaptor_closure(C++23) | helper base class template for defining a range adaptor closure object   (class template) |
| views::all_tviews::all(C++20) | a `view` that includes all elements of a `range` (alias template) (range adaptor object) |
| ranges::ref_view(C++20) | a `view` of the elements of some other `range`   (class template) |
| ranges::owning_view(C++20) | a `view` with unique ownership of some `range`   (class template) |
| ranges::as_rvalue_viewviews::as_rvalue(C++23) | a `view` of a sequence that casts each element to an rvalue (class template) (range adaptor object) |
| ranges::filter_viewviews::filter(C++20) | a `view` that consists of the elements of a `range` that satisfies a predicate (class template) (range adaptor object) |
| ranges::transform_viewviews::transform(C++20) | a `view` of a sequence that applies a transformation function to each element (class template) (range adaptor object) |
| ranges::take_viewviews::take(C++20) | a `view` consisting of the first N elements of another `view` (class template) (range adaptor object) |
| ranges::take_while_viewviews::take_while(C++20) | a `view` consisting of the initial elements of another `view`, until the first element on which a predicate returns false (class template) (range adaptor object) |
| ranges::drop_viewviews::drop(C++20) | a `view` consisting of elements of another `view`, skipping the first N elements (class template) (range adaptor object) |
| ranges::drop_while_viewviews::drop_while(C++20) | a `view` consisting of the elements of another `view`, skipping the initial subsequence of elements until the first element where the predicate returns false (class template) (range adaptor object) |
| ranges::join_viewviews::join(C++20) | a `view` consisting of the sequence obtained from flattening a `view` of `range`s (class template) (range adaptor object) |
| ranges::join_with_viewviews::join_with(C++23) | a `view` consisting of the sequence obtained from flattening a view of ranges, with the delimiter in between elements (class template) (range adaptor object) |
| ranges::lazy_split_viewviews::lazy_split(C++20) | a `view` over the subranges obtained from splitting another `view` using a delimiter (class template) (range adaptor object) |
| ranges::split_viewviews::split(C++20) | a `view` over the subranges obtained from splitting another `view` using a delimiter (class template) (range adaptor object) |
| ranges::concat_viewviews::concat(C++26) | a `view` consisting of concatenation of the adapted views (class template) (customization point object) |
| views::counted(C++20) | creates a subrange from an iterator and a count (customization point object) |
| ranges::common_viewviews::common(C++20) | converts a `view` into a `common_range` (class template) (range adaptor object) |
| ranges::reverse_viewviews::reverse(C++20) | a `view` that iterates over the elements of another bidirectional view in reverse order (class template) (range adaptor object) |
| ranges::as_const_viewviews::as_const(C++23) | converts a `view` into a `constant_range` (class template) (range adaptor object) |
| ranges::elements_viewviews::elements(C++20) | takes a `view` consisting of **tuple-like** values and a number N and produces a `view` of Nth element of each tuple (class template) (range adaptor object) |
| ranges::keys_viewviews::keys(C++20) | takes a `view` consisting of pair-like values and produces a `view` of the first elements of each pair (class template) (range adaptor object) |
| ranges::values_viewviews::values(C++20) | takes a `view` consisting of pair-like values and produces a `view` of the second elements of each pair (class template) (range adaptor object) |
| ranges::enumerate_viewviews::enumerate(C++23) | a `view` that maps each element of adapted sequence to a tuple of both the element's position and its value (class template) (range adaptor object) |
| ranges::zip_viewviews::zip(C++23) | a `view` consisting of tuples of references to corresponding elements of the adapted views (class template) (customization point object) |
| ranges::zip_transform_viewviews::zip_transform(C++23) | a `view` consisting of results of application of a transformation function to corresponding elements of the adapted views (class template) (customization point object) |
| ranges::adjacent_viewviews::adjacent(C++23) | a `view` consisting of tuples of references to adjacent elements of the adapted view (class template) (range adaptor object) |
| ranges::adjacent_transform_viewviews::adjacent_transform(C++23) | a `view` consisting of results of application of a transformation function to adjacent elements of the adapted view (class template) (range adaptor object) |
| ranges::chunk_viewviews::chunk(C++23) | a range of `view`s that are `N`-sized non-overlapping successive chunks of the elements of another `view` (class template) (range adaptor object) |
| ranges::slide_viewviews::slide(C++23) | a `view` whose Mth element is a `view` over the Mth through (M + N - 1)th elements of another `view` (class template) (range adaptor object) |
| ranges::chunk_by_viewviews::chunk_by(C++23) | splits the `view` into subranges between each pair of adjacent elements for which the given predicate returns false (class template) (range adaptor object) |
| ranges::stride_viewviews::stride(C++23) | a `view` consisting of elements of another `view`, advancing over N elements at a time (class template) (range adaptor object) |
| ranges::cartesian_product_viewviews::cartesian_product(C++23) | a `view` consisting of tuples of results calculated by the n-ary cartesian product of the adapted views (class template) (customization point object) |
| Customization point objects | |
| Range access | |
| Defined in namespace `std::ranges` | |
| ranges::begin(C++20) | returns an iterator to the beginning of a range (customization point object) |
| ranges::end(C++20) | returns a sentinel indicating the end of a range (customization point object) |
| ranges::cbegin(C++20) | returns an iterator to the beginning of a read-only range (customization point object) |
| ranges::cend(C++20) | returns a sentinel indicating the end of a read-only range (customization point object) |
| ranges::rbegin(C++20) | returns a reverse iterator to a range (customization point object) |
| ranges::rend(C++20) | returns a reverse end iterator to a range (customization point object) |
| ranges::crbegin(C++20) | returns a reverse iterator to a read-only range (customization point object) |
| ranges::crend(C++20) | returns a reverse end iterator to a read-only range (customization point object) |
| ranges::size(C++20) | returns an integer equal to the size of a range (customization point object) |
| ranges::ssize(C++20) | returns a signed integer equal to the size of a range (customization point object) |
| ranges::empty(C++20) | checks whether a range is empty (customization point object) |
| ranges::data(C++20) | obtains a pointer to the beginning of a contiguous range (customization point object) |
| ranges::cdata(C++20) | obtains a pointer to the beginning of a read-only contiguous range (customization point object) |
| Enumerations | |
| Defined in namespace `std::ranges` | |
| ranges::subrange_kind(C++20) | specifies whether a std::ranges::subrange models std::ranges::sized_range   (enum) |
| Helpers | |
| std::tuple_size<std::ranges::subrange>(C++20) | obtains the size of a std::ranges::subrange   (class template specialization) |
| std::tuple_element<std::ranges::subrange>(C++20) | obtains the type of the iterator or the sentinel of a std::ranges::subrange   (class template specialization) |
| get(std::ranges::subrange)(C++20) | obtains iterator or sentinel from a std::ranges::subrange   (function template) |
| from_range_tfrom_range(C++23) | from-range construction tag (tag) |

### Synopsis

```
#include <compare>
#include <initializer_list>
#include <iterator>
 
namespace std::ranges {
  inline namespace /* unspecified */ {
    // range access
    inline constexpr /* unspecified */ begin   = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ end     = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ cbegin  = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ cend    = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ rbegin  = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ rend    = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ crbegin = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ crend   = /* unspecified */; // freestanding
 
    inline constexpr /* unspecified */ size    = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ ssize   = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ empty   = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ data    = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ cdata   = /* unspecified */; // freestanding
  }
 
  // ranges
  template<class T>
  concept range = /* see description */; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range = false; // freestanding
 
  template<class T>
  concept borrowed_range = /* see description */; // freestanding
 
  template<class T>
  using iterator_t = decltype(ranges::begin(declval<T&>())); // freestanding
  template<range R>
  using sentinel_t = decltype(ranges::end(declval<R&>())); // freestanding
  template<range R>
  using const_iterator_t = decltype(ranges::cbegin(declval<R&>())); // freestanding
  template<range R>
  using const_sentinel_t = decltype(ranges::cend(declval<R&>())); // freestanding
  template<range R>
  using range_difference_t = iter_difference_t<iterator_t<R>>; // freestanding
  template<sized_range R>
  using range_size_t = decltype(ranges::size(declval<R&>())); // freestanding
  template<range R>
  using range_value_t = iter_value_t<iterator_t<R>>; // freestanding
  template<range R>
  using range_reference_t = iter_reference_t<iterator_t<R>>; // freestanding
  template<range R>
  using range_const_reference_t = iter_const_reference_t<iterator_t<R>>; // freestanding
  template<range R>
  using range_rvalue_reference_t = iter_rvalue_reference_t<iterator_t<R>>; // freestanding
  template<range R>
  using range_common_reference_t = iter_common_reference_t<iterator_t<R>>; // freestanding
 
  // sized ranges
  template<class>
  constexpr bool disable_sized_range = false; // freestanding
 
  template<class T>
  concept sized_range = /* see description */; // freestanding
 
  // views
  template<class T>
  constexpr bool enable_view = /* see description */; // freestanding
 
  struct view_base
  {}; // freestanding
 
  template<class T>
  concept view = /* see description */; // freestanding
 
  // other range refinements
  template<class R, class T>
  concept output_range = /* see description */; // freestanding
 
  template<class T>
  concept input_range = /* see description */; // freestanding
 
  template<class T>
  concept forward_range = /* see description */; // freestanding
 
  template<class T>
  concept bidirectional_range = /* see description */; // freestanding
 
  template<class T>
  concept random_access_range = /* see description */; // freestanding
 
  template<class T>
  concept contiguous_range = /* see description */; // freestanding
 
  template<class T>
  concept common_range = /* see description */; // freestanding
 
  template<class T>
  concept viewable_range = /* see description */; // freestanding
 
  template<class T>
  concept constant_range = /* see description */; // freestanding
 
  // class template view_interface
  template<class D>
    requires is_class_v<D> && same_as<D, remove_cv_t<D>>
  class view_interface; // freestanding
 
  // sub-ranges
  enum class subrange_kind : bool
  {
    unsized,
    sized
  }; // freestanding
 
  template<input_or_output_iterator I, sentinel_for<I> S = I, subrange_kind K =
             /* see description */>
    requires(K == subrange_kind::sized || !sized_sentinel_for<S, I>)
  class subrange; // freestanding
 
  template<class I, class S, subrange_kind K>
  constexpr bool enable_borrowed_range<subrange<I, S, K>> = true; // freestanding
 
  template<size_t N, class I, class S, subrange_kind K>
    requires((N == 0 && copyable<I>) || N == 1)
  constexpr auto get(const subrange<I, S, K>& r); // freestanding
 
  template<size_t N, class I, class S, subrange_kind K>
    requires(N < 2)
  constexpr auto get(subrange<I, S, K>&& r); // freestanding
}
 
namespace std {
  using ranges::get; // freestanding
}
 
namespace std::ranges {
  // dangling iterator handling
  struct dangling; // freestanding
 
  // class template elements_of
  template<range R, class Allocator = allocator<byte>>
  struct elements_of;
 
  template<range R>
  using borrowed_iterator_t = /* see description */; // freestanding
 
  template<range R>
  using borrowed_subrange_t = /* see description */; // freestanding
 
  // range conversions
  template<class C, input_range R, class... Args>
    requires(!view<C>)
  constexpr C to(R&& r, Args&&... args); // freestanding
  template<template<class...> class C, input_range R, class... Args>
  constexpr auto to(R&& r, Args&&... args); // freestanding
  template<class C, class... Args>
    requires(!view<C>)
  constexpr auto to(Args&&... args); // freestanding
  template<template<class...> class C, class... Args>
  constexpr auto to(Args&&... args); // freestanding
 
  // empty view
  template<class T>
    requires is_object_v<T>
  class empty_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<empty_view<T>> = true; // freestanding
 
  namespace views {
    template<class T>
    constexpr empty_view<T> empty{}; // freestanding
  }
 
  // single view
  template<move_constructible T>
    requires is_object_v<T>
  class single_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ single = /* unspecified */;
  } // freestanding
 
  template<bool Const, class T>
  using /*maybe-const*/ = conditional_t<Const, const T, T>; // exposition-only
 
  // iota view
  template<weakly_incrementable W, semiregular Bound = unreachable_sentinel_t>
    requires /*weakly-equality-comparable-with*/<W, Bound> && copyable<W>
  class iota_view; // freestanding
 
  template<class W, class Bound>
  constexpr bool enable_borrowed_range<iota_view<W, Bound>> = true; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ iota = /* unspecified */;
  } // freestanding
 
  // repeat view
  template<move_constructible T, semiregular Bound = unreachable_sentinel_t>
    requires         /* see description */
  class repeat_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ repeat = /* unspecified */;
  } // freestanding
 
  // istream view
  template<movable Val, class CharT, class Traits = char_traits<CharT>>
    requires /* see description */
  class basic_istream_view;
  template<class Val>
  using istream_view = basic_istream_view<Val, char>;
  template<class Val>
  using wistream_view = basic_istream_view<Val, wchar_t>;
 
  namespace views {
    template<class T>
    constexpr /* unspecified */ istream = /* unspecified */;
  }
 
  // range adaptor objects
  template<class D>
    requires is_class_v<D> && same_as<D, remove_cv_t<D>>
  class range_adaptor_closure
  {}; // freestanding
 
  // all view
  namespace views {
    inline constexpr /* unspecified */ all = /* unspecified */; // freestanding
 
    template<viewable_range R>
    using all_t = decltype(all(declval<R>())); // freestanding
  }
 
  // ref view
  template<range R>
    requires is_object_v<R>
  class ref_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<ref_view<T>> = true; // freestanding
 
  // owning view
  template<range R>
    requires         /* see description */
  class owning_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<owning_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  // as rvalue view
  template<view V>
    requires input_range<V>
  class as_rvalue_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<as_rvalue_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ as_rvalue = /* unspecified */;
  } // freestanding
 
  // filter view
  template<input_range V, indirect_unary_predicate<iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class filter_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ filter = /* unspecified */;
  } // freestanding
 
  // transform view
  template<input_range V, move_constructible F>
    requires view<V> && is_object_v<F> && regular_invocable<F&, range_reference_t<V>> &&
             /*can-reference*/<invoke_result_t<F&, range_reference_t<V>>>
  class transform_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ transform = /* unspecified */;
  } // freestanding
 
  // take view
  template<view>
  class take_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<take_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ take = /* unspecified */;
  } // freestanding
 
  // take while view
  template<view V, class Pred>
    requires input_range<V> && is_object_v<Pred> &&
             indirect_unary_predicate<const Pred, iterator_t<V>>
  class take_while_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ take_while = /* unspecified */;
  } // freestanding
 
  // drop view
  template<view V>
  class drop_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<drop_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ drop = /* unspecified */;
  } // freestanding
 
  // drop while view
  template<view V, class Pred>
    requires input_range<V> && is_object_v<Pred> &&
             indirect_unary_predicate<const Pred, iterator_t<V>>
  class drop_while_view; // freestanding
 
  template<class T, class Pred>
  constexpr bool enable_borrowed_range<drop_while_view<T, Pred>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ drop_while = /* unspecified */;
  } // freestanding
 
  // join view
  template<input_range V>
    requires view<V> && input_range<range_reference_t<V>>
  class join_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ join = /* unspecified */;
  } // freestanding
 
  // join with view
  template<input_range V, forward_range Pattern>
    requires /* see description */
  class join_with_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ join_with = /* unspecified */;
  } // freestanding
 
  // lazy split view
  template<class R>
  concept /*tiny-range*/ = /* see description */; // exposition-only
 
  template<input_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>,
                                   iterator_t<Pattern>,
                                   ranges::equal_to> &&
             (forward_range<V> || /*tiny-range*/<Pattern>)
  class lazy_split_view; // freestanding
 
  // split view
  template<forward_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>, iterator_t<Pattern>, ranges::equal_to>
  class split_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ lazy_split = /* unspecified */; // freestanding
    inline constexpr /* unspecified */ split      = /* unspecified */; // freestanding
  }
 
  // concat view
  template<input_range... Views>
    requires /* see description */
  class concat_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ concat = /* unspecified */;
  } // freestanding
 
  // counted view
  namespace views {
    inline constexpr /* unspecified */ counted = /* unspecified */;
  } // freestanding
 
  // common view
  template<view V>
    requires(!common_range<V> && copyable<iterator_t<V>>)
  class common_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<common_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ common = /* unspecified */;
  } // freestanding
 
  // reverse view
  template<view V>
    requires bidirectional_range<V>
  class reverse_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<reverse_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ reverse = /* unspecified */;
  } // freestanding
 
  // as const view
  template<input_range R>
  constexpr auto& /*possibly-const-range*/(R& r) noexcept
  { // exposition-only
    if constexpr (constant_range<const R> && !constant_range<R>) {
      return const_cast<const R&>(r);
    } else {
      return r;
    }
  }
 
  template<view V>
    requires input_range<V>
  class as_const_view; // freestanding
 
  template<class T>
  constexpr bool enable_borrowed_range<as_const_view<T>> = // freestanding
    enable_borrowed_range<T>;
 
  namespace views {
    inline constexpr /* unspecified */ as_const = /* unspecified */;
  } // freestanding
 
  // elements view
  template<input_range V, size_t N>
    requires           /* see description */
  class elements_view; // freestanding
 
  template<class T, size_t N>
  constexpr bool enable_borrowed_range<elements_view<T, N>> = // freestanding
    enable_borrowed_range<T>;
 
  template<class R>
  using keys_view = elements_view<R, 0>; // freestanding
  template<class R>
  using values_view = elements_view<R, 1>; // freestanding
 
  namespace views {
    template<size_t N>
    constexpr /* unspecified */ elements = /* unspecified */; // freestanding
    inline constexpr auto keys           = elements<0>;       // freestanding
    inline constexpr auto values         = elements<1>;       // freestanding
  }
 
  // enumerate view
  template<view V>
    requires            /* see description */
  class enumerate_view; // freestanding
 
  template<class View>
  constexpr bool enable_borrowed_range<enumerate_view<View>> = // freestanding
    enable_borrowed_range<View>;
 
  namespace views {
    inline constexpr /* unspecified */ enumerate = /* unspecified */;
  } // freestanding
 
  // zip view
  template<input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0)
  class zip_view; // freestanding
 
  template<class... Views>
  constexpr bool enable_borrowed_range<zip_view<Views...>> = // freestanding
    (enable_borrowed_range<Views> && ...);
 
  namespace views {
    inline constexpr /* unspecified */ zip = /* unspecified */;
  } // freestanding
 
  // zip transform view
  template<move_constructible F, input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0) && is_object_v<F> &&
            regular_invocable<F&, range_reference_t<Views>...> &&
            /*can-reference*/<invoke_result_t<F&, range_reference_t<Views>...>>
  class zip_transform_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ zip_transform = /* unspecified */;
  } // freestanding
 
  // adjacent view
  template<forward_range V, size_t N>
    requires view<V> && (N > 0)
  class adjacent_view; // freestanding
 
  template<class V, size_t N>
  constexpr bool enable_borrowed_range<adjacent_view<V, N>> = // freestanding
    enable_borrowed_range<V>;
 
  namespace views {
    template<size_t N>
    constexpr /* unspecified */ adjacent = /* unspecified */; // freestanding
    inline constexpr auto pairwise       = adjacent<2>;       // freestanding
  }
 
  // adjacent transform view
  template<forward_range V, move_constructible F, size_t N>
    requires                     /* see description */
  class adjacent_transform_view; // freestanding
 
  namespace views {
    template<size_t N>
    constexpr /* unspecified */ adjacent_transform = /* unspecified */; // freestanding
    inline constexpr auto pairwise_transform = adjacent_transform<2>;   // freestanding
  }
 
  // chunk view
  template<view V>
    requires input_range<V>
  class chunk_view; // freestanding
 
  template<view V>
    requires forward_range<V>
  class chunk_view<V>; // freestanding
 
  template<class V>
  constexpr bool enable_borrowed_range<chunk_view<V>> = // freestanding
    forward_range<V> && enable_borrowed_range<V>;
 
  namespace views {
    inline constexpr /* unspecified */ chunk = /* unspecified */;
  } // freestanding
 
  // slide view
  template<forward_range V>
    requires view<V>
  class slide_view; // freestanding
 
  template<class V>
  constexpr bool enable_borrowed_range<slide_view<V>> = // freestanding
    enable_borrowed_range<V>;
 
  namespace views {
    inline constexpr /* unspecified */ slide = /* unspecified */;
  } // freestanding
 
  // chunk by view
  template<forward_range V, indirect_binary_predicate<iterator_t<V>, iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class chunk_by_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ chunk_by = /* unspecified */;
  } // freestanding
 
  // stride view
  template<input_range V>
    requires view<V>
  class stride_view; // freestanding
 
  template<class V>
  constexpr bool enable_borrowed_range<stride_view<V>> = // freestanding
    enable_borrowed_range<V>;
 
  namespace views {
    inline constexpr /* unspecified */ stride = /* unspecified */;
  } // freestanding
 
  // cartesian product view
  template<input_range First, forward_range... Vs>
    requires(view<First> && ... && view<Vs>)
  class cartesian_product_view; // freestanding
 
  namespace views {
    inline constexpr /* unspecified */ cartesian_product = /* unspecified */;
  } // freestanding
}
 
namespace std {
  namespace views = ranges::views; // freestanding
 
  template<class T>
  struct tuple_size; // freestanding
  template<size_t I, class T>
  struct tuple_element; // freestanding
 
  template<class I, class S, ranges::subrange_kind K>
  struct tuple_size<ranges::subrange<I, S, K>> // freestanding
    : integral_constant<size_t, 2>
  {};
  template<class I, class S, ranges::subrange_kind K>
  struct tuple_element<0, ranges::subrange<I, S, K>>
  { // freestanding
    using type = I;
  };
  template<class I, class S, ranges::subrange_kind K>
  struct tuple_element<1, ranges::subrange<I, S, K>>
  { // freestanding
    using type = S;
  };
  template<class I, class S, ranges::subrange_kind K>
  struct tuple_element<0, const ranges::subrange<I, S, K>>
  { // freestanding
    using type = I;
  };
  template<class I, class S, ranges::subrange_kind K>
  struct tuple_element<1, const ranges::subrange<I, S, K>>
  { // freestanding
    using type = S;
  };
 
  struct from_range_t
  {
    explicit from_range_t() = default;
  };                                          // freestanding
  inline constexpr from_range_t from_range{}; // freestanding
}

```

#### Concept `range`

```
namespace std::ranges {
  template<class T>
  concept range = requires(T& t) {
    ranges::begin(t); // sometimes equality-preserving (see description)
    ranges::end(t);
  };
}

```

#### Concept `borrowed_range`

```
namespace std::ranges {
  template<class T>
  concept borrowed_range =
    range<T> && (is_lvalue_reference_v<T> || enable_borrowed_range<remove_cvref_t<T>>);
}

```

#### Concept `sized_range`

```
namespace std::ranges {
  template<class T>
  concept sized_range = range<T> && requires(T& t) { ranges::size(t); };
}

```

#### Concept `view`

```
namespace std::ranges {
  template<class T>
  constexpr bool /*is-derived-from-view-interface*/ =
    /* see description */; // exposition-only
  template<class T>
  constexpr bool enable_view =
    derived_from<T, view_base> || /*is-derived-from-view-interface*/<T>;
 
  template<class T>
  concept view = range<T> && movable<T> && enable_view<T>;
}

```

#### Concept `output_range`

```
namespace std::ranges {
  template<class R, class T>
  concept output_range = range<R> && output_iterator<iterator_t<R>, T>;
}

```

#### Concept `input_range`

```
namespace std::ranges {
  template<class T>
  concept input_range = range<T> && input_iterator<iterator_t<T>>;
}

```

#### Concept `forward_range`

```
namespace std::ranges {
  template<class T>
  concept forward_range = input_range<T> && forward_iterator<iterator_t<T>>;
}

```

#### Concept `bidirectional_range`

```
namespace std::ranges {
  template<class T>
  concept bidirectional_range = forward_range<T> && bidirectional_iterator<iterator_t<T>>;
}

```

#### Concept `random_access_range`

```
namespace std::ranges {
  template<class T>
  concept random_access_range =
    bidirectional_range<T> && random_access_iterator<iterator_t<T>>;
}

```

#### Concept `contiguous_range`

```
namespace std::ranges {
  template<class T>
  concept contiguous_range =
    random_access_range<T> && contiguous_iterator<iterator_t<T>> && requires(T& t) {
      {
        ranges::data(t)
      } -> same_as<add_pointer_t<range_reference_t<T>>>;
    };
}

```

#### Concept `common_range`

```
namespace std::ranges {
  template<class T>
  concept common_range = range<T> && same_as<iterator_t<T>, sentinel_t<T>>;
}

```

#### Concept `viewable_range`

```
namespace std::ranges {
  template<class T>
  concept viewable_range =
    range<T> && ((view<remove_cvref_t<T>> && constructible_from<remove_cvref_t<T>, T>) ||
                 (!view<remove_cvref_t<T>> &&
                  (is_lvalue_reference_v<T> ||
                   (movable<remove_reference_t<T>> && !/*is-initializer-list*/<T>))));
}

```

#### Concept `constant_range`

```
namespace std::ranges {
  template<class T>
  concept constant_range = input_range<T> && /*constant-iterator*/<iterator_t<T>>;
}

```

#### Helper concepts

Note: The concepts in this section are only for exposition and are not part of the interface.

```
namespace std::ranges { // unspecified, for name lookup only
  template<class R>
  concept /*simple-view*/ = // exposition-only
    view<R> && range<const R> && same_as<iterator_t<R>, iterator_t<const R>> &&
    same_as<sentinel_t<R>, sentinel_t<const R>>;
 
  template<class I>
  concept /*has-arrow*/ = // exposition-only
    input_iterator<I> && (is_pointer_v<I> || requires(I i) { i.operator->(); });
 
  template<class T, class U>
  concept /*different-from*/ = // exposition-only
    !same_as<remove_cvref_t<T>, remove_cvref_t<U>>;
 
  template<class R>
  concept /*range-with-movable-references*/ = // exposition-only
    input_range<R> && move_constructible<range_reference_t<R>> &&
    move_constructible<range_rvalue_reference_t<R>>;
}

```

#### Class template std::ranges::view_interface

```
namespace std::ranges {
  template<class D>
    requires is_class_v<D> && same_as<D, remove_cv_t<D>>
  class view_interface
  {
  private:
    constexpr D& /*derived*/() noexcept
    { // exposition-only
      return static_cast<D&>(*this);
    }
    constexpr const D& /*derived*/() const noexcept
    { // exposition-only
      return static_cast<const D&>(*this);
    }
 
  public:
    constexpr bool empty()
      requires sized_range<D> || forward_range<D>
    {
      if constexpr (sized_range<D>)
        return ranges::size(/*derived*/()) == 0;
      else
        return ranges::begin(/*derived*/()) == ranges::end(/*derived*/());
    }
    constexpr bool empty() const
      requires sized_range<const D> || forward_range<const D>
    {
      if constexpr (sized_range<const D>)
        return ranges::size(/*derived*/()) == 0;
      else
        return ranges::begin(/*derived*/()) == ranges::end(/*derived*/());
    }
 
    constexpr auto cbegin()
      requires input_range<D>
    {
      return ranges::cbegin(/*derived*/());
    }
    constexpr auto cbegin() const
      requires input_range<const D>
    {
      return ranges::cbegin(/*derived*/());
    }
    constexpr auto cend()
      requires input_range<D>
    {
      return ranges::cend(/*derived*/());
    }
    constexpr auto cend() const
      requires input_range<const D>
    {
      return ranges::cend(/*derived*/());
    }
 
    constexpr explicit operator bool()
      requires requires { ranges::empty(/*derived*/()); }
    {
      return !ranges::empty(/*derived*/());
    }
    constexpr explicit operator bool() const
      requires requires { ranges::empty(/*derived*/()); }
    {
      return !ranges::empty(/*derived*/());
    }
 
    constexpr auto data()
      requires contiguous_iterator<iterator_t<D>>
    {
      return to_address(ranges::begin(/*derived*/()));
    }
    constexpr auto data() const
      requires range<const D> && contiguous_iterator<iterator_t<const D>>
    {
      return to_address(ranges::begin(/*derived*/()));
    }
 
    constexpr auto size()
      requires forward_range<D> && sized_sentinel_for<sentinel_t<D>, iterator_t<D>>
    {
      return /*to-unsigned-like*/(ranges::end(/*derived*/()) -
                                  ranges::begin(/*derived*/()));
    }
    constexpr auto size() const
      requires forward_range<const D> &&
               sized_sentinel_for<sentinel_t<const D>, iterator_t<const D>>
    {
      return /*to-unsigned-like*/(ranges::end(/*derived*/()) -
                                  ranges::begin(/*derived*/()));
    }
 
    constexpr decltype(auto) front()
      requires forward_range<D>;
    constexpr decltype(auto) front() const
      requires forward_range<const D>;
 
    constexpr decltype(auto) back()
      requires bidirectional_range<D> && common_range<D>;
    constexpr decltype(auto) back() const
      requires bidirectional_range<const D> && common_range<const D>;
 
    template<random_access_range R = D>
    constexpr decltype(auto) operator[](range_difference_t<R> n)
    {
      return ranges::begin(/*derived*/())[n];
    }
    template<random_access_range R = const D>
    constexpr decltype(auto) operator[](range_difference_t<R> n) const
    {
      return ranges::begin(/*derived*/())[n];
    }
  };
}

```

#### Class template std::ranges::subrange

```
namespace std::ranges {
  template<class From, class To>
  concept /*uses-nonqualification-pointer-conversion*/ = // exposition-only
    is_pointer_v<From> && is_pointer_v<To> &&
    !convertible_to<remove_pointer_t<From> (*)[], remove_pointer_t<To> (*)[]>;
 
  template<class From, class To>
  concept /*convertible-to-non-slicing*/ = // exposition-only
    convertible_to<From, To> &&
    !/*uses-nonqualification-pointer-conversion*/<decay_t<From>, decay_t<To>>;
 
  template<class T, class U, class V>
  concept /*pair-like-convertible-from*/ = // exposition-only
    !range<T> && !is_reference_v<T> && /*pair-like*/<T> && constructible_from<T, U, V> &&
    /*convertible-to-non-slicing*/<U, tuple_element_t<0, T>> &&
    convertible_to<V, tuple_element_t<1, T>>;
 
  template<input_or_output_iterator I,
           sentinel_for<I> S = I,
           subrange_kind K =
             sized_sentinel_for<S, I> ? subrange_kind::sized : subrange_kind::unsized>
    requires(K == subrange_kind::sized || !sized_sentinel_for<S, I>)
  class subrange : public view_interface<subrange<I, S, K>>
  {
  private:
    static constexpr bool /*StoreSize*/ = // exposition-only
      K == subrange_kind::sized && !sized_sentinel_for<S, I>;
    I /*begin_*/ = I(); // exposition-only
    S /*end_*/   = S(); // exposition-only
    /*make-unsigned-like-t*/<iter_difference_t<I>> /*size_*/ =
      0; // exposition-only present only
         // if StoreSize is true
  public:
    subrange()
      requires default_initializable<I>
    = default;
 
    constexpr subrange(/*convertible-to-non-slicing*/<I> auto i, S s)
      requires(!/*StoreSize*/);
 
    constexpr subrange(/*convertible-to-non-slicing*/<I> auto i,
                       S s,
                       /*make-unsigned-like-t*/<iter_difference_t<I>> n)
      requires(K == subrange_kind::sized);
 
    template</*different-from*/<subrange> R>
      requires borrowed_range<R> && /*convertible-to-non-slicing*/<iterator_t<R>, I> &&
               convertible_to<sentinel_t<R>, S>
               constexpr subrange(R&& r)
                 requires(!/*StoreSize*/ || sized_range<R>);
 
    template<borrowed_range R>
      requires /*convertible-to-non-slicing*/<iterator_t<R>, I> &&
               convertible_to<sentinel_t<R>, S>
               constexpr subrange(R&& r, /*make-unsigned-like-t*/<iter_difference_t<I>> n)
                 requires(K == subrange_kind::sized)
      : subrange{ ranges::begin(r), ranges::end(r), n }
    {
    }
 
    template</*different-from*/<subrange> PairLike>
      requires /*pair-like-convertible-from*/<PairLike, const I&, const S&>
    constexpr operator PairLike() const;
 
    constexpr I begin() const
      requires copyable<I>;
    constexpr I begin()
      requires(!copyable<I>);
    constexpr S end() const;
 
    constexpr bool empty() const;
    constexpr /*make-unsigned-like-t*/<iter_difference_t<I>> size() const
      requires(K == subrange_kind::sized);
 
    constexpr subrange next(iter_difference_t<I> n = 1) const&
      requires forward_iterator<I>;
    constexpr subrange next(iter_difference_t<I> n = 1) &&;
    constexpr subrange prev(iter_difference_t<I> n = 1) const
      requires bidirectional_iterator<I>;
    constexpr subrange& advance(iter_difference_t<I> n);
  };
 
  template<input_or_output_iterator I, sentinel_for<I> S>
  subrange(I, S) -> subrange<I, S>;
 
  template<input_or_output_iterator I, sentinel_for<I> S>
  subrange(I, S, /*make-unsigned-like-t*/<iter_difference_t<I>>)
    -> subrange<I, S, subrange_kind::sized>;
 
  template<borrowed_range R>
  subrange(R&&)
    -> subrange<iterator_t<R>,
                sentinel_t<R>,
                (sized_range<R> || sized_sentinel_for<sentinel_t<R>, iterator_t<R>>)
                  ? subrange_kind::sized
                  : subrange_kind::unsized>;
 
  template<borrowed_range R>
  subrange(R&&, /*make-unsigned-like-t*/<range_difference_t<R>>)
    -> subrange<iterator_t<R>, sentinel_t<R>, subrange_kind::sized>;
}

```

#### Class std::ranges::dangling

```
namespace std::ranges {
  struct dangling
  {
    constexpr dangling() noexcept = default;
    constexpr dangling(auto&&...) noexcept {}
  };
}

```

#### Class std::ranges::elements_of

```
namespace std::ranges {
  template<range R, class Allocator = allocator<byte>>
  struct elements_of
  {
    [[no_unique_address]] R range;
    [[no_unique_address]] Allocator allocator = Allocator();
  };
 
  template<class R, class Allocator = allocator<byte>>
  elements_of(R&&, Allocator = Allocator()) -> elements_of<R&&, Allocator>;
}

```

#### Class template std::ranges::empty_view

```
namespace std::ranges {
  template<class T>
    requires is_object_v<T>
  class empty_view : public view_interface<empty_view<T>>
  {
  public:
    static constexpr T* begin() noexcept { return nullptr; }
    static constexpr T* end() noexcept { return nullptr; }
    static constexpr T* data() noexcept { return nullptr; }
    static constexpr size_t size() noexcept { return 0; }
    static constexpr bool empty() noexcept { return true; }
  };
}

```

#### Class template std::ranges::single_view

```
namespace std::ranges {
  template<move_constructible T>
    requires is_object_v<T>
  class single_view : public view_interface<single_view<T>>
  {
  private:
    /*movable-box*/<T> /*value_*/; // exposition-only
 
  public:
    single_view()
      requires default_initializable<T>
    = default;
    constexpr explicit single_view(const T& t)
      requires copy_constructible<T>;
    constexpr explicit single_view(T&& t);
    template<class... Args>
      requires constructible_from<T, Args...>
    constexpr explicit single_view(in_place_t, Args&&... args);
 
    constexpr T* begin() noexcept;
    constexpr const T* begin() const noexcept;
    constexpr T* end() noexcept;
    constexpr const T* end() const noexcept;
    static constexpr bool empty() noexcept;
    static constexpr size_t size() noexcept;
    constexpr T* data() noexcept;
    constexpr const T* data() const noexcept;
  };
 
  template<class T>
  single_view(T) -> single_view<T>;
}

```

#### Class template std::ranges::iota_view

```
namespace std::ranges {
  template<class I>
  concept /*decrementable*/ = /* see description */; // exposition-only
 
  template<class I>
  concept /*advanceable*/ = /* see description */; // exposition-only
 
  template<weakly_incrementable W, semiregular Bound = unreachable_sentinel_t>
    requires /*weakly-equality-comparable-with*/<W, Bound> && copyable<W>
  class iota_view : public view_interface<iota_view<W, Bound>>
  {
  private:
    // class iota_view::iterator
    struct /*iterator*/; // exposition-only
 
    // class iota_view::sentinel
    struct /*sentinel*/; // exposition-only
 
    W /*value_*/     = W();     // exposition-only
    Bound /*bound_*/ = Bound(); // exposition-only
 
  public:
    iota_view()
      requires default_initializable<W>
    = default;
    constexpr explicit iota_view(W value);
    constexpr explicit iota_view(type_identity_t<W> value, type_identity_t<Bound> bound);
    constexpr explicit iota_view(/*iterator*/ first, /* see description */ last);
 
    constexpr /*iterator*/ begin() const;
    constexpr auto end() const;
    constexpr /*iterator*/ end() const
      requires same_as<W, Bound>;
 
    constexpr bool empty() const;
    constexpr auto size() const
      requires /* see description */;
  };
 
  template<class W, class Bound>
    requires(!/*is-integer-like*/<W> || !/*is-integer-like*/<Bound> ||
             (/*is-signed-integer-like*/<W> == /*is-signed-integer-like*/<Bound>))
  iota_view(W, Bound) -> iota_view<W, Bound>;
}

```

#### Class template std::ranges::iota_view::iterator

```
namespace std::ranges {
  template<weakly_incrementable W, semiregular Bound>
    requires /*weakly-equality-comparable-with*/<W, Bound> && copyable<W>
  struct iota_view<W, Bound>::/*iterator*/
  {
  private:
    W /*value_*/ = W(); // exposition-only
 
  public:
    using iterator_concept = /* see description */;
    using iterator_category =
      input_iterator_tag; // present only if W models incrementable and
                          // IOTA-DIFF-T(W) is an integral type
    using value_type      = W;
    using difference_type = /*IOTA-DIFF-T*/(W);
 
    /*iterator*/()
      requires default_initializable<W>
    = default;
    constexpr explicit /*iterator*/(W value);
 
    constexpr W operator*() const noexcept(is_nothrow_copy_constructible_v<W>);
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires incrementable<W>;
 
    constexpr /*iterator*/& operator--()
      requires /*decrementable*/<W>;
    constexpr /*iterator*/ operator--(int)
      requires /*decrementable*/<W>;
 
    constexpr /*iterator*/& operator+=(difference_type n)
      requires /*advanceable*/<W>;
    constexpr /*iterator*/& operator-=(difference_type n)
      requires /*advanceable*/<W>;
    constexpr W operator[](difference_type n) const
      requires /*advanceable*/<W>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable<W>;
 
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires totally_ordered<W>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires totally_ordered<W>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires totally_ordered<W>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires totally_ordered<W>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires totally_ordered<W> && three_way_comparable<W>;
 
    friend constexpr /*iterator*/ operator+(/*iterator*/ i, difference_type n)
      requires /*advanceable*/<W>;
    friend constexpr /*iterator*/ operator+(difference_type n, /*iterator*/ i)
      requires /*advanceable*/<W>;
 
    friend constexpr /*iterator*/ operator-(/*iterator*/ i, difference_type n)
      requires /*advanceable*/<W>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires /*advanceable*/<W>;
  };
}

```

#### Class template std::ranges::iota_view::sentinel

```
namespace std::ranges {
  template<weakly_incrementable W, semiregular Bound>
    requires /*weakly-equality-comparable-with*/<W, Bound> && copyable<W>
  struct iota_view<W, Bound>::/*sentinel*/
  {
  private:
    Bound /*bound_*/ = Bound(); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(Bound bound);
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*sentinel*/& y);
 
    friend constexpr iter_difference_t<W> operator-(const /*iterator*/& x,
                                                    const /*sentinel*/& y)
      requires sized_sentinel_for<Bound, W>;
    friend constexpr iter_difference_t<W> operator-(const /*sentinel*/& x,
                                                    const /*iterator*/& y)
      requires sized_sentinel_for<Bound, W>;
  };
}

```

#### Class template std::ranges::repeat_view

```
namespace std::ranges {
  template<class T>
  concept /*integer-like-with-usable-difference-type*/ = // exposition-only
    /*is-signed-integer-like*/<T> || (/*is-integer-like*/<T> && weakly_incrementable<T>);
 
  template<move_constructible T, semiregular Bound = unreachable_sentinel_t>
    requires(is_object_v<T> && same_as<T, remove_cv_t<T>> &&
             (/*integer-like-with-usable-difference-type*/<Bound> ||
              same_as<Bound, unreachable_sentinel_t>))
  class repeat_view : public view_interface<repeat_view<T, Bound>>
  {
  private:
    // class repeat_view::iterator
    struct /*iterator*/; // exposition-only
 
    /*movable-box*/<T> /*value_*/; // exposition-only
    Bound /*bound_*/ = Bound();    // exposition-only
 
  public:
    repeat_view()
      requires default_initializable<T>
    = default;
 
    constexpr explicit repeat_view(const T& value, Bound bound = Bound())
      requires copy_constructible<T>;
    constexpr explicit repeat_view(T&& value, Bound bound = Bound());
    template<class... TArgs, class... BoundArgs>
      requires constructible_from<T, TArgs...> && constructible_from<Bound, BoundArgs...>
    constexpr explicit repeat_view(piecewise_construct_t,
                                   tuple<TArgs...> value_args,
                                   tuple<BoundArgs...> bound_args = tuple<>{});
 
    constexpr /*iterator*/ begin() const;
    constexpr /*iterator*/ end() const
      requires(!same_as<Bound, unreachable_sentinel_t>);
    constexpr unreachable_sentinel_t end() const noexcept;
 
    constexpr auto size() const
      requires(!same_as<Bound, unreachable_sentinel_t>);
  };
 
  template<class T, class Bound = unreachable_sentinel_t>
  repeat_view(T, Bound = Bound()) -> repeat_view<T, Bound>;
}

```

#### Class template std::ranges::repeat_view::iterator

```
namespace std::ranges {
  template<move_constructible T, semiregular Bound>
    requires(is_object_v<T> && same_as<T, remove_cv_t<T>> &&
             (/*integer-like-with-usable-difference-type*/<Bound> ||
              same_as<Bound, unreachable_sentinel_t>))
  class repeat_view<T, Bound>::/*iterator*/
  {
  private:
    using /*index-type*/ = // exposition-only
      conditional_t<same_as<Bound, unreachable_sentinel_t>, ptrdiff_t, Bound>;
    const T* /*value_*/         = nullptr;          // exposition-only
    /*index-type*/ /*current_*/ = /*index-type*/(); // exposition-only
 
    constexpr explicit /*iterator*/(
      const T* value,
      /*index-type*/ b = /*index-type*/()); // exposition-only
 
  public:
    using iterator_concept  = random_access_iterator_tag;
    using iterator_category = random_access_iterator_tag;
    using value_type        = T;
    using difference_type   = /* see description */;
 
    /*iterator*/()          = default;
 
    constexpr const T& operator*() const noexcept;
 
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
 
    constexpr /*iterator*/& operator--();
    constexpr /*iterator*/ operator--(int);
 
    constexpr /*iterator*/& operator+=(difference_type n);
    constexpr /*iterator*/& operator-=(difference_type n);
    constexpr const T& operator[](difference_type n) const noexcept;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y);
 
    friend constexpr /*iterator*/ operator+(/*iterator*/ i, difference_type n);
    friend constexpr /*iterator*/ operator+(difference_type n, /*iterator*/ i);
 
    friend constexpr /*iterator*/ operator-(/*iterator*/ i, difference_type n);
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y);
  };
}

```

#### Class template std::ranges::basic_istream_view

```
namespace std::ranges {
  template<class Val, class CharT, class Traits>
  concept /*stream-extractable*/ = // exposition-only
    requires(basic_istream<CharT, Traits>& is, Val& t) { is >> t; };
 
  template<movable Val, class CharT, class Traits = char_traits<CharT>>
    requires default_initializable<Val> && /*stream-extractable*/<Val, CharT, Traits>
  class basic_istream_view : public view_interface<basic_istream_view<Val, CharT, Traits>>
  {
  public:
    constexpr explicit basic_istream_view(basic_istream<CharT, Traits>& stream);
 
    constexpr auto begin()
    {
      */*stream_*/ >> /*value_*/;
      return /*iterator*/{ *this };
    }
 
    constexpr default_sentinel_t end() const noexcept;
 
  private:
    // class basic_istream_view::iterator
    struct /*iterator*/;                       // exposition-only
    basic_istream<CharT, Traits>* /*stream_*/; // exposition-only
    Val /*value_*/ = Val();                    // exposition-only
  };
}

```

#### Class template std::ranges::basic_istream_view::iterator

```
namespace std::ranges {
  template<movable Val, class CharT, class Traits>
    requires default_initializable<Val> && /*stream-extractable*/<Val, CharT, Traits>
  class basic_istream_view<Val, CharT, Traits>::/*iterator*/
  {
  public:
    using iterator_concept = input_iterator_tag;
    using difference_type  = ptrdiff_t;
    using value_type       = Val;
 
    constexpr explicit /*iterator*/(basic_istream_view& parent) noexcept;
 
    /*iterator*/(const /*iterator*/&)            = delete;
    /*iterator*/(/*iterator*/&&)                 = default;
 
    /*iterator*/& operator=(const /*iterator*/&) = delete;
    /*iterator*/& operator=(/*iterator*/&&)      = default;
 
    /*iterator*/& operator++();
    void operator++(int);
 
    Val& operator*() const;
 
    friend bool operator==(const /*iterator*/& x, default_sentinel_t);
 
  private:
    basic_istream_view* /*parent_*/; // exposition-only
  };
}

```

#### Class template std::ranges::ref_view

```
namespace std::ranges {
  template<range R>
    requires is_object_v<R>
  class ref_view : public view_interface<ref_view<R>>
  {
  private:
    R* /*r_*/; // exposition-only
 
  public:
    template</*different-from*/<ref_view> T>
      requires /* see description */
      constexpr
    ref_view(T&& t);
 
    constexpr R& base() const { return */*r_*/; }
 
    constexpr iterator_t<R> begin() const { return ranges::begin(*/*r_*/); }
    constexpr sentinel_t<R> end() const { return ranges::end(*/*r_*/); }
 
    constexpr bool empty() const
      requires requires { ranges::empty(*/*r_*/); }
    {
      return ranges::empty(*/*r_*/);
    }
 
    constexpr auto size() const
      requires sized_range<R>
    {
      return ranges::size(*/*r_*/);
    }
 
    constexpr auto data() const
      requires contiguous_range<R>
    {
      return ranges::data(*/*r_*/);
    }
  };
 
  template<class R>
  ref_view(R&) -> ref_view<R>;
}

```

#### Class template std::ranges::owning_view

```
namespace std::ranges {
  template<range R>
    requires movable<R> && (!/*is-initializer-list*/<R>)
  class owning_view : public view_interface<owning_view<R>>
  {
  private:
    R /*r_*/ = R(); // exposition-only
 
  public:
    owning_view()
      requires default_initializable<R>
    = default;
    constexpr owning_view(R&& t);
 
    owning_view(owning_view&&)            = default;
    owning_view& operator=(owning_view&&) = default;
 
    constexpr R& base() & noexcept { return /*r_*/; }
    constexpr const R& base() const& noexcept { return /*r_*/; }
    constexpr R&& base() && noexcept { return std::move(/*r_*/); }
    constexpr const R&& base() const&& noexcept { return std::move(/*r_*/); }
 
    constexpr iterator_t<R> begin() { return ranges::begin(/*r_*/); }
    constexpr sentinel_t<R> end() { return ranges::end(/*r_*/); }
 
    constexpr auto begin() const
      requires range<const R>
    {
      return ranges::begin(/*r_*/);
    }
    constexpr auto end() const
      requires range<const R>
    {
      return ranges::end(/*r_*/);
    }
 
    constexpr bool empty()
      requires requires { ranges::empty(/*r_*/); }
    {
      return ranges::empty(/*r_*/);
    }
    constexpr bool empty() const
      requires requires { ranges::empty(/*r_*/); }
    {
      return ranges::empty(/*r_*/);
    }
 
    constexpr auto size()
      requires sized_range<R>
    {
      return ranges::size(/*r_*/);
    }
    constexpr auto size() const
      requires sized_range<const R>
    {
      return ranges::size(/*r_*/);
    }
 
    constexpr auto data()
      requires contiguous_range<R>
    {
      return ranges::data(/*r_*/);
    }
    constexpr auto data() const
      requires contiguous_range<const R>
    {
      return ranges::data(/*r_*/);
    }
  };
}

```

#### Class template std::ranges::as_rvalue_view

```
namespace std::ranges {
  template<view V>
    requires input_range<V>
  class as_rvalue_view : public view_interface<as_rvalue_view<V>>
  {
    V /*base_*/ = V(); // exposition-only
 
  public:
    as_rvalue_view()
      requires default_initializable<V>
    = default;
    constexpr explicit as_rvalue_view(V base);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return move_iterator(ranges::begin(/*base_*/));
    }
    constexpr auto begin() const
      requires range<const V>
    {
      return move_iterator(ranges::begin(/*base_*/));
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (common_range<V>) {
        return move_iterator(ranges::end(/*base_*/));
      } else {
        return move_sentinel(ranges::end(/*base_*/));
      }
    }
    constexpr auto end() const
      requires range<const V>
    {
      if constexpr (common_range<const V>) {
        return move_iterator(ranges::end(/*base_*/));
      } else {
        return move_sentinel(ranges::end(/*base_*/));
      }
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
  };
 
  template<class R>
  as_rvalue_view(R&&) -> as_rvalue_view<views::all_t<R>>;
}

```

#### Class template std::ranges::filter_view

```
namespace std::ranges {
  template<input_range V, indirect_unary_predicate<iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class filter_view : public view_interface<filter_view<V, Pred>>
  {
  private:
    V /*base_*/ = V();               // exposition-only
    /*movable-box*/<Pred> /*pred_*/; // exposition-only
 
    // class filter_view::iterator
    class /*iterator*/; // exposition-only
 
    // class filter_view::sentinel
    class /*sentinel*/; // exposition-only
 
  public:
    filter_view()
      requires default_initializable<V> && default_initializable<Pred>
    = default;
    constexpr explicit filter_view(V base, Pred pred);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr const Pred& pred() const;
 
    constexpr /*iterator*/ begin();
    constexpr auto end()
    {
      if constexpr (common_range<V>)
        return /*iterator*/{ *this, ranges::end(/*base_*/) };
      else
        return /*sentinel*/{ *this };
    }
  };
 
  template<class R, class Pred>
  filter_view(R&&, Pred) -> filter_view<views::all_t<R>, Pred>;
}

```

#### Class template std::ranges::filter_view::iterator

```
namespace std::ranges {
  template<input_range V, indirect_unary_predicate<iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class filter_view<V, Pred>::/*iterator*/
  {
  private:
    iterator_t<V> /*current_*/ = iterator_t<V>(); // exposition-only
    filter_view* /*parent_*/   = nullptr;         // exposition-only
 
  public:
    using iterator_concept  = /* see description */;
    using iterator_category = /* see description */; // not always present
    using value_type        = range_value_t<V>;
    using difference_type   = range_difference_t<V>;
 
    /*iterator*/()
      requires default_initializable<iterator_t<V>>
    = default;
    constexpr /*iterator*/(filter_view& parent, iterator_t<V> current);
 
    constexpr const iterator_t<V>& base() const& noexcept;
    constexpr iterator_t<V> base() &&;
    constexpr range_reference_t<V> operator*() const;
    constexpr iterator_t<V> operator->() const
      requires /*has-arrow*/<iterator_t<V>> && copyable<iterator_t<V>>;
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range<V>;
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range<V>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range<V>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable<iterator_t<V>>;
 
    friend constexpr range_rvalue_reference_t<V> iter_move(
      const /*iterator*/& i) noexcept(noexcept(ranges::iter_move(i./*current_*/)));
 
    friend constexpr void iter_swap(
      const /*iterator*/& x,
      const /*iterator*/& y) noexcept(noexcept(ranges::iter_swap(x./*current_*/,
                                                                 y./*current_*/)))
      requires indirectly_swappable<iterator_t<V>>;
  };
}

```

#### Class template std::ranges::filter_view::sentinel

```
namespace std::ranges {
  template<input_range V, indirect_unary_predicate<iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class filter_view<V, Pred>::/*sentinel*/
  {
  private:
    sentinel_t<V> /*end_*/ = sentinel_t<V>(); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(filter_view& parent);
 
    constexpr sentinel_t<V> base() const;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*sentinel*/& y);
  };
}

```

#### Class template std::ranges::transform_view

```
namespace std::ranges {
  template<input_range V, move_constructible F>
    requires view<V> && is_object_v<F> && regular_invocable<F&, range_reference_t<V>> &&
             /*can-reference*/<invoke_result_t<F&, range_reference_t<V>>>
  class transform_view : public view_interface<transform_view<V, F>>
  {
  private:
    // class template transform_view::iterator
    template<bool>
    struct /*iterator*/; // exposition-only
 
    // class template transform_view::sentinel
    template<bool>
    struct /*sentinel*/; // exposition-only
 
    V /*base_*/ = V();           // exposition-only
    /*movable-box*/<F> /*fun_*/; // exposition-only
 
  public:
    transform_view()
      requires default_initializable<V> && default_initializable<F>
    = default;
    constexpr explicit transform_view(V base, F fun);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr /*iterator*/<false> begin();
    constexpr /*iterator*/<true> begin() const
      requires range<const V> && regular_invocable<const F&, range_reference_t<const V>>;
 
    constexpr /*sentinel*/<false> end();
    constexpr /*iterator*/<false> end()
      requires common_range<V>;
    constexpr /*sentinel*/<true> end() const
      requires range<const V> && regular_invocable<const F&, range_reference_t<const V>>;
    constexpr /*iterator*/<true> end() const
      requires common_range<const V> &&
               regular_invocable<const F&, range_reference_t<const V>>;
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
  };
 
  template<class R, class F>
  transform_view(R&&, F) -> transform_view<views::all_t<R>, F>;
}

```

#### Class template std::ranges::transform_view::iterator

```
namespace std::ranges {
  template<input_range V, move_constructible F>
    requires view<V> && is_object_v<F> && regular_invocable<F&, range_reference_t<V>> &&
             /*can-reference*/<invoke_result_t<F&, range_reference_t<V>>>
  template<bool Const>
  class transform_view<V, F>::/*iterator*/
  {
  private:
    using /*Parent*/ = /*maybe-const*/<Const, transform_view>;  // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, V>;               // exposition-only
    iterator_t</*Base*/> /*current_*/ = iterator_t</*Base*/>(); // exposition-only
    /*Parent*/* /*parent_*/           = nullptr;                // exposition-only
 
  public:
    using iterator_concept  = /* see description */;
    using iterator_category = /* see description */; // not always present
    using value_type        = remove_cvref_t<
      invoke_result_t</*maybe-const*/<Const, F>&, range_reference_t</*Base*/>>>;
    using difference_type = range_difference_t</*Base*/>;
 
    /*iterator*/()
      requires default_initializable<iterator_t</*Base*/>>
    = default;
    constexpr /*iterator*/(/*Parent*/& parent, iterator_t</*Base*/> current);
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>>;
 
    constexpr const iterator_t</*Base*/>& base() const& noexcept;
    constexpr iterator_t</*Base*/> base() &&;
 
    constexpr decltype(auto) operator*() const
      noexcept(noexcept(invoke(*/*parent_*/->/*fun_*/, */*current_*/)))
    {
      return invoke(*/*parent_*/->/*fun_*/, */*current_*/);
    }
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range</*Base*/>;
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type n)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type n)
      requires random_access_range</*Base*/>;
 
    constexpr decltype(auto) operator[](difference_type n) const
      requires random_access_range</*Base*/>
    {
      return invoke(*/*parent_*/->/*fun_*/, /*current_*/[n]);
    }
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable<iterator_t</*Base*/>>;
 
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> && three_way_comparable<iterator_t</*Base*/>>
    ;
 
    friend constexpr /*iterator*/ operator+(/*iterator*/ i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, /*iterator*/ i)
      requires random_access_range</*Base*/>;
 
    friend constexpr /*iterator*/ operator-(/*iterator*/ i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for<iterator_t</*Base*/>, iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::transform_view::sentinel

```
namespace std::ranges {
  template<input_range V, move_constructible F>
    requires view<V> && is_object_v<F> && regular_invocable<F&, range_reference_t<V>> &&
             /*can-reference*/<invoke_result_t<F&, range_reference_t<V>>>
  template<bool Const>
  class transform_view<V, F>::/*sentinel*/
  {
  private:
    using /*Parent*/ = /*maybe-const*/<Const, transform_view>; // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, V>;              // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();    // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(sentinel_t</*Base*/> end);
    constexpr /*sentinel*/(/*sentinel*/<!Const> i)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr sentinel_t</*Base*/> base() const;
 
    template<bool OtherConst>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*iterator*/<OtherConst>& x,
      const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*sentinel*/& y,
      const /*iterator*/<OtherConst>& x);
  };
}

```

#### Class template std::ranges::take_view

```
namespace std::ranges {
  template<view V>
  class take_view : public view_interface<take_view<V>>
  {
  private:
    V /*base_*/                      = V(); // exposition-only
    range_difference_t<V> /*count_*/ = 0;   // exposition-only
 
    // class template take_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
  public:
    take_view()
      requires default_initializable<V>
    = default;
    constexpr explicit take_view(V base, range_difference_t<V> count);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (sized_range<V>) {
        if constexpr (random_access_range<V>) {
          return ranges::begin(/*base_*/);
        } else {
          auto sz = range_difference_t<V>(size());
          return counted_iterator(ranges::begin(/*base_*/), sz);
        }
      } else if constexpr (sized_sentinel_for<sentinel_t<V>, iterator_t<V>>) {
        auto it = ranges::begin(/*base_*/);
        auto sz = std::min(/*count_*/, ranges::end(/*base_*/) - it);
        return counted_iterator(std::move(it), sz);
      } else {
        return counted_iterator(ranges::begin(/*base_*/), /*count_*/);
      }
    }
 
    constexpr auto begin() const
      requires range<const V>
    {
      if constexpr (sized_range<const V>) {
        if constexpr (random_access_range<const V>) {
          return ranges::begin(/*base_*/);
        } else {
          auto sz = range_difference_t<const V>(size());
          return counted_iterator(ranges::begin(/*base_*/), sz);
        }
      } else if constexpr (sized_sentinel_for<sentinel_t<const V>, iterator_t<const V>>) {
        auto it = ranges::begin(/*base_*/);
        auto sz = std::min(/*count_*/, ranges::end(/*base_*/) - it);
        return counted_iterator(std::move(it), sz);
      } else {
        return counted_iterator(ranges::begin(/*base_*/), /*count_*/);
      }
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (sized_range<V>) {
        if constexpr (random_access_range<V>)
          return ranges::begin(/*base_*/) + range_difference_t<V>(size());
        else
          return default_sentinel;
      } else if constexpr (sized_sentinel_for<sentinel_t<V>, iterator_t<V>>) {
        return default_sentinel;
      } else {
        return /*sentinel*/<false>{ ranges::end(/*base_*/) };
      }
    }
 
    constexpr auto end() const
      requires range<const V>
    {
      if constexpr (sized_range<const V>) {
        if constexpr (random_access_range<const V>)
          return ranges::begin(/*base_*/) + range_difference_t<const V>(size());
        else
          return default_sentinel;
      } else if constexpr (sized_sentinel_for<sentinel_t<const V>, iterator_t<const V>>) {
        return default_sentinel;
      } else {
        return /*sentinel*/<true>{ ranges::end(/*base_*/) };
      }
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      auto n = ranges::size(/*base_*/);
      return ranges::min(n, static_cast<decltype(n)>(/*count_*/));
    }
 
    constexpr auto size() const
      requires sized_range<const V>
    {
      auto n = ranges::size(/*base_*/);
      return ranges::min(n, static_cast<decltype(n)>(/*count_*/));
    }
  };
 
  template<class R>
  take_view(R&&, range_difference_t<R>) -> take_view<views::all_t<R>>;
}

```

#### Class template std::ranges::take_view::sentinel

```
namespace std::ranges {
  template<view V>
  template<bool Const>
  class take_view<V>::/*sentinel*/
  {
  private:
    using /*Base*/ = /*maybe-const*/<Const, V>; // exposition-only
    template<bool OtherConst>
    using /*CI*/ =
      counted_iterator<iterator_t</*maybe-const*/<OtherConst, V>>>; // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();         // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(sentinel_t</*Base*/> end);
    constexpr /*sentinel*/(/*sentinel*/<!Const> s)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr sentinel_t</*Base*/> base() const;
 
    friend constexpr bool operator==(const /*CI*/<Const>& y, const /*sentinel*/& x);
 
    template<bool OtherConst = !Const>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*CI*/<OtherConst>& y, const /*sentinel*/& x);
  };
}

```

#### Class template std::ranges::take_while_view

```
namespace std::ranges {
  template<view V, class Pred>
    requires input_range<V> && is_object_v<Pred> &&
             indirect_unary_predicate<const Pred, iterator_t<V>>
  class take_while_view : public view_interface<take_while_view<V, Pred>>
  {
    // class template take_while_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
    V /*base_*/ = V();               // exposition-only
    /*movable-box*/<Pred> /*pred_*/; // exposition-only
 
  public:
    take_while_view()
      requires default_initializable<V> && default_initializable<Pred>
    = default;
    constexpr explicit take_while_view(V base, Pred pred);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr const Pred& pred() const;
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return ranges::begin(/*base_*/);
    }
 
    constexpr auto begin() const
      requires range<const V> && indirect_unary_predicate<const Pred, iterator_t<const V>>
    {
      return ranges::begin(/*base_*/);
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      return /*sentinel*/<false>(ranges::end(/*base_*/), addressof(*/*pred_*/));
    }
 
    constexpr auto end() const
      requires range<const V> && indirect_unary_predicate<const Pred, iterator_t<const V>>
    {
      return /*sentinel*/<true>(ranges::end(/*base_*/), addressof(*/*pred_*/));
    }
  };
 
  template<class R, class Pred>
  take_while_view(R&&, Pred) -> take_while_view<views::all_t<R>, Pred>;
}

```

#### Class template std::ranges::take_while_view::sentinel

```
namespace std::ranges {
  template<view V, class Pred>
    requires input_range<V> && is_object_v<Pred> &&
             indirect_unary_predicate<const Pred, iterator_t<V>>
  template<bool Const>
  class take_while_view<V, Pred>::/*sentinel*/
  {
    using /*Base*/                = /*maybe-const*/<Const, V>; // exposition-only
 
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>(); // exposition-only
    const Pred* /*pred_*/         = nullptr;                // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(sentinel_t</*Base*/> end, const Pred* pred);
    constexpr /*sentinel*/(/*sentinel*/<!Const> s)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr sentinel_t</*Base*/> base() const { return /*end_*/; }
 
    friend constexpr bool operator==(const iterator_t</*Base*/>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst = !Const>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const iterator_t</*maybe-const*/<OtherConst, V>>& x,
                                     const /*sentinel*/& y);
  };
}

```

#### Class template std::ranges::drop_view

```
namespace std::ranges {
  template<view V>
  class drop_view : public view_interface<drop_view<V>>
  {
  public:
    drop_view()
      requires default_initializable<V>
    = default;
    constexpr explicit drop_view(V base, range_difference_t<V> count);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!(/*simple-view*/<V> && random_access_range<const V> &&
                 sized_range<const V>));
    constexpr auto begin() const
      requires random_access_range<const V> && sized_range<const V>;
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      return ranges::end(/*base_*/);
    }
 
    constexpr auto end() const
      requires range<const V>
    {
      return ranges::end(/*base_*/);
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      const auto s = ranges::size(/*base_*/);
      const auto c = static_cast<decltype(s)>(/*count_*/);
      return s < c ? 0 : s - c;
    }
 
    constexpr auto size() const
      requires sized_range<const V>
    {
      const auto s = ranges::size(/*base_*/);
      const auto c = static_cast<decltype(s)>(/*count_*/);
      return s < c ? 0 : s - c;
    }
 
  private:
    V /*base_*/                      = V(); // exposition-only
    range_difference_t<V> /*count_*/ = 0;   // exposition-only
  };
 
  template<class R>
  drop_view(R&&, range_difference_t<R>) -> drop_view<views::all_t<R>>;
}

```

#### Class template std::ranges::drop_while_view

```
namespace std::ranges {
  template<view V, class Pred>
    requires input_range<V> && is_object_v<Pred> &&
             indirect_unary_predicate<const Pred, iterator_t<V>>
  class drop_while_view : public view_interface<drop_while_view<V, Pred>>
  {
  public:
    drop_while_view()
      requires default_initializable<V> && default_initializable<Pred>
    = default;
    constexpr explicit drop_while_view(V base, Pred pred);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr const Pred& pred() const;
 
    constexpr auto begin();
 
    constexpr auto end() { return ranges::end(/*base_*/); }
 
  private:
    V /*base_*/ = V();               // exposition-only
    /*movable-box*/<Pred> /*pred_*/; // exposition-only
  };
 
  template<class R, class Pred>
  drop_while_view(R&&, Pred) -> drop_while_view<views::all_t<R>, Pred>;
}

```

#### Class template std::ranges::join_view

```
namespace std::ranges {
  template<input_range V>
    requires view<V> && input_range<range_reference_t<V>>
  class join_view : public view_interface<join_view<V>>
  {
  private:
    using /*InnerRng*/ = range_reference_t<V>; // exposition-only
 
    // class template join_view::iterator
    template<bool Const>
    struct /*iterator*/; // exposition-only
 
    // class template join_view::sentinel
    template<bool Const>
    struct /*sentinel*/; // exposition-only
 
    V /*base_*/ = V(); // exposition-only
 
    /*non-propagating-cache*/<iterator_t<V>> /*outer_*/; // exposition-only present only
                                                         // when !forward_range<V>
    /*non-propagating-cache*/<remove_cv_t</*InnerRng*/>>
      /*inner_*/; // exposition-only present only
                  // if is_reference_v<InnerRng> is false
 
  public:
    join_view()
      requires default_initializable<V>
    = default;
    constexpr explicit join_view(V base);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
    {
      if constexpr (forward_range<V>) {
        constexpr bool use_const = /*simple-view*/<V> && is_reference_v</*InnerRng*/>;
        return /*iterator*/<use_const>{ *this, ranges::begin(/*base_*/) };
      } else {
        /*outer_*/ = ranges::begin(/*base_*/);
        return /*iterator*/<false>{ *this };
      }
    }
 
    constexpr auto begin() const
      requires forward_range<const V> && is_reference_v<range_reference_t<const V>> &&
               input_range<range_reference_t<const V>>
    {
      return /*iterator*/<true>{ *this, ranges::begin(/*base_*/) };
    }
 
    constexpr auto end()
    {
      if constexpr (forward_range<V> && is_reference_v</*InnerRng*/> &&
                    forward_range</*InnerRng*/> && common_range<V> &&
                    common_range</*InnerRng*/>)
        return /*iterator*/</*simple-view*/<V>>{ *this, ranges::end(/*base_*/) };
      else
        return /*sentinel*/</*simple-view*/<V>>{ *this };
    }
 
    constexpr auto end() const
      requires forward_range<const V> && is_reference_v<range_reference_t<const V>> &&
               input_range<range_reference_t<const V>>
    {
      if constexpr (forward_range<range_reference_t<const V>> && common_range<const V> &&
                    common_range<range_reference_t<const V>>)
        return /*iterator*/<true>{ *this, ranges::end(/*base_*/) };
      else
        return /*sentinel*/<true>{ *this };
    }
  };
 
  template<class R>
  explicit join_view(R&&) -> join_view<views::all_t<R>>;
}

```

#### Class template std::ranges::join_view::iterator

```
namespace std::ranges {
  template<input_range V>
    requires view<V> && input_range<range_reference_t<V>>
  template<bool Const>
  struct join_view<V>::/*iterator*/
  {
  private:
    using /*Parent*/    = /*maybe-const*/<Const, join_view>;       // exposition-only
    using /*Base*/      = /*maybe-const*/<Const, V>;               // exposition-only
    using /*OuterIter*/ = iterator_t</*Base*/>;                    // exposition-only
    using /*InnerIter*/ = iterator_t<range_reference_t</*Base*/>>; // exposition-only
 
    static constexpr bool /*ref-is-glvalue*/ = // exposition-only
      is_reference_v<range_reference_t</*Base*/>>;
 
    /*OuterIter*/ /*outer_*/ = /*OuterIter*/(); // exposition-only present only
                                                // if Base models forward_range
    optional</*InnerIter*/> /*inner_*/;         // exposition-only
    /*Parent*/* /*parent_*/ = nullptr;          // exposition-only
 
    constexpr void /*satisfy*/(); // exposition-only
 
    constexpr /*OuterIter*/& /*outer*/();             // exposition-only
    constexpr const /*OuterIter*/& /*outer*/() const; // exposition-only
 
    constexpr /*iterator*/(/*Parent*/& parent, /*OuterIter*/ outer)
      requires forward_range</*Base*/>; // exposition-only
    constexpr explicit /*iterator*/(/*Parent*/& parent)
      requires(!forward_range</*Base*/>); // exposition-only
 
  public:
    using iterator_concept  = /* see description */;
    using iterator_category = /* see description */; // not always present
    using value_type        = range_value_t<range_reference_t</*Base*/>>;
    using difference_type   = /* see description */;
 
    /*iterator*/()          = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, /*OuterIter*/> &&
               convertible_to<iterator_t</*InnerRng*/>, /*InnerIter*/>;
 
    constexpr decltype(auto) operator*() const { return **/*inner_*/; }
 
    constexpr /*InnerIter*/ operator->() const
      requires /*has-arrow*/</*InnerIter*/> && copyable</*InnerIter*/>;
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires /*ref-is-glvalue*/
               && forward_range</*Base*/> && forward_range<range_reference_t</*Base*/>>;
 
    constexpr /*iterator*/& operator--()
      requires /*ref-is-glvalue*/ && bidirectional_range</*Base*/> &&
               bidirectional_range<range_reference_t</*Base*/>> &&
               common_range<range_reference_t</*Base*/>>;
 
    constexpr /*iterator*/ operator--(int)
      requires /*ref-is-glvalue*/ && bidirectional_range</*Base*/> &&
               bidirectional_range<range_reference_t</*Base*/>> &&
               common_range<range_reference_t</*Base*/>>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires /*ref-is-glvalue*/ && forward_range</*Base*/> &&
               equality_comparable<iterator_t<range_reference_t</*Base*/>>>;
 
    friend constexpr decltype(auto) iter_move(const /*iterator*/& i) noexcept(
      noexcept(ranges::iter_move(*i./*inner_*/)))
    {
      return ranges::iter_move(*i./*inner_*/);
    }
 
    friend constexpr void iter_swap(
      const /*iterator*/& x,
      const /*iterator*/& y) noexcept(noexcept(ranges::iter_swap(*x./*inner_*/,
                                                                 *y./*inner_*/)))
      requires indirectly_swappable</*InnerIter*/>;
  };
}

```

#### Class template std::ranges::join_view::sentinel

```
namespace std::ranges {
  template<input_range V>
    requires view<V> && input_range<range_reference_t<V>>
  template<bool Const>
  struct join_view<V>::/*sentinel*/
  {
  private:
    using /*Parent*/              = /*maybe-const*/<Const, join_view>; // exposition-only
    using /*Base*/                = /*maybe-const*/<Const, V>;         // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();            // exposition-only
 
  public:
    /*sentinel*/() = default;
 
    constexpr explicit /*sentinel*/(/*Parent*/& parent);
    constexpr /*sentinel*/(/*sentinel*/<!Const> s)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    template<bool OtherConst>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
  };
}

```

#### Class template std::ranges::join_with_view

```
namespace std::ranges {
  template<class R>
  concept /*bidirectional-common*/ =
    bidirectional_range<R> && common_range<R>; // exposition-only
 
  template<input_range V, forward_range Pattern>
    requires view<V> && input_range<range_reference_t<V>> && view<Pattern> &&
             /*concatable*/<range_reference_t<V>, Pattern>
  class join_with_view : public view_interface<join_with_view<V, Pattern>>
  {
    using /*InnerRng*/ = range_reference_t<V>; // exposition-only
 
    V /*base_*/        = V();                               // exposition-only
    /*non-propagating-cache*/<iterator_t<V>> /*outer-it_*/; // exposition-only present
                                                            // only when !forward_range<V>
    /*non-propagating-cache*/<remove_cv_t</*InnerRng*/>>
      /*inner_*/;                     // exposition-only present only
                                      // if is_reference_v<InnerRng> is false
    Pattern /*pattern_*/ = Pattern(); // exposition-only
 
    // class template join_with_view::iterator
    template<bool Const>
    struct /*iterator*/; // exposition-only
 
    // class template join_with_view::sentinel
    template<bool Const>
    struct /*sentinel*/; // exposition-only
 
  public:
    join_with_view()
      requires default_initializable<V> && default_initializable<Pattern>
    = default;
 
    constexpr explicit join_with_view(V base, Pattern pattern);
 
    template<input_range R>
      requires constructible_from<V, views::all_t<R>> &&
               constructible_from<Pattern, single_view<range_value_t</*InnerRng*/>>>
    constexpr explicit join_with_view(R&& r, range_value_t</*InnerRng*/> e);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
    {
      if constexpr (forward_range<V>) {
        constexpr bool use_const =
          /*simple-view*/<V> && is_reference_v</*InnerRng*/> && /*simple-view*/<Pattern>;
        return /*iterator*/<use_const>{ *this, ranges::begin(/*base_*/) };
      } else {
        /*outer-it_*/ = ranges::begin(/*base_*/);
        return /*iterator*/<false>{ *this };
      }
    }
    constexpr auto begin() const
      requires forward_range<const V> && forward_range<const Pattern> &&
               is_reference_v<range_reference_t<const V>> &&
               input_range<range_reference_t<const V>> &&
               /*concatable*/<range_reference_t<const V>, const Pattern>
    {
      return /*iterator*/<true>{ *this, ranges::begin(/*base_*/) };
    }
 
    constexpr auto end()
    {
      if constexpr (forward_range<V> && is_reference_v</*InnerRng*/> &&
                    forward_range</*InnerRng*/> && common_range<V> &&
                    common_range</*InnerRng*/>)
        return /*iterator*/ < /*simple-view*/<V> &&
               /*simple-view*/ < Pattern >> { *this, ranges::end(/*base_*/) };
      else
        return /*sentinel*/ < /*simple-view*/<V> &&
               /*simple-view*/ < Pattern >> { *this };
    }
    constexpr auto end() const
      requires forward_range<const V> && forward_range<const Pattern> &&
               is_reference_v<range_reference_t<const V>> &&
               input_range<range_reference_t<const V>> &&
               /*concatable*/<range_reference_t<const V>, const Pattern>
    {
      using InnerConstRng = range_reference_t<const V>;
      if constexpr (forward_range<InnerConstRng> && common_range<const V> &&
                    common_range<InnerConstRng>)
        return /*iterator*/<true>{ *this, ranges::end(/*base_*/) };
      else
        return /*sentinel*/<true>{ *this };
    }
  };
 
  template<class R, class P>
  join_with_view(R&&, P&&) -> join_with_view<views::all_t<R>, views::all_t<P>>;
 
  template<input_range R>
  join_with_view(R&&, range_value_t<range_reference_t<R>>)
    -> join_with_view<views::all_t<R>, single_view<range_value_t<range_reference_t<R>>>>;
}

```

#### Class template std::ranges::join_with_view::iterator

```
namespace std::ranges {
  template<input_range V, forward_range Pattern>
    requires view<V> && input_range<range_reference_t<V>> && view<Pattern> &&
             /*concatable*/<range_reference_t<V>, Pattern>
  template<bool Const>
  class join_with_view<V, Pattern>::/*iterator*/
  {
    using /*Parent*/      = /*maybe-const*/<Const, join_with_view>; // exposition-only
    using /*Base*/        = /*maybe-const*/<Const, V>;              // exposition-only
    using /*InnerBase*/   = range_reference_t</*Base*/>;            // exposition-only
    using /*PatternBase*/ = /*maybe-const*/<Const, Pattern>;        // exposition-only
 
    using /*OuterIter*/   = iterator_t</*Base*/>;        // exposition-only
    using /*InnerIter*/   = iterator_t</*InnerBase*/>;   // exposition-only
    using /*PatternIter*/ = iterator_t</*PatternBase*/>; // exposition-only
 
    static constexpr bool /*ref-is-glvalue*/ =
      is_reference_v</*InnerBase*/>; // exposition-only
 
    /*Parent*/* /*parent_*/     = nullptr;                 // exposition-only
    /*OuterIter*/ /*outer-it_*/ = /*OuterIter*/();         // exposition-only present only
                                                           // if Base models forward_range
    variant</*PatternIter*/, /*InnerIter*/> /*inner-it_*/; // exposition-only
 
    constexpr /*iterator*/(/*Parent*/& parent, /*OuterIter*/ outer)
      requires forward_range</*Base*/>; // exposition-only
    constexpr explicit /*iterator*/(/*Parent*/& parent)
      requires(!forward_range</*Base*/>);             // exposition-only
    constexpr /*OuterIter*/& /*outer*/();             // exposition-only
    constexpr const /*OuterIter*/& /*outer*/() const; // exposition-only
    constexpr auto& /*update-inner*/();               // exposition-only
    constexpr auto& /*get-inner*/();                  // exposition-only
    constexpr void /*satisfy*/();                     // exposition-only
 
  public:
    using iterator_concept  = /* see description */;
    using iterator_category = /* see description */; // not always present
    using value_type        = /* see description */;
    using difference_type   = /* see description */;
 
    /*iterator*/()          = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, /*OuterIter*/> &&
               convertible_to<iterator_t</*InnerRng*/>, /*InnerIter*/> &&
               convertible_to<iterator_t<Pattern>, /*PatternIter*/>;
 
    constexpr decltype(auto) operator*() const;
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires /*ref-is-glvalue*/
               && forward_iterator</*OuterIter*/> && forward_iterator</*InnerIter*/>;
 
    constexpr /*iterator*/& operator--()
      requires /*ref-is-glvalue*/ && bidirectional_range</*Base*/> &&
               /*bidirectional-common*/</*InnerBase*/> &&
               /*bidirectional-common*/</*PatternBase*/>;
    constexpr /*iterator*/ operator--(int)
      requires /*ref-is-glvalue*/ && bidirectional_range</*Base*/> &&
               /*bidirectional-common*/</*InnerBase*/> &&
               /*bidirectional-common*/</*PatternBase*/>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires /*ref-is-glvalue*/
               && forward_range</*Base*/> && equality_comparable</*InnerIter*/>;
 
    friend constexpr decltype(auto) iter_move(const /*iterator*/& x)
    {
      using rvalue_reference =
        common_reference_t<iter_rvalue_reference_t</*InnerIter*/>,
                           iter_rvalue_reference_t</*PatternIter*/>>;
      return visit<rvalue_reference>(ranges::iter_move, x./*inner-it_*/);
    }
 
    friend constexpr void iter_swap(const /*iterator*/& x, const /*iterator*/& y)
      requires indirectly_swappable</*InnerIter*/, /*PatternIter*/>
    {
      visit(ranges::iter_swap, x./*inner-it_*/, y./*inner-it_*/);
    }
  };
}

```

#### Class template std::ranges::join_with_view::sentinel

```
namespace std::ranges {
  template<input_range V, forward_range Pattern>
    requires view<V> && input_range<range_reference_t<V>> && view<Pattern> &&
             /*concatable*/<range_reference_t<V>, Pattern>
  template<bool Const>
  class join_with_view<V, Pattern>::/*sentinel*/
  {
    using /*Parent*/ = /*maybe-const*/<Const, join_with_view>; // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, V>;              // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();    // exposition-only
 
    constexpr explicit /*sentinel*/(/*Parent*/& parent); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr /*sentinel*/(/*sentinel*/<!Const> s)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    template<bool OtherConst>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
  };
}

```

#### Class template std::ranges::lazy_split_view

```
namespace std::ranges {
  template<auto>
  struct /*require-constant*/; // exposition-only
 
  template<class R>
  concept /*tiny-range*/ = // exposition-only
    sized_range<R> && requires {
      typename /*require-constant*/<remove_reference_t<R>::size()>;
    } && (remove_reference_t<R>::size() <= 1);
 
  template<input_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>,
                                   iterator_t<Pattern>,
                                   ranges::equal_to> &&
             (forward_range<V> || /*tiny-range*/<Pattern>)
  class lazy_split_view : public view_interface<lazy_split_view<V, Pattern>>
  {
  private:
    V /*base_*/          = V();       // exposition-only
    Pattern /*pattern_*/ = Pattern(); // exposition-only
 
    /*non-propagating-cache*/<iterator_t<V>> /*current_*/; // exposition-only present only
                                                           // if forward_range<V> is false
 
    // class template lazy_split_view::outer-iterator
    template<bool>
    struct /*outer-iterator*/; // exposition-only
 
    // class template lazy_split_view::inner-iterator
    template<bool>
    struct /*inner-iterator*/; // exposition-only
 
  public:
    lazy_split_view()
      requires default_initializable<V> && default_initializable<Pattern>
    = default;
    constexpr explicit lazy_split_view(V base, Pattern pattern);
 
    template<input_range R>
      requires constructible_from<V, views::all_t<R>> &&
               constructible_from<Pattern, single_view<range_value_t<R>>>
    constexpr explicit lazy_split_view(R&& r, range_value_t<R> e);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
    {
      if constexpr (forward_range<V>) {
        return /*outer-iterator*/ < /*simple-view*/<V> &&
               /*simple-view*/ < Pattern >> { *this, ranges::begin(/*base_*/) };
      } else {
        /*current_*/ = ranges::begin(/*base_*/);
        return /*outer-iterator*/<false>{ *this };
      }
    }
 
    constexpr auto begin() const
      requires forward_range<V> && forward_range<const V>
    {
      return /*outer-iterator*/<true>{ *this, ranges::begin(/*base_*/) };
    }
 
    constexpr auto end()
      requires forward_range<V> && common_range<V>
    {
      return /*outer-iterator*/ < /*simple-view*/<V> &&
             /*simple-view*/ < Pattern >> { *this, ranges::end(/*base_*/) };
    }
 
    constexpr auto end() const
    {
      if constexpr (forward_range<V> && forward_range<const V> && common_range<const V>)
        return /*outer-iterator*/<true>{ *this, ranges::end(/*base_*/) };
      else
        return default_sentinel;
    }
  };
 
  template<class R, class P>
  lazy_split_view(R&&, P&&) -> lazy_split_view<views::all_t<R>, views::all_t<P>>;
 
  template<input_range R>
  lazy_split_view(R&&, range_value_t<R>)
    -> lazy_split_view<views::all_t<R>, single_view<range_value_t<R>>>;
}

```

#### Class template std::ranges::lazy_split_view::outer_iterator

```
namespace std::ranges {
  template<input_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>,
                                   iterator_t<Pattern>,
                                   ranges::equal_to> &&
             (forward_range<V> || /*tiny-range*/<Pattern>)
  template<bool Const>
  struct lazy_split_view<V, Pattern>::/*outer-iterator*/
  {
  private:
    using /*Parent*/        = /*maybe-const*/<Const, lazy_split_view>; // exposition-only
    using /*Base*/          = /*maybe-const*/<Const, V>;               // exposition-only
    /*Parent*/* /*parent_*/ = nullptr;                                 // exposition-only
 
    iterator_t</*Base*/> /*current_*/ =
      iterator_t</*Base*/>(); // exposition-only present only
                              // if V models forward_range
 
    bool /*trailing-empty_*/ = false; // exposition-only
 
  public:
    using iterator_concept =
      conditional_t<forward_range</*Base*/>, forward_iterator_tag, input_iterator_tag>;
 
    using iterator_category = input_iterator_tag; // present only if Base
                                                  // models forward_range
 
    // class lazy_split_view::outer-iterator::value_type
    struct value_type;
    using difference_type = range_difference_t</*Base*/>;
 
    /*outer-iterator*/()  = default;
    constexpr explicit /*outer-iterator*/(/*Parent*/& parent)
      requires(!forward_range</*Base*/>);
    constexpr /*outer-iterator*/(/*Parent*/& parent, iterator_t</*Base*/> current)
      requires forward_range</*Base*/>;
    constexpr /*outer-iterator*/(/*outer-iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>>;
 
    constexpr value_type operator*() const;
 
    constexpr /*outer-iterator*/& operator++();
    constexpr decltype(auto) operator++(int)
    {
      if constexpr (forward_range</*Base*/>) {
        auto tmp = *this;
        ++*this;
        return tmp;
      } else
        ++*this;
    }
 
    friend constexpr bool operator==(const /*outer-iterator*/& x,
                                     const /*outer-iterator*/& y)
      requires forward_range</*Base*/>;
 
    friend constexpr bool operator==(const /*outer-iterator*/& x, default_sentinel_t);
  };
}

```

#### Class template std::ranges::lazy_split_view::outer_iterator::value_type

```
namespace std::ranges {
  template<input_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>,
                                   iterator_t<Pattern>,
                                   ranges::equal_to> &&
             (forward_range<V> || /*tiny-range*/<Pattern>)
  template<bool Const>
  struct lazy_split_view<V, Pattern>::/*outer-iterator*/<Const>::value_type
    : view_interface<value_type>
  {
  private:
    /*outer-iterator*/ /*i_*/ = /*outer-iterator*/(); // exposition-only
 
    constexpr explicit value_type(/*outer-iterator*/ i); // exposition-only
 
  public:
    constexpr /*inner-iterator*/<Const> begin() const;
    constexpr default_sentinel_t end() const noexcept;
  };
}

```

#### Class template std::ranges::lazy_split_view::inner_iterator

```
namespace std::ranges {
  template<input_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>,
                                   iterator_t<Pattern>,
                                   ranges::equal_to> &&
             (forward_range<V> || /*tiny-range*/<Pattern>)
  template<bool Const>
  struct lazy_split_view<V, Pattern>::/*inner-iterator*/
  {
  private:
    using /*Base*/                   = /*maybe-const*/<Const, V>;   // exposition-only
    /*outer-iterator*/<Const> /*i_*/ = /*outer-iterator*/<Const>(); // exposition-only
    bool /*incremented_*/            = false;                       // exposition-only
 
  public:
    using iterator_concept  = typename /*outer-iterator*/<Const>::iterator_concept;
 
    using iterator_category = /* see description */; // present only if Base
                                                     // models forward_range
    using value_type      = range_value_t</*Base*/>;
    using difference_type = range_difference_t</*Base*/>;
 
    /*inner-iterator*/()  = default;
    constexpr explicit /*inner-iterator*/(/*outer-iterator*/<Const> i);
 
    constexpr const iterator_t</*Base*/>& base() const& noexcept;
    constexpr iterator_t</*Base*/> base() &&
        requires forward_range<V>;
 
    constexpr decltype(auto) operator*() const { return */*i_*/./*current*/; }
 
    constexpr /*inner-iterator*/& operator++();
    constexpr decltype(auto) operator++(int)
    {
      if constexpr (forward_range</*Base*/>) {
        auto tmp = *this;
        ++*this;
        return tmp;
      } else
        ++*this;
    }
 
    friend constexpr bool operator==(const /*inner-iterator*/& x,
                                     const /*inner-iterator*/& y)
      requires forward_range</*Base*/>;
 
    friend constexpr bool operator==(const /*inner-iterator*/& x, default_sentinel_t);
 
    friend constexpr decltype(auto) iter_move(const /*inner-iterator*/& i) noexcept(
      noexcept(ranges::iter_move(i./*i_*/./*current*/)))
    {
      return ranges::iter_move(i./*i_*/./*current*/);
    }
 
    friend constexpr void
    iter_swap(const /*inner-iterator*/& x, const /*inner-iterator*/& y) noexcept(
      noexcept(ranges::iter_swap(x./*i_*/./*current*/, y./*i_*/./*current*/)))
      requires indirectly_swappable<iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::split_view

```
namespace std::ranges {
  template<forward_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>, iterator_t<Pattern>, ranges::equal_to>
  class split_view : public view_interface<split_view<V, Pattern>>
  {
  private:
    V /*base_*/          = V();       // exposition-only
    Pattern /*pattern_*/ = Pattern(); // exposition-only
 
    // class split_view::iterator
    struct /*iterator*/; // exposition-only
 
    // class split_view::sentinel
    struct /*sentinel*/; // exposition-only
 
  public:
    split_view()
      requires default_initializable<V> && default_initializable<Pattern>
    = default;
    constexpr explicit split_view(V base, Pattern pattern);
 
    template<forward_range R>
      requires constructible_from<V, views::all_t<R>> &&
               constructible_from<Pattern, single_view<range_value_t<R>>>
    constexpr explicit split_view(R&& r, range_value_t<R> e);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr /*iterator*/ begin();
 
    constexpr auto end()
    {
      if constexpr (common_range<V>) {
        return /*iterator*/{ *this, ranges::end(/*base_*/), {} };
      } else {
        return /*sentinel*/{ *this };
      }
    }
 
    constexpr subrange<iterator_t<V>> /*find-next*/(iterator_t<V>); // exposition-only
  };
 
  template<class R, class P>
  split_view(R&&, P&&) -> split_view<views::all_t<R>, views::all_t<P>>;
 
  template<forward_range R>
  split_view(R&&, range_value_t<R>)
    -> split_view<views::all_t<R>, single_view<range_value_t<R>>>;
}

```

#### Class template std::ranges::split_view::iterator

```
namespace std::ranges {
  template<forward_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>, iterator_t<Pattern>, ranges::equal_to>
  class split_view<V, Pattern>::/*iterator*/
  {
  private:
    split_view* /*parent_*/           = nullptr;                   // exposition-only
    iterator_t<V> /*cur_*/            = iterator_t<V>();           // exposition-only
    subrange<iterator_t<V>> /*next_*/ = subrange<iterator_t<V>>(); // exposition-only
    bool /*trailing-empty_*/          = false;                     // exposition-only
 
  public:
    using iterator_concept  = forward_iterator_tag;
    using iterator_category = input_iterator_tag;
    using value_type        = subrange<iterator_t<V>>;
    using difference_type   = range_difference_t<V>;
 
    /*iterator*/()          = default;
    constexpr /*iterator*/(split_view& parent,
                           iterator_t<V> current,
                           subrange<iterator_t<V>> next);
 
    constexpr iterator_t<V> base() const;
    constexpr value_type operator*() const;
 
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
  };
}

```

#### Class template std::ranges::split_view::sentinel

```
namespace std::ranges {
  template<forward_range V, forward_range Pattern>
    requires view<V> && view<Pattern> &&
             indirectly_comparable<iterator_t<V>, iterator_t<Pattern>, ranges::equal_to>
  struct split_view<V, Pattern>::/*sentinel*/
  {
  private:
    sentinel_t<V> /*end_*/ = sentinel_t<V>(); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(split_view& parent);
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*sentinel*/& y);
  };
}

```

#### Class template std::ranges::concat

```
namespace std::ranges {
  template<class... Rs>
  using /*concat-reference-t*/ =
    common_reference_t<range_reference_t<Rs>...>; // exposition-only
  template<class... Rs>
  using /*concat-value-t*/ = common_type_t<range_value_t<Rs>...>; // exposition-only
  template<class... Rs>
  using /*concat-rvalue-reference-t*/ = // exposition-only
    common_reference_t<range_rvalue_reference_t<Rs>...>;
 
  template<class... Rs>
  concept /*concat-indirectly-readable*/ = /* see description */; // exposition-only
  template<class... Rs>
  concept /*concatable*/ = /* see description */; // exposition-only
  template<bool Const, class... Rs>
  concept /*concat-is-random-access*/ = /* see description */; // exposition-only
  template<bool Const, class... Rs>
  concept /*concat-is-bidirectional*/ = /* see description */; // exposition-only
 
  template<input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0) && /*concatable*/<Views...>
  class concat_view : public view_interface<concat_view<Views...>>
  {
    tuple<Views...> /*views_*/; // exposition-only
 
    // class template concat_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
  public:
    constexpr concat_view() = default;
    constexpr explicit concat_view(Views... views);
 
    constexpr /*iterator*/<false> begin()
      requires(!(/*simple-view*/<Views> && ...));
    constexpr /*iterator*/<true> begin() const
      requires(range<const Views> && ...) && /*concatable*/<const Views...>;
 
    constexpr auto end()
      requires(!(/*simple-view*/<Views> && ...));
    constexpr auto end() const
      requires(range<const Views> && ...) && /*concatable*/<const Views...>;
 
    constexpr auto size()
      requires(sized_range<Views> && ...);
    constexpr auto size() const
      requires(sized_range<const Views> && ...);
  };
 
  template<class... R>
  concat_view(R&&...) -> concat_view<views::all_t<R>...>;
}

```

#### Class template std::ranges::concat::iterator

```
namespace std::ranges {
  template<input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0) && /*concatable*/<Views...>
  template<bool Const>
  class concat_view<Views...>::/*iterator*/
  {
  public:
    using iterator_category = /* see description */; // not always present
    using iterator_concept  = /* see description */;
    using value_type        = /*concat-value-t*/</*maybe-const*/<Const, Views>...>;
    using difference_type =
      common_type_t<range_difference_t</*maybe-const*/<Const, Views>>...>;
 
  private:
    using /*base-iter*/ = // exposition-only
      variant<iterator_t</*maybe-const*/<Const, Views>>...>;
 
    /*maybe-const*/<Const, concat_view>* /*parent_*/ = nullptr; // exposition-only
    /*base-iter*/ /*it_*/;                                      // exposition-only
 
    template<size_t N>
    constexpr void /*satisfy*/(); // exposition-only
    template<size_t N>
    constexpr void /*prev*/(); // exposition-only
 
    template<size_t N>
    constexpr void /*advance-fwd*/(difference_type offset, // exposition-only
                                   difference_type steps);
    template<size_t N>
    constexpr void /*advance-bwd*/(difference_type offset, // exposition-only
                                   difference_type steps);
 
    template<class... Args>
    constexpr explicit /*iterator*/(
      /*maybe-const*/<Const, concat_view>* parent, // exposition-only
      Args&&... args)
      requires constructible_from</*base-iter*/, Args&&...>;
 
  public:
    /*iterator*/() = default;
 
    constexpr /*iterator*/(iterator<!Const> i)
      requires Const &&
               (convertible_to<iterator_t<Views>, iterator_t<const Views>> && ...);
 
    constexpr decltype(auto) operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires /*all-forward*/<Const, Views...>;
    constexpr /*iterator*/& operator--()
      requires /*concat-is-bidirectional*/<Const, Views...>;
    constexpr /*iterator*/ operator--(int)
      requires /*concat-is-bidirectional*/<Const, Views...>;
    constexpr /*iterator*/& operator+=(difference_type n)
      requires /*concat-is-random-access*/<Const, Views...>;
    constexpr /*iterator*/& operator-=(difference_type n)
      requires /*concat-is-random-access*/<Const, Views...>;
    constexpr decltype(auto) operator[](difference_type n) const
      requires /*concat-is-random-access*/<Const, Views...>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires(equality_comparable<iterator_t</*maybe-const*/<Const, Views>>> && ...);
    friend constexpr bool operator==(const /*iterator*/& it, default_sentinel_t);
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires(/*all-random-access*/<Const, Views...> &&
               (three_way_comparable<iterator_t</*maybe-const*/<Const, Views>>> && ...));
    friend constexpr /*iterator*/ operator+(const /*iterator*/& it, difference_type n)
      requires /*concat-is-random-access*/<Const, Views...>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& it)
      requires /*concat-is-random-access*/<Const, Views...>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& it, difference_type n)
      requires /*concat-is-random-access*/<Const, Views...>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires /*concat-is-random-access*/<Const, Views...>;
    friend constexpr difference_type operator-(const /*iterator*/& x, default_sentinel_t)
      requires /* see description */;
    friend constexpr difference_type operator-(default_sentinel_t, const /*iterator*/& x)
      requires /* see description */;
    friend constexpr decltype(auto) iter_move(const /*iterator*/& it) noexcept(
      /* see description */);
    friend constexpr void iter_swap(const /*iterator*/& x,
                                    const /*iterator*/& y) noexcept(/* see description */)
      requires /* see description */;
  };
}

```

#### Class template std::ranges::common_view

```
namespace std::ranges {
  template<view V>
    requires(!common_range<V> && copyable<iterator_t<V>>)
  class common_view : public view_interface<common_view<V>>
  {
  private:
    V /*base_*/ = V(); // exposition-only
 
  public:
    common_view()
      requires default_initializable<V>
    = default;
 
    constexpr explicit common_view(V r);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (random_access_range<V> && sized_range<V>)
        return ranges::begin(/*base_*/);
      else
        return common_iterator<iterator_t<V>, sentinel_t<V>>(ranges::begin(/*base_*/));
    }
 
    constexpr auto begin() const
      requires range<const V>
    {
      if constexpr (random_access_range<const V> && sized_range<const V>)
        return ranges::begin(/*base_*/);
      else
        return common_iterator<iterator_t<const V>, sentinel_t<const V>>(
          ranges::begin(/*base_*/));
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (random_access_range<V> && sized_range<V>)
        return ranges::begin(/*base_*/) + ranges::distance(/*base_*/);
      else
        return common_iterator<iterator_t<V>, sentinel_t<V>>(ranges::end(/*base_*/));
    }
 
    constexpr auto end() const
      requires range<const V>
    {
      if constexpr (random_access_range<const V> && sized_range<const V>)
        return ranges::begin(/*base_*/) + ranges::distance(/*base_*/);
      else
        return common_iterator<iterator_t<const V>, sentinel_t<const V>>(
          ranges::end(/*base_*/));
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
  };
 
  template<class R>
  common_view(R&&) -> common_view<views::all_t<R>>;
}

```

#### Class template std::ranges::reverse_view

```
namespace std::ranges {
  template<view V>
    requires bidirectional_range<V>
  class reverse_view : public view_interface<reverse_view<V>>
  {
  private:
    V /*base_*/ = V(); // exposition-only
 
  public:
    reverse_view()
      requires default_initializable<V>
    = default;
 
    constexpr explicit reverse_view(V r);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr reverse_iterator<iterator_t<V>> begin();
    constexpr reverse_iterator<iterator_t<V>> begin()
      requires common_range<V>;
    constexpr auto begin() const
      requires common_range<const V>;
 
    constexpr reverse_iterator<iterator_t<V>> end();
    constexpr auto end() const
      requires common_range<const V>;
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
 
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
  };
 
  template<class R>
  reverse_view(R&&) -> reverse_view<views::all_t<R>>;
}

```

#### Class template std::ranges::as_const_view

```
namespace std::ranges {
  template<view V>
    requires input_range<V>
  class as_const_view : public view_interface<as_const_view<V>>
  {
    V /*base_*/ = V(); // exposition-only
 
  public:
    as_const_view()
      requires default_initializable<V>
    = default;
    constexpr explicit as_const_view(V base);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return ranges::cbegin(/*base_*/);
    }
    constexpr auto begin() const
      requires range<const V>
    {
      return ranges::cbegin(/*base_*/);
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      return ranges::cend(/*base_*/);
    }
    constexpr auto end() const
      requires range<const V>
    {
      return ranges::cend(/*base_*/);
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
  };
 
  template<class R>
  as_const_view(R&&) -> as_const_view<views::all_t<R>>;
}

```

#### Class template std::ranges::elements_view

```
namespace std::ranges {
  template<class T, size_t N>
  concept /*has-tuple-element*/ = // exposition-only
    /*tuple-like*/<T> && N < tuple_size_v<T>;
 
  template<class T, size_t N>
  concept /*returnable-element*/ = // exposition-only
    is_reference_v<T> || move_constructible<tuple_element_t<N, T>>;
 
  template<input_range V, size_t N>
    requires view<V> && /*has-tuple-element*/<range_value_t<V>, N> &&
             /*has-tuple-element*/<remove_reference_t<range_reference_t<V>>, N> &&
             /*returnable-element*/<range_reference_t<V>, N>
  class elements_view : public view_interface<elements_view<V, N>>
  {
  public:
    elements_view()
      requires default_initializable<V>
    = default;
    constexpr explicit elements_view(V base);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return /*iterator*/<false>(ranges::begin(/*base_*/));
    }
 
    constexpr auto begin() const
      requires range<const V>
    {
      return /*iterator*/<true>(ranges::begin(/*base_*/));
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V> && !common_range<V>)
    {
      return /*sentinel*/<false>{ ranges::end(/*base_*/) };
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V> && common_range<V>)
    {
      return /*iterator*/<false>{ ranges::end(/*base_*/) };
    }
 
    constexpr auto end() const
      requires range<const V>
    {
      return /*sentinel*/<true>{ ranges::end(/*base_*/) };
    }
 
    constexpr auto end() const
      requires common_range<const V>
    {
      return /*iterator*/<true>{ ranges::end(/*base_*/) };
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
 
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
 
  private:
    // class template elements_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
    // class template elements_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
    V /*base_*/ = V(); // exposition-only
  };
}

```

#### Class template std::ranges::elements_view::iterator

```
namespace std::ranges {
  template<input_range V, size_t N>
    requires view<V> && /*has-tuple-element*/<range_value_t<V>, N> &&
             /*has-tuple-element*/<remove_reference_t<range_reference_t<V>>, N> &&
             /*returnable-element*/<range_reference_t<V>, N>
  template<bool Const>
  class elements_view<V, N>::/*iterator*/
  {
    using /*Base*/                    = /*maybe-const*/<Const, V>; // exposition-only
 
    iterator_t</*Base*/> /*current_*/ = iterator_t</*Base*/>(); // exposition-only
 
    static constexpr decltype(auto) /*get-element*/(
      const iterator_t</*Base*/>& i); // exposition-only
 
  public:
    using iterator_concept  = /* see description */;
    using iterator_category = /* see description */; // not always present
    using value_type        = remove_cvref_t<tuple_element_t<N, range_value_t</*Base*/>>>;
    using difference_type   = range_difference_t</*Base*/>;
 
    /*iterator*/()
      requires default_initializable<iterator_t</*Base*/>>
    = default;
    constexpr explicit /*iterator*/(iterator_t</*Base*/> current);
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>>;
 
    constexpr const iterator_t</*Base*/>& base() const& noexcept;
    constexpr iterator_t</*Base*/> base() &&;
 
    constexpr decltype(auto) operator*() const { return /*get-element*/(/*current_*/); }
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range</*Base*/>;
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr decltype(auto) operator[](difference_type n) const
      requires random_access_range</*Base*/>
    {
      return /*get-element*/(/*current_*/ + n);
    }
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable<iterator_t</*Base*/>>;
 
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> && three_way_comparable<iterator_t</*Base*/>>
    ;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& x, difference_type y)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& x, difference_type y)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for<iterator_t</*Base*/>, iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::elements_view::sentinel

```
namespace std::ranges {
  template<input_range V, size_t N>
    requires view<V> && /*has-tuple-element*/<range_value_t<V>, N> &&
             /*has-tuple-element*/<remove_reference_t<range_reference_t<V>>, N> &&
             /*returnable-element*/<range_reference_t<V>, N>
  template<bool Const>
  class elements_view<V, N>::/*sentinel*/
  {
  private:
    using /*Base*/                = /*maybe-const*/<Const, V>; // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();    // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr explicit /*sentinel*/(sentinel_t</*Base*/> end);
    constexpr /*sentinel*/(/*sentinel*/<!Const> other)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr sentinel_t</*Base*/> base() const;
 
    template<bool OtherConst>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*iterator*/<OtherConst>& x,
      const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*sentinel*/& x,
      const /*iterator*/<OtherConst>& y);
  };
}

```

#### Class template std::ranges::enumerate_view

```
namespace std::ranges {
  template<view V>
    requires /*range-with-movable-references*/<V>
  class enumerate_view : public view_interface<enumerate_view<V>>
  {
    V /*base_*/ = V(); // exposition-only
 
    // class template enumerate_view::iterator
    template<bool Const>
    class /*iterator*/; // exposition-only
 
    // class template enumerate_view::sentinel
    template<bool Const>
    class /*sentinel*/; // exposition-only
 
  public:
    constexpr enumerate_view()
      requires default_initializable<V>
    = default;
    constexpr explicit enumerate_view(V base);
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return /*iterator*/<false>(ranges::begin(/*base_*/), 0);
    }
    constexpr auto begin() const
      requires /*range-with-movable-references*/<const V>
    {
      return /*iterator*/<true>(ranges::begin(/*base_*/), 0);
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (forward_range<V> && common_range<V> && sized_range<V>)
        return /*iterator*/<false>(ranges::end(/*base_*/), ranges::distance(/*base_*/));
      else
        return /*sentinel*/<false>(ranges::end(/*base_*/));
    }
    constexpr auto end() const
      requires /*range-with-movable-references*/<const V>
    {
      if constexpr (forward_range<const V> && common_range<const V> &&
                    sized_range<const V>)
        return /*iterator*/<true>(ranges::end(/*base_*/), ranges::distance(/*base_*/));
      else
        return /*sentinel*/<true>(ranges::end(/*base_*/));
    }
 
    constexpr auto size()
      requires sized_range<V>
    {
      return ranges::size(/*base_*/);
    }
    constexpr auto size() const
      requires sized_range<const V>
    {
      return ranges::size(/*base_*/);
    }
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
  };
 
  template<class R>
  enumerate_view(R&&) -> enumerate_view<views::all_t<R>>;
}

```

#### Class template std::ranges::enumerate_view::iterator

```
namespace std::ranges {
  template<view V>
    requires /*range-with-movable-references*/<V>
  template<bool Const>
  class enumerate_view<V>::/*iterator*/
  {
    using /*Base*/ = /*maybe-const*/<Const, V>; // exposition-only
 
  public:
    using iterator_category = input_iterator_tag;
    using iterator_concept  = /* see description */;
    using difference_type   = range_difference_t</*Base*/>;
    using value_type        = tuple<difference_type, range_value_t</*Base*/>>;
 
  private:
    using /*reference-type*/ = // exposition-only
      tuple<difference_type, range_reference_t</*Base*/>>;
    iterator_t</*Base*/> /*current_*/ = iterator_t</*Base*/>(); // exposition-only
    difference_type /*pos_*/          = 0;                      // exposition-only
 
    constexpr explicit /*iterator*/(iterator_t</*Base*/> current,
                                    difference_type pos); // exposition-only
 
  public:
    /*iterator*/()
      requires default_initializable<iterator_t</*Base*/>>
    = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>>;
 
    constexpr const iterator_t</*Base*/>& base() const& noexcept;
    constexpr iterator_t</*Base*/> base() &&;
 
    constexpr difference_type index() const noexcept;
 
    constexpr auto operator*() const
    {
      return /*reference-type*/(/*pos_*/, */*current_*/);
    }
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range</*Base*/>;
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr auto operator[](difference_type n) const
      requires random_access_range</*Base*/>
    {
      return /*reference-type*/(/*pos_*/ + n, /*current_*/[n]);
    }
 
    friend constexpr bool operator==(const /*iterator*/& x,
                                     const /*iterator*/& y) noexcept;
    friend constexpr strong_ordering operator<=>(const /*iterator*/& x,
                                                 const /*iterator*/& y) noexcept;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& x, difference_type y)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& x, difference_type y)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y) noexcept;
 
    friend constexpr auto iter_move(const /*iterator*/& i) noexcept(
      noexcept(ranges::iter_move(i./*current_*/)) &&
      is_nothrow_move_constructible_v<range_rvalue_reference_t</*Base*/>>)
    {
      return tuple<difference_type, range_rvalue_reference_t</*Base*/>>(
        i./*pos_*/, ranges::iter_move(i./*current_*/));
    }
  };
}

```

#### Class template std::ranges::enumerate_view::sentinel

```
namespace std::ranges {
  template<view V>
    requires /*range-with-movable-references*/<V>
  template<bool Const>
  class enumerate_view<V>::/*sentinel*/
  {
    using /*Base*/                = /*maybe-const*/<Const, V>; // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();    // exposition-only
    constexpr explicit /*sentinel*/(sentinel_t</*Base*/> end); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr /*sentinel*/(/*sentinel*/<!Const> other)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr sentinel_t</*Base*/> base() const;
 
    template<bool OtherConst>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*iterator*/<OtherConst>& x,
      const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*sentinel*/& x,
      const /*iterator*/<OtherConst>& y);
  };
}

```

#### Class template std::ranges::zip_view

```
namespace std::ranges {
  template<class... Rs>
  concept /*zip-is-common*/ = // exposition-only
    (sizeof...(Rs) == 1 && (common_range<Rs> && ...)) ||
    (!(bidirectional_range<Rs> && ...) && (common_range<Rs> && ...)) ||
    ((random_access_range<Rs> && ...) && (sized_range<Rs> && ...));
 
  template<input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0)
  class zip_view : public view_interface<zip_view<Views...>>
  {
    tuple<Views...> /*views_*/; // exposition-only
 
    // class template zip_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
    // class template zip_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
  public:
    zip_view() = default;
    constexpr explicit zip_view(Views... views);
 
    constexpr auto begin()
      requires(!(/*simple-view*/<Views> && ...))
    {
      return /*iterator*/<false>(/*tuple-transform*/(ranges::begin, /*views_*/));
    }
    constexpr auto begin() const
      requires(range<const Views> && ...)
    {
      return /*iterator*/<true>(/*tuple-transform*/(ranges::begin, /*views_*/));
    }
 
    constexpr auto end()
      requires(!(/*simple-view*/<Views> && ...))
    {
      if constexpr (!/*zip-is-common*/<Views...>) {
        return /*sentinel*/<false>(/*tuple-transform*/(ranges::end, /*views_*/));
      } else if constexpr ((random_access_range<Views> && ...)) {
        return begin() + iter_difference_t</*iterator*/<false>>(size());
      } else {
        return /*iterator*/<false>(/*tuple-transform*/(ranges::end, /*views_*/));
      }
    }
 
    constexpr auto end() const
      requires(range<const Views> && ...)
    {
      if constexpr (!/*zip-is-common*/<const Views...>) {
        return /*sentinel*/<true>(/*tuple-transform*/(ranges::end, /*views_*/));
      } else if constexpr ((random_access_range<const Views> && ...)) {
        return begin() + iter_difference_t</*iterator*/<true>>(size());
      } else {
        return /*iterator*/<true>(/*tuple-transform*/(ranges::end, /*views_*/));
      }
    }
 
    constexpr auto size()
      requires(sized_range<Views> && ...);
    constexpr auto size() const
      requires(sized_range<const Views> && ...);
  };
 
  template<class... Rs>
  zip_view(Rs&&...) -> zip_view<views::all_t<Rs>...>;
}

```

#### Class template std::ranges::zip_view::iterator

```
namespace std::ranges {
  template<input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0)
  template<bool Const>
  class zip_view<Views...>::/*iterator*/
  {
    tuple<iterator_t</*maybe-const*/<Const, Views>>...> /*current_*/; // exposition-only
    constexpr explicit /*iterator*/(tuple<iterator_t</*maybe-const*/<Const, Views>>...>);
    // exposition-only
  public:
    using iterator_category = input_iterator_tag; // not always present
    using iterator_concept  = /* see description */;
    using value_type        = tuple<range_value_t</*maybe-const*/<Const, Views>>...>;
    using difference_type =
      common_type_t<range_difference_t</*maybe-const*/<Const, Views>>...>;
 
    /*iterator*/() = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const &&
               (convertible_to<iterator_t<Views>, iterator_t<const Views>> && ...);
 
    constexpr auto operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires /*all-forward*/<Const, Views...>;
 
    constexpr /*iterator*/& operator--()
      requires /*all-bidirectional*/<Const, Views...>;
    constexpr /*iterator*/ operator--(int)
      requires /*all-bidirectional*/<Const, Views...>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires /*all-random-access*/<Const, Views...>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires /*all-random-access*/<Const, Views...>;
 
    constexpr auto operator[](difference_type n) const
      requires /*all-random-access*/<Const, Views...>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires(equality_comparable<iterator_t</*maybe-const*/<Const, Views>>> && ...);
 
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires /*all-random-access*/<Const, Views...>;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& i, difference_type n)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& i)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& i, difference_type n)
      requires /*all-random-access*/<Const, Views...>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires(sized_sentinel_for<iterator_t</*maybe-const*/<Const, Views>>,
                                  iterator_t</*maybe-const*/<Const, Views>>> &&
               ...);
 
    friend constexpr auto iter_move(const /*iterator*/& i) noexcept(
      /* see description */);
 
    friend constexpr void iter_swap(const /*iterator*/& l,
                                    const /*iterator*/& r) noexcept(/* see description */)
      requires(indirectly_swappable<iterator_t</*maybe-const*/<Const, Views>>> && ...);
  };
}

```

#### Class template std::ranges::zip_view::sentinel

```
namespace std::ranges {
  template<input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0)
  template<bool Const>
  class zip_view<Views...>::/*sentinel*/
  {
    tuple<sentinel_t</*maybe-const*/<Const, Views>>...> /*end_*/; // exposition-only
    constexpr explicit /*sentinel*/(
      tuple<sentinel_t</*maybe-const*/<Const, Views>>...> end);   // exposition-only
  public:
    /*sentinel*/() = default;
    constexpr /*sentinel*/(/*sentinel*/<!Const> i)
      requires Const &&
               (convertible_to<sentinel_t<Views>, sentinel_t<const Views>> && ...);
 
    template<bool OtherConst>
      requires(sentinel_for<sentinel_t</*maybe-const*/<Const, Views>>,
                            iterator_t</*maybe-const*/<OtherConst, Views>>> &&
               ...)
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires(sized_sentinel_for<sentinel_t</*maybe-const*/<Const, Views>>,
                                  iterator_t</*maybe-const*/<OtherConst, Views>>> &&
               ...)
    friend constexpr common_type_t<
      range_difference_t</*maybe-const*/<OtherConst, Views>>...>
    operator-(const /*iterator*/<OtherConst>& x, const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires(sized_sentinel_for<sentinel_t</*maybe-const*/<Const, Views>>,
                                  iterator_t</*maybe-const*/<OtherConst, Views>>> &&
               ...)
    friend constexpr common_type_t<
      range_difference_t</*maybe-const*/<OtherConst, Views>>...>
    operator-(const /*sentinel*/& y, const /*iterator*/<OtherConst>& x);
  };
}

```

#### Class template std::ranges::zip_transform_view

```
namespace std::ranges {
  template<move_constructible F, input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0) && is_object_v<F> &&
            regular_invocable<F&, range_reference_t<Views>...> &&
            /*can-reference*/<invoke_result_t<F&, range_reference_t<Views>...>>
  class zip_transform_view : public view_interface<zip_transform_view<F, Views...>>
  {
    /*movable-box*/<F> /*fun_*/; // exposition-only
    zip_view<Views...> /*zip_*/; // exposition-only
 
    using /*InnerView*/ = zip_view<Views...>; // exposition-only
    template<bool Const>
    using /*ziperator*/ =
      iterator_t</*maybe-const*/<Const, /*InnerView*/>>; // exposition-only
    template<bool Const>
    using /*zentinel*/ =
      sentinel_t</*maybe-const*/<Const, /*InnerView*/>>; // exposition-only
 
    // class template zip_transform_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
    // class template zip_transform_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
  public:
    zip_transform_view() = default;
 
    constexpr explicit zip_transform_view(F fun, Views... views);
 
    constexpr auto begin() { return /*iterator*/<false>(*this, /*zip_*/.begin()); }
 
    constexpr auto begin() const
      requires range<const /*InnerView*/> &&
               regular_invocable<const F&, range_reference_t<const Views>...>
    {
      return /*iterator*/<true>(*this, /*zip_*/.begin());
    }
 
    constexpr auto end()
    {
      if constexpr (common_range</*InnerView*/>) {
        return /*iterator*/<false>(*this, /*zip_*/.end());
      } else {
        return /*sentinel*/<false>(/*zip_*/.end());
      }
    }
 
    constexpr auto end() const
      requires range<const /*InnerView*/> &&
               regular_invocable<const F&, range_reference_t<const Views>...>
    {
      if constexpr (common_range<const /*InnerView*/>) {
        return /*iterator*/<true>(*this, /*zip_*/.end());
      } else {
        return /*sentinel*/<true>(/*zip_*/.end());
      }
    }
 
    constexpr auto size()
      requires sized_range</*InnerView*/>
    {
      return /*zip_*/.size();
    }
 
    constexpr auto size() const
      requires sized_range<const /*InnerView*/>
    {
      return /*zip_*/.size();
    }
  };
 
  template<class F, class... Rs>
  zip_transform_view(F, Rs&&...) -> zip_transform_view<F, views::all_t<Rs>...>;
}

```

#### Class template std::ranges::zip_transform_view::iterator

```
namespace std::ranges {
  template<move_constructible F, input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0) && is_object_v<F> &&
            regular_invocable<F&, range_reference_t<Views>...> &&
            /*can-reference*/<invoke_result_t<F&, range_reference_t<Views>...>>
  template<bool Const>
  class zip_transform_view<F, Views...>::/*iterator*/
  {
    using /*Parent*/ = /*maybe-const*/<Const, zip_transform_view>; // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, /*InnerView*/>;      // exposition-only
    /*Parent*/* /*parent_*/ = nullptr;                             // exposition-only
    /*ziperator*/<Const> /*inner_*/;                               // exposition-only
 
    constexpr /*iterator*/(/*Parent*/& parent,
                           /*ziperator*/<Const> inner); // exposition-only
 
  public:
    using iterator_category = /* see description */; // not always present
    using iterator_concept  = typename /*ziperator*/<Const>::iterator_concept;
    using value_type        = remove_cvref_t<
      invoke_result_t</*maybe-const*/<Const, F>&,
                      range_reference_t</*maybe-const*/<Const, Views>>...>>;
    using difference_type = range_difference_t</*Base*/>;
 
    /*iterator*/()        = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to</*ziperator*/<false>, /*ziperator*/<Const>>;
 
    constexpr decltype(auto) operator*() const noexcept(/* see description */);
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range</*Base*/>;
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr decltype(auto) operator[](difference_type n) const
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable</*ziperator*/<Const>>;
 
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& i)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for</*ziperator*/<Const>, /*ziperator*/<Const>>;
  };
}

```

#### Class template std::ranges::zip_transform_view::sentinel

```
namespace std::ranges {
  template<move_constructible F, input_range... Views>
    requires(view<Views> && ...) && (sizeof...(Views) > 0) && is_object_v<F> &&
            regular_invocable<F&, range_reference_t<Views>...> &&
            /*can-reference*/<invoke_result_t<F&, range_reference_t<Views>...>>
  template<bool Const>
  class zip_transform_view<F, Views...>::/*sentinel*/
  {
    /*zentinel*/<Const> /*inner_*/;                             // exposition-only
    constexpr explicit /*sentinel*/(/*zentinel*/<Const> inner); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr /*sentinel*/(/*sentinel*/<!Const> i)
      requires Const && convertible_to</*zentinel*/<false>, /*zentinel*/<Const>>;
 
    template<bool OtherConst>
      requires sentinel_for</*zentinel*/<Const>, /*ziperator*/<OtherConst>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for</*zentinel*/<Const>, /*ziperator*/<OtherConst>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, /*InnerView*/>>
    operator-(const /*iterator*/<OtherConst>& x, const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for</*zentinel*/<Const>, /*ziperator*/<OtherConst>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, /*InnerView*/>>
    operator-(const /*sentinel*/& x, const /*iterator*/<OtherConst>& y);
  };
}

```

#### Class template std::ranges::adjacent_view

```
namespace std::ranges {
  template<forward_range V, size_t N>
    requires view<V> && (N > 0)
  class adjacent_view : public view_interface<adjacent_view<V, N>>
  {
    V /*base_*/ = V(); // exposition-only
 
    // class template adjacent_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
    // class template adjacent_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
    struct /*as-sentinel*/
    {}; // exposition-only
 
  public:
    adjacent_view()
      requires default_initializable<V>
    = default;
    constexpr explicit adjacent_view(V base);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return /*iterator*/<false>(ranges::begin(/*base_*/), ranges::end(/*base_*/));
    }
 
    constexpr auto begin() const
      requires range<const V>
    {
      return /*iterator*/<true>(ranges::begin(/*base_*/), ranges::end(/*base_*/));
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (common_range<V>) {
        return /*iterator*/<false>(
          /*as-sentinel*/{}, ranges::begin(/*base_*/), ranges::end(/*base_*/));
      } else {
        return /*sentinel*/<false>(ranges::end(/*base_*/));
      }
    }
 
    constexpr auto end() const
      requires range<const V>
    {
      if constexpr (common_range<const V>) {
        return /*iterator*/<true>(
          /*as-sentinel*/{}, ranges::begin(/*base_*/), ranges::end(/*base_*/));
      } else {
        return /*sentinel*/<true>(ranges::end(/*base_*/));
      }
    }
 
    constexpr auto size()
      requires sized_range<V>;
    constexpr auto size() const
      requires sized_range<const V>;
  };
}

```

#### Class template std::ranges::adjacent_view::iterator

```
namespace std::ranges {
  template<forward_range V, size_t N>
    requires view<V> && (N > 0)
  template<bool Const>
  class adjacent_view<V, N>::/*iterator*/
  {
    using /*Base*/ = /*maybe-const*/<Const, V>; // exposition-only
    array<iterator_t</*Base*/>, N> /*current_*/ =
      array<iterator_t</*Base*/>, N>(); // exposition-only
    constexpr /*iterator*/(iterator_t</*Base*/> first,
                           sentinel_t</*Base*/> last); // exposition-only
    constexpr /*iterator*/(/*as-sentinel*/,
                           iterator_t</*Base*/> first,
                           iterator_t</*Base*/> last);
    // exposition-only
  public:
    using iterator_category = input_iterator_tag;
    using iterator_concept  = /* see description */;
    using value_type        = tuple</*REPEAT*/(range_value_t</*Base*/>, N)...>;
    using difference_type   = range_difference_t</*Base*/>;
 
    /*iterator*/()          = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>>;
 
    constexpr auto operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr auto operator[](difference_type n) const
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> && three_way_comparable<iterator_t</*Base*/>>
    ;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& i)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for<iterator_t</*Base*/>, iterator_t</*Base*/>>;
 
    friend constexpr auto iter_move(const /*iterator*/& i) noexcept(
      /* see description */);
    friend constexpr void iter_swap(const /*iterator*/& l,
                                    const /*iterator*/& r) noexcept(/* see description */)
      requires indirectly_swappable<iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::adjacent_view::sentinel

```
namespace std::ranges {
  template<forward_range V, size_t N>
    requires view<V> && (N > 0)
  template<bool Const>
  class adjacent_view<V, N>::/*sentinel*/
  {
    using /*Base*/                = /*maybe-const*/<Const, V>; // exposition-only
    sentinel_t</*Base*/> /*end_*/ = sentinel_t</*Base*/>();    // exposition-only
    constexpr explicit /*sentinel*/(sentinel_t</*Base*/> end); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr /*sentinel*/(/*sentinel*/<!Const> i)
      requires Const && convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    template<bool OtherConst>
      requires sentinel_for<sentinel_t</*Base*/>,
                            iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*iterator*/<OtherConst>& x,
      const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for<sentinel_t</*Base*/>,
                                  iterator_t</*maybe-const*/<OtherConst, V>>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, V>> operator-(
      const /*sentinel*/& y,
      const /*iterator*/<OtherConst>& x);
  };
}

```

#### Class template std::ranges::adjacent_transform_view

```
namespace std::ranges {
  template<forward_range V, move_constructible F, size_t N>
    requires view<V> && (N > 0) && is_object_v<F> &&
             regular_invocable<F&, /*REPEAT*/(range_reference_t<V>, N)...> &&
             /*can-reference*/<
               invoke_result_t<F&, /*REPEAT*/(range_reference_t<V>, N)...>>
  class adjacent_transform_view : public view_interface<adjacent_transform_view<V, F, N>>
  {
    /*movable-box*/<F> /*fun_*/;    // exposition-only
    adjacent_view<V, N> /*inner_*/; // exposition-only
 
    using /*InnerView*/ = adjacent_view<V, N>; // exposition-only
    template<bool Const>
    using /*inner-iterator*/ =
      iterator_t</*maybe-const*/<Const, /*InnerView*/>>; // exposition-only
    template<bool Const>
    using /*inner-sentinel*/ =
      sentinel_t</*maybe-const*/<Const, /*InnerView*/>>; // exposition-only
 
    // class template adjacent_transform_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
    // class template adjacent_transform_view::sentinel
    template<bool>
    class /*sentinel*/; // exposition-only
 
  public:
    adjacent_transform_view() = default;
    constexpr explicit adjacent_transform_view(V base, F fun);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*inner_*/.base();
    }
    constexpr V base() && { return std::move(/*inner_*/).base(); }
 
    constexpr auto begin() { return /*iterator*/<false>(*this, /*inner_*/.begin()); }
 
    constexpr auto begin() const
      requires range<const /*InnerView*/> &&
               regular_invocable<const F&, /*REPEAT*/(range_reference_t<const V>, N)...>
    {
      return /*iterator*/<true>(*this, /*inner_*/.begin());
    }
 
    constexpr auto end()
    {
      if constexpr (common_range</*InnerView*/>) {
        return /*iterator*/<false>(*this, /*inner_*/.end());
      } else {
        return /*sentinel*/<false>(/*inner_*/.end());
      }
    }
 
    constexpr auto end() const
      requires range<const /*InnerView*/> &&
               regular_invocable<const F&, /*REPEAT*/(range_reference_t<const V>, N)...>
    {
      if constexpr (common_range<const /*InnerView*/>) {
        return /*iterator*/<true>(*this, /*inner_*/.end());
      } else {
        return /*sentinel*/<true>(/*inner_*/.end());
      }
    }
 
    constexpr auto size()
      requires sized_range</*InnerView*/>
    {
      return /*inner_*/.size();
    }
 
    constexpr auto size() const
      requires sized_range<const /*InnerView*/>
    {
      return /*inner_*/.size();
    }
  };
}

```

#### Class template std::ranges::adjacent_transform_view::iterator

```
namespace std::ranges {
  template<forward_range V, move_constructible F, size_t N>
    requires view<V> && (N > 0) && is_object_v<F> &&
             regular_invocable<F&, /*REPEAT*/(range_reference_t<V>, N)...> &&
             /*can-reference*/<
               invoke_result_t<F&, /*REPEAT*/(range_reference_t<V>, N)...>>
  template<bool Const>
  class adjacent_transform_view<V, F, N>::/*iterator*/
  {
    using /*Parent*/ = /*maybe-const*/<Const, adjacent_transform_view>; // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, V>;                       // exposition-only
    /*Parent*/* /*parent_*/ = nullptr;                                  // exposition-only
    /*inner-iterator*/<Const> /*inner_*/;                               // exposition-only
 
    constexpr /*iterator*/(/*Parent*/& parent,
                           /*inner-iterator*/<Const> inner); // exposition-only
 
  public:
    using iterator_category = /* see description */;
    using iterator_concept  = typename /*inner-iterator*/<Const>::iterator_concept;
    using value_type =
      remove_cvref_t<invoke_result_t</*maybe-const*/<Const, F>&,
                                     /*REPEAT*/(range_reference_t</*Base*/>, N)...>>;
    using difference_type = range_difference_t</*Base*/>;
 
    /*iterator*/()        = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const
               && convertible_to</*inner-iterator*/<false>, /*inner-iterator*/<Const>>;
 
    constexpr decltype(auto) operator*() const noexcept(/* see description */);
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr decltype(auto) operator[](difference_type n) const
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> &&
               three_way_comparable</*inner-iterator*/<Const>>;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& i)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for</*inner-iterator*/<Const>, /*inner-iterator*/<Const>>;
  };
}

```

#### Class template std::ranges::adjacent_transform_view::sentinel

```
namespace std::ranges {
  template<forward_range V, move_constructible F, size_t N>
    requires view<V> && (N > 0) && is_object_v<F> &&
             regular_invocable<F&, /*REPEAT*/(range_reference_t<V>, N)...> &&
             /*can-reference*/<
               invoke_result_t<F&, /*REPEAT*/(range_reference_t<V>, N)...>>
  template<bool Const>
  class adjacent_transform_view<V, F, N>::/*sentinel*/
  {
    /*inner-sentinel*/<Const> /*inner_*/;                             // exposition-only
    constexpr explicit /*sentinel*/(/*inner-sentinel*/<Const> inner); // exposition-only
 
  public:
    /*sentinel*/() = default;
    constexpr /*sentinel*/(/*sentinel*/<!Const> i)
      requires Const
               && convertible_to</*inner-sentinel*/<false>, /*inner-sentinel*/<Const>>;
 
    template<bool OtherConst>
      requires sentinel_for</*inner-sentinel*/<Const>, /*inner-iterator*/<OtherConst>>
    friend constexpr bool operator==(const /*iterator*/<OtherConst>& x,
                                     const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for</*inner-sentinel*/<Const>,
                                  /*inner-iterator*/<OtherConst>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, /*InnerView*/>>
    operator-(const /*iterator*/<OtherConst>& x, const /*sentinel*/& y);
 
    template<bool OtherConst>
      requires sized_sentinel_for</*inner-sentinel*/<Const>,
                                  /*inner-iterator*/<OtherConst>>
    friend constexpr range_difference_t</*maybe-const*/<OtherConst, /*InnerView*/>>
    operator-(const /*sentinel*/& x, const /*iterator*/<OtherConst>& y);
  };
}

```

#### Class template std::ranges::chunk_view for `input_range`s

```
namespace std::ranges {
  template<class I>
  constexpr I /*div-ceil*/(I num, I denom)
  { // exposition-only
    I r = num / denom;
    if (num % denom)
      ++r;
    return r;
  }
 
  template<view V>
    requires input_range<V>
  class chunk_view : public view_interface<chunk_view<V>>
  {
    V /*base_*/;                              // exposition-only
    range_difference_t<V> /*n_*/;             // exposition-only
    range_difference_t<V> /*remainder_*/ = 0; // exposition-only
 
    /*non-propagating-cache*/<iterator_t<V>> /*current_*/; // exposition-only
 
    // class chunk_view::outer-iterator
    class /*outer-iterator*/; // exposition-only
 
    // class chunk_view::inner-iterator
    class /*inner-iterator*/; // exposition-only
 
  public:
    constexpr explicit chunk_view(V base, range_difference_t<V> n);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr /*outer-iterator*/ begin();
    constexpr default_sentinel_t end() const noexcept;
 
    constexpr auto size()
      requires sized_range<V>;
    constexpr auto size() const
      requires sized_range<const V>;
  };
 
  template<class R>
  chunk_view(R&&, range_difference_t<R>) -> chunk_view<views::all_t<R>>;
}

```

#### Class template std::ranges::chunk_view::outer_iterator for `input_range`s

```
namespace std::ranges {
  template<view V>
    requires input_range<V>
  class chunk_view<V>::/*outer-iterator*/
  {
    chunk_view* /*parent_*/; // exposition-only
 
    constexpr explicit /*outer-iterator*/(chunk_view& parent); // exposition-only
 
  public:
    using iterator_concept = input_iterator_tag;
    using difference_type  = range_difference_t<V>;
 
    // class chunk_view::outer-iterator::value_type
    struct value_type;
 
    /*outer-iterator*/(/*outer-iterator*/&&)            = default;
    /*outer-iterator*/& operator=(/*outer-iterator*/&&) = default;
 
    constexpr value_type operator*() const;
    constexpr /*outer-iterator*/& operator++();
    constexpr void operator++(int);
 
    friend constexpr bool operator==(const /*outer-iterator*/& x, default_sentinel_t);
 
    friend constexpr difference_type operator-(default_sentinel_t y,
                                               const /*outer-iterator*/& x)
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
    friend constexpr difference_type operator-(const /*outer-iterator*/& x,
                                               default_sentinel_t y)
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
  };
}

```

#### Class template std::ranges::chunk_view::outer_iterator::value_type for `input_range`s

```
namespace std::ranges {
  template<view V>
    requires input_range<V>
  struct chunk_view<V>::/*outer-iterator*/::value_type : view_interface<value_type>
  {
  private:
    chunk_view* /*parent_*/; // exposition-only
 
    constexpr explicit value_type(chunk_view& parent); // exposition-only
 
  public:
    constexpr /*inner-iterator*/ begin() const noexcept;
    constexpr default_sentinel_t end() const noexcept;
 
    constexpr auto size() const
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
  };
}

```

#### Class template std::ranges::chunk_view::inner_iterator for `input_range`s

```
namespace std::ranges {
  template<view V>
    requires input_range<V>
  class chunk_view<V>::/*inner-iterator*/
  {
    chunk_view* /*parent_*/; // exposition-only
 
    constexpr explicit /*inner-iterator*/(chunk_view& parent) noexcept; // exposition-only
 
  public:
    using iterator_concept                              = input_iterator_tag;
    using difference_type                               = range_difference_t<V>;
    using value_type                                    = range_value_t<V>;
 
    /*inner-iterator*/(/*inner-iterator*/&&)            = default;
    /*inner-iterator*/& operator=(/*inner-iterator*/&&) = default;
 
    constexpr const iterator_t<V>& base() const&;
 
    constexpr range_reference_t<V> operator*() const;
    constexpr /*inner-iterator*/& operator++();
    constexpr void operator++(int);
 
    friend constexpr bool operator==(const /*inner-iterator*/& x, default_sentinel_t);
 
    friend constexpr difference_type operator-(default_sentinel_t y,
                                               const /*inner-iterator*/& x)
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
    friend constexpr difference_type operator-(const /*inner-iterator*/& x,
                                               default_sentinel_t y)
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
 
    friend constexpr range_rvalue_reference_t<V>
    iter_move(const /*inner-iterator*/& i) noexcept(
      noexcept(ranges::iter_move(*i./*parent_*/->/*current_*/)));
 
    friend constexpr void
    iter_swap(const /*inner-iterator*/& x, const /*inner-iterator*/& y) noexcept(noexcept(
      ranges::iter_swap(*x./*parent_*/->/*current_*/, *y./*parent_*/->/*current_*/)))
      requires indirectly_swappable<iterator_t<V>>;
  };
}

```

#### Class template std::ranges::chunk_view for `forward_range`s

```
namespace std::ranges {
  template<view V>
    requires forward_range<V>
  class chunk_view<V> : public view_interface<chunk_view<V>>
  {
    V /*base_*/;                  // exposition-only
    range_difference_t<V> /*n_*/; // exposition-only
 
    // class template chunk_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
  public:
    constexpr explicit chunk_view(V base, range_difference_t<V> n);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return /*iterator*/<false>(this, ranges::begin(/*base_*/));
    }
 
    constexpr auto begin() const
      requires forward_range<const V>
    {
      return /*iterator*/<true>(this, ranges::begin(/*base_*/));
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (common_range<V> && sized_range<V>) {
        auto missing = (/*n_*/ - ranges::distance(/*base_*/) % /*n_*/) % /*n_*/;
        return /*iterator*/<false>(this, ranges::end(/*base_*/), missing);
      } else if constexpr (common_range<V> && !bidirectional_range<V>) {
        return /*iterator*/<false>(this, ranges::end(/*base_*/));
      } else {
        return default_sentinel;
      }
    }
 
    constexpr auto end() const
      requires forward_range<const V>
    {
      if constexpr (common_range<const V> && sized_range<const V>) {
        auto missing = (/*n_*/ - ranges::distance(/*base_*/) % /*n_*/) % /*n_*/;
        return /*iterator*/<true>(this, ranges::end(/*base_*/), missing);
      } else if constexpr (common_range<const V> && !bidirectional_range<const V>) {
        return /*iterator*/<true>(this, ranges::end(/*base_*/));
      } else {
        return default_sentinel;
      }
    }
 
    constexpr auto size()
      requires sized_range<V>;
    constexpr auto size() const
      requires sized_range<const V>;
  };
}

```

#### Class template std::ranges::chunk_view::iterator for `forward_range`s

```
namespace std::ranges {
  template<view V>
    requires forward_range<V>
  template<bool Const>
  class chunk_view<V>::/*iterator*/
  {
    using /*Parent*/ = /*maybe-const*/<Const, chunk_view>; // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, V>;          // exposition-only
 
    iterator_t</*Base*/> /*current_*/         = iterator_t</*Base*/>(); // exposition-only
    sentinel_t</*Base*/> /*end_*/             = sentinel_t</*Base*/>(); // exposition-only
    range_difference_t</*Base*/> /*n_*/       = 0;                      // exposition-only
    range_difference_t</*Base*/> /*missing_*/ = 0;                      // exposition-only
 
    constexpr /*iterator*/(/*Parent*/* parent,
                           iterator_t</*Base*/> current, // exposition-only
                           range_difference_t</*Base*/> missing = 0);
 
  public:
    using iterator_category = input_iterator_tag;
    using iterator_concept  = /* see description */;
    using value_type = decltype(views::take(subrange(/*current_*/, /*end_*/), /*n_*/));
    using difference_type = range_difference_t</*Base*/>;
 
    /*iterator*/()        = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>> &&
               convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr iterator_t</*Base*/> base() const;
 
    constexpr value_type operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr value_type operator[](difference_type n) const
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
    friend constexpr bool operator==(const /*iterator*/& x, default_sentinel_t);
 
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> && three_way_comparable<iterator_t</*Base*/>>
    ;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& i)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for<iterator_t</*Base*/>, iterator_t</*Base*/>>;
 
    friend constexpr difference_type operator-(default_sentinel_t y,
                                               const /*iterator*/& x)
      requires sized_sentinel_for<sentinel_t</*Base*/>, iterator_t</*Base*/>>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               default_sentinel_t y)
      requires sized_sentinel_for<sentinel_t</*Base*/>, iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::slide_view

```
namespace std::ranges {
  template<class V>
  concept /*slide-caches-nothing*/ =
    random_access_range<V> && sized_range<V>; // exposition-only
 
  template<class V>
  concept /*slide-caches-last*/ = // exposition-only
    !/*slide-caches-nothing*/<V> && bidirectional_range<V> && common_range<V>;
 
  template<class V>
  concept /*slide-caches-first*/ = // exposition-only
    !/*slide-caches-nothing*/<V> && !/*slide-caches-last*/<V>;
 
  template<forward_range V>
    requires view<V>
  class slide_view : public view_interface<slide_view<V>>
  {
    V /*base_*/;                  // exposition-only
    range_difference_t<V> /*n_*/; // exposition-only
 
    // class template slide_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
 
    // class slide_view::sentinel
    class /*sentinel*/; // exposition-only
 
  public:
    constexpr explicit slide_view(V base, range_difference_t<V> n);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr auto begin()
      requires(!(/*simple-view*/<V> && /*slide-caches-nothing*/<const V>));
    constexpr auto begin() const
      requires /*slide-caches-nothing*/<const V>;
 
    constexpr auto end()
      requires(!(/*simple-view*/<V> && /*slide-caches-nothing*/<const V>));
    constexpr auto end() const
      requires /*slide-caches-nothing*/<const V>;
 
    constexpr auto size()
      requires sized_range<V>;
    constexpr auto size() const
      requires sized_range<const V>;
  };
 
  template<class R>
  slide_view(R&&, range_difference_t<R>) -> slide_view<views::all_t<R>>;
}

```

#### Class template std::ranges::slide_view::iterator

```
namespace std::ranges {
  template<forward_range V>
    requires view<V>
  template<bool Const>
  class slide_view<V>::/*iterator*/
  {
    using /*Base*/                    = /*maybe-const*/<Const, V>; // exposition-only
    iterator_t</*Base*/> /*current_*/ = iterator_t</*Base*/>();    // exposition-only
    iterator_t</*Base*/> /*last-ele_*/ =
      iterator_t</*Base*/>(); // exposition-only
                              // present only if Base models slide-caches-first
    range_difference_t</*Base*/> /*n_*/ = 0; // exposition-only
 
    constexpr /*iterator*/(iterator_t</*Base*/> current,
                           range_difference_t</*Base*/> n) // exposition-only
      requires(!/*slide-caches-first*/</*Base*/>);
 
    constexpr /*iterator*/(iterator_t</*Base*/> current,
                           iterator_t</*Base*/> last_ele, // exposition-only
                           range_difference_t</*Base*/> n)
      requires /*slide-caches-first*/</*Base*/>;
 
  public:
    using iterator_category = input_iterator_tag;
    using iterator_concept  = /* see description */;
    using value_type        = decltype(views::counted(/*current_*/, /*n_*/));
    using difference_type   = range_difference_t</*Base*/>;
 
    /*iterator*/()          = default;
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>>;
 
    constexpr auto operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires random_access_range</*Base*/>;
 
    constexpr auto operator[](difference_type n) const
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
 
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> && three_way_comparable<iterator_t</*Base*/>>
    ;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& i)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& i, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for<iterator_t</*Base*/>, iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::slide_view::sentinel

```
namespace std::ranges {
  template<forward_range V>
    requires view<V>
  class slide_view<V>::/*sentinel*/
  {
    sentinel_t<V> /*end_*/ = sentinel_t<V>();           // exposition-only
    constexpr explicit /*sentinel*/(sentinel_t<V> end); // exposition-only
 
  public:
    /*sentinel*/() = default;
 
    friend constexpr bool operator==(const /*iterator*/<false>& x, const /*sentinel*/& y);
 
    friend constexpr range_difference_t<V> operator-(const /*iterator*/<false>& x,
                                                     const /*sentinel*/& y)
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
 
    friend constexpr range_difference_t<V> operator-(const /*sentinel*/& y,
                                                     const /*iterator*/<false>& x)
      requires sized_sentinel_for<sentinel_t<V>, iterator_t<V>>;
  };
}

```

#### Class template std::ranges::chunk_by_view

```
namespace std::ranges {
  template<forward_range V, indirect_binary_predicate<iterator_t<V>, iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class chunk_by_view : public view_interface<chunk_by_view<V, Pred>>
  {
    V /*base_*/ = V();               // exposition-only
    /*movable-box*/<Pred> /*pred_*/; // exposition-only
 
    // class chunk_by_view::iterator
    class /*iterator*/; // exposition-only
 
  public:
    chunk_by_view()
      requires default_initializable<V> && default_initializable<Pred>
    = default;
    constexpr explicit chunk_by_view(V base, Pred pred);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr const Pred& pred() const;
 
    constexpr /*iterator*/ begin();
    constexpr auto end();
 
    constexpr iterator_t<V> /*find-next*/(iterator_t<V>); // exposition-only
    constexpr iterator_t<V> /*find-prev*/(iterator_t<V>)  // exposition-only
      requires bidirectional_range<V>;
  };
 
  template<class R, class Pred>
  chunk_by_view(R&&, Pred) -> chunk_by_view<views::all_t<R>, Pred>;
}

```

#### Class template std::ranges::chunk_by_view::iterator

```
namespace std::ranges {
  template<forward_range V, indirect_binary_predicate<iterator_t<V>, iterator_t<V>> Pred>
    requires view<V> && is_object_v<Pred>
  class chunk_by_view<V, Pred>::/*iterator*/
  {
    chunk_by_view* /*parent_*/ = nullptr;         // exposition-only
    iterator_t<V> /*current_*/ = iterator_t<V>(); // exposition-only
    iterator_t<V> /*next_*/    = iterator_t<V>(); // exposition-only
 
    constexpr /*iterator*/(chunk_by_view& parent,
                           iterator_t<V> current, // exposition-only
                           iterator_t<V> next);
 
  public:
    using value_type        = subrange<iterator_t<V>>;
    using difference_type   = range_difference_t<V>;
    using iterator_category = input_iterator_tag;
    using iterator_concept  = /* see description */;
 
    /*iterator*/()          = default;
 
    constexpr value_type operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr /*iterator*/ operator++(int);
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range<V>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range<V>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y);
    friend constexpr bool operator==(const /*iterator*/& x, default_sentinel_t);
  };
}

```

#### Class template std::ranges::stride_view

```
namespace std::ranges {
  template<input_range V>
    requires view<V>
  class stride_view : public view_interface<stride_view<V>>
  {
    V /*base_*/;                       // exposition-only
    range_difference_t<V> /*stride_*/; // exposition-only
    // class template stride_view::iterator
    template<bool>
    class /*iterator*/; // exposition-only
  public:
    constexpr explicit stride_view(V base, range_difference_t<V> stride);
 
    constexpr V base() const&
      requires copy_constructible<V>
    {
      return /*base_*/;
    }
    constexpr V base() && { return std::move(/*base_*/); }
 
    constexpr range_difference_t<V> stride() const noexcept;
 
    constexpr auto begin()
      requires(!/*simple-view*/<V>)
    {
      return /*iterator*/<false>(this, ranges::begin(/*base_*/));
    }
 
    constexpr auto begin() const
      requires range<const V>
    {
      return /*iterator*/<true>(this, ranges::begin(/*base_*/));
    }
 
    constexpr auto end()
      requires(!/*simple-view*/<V>)
    {
      if constexpr (common_range<V> && sized_range<V> && forward_range<V>) {
        auto missing =
          (/*stride_*/ - ranges::distance(/*base_*/) % /*stride_*/) % /*stride_*/;
        return /*iterator*/<false>(this, ranges::end(/*base_*/), missing);
      } else if constexpr (common_range<V> && !bidirectional_range<V>) {
        return /*iterator*/<false>(this, ranges::end(/*base_*/));
      } else {
        return default_sentinel;
      }
    }
 
    constexpr auto end() const
      requires range<const V>
    {
      if constexpr (common_range<const V> && sized_range<const V> &&
                    forward_range<const V>) {
        auto missing =
          (/*stride_*/ - ranges::distance(/*base_*/) % /*stride_*/) % /*stride_*/;
        return /*iterator*/<true>(this, ranges::end(/*base_*/), missing);
      } else if constexpr (common_range<const V> && !bidirectional_range<const V>) {
        return /*iterator*/<true>(this, ranges::end(/*base_*/));
      } else {
        return default_sentinel;
      }
    }
 
    constexpr auto size()
      requires sized_range<V>;
    constexpr auto size() const
      requires sized_range<const V>;
  };
 
  template<class R>
  stride_view(R&&, range_difference_t<R>) -> stride_view<views::all_t<R>>;
}

```

#### Class template std::ranges::stride_view::iterator

```
namespace std::ranges {
  template<input_range V>
    requires view<V>
  template<bool Const>
  class stride_view<V>::/*iterator*/
  {
    using /*Parent*/ = /*maybe-const*/<Const, stride_view>; // exposition-only
    using /*Base*/   = /*maybe-const*/<Const, V>;           // exposition-only
 
    iterator_t</*Base*/> /*current_*/         = iterator_t</*Base*/>(); // exposition-only
    sentinel_t</*Base*/> /*end_*/             = sentinel_t</*Base*/>(); // exposition-only
    range_difference_t</*Base*/> /*stride_*/  = 0;                      // exposition-only
    range_difference_t</*Base*/> /*missing_*/ = 0;                      // exposition-only
 
    constexpr /*iterator*/(/*Parent*/* parent,
                           iterator_t</*Base*/> current, // exposition-only
                           range_difference_t</*Base*/> missing = 0);
 
  public:
    using difference_type   = range_difference_t</*Base*/>;
    using value_type        = range_value_t</*Base*/>;
    using iterator_concept  = /* see description */;
    using iterator_category = /* see description */; // not always present
 
    /*iterator*/()
      requires default_initializable<iterator_t</*Base*/>>
    = default;
 
    constexpr /*iterator*/(/*iterator*/<!Const> other)
      requires Const && convertible_to<iterator_t<V>, iterator_t</*Base*/>> &&
               convertible_to<sentinel_t<V>, sentinel_t</*Base*/>>;
 
    constexpr iterator_t</*Base*/> base() &&;
    constexpr const iterator_t</*Base*/>& base() const& noexcept;
 
    constexpr decltype(auto) operator*() const { return */*current_*/; }
 
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range</*Base*/>;
 
    constexpr /*iterator*/& operator--()
      requires bidirectional_range</*Base*/>;
    constexpr /*iterator*/ operator--(int)
      requires bidirectional_range</*Base*/>;
 
    constexpr /*iterator*/& operator+=(difference_type n)
      requires random_access_range</*Base*/>;
    constexpr /*iterator*/& operator-=(difference_type n)
      requires random_access_range</*Base*/>;
 
    constexpr decltype(auto) operator[](difference_type n) const
      requires random_access_range</*Base*/>
    {
      return *(*this + n);
    }
 
    friend constexpr bool operator==(const /*iterator*/& x, default_sentinel_t);
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable<iterator_t</*Base*/>>;
 
    friend constexpr bool operator<(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator<=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
 
    friend constexpr bool operator>=(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/>;
 
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires random_access_range</*Base*/> && three_way_comparable<iterator_t</*Base*/>>
    ;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& x, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator+(difference_type n, const /*iterator*/& x)
      requires random_access_range</*Base*/>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& x, difference_type n)
      requires random_access_range</*Base*/>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires sized_sentinel_for<iterator_t</*Base*/>, iterator_t</*Base*/>>;
 
    friend constexpr difference_type operator-(default_sentinel_t y,
                                               const /*iterator*/& x)
      requires sized_sentinel_for<sentinel_t</*Base*/>, iterator_t</*Base*/>>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               default_sentinel_t y)
      requires sized_sentinel_for<sentinel_t</*Base*/>, iterator_t</*Base*/>>;
 
    friend constexpr range_rvalue_reference_t</*Base*/> iter_move(
      const /*iterator*/& i) noexcept(noexcept(ranges::iter_move(i./*current_*/)));
 
    friend constexpr void iter_swap(
      const /*iterator*/& x,
      const /*iterator*/& y) noexcept(noexcept(ranges::iter_swap(x./*current_*/,
                                                                 y./*current_*/)))
      requires indirectly_swappable<iterator_t</*Base*/>>;
  };
}

```

#### Class template std::ranges::cartesian_product_view

```
namespace std::ranges {
  template<bool Const, class First, class... Vs>
  concept /*cartesian-product-is-random-access*/ = // exposition-only
    (random_access_range</*maybe-const*/<Const, First>> && ... &&
     (random_access_range</*maybe-const*/<Const, Vs>> &&
      sized_range</*maybe-const*/<Const, Vs>>));
 
  template<class R>
  concept /*cartesian-product-common-arg*/ = // exposition-only
    common_range<R> || (sized_range<R> && random_access_range<R>);
 
  template<bool Const, class First, class... Vs>
  concept /*cartesian-product-is-bidirectional*/ = // exposition-only
    (bidirectional_range</*maybe-const*/<Const, First>> && ... &&
     (bidirectional_range</*maybe-const*/<Const, Vs>> &&
      /*cartesian-product-common-arg*/</*maybe-const*/<Const, Vs>>));
 
  template<class First, class...>
  concept /*cartesian-product-is-common*/ = // exposition-only
    /*cartesian-product-common-arg*/<First>;
 
  template<class... Vs>
  concept /*cartesian-product-is-sized*/ = // exposition-only
    (sized_range<Vs> && ...);
 
  template<bool Const, template<class> class FirstSent, class First, class... Vs>
  concept /*cartesian-is-sized-sentinel*/ = // exposition-only
    (sized_sentinel_for<FirstSent</*maybe-const*/<Const, First>>,
                        iterator_t</*maybe-const*/<Const, First>>> &&
     ... &&
     (sized_range</*maybe-const*/<Const, Vs>> &&
      sized_sentinel_for<iterator_t</*maybe-const*/<Const, Vs>>,
                         iterator_t</*maybe-const*/<Const, Vs>>>));
 
  template</*cartesian-product-common-arg*/ R>
  constexpr auto /*cartesian-common-arg-end*/(R& r)
  { // exposition-only
    if constexpr (common_range<R>) {
      return ranges::end(r);
    } else {
      return ranges::begin(r) + ranges::distance(r);
    }
  }
 
  template<input_range First, forward_range... Vs>
    requires(view<First> && ... && view<Vs>)
  class cartesian_product_view
    : public view_interface<cartesian_product_view<First, Vs...>>
  {
  private:
    tuple<First, Vs...> /*bases_*/; // exposition-only
    // class template cartesian_product_view::iterator
    template<bool Const>
    class /*iterator*/; // exposition-only
 
  public:
    constexpr cartesian_product_view() = default;
    constexpr explicit cartesian_product_view(First first_base, Vs... bases);
 
    constexpr /*iterator*/<false> begin()
      requires(!/*simple-view*/<First> || ... || !/*simple-view*/<Vs>);
    constexpr /*iterator*/<true> begin() const
      requires(range<const First> && ... && range<const Vs>);
 
    constexpr /*iterator*/<false> end()
      requires((!/*simple-view*/<First> || ... || !/*simple-view*/<Vs>) &&
               /*cartesian-product-is-common*/<First, Vs...>);
    constexpr /*iterator*/<true> end() const
      requires /*cartesian-product-is-common*/<const First, const Vs...>;
    constexpr default_sentinel_t end() const noexcept;
 
    constexpr /* see description */ size()
      requires /*cartesian-product-is-sized*/<First, Vs...>;
    constexpr /* see description */ size() const
      requires /*cartesian-product-is-sized*/<const First, const Vs...>;
  };
 
  template<class... Vs>
  cartesian_product_view(Vs&&...) -> cartesian_product_view<views::all_t<Vs>...>;
}

```

#### Class template std::ranges::cartesian_product_view::iterator

```
namespace std::ranges {
  template<input_range First, forward_range... Vs>
    requires(view<First> && ... && view<Vs>)
  template<bool Const>
  class cartesian_product_view<First, Vs...>::/*iterator*/
  {
  public:
    using iterator_category = input_iterator_tag;
    using iterator_concept  = /* see description */;
    using value_type        = tuple<range_value_t</*maybe-const*/<Const, First>>,
                             range_value_t</*maybe-const*/<Const, Vs>>...>;
    using reference         = tuple<range_reference_t</*maybe-const*/<Const, First>>,
                            range_reference_t</*maybe-const*/<Const, Vs>>...>;
    using difference_type   = /* see description */;
 
    /*iterator*/()          = default;
 
    constexpr /*iterator*/(/*iterator*/<!Const> i)
      requires Const && (convertible_to<iterator_t<First>, iterator_t<const First>> &&
                         ... && convertible_to<iterator_t<Vs>, iterator_t<const Vs>>);
 
    constexpr auto operator*() const;
    constexpr /*iterator*/& operator++();
    constexpr void operator++(int);
    constexpr /*iterator*/ operator++(int)
      requires forward_range</*maybe-const*/<Const, First>>;
 
    constexpr /*iterator*/& operator--()
      requires /*cartesian-product-is-bidirectional*/<Const, First, Vs...>;
    constexpr /*iterator*/ operator--(int)
      requires /*cartesian-product-is-bidirectional*/<Const, First, Vs...>;
 
    constexpr /*iterator*/& operator+=(difference_type x)
      requires /*cartesian-product-is-random-access*/<Const, First, Vs...>;
    constexpr /*iterator*/& operator-=(difference_type x)
      requires /*cartesian-product-is-random-access*/<Const, First, Vs...>;
 
    constexpr reference operator[](difference_type n) const
      requires /*cartesian-product-is-random-access*/<Const, First, Vs...>;
 
    friend constexpr bool operator==(const /*iterator*/& x, const /*iterator*/& y)
      requires equality_comparable<iterator_t</*maybe-const*/<Const, First>>>;
 
    friend constexpr bool operator==(const /*iterator*/& x, default_sentinel_t);
 
    friend constexpr auto operator<=>(const /*iterator*/& x, const /*iterator*/& y)
      requires /*all-random-access*/<Const, First, Vs...>;
 
    friend constexpr /*iterator*/ operator+(const /*iterator*/& x, difference_type y)
      requires /*cartesian-product-is-random-access*/<Const, First, Vs...>;
    friend constexpr /*iterator*/ operator+(difference_type x, const /*iterator*/& y)
      requires /*cartesian-product-is-random-access*/<Const, First, Vs...>;
    friend constexpr /*iterator*/ operator-(const /*iterator*/& x, difference_type y)
      requires /*cartesian-product-is-random-access*/<Const, First, Vs...>;
    friend constexpr difference_type operator-(const /*iterator*/& x,
                                               const /*iterator*/& y)
      requires /*cartesian-is-sized-sentinel*/<Const, iterator_t, First, Vs...>;
 
    friend constexpr difference_type operator-(const /*iterator*/& i, default_sentinel_t)
      requires /*cartesian-is-sized-sentinel*/<Const, sentinel_t, First, Vs...>;
    friend constexpr difference_type operator-(default_sentinel_t, const /*iterator*/& i)
      requires /*cartesian-is-sized-sentinel*/<Const, sentinel_t, First, Vs...>;
 
    friend constexpr auto iter_move(const /*iterator*/& i) noexcept(
      /* see description */);
 
    friend constexpr void iter_swap(const /*iterator*/& l,
                                    const /*iterator*/& r) noexcept(/* see description */)
      requires(indirectly_swappable<iterator_t</*maybe-const*/<Const, First>>> && ... &&
               indirectly_swappable<iterator_t</*maybe-const*/<Const, Vs>>>);
 
  private:
    using /*Parent*/ = /*maybe-const*/<Const, cartesian_product_view>; // exposition-only
    /*Parent*/* /*parent_*/ = nullptr;                                 // exposition-only
    tuple<iterator_t</*maybe-const*/<Const, First>>,
          iterator_t</*maybe-const*/<Const, Vs>>...>
      /*current_*/; // exposition-only
 
    template<size_t N = sizeof...(Vs)>
    constexpr void /*next*/(); // exposition-only
 
    template<size_t N = sizeof...(Vs)>
    constexpr void /*prev*/(); // exposition-only
 
    template<class Tuple>
    constexpr difference_type /*distance-from*/(const Tuple& t) const; // exposition-only
 
    constexpr /*iterator*/(
      /*Parent*/& parent,
      tuple<iterator_t</*maybe-const*/<Const, First>>,
            iterator_t</*maybe-const*/<Const, Vs>>...> current); // exposition-only
  };
}

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3914 | C++23 | the constraint of std::ranges::enumerate_view was incorrectly specified in the synopsis | corrected |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/ranges&oldid=176003>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 10 September 2024, at 08:46.