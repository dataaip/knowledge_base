# std::ranges::partition

From cppreference.com
< cpp‎ | algorithm‎ | ranges
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

Algorithm library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Constrained algorithms and algorithms on ranges (C++20) | | | | |
| Constrained algorithms, e.g. ranges::copy, ranges::sort, ... | | | | |
| Execution policies (C++17) | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_execution_policy(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::seqexecution::parexecution::par_unseqexecution::unseq(C++17)    (C++17)(C++17)(C++20) | | | | | | | |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::sequenced_policyexecution::parallel_policyexecution::parallel_unsequenced_policyexecution::parallel_unsequenced(C++17)(C++17)(C++17)(C++20) | | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Non-modifying sequence operations | | | | | | Batch operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_each | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_each_n(C++17) | | | | | | | Search operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of(C++11)                (C++11)(C++11) | | | | | | countcount_if | | | | | | mismatch | | | | | | equal | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not(C++11) | | | | | | find_end | | | | | | find_first_of | | | | | | adjacent_find | | | | | | search | | | | | | search_n | | | | | | | Modifying sequence operations | | | | | | Copy operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copycopy_if(C++11) | | | | | | copy_backward | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copy_n(C++11) | | | | | | move(C++11) | | | | | | move_backward(C++11) | | | | | | | Swap operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | iter_swap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap_ranges | | | | | |  | | | | | | | Transformation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replacereplace_if | | | | | | transform | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replace_copyreplace_copy_if | | | | | |  | | | | | | | Generation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fill | | | | | | fill_n | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | generate | | | | | | generate_n | | | | | | | Removing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | removeremove_if | | | | | | unique | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_copyremove_copy_if | | | | | | unique_copy | | | | | | | Order-changing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse | | | | | | reverse_copy | | | | | | rotate | | | | | | rotate_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | random_shuffleshuffle(until C++17)(C++11) | | | | | | shift_leftshift_right(C++20)(C++20) | | | | | | | Sampling operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sample(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Sorting and related operations | | | | | | Partitioning operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition | | | | | | partition_copy(C++11) | | | | | | stable_partition | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_partitioned(C++11) | | | | | | partition_point(C++11) | | | | | |  | | | | | | | Sorting operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort | | | | | | stable_sort | | | | | | partial_sort | | | | | | partial_sort_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_sorted(C++11) | | | | | | is_sorted_until(C++11) | | | | | | nth_element | | | | | |  | | | | | | | Binary search operations (on partitioned ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lower_bound | | | | | | upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_range | | | | | | binary_search | | | | | | | Set operations (on sorted ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | includes | | | | | | set_union | | | | | | set_intersection | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_difference | | | | | | set_symmetric_difference | | | | | |  | | | | | | | Merge operations (on sorted ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | merge | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_merge | | | | | | | Heap operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | push_heap | | | | | | pop_heap | | | | | | make_heap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort_heap | | | | | | is_heap(C++11) | | | | | | is_heap_until(C++11) | | | | | | | Minimum/maximum operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max | | | | | | min | | | | | | minmax(C++11) | | | | | | clamp(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max_element | | | | | | min_element | | | | | | minmax_element(C++11) | | | | | |  | | | | | | | Lexicographical comparison operations | | | | | | lexicographical_compare | | | | | | lexicographical_compare_three_way(C++20) | | | | | | Permutation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | next_permutation | | | | | | prev_permutation | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_permutation(C++11) | | | | | |  | | | | | |  | | | | | | | C library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | qsort | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | bsearch | | | | | | |
| Numeric operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | inner_product | | | | | | adjacent_difference | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | accumulate | | | | | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partial_sum | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |  | | | | | | |
| Operations on uninitialized memory | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_fill | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy_n(C++11) | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_fill_n | | | | | |  | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | destroy(C++17) | | | | | | destroy_n(C++17) | | | | | | destroy_at(C++17) | | | | | | construct_at(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | |

Constrained algorithmsAll names in this menu belong to namespace `std::ranges`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Non-modifying sequence operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of | | | | | | for_each | | | | | | for_each_n | | | | | | countcount_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_find | | | | | | mismatch | | | | | | equal | | | | | | lexicographical_compare | | | | | | containscontains_subrange(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not | | | | | | find_lastfind_last_iffind_last_if_not(C++23)(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | find_end | | | | | | find_first_of | | | | | | search | | | | | | search_n | | | | | | starts_with(C++23) | | | | | | ends_with(C++23) | | | | | |  | | | | | | |
| Modifying sequence operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copycopy_if | | | | | | copy_n | | | | | | copy_backward | | | | | | move | | | | | | move_backward | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | shift_leftshift_right(C++23)(C++23) | | | | | | fill | | | | | | fill_n | | | | | | generate | | | | | | generate_n | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | transform | | | | | | swap_ranges | | | | | | shuffle | | | | | | sample | | | | | | removeremove_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replacereplace_if | | | | | | reverse | | | | | | rotate | | | | | | remove_copyremove_copy_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | unique | | | | | | replace_copyreplace_copy_if | | | | | | reverse_copy | | | | | | rotate_copy | | | | | | unique_copy | | | | | | |
| Partitioning operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_partitioned | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition_point | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****partition**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stable_partition | | | | | | |
| Sorting operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_sorted | | | | | | is_sorted_until | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort | | | | | | stable_sort | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partial_sort | | | | | | nth_element | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partial_sort_copy | | | | | |  | | | | | | |
| Binary search operations (on sorted ranges) | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lower_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | binary_search | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_range | | | | | | |
| Set operations (on sorted ranges) | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | merge | | | | | | inplace_merge | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_difference | | | | | | set_intersection | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_union | | | | | | includes | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_symmetric_difference | | | | | |  | | | | | | |
| Heap operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_heap | | | | | | is_heap_until | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | make_heap | | | | | | sort_heap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | push_heap | | | | | | pop_heap | | | | | | |
| Minimum/maximum operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max | | | | | | max_element | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | min | | | | | | min_element | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | minmax | | | | | | minmax_element | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | clamp | | | | | |  | | | | | | |
| Permutation operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_permutation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | next_permutation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | prev_permutation | | | | | | |
| Fold operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fold_left(C++23) | | | | | | fold_left_first(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fold_right(C++23) | | | | | | fold_right_last(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fold_left_with_iter(C++23) | | | | | | fold_left_first_with_iter(C++23) | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Numeric operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++23) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random number generation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | generate_random(C++26) | | | | | | | |
| Operations on uninitialized storage | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | construct_at | | | | | | destroy | | | | | | destroy_n | | | | | | destroy_at | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy | | | | | | uninitialized_move | | | | | | uninitialized_fill | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy_n | | | | | | uninitialized_move_n | | | | | | uninitialized_fill_n | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_default_construct | | | | | | uninitialized_default_construct_n | | | | | | uninitialized_value_construct | | | | | | uninitialized_value_construct_n | | | | | | |
| Return types | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | in_fun_result | | | | | | in_in_result | | | | | | in_found_result | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | in_out_result | | | | | | in_in_out_result | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | in_out_out_result | | | | | | min_max_result | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | out_value_result(C++23) | | | | | | in_value_result(C++23) | | | | | |  | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<algorithm>` |  |  |
| Call signature |  |  |
| template< std::permutable I, std::sentinel_for<I> S, class Proj = std::identity,  std::indirect_unary_predicate<std::projected<I, Proj>> Pred >  constexpr ranges::subrange<I>     partition( I first, S last, Pred pred, Proj proj = {} ); | (1) | (since C++20) |
| template< ranges::forward_range R, class Proj = std::identity,  std::indirect_unary_predicate<                std::projected<ranges::iterator_t<R>, Proj>> Pred >  requires std::permutable<ranges::iterator_t<R>>  constexpr ranges::borrowed_subrange_t<R>     partition( R&& r, Pred pred, Proj proj = {} ); | (2) | (since C++20) |
|  |  |  |

1) Reorders the elements in the range ``first`,`last`)` in such a way that the projection proj of all elements for which the predicate pred returns true precede the projection proj of elements for which predicate pred returns false. Relative order of elements is not preserved.2) Same as (1), but uses r as the source range, as if using [ranges::begin(r) as first and ranges::end(r) as last.

The function-like entities described on this page are **algorithm function objects** (informally known as **niebloids**), that is:

- Explicit template argument lists cannot be specified when calling any of them.
- None of them are visible to argument-dependent lookup.
- When any of them are found by normal unqualified lookup as the name to the left of the function-call operator, argument-dependent lookup is inhibited.

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | the range of elements to reorder |
| r | - | the range of elements to reorder |
| pred | - | predicate to apply to the projected elements |
| proj | - | projection to apply to the elements |

### Return value

A subrange starting with an iterator to the first element of the second group and finishing with an iterator equal to last. (2) returns std::ranges::dangling if r is an rvalue of non-`borrowed_range` type.

### Complexity

Given N = ranges::distance(first, last), exactly N applications of the predicate and projection. At most N / 2 swaps if `I` models ranges::bidirectional_iterator, and at most N swaps otherwise.

### Possible implementation

|  |
| --- |
| ```text struct partition_fn {     template<std::permutable I, std::sentinel_for<I> S, class Proj = std::identity,              std::indirect_unary_predicate<std::projected<I, Proj>> Pred>     constexpr ranges::subrange<I>         operator()(I first, S last, Pred pred, Proj proj = {}) const     {         first = ranges::find_if_not(first, last, std::ref(pred), std::ref(proj));         if (first == last)             return {first, first};           for (auto i = ranges::next(first); i != last; ++i)         {             if (std::invoke(pred, std::invoke(proj, *i)))             {                 ranges::iter_swap(i, first);                 ++first;             }         }         return {std::move(first), std::move(last)};     }       template<ranges::forward_range R, class Proj = std::identity,              std::indirect_unary_predicate<                  std::projected<ranges::iterator_t<R>, Proj>> Pred>     requires std::permutable<ranges::iterator_t<R>>     constexpr ranges::borrowed_subrange_t<R>         operator()(R&& r, Pred pred, Proj proj = {}) const     {         return (*this)(ranges::begin(r), ranges::end(r),                        std::ref(pred), std::ref(proj));     } };   inline constexpr partition_fn partition; ``` |

### Example

Run this code

```
#include <algorithm>
#include <forward_list>
#include <functional>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>
 
namespace ranges = std::ranges;
 
template<class I, std::sentinel_for<I> S, class Cmp = ranges::less>
requires std::sortable<I, Cmp>
void quicksort(I first, S last, Cmp cmp = Cmp {})
{
    using reference = std::iter_reference_t<I>;
 
    if (first == last)
        return;
 
    auto size = ranges::distance(first, last);
    auto pivot = ranges::next(first, size - 1);
    ranges::iter_swap(pivot, ranges::next(first, size / 2));
 
    auto tail = ranges::partition(first, pivot, =
    {
        return std::invoke(cmp, em, *pivot); // em < pivot
    });
 
    ranges::iter_swap(pivot, tail.begin());
    quicksort(first, tail.begin(), std::ref(cmp));
    quicksort(ranges::next(tail.begin()), last, std::ref(cmp));
}
 
int main()
{
    std::ostream_iterator<int> cout {std::cout, " "};
 
    std::vector<int> v {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Original vector:  \t";
    ranges::copy(v, cout);
 
    auto tail = ranges::partition(v, [](int i) { return i % 2 == 0; });
 
    std::cout << "\nPartitioned vector: \t";
    ranges::copy(ranges::begin(v), ranges::begin(tail), cout);
    std::cout << "│ ";
    ranges::copy(tail, cout);
 
    std::forward_list<int> fl {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92};
    std::cout << "\nUnsorted list: \t\t";
    ranges::copy(fl, cout);
 
    quicksort(ranges::begin(fl), ranges::end(fl), ranges::greater {});
    std::cout << "\nQuick-sorted list: \t";
    ranges::copy(fl, cout);
 
    std::cout << '\n';
}

```

Possible output:

```
Original vector:        0 1 2 3 4 5 6 7 8 9
Partitioned vector:     0 8 2 6 4 │ 5 3 7 1 9
Unsorted list:          1 30 -4 3 5 -4 1 6 -8 2 -5 64 1 92
Quick-sorted list:      92 64 30 6 5 3 2 1 1 1 -4 -4 -5 -8

```

### See also

|  |  |
| --- | --- |
| ranges::partition_copy(C++20) | copies a range dividing the elements into two groups (algorithm function object) |
| ranges::is_partitioned(C++20) | determines if the range is partitioned by the given predicate (algorithm function object) |
| ranges::stable_partition(C++20) | divides elements into two groups while preserving their relative order (algorithm function object) |
| partition | divides a range of elements into two groups   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/partition&oldid=150555>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 April 2023, at 00:19.