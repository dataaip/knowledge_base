# Standard library header <algorithm>

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | ****<algorithm>**** | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

This header is part of the algorithm library.

|  |  |
| --- | --- |
| Includes | |
| <initializer_list>(C++11) | std::initializer_list class template |
| Classes | |
| Defined in namespace `std::ranges` | |
| Return types (C++20) | |
| ranges::in_fun_result(C++20) | provides a way to store an iterator and a function object as a single unit   (class template) |
| ranges::in_in_result(C++20) | provides a way to store two iterators as a single unit   (class template) |
| ranges::in_out_result(C++20) | provides a way to store two iterators as a single unit   (class template) |
| ranges::in_in_out_result(C++20) | provides a way to store three iterators as a single unit   (class template) |
| ranges::in_out_out_result(C++20) | provides a way to store three iterators as a single unit   (class template) |
| ranges::min_max_result(C++20) | provides a way to store two objects or references of the same type as a single unit   (class template) |
| ranges::in_found_result(C++20) | provides a way to store an iterator and a boolean flag as a single unit   (class template) |
| ranges::in_value_result(C++23) | provides a way to store an iterator and a value as a single unit   (class template) |
| ranges::out_value_result(C++23) | provides a way to store an iterator and a value as a single unit   (class template) |
| Functions | |
| Non-modifying sequence operations | |
| all_ofany_ofnone_of(C++11)(C++11)(C++11) | checks if a predicate is true for all, any or none of the elements in a range   (function template) |
| for_each | applies a function to a range of elements   (function template) |
| for_each_n(C++17) | applies a function object to the first N elements of a sequence   (function template) |
| countcount_if | returns the number of elements satisfying specific criteria   (function template) |
| mismatch | finds the first position where two ranges differ   (function template) |
| findfind_iffind_if_not(C++11) | finds the first element satisfying specific criteria   (function template) |
| find_end | finds the last sequence of elements in a certain range   (function template) |
| find_first_of | searches for any one of a set of elements   (function template) |
| adjacent_find | finds the first two adjacent items that are equal (or satisfy a given predicate)   (function template) |
| search | searches for the first occurrence of a range of elements   (function template) |
| search_n | searches for the first occurrence of a number consecutive copies of an element in a range   (function template) |
| Modifying sequence operations | |
| copycopy_if(C++11) | copies a range of elements to a new location   (function template) |
| copy_n(C++11) | copies a number of elements to a new location   (function template) |
| copy_backward | copies a range of elements in backwards order   (function template) |
| move(C++11) | moves a range of elements to a new location   (function template) |
| move_backward(C++11) | moves a range of elements to a new location in backwards order   (function template) |
| fill | copy-assigns the given value to every element in a range   (function template) |
| fill_n | copy-assigns the given value to N elements in a range   (function template) |
| transform | applies a function to a range of elements, storing results in a destination range   (function template) |
| generate | assigns the results of successive function calls to every element in a range   (function template) |
| generate_n | assigns the results of successive function calls to N elements in a range   (function template) |
| removeremove_if | removes elements satisfying specific criteria   (function template) |
| remove_copyremove_copy_if | copies a range of elements omitting those that satisfy specific criteria   (function template) |
| replacereplace_if | replaces all values satisfying specific criteria with another value   (function template) |
| replace_copyreplace_copy_if | copies a range, replacing elements satisfying specific criteria with another value   (function template) |
| swap | swaps the values of two objects   (function template) |
| swap_ranges | swaps two ranges of elements   (function template) |
| iter_swap | swaps the elements pointed to by two iterators   (function template) |
| reverse | reverses the order of elements in a range   (function template) |
| reverse_copy | creates a copy of a range that is reversed   (function template) |
| rotate | rotates the order of elements in a range   (function template) |
| rotate_copy | copies and rotate a range of elements   (function template) |
| shift_leftshift_right(C++20) | shifts elements in a range   (function template) |
| random_shuffleshuffle(until C++17)(C++11) | randomly re-orders elements in a range   (function template) |
| sample(C++17) | selects N random elements from a sequence   (function template) |
| unique | removes consecutive duplicate elements in a range   (function template) |
| unique_copy | creates a copy of some range of elements that contains no consecutive duplicates   (function template) |
| Partitioning operations | |
| is_partitioned(C++11) | determines if the range is partitioned by the given predicate   (function template) |
| partition | divides a range of elements into two groups   (function template) |
| partition_copy(C++11) | copies a range dividing the elements into two groups   (function template) |
| stable_partition | divides elements into two groups while preserving their relative order   (function template) |
| partition_point(C++11) | locates the partition point of a partitioned range   (function template) |
| Sorting operations | |
| is_sorted(C++11) | checks whether a range is sorted into ascending order   (function template) |
| is_sorted_until(C++11) | finds the largest sorted subrange   (function template) |
| sort | sorts a range into ascending order   (function template) |
| partial_sort | sorts the first N elements of a range   (function template) |
| partial_sort_copy | copies and partially sorts a range of elements   (function template) |
| stable_sort | sorts a range of elements while preserving order between equal elements   (function template) |
| nth_element | partially sorts the given range making sure that it is partitioned by the given element   (function template) |
| Binary search operations (on sorted ranges) | |
| lower_bound | returns an iterator to the first element **not less** than the given value   (function template) |
| upper_bound | returns an iterator to the first element **greater** than a certain value   (function template) |
| binary_search | determines if an element exists in a partially-ordered range   (function template) |
| equal_range | returns range of elements matching a specific key   (function template) |
| Other operations on sorted ranges | |
| merge | merges two sorted ranges   (function template) |
| inplace_merge | merges two ordered ranges in-place   (function template) |
| Set operations (on sorted ranges) | |
| includes | returns true if one sequence is a subsequence of another   (function template) |
| set_difference | computes the difference between two sets   (function template) |
| set_intersection | computes the intersection of two sets   (function template) |
| set_symmetric_difference | computes the symmetric difference between two sets   (function template) |
| set_union | computes the union of two sets   (function template) |
| Heap operations | |
| is_heap(C++11) | checks if the given range is a max heap   (function template) |
| is_heap_until(C++11) | finds the largest subrange that is a max heap   (function template) |
| make_heap | creates a max heap out of a range of elements   (function template) |
| push_heap | adds an element to a max heap   (function template) |
| pop_heap | removes the largest element from a max heap   (function template) |
| sort_heap | turns a max heap into a range of elements sorted in ascending order   (function template) |
| Minimum/maximum operations | |
| max | returns the greater of the given values   (function template) |
| max_element | returns the largest element in a range   (function template) |
| min | returns the smaller of the given values   (function template) |
| min_element | returns the smallest element in a range   (function template) |
| minmax(C++11) | returns the smaller and larger of two elements   (function template) |
| minmax_element(C++11) | returns the smallest and the largest elements in a range   (function template) |
| clamp(C++17) | clamps a value between a pair of boundary values   (function template) |
| Comparison operations | |
| equal | determines if two sets of elements are the same   (function template) |
| lexicographical_compare | returns true if one range is lexicographically less than another   (function template) |
| lexicographical_compare_three_way(C++20) | compares two ranges using three-way comparison   (function template) |
| Permutation operations | |
| is_permutation(C++11) | determines if a sequence is a permutation of another sequence   (function template) |
| next_permutation | generates the next greater lexicographic permutation of a range of elements   (function template) |
| prev_permutation | generates the next smaller lexicographic permutation of a range of elements   (function template) |
| Function-like entities (C++20) | |
| Defined in namespace `std::ranges` | |
| Non-modifying sequence operations | |
| ranges::all_ofranges::any_ofranges::none_of(C++20)(C++20)(C++20) | checks if a predicate is true for all, any or none of the elements in a range (algorithm function object) |
| ranges::for_each(C++20) | applies a function to a range of elements (algorithm function object) |
| ranges::for_each_n(C++20) | applies a function object to the first N elements of a sequence (algorithm function object) |
| ranges::countranges::count_if(C++20)(C++20) | returns the number of elements satisfying specific criteria (algorithm function object) |
| ranges::mismatch(C++20) | finds the first position where two ranges differ (algorithm function object) |
| ranges::findranges::find_ifranges::find_if_not(C++20)(C++20)(C++20) | finds the first element satisfying specific criteria (algorithm function object) |
| ranges::find_lastranges::find_last_ifranges::find_last_if_not(C++23)(C++23)(C++23) | finds the last element satisfying specific criteria (algorithm function object) |
| ranges::find_end(C++20) | finds the last sequence of elements in a certain range (algorithm function object) |
| ranges::find_first_of(C++20) | searches for any one of a set of elements (algorithm function object) |
| ranges::adjacent_find(C++20) | finds the first two adjacent items that are equal (or satisfy a given predicate) (algorithm function object) |
| ranges::search(C++20) | searches for the first occurrence of a range of elements (algorithm function object) |
| ranges::search_n(C++20) | searches for the first occurrence of a number consecutive copies of an element in a range (algorithm function object) |
| ranges::containsranges::contains_subrange(C++23)(C++23) | checks if the range contains the given element or subrange (algorithm function object) |
| ranges::starts_with(C++23) | checks whether a range starts with another range (algorithm function object) |
| ranges::ends_with(C++23) | checks whether a range ends with another range (algorithm function object) |
| Fold operations | |
| ranges::fold_left(C++23) | left-folds a range of elements (algorithm function object) |
| ranges::fold_left_first(C++23) | left-folds a range of elements using the first element as an initial value (algorithm function object) |
| ranges::fold_right(C++23) | right-folds a range of elements (algorithm function object) |
| ranges::fold_right_last(C++23) | right-folds a range of elements using the last element as an initial value (algorithm function object) |
| ranges::fold_left_with_iter(C++23) | left-folds a range of elements, and returns a pair (iterator, value) (algorithm function object) |
| ranges::fold_left_first_with_iter(C++23) | left-folds a range of elements using the first element as an initial value, and returns a pair (iterator, optional) (algorithm function object) |
| Modifying sequence operations | |
| ranges::copyranges::copy_if(C++20)(C++20) | copies a range of elements to a new location (algorithm function object) |
| ranges::copy_n(C++20) | copies a number of elements to a new location (algorithm function object) |
| ranges::copy_backward(C++20) | copies a range of elements in backwards order (algorithm function object) |
| ranges::move(C++20) | moves a range of elements to a new location (algorithm function object) |
| ranges::move_backward(C++20) | moves a range of elements to a new location in backwards order (algorithm function object) |
| ranges::fill(C++20) | assigns a range of elements a certain value (algorithm function object) |
| ranges::fill_n(C++20) | assigns a value to a number of elements (algorithm function object) |
| ranges::transform(C++20) | applies a function to a range of elements (algorithm function object) |
| ranges::generate(C++20) | saves the result of a function in a range (algorithm function object) |
| ranges::generate_n(C++20) | saves the result of N applications of a function (algorithm function object) |
| ranges::removeranges::remove_if(C++20)(C++20) | removes elements satisfying specific criteria (algorithm function object) |
| ranges::remove_copyranges::remove_copy_if(C++20)(C++20) | copies a range of elements omitting those that satisfy specific criteria (algorithm function object) |
| ranges::replaceranges::replace_if(C++20)(C++20) | replaces all values satisfying specific criteria with another value (algorithm function object) |
| ranges::replace_copyranges::replace_copy_if(C++20)(C++20) | copies a range, replacing elements satisfying specific criteria with another value (algorithm function object) |
| ranges::swap_ranges(C++20) | swaps two ranges of elements (algorithm function object) |
| ranges::reverse(C++20) | reverses the order of elements in a range (algorithm function object) |
| ranges::reverse_copy(C++20) | creates a copy of a range that is reversed (algorithm function object) |
| ranges::rotate(C++20) | rotates the order of elements in a range (algorithm function object) |
| ranges::rotate_copy(C++20) | copies and rotate a range of elements (algorithm function object) |
| ranges::shift_leftranges::shift_right(C++23) | shifts elements in a range (algorithm function object) |
| ranges::sample(C++20) | selects N random elements from a sequence (algorithm function object) |
| ranges::shuffle(C++20) | randomly re-orders elements in a range (algorithm function object) |
| ranges::unique(C++20) | removes consecutive duplicate elements in a range (algorithm function object) |
| ranges::unique_copy(C++20) | creates a copy of some range of elements that contains no consecutive duplicates (algorithm function object) |
| Partitioning operations | |
| ranges::is_partitioned(C++20) | determines if the range is partitioned by the given predicate (algorithm function object) |
| ranges::partition(C++20) | divides a range of elements into two groups (algorithm function object) |
| ranges::partition_copy(C++20) | copies a range dividing the elements into two groups (algorithm function object) |
| ranges::stable_partition(C++20) | divides elements into two groups while preserving their relative order (algorithm function object) |
| ranges::partition_point(C++20) | locates the partition point of a partitioned range (algorithm function object) |
| Sorting operations | |
| ranges::is_sorted(C++20) | checks whether a range is sorted into ascending order (algorithm function object) |
| ranges::is_sorted_until(C++20) | finds the largest sorted subrange (algorithm function object) |
| ranges::sort(C++20) | sorts a range into ascending order (algorithm function object) |
| ranges::partial_sort(C++20) | sorts the first N elements of a range (algorithm function object) |
| ranges::partial_sort_copy(C++20) | copies and partially sorts a range of elements (algorithm function object) |
| ranges::stable_sort(C++20) | sorts a range of elements while preserving order between equal elements (algorithm function object) |
| ranges::nth_element(C++20) | partially sorts the given range making sure that it is partitioned by the given element (algorithm function object) |
| Binary search operations (on sorted ranges) | |
| ranges::lower_bound(C++20) | returns an iterator to the first element **not less** than the given value (algorithm function object) |
| ranges::upper_bound(C++20) | returns an iterator to the first element **greater** than a certain value (algorithm function object) |
| ranges::binary_search(C++20) | determines if an element exists in a partially-ordered range (algorithm function object) |
| ranges::equal_range(C++20) | returns range of elements matching a specific key (algorithm function object) |
| Other operations on sorted ranges | |
| ranges::merge(C++20) | merges two sorted ranges (algorithm function object) |
| ranges::inplace_merge(C++20) | merges two ordered ranges in-place (algorithm function object) |
| Set operations (on sorted ranges) | |
| ranges::includes(C++20) | returns true if one sequence is a subsequence of another (algorithm function object) |
| ranges::set_difference(C++20) | computes the difference between two sets (algorithm function object) |
| ranges::set_intersection(C++20) | computes the intersection of two sets (algorithm function object) |
| ranges::set_symmetric_difference(C++20) | computes the symmetric difference between two sets (algorithm function object) |
| ranges::set_union(C++20) | computes the union of two sets (algorithm function object) |
| Heap operations | |
| ranges::is_heap(C++20) | checks if the given range is a max heap (algorithm function object) |
| ranges::is_heap_until(C++20) | finds the largest subrange that is a max heap (algorithm function object) |
| ranges::make_heap(C++20) | creates a max heap out of a range of elements (algorithm function object) |
| ranges::push_heap(C++20) | adds an element to a max heap (algorithm function object) |
| ranges::pop_heap(C++20) | removes the largest element from a max heap (algorithm function object) |
| ranges::sort_heap(C++20) | turns a max heap into a range of elements sorted in ascending order (algorithm function object) |
| Minimum/maximum operations | |
| ranges::max(C++20) | returns the greater of the given values (algorithm function object) |
| ranges::max_element(C++20) | returns the largest element in a range (algorithm function object) |
| ranges::min(C++20) | returns the smaller of the given values (algorithm function object) |
| ranges::min_element(C++20) | returns the smallest element in a range (algorithm function object) |
| ranges::minmax(C++20) | returns the smaller and larger of two elements (algorithm function object) |
| ranges::minmax_element(C++20) | returns the smallest and the largest elements in a range (algorithm function object) |
| ranges::clamp(C++20) | clamps a value between a pair of boundary values (algorithm function object) |
| Comparison operations | |
| ranges::equal(C++20) | determines if two sets of elements are the same (algorithm function object) |
| ranges::lexicographical_compare(C++20) | returns true if one range is lexicographically less than another (algorithm function object) |
| Permutation operations | |
| ranges::is_permutation(C++20) | determines if a sequence is a permutation of another sequence (algorithm function object) |
| ranges::next_permutation(C++20) | generates the next greater lexicographic permutation of a range of elements (algorithm function object) |
| ranges::prev_permutation(C++20) | generates the next smaller lexicographic permutation of a range of elements (algorithm function object) |

