# std::valarray<T>::operator=

From cppreference.com
< cpp‎ | numeric‎ | valarray
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

std::valarray

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | valarray::valarray | | | | | | valarray::~valarray | | | | | | ****valarray::operator=**** | | | | | | [valarray::operator[]](operator_at.html "cpp/numeric/valarray/operator at") | | | | | | valarray::swap | | | | | | valarray::size | | | | | | valarray::resize | | | | | | valarray::sum | | | | | | valarray::min | | | | | | valarray::max | | | | | | valarray::shift | | | | | | valarray::cshift | | | | | | valarray::apply | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | valarray::operator+valarray::operator-valarray::operator~valarray::operator! | | | | | | valarray::operator+=valarray::operator-=valarray::operator\*=valarray::operator/=valarray::operator%=valarray::operator&=valarray::operator|=valarray::operator^=valarray::operator<<=valarray::operator>>= | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::valarray)(C++11) | | | | | | begin(std::valarray)(C++11) | | | | | | end(std::valarray)(C++11) | | | | | | abs | | | | | | exp | | | | | | log | | | | | | log10 | | | | | | pow | | | | | | sqrt | | | | | | sin | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | sinh | | | | | | cosh | | | | | | tanh | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator\*operator/operator%operator+operator-operator^operator&operator|operator<<operator>>operator&&operator|| | | | | | | operator==operator!=operator<operator>operator<=operator>= | | | | | |  | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | slice_array | | | | | | gslice_array | | | | | | indirect_array | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | slice | | | | | | gslice | | | | | | mask_array | | | | | |
| Deduction guides (C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| valarray<T>& operator=( const valarray<T>& other ); | (1) |  |
| valarray<T>& operator=( valarray<T>&& other ) noexcept; | (2) | (since C++11) |
| valarray<T>& operator=( const T& val ); | (3) |  |
| valarray<T>& operator=( const std::slice_array<T>& other ); | (4) |  |
| valarray<T>& operator=( const std::gslice_array<T>& other ); | (5) |  |
| valarray<T>& operator=( const std::mask_array<T>& other ); | (6) |  |
| valarray<T>& operator=( const std::indirect_array<T>& other ); | (7) |  |
| valarray<T>& operator=( std::initializer_list<T> il ); | (8) | (since C++11) |
|  |  |  |

Replaces the contents of the numeric array.

1) Copy assignment operator. If size() != other.size(), first resizes \*this as if by resize(other.size()). Each element of \*this is assigned the value of the corresponding element of other.2) Move assignment operator. Replaces the contents of \*this with those of other. The value of other is unspecified after this operation. The complexity of this operation may be linear if T has non-trivial destructors, but is usually constant otherwise.3) Replaces each value in \*this with a copy of val.4-7) Replaces the contents of \*this with the result of a generalized subscripting operation. The behavior is undefined if `size()` does not equal the length of other or if any value on the left depends on the value on the right (e.g. v = v[v > 2]).8) Assigns the contents of initializer list il. Equivalent to \*this = valarray(il).

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another numeric array (or a mask) to assign |
| val | - | the value to initialize each element with |
| il | - | initializer list to assign |

### Return value

\*this

### Exceptions

1,3-8) May throw implementation-defined exceptions.

### Example

Run this code

```
#include <iomanip>
#include <iostream>
#include <valarray>
 
void print(const char* rem, const std::valarray<int>& v)
{
    std::cout << std::left << std::setw(36) << rem << std::right;
    for (int n : v)
        std::cout << std::setw(3) << n;
    std::cout << '\n';
}
 
int main()
{
    std::valarray<int> v1(3);
    v1 = -1; // (3) from a scalar 
    print("assigned from scalar: ", v1);
 
    v1 = {1, 2, 3, 4, 5, 6}; // (8): from initializer list of different size
    print("assigned from initializer_list:", v1);
 
    std::valarray<int> v2(3);
    v2 = v1[std::slice(0, 3, 2)]; // (4): from slice array
    print("every 2nd element starting at pos 0:", v2);
 
    v2 = v1[v1 % 2 == 0]; // (6): from mask array
    print("values that are even:", v2);
 
    std::valarray<std::size_t> idx = {0, 1, 2, 4}; // index array
    v2.resize(4); // sizes must match when assigning from gen subscript
    v2 = v1[idx]; // (7): from indirect array
    print("values at positions 0, 1, 2, 4:", v2);
}

```

Output:

```
assigned from scalar:                -1 -1 -1
assigned from initializer_list:       1  2  3  4  5  6
every 2nd element starting at pos 0:  1  3  5
values that are even:                 2  4  6
values at positions 0, 1, 2, 4:       1  2  3  5

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 624 | C++98 | the behaviors of overloads (4-7) were unclear if the length of other is not `size()` | the behaviors are undefined in this case |
| LWG 630 | C++98 | the behavior of the copy assignment operator was undefined if size() != other.size() | resizes \*this first in this case |
| LWG 2071 | C++11 | the move assignment operator resized \*this if size() != other.size() | not required to resize in this case |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray/operator%3D&oldid=149187>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 16 March 2023, at 08:49.