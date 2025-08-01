# std::search

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
| Constrained algorithms and algorithms on ranges (C++20) | | | | |
| Constrained algorithms, e.g. ranges::copy, ranges::sort, ... | | | | |
| Execution policies (C++17) | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_execution_policy(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::seqexecution::parexecution::par_unseqexecution::unseq(C++17)    (C++17)(C++17)(C++20) | | | | | | | |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::sequenced_policyexecution::parallel_policyexecution::parallel_unsequenced_policyexecution::parallel_unsequenced(C++17)(C++17)(C++17)(C++20) | | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Non-modifying sequence operations | | | | | | Batch operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_each | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_each_n(C++17) | | | | | | | Search operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_of(C++11)                (C++11)(C++11) | | | | | | countcount_if | | | | | | mismatch | | | | | | equal | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | findfind_iffind_if_not(C++11) | | | | | | find_end | | | | | | find_first_of | | | | | | adjacent_find | | | | | | ****search**** | | | | | | search_n | | | | | | | Modifying sequence operations | | | | | | Copy operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copycopy_if(C++11) | | | | | | copy_backward | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copy_n(C++11) | | | | | | move(C++11) | | | | | | move_backward(C++11) | | | | | | | Swap operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | iter_swap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap_ranges | | | | | |  | | | | | | | Transformation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replacereplace_if | | | | | | transform | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | replace_copyreplace_copy_if | | | | | |  | | | | | | | Generation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | fill | | | | | | fill_n | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | generate | | | | | | generate_n | | | | | | | Removing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | removeremove_if | | | | | | unique | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | remove_copyremove_copy_if | | | | | | unique_copy | | | | | | | Order-changing operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reverse | | | | | | reverse_copy | | | | | | rotate | | | | | | rotate_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | random_shuffleshuffle(until C++17)(C++11) | | | | | | shift_leftshift_right(C++20)(C++20) | | | | | | | Sampling operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sample(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Sorting and related operations | | | | | | Partitioning operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partition | | | | | | partition_copy(C++11) | | | | | | stable_partition | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_partitioned(C++11) | | | | | | partition_point(C++11) | | | | | |  | | | | | | | Sorting operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort | | | | | | stable_sort | | | | | | partial_sort | | | | | | partial_sort_copy | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_sorted(C++11) | | | | | | is_sorted_until(C++11) | | | | | | nth_element | | | | | |  | | | | | | | Binary search operations (on partitioned ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lower_bound | | | | | | upper_bound | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_range | | | | | | binary_search | | | | | | | Set operations (on sorted ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | includes | | | | | | set_union | | | | | | set_intersection | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | set_difference | | | | | | set_symmetric_difference | | | | | |  | | | | | | | Merge operations (on sorted ranges) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | merge | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | inplace_merge | | | | | | | Heap operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | push_heap | | | | | | pop_heap | | | | | | make_heap | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | sort_heap | | | | | | is_heap(C++11) | | | | | | is_heap_until(C++11) | | | | | | | Minimum/maximum operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max | | | | | | min | | | | | | minmax(C++11) | | | | | | clamp(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | max_element | | | | | | min_element | | | | | | minmax_element(C++11) | | | | | |  | | | | | | | Lexicographical comparison operations | | | | | | lexicographical_compare | | | | | | lexicographical_compare_three_way(C++20) | | | | | | Permutation operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | next_permutation | | | | | | prev_permutation | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_permutation(C++11) | | | | | |  | | | | | |  | | | | | | | C library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | qsort | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | bsearch | | | | | | |
| Numeric operations | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | inner_product | | | | | | adjacent_difference | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | accumulate | | | | | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | partial_sum | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |  | | | | | | |
| Operations on uninitialized memory | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_fill | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_copy_n(C++11) | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_fill_n | | | | | |  | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | destroy(C++17) | | | | | | destroy_n(C++17) | | | | | | destroy_at(C++17) | | | | | | construct_at(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<algorithm>` |  |  |
| template< class ForwardIt1, class ForwardIt2 >  ForwardIt1 search( ForwardIt1 first, ForwardIt1 last,                    ForwardIt2 s_first, ForwardIt2 s_last ); | (1) | (constexpr since C++20) |
| template< class ExecutionPolicy, class ForwardIt1, class ForwardIt2 >  ForwardIt1 search( ExecutionPolicy&& policy,                     ForwardIt1 first, ForwardIt1 last,                    ForwardIt2 s_first, ForwardIt2 s_last ); | (2) | (since C++17) |
| template< class ForwardIt1, class ForwardIt2, class BinaryPred >  ForwardIt1 search( ForwardIt1 first, ForwardIt1 last,                     ForwardIt2 s_first, ForwardIt2 s_last,                    BinaryPred p ); | (3) | (constexpr since C++20) |
| template< class ExecutionPolicy,  class ForwardIt1, class ForwardIt2, class BinaryPred >  ForwardIt1 search( ExecutionPolicy&& policy,                     ForwardIt1 first, ForwardIt1 last,                     ForwardIt2 s_first, ForwardIt2 s_last,                    BinaryPred p ); | (4) | (since C++17) |
| template< class ForwardIt, class Searcher >  ForwardIt search( ForwardIt first, ForwardIt last, const Searcher& searcher ); | (5) | (since C++17)  (constexpr since C++20) |
|  |  |  |

1-4) Searches for the first occurrence of the sequence of elements ``s_first`,`s_last`)` in the range `[`first`,`last`)`.1) Elements are compared using operator==.3) Elements are compared using the given binary predicate p.2,4) Same as (1,3), but executed according to policy. These overloads participate in overload resolution only if all following conditions are satisfied:

|  |  |
| --- | --- |
| [std::is_execution_policy_v<std::decay_t<ExecutionPolicy>> is true. | (until C++20) |
| std::is_execution_policy_v<std::remove_cvref_t<ExecutionPolicy>> is true. | (since C++20) |

5) Searches the range ``first`,`last`)` for the pattern specified in the constructor of searcher.

|  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| The standard library provides the following searchers:   |  |  | | --- | --- | | [default_searcher(C++17) | standard C++ library search algorithm implementation   (class template) | | boyer_moore_searcher(C++17) | Boyer-Moore search algorithm implementation   (class template) | | boyer_moore_horspool_searcher(C++17) | Boyer-Moore-Horspool search algorithm implementation   (class template) | | (since C++17) |

### Parameters

|  |  |  |
| --- | --- | --- |
| first, last | - | the range of elements to examine |
| s_first, s_last | - | the range of elements to search for |
| policy | - | the execution policy to use |
| searcher | - | the searcher encapsulating the search algorithm and the pattern to look for |
| p | - | binary predicate which returns ​true if the elements should be treated as equal.   The signature of the predicate function should be equivalent to the following:   bool pred(const Type1 &a, const Type2 &b);  While the signature does not need to have const &, the function must not modify the objects passed to it and must be able to accept all values of type (possibly const) `Type1` and `Type2` regardless of value category (thus, Type1 & is not allowed, nor is Type1 unless for `Type1` a move is equivalent to a copy(since C++11)).  The types Type1 and Type2 must be such that objects of types ForwardIt1 and ForwardIt2 can be dereferenced and then implicitly converted to Type1 and Type2 respectively. ​ |
| Type requirements | | |
| -`ForwardIt1, ForwardIt2` must meet the requirements of LegacyForwardIterator. | | |
| -`BinaryPred` must meet the requirements of BinaryPredicate. | | |

### Return value

1-4) Iterator to the beginning of first occurrence of the sequence ``s_first`,`s_last`)` in the range `[`first`,`last`)`. If no such occurrence is found, last is returned. If `[`s_first`,`s_last`)` is empty, first is returned.5) searcher(first, last).first.

### Complexity

1-4) Given \(\scriptsize N\)N as [std::distance(first, last) and \(\scriptsize S\)S as std::distance(s_first, s_last):1,2) At most \(\scriptsize N\cdot S\)N·S comparisons using operator==.3,4) At most \(\scriptsize N\cdot S\)N·S applications of the predicate p.5) Depends on searcher.

### Exceptions

The overloads with a template parameter named `ExecutionPolicy` report errors as follows:

- If execution of a function invoked as part of the algorithm throws an exception and `ExecutionPolicy` is one of the standard policies, std::terminate is called. For any other `ExecutionPolicy`, the behavior is implementation-defined.
- If the algorithm fails to allocate memory, std::bad_alloc is thrown.

### Possible implementation

| search (1) |
| --- |
| ```text template<class ForwardIt1, class ForwardIt2> constexpr //< since C++20 ForwardIt1 search(ForwardIt1 first, ForwardIt1 last,                   ForwardIt2 s_first, ForwardIt2 s_last) {     while (true)     {         ForwardIt1 it = first;         for (ForwardIt2 s_it = s_first; ; ++it, ++s_it)         {             if (s_it == s_last)                 return first;             if (it == last)                 return last;             if (!(*it == *s_it))                 break;         }         ++first;     } } ``` |
| search (3) |
| ```text template<class ForwardIt1, class ForwardIt2, class BinaryPred> constexpr //< since C++20 ForwardIt1 search(ForwardIt1 first, ForwardIt1 last,                   ForwardIt2 s_first, ForwardIt2 s_last, BinaryPred p) {     while (true)     {         ForwardIt1 it = first;         for (ForwardIt2 s_it = s_first; ; ++it, ++s_it)         {             if (s_it == s_last)                 return first;             if (it == last)                 return last;             if (!p(*it, *s_it))                 break;         }         ++first;     } } ``` |

### Example

Run this code

```
#include <algorithm>
#include <cassert>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string_view>
#include <vector>
 
using namespace std::literals;
 
bool contains(const auto& cont, std::string_view s)
{
    // str.find() (or str.contains(), since C++23) can be used as well
    return std::search(cont.begin(), cont.end(), s.begin(), s.end()) != cont.end();
}
 
int main()
{
    const auto str{"why waste time learning, when ignorance is instantaneous?"sv};
    assert(contains(str, "learning"));
    assert(not contains(str, "lemming"));
 
    const std::vector vec(str.begin(), str.end());
    assert(contains(vec, "learning"));
    assert(not contains(vec, "leaning"));
 
    // The C++17 overload with searchers demo:
    constexpr auto quote
    {
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed "
        "do eiusmod tempor incididunt ut labore et dolore magna aliqua"sv
    };
 
    for (const auto word : {"pisci"sv, "Pisci"sv})
    {
        std::cout << "The string " << std::quoted(word) << ' ';
        const std::boyer_moore_searcher searcher(word.begin(), word.end());
        const auto it = std::search(quote.begin(), quote.end(), searcher);
        if (it == quote.end())
            std::cout << "not found\n";
        else
            std::cout << "found at offset " << std::distance(quote.begin(), it) << '\n';
    }
}

```

Output:

```
The string "pisci" found at offset 43
The string "Pisci" not found

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 1205 | C++98 | the return value was unclear if ``s_first`,`s_last`)` is empty | returns first in this case |
| [LWG 1338 | C++98 | the resolution of LWG issue 1205 was incorrectly applied, making first to be returned if no occurence is found | returns last in this case |
| LWG 2150 | C++98 | the condition of “sequence occurence” was incorrect | corrected |

### See also

|  |  |
| --- | --- |
| find_end | finds the last sequence of elements in a certain range   (function template) |
| includes | returns true if one sequence is a subsequence of another   (function template) |
| equal | determines if two sets of elements are the same   (function template) |
| findfind_iffind_if_not(C++11) | finds the first element satisfying specific criteria   (function template) |
| lexicographical_compare | returns true if one range is lexicographically less than another   (function template) |
| mismatch | finds the first position where two ranges differ   (function template) |
| search_n | searches for the first occurrence of a number consecutive copies of an element in a range   (function template) |
| default_searcher(C++17) | standard C++ library search algorithm implementation   (class template) |
| boyer_moore_searcher(C++17) | Boyer-Moore search algorithm implementation   (class template) |
| boyer_moore_horspool_searcher(C++17) | Boyer-Moore-Horspool search algorithm implementation   (class template) |
| ranges::search(C++20) | searches for the first occurrence of a range of elements (algorithm function object) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/algorithm/search&oldid=170396>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 March 2024, at 21:46.