# std::experimental::simd<T,Abi>::copy_to

From cppreference.com
< cpp‎ | experimental‎ | simd‎ | simd
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

Extensions for parallelism v2

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Parallel exceptions | | | | |
| exception_list") | | | | |
| Additional execution policies | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::vector_policy") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | execution::unsequenced_policy") | | | | | |
| Algorithms | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | induction") | | | | | | reductionreduction_plusreduction_minusreduction_multiplies") | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reduction_bit_andreduction_bit_orreduction_bit_xorreduction_minreduction_max") | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | for_loopfor_loop_stridedfor_loop_nfor_loop_n_strided") | | | | | |  | | | | | |  | | | | | |
| execution::no_vec") | | | | |
| execution::ordered_update_t") | | | | |
| Task blocks | | | | |
| task_block") | | | | |
| task_cancelled_exception") | | | | |
| define_task_blockdefine_task_block_restore_thread") | | | | |
| Data-parallel vectors | | | | |

SIMD library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Main classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd_mask | | | | | |
| ABI tags | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd_abi::scalar | | | | | | simd_abi::fixed_size | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd_abi::native | | | | | | simd_abi::compatible | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd_abi::max_fixed_size | | | | | | simd_abi::deduce | | | | | |
| Alignment tags | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | element_aligned_tagelement_aligned | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | vector_aligned_tagvector_aligned | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | overaligned_tagoveraligned | | | | | |
| Where expression | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | where | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | where_expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | const_where_expression | | | | | |
| Casts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd_caststatic_simd_cast | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | to_fixed_sizeto_compatibleto_native | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | splitsplit_by | | | | | | concat | | | | | |
| Algorithms | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | min | | | | | | max | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | minmax | | | | | | clamp | | | | | |
| Reduction | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | reducehminhmax | | | | | |
| Mask reduction | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | all_ofany_ofnone_ofsome_of | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | popcount | | | | | | find_first_setfind_last_set | | | | | |  | | | | | |
| Traits | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_simdis_simd_mask | | | | | | is_abi_tag | | | | | | is_simd_flag_type | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd_size | | | | | | memory_alignment | | | | | | rebind_simdresize_simd | | | | | |
| Math functions | | | | |

std::experimental::simd

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | simd | | | | | | copy_from | | | | | | ****copy_to**** | | | | | | size | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!operator~operator+operator- | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | [operator[]](operator_at.html "cpp/experimental/simd/simd/operator at") | | | | | | operator++operator-- | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+operator-operator\*operator/operator%operator&operator|operator^operator<<operator>> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+=operator-=operator\*=operator/=operator%=operator&=operator|=operator^=operator<<=operator>>= | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=operator>=operator<=operator>operator< | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| template< class U, class Flags >  void copy_to( U\* mem, Flags flags ); |  | (parallelism TS v2) |
|  |  |  |

The store function copies all elements of a simd such that the i-th element is converted to `U` and subsequently written to mem[i] for all i in the range of ``​0​`,`[`size()``)`.

### Parameters

|  |  |  |
| --- | --- | --- |
| mem | - | a pointer into an array where ``mem`,`mem + size()`)` is a valid range |
| flags | - | if of type [vector_aligned_tag, the load constructor may assume mem to point to storage aligned by memory_alignment_v<simd, U> |
| Type requirements | | |
| -`U` must be a **vectorizable** type. | | |
| -`is_simd_flag_type_v<Flags>` must be true. | | |

### Example

Run this code

```
#include <experimental/simd>
#include <iostream>
namespace stdx = std::experimental;
 
int main()
{
    alignas(stdx::memory_alignment_v<stdx::native_simd<int>>)
        std::array<int, stdx::native_simd<int>::size()> mem = {};
 
    stdx::native_simd<int> a = 7;
    a.copy_to(&mem[0], stdx::vector_aligned);
 
    for (int e : mem)
        std::cout << e << ' ';
    std::cout << '\n';
}

```

Possible output:

```
7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7

```

### See also

|  |  |
| --- | --- |
| element_aligned_tagelement_aligned(parallelism TS v2) | flag indicating alignment of the load/store address to element alignment   (class) |
| vector_aligned_tagvector_aligned(parallelism TS v2) | flag indicating alignment of the load/store address to vector alignment   (class) |
| overaligned_tagoveraligned(parallelism TS v2) | flag indicating alignment of the load/store address to the specified alignment   (class template) |
| memory_alignment(parallelism TS v2) | obtains an appropriate alignment for vector_aligned   (class template) |
| copy_from(parallelism TS v2) | loads simd elements from contiguous memory   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/simd/simd/copy_to&oldid=156157>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 August 2023, at 10:09.