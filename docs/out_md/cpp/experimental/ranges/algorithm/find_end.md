# std::experimental::ranges::find_end

From cppreference.com
< cpp‎ | experimental‎ | ranges
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Ranges

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Concepts | | | | |
| General utilities | | | | |
| Iterators | | | | |
| Ranges | | | | |
| Algorithms | | | | |

Algorithms library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Non-modifying sequence operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of | | | | | | countcount_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not | | | | | | ****find_end**** | | | | | | find_first_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_find | | | | | | search | | | | | | search_n | | | | | | mismatch | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal | | | | | | for_each | | | | | | lexicographical_compare | | | | | |  | | | | | |  | | | | | |
| Modifying sequence operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | copycopy_if | | | | | | copy_n") | | | | | | copy_backward") | | | | | | move") | | | | | | move_backward") | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fill") | | | | | | fill_n") | | | | | | generate") | | | | | | generate_n") | | | | | | swap_ranges") | | | | | | shuffle") | | | | | | transform") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | removeremove_if") | | | | | | replacereplace_if") | | | | | | reverse") | | | | | | rotate") | | | | | | unique") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_copyremove_copy_if") | | | | | | replace_copyreplace_copy_if") | | | | | | reverse_copy") | | | | | | rotate_copy") | | | | | | unique_copy") | | | | | |
| Partitioning operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_partitioned") | | | | | | partition_point") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition") | | | | | | partition_copy") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | stable_partition") | | | | | |  | | | | | |
| Sorting operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_sorted") | | | | | | is_sorted_until") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort | | | | | | stable_sort") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partial_sort") | | | | | | partial_sort_copy") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | nth_element") | | | | | |  | | | | | |
| Binary search operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | lower_bound") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | upper_bound") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | binary_search") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_range") | | | | | |
| Set operations (on sorted ranges) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | merge") | | | | | | inplace_merge") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | includes") | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_difference") | | | | | | set_intersection") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_symmetric_difference") | | | | | | set_union") | | | | | |
| Heap operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_heap") | | | | | | is_heap_until") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | make_heap") | | | | | | sort_heap") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | push_heap") | | | | | | pop_heap") | | | | | |
| Minimum/maximum operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | max") | | | | | | max_element") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | min") | | | | | | min_element") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | minmax") | | | | | | minmax_element") | | | | | |
| Permutations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_permutation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | next_permutation") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | prev_permutation") | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/ranges/algorithm>` |  |  |
| template< ForwardIterator I1, Sentinel<I1> S1, ForwardIterator I2, Sentinel<I2> S2,  class Proj = ranges::identity,            IndirectRelation<I2, projected<I1, Proj>> Pred = ranges::equal_to<> >  I1 find_end( I1 first1, S1 last1, I2 first2, S2 last2,              Pred pred = Pred{}, Proj proj = Proj{} ); | (1) | (ranges TS) |
| template< ForwardRange R1, ForwardRange R2, class Proj = ranges::identity,            IndirectRelation<ranges::iterator_t<R2>,                             projected<ranges::iterator_t<R1>, Proj>> Pred = ranges::equal_to<> >  ranges::safe_iterator_t<R1> find_end( Rng1&& rng1, Rng2&& rng2,                                       Pred pred = Pred{}, Proj proj = Proj{} ); | (2) | (ranges TS) |
|  |  |  |

1) Searches for the last occurrence of the sequence ``first2`,`last2`)` in the range `[`first1`,`last1`)` (after projection with proj).2) Same as (1), but uses r1 as the first source range and r2 as the second source range, as if using [ranges::begin(r1) as first1, ranges::end(r1) as last1, ranges::begin(r2) as first2, and ranges::end(r2) as last2.

Notwithstanding the declarations depicted above, the actual number and order of template parameters for algorithm declarations is unspecified. Thus, if explicit template arguments are used when calling an algorithm, the program is probably non-portable.

### Parameters

|  |  |  |
| --- | --- | --- |
| first1, last1 | - | the range of elements to examine |
| r1 | - | the range of elements to examine |
| first2, last2 | - | the range of elements to search for |
| r2 | - | the range of elements to search for |
| pred | - | predicate to compare the elements |
| proj | - | projection to apply to the elements in the first range |

### Return value

Iterator to the beginning of last occurrence of the sequence ``first2`,`last2`)` in range `[`first1`,`last1`)` (after projection with proj).

If `[`first2`,`last2`)` is empty or if no such sequence is found, an iterator that compares equal to last1 is returned.

### Complexity

At most `S * (N - S + 1)` applications of the predicate and projection, where S = last2 - first2 and N = last1 - first1.

### Notes

The projection is only applied to the range `[`first1`,`last1`)`.

### Possible implementation

|  |
| --- |
| ```text template<ForwardIterator I1, Sentinel<I1> S1, ForwardIterator I2, Sentinel<I2> S2,          class Proj = ranges::identity,          IndirectRelation<I2, projected<I1, Proj>> Pred = ranges::equal_to<>> I1 find_end(I1 first1, S1 last1, I2 first2, S2 last2,             Pred pred = Pred{}, Proj proj = Proj{}) {     I1 result = ranges::next(first1, last1);     if (first2 == last2)         return result;     while (true)     {         I1 new_result = ranges::search(first1, last1, first2, last2, pred, proj);         if (new_result == last1)             break;         else         {             result = new_result;             first1 = result;             ++first1;         }     }     return result; } ``` |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| [find_end | finds the last sequence of elements in a certain range   (function template) |
| search | searches for a range of elements   (function template) |
| includes") | returns true if one set is a subset of another   (function template) |
| adjacent_find | finds the first two adjacent items that are equal (or satisfy a given predicate)   (function template) |
| findfind_iffind_if_not | finds the first element satisfying specific criteria   (function template) |
| find_first_of | searches for any one of a set of elements   (function template) |
| search_n | searches for a number consecutive copies of an element in a range   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/find_end&oldid=155245>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 July 2023, at 01:55.