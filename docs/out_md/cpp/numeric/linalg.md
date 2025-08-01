# Basic linear algebra algorithms (since C++26)

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
| ****Basic linear algebra algorithms**** (C++26) | | | | |
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

****Basic linear algebra algorithms****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | BLAS 1 functions | | | | | | setup_givens_rotation") | | | | | | apply_givens_rotation") | | | | | | swap_element") | | | | | | scale") | | | | | | copy") | | | | | | add") | | | | | | dot") | | | | | | dotc") | | | | | | vector_sum_of_squares") | | | | | | vector_two_norm") | | | | | | vector_abs_sum") | | | | | | vector_idx_abs_max") | | | | | | matrix_frob_norm") | | | | | | matrix_one_norm") | | | | | | matrix_inf_norm") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | BLAS 2 functions | | | | | | matrix_rank_1_update") | | | | | | matrix_rank_1_update_c") | | | | | | symmetric_matrix_rank_1_update") | | | | | | hermitian_matrix_rank_1_update") | | | | | | symmetric_matrix_rank_2_update") | | | | | | hermitian_matrix_rank_2_update") | | | | | | matrix_vector_product") | | | | | | symmetric_matrix_vector_product") | | | | | | hermitian_matrix_vector_product") | | | | | | triangular_matrix_vector_product") | | | | | | triangular_matrix_vector_solve") | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | BLAS 3 functions | | | | | | symmetric_matrix_rank_k_update") | | | | | | hermitian_matrix_rank_k_update") | | | | | | symmetric_matrix_rank_2k_update") | | | | | | hermitian_matrix_rank_2k_update") | | | | | | triangular_matrix_matrix_left_solvetriangular_matrix_matrix_right_solve") | | | | | | matrix_product") | | | | | | symmetric_matrix_product") | | | | | | hermitian_matrix_product") | | | | | | triangular_matrix_producttriangular_matrix_left_producttriangular_matrix_right_product") | | | | | |  | | | | | |  | | | | | |  | | | | | | |
| |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | In-place transformations | | | | | | scaled") | | | | | | conjugated") | | | | | | transposed") | | | | | | conjugate_transposed") | | | | | | scaled_accessor") | | | | | | conjugated_accessor") | | | | | | layout_transpose") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Helper items | | | | | | column_majorrow_majorcolumn_major_trow_major_t") | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | upper_trianglelower_triangleupper_triangle_tlower_triangle_t") | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | implicit_unit_diagonalexplicit_diagonalimplicit_unit_diagonal_texplicit_diagonal_t") | | | | | | layout_blas_packed") | | | | | |  | | | | | |  | | | | | |  | | | | | | | |

Basic linear algebra algorithms are based on the dense Basic Linear Algebra Subroutines (BLAS) which corresponds to a subset of the BLAS Standard. These algorithms that access the elements of arrays view those elements through std::mdspan representing vector or matrix.

The BLAS algorithms are categorized into three sets of operations called **levels**, which generally correspond to the degree of the polynomial in the complexities of algorithms:

- BLAS 1: All algorithms with std::mdspan parameters perform a count of std::mdspan array accesses and arithmetic operations that are **linear** in the maximum product of extents of any std::mdspan parameter. These algorithms contain **vector** operations such as dot products, norms, and vector addition.
- BLAS 2: All algorithms have general complexity in **quadratic** time. These algorithms contain **matrix-vector** operations such as matrix-vector multiplications and a solver of the triangular linear system.
- BLAS 3: All algorithms have general complexity in **cubic** time. These algorithms contain **matrix-matrix** operations such as matrix-matrix multiplications and a solver of the multiple triangular linear systems.

