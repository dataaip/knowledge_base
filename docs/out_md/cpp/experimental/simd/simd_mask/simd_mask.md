# std::experimental::simd_mask<T,Abi>::simd_mask

From cppreference.com
< cpp‎ | experimental‎ | simd‎ | simd mask
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

std::experimental::simd_mask

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****simd_mask**** | | | | | | size | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | copy_from | | | | | | copy_to | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | [operator[]](operator_at.html "cpp/experimental/simd/simd mask/operator at") | | | | | | operator!") | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=") | | | | | | operator&&operator||") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator&operator|operator^") | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator&=operator|=operator^=") | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| simd_mask() noexcept = default; | (1) | (parallelism TS v2) |
| explicit simd_mask( bool value ) noexcept; | (2) | (parallelism TS v2) |
| template< class U >  simd_mask( const simd_mask<U, simd_abi::fixed_size<size()>>& other ) noexcept; | (3) | (parallelism TS v2) |
| template< class U, class Flags >  simd_mask( const bool\* mem, Flags flags ); | (4) | (parallelism TS v2) |
| simd_mask( const simd_mask& other ) noexcept = default; | (5) | (parallelism TS v2)  (implicitly declared) |
| simd_mask( simd_mask&& other ) noexcept = default; | (6) | (parallelism TS v2)  (implicitly declared) |
|  |  |  |

1) Constructs a `simd_mask` using default initialization (constructed without initializer) or value initialization (constructed with an empty initializer).2) The broadcast constructor constructs a `simd_mask` with all values initialized to value.3) Constructs a `simd_mask` where the i-th element is initialized to other[i] for all i in the range of ``​0​`,`[`size()``)`. This overload participates in overload resolution only if `Abi` is simd_abi::fixed_size<size()>.4) The load constructor constructs a `simd_mask` where the i-th element is initialized to mem[i] for all i in the range of ``​0​`,`[`size()``)`.5,6) Implicitly declared copy and move constructors. Constructs a `simd_mask` where each element is initialized from the values of the elements in other.

### Parameters

|  |  |  |
| --- | --- | --- |
| value | - | the value used for initialization of all `simd_mask` elements |
| other | - | another `simd_mask` to copy from |
| mem | - | a pointer into an array where ``mem`,`mem + size()`)` is a valid range |
| flags | - | if of type [vector_aligned_tag, the load constructor may assume `mem` to point to storage aligned by memory_alignment_v<simd_mask> |
| Type requirements | | |
| -`is_simd_flag_type_v<Flags>` must be true. | | |

### Example

Run this code

```
#include <algorithm>
#include <cstddef>
#include <experimental/simd>
#include <iostream>
namespace stdx = std::experimental;
 
int main()
{
    [[maybe_unused]]
    stdx::native_simd_mask<int> a;       // uninitialized
    stdx::native_simd_mask<int> b(true); // all elements initialized with true
    stdx::native_simd_mask<int> c{};     // all elements initialized with false
 
    alignas(stdx::memory_alignment_v<stdx::native_simd_mask<int>>)
        std::array<bool, stdx::native_simd_mask<int>::size() * 2> mem = {};
    std::ranges::generate(mem, [i{0}] mutable -> bool { return i++ & 1; });
 
    stdx::native_simd_mask<int> d(&mem[0], stdx::vector_aligned);  // {0, 1, 0, 1, ...}
    stdx::native_simd_mask<int> e(&mem[1], stdx::element_aligned); // {1, 0, 1, 0, ...}
 
    const auto xored = b ^ c ^ d ^ e;
 
    for (std::size_t i{}; i != xored.size(); ++i)
        std::cout << xored[i] << ' ';
    std::cout << '\n';
}

```

Possible output:

```
0 0 0 0 0 0 0 0

```

### See also

|  |  |
| --- | --- |
| element_aligned_tagelement_aligned(parallelism TS v2) | flag indicating alignment of the load/store address to element alignment   (class) |
| vector_aligned_tagvector_aligned(parallelism TS v2) | flag indicating alignment of the load/store address to vector alignment   (class) |
| overaligned_tagoveraligned(parallelism TS v2) | flag indicating alignment of the load/store address to the specified alignment   (class template) |
| memory_alignment(parallelism TS v2) | obtains an appropriate alignment for vector_aligned   (class template) |
| copy_from(parallelism TS v2) | loads simd_mask elements from contiguous memory   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/simd/simd_mask/simd_mask&oldid=157775>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 September 2023, at 09:57.