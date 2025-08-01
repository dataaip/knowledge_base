# std::experimental::simd<T,Abi>::simd

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****simd**** | | | | | | copy_from | | | | | | copy_to | | | | | | size | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator!operator~operator+operator- | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | [operator[]](operator_at.html "cpp/experimental/simd/simd/operator at") | | | | | | operator++operator-- | | | | | |  | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+operator-operator\*operator/operator%operator&operator|operator^operator<<operator>> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator+=operator-=operator\*=operator/=operator%=operator&=operator|=operator^=operator<<=operator>>= | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=operator>=operator<=operator>operator< | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | |

|  |  |  |
| --- | --- | --- |
| simd() noexcept = default; | (1) | (parallelism TS v2) |
| template< class U >  simd( U&& value ) noexcept; | (2) | (parallelism TS v2) |
| template< class U >  simd( const simd<U, simd_abi::fixed_size<size()>>& other ) noexcept; | (3) | (parallelism TS v2) |
| template< class G >  explicit simd( G&& generator ) noexcept; | (4) | (parallelism TS v2) |
| template< class U, class Flags >  simd( const U\* mem, Flags flags ); | (5) | (parallelism TS v2) |
| simd( const simd& other ) noexcept = default; | (6) | (parallelism TS v2)  (implicitly declared) |
| simd( simd&& other ) noexcept = default; | (7) | (parallelism TS v2)  (implicitly declared) |
|  |  |  |

1) Constructs a `simd` using default initialization (constructed without initializer) or value initialization (constructed with an empty initializer).2) The broadcast constructor constructs a `simd` with all values initialized to value. This overload participates in overload resolution only if the conversion from `U` to `T` is **value-preserving**, or `U` is either int or unsigned int if `T` is an unsigned integral type.3) Constructs a `simd` where the i-th element is initialized to static_cast<T>(other[i]) for all i in the range of ``​0​`,`[`size()``)`. This overload participates in overload resolution only if `Abi` is simd_abi::fixed_size<size()> and the conversion from `U` to `T` is **value-preserving**, and, if both `U` and `T` are integral, the integer conversion rank of `T` is greater than the integer conversion rank of `U`.4) The generator constructor constructs a `simd` where the i-th element is initialized to generator(std::integral_constant<std::size_t, i>()). This overload participates in overload resolution only if `simd(gen(std::integral_constant<std::size_t, i>()))` is well-formed for all i in the range of ``​0​`,`[`size()``)`. The calls to generator are unsequenced with respect to each other. **Vectorization-unsafe** standard library functions may not be invoked by generator.5) The load constructor constructs a `simd` where the i-th element is initialized to static_cast<T>(mem[i]) for all i in the range of ``​0​`,`[`size()``)`.6,7) Implicitly declared copy and move constructors. Constructs a `simd` where each element is initialized from the values of the elements in other.

### Parameters

|  |  |  |
| --- | --- | --- |
| value | - | the value used for initialization of all `simd` elements |
| other | - | another `simd` to copy from |
| generator | - | a function object used for initialization of each `simd` element |
| mem | - | a pointer into an array where ``mem`,`mem + size()`)` is a valid range |
| flags | - | if of type [vector_aligned_tag, the load constructor may assume mem to point to storage aligned by memory_alignment_v<simd, U> |
| Type requirements | | |
| -The conversion from `U` to `T` must be **value-preserving**. The broadcast constructor (2) additionally allows `U` to be int or to be unsigned int if `T` is an unsigned integral type. | | |
| -`is_simd_flag_type_v<Flags>` must be true. | | |

### Example

Run this code

```
#include <cstddef>
#include <experimental/simd>
#include <iostream>
namespace stdx = std::experimental;
 
int main()
{
    stdx::native_simd<int> a; // uninitialized
    a = 1; // all elements set to 1
    stdx::native_simd<int> b([](int i) { return i; }); // {0, 1, 2, 3, ...}
 
    alignas(stdx::memory_alignment_v<stdx::native_simd<int>>)
        std::array<int, stdx::native_simd<int>::size() * 2> mem = {};
    for (std::size_t i = 0; i < mem.size(); ++i)
        mem[i] = i & 1;
 
    stdx::native_simd<int> c(&mem[0], stdx::vector_aligned); // {0, 1, 0, 1, ...}
    stdx::native_simd<int> d(&mem[1], stdx::element_aligned); // {1, 0, 1, 0, ...}
 
    auto sum = a + b + c + d;
 
    for (std::size_t i = 0; i < sum.size(); ++i)
        std::cout << sum[i] << ' ';
    std::cout << '\n';
}

```

Possible output:

```
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17

```

### See also

|  |  |
| --- | --- |
| copy_from(parallelism TS v2) | loads simd elements from contiguous memory   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/simd/simd/simd&oldid=157774>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 September 2023, at 09:52.