### Synopsis

```
#include <initializer_list>
 
namespace std {
  namespace ranges {
    // algorithm result types
    template<class I, class F>
      struct in_fun_result;
 
    template<class I1, class I2>
      struct in_in_result;
 
    template<class I, class O>
      struct in_out_result;
 
    template<class I1, class I2, class O>
      struct in_in_out_result;
 
    template<class I, class O1, class O2>
      struct in_out_out_result;
 
    template<class T>
      struct min_max_result;
 
    template<class I>
      struct in_found_result;
 
    template<class I, class T>
      struct in_value_result;
 
    template<class O, class T>
      struct out_value_result;
  }
 
  // non-modifying sequence operations
  // all of
  template<class InputIter, class Pred>
    constexpr bool all_of(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    bool all_of(ExecutionPolicy&& exec,
                ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr bool all_of(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr bool all_of(R&& r, Pred pred, Proj proj = {});
  }
 
  // any of
  template<class InputIter, class Pred>
    constexpr bool any_of(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    bool any_of(ExecutionPolicy&& exec,
                ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr bool any_of(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr bool any_of(R&& r, Pred pred, Proj proj = {});
  }
 
  // none of
  template<class InputIter, class Pred>
    constexpr bool none_of(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    bool none_of(ExecutionPolicy&& exec,
                 ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr bool none_of(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr bool none_of(R&& r, Pred pred, Proj proj = {});
  }
 
  // contains
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>>
      requires indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
      constexpr bool contains(I first, S last, const T& value, Proj proj = {});
    template<input_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>>
      requires indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T*>
      constexpr bool contains(R&& r, const T& value, Proj proj = {});
 
    template<forward_iterator I1, sentinel_for<I1> S1,
             forward_iterator I2, sentinel_for<I2> S2,
             class Pred = ranges::equal_to, class Proj1 = identity,
             class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr bool contains_subrange(I1 first1, S1 last1, I2 first2, S2 last2,
                                       Pred pred = {}, Proj1 proj1 = {},
                                       Proj2 proj2 = {});
    template<forward_range R1, forward_range R2,
             class Pred = ranges::equal_to, class Proj1 = identity,
             class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr bool contains_subrange(R1&& r1, R2&& r2,
                                       Pred pred = {}, Proj1 proj1 = {},
                                       Proj2 proj2 = {});
  }
 
  // for each
  template<class InputIter, class Function>
    constexpr Function for_each(InputIter first, InputIter last, Function f);
  template<class ExecutionPolicy, class ForwardIter, class Function>
    void for_each(ExecutionPolicy&& exec,
                  ForwardIter first, ForwardIter last, Function f);
 
  namespace ranges {
    template<class I, class F>
      using for_each_result = in_fun_result<I, F>;
 
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirectly_unary_invocable<projected<I, Proj>> Fun>
      constexpr for_each_result<I, Fun>
        for_each(I first, S last, Fun f, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirectly_unary_invocable<projected<iterator_t<R>, Proj>> Fun>
      constexpr for_each_result<borrowed_iterator_t<R>, Fun>
        for_each(R&& r, Fun f, Proj proj = {});
  }
 
  template<class InputIter, class Size, class Function>
    constexpr InputIter for_each_n(InputIter first, Size n, Function f);
  template<class ExecutionPolicy, class ForwardIter, class Size, class Function>
    ForwardIter for_each_n(ExecutionPolicy&& exec,
                           ForwardIter first, Size n, Function f);
 
  namespace ranges {
    template<class I, class F>
      using for_each_n_result = in_fun_result<I, F>;
 
    template<input_iterator I, class Proj = identity,
             indirectly_unary_invocable<projected<I, Proj>> Fun>
      constexpr for_each_n_result<I, Fun>
        for_each_n(I first, iter_difference_t<I> n, Fun f, Proj proj = {});
  }
 
  // find
  template<class InputIter, class T = typename iterator_traits<InputIter>::value_type>
    constexpr InputIter find(InputIter first, InputIter last, const T& value);
  template<class ExecutionPolicy, class ForwardIter,
           class T = typename iterator_traits<InputIter>::value_type>
    ForwardIter find(ExecutionPolicy&& exec,
                     ForwardIter first, ForwardIter last, const T& value);
  template<class InputIter, class Pred>
    constexpr InputIter find_if(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    ForwardIter find_if(ExecutionPolicy&& exec,
                        ForwardIter first, ForwardIter last, Pred pred);
  template<class InputIter, class Pred>
    constexpr InputIter find_if_not(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    ForwardIter find_if_not(ExecutionPolicy&& exec,
                            ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity
             class T = projected_value_t<I, Proj>>
      requires indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
      constexpr I find(I first, S last, const T& value, Proj proj = {});
    template<input_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>>
      requires indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T*>
      constexpr borrowed_iterator_t<R>
        find(R&& r, const T& value, Proj proj = {});
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr I find_if(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr borrowed_iterator_t<R>
        find_if(R&& r, Pred pred, Proj proj = {});
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr I find_if_not(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr borrowed_iterator_t<R>
        find_if_not(R&& r, Pred pred, Proj proj = {});
  }
 
  // find last
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class T, class Proj = identity>
      requires indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
      constexpr subrange<I> find_last(I first, S last, const T& value, Proj proj = {});
    template<forward_range R, class T, class Proj = identity>
      requires
        indirect_binary_predicate<ranges::equal_to,
            projected<iterator_t<R>, Proj>, const T*>
      constexpr borrowed_subrange_t<R> find_last(R&& r, const T& value, Proj proj = {});
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr subrange<I> find_last_if(I first, S last, Pred pred, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr borrowed_subrange_t<R> find_last_if(R&& r, Pred pred, Proj proj = {});
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr subrange<I> find_last_if_not(I first, S last, Pred pred, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr borrowed_subrange_t<R> find_last_if_not(R&& r, Pred pred, Proj proj = {});
  }
 
  // find end
  template<class ForwardIter1, class ForwardIter2>
    constexpr ForwardIter1
      find_end(ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2);
  template<class ForwardIter1, class ForwardIter2, class BinaryPred>
    constexpr ForwardIter1
      find_end(ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2,
               BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter1
      find_end(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1,
           class ForwardIter2, class BinaryPred>
    ForwardIter1
      find_end(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2,
               BinaryPred pred);
 
  namespace ranges {
    template<forward_iterator I1, sentinel_for<I1> S1, forward_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr subrange<I1>
        find_end(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},
                 Proj1 proj1 = {}, Proj2 proj2 = {});
    template<forward_range R1, forward_range R2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr borrowed_subrange_t<R1>
        find_end(R1&& r1, R2&& r2, Pred pred = {},
                 Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // find first
  template<class InputIter, class ForwardIter>
    constexpr InputIter
      find_first_of(InputIter first1, InputIter last1,
                    ForwardIter first2, ForwardIter last2);
  template<class InputIter, class ForwardIter, class BinaryPred>
    constexpr InputIter
      find_first_of(InputIter first1, InputIter last1,
                    ForwardIter first2, ForwardIter last2,
                    BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter1
      find_first_of(ExecutionPolicy&& exec,
                    ForwardIter1 first1, ForwardIter1 last1,
                    ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1,
           class ForwardIter2, class BinaryPred>
    ForwardIter1
      find_first_of(ExecutionPolicy&& exec,
                    ForwardIter1 first1, ForwardIter1 last1,
                    ForwardIter2 first2, ForwardIter2 last2,
                    BinaryPred pred);
 
  namespace ranges {
    template<input_iterator I1, sentinel_for<I1> S1, forward_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr I1 find_first_of(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},
                                 Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, forward_range R2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr borrowed_iterator_t<R1>
        find_first_of(R1&& r1, R2&& r2, Pred pred = {},
                      Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // adjacent find
  template<class ForwardIter>
    constexpr ForwardIter adjacent_find(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class BinaryPred>
    constexpr ForwardIter adjacent_find(ForwardIter first, ForwardIter last,
                                        BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter adjacent_find(ExecutionPolicy&& exec,
                              ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class BinaryPred>
    ForwardIter adjacent_find(ExecutionPolicy&& exec,
                              ForwardIter first, ForwardIter last, BinaryPred pred);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_binary_predicate<projected<I, Proj>,
                                       projected<I, Proj>> Pred = ranges::equal_to>
      constexpr I adjacent_find(I first, S last, Pred pred = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_binary_predicate<projected<iterator_t<R>, Proj>,
                                       projected<iterator_t<R>, Proj>>
                                         Pred = ranges::equal_to>
      constexpr borrowed_iterator_t<R>
        adjacent_find(R&& r, Pred pred = {}, Proj proj = {});
  }
 
  // count
  template<class InputIter, class T = typename iterator_traits<InputIter>::value_type>
    constexpr typename iterator_traits<InputIter>::difference_type
      count(InputIter first, InputIter last, const T& value);
  template<class ExecutionPolicy, class ForwardIter,
           class T = typename iterator_traits<InputIterator>::value_type>
    typename iterator_traits<ForwardIter>::difference_type
      count(ExecutionPolicy&& exec,
            ForwardIter first, ForwardIter last, const T& value);
  template<class InputIter, class Pred>
    constexpr typename iterator_traits<InputIter>::difference_type
      count_if(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    typename iterator_traits<ForwardIter>::difference_type
      count_if(ExecutionPolicy&& exec,
               ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>>
      requires indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
      constexpr iter_difference_t<I>
        count(I first, S last, const T& value, Proj proj = {});
    template<input_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>>
      requires indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T*>
      constexpr range_difference_t<R>
        count(R&& r, const T& value, Proj proj = {});
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr iter_difference_t<I>
        count_if(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr range_difference_t<R>
        count_if(R&& r, Pred pred, Proj proj = {});
  }
 
  // mismatch
  template<class InputIter1, class InputIter2>
    constexpr pair<InputIter1, InputIter2>
      mismatch(InputIter1 first1, InputIter1 last1,
               InputIter2 first2);
  template<class InputIter1, class InputIter2, class BinaryPred>
    constexpr pair<InputIter1, InputIter2>
      mismatch(InputIter1 first1, InputIter1 last1,
               InputIter2 first2, BinaryPred pred);
  template<class InputIter1, class InputIter2>
    constexpr pair<InputIter1, InputIter2>
      mismatch(InputIter1 first1, InputIter1 last1,
               InputIter2 first2, InputIter2 last2);
  template<class InputIter1, class InputIter2, class BinaryPred>
    constexpr pair<InputIter1, InputIter2>
      mismatch(InputIter1 first1, InputIter1 last1,
               InputIter2 first2, InputIter2 last2,
               BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    pair<ForwardIter1, ForwardIter2>
      mismatch(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class BinaryPred>
    pair<ForwardIter1, ForwardIter2>
      mismatch(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    pair<ForwardIter1, ForwardIter2>
      mismatch(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class BinaryPred>
    pair<ForwardIter1, ForwardIter2>
      mismatch(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2,
               BinaryPred pred);
 
  namespace ranges {
    template<class I1, class I2>
      using mismatch_result = in_in_result<I1, I2>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to, class Proj1 = identity,
             class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr mismatch_result<I1, I2>
        mismatch(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},
                 Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2,
             class Pred = ranges::equal_to, class Proj1 = identity,
             class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr mismatch_result<borrowed_iterator_t<R1>, borrowed_iterator_t<R2>>
        mismatch(R1&& r1, R2&& r2, Pred pred = {},
                 Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // equal
  template<class InputIter1, class InputIter2>
    constexpr bool equal(InputIter1 first1, InputIter1 last1,
                         InputIter2 first2);
  template<class InputIter1, class InputIter2, class BinaryPred>
    constexpr bool equal(InputIter1 first1, InputIter1 last1,
                         InputIter2 first2, BinaryPred pred);
  template<class InputIter1, class InputIter2>
    constexpr bool equal(InputIter1 first1, InputIter1 last1,
                         InputIter2 first2, InputIter2 last2);
  template<class InputIter1, class InputIter2, class BinaryPred>
    constexpr bool equal(InputIter1 first1, InputIter1 last1,
                         InputIter2 first2, InputIter2 last2,
                         BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    bool equal(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class BinaryPred>
    bool equal(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    bool equal(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class BinaryPred>
    bool equal(ExecutionPolicy&& exec,
               ForwardIter1 first1, ForwardIter1 last1,
               ForwardIter2 first2, ForwardIter2 last2,
               BinaryPred pred);
 
  namespace ranges {
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to, class Proj1 = identity,
             class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr bool equal(I1 first1, S1 last1, I2 first2, S2 last2,
                           Pred pred = {},
                           Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr bool equal(R1&& r1, R2&& r2, Pred pred = {},
                           Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // is permutation
  template<class ForwardIter1, class ForwardIter2>
    constexpr bool is_permutation(ForwardIter1 first1, ForwardIter1 last1,
                                  ForwardIter2 first2);
  template<class ForwardIter1, class ForwardIter2, class BinaryPred>
    constexpr bool is_permutation(ForwardIter1 first1, ForwardIter1 last1,
                                  ForwardIter2 first2, BinaryPred pred);
  template<class ForwardIter1, class ForwardIter2>
    constexpr bool is_permutation(ForwardIter1 first1, ForwardIter1 last1,
                                  ForwardIter2 first2, ForwardIter2 last2);
  template<class ForwardIter1, class ForwardIter2, class BinaryPred>
    constexpr bool is_permutation(ForwardIter1 first1, ForwardIter1 last1,
                                  ForwardIter2 first2, ForwardIter2 last2,
                                  BinaryPred pred);
 
  namespace ranges {
    template<forward_iterator I1, sentinel_for<I1> S1, forward_iterator I2,
             sentinel_for<I2> S2, class Proj1 = identity, class Proj2 = identity,
             indirect_equivalence_relation<projected<I1, Proj1>,
                                           projected<I2, Proj2>> Pred = ranges::equal_to>
      constexpr bool is_permutation(I1 first1, S1 last1, I2 first2, S2 last2,
                                    Pred pred = {},
                                    Proj1 proj1 = {}, Proj2 proj2 = {});
    template<forward_range R1, forward_range R2,
             class Proj1 = identity, class Proj2 = identity,
             indirect_equivalence_relation<projected<iterator_t<R1>, Proj1>,
                                           projected<iterator_t<R2>, Proj2>>
                                           Pred = ranges::equal_to>
      constexpr bool is_permutation(R1&& r1, R2&& r2, Pred pred = {},
                                    Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // search
  template<class ForwardIter1, class ForwardIter2>
    constexpr ForwardIter1
      search(ForwardIter1 first1, ForwardIter1 last1,
             ForwardIter2 first2, ForwardIter2 last2);
  template<class ForwardIter1, class ForwardIter2, class BinaryPred>
    constexpr ForwardIter1
      search(ForwardIter1 first1, ForwardIter1 last1,
             ForwardIter2 first2, ForwardIter2 last2, BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter1
      search(ExecutionPolicy&& exec,
             ForwardIter1 first1, ForwardIter1 last1,
             ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class BinaryPred>
    ForwardIter1
      search(ExecutionPolicy&& exec,
             ForwardIter1 first1, ForwardIter1 last1,
             ForwardIter2 first2, ForwardIter2 last2, BinaryPred pred);
 
  namespace ranges {
    template<forward_iterator I1, sentinel_for<I1> S1, forward_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr subrange<I1>
        search(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},
               Proj1 proj1 = {}, Proj2 proj2 = {});
    template<forward_range R1, forward_range R2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr borrowed_subrange_t<R1>
        search(R1&& r1, R2&& r2, Pred pred = {},
               Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class ForwardIter, class Size,
           class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr ForwardIter
      search_n(ForwardIter first, ForwardIter last,
               Size count, const T& value);
  template<class ForwardIter, class Size,
           class T = typename iterator_traits<ForwardIter>::value_type, class BinaryPred>
    constexpr ForwardIter
      search_n(ForwardIter first, ForwardIter last,
               Size count, const T& value, BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter, class Size,
           class T = typename iterator_traits<ForwardIter>::value_type>
    ForwardIter
      search_n(ExecutionPolicy&& exec,
               ForwardIter first, ForwardIter last,
               Size count, const T& value);
  template<class ExecutionPolicy, class ForwardIter, class Size,
           class T = typename iterator_traits<ForwardIter>::value_type, class BinaryPred>
    ForwardIter
      search_n(ExecutionPolicy&& exec,
               ForwardIter first, ForwardIter last,
               Size count, const T& value, BinaryPred pred);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S,
             class Pred = ranges::equal_to, class Proj = identity,
             class T = projected_value_t<I, Proj>>
      requires indirectly_comparable<I, const T*, Pred, Proj>
      constexpr subrange<I>
        search_n(I first, S last, iter_difference_t<I> count,
                 const T& value, Pred pred = {}, Proj proj = {});
    template<forward_range R, class Pred = ranges::equal_to, class Proj = identity,
             projected_value_t<iterator_t<R>, Proj>>
      requires indirectly_comparable<iterator_t<R>, const T*, Pred, Proj>
      constexpr borrowed_subrange_t<R>
        search_n(R&& r, range_difference_t<R> count,
                 const T& value, Pred pred = {}, Proj proj = {});
  }
 
  template<class ForwardIter, class Searcher>
    constexpr ForwardIter
      search(ForwardIter first, ForwardIter last, const Searcher& searcher);
 
  namespace ranges {
    // starts with
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr bool starts_with(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},
                                 Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr bool starts_with(R1&& r1, R2&& r2, Pred pred = {},
                                 Proj1 proj1 = {}, Proj2 proj2 = {});
 
    // ends with
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires (forward_iterator<I1> || sized_sentinel_for<S1, I1>) &&
               (forward_iterator<I2> || sized_sentinel_for<S2, I2>) &&
               indirectly_comparable<I1, I2, Pred, Proj1, Proj2>
      constexpr bool ends_with(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = {},
                               Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, class Pred = ranges::equal_to,
             class Proj1 = identity, class Proj2 = identity>
      requires (forward_range<R1> || sized_range<R1>) &&
               (forward_range<R2> || sized_range<R2>) &&
               indirectly_comparable<iterator_t<R1>, iterator_t<R2>, Pred, Proj1, Proj2>
      constexpr bool ends_with(R1&& r1, R2&& r2, Pred pred = {},
                               Proj1 proj1 = {}, Proj2 proj2 = {});
 
    // fold
    template<class F>
    class /* flipped */ {   // exposition only
      F f;                  // exposition only
 
    public:
      template<class T, class U> requires invocable<F&, U, T>
      invoke_result_t<F&, U, T> operator()(T&&, U&&);
    };
 
    template<class F, class T, class I, class U>
      concept /* indirectly-binary-left-foldable-impl */ =  // exposition only
        movable<T> && movable<U> &&
        convertible_to<T, U> && invocable<F&, U, iter_reference_t<I>> &&
        assignable_from<U&, invoke_result_t<F&, U, iter_reference_t<I>>>;
 
    template<class F, class T, class I>
      concept /* indirectly-binary-left-foldable */ =       // exposition only
        copy_constructible<F> && indirectly_readable<I> &&
        invocable<F&, T, iter_reference_t<I>> &&
        convertible_to<invoke_result_t<F&, T, iter_reference_t<I>>,
               decay_t<invoke_result_t<F&, T, iter_reference_t<I>>>> &&
        /* indirectly-binary-left-foldable-impl */
             <F, T, I, decay_t<invoke_result_t<F&, T, iter_reference_t<I>>>>;
 
    template<class F, class T, class I>
      concept /* indirectly-binary-right-foldable */ =      // exposition only
        /* indirectly-binary-left-foldable */</* flipped */<F>, T, I>;
 
    template<input_iterator I, sentinel_for<I> S, class T = iter_value_t<I>,
             /* indirectly-binary-left-foldable */<T, I> F>
      constexpr auto fold_left(I first, S last, T init, F f);
 
    template<input_range R, class T = range_value_t<R>,
             /* indirectly-binary-left-foldable */<T, iterator_t<R>> F>
      constexpr auto fold_left(R&& r, T init, F f);
 
    template<input_iterator I, sentinel_for<I> S,
             /* indirectly-binary-left-foldable */<iter_value_t<I>, I> F>
      requires constructible_from<iter_value_t<I>, iter_reference_t<I>>
      constexpr auto fold_left_first(I first, S last, F f);
 
    template<input_range R,
             /* indirectly-binary-left-foldable */<range_value_t<R>, iterator_t<R>> F>
      requires constructible_from<range_value_t<R>, range_reference_t<R>>
      constexpr auto fold_left_first(R&& r, F f);
 
    template<bidirectional_iterator I, sentinel_for<I> S, class T = iter_value_t<I>,
             /* indirectly-binary-right-foldable */<T, I> F>
      constexpr auto fold_right(I first, S last, T init, F f);
 
    template<bidirectional_range R, class T = range_value_t<R>,
             /* indirectly-binary-right-foldable */<T, iterator_t<R>> F>
      constexpr auto fold_right(R&& r, T init, F f);
 
    template<bidirectional_iterator I, sentinel_for<I> S,
             /* indirectly-binary-right-foldable */<iter_value_t<I>, I> F>
      requires constructible_from<iter_value_t<I>, iter_reference_t<I>>
    constexpr auto fold_right_last(I first, S last, F f);
 
    template<bidirectional_range R,
             /* indirectly-binary-right-foldable */<range_value_t<R>, iterator_t<R>> F>
      requires constructible_from<range_value_t<R>, range_reference_t<R>>
      constexpr auto fold_right_last(R&& r, F f);
 
    template<class I, class T>
      using fold_left_with_iter_result = in_value_result<I, T>;
    template<class I, class T>
      using fold_left_first_with_iter_result = in_value_result<I, T>;
 
    template<input_iterator I, sentinel_for<I> S, class T = iter_value_t<I>,
             /* indirectly-binary-left-foldable */<T, I> F>
      constexpr /* see description */ fold_left_with_iter(I first, S last, T init, F f);
 
    template<input_range R, class T = range_value_t<R>,
             /* indirectly-binary-left-foldable */<T, iterator_t<R>> F>
      constexpr /* see description */ fold_left_with_iter(R&& r, T init, F f);
 
    template<input_iterator I, sentinel_for<I> S,
             /* indirectly-binary-left-foldable */<iter_value_t<I>, I> F>
      requires constructible_from<iter_value_t<I>, iter_reference_t<I>>
      constexpr /* see description */ fold_left_first_with_iter(I first, S last, F f);
 
    template<input_range R,
             /* indirectly-binary-left-foldable */<range_value_t<R>, iterator_t<R>> F>
      requires constructible_from<range_value_t<R>, range_reference_t<R>>
      constexpr /* see description */ fold_left_first_with_iter(R&& r, F f);
  }
 
  // mutating sequence operations
  // copy
  template<class InputIter, class OutputIter>
    constexpr OutputIter copy(InputIter first, InputIter last,
                              OutputIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter2 copy(ExecutionPolicy&& exec,
                      ForwardIter1 first, ForwardIter1 last,
                      ForwardIter2 result);
 
  namespace ranges {
    template<class I, class O>
      using copy_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, weakly_incrementable O>
      requires indirectly_copyable<I, O>
      constexpr copy_result<I, O> copy(I first, S last, O result);
    template<input_range R, weakly_incrementable O>
      requires indirectly_copyable<iterator_t<R>, O>
      constexpr copy_result<borrowed_iterator_t<R>, O> copy(R&& r, O result);
  }
 
  template<class InputIter, class Size, class OutputIter>
    constexpr OutputIter copy_n(InputIter first, Size n, OutputIter result);
  template<class ExecutionPolicy,
           class ForwardIter1, class Size, class ForwardIter2>
    ForwardIter2 copy_n(ExecutionPolicy&& exec,
                        ForwardIter1 first, Size n, ForwardIter2 result);
 
  namespace ranges {
    template<class I, class O>
      using copy_n_result = in_out_result<I, O>;
 
    template<input_iterator I, weakly_incrementable O>
      requires indirectly_copyable<I, O>
      constexpr copy_n_result<I, O> copy_n(I first, iter_difference_t<I> n, O result);
  }
 
  template<class InputIter, class OutputIter, class Pred>
    constexpr OutputIter copy_if(InputIter first, InputIter last,
                                 OutputIter result, Pred pred);
  template<class ExecutionPolicy,
           class ForwardIter1, class ForwardIter2, class Pred>
    ForwardIter2 copy_if(ExecutionPolicy&& exec,
                         ForwardIter1 first, ForwardIter1 last,
                         ForwardIter2 result, Pred pred);
 
  namespace ranges {
    template<class I, class O>
      using copy_if_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, weakly_incrementable O,
             class Proj = identity, indirect_unary_predicate<projected<I, Proj>> Pred>
      requires indirectly_copyable<I, O>
      constexpr copy_if_result<I, O>
        copy_if(I first, S last, O result, Pred pred, Proj proj = {});
    template<input_range R, weakly_incrementable O, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires indirectly_copyable<iterator_t<R>, O>
      constexpr copy_if_result<borrowed_iterator_t<R>, O>
        copy_if(R&& r, O result, Pred pred, Proj proj = {});
  }
 
  template<class BidirectionalIter1, class BidirectionalIter2>
    constexpr BidirectionalIter2
      copy_backward(BidirectionalIter1 first, BidirectionalIter1 last,
                    BidirectionalIter2 result);
 
  namespace ranges {
    template<class I1, class I2>
      using copy_backward_result = in_out_result<I1, I2>;
 
    template<bidirectional_iterator I1, sentinel_for<I1> S1, bidirectional_iterator I2>
      requires indirectly_copyable<I1, I2>
      constexpr copy_backward_result<I1, I2>
        copy_backward(I1 first, S1 last, I2 result);
    template<bidirectional_range R, bidirectional_iterator I>
      requires indirectly_copyable<iterator_t<R>, I>
      constexpr copy_backward_result<borrowed_iterator_t<R>, I>
        copy_backward(R&& r, I result);
  }
 
  // move
  template<class InputIter, class OutputIter>
    constexpr OutputIter move(InputIter first, InputIter last, OutputIter result);
  template<class ExecutionPolicy, class ForwardIter1,
           class ForwardIter2>
    ForwardIter2 move(ExecutionPolicy&& exec,
                      ForwardIter1 first, ForwardIter1 last, ForwardIter2 result);
 
  namespace ranges {
    template<class I, class O>
      using move_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, weakly_incrementable O>
      requires indirectly_movable<I, O>
      constexpr move_result<I, O> move(I first, S last, O result);
    template<input_range R, weakly_incrementable O>
      requires indirectly_movable<iterator_t<R>, O>
      constexpr move_result<borrowed_iterator_t<R>, O> move(R&& r, O result);
  }
 
  template<class BidirectionalIter1, class BidirectionalIter2>
    constexpr BidirectionalIter2
      move_backward(BidirectionalIter1 first, BidirectionalIter1 last,
                    BidirectionalIter2 result);
 
  namespace ranges {
    template<class I1, class I2>
      using move_backward_result = in_out_result<I1, I2>;
 
    template<bidirectional_iterator I1, sentinel_for<I1> S1, bidirectional_iterator I2>
      requires indirectly_movable<I1, I2>
      constexpr move_backward_result<I1, I2>
        move_backward(I1 first, S1 last, I2 result);
    template<bidirectional_range R, bidirectional_iterator I>
      requires indirectly_movable<iterator_t<R>, I>
      constexpr move_backward_result<borrowed_iterator_t<R>, I>
        move_backward(R&& r, I result);
  }
 
  // swap
  template<class ForwardIter1, class ForwardIter2>
    constexpr ForwardIter2 swap_ranges(ForwardIter1 first1, ForwardIter1 last1,
                                       ForwardIter2 first2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter2 swap_ranges(ExecutionPolicy&& exec,
                             ForwardIter1 first1, ForwardIter1 last1,
                             ForwardIter2 first2);
 
  namespace ranges {
    template<class I1, class I2>
      using swap_ranges_result = in_in_result<I1, I2>;
 
    template<input_iterator I1, sentinel_for<I1> S1,
             input_iterator I2, sentinel_for<I2> S2>
      requires indirectly_swappable<I1, I2>
      constexpr swap_ranges_result<I1, I2>
        swap_ranges(I1 first1, S1 last1, I2 first2, S2 last2);
    template<input_range R1, input_range R2>
      requires indirectly_swappable<iterator_t<R1>, iterator_t<R2>>
      constexpr swap_ranges_result<borrowed_iterator_t<R1>, borrowed_iterator_t<R2>>
        swap_ranges(R1&& r1, R2&& r2);
  }
 
  template<class ForwardIter1, class ForwardIter2>
    constexpr void iter_swap(ForwardIter1 a, ForwardIter2 b);
 
  // transform
  template<class InputIter, class OutputIter, class UnaryOperation>
    constexpr OutputIter
      transform(InputIter first1, InputIter last1,
                OutputIter result, UnaryOperation op);
  template<class InputIter1, class InputIter2, class OutputIter,
           class BinaryOperation>
    constexpr OutputIter
      transform(InputIter1 first1, InputIter1 last1,
                InputIter2 first2, OutputIter result,
                BinaryOperation binary_op);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class UnaryOperation>
    ForwardIter2
      transform(ExecutionPolicy&& exec,
                ForwardIter1 first1, ForwardIter1 last1,
                ForwardIter2 result, UnaryOperation op);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter, class BinaryOperation>
    ForwardIter
      transform(ExecutionPolicy&& exec,
                ForwardIter1 first1, ForwardIter1 last1,
                ForwardIter2 first2, ForwardIter result,
                BinaryOperation binary_op);
 
  namespace ranges {
    template<class I, class O>
      using unary_transform_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, weakly_incrementable O,
             copy_constructible F, class Proj = identity>
      requires indirectly_writable<O, indirect_result_t<F&, projected<I, Proj>>>
      constexpr unary_transform_result<I, O>
        transform(I first1, S last1, O result, F op, Proj proj = {});
    template<input_range R, weakly_incrementable O,
             copy_constructible F, class Proj = identity>
      requires
        indirectly_writable<O, indirect_result_t<F&, projected<iterator_t<R>, Proj>>>
      constexpr unary_transform_result<borrowed_iterator_t<R>, O>
        transform(R&& r, O result, F op, Proj proj = {});
 
    template<class I1, class I2, class O>
      using binary_transform_result = in_in_out_result<I1, I2, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, weakly_incrementable O, copy_constructible F,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_writable<O, indirect_result_t<F&, projected<I1, Proj1>,
                                                        projected<I2, Proj2>>>
      constexpr binary_transform_result<I1, I2, O>
        transform(I1 first1, S1 last1, I2 first2, S2 last2, O result,
                  F binary_op, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, weakly_incrementable O,
             copy_constructible F, class Proj1 = identity, class Proj2 = identity>
      requires indirectly_writable
                   <O, indirect_result_t<F&, projected<iterator_t<R1>, Proj1>, 
                                         projected<iterator_t<R2>, Proj2>>>
      constexpr binary_transform_result<borrowed_iterator_t<R1>,
                                        borrowed_iterator_t<R2>, O>
        transform(R1&& r1, R2&& r2, O result,
                  F binary_op, Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // replace
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr void replace(ForwardIter first, ForwardIter last,
                           const T& old_value, const T& new_value);
  template<class ExecutionPolicy, class ForwardIter,
           class T = typename iterator_traits<ForwardIter>::value_type>
    void replace(ExecutionPolicy&& exec,
                 ForwardIter first, ForwardIter last,
                 const T& old_value, const T& new_value);
  template<class ForwardIter, class Pred,
           class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr void replace_if(ForwardIter first, ForwardIter last,
                              Pred pred, const T& new_value);
  template<class ExecutionPolicy, class ForwardIter, class Pred,
           class T = typename iterator_traits<ForwardIter>::value_type>
    void replace_if(ExecutionPolicy&& exec,
                    ForwardIter first, ForwardIter last,
                    Pred pred, const T& new_value);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S,
             class Proj = identity, class T1 = projected_value_t<I, Proj>, class T2 = T1>
      requires indirectly_writable<I, const T2&> &&
               indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T1*>
      constexpr I replace(I first, S last, const T1& old_value,
                          const T2& new_value, Proj proj = {});
    template<input_range R, class Proj = identity,
             class T1 = projected_value_t<iterator_t<R>, Proj>, class T2 = T1>
      requires indirectly_writable<iterator_t<R>, const T2&> &&
               indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T1*>
      constexpr borrowed_iterator_t<R> replace(R&& r, const T1& old_value,
                                               const T2& new_value, Proj proj = {});
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      requires indirectly_writable<I, const T&>
      constexpr I replace_if(I first, S last, Pred pred,
                             const T& new_value, Proj proj = {});
    template<input_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires indirectly_writable<iterator_t<R>, const T&>
      constexpr borrowed_iterator_t<R> replace_if(R&& r, Pred pred,
                                                  const T& new_value, Proj proj = {});
  }
 
  template<class InputIter, class OutputIter, class T>
    constexpr OutputIter replace_copy(InputIter first, InputIter last, OutputIter result,
                                      const T& old_value, const T& new_value);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2, class T>
    ForwardIter2 replace_copy(ExecutionPolicy&& exec,
                              ForwardIter1 first, ForwardIter1 last, ForwardIter2 result,
                              const T& old_value, const T& new_value);
  template<class InputIter, class OutputIter, class Pred,
           class T = typename iterator_traits<OutputIter>::value_type>
    constexpr OutputIter replace_copy_if(InputIter first, InputIter last,
                                         OutputIter result,
                                         Pred pred, const T& new_value);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class Pred, class T = typename iterator_traits<ForwardIter2>::value_type>
    ForwardIter2 replace_copy_if(ExecutionPolicy&& exec,
                                 ForwardIter1 first, ForwardIter1 last,
                                 ForwardIter2 result,
                                 Pred pred, const T& new_value);
 
  namespace ranges {
    template<class I, class O>
      using replace_copy_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, class O, class Proj = identity,
             class T1 = projected_value_t<I, Proj>, class T2 = iter_value_t<O>>
      requires indirectly_copyable<I, O> &&
               indirect_binary_predicate<ranges::equal_to,
                                         projected<I, Proj>, const T1*> &&
               output_iterator<O, const T2&>
      constexpr replace_copy_result<I, O>
        replace_copy(I first, S last, O result, const T1& old_value,
                     const T2& new_value, Proj proj = {});
    template<input_range R, class O, class Proj = identity,
             class T1 = projected_value_t<iterator_t<R>, Proj>,
             class T2 = iter_value_t<O>>
      requires indirectly_copyable<iterator_t<R>, O> &&
               indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T1*> &&
               output_iterator<O, const T2&>
      constexpr replace_copy_result<borrowed_iterator_t<R>, O>
        replace_copy(R&& r, O result, const T1& old_value,
                     const T2& new_value, Proj proj = {});
 
    template<class I, class O>
      using replace_copy_if_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, class O, class T = iter_value_t<O>,
             class Proj = identity, indirect_unary_predicate<projected<I, Proj>> Pred>
      requires indirectly_copyable<I, O> && output_iterator<O, const T&>
      constexpr replace_copy_if_result<I, O>
        replace_copy_if(I first, S last, O result, Pred pred,
                        const T& new_value, Proj proj = {});
    template<input_range R, class O, class T = iter_value_t<O>, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires indirectly_copyable<iterator_t<R>, O> && output_iterator<O, const T&>
      constexpr replace_copy_if_result<borrowed_iterator_t<R>, O>
        replace_copy_if(R&& r, O result, Pred pred,
                        const T& new_value, Proj proj = {});
  }
 
  // fill
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr void fill(ForwardIter first, ForwardIter last, const T& value);
  template<class ExecutionPolicy, class ForwardIter,
           class T = typename iterator_traits<ForwardIter>::value_type>
    void fill(ExecutionPolicy&& exec,
              ForwardIter first, ForwardIter last, const T& value);
  template<class OutputIter, class Size,
           class T = typename iterator_traits<OutputIter>::value_type>
    constexpr OutputIter fill_n(OutputIter first, Size n, const T& value);
  template<class ExecutionPolicy, class ForwardIter,
           class Size, class T = typename iterator_traits<OutputIter>::value_type>
    ForwardIter fill_n(ExecutionPolicy&& exec,
                       ForwardIter first, Size n, const T& value);
 
  namespace ranges {
    template<class O, sentinel_for<O> S, class T = iter_value_t<O>>
      requires output_iterator<O, const T&>
      constexpr O fill(O first, S last, const T& value);
    template<class R, class T = range_value_t<R>>
      requires output_range<R, const T&>
      constexpr borrowed_iterator_t<R> fill(R&& r, const T& value);
    template<class O, class T = iter_value_t<O>>
      requires output_iterator<O, const T&>
      constexpr O fill_n(O first, iter_difference_t<O> n, const T& value);
  }
 
  // generate
  template<class ForwardIter, class Generator>
    constexpr void generate(ForwardIter first, ForwardIter last, Generator gen);
  template<class ExecutionPolicy, class ForwardIter, class Generator>
    void generate(ExecutionPolicy&& exec,
                  ForwardIter first, ForwardIter last, Generator gen);
  template<class OutputIter, class Size, class Generator>
    constexpr OutputIter generate_n(OutputIter first, Size n, Generator gen);
  template<class ExecutionPolicy, class ForwardIter, class Size, class Generator>
    ForwardIter generate_n(ExecutionPolicy&& exec,
                           ForwardIter first, Size n, Generator gen);
 
  namespace ranges {
    template<input_or_output_iterator O, sentinel_for<O> S, copy_constructible F>
      requires invocable<F&> && indirectly_writable<O, invoke_result_t<F&>>
      constexpr O generate(O first, S last, F gen);
    template<class R, copy_constructible F>
      requires invocable<F&> && output_range<R, invoke_result_t<F&>>
      constexpr borrowed_iterator_t<R> generate(R&& r, F gen);
    template<input_or_output_iterator O, copy_constructible F>
      requires invocable<F&> && indirectly_writable<O, invoke_result_t<F&>>
      constexpr O generate_n(O first, iter_difference_t<O> n, F gen);
  }
 
  // remove
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr ForwardIter remove(ForwardIter first, ForwardIter last, const T& value);
  template<class ExecutionPolicy, class ForwardIter,
           class T = typename iterator_traits<ForwardIter>::value_type>
    ForwardIter remove(ExecutionPolicy&& exec,
                       ForwardIter first, ForwardIter last, const T& value);
  template<class ForwardIter, class Pred>
    constexpr ForwardIter remove_if(ForwardIter first, ForwardIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    ForwardIter remove_if(ExecutionPolicy&& exec,
                          ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<permutable I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>>
      requires indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
      constexpr subrange<I> remove(I first, S last, const T& value, Proj proj = {});
    template<forward_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>>
      requires permutable<iterator_t<R>> &&
               indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T*>
      constexpr borrowed_subrange_t<R> remove(R&& r, const T& value, Proj proj = {});
    template<permutable I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr subrange<I> remove_if(I first, S last, Pred pred, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires permutable<iterator_t<R>>
      constexpr borrowed_subrange_t<R> remove_if(R&& r, Pred pred, Proj proj = {});
  }
 
  template<class InputIter, class OutputIter,
           class T = typename iterator_traits<InputIter>::value_type>
    constexpr OutputIter remove_copy(InputIter first, InputIter last,
                                     OutputIter result, const T& value);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class T = typename iterator_traits<ForwardIter1>::value_type>
    ForwardIter2 remove_copy(ExecutionPolicy&& exec,
                             ForwardIter1 first, ForwardIter1 last,
                             ForwardIter2 result, const T& value);
  template<class InputIter, class OutputIter, class Pred>
    constexpr OutputIter remove_copy_if(InputIter first, InputIter last,
                                        OutputIter result, Pred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2, class Pred>
    ForwardIter2 remove_copy_if(ExecutionPolicy&& exec,
                                ForwardIter1 first, ForwardIter1 last,
                                ForwardIter2 result, Pred pred);
 
  namespace ranges {
    template<class I, class O>
      using remove_copy_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, weakly_incrementable O,
             class Proj = identity, class T = projected_value_t<I, Proj>>
      requires indirectly_copyable<I, O> &&
               indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
      constexpr remove_copy_result<I, O>
        remove_copy(I first, S last, O result, const T& value, Proj proj = {});
    template<input_range R, weakly_incrementable O, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>>
      requires indirectly_copyable<iterator_t<R>, O> &&
               indirect_binary_predicate<ranges::equal_to,
                                         projected<iterator_t<R>, Proj>, const T*>
      constexpr remove_copy_result<borrowed_iterator_t<R>, O>
        remove_copy(R&& r, O result, const T& value, Proj proj = {});
 
    template<class I, class O>
      using remove_copy_if_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S, weakly_incrementable O,
             class Proj = identity, indirect_unary_predicate<projected<I, Proj>> Pred>
      requires indirectly_copyable<I, O>
      constexpr remove_copy_if_result<I, O>
        remove_copy_if(I first, S last, O result, Pred pred, Proj proj = {});
    template<input_range R, weakly_incrementable O, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires indirectly_copyable<iterator_t<R>, O>
      constexpr remove_copy_if_result<borrowed_iterator_t<R>, O>
        remove_copy_if(R&& r, O result, Pred pred, Proj proj = {});
  }
 
  // unique
  template<class ForwardIter>
    constexpr ForwardIter unique(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class BinaryPred>
    constexpr ForwardIter unique(ForwardIter first, ForwardIter last, BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter unique(ExecutionPolicy&& exec,
                       ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class BinaryPred>
    ForwardIter unique(ExecutionPolicy&& exec,
                       ForwardIter first, ForwardIter last, BinaryPred pred);
 
  namespace ranges {
    template<permutable I, sentinel_for<I> S, class Proj = identity,
             indirect_equivalence_relation<projected<I, Proj>> C = ranges::equal_to>
      constexpr subrange<I> unique(I first, S last, C comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_equivalence_relation
                 <projected<iterator_t<R>, Proj>> C = ranges::equal_to>
      requires permutable<iterator_t<R>>
      constexpr borrowed_subrange_t<R> unique(R&& r, C comp = {}, Proj proj = {});
  }
 
  template<class InputIter, class OutputIter>
    constexpr OutputIter unique_copy(InputIter first, InputIter last,
                                     OutputIter result);
  template<class InputIter, class OutputIter, class BinaryPred>
    constexpr OutputIter unique_copy(InputIter first, InputIter last,
                                     OutputIter result, BinaryPred pred);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter2 unique_copy(ExecutionPolicy&& exec,
                             ForwardIter1 first, ForwardIter1 last,
                             ForwardIter2 result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class BinaryPred>
    ForwardIter2 unique_copy(ExecutionPolicy&& exec,
                             ForwardIter1 first, ForwardIter1 last,
                             ForwardIter2 result, BinaryPred pred);
 
  namespace ranges {
    template<class I, class O>
      using unique_copy_result = in_out_result<I, O>;
 
    template<input_iterator I, sentinel_for<I> S,
             weakly_incrementable O, class Proj = identity,
             indirect_equivalence_relation<projected<I, Proj>> C = ranges::equal_to>
      requires indirectly_copyable<I, O> &&
               (forward_iterator<I> ||
                (input_iterator<O> && same_as<iter_value_t<I>, iter_value_t<O>>) ||
                indirectly_copyable_storable<I, O>)
      constexpr unique_copy_result<I, O>
        unique_copy(I first, S last, O result, C comp = {}, Proj proj = {});
    template<input_range R, weakly_incrementable O, class Proj = identity,
             indirect_equivalence_relation
                 <projected<iterator_t<R>, Proj>> C = ranges::equal_to>
      requires indirectly_copyable<iterator_t<R>, O> &&
               (forward_iterator<iterator_t<R>> ||
                (input_iterator<O> && same_as<range_value_t<R>, iter_value_t<O>>) ||
                indirectly_copyable_storable<iterator_t<R>, O>)
      constexpr unique_copy_result<borrowed_iterator_t<R>, O>
        unique_copy(R&& r, O result, C comp = {}, Proj proj = {});
  }
 
  // reverse
  template<class BidirectionalIter>
    constexpr void reverse(BidirectionalIter first, BidirectionalIter last);
  template<class ExecutionPolicy, class BidirectionalIter>
    void reverse(ExecutionPolicy&& exec,
                 BidirectionalIter first, BidirectionalIter last);
 
  namespace ranges {
    template<bidirectional_iterator I, sentinel_for<I> S>
      requires permutable<I>
      constexpr I reverse(I first, S last);
    template<bidirectional_range R>
      requires permutable<iterator_t<R>>
      constexpr borrowed_iterator_t<R> reverse(R&& r);
  }
 
  template<class BidirectionalIter, class OutputIter>
    constexpr OutputIter reverse_copy(BidirectionalIter first, BidirectionalIter last,
                                      OutputIter result);
  template<class ExecutionPolicy, class BidirectionalIter, class ForwardIter>
    ForwardIter reverse_copy(ExecutionPolicy&& exec,
                             BidirectionalIter first, BidirectionalIter last,
                             ForwardIter result);
 
  namespace ranges {
    template<class I, class O>
      using reverse_copy_result = in_out_result<I, O>;
 
    template<bidirectional_iterator I, sentinel_for<I> S, weakly_incrementable O>
      requires indirectly_copyable<I, O>
      constexpr reverse_copy_result<I, O>
        reverse_copy(I first, S last, O result);
    template<bidirectional_range R, weakly_incrementable O>
      requires indirectly_copyable<iterator_t<R>, O>
      constexpr reverse_copy_result<borrowed_iterator_t<R>, O>
        reverse_copy(R&& r, O result);
  }
 
  // rotate
  template<class ForwardIter>
    constexpr ForwardIter rotate(ForwardIter first, ForwardIter middle, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter rotate(ExecutionPolicy&& exec,
                       ForwardIter first, ForwardIter middle, ForwardIter last);
 
  namespace ranges {
    template<permutable I, sentinel_for<I> S>
      constexpr subrange<I> rotate(I first, I middle, S last);
    template<forward_range R>
      requires permutable<iterator_t<R>>
      constexpr borrowed_subrange_t<R> rotate(R&& r, iterator_t<R> middle);
  }
 
  template<class ForwardIter, class OutputIter>
    constexpr OutputIter rotate_copy(ForwardIter first, ForwardIter middle,
                                     ForwardIter last, OutputIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    ForwardIter2 rotate_copy(ExecutionPolicy&& exec,
                             ForwardIter1 first, ForwardIter1 middle,
                             ForwardIter1 last, ForwardIter2 result);
 
  namespace ranges {
    template<class I, class O>
      using rotate_copy_result = in_out_result<I, O>;
 
    template<forward_iterator I, sentinel_for<I> S, weakly_incrementable O>
      requires indirectly_copyable<I, O>
      constexpr rotate_copy_result<I, O>
        rotate_copy(I first, I middle, S last, O result);
    template<forward_range R, weakly_incrementable O>
      requires indirectly_copyable<iterator_t<R>, O>
      constexpr rotate_copy_result<borrowed_iterator_t<R>, O>
        rotate_copy(R&& r, iterator_t<R> middle, O result);
  }
 
  // sample
  template<class PopulationIter, class SampleIter,
           class Distance, class UniformRandomBitGenerator>
    SampleIter sample(PopulationIter first, PopulationIter last,
                      SampleIter out, Distance n, UniformRandomBitGenerator&& g);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S,
             weakly_incrementable O, class Gen>
      requires (forward_iterator<I> || random_access_iterator<O>) &&
               indirectly_copyable<I, O> &&
               uniform_random_bit_generator<remove_reference_t<Gen>>
      O sample(I first, S last, O out, iter_difference_t<I> n, Gen&& g);
    template<input_range R, weakly_incrementable O, class Gen>
      requires (forward_range<R> || random_access_iterator<O>) &&
               indirectly_copyable<iterator_t<R>, O> &&
               uniform_random_bit_generator<remove_reference_t<Gen>>
      O sample(R&& r, O out, range_difference_t<R> n, Gen&& g);
  }
 
  // shuffle
  template<class RandomAccessIter, class UniformRandomBitGenerator>
    void shuffle(RandomAccessIter first, RandomAccessIter last,
                 UniformRandomBitGenerator&& g);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S, class Gen>
      requires permutable<I> &&
               uniform_random_bit_generator<remove_reference_t<Gen>>
      I shuffle(I first, S last, Gen&& g);
    template<random_access_range R, class Gen>
      requires permutable<iterator_t<R>> &&
               uniform_random_bit_generator<remove_reference_t<Gen>>
      borrowed_iterator_t<R> shuffle(R&& r, Gen&& g);
  }
 
  // shift
  template<class ForwardIter>
    constexpr ForwardIter
      shift_left(ForwardIter first, ForwardIter last,
                 typename iterator_traits<ForwardIter>::difference_type n);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter
      shift_left(ExecutionPolicy&& exec,
                 ForwardIter first, ForwardIter last,
                 typename iterator_traits<ForwardIter>::difference_type n);
 
  namespace ranges {
    template<permutable I, sentinel_for<I> S>
      constexpr subrange<I> shift_left(I first, S last, iter_difference_t<I> n);
    template<forward_range R>
      requires permutable<iterator_t<R>>
      constexpr borrowed_subrange_t<R> shift_left(R&& r, range_difference_t<R> n);
  }
 
  template<class ForwardIter>
    constexpr ForwardIter
      shift_right(ForwardIter first, ForwardIter last,
                  typename iterator_traits<ForwardIter>::difference_type n);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter
      shift_right(ExecutionPolicy&& exec,
                  ForwardIter first, ForwardIter last,
                  typename iterator_traits<ForwardIter>::difference_type n);
 
  namespace ranges {
    template<permutable I, sentinel_for<I> S>
      constexpr subrange<I> shift_right(I first, S last, iter_difference_t<I> n);
    template<forward_range R>
      requires permutable<iterator_t<R>>
      constexpr borrowed_subrange_t<R> shift_right(R&& r, range_difference_t<R> n);
  }
 
  // sorting and related operations
  // sorting
  template<class RandomAccessIter>
    constexpr void sort(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void sort(RandomAccessIter first, RandomAccessIter last, Compare comp);
  template<class ExecutionPolicy, class RandomAccessIter>
    void sort(ExecutionPolicy&& exec,
              RandomAccessIter first, RandomAccessIter last);
  template<class ExecutionPolicy, class RandomAccessIter, class Compare>
    void sort(ExecutionPolicy&& exec,
              RandomAccessIter first, RandomAccessIter last, Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I sort(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R> sort(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    void stable_sort(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    void stable_sort(RandomAccessIter first, RandomAccessIter last, Compare comp);
  template<class ExecutionPolicy, class RandomAccessIter>
    void stable_sort(ExecutionPolicy&& exec,
                     RandomAccessIter first, RandomAccessIter last);
  template<class ExecutionPolicy, class RandomAccessIter, class Compare>
    void stable_sort(ExecutionPolicy&& exec,
                     RandomAccessIter first, RandomAccessIter last, Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      I stable_sort(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      borrowed_iterator_t<R> stable_sort(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    constexpr void partial_sort(RandomAccessIter first, RandomAccessIter middle,
                                RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void partial_sort(RandomAccessIter first, RandomAccessIter middle,
                                RandomAccessIter last, Compare comp);
  template<class ExecutionPolicy, class RandomAccessIter>
    void partial_sort(ExecutionPolicy&& exec,
                      RandomAccessIter first, RandomAccessIter middle,
                      RandomAccessIter last);
  template<class ExecutionPolicy, class RandomAccessIter, class Compare>
    void partial_sort(ExecutionPolicy&& exec,
                      RandomAccessIter first, RandomAccessIter middle,
                      RandomAccessIter last, Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I
        partial_sort(I first, I middle, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R>
        partial_sort(R&& r, iterator_t<R> middle, Comp comp = {}, Proj proj = {});
  }
 
  template<class InputIter, class RandomAccessIter>
    constexpr RandomAccessIter
      partial_sort_copy(InputIter first, InputIter last,
                        RandomAccessIter result_first,
                        RandomAccessIter result_last);
  template<class InputIter, class RandomAccessIter, class Compare>
    constexpr RandomAccessIter
      partial_sort_copy(InputIter first, InputIter last,
                        RandomAccessIter result_first,
                        RandomAccessIter result_last, Compare comp);
  template<class ExecutionPolicy, class ForwardIter, class RandomAccessIter>
    RandomAccessIter
      partial_sort_copy(ExecutionPolicy&& exec,
                        ForwardIter first, ForwardIter last,
                        RandomAccessIter result_first,
                        RandomAccessIter result_last);
  template<class ExecutionPolicy, class ForwardIter, class RandomAccessIter,
           class Compare>
    RandomAccessIter
      partial_sort_copy(ExecutionPolicy&& exec,
                        ForwardIter first, ForwardIter last,
                        RandomAccessIter result_first,
                        RandomAccessIter result_last, Compare comp);
 
  namespace ranges {
    template<class I, class O>
      using partial_sort_copy_result = in_out_result<I, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1,
             random_access_iterator I2, sentinel_for<I2> S2,
             class Comp = ranges::less, class Proj1 = identity, class Proj2 = identity>
      requires indirectly_copyable<I1, I2> && sortable<I2, Comp, Proj2> &&
               indirect_strict_weak_order<Comp, projected<I1, Proj1>,
                                          projected<I2, Proj2>>
      constexpr partial_sort_copy_result<I1, I2>
        partial_sort_copy(I1 first, S1 last, I2 result_first, S2 result_last,
                          Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, random_access_range R2, class Comp = ranges::less,
             class Proj1 = identity, class Proj2 = identity>
      requires indirectly_copyable<iterator_t<R1>, iterator_t<R2>> &&
               sortable<iterator_t<R2>, Comp, Proj2> &&
               indirect_strict_weak_order<Comp, projected<iterator_t<R1>, Proj1>,
                                          projected<iterator_t<R2>, Proj2>>
      constexpr partial_sort_copy_result<borrowed_iterator_t<R1>, borrowed_iterator_t<R2>>
        partial_sort_copy(R1&& r, R2&& result_r, Comp comp = {},
                          Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class ForwardIter>
    constexpr bool is_sorted(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class Compare>
    constexpr bool is_sorted(ForwardIter first, ForwardIter last, Compare comp);
  template<class ExecutionPolicy, class ForwardIter>
    bool is_sorted(ExecutionPolicy&& exec,
                   ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class Compare>
    bool is_sorted(ExecutionPolicy&& exec,
                   ForwardIter first, ForwardIter last, Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr bool is_sorted(I first, S last, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr bool is_sorted(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter>
    constexpr ForwardIter is_sorted_until(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class Compare>
    constexpr ForwardIter is_sorted_until(ForwardIter first, ForwardIter last,
                                          Compare comp);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter is_sorted_until(ExecutionPolicy&& exec,
                                ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class Compare>
    ForwardIter is_sorted_until(ExecutionPolicy&& exec,
                                ForwardIter first, ForwardIter last,
                                Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr I is_sorted_until(I first, S last, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_iterator_t<R>
        is_sorted_until(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  // Nth element
  template<class RandomAccessIter>
    constexpr void nth_element(RandomAccessIter first, RandomAccessIter nth,
                               RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void nth_element(RandomAccessIter first, RandomAccessIter nth,
                               RandomAccessIter last, Compare comp);
  template<class ExecutionPolicy, class RandomAccessIter>
    void nth_element(ExecutionPolicy&& exec,
                     RandomAccessIter first, RandomAccessIter nth,
                     RandomAccessIter last);
  template<class ExecutionPolicy, class RandomAccessIter, class Compare>
    void nth_element(ExecutionPolicy&& exec,
                     RandomAccessIter first, RandomAccessIter nth,
                     RandomAccessIter last, Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I
        nth_element(I first, I nth, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R>
        nth_element(R&& r, iterator_t<R> nth, Comp comp = {}, Proj proj = {});
  }
 
  // binary search
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr ForwardIter lower_bound(ForwardIter first, ForwardIter last,
                                      const T& value);
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type,
           class Compare>
    constexpr ForwardIter lower_bound(ForwardIter first, ForwardIter last,
                                      const T& value, Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>,
             indirect_strict_weak_order<const T*, projected<I, Proj>> Comp = ranges::less>
      constexpr I
          lower_bound(I first, S last, const T& value, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>,
             indirect_strict_weak_order
                 <const T*, projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_iterator_t<R>
        lower_bound(R&& r, const T& value, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr ForwardIter upper_bound(ForwardIter first, ForwardIter last,
                                      const T& value);
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type,
           class Compare>
    constexpr ForwardIter upper_bound(ForwardIter first, ForwardIter last,
                                      const T& value, Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>,
             indirect_strict_weak_order<const T*, projected<I, Proj>> Comp = ranges::less>
      constexpr I
          upper_bound(I first, S last, const T& value, Comp comp = {}, Proj proj = {});
    template<forward_range R, class T, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>,
             indirect_strict_weak_order
                 <const T*, projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_iterator_t<R>
        upper_bound(R&& r, const T& value, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr pair<ForwardIter, ForwardIter>
      equal_range(ForwardIter first, ForwardIter last, const T& value);
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type,
           class Compare>
    constexpr pair<ForwardIter, ForwardIter>
      equal_range(ForwardIter first, ForwardIter last, const T& value, Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>,
             indirect_strict_weak_order<const T*, projected<I, Proj>> Comp = ranges::less>
      constexpr subrange<I>
        equal_range(I first, S last, const T& value, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>,
             indirect_strict_weak_order
                 <const T*, projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_subrange_t<R>
        equal_range(R&& r, const T& value, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type>
    constexpr bool binary_search(ForwardIter first, ForwardIter last,
                                 const T& value);
  template<class ForwardIter, class T = typename iterator_traits<ForwardIter>::value_type,
           class Compare>
    constexpr bool binary_search(ForwardIter first, ForwardIter last,
                                 const T& value, Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             class T = projected_value_t<I, Proj>,
             indirect_strict_weak_order<const T*, projected<I, Proj>> Comp = ranges::less>
      constexpr bool binary_search(I first, S last, const T& value,
                                   Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             class T = projected_value_t<iterator_t<R>, Proj>,
             indirect_strict_weak_order
                 <const T*, projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr bool binary_search(R&& r, const T& value, Comp comp = {}, Proj proj = {});
  }
 
  // partitions
  template<class InputIter, class Pred>
    constexpr bool is_partitioned(InputIter first, InputIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    bool is_partitioned(ExecutionPolicy&& exec,
                        ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<input_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr bool is_partitioned(I first, S last, Pred pred, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr bool is_partitioned(R&& r, Pred pred, Proj proj = {});
  }
 
  template<class ForwardIter, class Pred>
    constexpr ForwardIter partition(ForwardIter first, ForwardIter last, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class Pred>
    ForwardIter partition(ExecutionPolicy&& exec,
                          ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<permutable I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr subrange<I> partition(I first, S last, Pred pred, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires permutable<iterator_t<R>>
      constexpr borrowed_subrange_t<R> partition(R&& r, Pred pred, Proj proj = {});
  }
 
  template<class BidirectionalIter, class Pred>
    BidirectionalIter stable_partition(BidirectionalIter first,
                                       BidirectionalIter last, Pred pred);
  template<class ExecutionPolicy, class BidirectionalIter, class Pred>
    BidirectionalIter stable_partition(ExecutionPolicy&& exec,
                                       BidirectionalIter first,
                                       BidirectionalIter last, Pred pred);
 
  namespace ranges {
    template<bidirectional_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      requires permutable<I>
      subrange<I> stable_partition(I first, S last, Pred pred, Proj proj = {});
    template<bidirectional_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires permutable<iterator_t<R>>
      borrowed_subrange_t<R> stable_partition(R&& r, Pred pred, Proj proj = {});
  }
 
  template<class InputIter, class OutputIter1,
           class OutputIter2, class Pred>
    constexpr pair<OutputIter1, OutputIter2>
      partition_copy(InputIter first, InputIter last,
                     OutputIter1 out_true, OutputIter2 out_false, Pred pred);
  template<class ExecutionPolicy, class ForwardIter, class ForwardIter1,
           class ForwardIter2, class Pred>
    pair<ForwardIter1, ForwardIter2>
      partition_copy(ExecutionPolicy&& exec,
                     ForwardIter first, ForwardIter last,
                     ForwardIter1 out_true, ForwardIter2 out_false, Pred pred);
 
  namespace ranges {
    template<class I, class O1, class O2>
      using partition_copy_result = in_out_out_result<I, O1, O2>;
 
    template<input_iterator I, sentinel_for<I> S,
             weakly_incrementable O1, weakly_incrementable O2,
             class Proj = identity, indirect_unary_predicate<projected<I, Proj>> Pred>
      requires indirectly_copyable<I, O1> && indirectly_copyable<I, O2>
      constexpr partition_copy_result<I, O1, O2>
        partition_copy(I first, S last, O1 out_true, O2 out_false,
                       Pred pred, Proj proj = {});
    template<input_range R, weakly_incrementable O1, weakly_incrementable O2,
             class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      requires indirectly_copyable<iterator_t<R>, O1> &&
               indirectly_copyable<iterator_t<R>, O2>
      constexpr partition_copy_result<borrowed_iterator_t<R>, O1, O2>
        partition_copy(R&& r, O1 out_true, O2 out_false, Pred pred, Proj proj = {});
  }
 
  template<class ForwardIter, class Pred>
    constexpr ForwardIter
      partition_point(ForwardIter first, ForwardIter last, Pred pred);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_unary_predicate<projected<I, Proj>> Pred>
      constexpr I partition_point(I first, S last, Pred pred, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_unary_predicate<projected<iterator_t<R>, Proj>> Pred>
      constexpr borrowed_iterator_t<R>
        partition_point(R&& r, Pred pred, Proj proj = {});
  }
 
  // merge
  template<class InputIter1, class InputIter2, class OutputIter>
    constexpr OutputIter merge(InputIter1 first1, InputIter1 last1,
                               InputIter2 first2, InputIter2 last2, OutputIter result);
  template<class InputIter1, class InputIter2, class OutputIter,
           class Compare>
    constexpr OutputIter merge(InputIter1 first1, InputIter1 last1,
                               InputIter2 first2, InputIter2 last2,
                               OutputIter result, Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter>
    ForwardIter merge(ExecutionPolicy&& exec,
                      ForwardIter1 first1, ForwardIter1 last1,
                      ForwardIter2 first2, ForwardIter2 last2, ForwardIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter, class Compare>
    ForwardIter merge(ExecutionPolicy&& exec,
                      ForwardIter1 first1, ForwardIter1 last1,
                      ForwardIter2 first2, ForwardIter2 last2,
                      ForwardIter result, Compare comp);
 
  namespace ranges {
    template<class I1, class I2, class O>
      using merge_result = in_in_out_result<I1, I2, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, weakly_incrementable O, class Comp = ranges::less,
             class Proj1 = identity, class Proj2 = identity>
      requires mergeable<I1, I2, O, Comp, Proj1, Proj2>
      constexpr merge_result<I1, I2, O>
        merge(I1 first1, S1 last1, I2 first2, S2 last2, O result,
              Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, weakly_incrementable O,
             class Comp = ranges::less, class Proj1 = identity, class Proj2 = identity>
      requires mergeable<iterator_t<R1>, iterator_t<R2>, O, Comp, Proj1, Proj2>
      constexpr merge_result<borrowed_iterator_t<R1>, borrowed_iterator_t<R2>, O>
        merge(R1&& r1, R2&& r2, O result,
              Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class BidirectionalIter>
    void inplace_merge(BidirectionalIter first, BidirectionalIter middle,
                       BidirectionalIter last);
  template<class BidirectionalIter, class Compare>
    void inplace_merge(BidirectionalIter first, BidirectionalIter middle,
                       BidirectionalIter last, Compare comp);
  template<class ExecutionPolicy, class BidirectionalIter>
    void inplace_merge(ExecutionPolicy&& exec,
                       BidirectionalIter first, BidirectionalIter middle,
                       BidirectionalIter last);
  template<class ExecutionPolicy, class BidirectionalIter, class Compare>
    void inplace_merge(ExecutionPolicy&& exec,
                       BidirectionalIter first, BidirectionalIter middle,
                       BidirectionalIter last, Compare comp);
 
  namespace ranges {
    template<bidirectional_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      I inplace_merge(I first, I middle, S last, Comp comp = {}, Proj proj = {});
    template<bidirectional_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      borrowed_iterator_t<R> inplace_merge(R&& r, iterator_t<R> middle,
                                           Comp comp = {}, Proj proj = {});
  }
 
  // set operations
  template<class InputIter1, class InputIter2>
    constexpr bool includes(InputIter1 first1, InputIter1 last1,
                            InputIter2 first2, InputIter2 last2);
  template<class InputIter1, class InputIter2, class Compare>
    constexpr bool includes(InputIter1 first1, InputIter1 last1,
                            InputIter2 first2, InputIter2 last2, Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    bool includes(ExecutionPolicy&& exec,
                  ForwardIter1 first1, ForwardIter1 last1,
                  ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2, class Compare>
    bool includes(ExecutionPolicy&& exec,
                  ForwardIter1 first1, ForwardIter1 last1,
                  ForwardIter2 first2, ForwardIter2 last2, Compare comp);
 
  namespace ranges {
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, class Proj1 = identity, class Proj2 = identity,
             indirect_strict_weak_order
                 <projected<I1, Proj1>, projected<I2, Proj2>> Comp = ranges::less>
      constexpr bool includes(I1 first1, S1 last1, I2 first2, S2 last2, Comp comp = {},
                              Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2,
             class Proj1 = identity, class Proj2 = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R1>, Proj1>,
                  projected<iterator_t<R2>, Proj2>> Comp = ranges::less>
      constexpr bool includes(R1&& r1, R2&& r2, Comp comp = {},
                              Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class InputIter1, class InputIter2, class OutputIter>
    constexpr OutputIter set_union(InputIter1 first1, InputIter1 last1,
                                   InputIter2 first2, InputIter2 last2,
                                   OutputIter result);
  template<class InputIter1, class InputIter2, class OutputIter, class Compare>
    constexpr OutputIter set_union(InputIter1 first1, InputIter1 last1,
                                   InputIter2 first2, InputIter2 last2,
                                   OutputIter result, Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter>
    ForwardIter set_union(ExecutionPolicy&& exec,
                          ForwardIter1 first1, ForwardIter1 last1,
                          ForwardIter2 first2, ForwardIter2 last2,
                          ForwardIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter, class Compare>
    ForwardIter set_union(ExecutionPolicy&& exec,
                          ForwardIter1 first1, ForwardIter1 last1,
                          ForwardIter2 first2, ForwardIter2 last2,
                          ForwardIter result, Compare comp);
 
  namespace ranges {
    template<class I1, class I2, class O>
      using set_union_result = in_in_out_result<I1, I2, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, weakly_incrementable O, class Comp = ranges::less,
             class Proj1 = identity, class Proj2 = identity>
      requires mergeable<I1, I2, O, Comp, Proj1, Proj2>
      constexpr set_union_result<I1, I2, O>
        set_union(I1 first1, S1 last1, I2 first2, S2 last2, O result, Comp comp = {},
                  Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, weakly_incrementable O,
             class Comp = ranges::less, class Proj1 = identity, class Proj2 = identity>
      requires mergeable<iterator_t<R1>, iterator_t<R2>, O, Comp, Proj1, Proj2>
      constexpr set_union_result<borrowed_iterator_t<R1>, borrowed_iterator_t<R2>, O>
        set_union(R1&& r1, R2&& r2, O result, Comp comp = {},
                  Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class InputIter1, class InputIter2, class OutputIter>
    constexpr OutputIter set_intersection(InputIter1 first1, InputIter1 last1,
                                          InputIter2 first2, InputIter2 last2,
                                          OutputIter result);
  template<class InputIter1, class InputIter2, class OutputIter, class Compare>
    constexpr OutputIter set_intersection(InputIter1 first1, InputIter1 last1,
                                          InputIter2 first2, InputIter2 last2,
                                          OutputIter result, Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter>
    ForwardIter set_intersection(ExecutionPolicy&& exec,
                                 ForwardIter1 first1, ForwardIter1 last1,
                                 ForwardIter2 first2, ForwardIter2 last2,
                                 ForwardIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter, class Compare>
    ForwardIter set_intersection(ExecutionPolicy&& exec,
                                 ForwardIter1 first1, ForwardIter1 last1,
                                 ForwardIter2 first2, ForwardIter2 last2,
                                 ForwardIter result, Compare comp);
 
  namespace ranges {
    template<class I1, class I2, class O>
      using set_intersection_result = in_in_out_result<I1, I2, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, weakly_incrementable O, class Comp = ranges::less,
             class Proj1 = identity, class Proj2 = identity>
      requires mergeable<I1, I2, O, Comp, Proj1, Proj2>
      constexpr set_intersection_result<I1, I2, O>
        set_intersection(I1 first1, S1 last1, I2 first2, S2 last2, O result,
                         Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, weakly_incrementable O,
             class Comp = ranges::less, class Proj1 = identity, class Proj2 = identity>
      requires mergeable<iterator_t<R1>, iterator_t<R2>, O, Comp, Proj1, Proj2>
      constexpr set_intersection_result<borrowed_iterator_t<R1>,
                                        borrowed_iterator_t<R2>, O>
        set_intersection(R1&& r1, R2&& r2, O result,
                         Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class InputIter1, class InputIter2, class OutputIter>
    constexpr OutputIter set_difference(InputIter1 first1, InputIter1 last1,
                                        InputIter2 first2, InputIter2 last2,
                                        OutputIter result);
  template<class InputIter1, class InputIter2, class OutputIter, class Compare>
    constexpr OutputIter set_difference(InputIter1 first1, InputIter1 last1,
                                        InputIter2 first2, InputIter2 last2,
                                        OutputIter result, Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter>
    ForwardIter set_difference(ExecutionPolicy&& exec,
                               ForwardIter1 first1, ForwardIter1 last1,
                               ForwardIter2 first2, ForwardIter2 last2,
                               ForwardIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter, class Compare>
    ForwardIter set_difference(ExecutionPolicy&& exec,
                               ForwardIter1 first1, ForwardIter1 last1,
                               ForwardIter2 first2, ForwardIter2 last2,
                               ForwardIter result, Compare comp);
 
  namespace ranges {
    template<class I, class O>
      using set_difference_result = in_out_result<I, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, weakly_incrementable O, class Comp = ranges::less,
             class Proj1 = identity, class Proj2 = identity>
      requires mergeable<I1, I2, O, Comp, Proj1, Proj2>
      constexpr set_difference_result<I1, O>
        set_difference(I1 first1, S1 last1, I2 first2, S2 last2, O result,
                       Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, weakly_incrementable O,
             class Comp = ranges::less, class Proj1 = identity, class Proj2 = identity>
      requires mergeable<iterator_t<R1>, iterator_t<R2>, O, Comp, Proj1, Proj2>
      constexpr set_difference_result<borrowed_iterator_t<R1>, O>
        set_difference(R1&& r1, R2&& r2, O result,
                       Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  template<class InputIter1, class InputIter2, class OutputIter>
    constexpr OutputIter set_symmetric_difference(InputIter1 first1, InputIter1 last1,
                                                  InputIter2 first2, InputIter2 last2,
                                                  OutputIter result);
  template<class InputIter1, class InputIter2, class OutputIter, class Compare>
    constexpr OutputIter set_symmetric_difference(InputIter1 first1, InputIter1 last1,
                                                  InputIter2 first2, InputIter2 last2,
                                                  OutputIter result, Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter>
    ForwardIter set_symmetric_difference(ExecutionPolicy&& exec,
                                         ForwardIter1 first1, ForwardIter1 last1,
                                         ForwardIter2 first2, ForwardIter2 last2,
                                         ForwardIter result);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class ForwardIter, class Compare>
    ForwardIter set_symmetric_difference(ExecutionPolicy&& exec,
                                         ForwardIter1 first1, ForwardIter1 last1,
                                         ForwardIter2 first2, ForwardIter2 last2,
                                         ForwardIter result, Compare comp);
 
  namespace ranges {
    template<class I1, class I2, class O>
      using set_symmetric_difference_result = in_in_out_result<I1, I2, O>;
 
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, weakly_incrementable O, class Comp = ranges::less,
             class Proj1 = identity, class Proj2 = identity>
      requires mergeable<I1, I2, O, Comp, Proj1, Proj2>
      constexpr set_symmetric_difference_result<I1, I2, O>
        set_symmetric_difference(I1 first1, S1 last1, I2 first2, S2 last2, O result,
                                 Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, weakly_incrementable O,
             class Comp = ranges::less, class Proj1 = identity, class Proj2 = identity>
      requires mergeable<iterator_t<R1>, iterator_t<R2>, O, Comp, Proj1, Proj2>
      constexpr set_symmetric_difference_result<borrowed_iterator_t<R1>,
                                                borrowed_iterator_t<R2>, O>
        set_symmetric_difference(R1&& r1, R2&& r2, O result, Comp comp = {},
                                 Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // heap operations
  template<class RandomAccessIter>
    constexpr void push_heap(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void push_heap(RandomAccessIter first, RandomAccessIter last,
                             Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I push_heap(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R> push_heap(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    constexpr void pop_heap(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void pop_heap(RandomAccessIter first, RandomAccessIter last,
                            Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I pop_heap(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R> pop_heap(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    constexpr void make_heap(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void make_heap(RandomAccessIter first, RandomAccessIter last,
                             Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I make_heap(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R> make_heap(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    constexpr void sort_heap(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr void sort_heap(RandomAccessIter first, RandomAccessIter last,
                             Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S,
             class Comp = ranges::less, class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr I sort_heap(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr borrowed_iterator_t<R> sort_heap(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    constexpr bool is_heap(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr bool is_heap(RandomAccessIter first, RandomAccessIter last,
                           Compare comp);
  template<class ExecutionPolicy, class RandomAccessIter>
    bool is_heap(ExecutionPolicy&& exec,
                 RandomAccessIter first, RandomAccessIter last);
  template<class ExecutionPolicy, class RandomAccessIter, class Compare>
    bool is_heap(ExecutionPolicy&& exec,
                 RandomAccessIter first, RandomAccessIter last, Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr bool is_heap(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr bool is_heap(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class RandomAccessIter>
    constexpr RandomAccessIter
      is_heap_until(RandomAccessIter first, RandomAccessIter last);
  template<class RandomAccessIter, class Compare>
    constexpr RandomAccessIter
      is_heap_until(RandomAccessIter first, RandomAccessIter last, Compare comp);
  template<class ExecutionPolicy, class RandomAccessIter>
    RandomAccessIter
      is_heap_until(ExecutionPolicy&& exec,
                    RandomAccessIter first, RandomAccessIter last);
  template<class ExecutionPolicy, class RandomAccessIter, class Compare>
    RandomAccessIter
      is_heap_until(ExecutionPolicy&& exec,
                    RandomAccessIter first, RandomAccessIter last, Compare comp);
 
  namespace ranges {
    template<random_access_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr I is_heap_until(I first, S last, Comp comp = {}, Proj proj = {});
    template<random_access_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_iterator_t<R>
        is_heap_until(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  // minimum and maximum
  template<class T> constexpr const T& min(const T& a, const T& b);
  template<class T, class Compare>
    constexpr const T& min(const T& a, const T& b, Compare comp);
  template<class T>
    constexpr T min(initializer_list<T> t);
  template<class T, class Compare>
    constexpr T min(initializer_list<T> t, Compare comp);
 
  namespace ranges {
    template<class T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr const T& min(const T& a, const T& b, Comp comp = {}, Proj proj = {});
    template<copyable T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr T min(initializer_list<T> r, Comp comp = {}, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      requires indirectly_copyable_storable<iterator_t<R>, range_value_t<R>*>
      constexpr range_value_t<R> min(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class T> constexpr const T& max(const T& a, const T& b);
  template<class T, class Compare>
    constexpr const T& max(const T& a, const T& b, Compare comp);
  template<class T>
    constexpr T max(initializer_list<T> t);
  template<class T, class Compare>
    constexpr T max(initializer_list<T> t, Compare comp);
 
  namespace ranges {
    template<class T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr const T& max(const T& a, const T& b, Comp comp = {}, Proj proj = {});
    template<copyable T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr T max(initializer_list<T> r, Comp comp = {}, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      requires indirectly_copyable_storable<iterator_t<R>, range_value_t<R>*>
      constexpr range_value_t<R> max(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class T> constexpr pair<const T&, const T&> minmax(const T& a, const T& b);
  template<class T, class Compare>
    constexpr pair<const T&, const T&> minmax(const T& a, const T& b, Compare comp);
  template<class T>
    constexpr pair<T, T> minmax(initializer_list<T> t);
  template<class T, class Compare>
    constexpr pair<T, T> minmax(initializer_list<T> t, Compare comp);
 
  namespace ranges {
    template<class T>
      using minmax_result = min_max_result<T>;
 
    template<class T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr minmax_result<const T&>
        minmax(const T& a, const T& b, Comp comp = {}, Proj proj = {});
    template<copyable T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr minmax_result<T>
        minmax(initializer_list<T> r, Comp comp = {}, Proj proj = {});
    template<input_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      requires indirectly_copyable_storable<iterator_t<R>, range_value_t<R>*>
      constexpr minmax_result<range_value_t<R>>
        minmax(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter>
    constexpr ForwardIter min_element(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class Compare>
    constexpr ForwardIter min_element(ForwardIter first, ForwardIter last,
                                      Compare comp);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter min_element(ExecutionPolicy&& exec,
                            ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class Compare>
    ForwardIter min_element(ExecutionPolicy&& exec,
                            ForwardIter first, ForwardIter last,
                            Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr I min_element(I first, S last, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_iterator_t<R>
        min_element(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter>
    constexpr ForwardIter max_element(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class Compare>
    constexpr ForwardIter max_element(ForwardIter first, ForwardIter last,
                                      Compare comp);
  template<class ExecutionPolicy, class ForwardIter>
    ForwardIter max_element(ExecutionPolicy&& exec,
                            ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class Compare>
    ForwardIter max_element(ExecutionPolicy&& exec,
                            ForwardIter first, ForwardIter last,
                            Compare comp);
 
  namespace ranges {
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr I max_element(I first, S last, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr borrowed_iterator_t<R>
        max_element(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class ForwardIter>
    constexpr pair<ForwardIter, ForwardIter>
      minmax_element(ForwardIter first, ForwardIter last);
  template<class ForwardIter, class Compare>
    constexpr pair<ForwardIter, ForwardIter>
      minmax_element(ForwardIter first, ForwardIter last, Compare comp);
  template<class ExecutionPolicy, class ForwardIter>
    pair<ForwardIter, ForwardIter>
      minmax_element(ExecutionPolicy&& exec,
                     ForwardIter first, ForwardIter last);
  template<class ExecutionPolicy, class ForwardIter, class Compare>
    pair<ForwardIter, ForwardIter>
      minmax_element(ExecutionPolicy&& exec,
                     ForwardIter first, ForwardIter last, Compare comp);
 
  namespace ranges {
    template<class I>
      using minmax_element_result = min_max_result<I>;
 
    template<forward_iterator I, sentinel_for<I> S, class Proj = identity,
             indirect_strict_weak_order<projected<I, Proj>> Comp = ranges::less>
      constexpr minmax_element_result<I>
        minmax_element(I first, S last, Comp comp = {}, Proj proj = {});
    template<forward_range R, class Proj = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R>, Proj>> Comp = ranges::less>
      constexpr minmax_element_result<borrowed_iterator_t<R>>
        minmax_element(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  // bounded value
  template<class T>
    constexpr const T& clamp(const T& v, const T& lo, const T& hi);
  template<class T, class Compare>
    constexpr const T& clamp(const T& v, const T& lo, const T& hi, Compare comp);
 
  namespace ranges {
    template<class T, class Proj = identity,
             indirect_strict_weak_order<projected<const T*, Proj>> Comp = ranges::less>
      constexpr const T&
        clamp(const T& v, const T& lo, const T& hi, Comp comp = {}, Proj proj = {});
  }
 
  // lexicographical comparison
  template<class InputIter1, class InputIter2>
    constexpr bool lexicographical_compare(InputIter1 first1, InputIter1 last1,
                                           InputIter2 first2, InputIter2 last2);
  template<class InputIter1, class InputIter2, class Compare>
    constexpr bool lexicographical_compare(InputIter1 first1, InputIter1 last1,
                                           InputIter2 first2, InputIter2 last2,
                                           Compare comp);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2>
    bool lexicographical_compare(ExecutionPolicy&& exec,
                                 ForwardIter1 first1, ForwardIter1 last1,
                                 ForwardIter2 first2, ForwardIter2 last2);
  template<class ExecutionPolicy, class ForwardIter1, class ForwardIter2,
           class Compare>
    bool lexicographical_compare(ExecutionPolicy&& exec,
                                 ForwardIter1 first1, ForwardIter1 last1,
                                 ForwardIter2 first2, ForwardIter2 last2,
                                 Compare comp);
 
  namespace ranges {
    template<input_iterator I1, sentinel_for<I1> S1, input_iterator I2,
             sentinel_for<I2> S2, class Proj1 = identity, class Proj2 = identity,
             indirect_strict_weak_order
                 <projected<I1, Proj1>, projected<I2, Proj2>> Comp = ranges::less>
      constexpr bool
        lexicographical_compare(I1 first1, S1 last1, I2 first2, S2 last2,
                                Comp comp = {}, Proj1 proj1 = {}, Proj2 proj2 = {});
    template<input_range R1, input_range R2, class Proj1 = identity,
             class Proj2 = identity,
             indirect_strict_weak_order
                 <projected<iterator_t<R1>, Proj1>,
                            projected<iterator_t<R2>, Proj2>> Comp = ranges::less>
      constexpr bool
        lexicographical_compare(R1&& r1, R2&& r2, Comp comp = {},
                                Proj1 proj1 = {}, Proj2 proj2 = {});
  }
 
  // three-way comparison algorithms
  template<class InputIter1, class InputIter2, class Cmp>
    constexpr auto lexicographical_compare_three_way(InputIter1 b1, InputIter1 e1,
                                                     InputIter2 b2, InputIter2 e2,
                                                     Cmp comp)
        -> decltype(comp(*b1, *b2));
  template<class InputIter1, class InputIter2>
    constexpr auto lexicographical_compare_three_way(InputIter1 b1, InputIter1 e1,
                                                     InputIter2 b2, InputIter2 e2);
 
  // permutations
  template<class BidirectionalIter>
    constexpr bool next_permutation(BidirectionalIter first,
                                    BidirectionalIter last);
  template<class BidirectionalIter, class Compare>
    constexpr bool next_permutation(BidirectionalIter first,
                                    BidirectionalIter last, Compare comp);
 
  namespace ranges {
    template<class I>
      using next_permutation_result = in_found_result<I>;
 
    template<bidirectional_iterator I, sentinel_for<I> S, class Comp = ranges::less,
             class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr next_permutation_result<I>
        next_permutation(I first, S last, Comp comp = {}, Proj proj = {});
    template<bidirectional_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr next_permutation_result<borrowed_iterator_t<R>>
        next_permutation(R&& r, Comp comp = {}, Proj proj = {});
  }
 
  template<class BidirectionalIter>
    constexpr bool prev_permutation(BidirectionalIter first,
                                    BidirectionalIter last);
  template<class BidirectionalIter, class Compare>
    constexpr bool prev_permutation(BidirectionalIter first,
                                    BidirectionalIter last, Compare comp);
 
  namespace ranges {
    template<class I>
      using prev_permutation_result = in_found_result<I>;
 
    template<bidirectional_iterator I, sentinel_for<I> S, class Comp = ranges::less,
             class Proj = identity>
      requires sortable<I, Comp, Proj>
      constexpr prev_permutation_result<I>
        prev_permutation(I first, S last, Comp comp = {}, Proj proj = {});
    template<bidirectional_range R, class Comp = ranges::less, class Proj = identity>
      requires sortable<iterator_t<R>, Comp, Proj>
      constexpr prev_permutation_result<borrowed_iterator_t<R>>
        prev_permutation(R&& r, Comp comp = {}, Proj proj = {});
  }
}

```

