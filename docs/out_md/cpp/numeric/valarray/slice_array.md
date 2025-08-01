# std::slice_array

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | valarray::valarray | | | | | | valarray::~valarray | | | | | | valarray::operator= | | | | | | [valarray::operator[]](operator_at.html "cpp/numeric/valarray/operator at") | | | | | | valarray::swap | | | | | | valarray::size | | | | | | valarray::resize | | | | | | valarray::sum | | | | | | valarray::min | | | | | | valarray::max | | | | | | valarray::shift | | | | | | valarray::cshift | | | | | | valarray::apply | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | valarray::operator+valarray::operator-valarray::operator~valarray::operator! | | | | | | valarray::operator+=valarray::operator-=valarray::operator\*=valarray::operator/=valarray::operator%=valarray::operator&=valarray::operator|=valarray::operator^=valarray::operator<<=valarray::operator>>= | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap(std::valarray)(C++11) | | | | | | begin(std::valarray)(C++11) | | | | | | end(std::valarray)(C++11) | | | | | | abs | | | | | | exp | | | | | | log | | | | | | log10 | | | | | | pow | | | | | | sqrt | | | | | | sin | | | | | | cos | | | | | | tan | | | | | | asin | | | | | | acos | | | | | | atan | | | | | | atan2 | | | | | | sinh | | | | | | cosh | | | | | | tanh | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator\*operator/operator%operator+operator-operator^operator&operator|operator<<operator>>operator&&operator|| | | | | | | operator==operator!=operator<operator>operator<=operator>= | | | | | |  | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****slice_array**** | | | | | | gslice_array | | | | | | indirect_array | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | slice | | | | | | gslice | | | | | | mask_array | | | | | |
| Deduction guides (C++17) | | | | |

****std::slice_array****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| slice_array::slice_array | | | | |
| slice_array::~slice_array | | | | |
| slice_array::operator= | | | | |
| slice_array::operator+=slice_array::operator-=slice_array::operator\*=slice_array::operator/=slice_array::operator%=slice_array::operator&=slice_array::operator|=slice_array::operator^=slice_array::operator<<=slice_array::operator>>= | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<valarray>` |  |  |
| template< class T > class slice_array; |  |  |
|  |  |  |

`std::slice_array` is a helper template used by the valarray subscript operator with std::slice argument. It has reference semantics to a subset of the array specified by the std::slice object.

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | `T` |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `slice_array`   (public member function) |
| (destructor) | destroys a `slice_array`   (public member function) |
| operator= | assigns contents   (public member function) |
| operator+=operator-=operator\*=operator/=operator%=operator&=operator|=operator^=operator<<=operator>>= | performs arithmetic operation on the array referred by slice.   (public member function) |

### Example

Run this code

```
#include <iostream>
#include <valarray>
 
class Matrix
{
    int dim;
    std::valarray<int> data;
public:
    explicit Matrix(int dim, int init = 0)
        : dim{dim}, data(init, dim*dim) {}
    void clear(int value = 0) { data = value; }
    void identity() { clear(); diagonal() = 1; }
    int& operator()(int x, int y) { return data[dim * y + x]; }
 
    std::slice_array<int> diagonal()
    {
        return data[std::slice(0, dim, dim + 1)];
    }
    std::slice_array<int> secondary_diagonal()
    {
        return data[std::slice(dim - 1, dim, dim - 1)];
    }
    std::slice_array<int> row(std::size_t row)
    {
        return data[std::slice(dim * row, dim, 1)];
    }
    std::slice_array<int> column(std::size_t col)
    {
        return data[std::slice(col, dim, dim)];
    }
    template<unsigned, unsigned> friend class MatrixStack;
};
 
template<unsigned dim = 3, unsigned max = 8> class MatrixStack
{
    std::valarray<int> stack;
    unsigned count = 0;
public:
    MatrixStack() : stack(dim * dim * max) {}
    void print_all() const
    { 
        std::valarray<int> row(dim*count);
        for (unsigned r = 0; r != dim; ++r) // screen row
        {
            row = stack[std::gslice(r * dim, {count, dim}, {dim * dim, 1})];
            for (unsigned i = 0; i != row.size(); ++i)
                std::cout << row[i] << ((i + 1) % dim ? " " : " │ ");
            std::cout << '\n';
        }
    }
    void push_back(Matrix const& m)
    {
        if (count < max)
        {
            stack[std::slice(count * dim * dim, dim * dim, 1)]
                = m.data[std::slice(0, dim * dim, 1)];
            ++count;
        }
    }
};
 
int main()
{
    constexpr int dim = 3;
    Matrix m{dim};
    MatrixStack<dim,12> stack;
 
    m.identity();
    stack.push_back(m);
 
    m.clear(1);
    m.secondary_diagonal() = 3;
    stack.push_back(m);
 
    for (int i = 0; i != dim; ++i)
    {
        m.clear();
        m.row(i) = i + 1;
        stack.push_back(m);
    }
 
    for (int i = 0; i != dim; ++i)
    {
        m.clear();
        m.column(i) = i + 1;
        stack.push_back(m);
    }
 
    m.clear();
    m.row(1) = std::valarray<int>{4, 5, 6};
    stack.push_back(m);
 
    m.clear();
    m.column(1) = std::valarray<int>{7, 8, 9};
    stack.push_back(m);
 
    stack.print_all();
}

```

Output:

```
1 0 0 │ 1 1 3 │ 1 1 1 │ 0 0 0 │ 0 0 0 │ 1 0 0 │ 0 2 0 │ 0 0 3 │ 0 0 0 │ 0 7 0 │
0 1 0 │ 1 3 1 │ 0 0 0 │ 2 2 2 │ 0 0 0 │ 1 0 0 │ 0 2 0 │ 0 0 3 │ 4 5 6 │ 0 8 0 │
0 0 1 │ 3 1 1 │ 0 0 0 │ 0 0 0 │ 3 3 3 │ 1 0 0 │ 0 2 0 │ 0 0 3 │ 0 0 0 │ 0 9 0 │

```

### See also

|  |  |
| --- | --- |
| gslice_array | proxy to a subset of a valarray after applying a gslice   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray/slice_array&oldid=160829>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 17 October 2023, at 10:02.