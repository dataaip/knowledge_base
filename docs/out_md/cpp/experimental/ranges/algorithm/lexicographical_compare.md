# std::experimental::ranges::lexicographical_compare

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of | | | | | | countcount_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not | | | | | | find_end | | | | | | find_first_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_find | | | | | | search | | | | | | search_n | | | | | | mismatch | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal | | | | | | for_each | | | | | | ****lexicographical_compare**** | | | | | |  | | | | | |  | | | | | |
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
| template< InputIterator I1, Sentinel<I1> S1, InputIterator I2, Sentinel<I2> S2,  class Proj1 = ranges::identity, class Proj2 = ranges::identity,            class Comp = ranges::less<> >      requires IndirectStrictWeakOrder<Comp, projected<I1, Proj1>, projected<I2, Proj2>>  bool lexicographical_compare( I1 first1, S1 last1, I2 first2, S2 last2,                                Comp comp = Comp{},                               Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{} ); | (1) | (ranges TS) |
| template< InputRange R1, InputRange R2,  class Proj1 = ranges::identity, class Proj2 = ranges::identity,            class Comp = ranges::less<> >      requires IndirectStrictWeakOrder<Comp, projected<ranges::iterator_t<R1>, Proj1>,                                             projected<ranges::iterator_t<R2>, Proj2>>  bool lexicographical_compare( R1&& r1, R2&& r2, Comp comp = Comp{},                               Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{} ); | (2) | (ranges TS) |
|  |  |  |

1) Checks if the first range ``first1`,`last1`)` is lexicographically **less** than the second range `[`first2`,`last2`)`. Elements are compared using the given binary comparison function comp, after being projected with proj1 and proj2 respectively.2) Same as (1), but uses r1 as the first source range and r2 as the second source range, as if using [ranges::begin(r1) as first1, ranges::end(r1) as last1, ranges::begin(r2) as first2, and ranges::end(r2) as last2.

Lexicographical comparison is an operation with the following properties:

- Two ranges are compared element by element.
- The first mismatching element defines which range is lexicographically **less** or **greater** than the other.
- If one range is a prefix of another, the shorter range is lexicographically **less** than the other.
- If two ranges have equivalent elements and are of the same length, then the ranges are lexicographically **equal**.
- An empty range is lexicographically **less** than any non-empty range.
- Two empty ranges are lexicographically **equal**.

### Parameters

|  |  |  |
| --- | --- | --- |
| first1, last1 | - | the first range of elements to examine |
| r1 | - | the first range of elements to examine |
| first2, last2 | - | the second range of elements to examine |
| r2 | - | the second range of elements to examine |
| comp | - | comparison function to apply to the projected elements |
| proj1 | - | projection to apply to the elements in the first range |
| proj2 | - | projection to apply to the elements in the second range |

### Return value

true if the first range is lexicographically **less** than the second.

### Complexity

At most 2·min(N1, N2) applications of the comparison operation, where N1 = last1 - first1 and N2 = last2 - first2.

### Possible implementation

|  |
| --- |
| ```text template<InputIterator I1, Sentinel<I1> S1, InputIterator I2, Sentinel<I2> S2,          class Proj1 = ranges::identity, class Proj2 = ranges::identity,          class Comp = ranges::less<>>     requires IndirectStrictWeakOrder<Comp, projected<I1, Proj1>, projected<I2, Proj2>> bool lexicographical_compare(I1 first1, S1 last1, I2 first2, S2 last2,                              Comp comp = Comp{},                               Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{}) {     for (; (first1 != last1) && (first2 != last2); (void) ++first1, (void) ++first2)     {         if (ranges::invoke(comp, ranges::invoke(proj1, *first1),                                  ranges::invoke(proj2, *first2)))             return true;         if (ranges::invoke(comp, ranges::invoke(proj2, *first2),                                  ranges::invoke(proj1, *first1)))             return false;     }     return (first1 == last1) && (first2 != last2); } ``` |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| lexicographical_compare | returns true if one range is lexicographically less than another   (function template) |
| equal | determines if two sets of elements are the same   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/lexicographical_compare&oldid=155279>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 July 2023, at 22:31.