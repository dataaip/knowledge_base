# FE_DOWNWARD, FE_TONEAREST, FE_TOWARDZERO, FE_UPWARD

From cppreference.com
< cpp‎ | numeric‎ | fenv
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | midpoint(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | lerp(C++20) | | | | | |
| Saturation arithmetic | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | add_sat(C++26) | | | | | | sub_sat(C++26) | | | | | | saturate_cast(C++26) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | mul_sat(C++26) | | | | | | div_sat(C++26) | | | | | |  | | | | | |
| Generic numeric operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | iota(C++11) | | | | | | ranges::iota(C++23) | | | | | | accumulate | | | | | | inner_product | | | | | | adjacent_difference | | | | | | partial_sum | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | reduce(C++17) | | | | | | transform_reduce(C++17) | | | | | | inclusive_scan(C++17) | | | | | | exclusive_scan(C++17) | | | | | | transform_inclusive_scan(C++17) | | | | | | transform_exclusive_scan(C++17) | | | | | |

Floating-point environment

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Functions | | | | |
| feclearexcept(C++11) | | | | |
| fetestexcept(C++11) | | | | |
| feraiseexcept(C++11) | | | | |
| fegetexceptflagfesetexceptflag(C++11)(C++11) | | | | |
| fegetroundfesetround(C++11)(C++11) | | | | |
| fegetenvfesetenv(C++11)(C++11) | | | | |
| feholdexcept(C++11) | | | | |
| feupdateenv(C++11) | | | | |
| Macro constants | | | | |
| FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | |
| ****FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD****(C++11)(C++11)(C++11)(C++11) | | | | |
| FE_DFL_ENV(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cfenv>` |  |  |
| #define FE_DOWNWARD     /\*implementation defined\*/ |  | (since C++11) |
| #define FE_TONEAREST    /\*implementation defined\*/ |  | (since C++11) |
| #define FE_TOWARDZERO   /\*implementation defined\*/ |  | (since C++11) |
| #define FE_UPWARD       /\*implementation defined\*/ |  | (since C++11) |
|  |  |  |

Each of these macro constants expands to a nonnegative integer constant expression, which can be used with std::fesetround and std::fegetround to indicate one of the supported floating-point rounding modes. The implementation may define additional rounding mode constants in <cfenv>, which should all begin with `FE_` followed by at least one uppercase letter. Each macro is only defined if it is supported.

|  |  |
| --- | --- |
| Constant | Explanation |
| `FE_DOWNWARD` | rounding towards negative infinity |
| `FE_TONEAREST` | rounding towards nearest representable value |
| `FE_TOWARDZERO` | rounding towards zero |
| `FE_UPWARD` | rounding towards positive infinity |

Additional rounding modes may be supported by an implementation.

The current rounding mode affects the following:

- results of floating-point arithmetic operators outside of constant expressions

```
double x = 1;
x / 10; // 0.09999999999999999167332731531132594682276248931884765625
     // or 0.1000000000000000055511151231257827021181583404541015625

```

- results of standard library mathematical functions

```
std::sqrt(2); // 1.41421356237309492343001693370752036571502685546875
           // or 1.4142135623730951454746218587388284504413604736328125

```

- floating-point to floating-point implicit conversion and casts

```
double d = 1 + std::numeric_limits<double>::epsilon();
float f = d; // 1.00000000000000000000000
          // or 1.00000011920928955078125

```

- string conversions such as std::strtod or std::printf

```
std::stof("0.1"); // 0.0999999940395355224609375
               // or 0.100000001490116119384765625

```

- the library rounding functions std::nearbyint, std::rint, std::lrint

```
std::lrint(2.1); // 2 or 3

```

The current rounding mode does NOT affect the following:

- floating-point to integer implicit conversion and casts (always towards zero),
- results of floating-point arithmetic operators in expressions executed at compile time (always to nearest),
- the library functions std::round, std::lround, std::llround, std::ceil, std::floor, std::trunc.

As with any floating-point environment functionality, rounding is only guaranteed if #pragma STDC FENV_ACCESS ON is set.

Compilers that do not support the pragma may offer their own ways to support current rounding mode. For example Clang and GCC have the option `-frounding-math` intended to disable optimizations that would change the meaning of rounding-sensitive code.

### Example

Run this code

```
#include <cfenv>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
// #pragma STDC FENV_ACCESS ON
 
int main()
{
    std::fesetround(FE_DOWNWARD);
    std::cout << "rounding down: \n" << std::setprecision(50)
              << "         pi = " << std::acos(-1.f) << '\n'
              << "stof(\"1.1\") = " << std::stof("1.1") << '\n'
              << "  rint(2.1) = " << std::rint(2.1) << "\n\n";
    std::fesetround(FE_UPWARD);
    std::cout << "rounding up: \n"
              << "         pi = " << std::acos(-1.f) << '\n'
              << "stof(\"1.1\") = " << std::stof("1.1") << '\n'
              << "  rint(2.1) = " << std::rint(2.1) << '\n';
}

```

Output:

```
rounding down:
         pi = 3.141592502593994140625
stof("1.1") = 1.099999904632568359375
  rint(2.1) = 2
 
rounding up:
         pi = 3.1415927410125732421875
stof("1.1") = 1.10000002384185791015625
  rint(2.1) = 3

```

### See also

|  |  |
| --- | --- |
| float_round_style | indicates floating-point rounding modes   (enum) |
| fegetroundfesetround(C++11)(C++11) | gets or sets rounding direction   (function) |
| C documentation for floating-point rounding macros | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv/FE_round&oldid=169746>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 February 2024, at 07:58.