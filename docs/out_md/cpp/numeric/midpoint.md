# std::midpoint

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

Numerics library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Common mathematical functions | | | | |
| Mathematical special functions (C++17) | | | | |
| Mathematical constants (C++20) | | | | |
| Basic linear algebra algorithms (C++26) | | | | |
| Data-parallel types (SIMD) (C++26) | | | | |
| Floating-point environment (C++11) | | | | |
| Complex numbers | | | | |
| Numeric array (`valarray`) | | | | |
| Pseudo-random number generation | | | | |
| Bit manipulation (C++20) | | | | |
| Factor operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | gcd(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lcm(C++17) | | | | | |
| Interpolations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****midpoint****(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lerp(C++20) | | | | | |
| Saturation arithmetic | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | add_sat(C++26) | | | | | | sub_sat(C++26) | | | | | | saturate_cast(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mul_sat(C++26) | | | | | | div_sat(C++26) | | | | | |  | | | | | |
| Generic numeric operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | ranges::iota(C++23) | | | | | | accumulate | | | | | | inner_product | | | | | | adjacent_difference | | | | | | partial_sum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<numeric>` |  |  |
| template< class T >  constexpr T midpoint( T a, T b ) noexcept; | (1) | (since C++20) |
| template< class T >  constexpr T\* midpoint( T\* a, T\* b ); | (2) | (since C++20) |
|  |  |  |

Computes the midpoint of the integers, floating-points, or pointers a and b.

1) This overload participates in overload resolution only if `T` is an arithmetic type other than bool.2) This overload participates in overload resolution only if `T` is an object type. Use of this overload is ill-formed if `T` is an incomplete type.

### Parameters

|  |  |  |
| --- | --- | --- |
| a, b | - | integers, floating-points, or pointer values |

### Return value

1) Half the sum of a and b. No overflow occurs. If a and b have integer type and the sum is odd, the result is rounded towards a. If a and b have floating-point type, at most one inexact operation occurs.2) If a and b point to, respectively, x[i] and x[j] of the same array object `x` (for the purpose of pointer arithmetic), returns a pointer to x[i + (j - i) / 2] (or, equivalently x[std::midpoint(i, j)]) where the division rounds towards zero. If a and b do not point to elements of the same array object, the behavior is undefined.

### Exceptions

Throws no exceptions.

### Notes

Overload (2) can be simply implemented as return a + (b - a) / 2; on common platforms. However, such implementation is not guaranteed to be portable, because there may be some platforms where creating an array with number of elements greater than PTRDIFF_MAX is possible, and b - a may result in undefined behavior even if both b and a point to elements in the same array.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_interpolate` | `201902L` | (C++20) | std::lerp, `std::midpoint` |

### Example

Run this code

```
#include <cstdint>
#include <iostream>
#include <limits>
#include <numeric>
 
int main()
{
    std::uint32_t a = std::numeric_limits<std::uint32_t>::max();
    std::uint32_t b = std::numeric_limits<std::uint32_t>::max() - 2;
 
    std::cout << "a: " << a << '\n'
              << "b: " << b << '\n'
              << "Incorrect (overflow and wrapping): " << (a + b) / 2 << '\n'
              << "Correct: " << std::midpoint(a, b) << "\n\n";
 
    auto on_pointers = [](int i, int j)
    {
        char const* text = "0123456789";
        char const* p = text + i;
        char const* q = text + j;
        std::cout << "std::midpoint('" << *p << "', '" << *q << "'): '"
                  << *std::midpoint(p, q) << "'\n";
    };
 
    on_pointers(2, 4);
    on_pointers(2, 5);
    on_pointers(5, 2);
    on_pointers(2, 6);
}

```

Output:

```
a: 4294967295
b: 4294967293
Incorrect (overflow and wrapping): 2147483646
Correct: 4294967294
 
std::midpoint('2', '4'): '3'
std::midpoint('2', '5'): '3'
std::midpoint('5', '2'): '4'
std::midpoint('2', '6'): '4'

```

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 27.10.16 Midpoint [numeric.ops.midpoint]

- C++20 standard (ISO/IEC 14882:2020):

:   - 25.10.15 Midpoint [numeric.ops.midpoint]

### See also

|  |  |
| --- | --- |
| lerp(C++20) | linear interpolation function   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&oldid=151507>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 May 2023, at 09:52.