#### Class template std::ranges::in_fun_result

```
namespace std::ranges {
  template<class I, class F>
  struct in_fun_result {
    [[no_unique_address]] I in;
    [[no_unique_address]] F fun;
 
    template<class I2, class F2>
      requires convertible_to<const I&, I2> && convertible_to<const F&, F2>
    constexpr operator in_fun_result<I2, F2>() const & {
      return {in, fun};
    }
 
    template<class I2, class F2>
      requires convertible_to<I, I2> && convertible_to<F, F2>
    constexpr operator in_fun_result<I2, F2>() && {
      return {std::move(in), std::move(fun)};
    }
  };
}

```

#### Class template std::ranges::in_in_result

```
namespace std::ranges {
  template<class I1, class I2>
  struct in_in_result {
    [[no_unique_address]] I1 in1;
    [[no_unique_address]] I2 in2;
 
    template<class II1, class II2>
      requires convertible_to<const I1&, II1> && convertible_to<const I2&, II2>
    constexpr operator in_in_result<II1, II2>() const & {
      return {in1, in2};
    }
 
    template<class II1, class II2>
      requires convertible_to<I1, II1> && convertible_to<I2, II2>
    constexpr operator in_in_result<II1, II2>() && {
      return {std::move(in1), std::move(in2)};
    }
  };
}

```

