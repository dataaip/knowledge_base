# std::feraiseexcept

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
| ****feraiseexcept****(C++11) | | | | |
| fegetexceptflagfesetexceptflag(C++11)(C++11) | | | | |
| fegetroundfesetround(C++11)(C++11) | | | | |
| fegetenvfesetenv(C++11)(C++11) | | | | |
| feholdexcept(C++11) | | | | |
| feupdateenv(C++11) | | | | |
| Macro constants | | | | |
| FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) | | | | |
| FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD(C++11)(C++11)(C++11)(C++11) | | | | |
| FE_DFL_ENV(C++11) | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<cfenv>` |  |  |
| int feraiseexcept( int excepts ); |  | (since C++11) |
|  |  |  |

Attempts to raise all floating point exceptions listed in `excepts` (a bitwise OR of the floating point exception macros). If one of the exceptions is FE_OVERFLOW or FE_UNDERFLOW, this function may additionally raise FE_INEXACT. The order in which the exceptions are raised is unspecified, except that FE_OVERFLOW and FE_UNDERFLOW are always raised before FE_INEXACT.

### Parameters

|  |  |  |
| --- | --- | --- |
| excepts | - | bitmask listing the exception flags to raise |

### Return value

​0​ if all listed exceptions were raised, non-zero value otherwise.

### Example

Run this code

```
#include <cfenv>
#include <iostream>
 
// #pragma STDC FENV_ACCESS ON
 
int main()
{
    std::feclearexcept(FE_ALL_EXCEPT);
    const int r = std::feraiseexcept(FE_UNDERFLOW | FE_DIVBYZERO);
    std::cout << "Raising divbyzero and underflow simultaneously "
              << (r ? "fails" : "succeeds") << " and results in\n";
 
    const int e = std::fetestexcept(FE_ALL_EXCEPT);
    if (e & FE_DIVBYZERO)
        std::cout << "division by zero\n";
    if (e & FE_INEXACT)
        std::cout << "inexact\n";
    if (e & FE_INVALID)
        std::cout << "invalid\n";
    if (e & FE_UNDERFLOW)
        std::cout << "underflow\n";
    if (e & FE_OVERFLOW)
        std::cout << "overflow\n";
}

```

Output:

```
Raising divbyzero and underflow simultaneously succeeds and results in
division by zero
underflow

```

### See also

|  |  |
| --- | --- |
| feclearexcept(C++11) | clears the specified floating-point status flags   (function) |
| fetestexcept(C++11) | determines which of the specified floating-point status flags are set   (function) |
| C documentation for feraiseexcept | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv/feraiseexcept&oldid=150989>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 April 2023, at 11:42.