# std::ranges::fold_left

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
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****fold_left****(C++23) | | | | | | fold_left_first(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fold_right(C++23) | | | | | | fold_right_last(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fold_left_with_iter(C++23) | | | | | | fold_left_first_with_iter(C++23) | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Numeric operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++23) | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random number generation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | generate_random(C++26) | | | | | | | |
| Operations on uninitialized storage | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | construct_at | | | | | | destroy | | | | | | destroy_n | | | | | | destroy_at | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy | | | | | | uninitialized_move | | | | | | uninitialized_fill | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy_n | | | | | | uninitialized_move_n | | | | | | uninitialized_fill_n | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_default_construct | | | | | | uninitialized_default_construct_n | | | | | | uninitialized_value_construct | | | | | | uninitialized_value_construct_n | | | | | | |
| Return types | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | in_fun_result | | | | | | in_in_result | | | | | | in_found_result | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | in_out_result | | | | | | in_in_out_result | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | in_out_out_result | | | | | | min_max_result | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | out_value_result(C++23) | | | | | | in_value_result(C++23) | | | | | |  | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<algorithm>` |  |  |
| Call signature |  |  |
|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| template< std::input_iterator I, std::sentinel_for<I> S, class T,  /\* indirectly-binary-left-foldable \*/<T, I> F > constexpr auto fold_left( I first, S last, T init, F f ); |  | (since C++23)  (until C++26) |
| template< std::input_iterator I, std::sentinel_for<I> S,  class T = std::iter_value_t<I>,            /\* indirectly-binary-left-foldable \*/<T, I> F > constexpr auto fold_left( I first, S last, T init, F f ); |  | (since C++26) |
|  |  |  |
| --- | --- | --- |
|  | (2) |  |
| template< ranges::input_range R, class T,  /\* indirectly-binary-left-foldable \*/                <T, ranges::iterator_t<R>> F > constexpr auto fold_left( R&& r, T init, F f ); |  | (since C++23)  (until C++26) |
| template< ranges::input_range R, class T = ranges::range_value_t<R>,  /\* indirectly-binary-left-foldable \*/                <T, ranges::iterator_t<R>> F > constexpr auto fold_left( R&& r, T init, F f ); |  | (since C++26) |
|  |  |  |
| --- | --- | --- |
| Helper concepts |  |  |
| template< class F, class T, class I >  concept /\* indirectly-binary-left-foldable \*/ = /\* see description \*/; | (3) | (exposition only\*) |
|  |  |  |

Left-folds "enwiki:Fold (higher-order function)") the elements of given range, that is, returns the result of evaluation of the chain expression:  
`f(f(f(f(init, x1), x2), ...), xn)`, where `x1`, `x2`, ..., `xn` are elements of the range.

Informally, `ranges::fold_left` behaves like std::accumulate's overload that accepts a binary predicate.

The behavior is undefined if ``first`,`last`)` is not a valid range.

1) The range is `[`first`,`last`)`. Equivalent to
return [ranges::fold_left_with_iter(std::move(first), last, std::move(init), f).value.2) Same as (1), except that uses r as the range, as if by using ranges::begin(r) as first and ranges::end(r) as last.3) Equivalent to:

|  |  |  |
| --- | --- | --- |
| Helper concepts |  |  |
| template< class F, class T, class I, class U >  concept /\*indirectly-binary-left-foldable-impl\*/ =      std::movable<T> &&      std::movable<U> &&      std::convertible_to<T, U> &&      std::invocable<F&, U, std::iter_reference_t<I>> &&      std::assignable_from<U&, std::invoke_result_t<F&, U, std::iter_reference_t<I>>>; | (3A) | (exposition only\*) |
| template< class F, class T, class I >  concept /\*indirectly-binary-left-foldable\*/ =      std::copy_constructible<F> &&      std::indirectly_readable<I> &&      std::invocable<F&, T, std::iter_reference_t<I>> &&      std::convertible_to<std::invoke_result_t<F&, T, std::iter_reference_t<I>>,          std::decay_t<std::invoke_result_t<F&, T, std::iter_reference_t<I>>>> &&      /\*indirectly-binary-left-foldable-impl\*/<F, T, I, std::decay_t<std::invoke_result_t<F&, T, std::iter_reference_t<I>>>>; | (3B) | (exposition only\*) |
|  |  |  |

The function-like entities described on this page are **algorithm function objects** (informally known as **niebloids**), that is:

- Explicit template argument lists cannot be specified when calling any of them.
- None of them are visible to argument-dependent lookup.
- When any of them are found by normal unqualified lookup as the name to the left of the function-call operator, argument-dependent lookup is inhibited.

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | the range of elements to fold |
| r | - | the range of elements to fold |
| init | - | the initial value of the fold |
| f | - | the binary function object |

### Return value

An object of type U that contains the result of left-fold "enwiki:Fold (higher-order function)") of the given range over f, where U is equivalent to std::decay_t<std::invoke_result_t<F&, T, std::iter_reference_t<I>>>.

If the range is empty, U(std::move(init)) is returned.

### Possible implementations

|  |
| --- |
| ```text struct fold_left_fn {     template<std::input_iterator I, std::sentinel_for<I> S, class T = std::iter_value_t<I>,              /* indirectly-binary-left-foldable */<T, I> F>     constexpr auto operator()(I first, S last, T init, F f) const     {         using U = std::decay_t<std::invoke_result_t<F&, T, std::iter_reference_t<I>>>;         if (first == last)             return U(std::move(init));         U accum = std::invoke(f, std::move(init), *first);         for (++first; first != last; ++first)             accum = std::invoke(f, std::move(accum), *first);         return std::move(accum);     }       template<ranges::input_range R, class T = ranges::range_value_t<R>,              /* indirectly-binary-left-foldable */<T, ranges::iterator_t<R>> F>     constexpr auto operator()(R&& r, T init, F f) const     {         return (*this)(ranges::begin(r), ranges::end(r), std::move(init), std::ref(f));     } };   inline constexpr fold_left_fn fold_left; ``` |

### Complexity

Exactly ranges::distance(first, last) applications of the function object f.

### Notes

The following table compares all constrained folding algorithms:

| Fold function template | Starts from | Initial value | Return type |
| --- | --- | --- | --- |
| ranges::fold_left | left | init | U |
| ranges::fold_left_first | left | first element | std::optional<U> |
| ranges::fold_right | right | init | U |
| ranges::fold_right_last | right | last element | std::optional<U> |
| ranges::fold_left_with_iter | left | init | (1) ranges::in_value_result<I, U>  (2) ranges::in_value_result<BR, U>,  where BR is ranges::borrowed_iterator_t<R> |
| ranges::fold_left_first_with_iter | left | first element | (1) ranges::in_value_result<I, std::optional<U>>  (2) ranges::in_value_result<BR, std::optional<U>>  where BR is ranges::borrowed_iterator_t<R> |

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_ranges_fold` | `202207L` | (C++23) | `std::ranges` fold algorithms |
| `__cpp_lib_algorithm_default_value_type` | `202403L` | (C++26) | List-initialization for algorithms (1,2) |

