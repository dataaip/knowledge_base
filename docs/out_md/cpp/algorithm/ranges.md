# Constrained algorithms (since C++20)

From cppreference.com
< cpp‎ | algorithm
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
| ****Constrained algorithms and algorithms on ranges**** (C++20) | | | | |
| Constrained algorithms, e.g. ranges::copy, ranges::sort, ... | | | | |
| Execution policies (C++17) | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_execution_policy(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::seqexecution::parexecution::par_unseqexecution::unseq(C++17)    (C++17)(C++17)(C++20) | | | | | | | |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::sequenced_policyexecution::parallel_policyexecution::parallel_unsequenced_policyexecution::parallel_unsequenced(C++17)(C++17)(C++17)(C++20) | | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Non-modifying sequence operations | | | | | | Batch operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_each | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_each_n(C++17) | | | | | | | Search operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of(C++11)                (C++11)(C++11) | | | | | | countcount_if | | | | | | mismatch | | | | | | equal | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not(C++11) | | | | | | find_end | | | | | | find_first_of | | | | | | adjacent_find | | | | | | search | | | | | | search_n | | | | | | | Modifying sequence operations | | | | | | Copy operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copycopy_if(C++11) | | | | | | copy_backward | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copy_n(C++11) | | | | | | move(C++11) | | | | | | move_backward(C++11) | | | | | | | Swap operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | iter_swap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap_ranges | | | | | |  | | | | | | | Transformation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replacereplace_if | | | | | | transform | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replace_copyreplace_copy_if | | | | | |  | | | | | | | Generation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fill | | | | | | fill_n | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | generate | | | | | | generate_n | | | | | | | Removing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | removeremove_if | | | | | | unique | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_copyremove_copy_if | | | | | | unique_copy | | | | | | | Order-changing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse | | | | | | reverse_copy | | | | | | rotate | | | | | | rotate_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | random_shuffleshuffle(until C++17)(C++11) | | | | | | shift_leftshift_right(C++20)(C++20) | | | | | | | Sampling operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sample(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Sorting and related operations | | | | | | Partitioning operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition | | | | | | partition_copy(C++11) | | | | | | stable_partition | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_partitioned(C++11) | | | | | | partition_point(C++11) | | | | | |  | | | | | | | Sorting operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort | | | | | | stable_sort | | | | | | partial_sort | | | | | | partial_sort_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_sorted(C++11) | | | | | | is_sorted_until(C++11) | | | | | | nth_element | | | | | |  | | | | | | | Binary search operations (on partitioned ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lower_bound | | | | | | upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_range | | | | | | binary_search | | | | | | | Set operations (on sorted ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | includes | | | | | | set_union | | | | | | set_intersection | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_difference | | | | | | set_symmetric_difference | | | | | |  | | | | | | | Merge operations (on sorted ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | merge | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_merge | | | | | | | Heap operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | push_heap | | | | | | pop_heap | | | | | | make_heap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort_heap | | | | | | is_heap(C++11) | | | | | | is_heap_until(C++11) | | | | | | | Minimum/maximum operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max | | | | | | min | | | | | | minmax(C++11) | | | | | | clamp(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max_element | | | | | | min_element | | | | | | minmax_element(C++11) | | | | | |  | | | | | | | Lexicographical comparison operations | | | | | | lexicographical_compare | | | | | | lexicographical_compare_three_way(C++20) | | | | | | Permutation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | next_permutation | | | | | | prev_permutation | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_permutation(C++11) | | | | | |  | | | | | |  | | | | | | | C library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | qsort | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | bsearch | | | | | | |
| Numeric operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | inner_product | | | | | | adjacent_difference | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | accumulate | | | | | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partial_sum | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |  | | | | | | |
| Operations on uninitialized memory | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_fill | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy_n(C++11) | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_fill_n | | | | | |  | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | destroy(C++17) | | | | | | destroy_n(C++17) | | | | | | destroy_at(C++17) | | | | | | construct_at(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | |

****Constrained algorithms****All names in this menu belong to namespace `std::ranges`

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Non-modifying sequence operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of | | | | | | for_each | | | | | | for_each_n | | | | | | countcount_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_find | | | | | | mismatch | | | | | | equal | | | | | | lexicographical_compare | | | | | | containscontains_subrange(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not | | | | | | find_lastfind_last_iffind_last_if_not(C++23)(C++23)(C++23) | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | find_end | | | | | | find_first_of | | | | | | search | | | | | | search_n | | | | | | starts_with(C++23) | | | | | | ends_with(C++23) | | | | | |  | | | | | | |
| Modifying sequence operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copycopy_if | | | | | | copy_n | | | | | | copy_backward | | | | | | move | | | | | | move_backward | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | shift_leftshift_right(C++23)(C++23) | | | | | | fill | | | | | | fill_n | | | | | | generate | | | | | | generate_n | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | transform | | | | | | swap_ranges | | | | | | shuffle | | | | | | sample | | | | | | removeremove_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replacereplace_if | | | | | | reverse | | | | | | rotate | | | | | | remove_copyremove_copy_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | unique | | | | | | replace_copyreplace_copy_if | | | | | | reverse_copy | | | | | | rotate_copy | | | | | | unique_copy | | | | | | |
| Partitioning operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_partitioned | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition_point | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stable_partition | | | | | | |
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

C++20 provides constrained versions of most algorithms in the namespace `std::ranges`. In these algorithms, a range can be specified as either an iterator-sentinel pair or as a single `range` argument, and projections and pointer-to-member callables are supported. Additionally, the return types of most algorithms have been changed to return all potentially useful information computed during the execution of the algorithm.

### Algorithm function objects

An **algorithm function object** (AFO), informally known as **niebloid**, is a customization point object (CPO) that is specified as one or more overloaded function templates. The name of these function templates designates the corresponding algorithm function object.

For an algorithm function object o, let `S` be the corresponding set of function templates. Then for any sequence of arguments args..., o(args...) is expression-equivalent to s(args...), where the result of name lookup for s is the overload set `S`.

The constrained algorithms in the namespace `std::ranges` are defined as algorithm function objects. As a result:

- Explicit template argument lists cannot be specified when calling any of them.
- None of them are visible to argument-dependent lookup.
- When any of them are found by normal unqualified lookup as the name to the left of the function-call operator, argument-dependent lookup is inhibited.

### Constrained algorithms

|  |  |
| --- | --- |
| Defined in header `<algorithm>` | |
| Defined in namespace `std::ranges` | |
| Non-modifying sequence operations | |
| ranges::all_ofranges::any_ofranges::none_of(C++20)(C++20)(C++20) | checks if a predicate is true for all, any or none of the elements in a range (algorithm function object) |
| ranges::for_each(C++20) | applies a function to a range of elements (algorithm function object) |
| ranges::for_each_n(C++20) | applies a function object to the first N elements of a sequence (algorithm function object) |
| ranges::countranges::count_if(C++20)(C++20) | returns the number of elements satisfying specific criteria (algorithm function object) |
| ranges::mismatch(C++20) | finds the first position where two ranges differ (algorithm function object) |
| ranges::equal(C++20) | determines if two sets of elements are the same (algorithm function object) |
| ranges::lexicographical_compare(C++20) | returns true if one range is lexicographically less than another (algorithm function object) |
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
| ranges::shuffle(C++20) | randomly re-orders elements in a range (algorithm function object) |
| ranges::shift_leftranges::shift_right(C++23) | shifts elements in a range (algorithm function object) |
| ranges::sample(C++20) | selects N random elements from a sequence (algorithm function object) |
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
| Set operations (on sorted ranges) | |
| ranges::merge(C++20) | merges two sorted ranges (algorithm function object) |
| ranges::inplace_merge(C++20) | merges two ordered ranges in-place (algorithm function object) |
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
| Permutation operations | |
| ranges::is_permutation(C++20) | determines if a sequence is a permutation of another sequence (algorithm function object) |
| ranges::next_permutation(C++20) | generates the next greater lexicographic permutation of a range of elements (algorithm function object) |
| ranges::prev_permutation(C++20) | generates the next smaller lexicographic permutation of a range of elements (algorithm function object) |

### Constrained numeric operations

|  |  |
| --- | --- |
| Defined in header `<numeric>` | |
| Defined in namespace `std::ranges` | |
| ranges::iota(C++23) | fills a range with successive increments of the starting value (algorithm function object) |

### Constrained fold operations

|  |  |
| --- | --- |
| Defined in header `<algorithm>` | |
| Defined in namespace `std::ranges` | |
| ranges::fold_left(C++23) | left-folds a range of elements (algorithm function object) |
| ranges::fold_left_first(C++23) | left-folds a range of elements using the first element as an initial value (algorithm function object) |
| ranges::fold_right(C++23) | right-folds a range of elements (algorithm function object) |
| ranges::fold_right_last(C++23) | right-folds a range of elements using the last element as an initial value (algorithm function object) |
| ranges::fold_left_with_iter(C++23) | left-folds a range of elements, and returns a pair (iterator, value) (algorithm function object) |
| ranges::fold_left_first_with_iter(C++23) | left-folds a range of elements using the first element as an initial value, and returns a pair (iterator, optional) (algorithm function object) |

### Constrained uninitialized memory algorithms

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| Defined in namespace `std::ranges` | |
| ranges::uninitialized_copy(C++20) | copies a range of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_copy_n(C++20) | copies a number of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_fill(C++20) | copies an object to an uninitialized area of memory, defined by a range (algorithm function object) |
| ranges::uninitialized_fill_n(C++20) | copies an object to an uninitialized area of memory, defined by a start and a count (algorithm function object) |
| ranges::uninitialized_move(C++20) | moves a range of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_move_n(C++20) | moves a number of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_default_construct(C++20) | constructs objects by default-initialization in an uninitialized area of memory, defined by a range (algorithm function object) |
| ranges::uninitialized_default_construct_n(C++20) | constructs objects by default-initialization in an uninitialized area of memory, defined by a start and count (algorithm function object) |
| ranges::uninitialized_value_construct(C++20) | constructs objects by value-initialization in an uninitialized area of memory, defined by a range (algorithm function object) |
| ranges::uninitialized_value_construct_n(C++20) | constructs objects by value-initialization in an uninitialized area of memory, defined by a start and a count (algorithm function object) |
| ranges::destroy(C++20) | destroys a range of objects (algorithm function object) |
| ranges::destroy_n(C++20) | destroys a number of objects in a range (algorithm function object) |
| ranges::destroy_at(C++20) | destroys an object at a given address (algorithm function object) |
| ranges::construct_at(C++20) | creates an object at a given address (algorithm function object) |

### Constrained random number algorithms

|  |  |
| --- | --- |
| Defined in header `<random>` | |
| Defined in namespace `std::ranges` | |
| ranges::generate_random(C++26) | fills a range with random numbers from a uniform random bit generator (algorithm function object) |

### Return types

|  |  |
| --- | --- |
| Defined in header `<algorithm>` | |
| Defined in namespace `std::ranges` | |
| ranges::in_fun_result(C++20) | provides a way to store an iterator and a function object as a single unit   (class template) |
| ranges::in_in_result(C++20) | provides a way to store two iterators as a single unit   (class template) |
| ranges::in_out_result(C++20) | provides a way to store two iterators as a single unit   (class template) |
| ranges::in_in_out_result(C++20) | provides a way to store three iterators as a single unit   (class template) |
| ranges::in_out_out_result(C++20) | provides a way to store three iterators as a single unit   (class template) |
| ranges::min_max_result(C++20) | provides a way to store two objects or references of the same type as a single unit   (class template) |
| ranges::in_found_result(C++20) | provides a way to store an iterator and a boolean flag as a single unit   (class template) |
| ranges::in_value_result(C++23) | provides a way to store an iterator and a value as a single unit   (class template) |
| ranges::out_value_result(C++23) | provides a way to store an iterator and a value as a single unit   (class template) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_algorithm_default_value_type` | `202403L` | (C++26) | List-initialization for algorithms |
| `__cpp_lib_ranges` | `201911L` | (C++20) | Ranges library and constrained algorithms |
| `__cpp_lib_ranges_contains` | `202207L` | (C++23) | std::ranges::contains |
| `__cpp_lib_ranges_find_last` | `202207L` | (C++23) | std::ranges::find_last |
| `__cpp_lib_ranges_fold` | `202207L` | (C++23) | `std::ranges` fold algorithms |
| `__cpp_lib_ranges_iota` | `202202L` | (C++23) | std::ranges::iota |
| `__cpp_lib_ranges_starts_ends_with` | `202106L` | (C++23) | std::ranges::starts_with, std::ranges::ends_with |
| `__cpp_lib_shift` | `201806L` | (C++20) | std::shift_left, std::shift_right |
| `202202L` | (C++23) | std::ranges::shift_left, std::ranges::shift_right |
| `__cpp_lib_ranges_generate_random` | `202403L` | (C++26) | std::ranges::generate_random |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P3136R1 | C++20 | niebloids were allowed to be specified as special entities other than function objects | required to be specified as function objects |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges&oldid=178068>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 27 November 2024, at 14:48.