#### Class template std::ranges::in_out_result

```
namespace std::ranges {
  template<class I, class O>
  struct in_out_result {
    [[no_unique_address]] I in;
    [[no_unique_address]] O out;
 
    template<class I2, class O2>
      requires convertible_to<const I&, I2> && convertible_to<const O&, O2>
    constexpr operator in_out_result<I2, O2>() const & {
      return {in, out};
    }
 
    template<class I2, class O2>
      requires convertible_to<I, I2> && convertible_to<O, O2>
    constexpr operator in_out_result<I2, O2>() && {
      return {std::move(in), std::move(out)};
    }
  };
}

```

#### Class template std::ranges::in_in_out_result

```
namespace std::ranges {
  template<class I1, class I2, class O>
  struct in_in_out_result {
    [[no_unique_address]] I1 in1;
    [[no_unique_address]] I2 in2;
    [[no_unique_address]] O  out;
 
    template<class II1, class II2, class OO>
      requires convertible_to<const I1&, II1> &&
               convertible_to<const I2&, II2> &&
               convertible_to<const O&, OO>
    constexpr operator in_in_out_result<II1, II2, OO>() const & {
      return {in1, in2, out};
    }
 
    template<class II1, class II2, class OO>
      requires convertible_to<I1, II1> &&
               convertible_to<I2, II2> &&
               convertible_to<O, OO>
    constexpr operator in_in_out_result<II1, II2, OO>() && {
      return {std::move(in1), std::move(in2), std::move(out)};
    }
  };
}

```

