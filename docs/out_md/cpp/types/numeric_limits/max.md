# std::numeric_limits<T>::max

From cppreference.com
< cpp‎ | types‎ | numeric limits
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

Type support

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Basic types | | | | |
| Fixed width integer types (C++11) | | | | |
| Fixed width floating-point types (C++23) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ptrdiff_t | | | | | | size_t | | | | | | max_align_t(C++11) | | | | | | byte(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | nullptr_t(C++11) | | | | | | offsetof | | | | | | NULL | | | | | |  | | | | | |
| Numeric limits | | | | |
| numeric_limits | | | | |
| C numeric limits interface | | | | |
| Runtime type information | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | type_info | | | | | | type_index(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | bad_typeid | | | | | | bad_cast | | | | | |

std::numeric_limits

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Static constants | | | | |
| numeric_limits::is_specialized | | | | |
| numeric_limits::is_signed | | | | |
| numeric_limits::is_integer | | | | |
| numeric_limits::is_exact | | | | |
| numeric_limits::has_infinity | | | | |
| numeric_limits::has_quiet_NaN | | | | |
| numeric_limits::has_signaling_NaN | | | | |
| numeric_limits::has_denorm | | | | |
| numeric_limits::has_denorm_loss | | | | |
| numeric_limits::round_style | | | | |
| numeric_limits::is_iec559 | | | | |
| numeric_limits::is_bounded | | | | |
| numeric_limits::is_modulo | | | | |
| numeric_limits::digits | | | | |
| numeric_limits::digits10 | | | | |
| numeric_limits::max_digits10(C++11) | | | | |
| numeric_limits::radix | | | | |
| numeric_limits::min_exponent | | | | |
| numeric_limits::min_exponent10 | | | | |
| numeric_limits::max_exponent | | | | |
| numeric_limits::max_exponent10 | | | | |
| numeric_limits::traps | | | | |
| numeric_limits::tinyness_before | | | | |
| Static member functions | | | | |
| numeric_limits::min | | | | |
| numeric_limits::lowest(C++11) | | | | |
| ****numeric_limits::max**** | | | | |
| numeric_limits::epsilon | | | | |
| numeric_limits::round_error | | | | |
| numeric_limits::infinity | | | | |
| numeric_limits::quiet_NaN | | | | |
| numeric_limits::signaling_NaN | | | | |
| numeric_limits::denorm_min | | | | |
| Helper types | | | | |
| float_round_style | | | | |
| float_denorm_style | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<limits>` |  |  |
|  |  |  |
| --- | --- | --- |
| static T max() throw(); |  | (until C++11) |
| static constexpr T max() noexcept; |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Returns the maximum finite value representable by the numeric type `T`. Meaningful for all bounded types.

### Return value

|  |  |
| --- | --- |
| `T` | std::numeric_limits<T>::max() |
| /\* non-specialized \*/ | T() |
| bool | true |
| char | CHAR_MAX |
| signed char | SCHAR_MAX |
| unsigned char | UCHAR_MAX |
| wchar_t | WCHAR_MAX |
| char8_t (since C++20) | UCHAR_MAX |
| char16_t (since C++11) | UINT_LEAST16_MAX |
| char32_t (since C++11) | UINT_LEAST32_MAX |
| short | SHRT_MAX |
| unsigned short | USHRT_MAX |
| int | INT_MAX |
| unsigned int | UINT_MAX |
| long | LONG_MAX |
| unsigned long | ULONG_MAX |
| long long (since C++11) | LLONG_MAX |
| unsigned long long (since C++11) | ULLONG_MAX |
| float | FLT_MAX |
| double | DBL_MAX |
| long double | LDBL_MAX |

### Example

Demonstrates the use of `max()` with some fundamental types and some standard library typedefs (the output is system-specific):

Run this code

```
#include <boost/type_index.hpp>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <limits>
#include <type_traits>
 
template<typename T>
void print_max_value_of()
{
    constexpr T max{std::numeric_limits<T>::max()};
 
    std::cout << std::setw(16) << boost::typeindex::type_id<T>() << ": ";
    if constexpr (std::is_floating_point_v<T>)
        std::cout << std::defaultfloat << max << " = " << std::hexfloat << max << '\n';
    else
    {
        constexpr auto m{static_cast<unsigned long long>(max)};
        std::cout << std::dec << m << " = " << std::hex << m << '\n';
    }
}
 
int main()
{
    std::cout << std::showbase;
 
    print_max_value_of<bool>();
    print_max_value_of<short>();
    print_max_value_of<int>();
    print_max_value_of<std::streamsize>();
    print_max_value_of<std::size_t>();
    print_max_value_of<char>();
    print_max_value_of<char16_t>();
    print_max_value_of<wchar_t>();
    print_max_value_of<float>();
    print_max_value_of<double>();
    print_max_value_of<long double>();
}

```

Possible output:

```

            bool: 1 = 0x1
           short: 32767 = 0x7fff
             int: 2147483647 = 0x7fffffff
            long: 9223372036854775807 = 0x7fffffffffffffff
   unsigned long: 18446744073709551615 = 0xffffffffffffffff
            char: 127 = 0x7f
        char16_t: 65535 = 0xffff
         wchar_t: 2147483647 = 0x7fffffff
           float: 3.40282e+38 = 0x1.fffffep+127
          double: 1.79769e+308 = 0x1.fffffffffffffp+1023
     long double: 1.18973e+4932 = 0xf.fffffffffffffffp+16380

```

### See also

|  |  |
| --- | --- |
| lowest[static] (C++11) | returns the lowest finite value of the given type, i.e. the most negative value for signed types, ​0​ for unsigned types   (public static member function) |
| min[static] | returns the smallest finite value of the given non-floating-point type, or the smallest positive normal value of the given floating-point type   (public static member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/types/numeric_limits/max&oldid=178154>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 December 2024, at 08:09.