|  |  |
| --- | --- |
| In-place transformations | |
| Defined in header `<linalg>` | |
| Defined in namespace `std::linalg` | |
| scaled_accessor")(C++26) | std::mdspan accessor policy whose reference represents the product of a scaling factor that is fixed and its nested std::mdspan accessor's reference   (class template) |
| conjugated_accessor")(C++26) | std::mdspan accessor policy whose reference represents the complex conjugate of its nested std::mdspan accessor's reference   (class template) |
| layout_transpose")(C++26) | std::mdspan layout mapping policy that swaps the rightmost two indices, extents, and strides of any unique layout mapping policy   (class template) |
| scaled")(C++26) | returns a new read-only std::mdspan computed by the elementwise product of the scaling factor and the corresponding elements of the given std::mdspan   (function template) |
| conjugated")(C++26) | returns a new read-only std::mdspan whose elements are the complex conjugates of the corresponding elements of the given std::mdspan   (function template) |
| transposed")(C++26) | returns a new std::mdspan representing the transpose of the input matrix by the given std::mdspan   (function template) |
| conjugate_transposed")(C++26) | returns a conjugate transpose view of an object   (function template) |
| BLAS 1 functions | |
| Defined in header `<linalg>` | |
| Defined in namespace `std::linalg` | |
| setup_givens_rotation")(C++26) | generates plane rotation   (function template) |
| apply_givens_rotation")(C++26) | applies plane rotation to vectors   (function template) |
| swap_elements")(C++26) | swaps all corresponding elements of matrix or vector   (function template) |
| scale")(C++26) | overwrites matrix or vector with the result of computing the elementwise multiplication by a scalar   (function template) |
| copy")(C++26) | copies elements of one matrix or vector into another   (function template) |
| add")(C++26) | adds vectors or matrices elementwise   (function template) |
| dot")(C++26) | returns nonconjugated dot product of two vectors   (function template) |
| dotc")(C++26) | returns conjugated dot product of two vectors   (function template) |
| vector_sum_of_squares")(C++26) | returns scaled sum of squares of the vector elements   (function template) |
| vector_two_norm")(C++26) | returns Euclidean norm of a vector   (function template) |
| vector_abs_sum")(C++26) | returns sum of absolute values of the vector elements   (function template) |
| vector_idx_abs_max")(C++26) | returns index of maximum absolute value of vector elements   (function template) |
| matrix_frob_norm")(C++26) | returns Frobenius norm of a matrix   (function template) |
| matrix_one_norm")(C++26) | returns one norm of a matrix   (function template) |
| matrix_inf_norm")(C++26) | returns infinity norm of a matrix   (function template) |
| BLAS 2 functions | |
| Defined in header `<linalg>` | |
| Defined in namespace `std::linalg` | |
| matrix_vector_product")(C++26) | computes matrix-vector product   (function template) |
| symmetric_matrix_vector_product")(C++26) | computes symmetric matrix-vector product   (function template) |
| hermitian_matrix_vector_product")(C++26) | computes Hermitian matrix-vector product   (function template) |
| triangular_matrix_vector_product")(C++26) | computes triangular matrix-vector product   (function template) |
| triangular_matrix_vector_solve")(C++26) | solves a triangular linear system   (function template) |
| matrix_rank_1_update")(C++26) | performs nonsymmetric nonconjugated rank-1 update of a matrix   (function template) |
| matrix_rank_1_update_c")(C++26) | performs nonsymmetric conjugated rank-1 update of a matrix   (function template) |
| symmetric_matrix_rank_1_update")(C++26) | performs rank-1 update of a symmetric matrix   (function template) |
| hermitian_matrix_rank_1_update")(C++26) | performs rank-1 update of a Hermitian matrix   (function template) |
| hermitian_matrix_rank_2_update")(C++26) | performs rank-2 update of a symmetric matrix   (function template) |
| hermitian_matrix_rank_2_update")(C++26) | performs rank-2 update of a Hermitian matrix   (function template) |
| BLAS 3 functions | |
| Defined in header `<linalg>` | |
| Defined in namespace `std::linalg` | |
| matrix_product")(C++26) | computes matrix-matrix product   (function template) |
| symmetric_matrix_product")(C++26) | computes symmetric matrix-matrix product   (function template) |
| hermitian_matrix_product")(C++26) | computes Hermitian matrix-matrix product   (function template) |
| triangular_matrix_producttriangular_matrix_left_producttriangular_matrix_right_product")(C++26) | computes triangular matrix-matrix product   (function template) |
| symmetric_matrix_rank_k_update")(C++26) | performs rank-k update of a symmetric matrix   (function template) |
| hermitian_matrix_rank_k_update")(C++26) | performs rank-k update of a Hermitian matrix   (function template) |
| symmetric_matrix_rank_2k_update")(C++26) | performs rank-2k update of a symmetric matrix   (function template) |
| hermitian_matrix_rank_2k_update")(C++26) | performs rank-2k update of a Hermitian matrix   (function template) |
| triangular_matrix_matrix_left_solvetriangular_matrix_matrix_right_solve")(C++26) | solves multiple triangular linear systems   (function template) |
| Helper items | |
| Defined in header `<linalg>` | |
| Defined in namespace `std::linalg` | |
| column_majorrow_majorcolumn_major_trow_major_t")(C++26) | describe the order of elements in an std::mdspan with linalg::layout_blas_packed layout (tag) |
| upper_trianglelower_triangleupper_triangle_tlower_triangle_t")(C++26) | specify whether algorithms and other users of a matrix should access the upper triangle or lower triangle of the matrix (tag) |
| implicit_unit_diagonalexplicit_diagonalimplicit_unit_diagonal_texplicit_diagonal_t")(C++26) | specify whether algorithms should access diagonal entries of the matrix (tag) |
| layout_blas_packed")(C++26) | std::mdspan layout mapping policy that represents a square matrix that stores only the entries in one triangle, in a packed contiguous format   (class template) |

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_linalg` | `202311L` | (C++26) | Basic linear algebra algorithms (BLAS) |

### Example

Run this code

```
#include <cassert>
#include <cstddef>
#include <execution>
#include <linalg>
#include <mdspan>
#include <numeric>
#include <vector>
 
int main()
{
    std::vector<double> x_vec(42);
    std::ranges::iota(x_vec, 0.0);
 
    std::mdspan x(x_vec.data(), x_vec.size());
 
    // x[i] *= 2.0, executed sequentially
    std::linalg::scale(2.0, x);
 
    // x[i] *= 3.0, executed in parallel
    std::linalg::scale(std::execution::par_unseq, 3.0, x);
 
    for (std::size_t i{}; i != x.size(); ++i)
        assert(x[i] == 6.0 * static_cast<double>(i));
}

```

### External links

|  |  |
| --- | --- |
| 1. | BLAS homepage |
| 2. | BLAS Technical Forum |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/linalg&oldid=179968>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 January 2025, at 22:43.