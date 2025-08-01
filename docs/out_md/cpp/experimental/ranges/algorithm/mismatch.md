# std::experimental::ranges::mismatch

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of | | | | | | countcount_if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not | | | | | | find_end | | | | | | find_first_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | adjacent_find | | | | | | search | | | | | | search_n | | | | | | ****mismatch**** | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal | | | | | | for_each | | | | | | lexicographical_compare | | | | | |  | | | | | |  | | | | | |
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
| template< InputIterator I1, Sentinel<I1> S1, InputIterator I2, Sentinel<I2> S2,  class Proj1 = ranges::identity, class Proj2 = ranges::identity,            class Pred = ranges::equal_to<> >      requires IndirectRelation<Pred, projected<I1, Proj1>, projected<I2, Proj2>>  auto mismatch( I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = Pred{},                 Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{} ) -> ranges::tagged_pair<tag::in1(I1), tag::in2(I2)>; | (1) | (ranges TS) |
| template< InputRange R1, InputRange R2,  class Proj1 = ranges::identity, class Proj2 = ranges::identity,            class Pred = ranges::equal_to<> >      requires IndirectRelation<Pred, projected<ranges::iterator_t<R1>, Proj1>,                                projected<ranges::iterator_t<R2>, Proj2>>  auto mismatch( R1&& r1, R2&& r2, Pred pred = Pred{},                  Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{} )      -> ranges::tagged_pair<tag::in1(ranges::safe_iterator_t<R1>), tag::in2(ranges::safe_iterator_t<R2>)>; | (2) | (ranges TS) |
| template< InputIterator I1, Sentinel<I1> S1, class I2,  class Pred  = ranges::equal_to<>,            class Proj1 = ranges::identity, class Proj2 = ranges::identity >      requires InputIterator<std::decay_t<I2>> && !Range<I2> &&               IndirectRelation<Pred, projected<I1, Proj1>,                                      projected<std::decay_t<I2>, Proj2>>  auto mismatch( I1 first1, S1 last1, I2&& first2_, Pred pred = Pred{},                 Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{} ) -> ranges::tagged_pair<tag::in1(I1), tag::in2(std::decay_t<I2>)>; | (3) | (ranges TS)  (deprecated) |
| template< InputRange R1, class I2, class Pred = ranges::equal_to<>,  class Proj1 = ranges::identity, class Proj2 = ranges::identity >      requires InputIterator<std::decay_t<I2>> && !Range<I2> &&               IndirectRelation<Pred, projected<ranges::iterator_t<R1>, Proj1>,                                      projected<std::decay_t<I2>, Proj2>>  auto mismatch( R1&& r1, I2&& first2_, Pred pred = Pred{},                 Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{} )      -> ranges::tagged_pair<tag::in1(ranges::safe_iterator_t<Rng1>), tag::in2(std::decay_t<I2>)>; | (4) | (ranges TS)  (deprecated) |
|  |  |  |

1) Returns the first mismatching pair of elements from two ranges: one defined by ``first1`,`last1`)` and another defined by `[`first2`,`last2`)`.2) Same as (1), but uses r1 as the first source range and r2 as the second source range, as if using [ranges::begin(r1) as first1, ranges::end(r1) as last1, ranges::begin(r2) as first2, and ranges::end(r2) as last2.3) Same as (1), but behaves as if first2 is std::decay_t<I2> first2 = std::forward<I2>(first2_); and last2 is ranges::unreachable{}. The underlying algorithm never increments first2 more than last1 - first1 times.4) Same as (3), but uses r1 as the first source range, as if using ranges::begin(r1) as first1 and ranges::end(r1) as last1.

Elements are compared using pred to the projected elements of the two ranges, as if by ranges::invoke(pred, ranges::invoke(proj1, \*i), ranges::invoke(proj2, \*j)).

Notwithstanding the declarations depicted above, the actual number and order of template parameters for algorithm declarations is unspecified. Thus, if explicit template arguments are used when calling an algorithm, the program is probably non-portable.

### Parameters

|  |  |  |
| --- | --- | --- |
| first1, last1 | - | the first range of the elements |
| r1 | - | the first range of the elements |
| first2, last2 | - | the second range of the elements |
| r2 | - | the second range of the elements |
| first2_ | - | the beginning of the second range of the elements |
| pred | - | predicate to apply to the projected elements |
| proj1 | - | projection to apply to the elements in the first range |
| proj2 | - | projection to apply to the elements in the second range |

### Return value

A `tagged_pair` object with iterators to the first two non-equal elements (the iterator from the first range has the tag in1 and the iterator from the second range has the tag in2).

If no mismatches are found when the comparison reaches last1 or last2, whichever happens first, the pair holds the end iterator and the corresponding iterator from the other range.

### Complexity

At most last1 - first1 applications of the predicate and each projection.

### Possible implementation

|  |
| --- |
| ```text template<InputIterator I1, Sentinel<I1> S1, InputIterator I2, Sentinel<I2> S2,          class Proj1 = ranges::identity, class Proj2 = ranges::identity,          class Pred = ranges::equal_to<>>     requires IndirectRelation<Pred, projected<I1, Proj1>, projected<I2, Proj2>> auto mismatch(I1 first1, S1 last1, I2 first2, S2 last2, Pred pred = Pred{},               Proj1 proj1 = Proj1{}, Proj2 proj2 = Proj2{})     -> ranges::tagged_pair<tag::in1(I1), tag::in2(I2)> {     while (first1 != last1 && first2 != last2 &&            ranges::invoke(pred, ranges::invoke(proj1, *first1),                                 ranges::invoke(proj2, *first2)))     {         ++first1;         ++first2;     }     return {first1, first2}; } ``` |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### See also

|  |  |
| --- | --- |
| mismatch | finds the first position where two ranges differ   (function template) |
| equal | determines if two sets of elements are the same   (function template) |
| findfind_iffind_if_not | finds the first element satisfying specific criteria   (function template) |
| lexicographical_compare | returns true if one range is lexicographically less than another   (function template) |
| search | searches for a range of elements   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/ranges/algorithm/mismatch&oldid=155281>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 July 2023, at 22:41.