### Example

Run this code

```
#include <algorithm>
#include <complex>
#include <functional>
#include <iostream>
#include <ranges>
#include <string>
#include <utility>
#include <vector>
 
int main()
{
    namespace ranges = std::ranges;
 
    std::vector v{1, 2, 3, 4, 5, 6, 7, 8};
 
    int sum = ranges::fold_left(v.begin(), v.end(), 0, std::plus<int>()); // (1)
    std::cout << "sum: " << sum << '\n';
 
    int mul = ranges::fold_left(v, 1, std::multiplies<int>()); // (2)
    std::cout << "mul: " << mul << '\n';
 
    // get the product of the std::pair::second of all pairs in the vector:
    std::vector<std::pair<char, float>> data {{'A', 2.f}, {'B', 3.f}, {'C', 3.5f}};
    float sec = ranges::fold_left
    (
        data | ranges::views::values, 2.0f, std::multiplies<>()
    );
    std::cout << "sec: " << sec << '\n';
 
    // use a program defined function object (lambda-expression):
    std::string str = ranges::fold_left
    (
        v, "A", [](std::string s, int x) { return s + ':' + std::to_string(x); }
    );
    std::cout << "str: " << str << '\n';
 
    using CD = std::complex<double>;
    std::vector<CD> nums{{1, 1}, {2, 0}, {3, 0}};
    #ifdef __cpp_lib_algorithm_default_value_type
        auto res = ranges::fold_left(nums, {7, 0}, std::multiplies{}); // (2)
    #else
        auto res = ranges::fold_left(nums, CD{7, 0}, std::multiplies{}); // (2)
    #endif
    std::cout << "res: " << res << '\n';
}

```

Output:

```
sum: 36
mul: 40320
sec: 42
str: A:1:2:3:4:5:6:7:8
res: (42,42)

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 27.6.18 Fold [alg.fold]

### See also

|  |  |
| --- | --- |
| ranges::fold_left_first(C++23) | left-folds a range of elements using the first element as an initial value (algorithm function object) |
| ranges::fold_right(C++23) | right-folds a range of elements (algorithm function object) |
| ranges::fold_right_last(C++23) | right-folds a range of elements using the last element as an initial value (algorithm function object) |
| ranges::fold_left_with_iter(C++23) | left-folds a range of elements, and returns a pair (iterator, value) (algorithm function object) |
| ranges::fold_left_first_with_iter(C++23) | left-folds a range of elements using the first element as an initial value, and returns a pair (iterator, optional) (algorithm function object) |
| accumulate | sums up or folds a range of elements   (function template) |
| reduce(C++17) | similar to std::accumulate, except out of order   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/ranges/fold_left&oldid=176216>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 September 2024, at 02:32.