#### Class template std::ranges::in_out_out_result

```
namespace std::ranges {
  template<class I, class O1, class O2>
  struct in_out_out_result {
    [[no_unique_address]] I  in;
    [[no_unique_address]] O1 out1;
    [[no_unique_address]] O2 out2;
 
    template<class II, class OO1, class OO2>
      requires convertible_to<const I&, II> &&
               convertible_to<const O1&, OO1> &&
               convertible_to<const O2&, OO2>
    constexpr operator in_out_out_result<II, OO1, OO2>() const & {
      return {in, out1, out2};
    }
 
    template<class II, class OO1, class OO2>
      requires convertible_to<I, II> &&
               convertible_to<O1, OO1> &&
               convertible_to<O2, OO2>
    constexpr operator in_out_out_result<II, OO1, OO2>() && {
      return {std::move(in), std::move(out1), std::move(out2)};
    }
  };
}

```

#### Class template std::ranges::min_max_result

```
namespace std::ranges {
  template<class T>
  struct min_max_result {
    [[no_unique_address]] T min;
    [[no_unique_address]] T max;
 
    template<class T2>
      requires convertible_to<const T&, T2>
    constexpr operator min_max_result<T2>() const & {
      return {min, max};
    }
 
    template<class T2>
      requires convertible_to<T, T2>
    constexpr operator min_max_result<T2>() && {
      return {std::move(min), std::move(max)};
    }
  };
}

```

