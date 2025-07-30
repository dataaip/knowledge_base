# std::bit_cast

From cppreference.com
< cpp‎ | numeric
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

Utilities library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function objects | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

Bit manipulation

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| ****bit_cast****(C++20) | | | | |
| byteswap(C++23) | | | | |
| Integral powers of 2 | | | | |
| has_single_bit(C++20) | | | | |
| bit_ceil(C++20) | | | | |
| bit_floor(C++20) | | | | |
| bit_width(C++20) | | | | |
| Rotating | | | | |
| rotl(C++20) | | | | |
| rotr(C++20) | | | | |
| Counting | | | | |
| countl_zero(C++20) | | | | |
| countl_one(C++20) | | | | |
| countr_zero(C++20) | | | | |
| countr_one(C++20) | | | | |
| popcount(C++20) | | | | |
| Endian | | | | |
| endian(C++20) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<bit>` |  |  |
| template< class To, class From >  constexpr To bit_cast( const From& from ) noexcept; |  | (since C++20) |
|  |  |  |

Obtain a value of type `To` by reinterpreting the object representation of `From`. Every bit in the value representation of the returned `To` object is equal to the corresponding bit in the object representation of from. The values of padding bits in the returned `To` object are unspecified.

If there is no value of type `To` corresponding to the value representation produced, the behavior is undefined. If there are multiple such values, which value is produced is unspecified.

A bit in the value representation of the result is **indeterminate** if it

- does not correspond to a bit in the value representation of `From` (i.e. it corresponds to a padding bit), or
- corresponds to a bit of an object that(until C++26)for which the smallest enclosing object(since C++26) is not within its lifetime, or
- has an indeterminate value.

|  |  |
| --- | --- |
| A bit in the value representation of the result is **erroneous** if it corresponds to a bit for which the smallest enclosing object has an erroneous value. | (since C++26) |

|  |  |
| --- | --- |
| For each bit in the value representation of the result that is indeterminate, the smallest object containing that bit has an indeterminate value; the behavior is undefined unless that object is of an uninitialized-friendly type.  The result does not otherwise contain any indeterminate values. | (until C++26) |
| For each bit b in the value representation of the result that is indeterminate or erroneous, let u be the smallest object enclosing b:   - If u is of uninitialized-friendly type, u has an indeterminate value if any of the bits in its value representation are indeterminate, or otherwise has an erroneous value. - Otherwise, if b is indeterminate, the behavior is undefined. - Otherwise, the behavior is erroneous, and the result is as specified above. | (since C++26) |

The result does not otherwise contain any indeterminate or erroneous values.

This overload participates in overload resolution only if sizeof(To) == sizeof(From) and both `To` and `From` are TriviallyCopyable types.

This function template is constexpr if and only if each of `To`, `From` and the types of all subobjects of `To` and `From`:

- is not a union type;
- is not a pointer type;
- is not a pointer to member type;
- is not a volatile-qualified type; and
- has no non-static data member of reference type.

### Parameters

|  |  |  |
| --- | --- | --- |
| from | - | the source of bits for the return value |

### Return value

An object of type `To` whose value representation is as described above.

### Possible implementation

To implement `std::bit_cast`, ignoring the fact that it's constexpr, std::memcpy can be used, when it is needed, to interpret the object representation as one of another type:

```
template<class To, class From>
std::enable_if_t<
    sizeof(To) == sizeof(From) &&
    std::is_trivially_copyable_v<From> &&
    std::is_trivially_copyable_v<To>,
    To>
// constexpr support needs compiler magic
bit_cast(const From& src) noexcept
{
    static_assert(std::is_trivially_constructible_v<To>,
        "This implementation additionally requires "
        "destination type to be trivially constructible");
 
    To dst;
    std::memcpy(&dst, &src, sizeof(To));
    return dst;
}

```

### Notes

reinterpret_cast (or equivalent explicit cast) between pointer or reference types shall not be used to reinterpret object representation in most cases because of the type aliasing rule.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_bit_cast` | `201806L` | (C++20) | `std::bit_cast` |

### Example

Run this code

```
#include <bit>
#include <cstdint>
#include <iostream>
 
constexpr double f64v = 19880124.0; 
constexpr auto u64v = std::bit_cast<std::uint64_t>(f64v);
static_assert(std::bit_cast<double>(u64v) == f64v); // round-trip
 
constexpr std::uint64_t u64v2 = 0x3fe9000000000000ull;
constexpr auto f64v2 = std::bit_cast<double>(u64v2);
static_assert(std::bit_cast<std::uint64_t>(f64v2) == u64v2); // round-trip
 
int main()
{
    std::cout
        << "std::bit_cast<std::uint64_t>(" << std::fixed << f64v << ") == 0x"
        << std::hex << u64v << '\n'
        << "std::bit_cast<double>(0x" << std::hex << u64v2 << ") == "
        << std::fixed << f64v2 << '\n';
}

```

Possible output:

```
std::bit_cast<std::uint64_t>(19880124.000000) == 0x4172f58bc0000000
std::bit_cast<double>(0x3fe9000000000000) == 0.781250

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 2482 (P1272R4) | C++20 | it was unspecified whether UB would occur when involving indeterminate bits | specified |

### See also

|  |  |
| --- | --- |
| start_lifetime_asstart_lifetime_as_array(C++23) | implicitly creates objects in given storage with the object representation reused   (function template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/bit_cast&oldid=178980>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 2 January 2025, at 08:59.