#### Class template std::ranges::in_found_result

```
namespace std::ranges {
  template<class I>
  struct in_found_result {
    [[no_unique_address]] I in;
    bool found;
 
    template<class I2>
      requires convertible_to<const I&, I2>
    constexpr operator in_found_result<I2>() const & {
      return {in, found};
    }
    template<class I2>
      requires convertible_to<I, I2>
    constexpr operator in_found_result<I2>() && {
      return {std::move(in), found};
    }
  };
}

```

#### Class template std::ranges::in_value_result

```
namespace std::ranges {
template<class I, class T>
  struct in_value_result {
    [[no_unique_address]] I in;
    [[no_unique_address]] T value;
 
    template<class I2, class T2>
      requires convertible_to<const I&, I2> && convertible_to<const T&, T2>
    constexpr operator in_value_result<I2, T2>() const & {
      return {in, value};
    }
 
    template<class I2, class T2>
      requires convertible_to<I, I2> && convertible_to<T, T2>
    constexpr operator in_value_result<I2, T2>() && {
      return {std::move(in), std::move(value)};
    }
  };
}

```

#### Class template std::ranges::out_value_result

```
namespace std::ranges {
template<class O, class T>
  struct out_value_result {
    [[no_unique_address]] O out;
    [[no_unique_address]] T value;
 
    template<class O2, class T2>
      requires convertible_to<const O&, O2> && convertible_to<const T&, T2>
    constexpr operator out_value_result<O2, T2>() const & {
      return {out, value};
    }
 
    template<class O2, class T2>
      requires convertible_to<O, O2> && convertible_to<T, T2>
    constexpr operator out_value_result<O2, T2>() && {
      return {std::move(out), std::move(value)};
    }
  };
}

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/algorithm&oldid=163909>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2023, at 06:30.