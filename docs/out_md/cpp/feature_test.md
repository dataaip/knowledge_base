# Feature testing (since C++20)

From cppreference.com
< cpp
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Freestanding and hosted | | | | |
| Language | | | | |
| Standard library | | | | |
| Standard library headers | | | | |
| Named requirements | | | | |
| ****Feature test macros**** (C++20) | | | | |
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

 ****Feature testing****

The standard defines a set of preprocessor macros corresponding to C++ language and library features introduced in C++11 or later. They are intended as a simple and portable way to detect the presence of said features.

### Attributes

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `__has_cpp_attribute(` attribute-token `)` |  |  |
|  | | | | | | | | | |

Checks for the support of an attribute named by attribute-token (after macro expansion).

For each standard attribute, it is implementation-defined whether `__has_cpp_attribute` expands to the value given in the table below (which is the year and month in which the attribute was added to the working draft) or ​0​. It will expand to given value in the table if and only if the standard attribute causes the implementation to behave as recommended (issuing diagnostic messages, affecting class layout, etc.).

The presence of vendor-specific attributes is determined by a non-zero value.

`__has_cpp_attribute` can be expanded in the expression of #if and #elif.
It is treated as a defined macro by #ifdef, #ifndef, #elifdef, #elifndef(since C++23) and defined but cannot be used anywhere else.

| attribute-token | Attribute | Value | Std | Paper(s) |
| --- | --- | --- | --- | --- |
| `assume` | `[[assume]]` | `202207L` | (C++23) | P1774R8 |
| `carries_dependency` | `[[carries_dependency]]` | `200809L` | (C++11) | N2556 N2643 |
| `deprecated` | `[[deprecated]]` | `201309L` | (C++14) | N3760 |
| `fallthrough` | `[[fallthrough]]` | `201603L` | (C++17) | P0188R1 |
| `indeterminate` | `[[indeterminate]]` | `202403L` | (C++26) | P2795R5 |
| `likely` | `[[likely]]` | `201803L` | (C++20) | P0479R5 |
| `maybe_unused` | `[[maybe_unused]]` | `201603L` | (C++17) | P0212R1 |
| `no_unique_address` | `[[no_unique_address]]` | `201803L` | (C++20) | P0840R2 |
| `nodiscard` | `[[nodiscard]]` | `201603L` | (C++17) | P0189R1 |
| `[[nodiscard]]` with reason | `201907L` | (C++20) | P1301R4 |
| `noreturn` | `[[noreturn]]` | `200809L` | (C++11) | N2761 |
| `unlikely` | `[[unlikely]]` | `201803L` | (C++20) | P0479R5 |
| Total number of attributes: 11 | | | | |

### Language features

The following macros can be used to detect whether a language feature is implemented by the current implementation. They are predefined in every translation unit.

Each macro expands to an integer literal corresponding to the year and month when the corresponding feature has been included in the working draft. When a feature changes significantly, the macro will be updated accordingly.

| Macro name | Feature | Value | Std | Paper(s) |
| --- | --- | --- | --- | --- |
| `__cpp_aggregate_bases` | Aggregate classes with base classes | `201603L` | (C++17) | P0017R1 |
| `__cpp_aggregate_nsdmi` | Aggregate classes with default member initializers | `201304L` | (C++14) | N3653 |
| `__cpp_aggregate_paren_init` | Aggregate initialization in the form of direct initialization | `201902L` | (C++20) | P0960R3 |
| `__cpp_alias_templates` | Alias templates | `200704L` | (C++11) | N2258 |
| `__cpp_aligned_new` | Dynamic memory allocation for over-aligned data | `201606L` | (C++17) | P0035R4 |
| `__cpp_attributes` | Attributes | `200809L` | (C++11) | N2761 |
| `__cpp_auto_cast` | auto(x) and auto{x} | `202110L` | (C++23) | P0849R8 |
| `__cpp_binary_literals` | Binary literals | `201304L` | (C++14) | N3472 |
| `__cpp_capture_star_this` | [Lambda capture of \*this by value as [=,\*this]](language/lambda.html#Lambda_capture "cpp/language/lambda") | `201603L` | (C++17) | P0018R3 |
| `__cpp_char8_t` | char8_t | `201811L` | (C++20) | P0482R6 |
| char8_t compatibility and portability fix (allow initialization of (unsigned) char arrays from UTF-8 string literals) | `202207L` | (C++23) (DR20) | P2513R4 |
| `__cpp_concepts` | Concepts | `201907L` | (C++20) | P0734R0 P1084R2 P1452R2 |
| Conditional trivial special member functions | `202002L` | P0848R3 P2493R0 |
| `__cpp_conditional_explicit` | `explicit(bool)` | `201806L` | (C++20) | P0892R2 |
| `__cpp_consteval` | Immediate functions | `201811L` | (C++20) | P1073R3 |
| Making consteval propagate up | `202211L` | (C++23) (DR20) | P2564R3 |
| `__cpp_constexpr` | constexpr | `200704L` | (C++11) | N2235 |
| Relaxed constexpr, non-`const` `constexpr` methods | `201304L` | (C++14) | N3652 |
| Constexpr lambda | `201603L` | (C++17) | P0170R1 |
| Virtual function calls in constant expressions; `try` blocks in constexpr functions, dynamic_cast and polymorphic typeid in constant expressions; trivial default initialization and asm-declaration in constexpr functions | `201907L` | (C++20) | P1064R0 P1002R1 P1327R1 P1331R2 P1668R1 |
| Changing the active member of a union in constant evaluation | `202002L` | P1330R0 P2493R0 |
| Non-literal variables, labels, and goto statements in constexpr functions | `202110L` | (C++23) | P2242R3 |
| Relaxing some restrictions on constexpr functions and function templates | `202207L` | P2448R2 |
| Permitting static constexpr variables in constexpr functions | `202211L` | P2647R1 |
| Constexpr cast from void\*: towards constexpr type-erasure | `202306L` | (C++26) | P2738R1 |
| constexpr placement new | `202406L` | P2747R2 |
| `__cpp_constexpr_dynamic_alloc` | Operations for dynamic storage duration in constexpr functions | `201907L` | (C++20) | P0784R7 |
| `__cpp_constexpr_exceptions` | constexpr exceptions | `202411L` | (C++26) | P3068R6 |
| `__cpp_constexpr_in_decltype` | Generation of function and variable definitions when needed for constant evaluation | `201711L` | (C++20) (DR11) | P0859R0 |
| `__cpp_constinit` | constinit | `201907L` | (C++20) | P1143R2 |
| `__cpp_decltype` | decltype | `200707L` | (C++11) | N2343 |
| `__cpp_decltype_auto` | Return type deduction for normal functions | `201304L` | (C++14) | N3638 |
| `__cpp_deduction_guides` | Template argument deduction for class templates (CTAD) | `201703L` | (C++17) | P0091R3 P0512R0 P0620R0 |
| CTAD for aggregates and aliases | `201907L` | (C++20) | P1814R0 P1816R0 |
| `__cpp_delegating_constructors` | Delegating constructors | `200604L` | (C++11) | N1986 |
| `__cpp_deleted_function` | Deleted function definitions with messages (= delete("should have a reason");) | `202403L` | (C++26) | P2573R2 |
| `__cpp_designated_initializers` | Designated initializers | `201707L` | (C++20) | P0329R4 |
| `__cpp_enumerator_attributes` | Attributes for enumerators | `201411L` | (C++17) | N4266 |
| `__cpp_explicit_this_parameter` | Explicit object parameter | `202110L` | (C++23) | P0847R7 |
| `__cpp_fold_expressions` | Fold expressions | `201603L` | (C++17) | N4295 P0036R0 |
| Ordering of constraints involving fold expressions | `202406L` | (C++26) | P2963R3 |
| `__cpp_generic_lambdas` | Generic lambda expressions | `201304L` | (C++14) | N3649 |
| Explicit template parameter list for generic lambdas | `201707L` | (C++20) | P0428R2 |
| `__cpp_guaranteed_copy_elision` | Guaranteed copy elision through simplified value categories | `201606L` | (C++17) | P0135R1 |
| `__cpp_hex_float` | Hexadecimal floating literals | `201603L` | (C++17) | P0245R1 |
| `__cpp_if_consteval` | `if consteval` | `202106L` | (C++23) | P1938R3 |
| `__cpp_if_constexpr` | `if constexpr` | `201606L` | (C++17) | P0292R2 |
| `__cpp_impl_coroutine` | Coroutines (compiler support) | `201902L` | (C++20) | P0912R5 LWG3393 |
| `__cpp_impl_destroying_delete` | Destroying `operator delete` (compiler support) | `201806L` | (C++20) | P0722R3 |
| `__cpp_impl_three_way_comparison` | Three-way comparison (compiler support) | `201907L` | (C++20) | P0515R3 P0768R1 P1185R2 P1630R1 |
| `__cpp_implicit_move` | Simpler implicit move | `202207L` | (C++23) | P2266R3 |
| `__cpp_inheriting_constructors` | Inheriting constructors | `200802L` | (C++11) | N2540 |
| Rewording inheriting constructors: New specification for inheriting constructors (DR1941 et al) | `201511L` | (C++17) (DR11) | P0136R1 |
| `__cpp_init_captures` | Lambda init-capture | `201304L` | (C++14) | N3648 |
| Allow pack expansion in lambda init-capture | `201803L` | (C++20) | P0780R2 |
| `__cpp_initializer_lists` | List-initialization and std::initializer_list | `200806L` | (C++11) | N2672 |
| `__cpp_inline_variables` | Inline variables | `201606L` | (C++17) | P0386R2 |
| `__cpp_lambdas` | Lambda expressions | `200907L` | (C++11) | N2927 |
| `__cpp_modules` | Modules | `201907L` | (C++20) | P1103R3 P1811R0 |
| `__cpp_multidimensional_subscript` | Multidimensional subscript operator | `202110L` | (C++23) | P2128R6 |
| Static [operator[]](language/operators.html "cpp/language/operators") | `202211L` | P2589R1 |
| `__cpp_named_character_escapes` | Named universal character escapes | `202207L` | (C++23) | P2071R2 |
| `__cpp_namespace_attributes` | Attributes for namespaces | `201411L` | (C++17) | N4266 |
| `__cpp_noexcept_function_type` | Make exception specifications be part of the type system | `201510L` | (C++17) | P0012R1 |
| `__cpp_nontype_template_args` | Allow constant evaluation for all non-type template arguments | `201411L` | (C++17) | N4268 |
| Class types and floating-point types in non-type template parameters | `201911L` | (C++20) | P1907R1 |
| `__cpp_nontype_template_parameter_auto` | Declaring non-type template parameter with auto | `201606L` | (C++17) | P0127R2 |
| `__cpp_nsdmi` | Non-static data member initializers | `200809L` | (C++11) | N2756 |
| `__cpp_pack_indexing` | Pack indexing | `202311L` | (C++26) | P2662R3 |
| `__cpp_placeholder_variables` | A nice placeholder with no name | `202306L` | (C++26) | P2169R4 |
| `__cpp_range_based_for` | Range-based `for` loop | `200907L` | (C++11) | N2930 |
| Range-based `for` loop with different `begin`/`end` types | `201603L` | (C++17) | P0184R0 |
| Lifetime extension in range-based for | `202211L` | (C++23) | P2644R1 P2718R0 CWG2659 |
| `__cpp_raw_strings` | Raw string literals | `200710L` | (C++11) | N2442 |
| `__cpp_ref_qualifiers` | ref-qualifiers | `200710L` | (C++11) | N2439 |
| `__cpp_return_type_deduction` | Return type deduction for normal functions | `201304L` | (C++14) | N3638 |
| `__cpp_rvalue_references` | Rvalue reference | `200610L` | (C++11) | N2118 |
| `__cpp_size_t_suffix` | Literal suffixes for `std::size_t` and its signed version | `202011L` | (C++23) | P0330R8 |
| `__cpp_sized_deallocation` | Sized deallocation | `201309L` | (C++14) | N3778 |
| `__cpp_static_assert` | static_assert | `200410L` | (C++11) | N1720 |
| Single-argument `static_assert` | `201411L` | (C++17) | N3928 |
| User-generated `static_assert` messages | `202306L` | (C++26) | P2741R3 |
| `__cpp_static_call_operator` | Static operator() | `202207L` | (C++23) | P1169R4 |
| `__cpp_structured_bindings` | Structured bindings | `201606L` | (C++17) | P0217R3 |
| Attributes for structured binding | `202403L` | (C++26) | P0609R3 |
| Structured bindings declaration as a condition | `202406L` | P0963R3 |
| Structured bindings can introduce a pack | `202411L` | P1061R10 |
| `__cpp_template_template_args` | Matching of template template arguments | `201611L` | (C++17) | P0522R0 |
| `__cpp_threadsafe_static_init` | Dynamic initialization and destruction with concurrency | `200806L` | (C++11) | N2660 |
| `__cpp_unicode_characters` | New character types (char16_t and char32_t) | `200704L` | (C++11) | N2249 |
| `__cpp_unicode_literals` | Unicode string literals | `200710L` | (C++11) | N2442 |
| `__cpp_user_defined_literals` | User-defined literals | `200809L` | (C++11) | N2765 |
| `__cpp_using_enum` | using enum | `201907L` | (C++20) | P1099R5 |
| `__cpp_variable_templates` | Variable templates | `201304L` | (C++14) | N3651 |
| `__cpp_variadic_friend` | Variadic friend declarations | `202403L` | (C++26) | P2893R3 |
| `__cpp_variadic_templates` | Variadic templates | `200704L` | (C++11) | N2242 |
| `__cpp_variadic_using` | Pack expansions in `using`-declarations | `201611L` | (C++17) | P0195R2 |
| Total number of macros: 71 | | | | |

### Library features

The following macros can be used to detect whether a standard library feature is implemented by the current implementation. Unlike the language feature test macros, they are not predefined. Instead, they are provided by the header <version>.

For each library feature test macro, it is also provided by the headers that provide the relevant standard library components. See library feature test macros for a complete list of headers providing these macros.

Each macro expands to an integer literal corresponding to the year and month when the corresponding feature has been included in the working draft. When a feature changes significantly, the macro will be updated accordingly.

| Macro name | Feature | Value | Std | Paper(s) |
| --- | --- | --- | --- | --- |
| `__cpp_lib_adaptor_iterator_pair_constructor` | Iterator pair constructors for std::stack and std::queue | `202106L` | (C++23) | P1425R4 |
| `__cpp_lib_addressof_constexpr` | Constexpr std::addressof | `201603L` | (C++17) | LWG2296 |
| `__cpp_lib_algorithm_default_value_type` | Enabling list-initialization for algorithms | `202403L` | (C++26) | P2248R8 P3217R0 |
| `__cpp_lib_algorithm_iterator_requirements` | Ranges iterators as inputs to non-Ranges algorithms | `202207L` | (C++23) | P2408R5 |
| `__cpp_lib_aligned_accessor` | std::aligned_accessor: an std::mdspan accessor expressing pointer over-alignment | `202411L` | (C++26) | P2897R7 |
| `__cpp_lib_allocate_at_least` | Size-feedback in the allocator interface, e.g.: std::allocator::allocate_at_least, std::allocator_traits::allocate_at_least | `202302L` | (C++23) | P0401R6 P2652R2 LWG3887 |
| `__cpp_lib_allocator_traits_is_always_equal` | std::allocator_traits::is_always_equal, noexcept cleanups | `201411L` | (C++17) | N4258 |
| `__cpp_lib_any` | std::any | `201606L` | (C++17) | P0220R1 P0032R3 |
| `__cpp_lib_apply` | std::apply | `201603L` | (C++17) | P0220R1 |
| `__cpp_lib_array_constexpr` | Constexpr for std::reverse_iterator, std::move_iterator, std::array and range access | `201603L` | (C++17) | P0031R0 |
| ConstexprIterator; constexpr comparison for std::array; misc constexpr bits (std::array::fill et al.) | `201811L` | (C++20) | P0858R0 LWG3257 P1023R0 P1032R1 |
| `__cpp_lib_as_const` | std::as_const | `201510L` | (C++17) | P0007R1 |
| `__cpp_lib_associative_heterogeneous_erasure` | Heterogeneous erasure in associative containers and unordered associative containers | `202110L` | (C++23) | P2077R3 |
| `__cpp_lib_associative_heterogeneous_insertion` | Heterogeneous overloads for the remaining member functions in ordered and unordered associative containers | `202306L` | (C++26) | P2363R5 |
| `__cpp_lib_assume_aligned` | std::assume_aligned | `201811L` | (C++20) | P1007R3 |
| `__cpp_lib_atomic_flag_test` | std::atomic_flag::test | `201907L` | (C++20) | P1135R6 |
| `__cpp_lib_atomic_float` | Floating-point atomic | `201711L` | (C++20) | P0020R6 |
| `__cpp_lib_atomic_is_always_lock_free` | Constexpr std::atomic<T>::is_always_lock_free | `201603L` | (C++17) | P0152R1 |
| `__cpp_lib_atomic_lock_free_type_aliases` | Atomic lockfree integral types (std::atomic_signed_lock_free, std::atomic_unsigned_lock_free) | `201907L` | (C++20) | P1135R6 |
| `__cpp_lib_atomic_min_max` | Atomic minimum/maximum (std::atomic::fetch_min, std::atomic::fetch_max, etc) | `202403L` | (C++26) | P0493R5 |
| `__cpp_lib_atomic_ref` | std::atomic_ref | `201806L` | (C++20) | P0019R8 |
| std::atomic_ref::address() | `202411L` | (C++26) | P2835R7 |
| `__cpp_lib_atomic_shared_ptr` | std::atomic<std::shared_ptr> | `201711L` | (C++20) | P0718R2 |
| `__cpp_lib_atomic_value_initialization` | Fixing atomic initialization (value-initialize std::atomic by default) | `201911L` | (C++20) | P0883R2 |
| `__cpp_lib_atomic_wait` | Efficient std::atomic waiting | `201907L` | (C++20) | P1135R6 |
| `__cpp_lib_barrier` | std::barrier | `201907L` | (C++20) | P1135R6 |
| std::barrier's phase completion guarantees | `202302L` | (C++23) | P2588R3 |
| `__cpp_lib_bind_back` | std::bind_back | `202202L` | (C++23) | P2387R3 |
| Allow passing callable objects as non-type template arguments to std::bind_back | `202306L` | (C++26) | P2714R1 |
| `__cpp_lib_bind_front` | std::bind_front | `201907L` | (C++20) | P0356R5 P1651R0 |
| Allow passing callable objects as non-type template arguments to std::bind_front | `202306L` | (C++26) | P2714R1 |
| `__cpp_lib_bit_cast` | std::bit_cast | `201806L` | (C++20) | P0476R2 |
| `__cpp_lib_bitops` | Bit operations | `201907L` | (C++20) | P0553R4 |
| `__cpp_lib_bitset` | Interfacing std::bitset with std::string_view | `202306L` | (C++26) | P2697R1 |
| `__cpp_lib_bool_constant` | std::bool_constant | `201505L` | (C++17) | N4389 |
| `__cpp_lib_bounded_array_traits` | std::is_bounded_array, std::is_unbounded_array | `201902L` | (C++20) | P1357R1 |
| `__cpp_lib_boyer_moore_searcher` | Searchers | `201603L` | (C++17) | P0220R1 |
| `__cpp_lib_byte` | std::byte | `201603L` | (C++17) | P0298R3 |
| `__cpp_lib_byteswap` | std::byteswap | `202110L` | (C++23) | P1272R4 |
| `__cpp_lib_char8_t` | Library support for `char8_t` | `201907L` | (C++20) | P0482R6 P1423R3 |
| `__cpp_lib_chrono` | Rounding functions for std::chrono::duration and std::chrono::time_point | `201510L` | (C++17) | P0092R1 |
| Constexpr for all the member functions of std::chrono::duration and std::chrono::time_point | `201611L` | P0505R0 |
| Calendars and Time zones | `201907L` | (C++20) | P0355R7 P1466R3 |
| Hashing support for std::chrono value classes | `202306L` | (C++26) | P2592R3 |
| `__cpp_lib_chrono_udls` | User-defined literals for time types | `201304L` | (C++14) | N3642 |
| `__cpp_lib_clamp` | std::clamp | `201603L` | (C++17) | P0025R1 |
| `__cpp_lib_common_reference` | Make std::common_reference_t of std::reference_wrapper a reference type | `202302L` | (C++23) | P2655R3 |
| `__cpp_lib_common_reference_wrapper` | Make std::common_reference_t of std::reference_wrapper a reference type | `202302L` | (C++23) | P2655R3 |
| `__cpp_lib_complex_udls` | User-defined Literals for `std::complex` | `201309L` | (C++14) | N3779 |
| `__cpp_lib_concepts` | Standard library concepts | `202002L` | (C++20) | P0898R3 P1754R1 P1964R2 |
| Move-only types for `equality_comparable_with`, `totally_ordered_with`, and `three_way_comparable_with` | `202207L` | (C++23) | P2404R3 |
| `__cpp_lib_constexpr_algorithms` | Constexpr for algorithms | `201806L` | (C++20) | P0202R3 P0879R0 LWG3256 LWG3792 |
| Constexpr stable sorting | `202306L` | (C++26) | P2562R1 |
| `__cpp_lib_constexpr_atomic` | constexpr std::atomic and std::atomic_ref | `202411L` | (C++26) | P3309R3 |
| `__cpp_lib_constexpr_bitset` | A more constexpr std::bitset | `202207L` | (C++23) | P2417R2 |
| `__cpp_lib_constexpr_charconv` | Constexpr for std::to_chars and std::from_chars for integral types | `202207L` | (C++23) | P2291R3 |
| `__cpp_lib_constexpr_cmath` | Constexpr for mathematical functions in <cmath> and <cstdlib> | `202202L` | (C++23) | P0533R9 |
| More constexpr for <cmath> | `202306L` | (C++26) | P1383R2 |
| `__cpp_lib_constexpr_complex` | Constexpr for std::complex | `201711L` | (C++20) | P0415R1 |
| More constexpr for <complex> | `202306L` | (C++26) | P1383R2 |
| `__cpp_lib_constexpr_dynamic_alloc` | Constexpr for std::allocator and related utilities | `201907L` | (C++20) | P0784R7 |
| `__cpp_lib_constexpr_exceptions` | constexpr for exception types, e.g. std::bad_alloc, std::bad_cast etc. | `202411L` | (C++26) | P3068R6 |
| `__cpp_lib_constexpr_functional` | Misc constexpr bits (std::default_searcher); constexpr `INVOKE` | `201907L` | (C++20) | P1032R1 P1065R2 |
| `__cpp_lib_constexpr_iterator` | Misc constexpr bits (std::insert_iterator et al.) | `201811L` | (C++20) | P1032R1 |
| `__cpp_lib_constexpr_memory` | Constexpr in std::pointer_traits | `201811L` | (C++20) | P1006R1 |
| Constexpr std::unique_ptr | `202202L` | (C++23) | P2273R3 |
| `__cpp_lib_constexpr_new` | Constexpr placement new | `202406L` | (C++26) | P2747R2 |
| `__cpp_lib_constexpr_numeric` | Constexpr for algorithms in <numeric> | `201911L` | (C++20) | P1645R1 |
| `__cpp_lib_constexpr_string` | constexpr std::char_traits | `201611L` | (C++17) | P0426R1 |
| constexpr std::string | `201907L` | (C++20) | P0980R1 |
| `__cpp_lib_constexpr_string_view` | Misc constexpr bits (std::string_view::copy) | `201811L` | (C++20) | P1032R1 |
| `__cpp_lib_constexpr_tuple` | Misc constexpr bits (std::tuple::operator= et al.) | `201811L` | (C++20) | P1032R1 |
| `__cpp_lib_constexpr_typeinfo` | Constexpr for std::type_info::operator== | `202106L` | (C++23) | P1328R1 |
| `__cpp_lib_constexpr_utility` | Misc constexpr bits (std::pair::operator= et al.) | `201811L` | (C++20) | P1032R1 |
| `__cpp_lib_constexpr_vector` | Constexpr for std::vector | `201907L` | (C++20) | P1004R2 |
| `__cpp_lib_constrained_equality` | Constrained relational operators for std::pair, std::tuple, std::optional, and std::variant | `202403L` | (C++26) | P2944R3 |
| Constraining std::expected equality operators | `202411L` | P3379R0 |
| `__cpp_lib_containers_ranges` | Ranges-aware construction and insertion for containers and strings | `202202L` | (C++23) | P1206R7 |
| `__cpp_lib_copyable_function` | std::copyable_function | `202306L` | (C++26) | P2548R6 |
| `__cpp_lib_coroutine` | Coroutines (library support) | `201902L` | (C++20) | P0912R5 LWG3393 |
| `__cpp_lib_debugging` | <debugging>: Debugging support | `202311L` | (C++26) | P2546R5 |
| Replaceable std::is_debugger_present | `202403L` | P2810R4 |
| `__cpp_lib_destroying_delete` | Destroying [operator delete](memory/new/operator_delete.html "cpp/memory/new/operator delete") (library support) | `201806L` | (C++20) | P0722R3 |
| `__cpp_lib_enable_shared_from_this` | std::enable_shared_from_this::weak_from_this | `201603L` | (C++17) | P0033R1 |
| `__cpp_lib_endian` | std::endian | `201907L` | (C++20) | P0463R1 P1612R1 |
| `__cpp_lib_erase_if` | Uniform container erasure | `202002L` | (C++20) | P1209R0 P1115R3 |
| `__cpp_lib_exchange_function` | std::exchange | `201304L` | (C++14) | N3668 |
| `__cpp_lib_execution` | Execution policies | `201603L` | (C++17) | P0024R2 |
| std::execution::unsequenced_policy | `201902L` | (C++20) | P1001R2 |
| `__cpp_lib_expected` | class template std::expected | `202202L` | (C++23) | P0323R12 |
| Monadic functions for std::expected | `202211L` | P2505R5 |
| `__cpp_lib_filesystem` | Filesystem library | `201703L` | (C++17) | P0218R1 P0219R1 P0392R0 P0317R1 |
| `__cpp_lib_flat_map` | std::flat_map and std::flat_multimap | `202207L` | (C++23) | P0429R9 |
| `__cpp_lib_flat_set` | std::flat_set and std::flat_multiset | `202207L` | (C++23) | P1222R4 LWG3751 |
| `__cpp_lib_format` | Text formatting | `201907L` | (C++20) | P0645R10 P1361R2 P1652R1 |
| Compile-time format string checks; Reducing parameterization of std::vformat_to | `202106L` | (C++23) (DR20) | P2216R3 |
| Fixing locale handling in chrono formatters; Supporting non-const-formattable types | `202110L` | P2372R3 P2418R2 |
| Exposing std::basic_format_string; clarify handling of encodings in localized formatting of chrono types | `202207L` | (C++23) | P2419R2 P2508R1 |
| Formatting pointers | `202304L` | (C++26) | P2510R3 |
| Type-checking format args | `202305L` | P2757R3 |
| Member visit | `202306L` | P2637R3 |
| Runtime format strings | `202311L` | P2918R2 |
| `__cpp_lib_format_path` | Formatting of std::filesystem::path | `202403L` | (C++26) | P2845R8 |
| `__cpp_lib_format_ranges` | Formatting ranges | `202207L` | (C++23) | P2286R8 P2585R1 LWG3750 |
| `__cpp_lib_format_uchar` | Fix formatting of code units as integers | `202311L` | (C++26) | P2909R4 |
| `__cpp_lib_formatters` | Formatting std::thread::id and std::stacktrace | `202302L` | (C++23) | P2693R1 |
| `__cpp_lib_forward_like` | std::forward_like | `202207L` | (C++23) | P2445R1 |
| `__cpp_lib_freestanding_algorithm` | Freestanding facilities in <algorithm> | `202311L` | (C++26) | P2407R5 |
| `__cpp_lib_freestanding_array` | Make parts of std::array freestanding | `202311L` | (C++26) | P2407R5 |
| `__cpp_lib_freestanding_char_traits` | Freestanding std::char_traits | `202306L` | (C++26) | P2338R4 |
| `__cpp_lib_freestanding_charconv` | Freestanding facilities in <charconv> | `202306L` | (C++26) | P2338R4 |
| `__cpp_lib_freestanding_cstdlib` | Freestanding facilities in <cstdlib> | `202306L` | (C++26) | P2338R4 |
| `__cpp_lib_freestanding_cstring` | Freestanding facilities in <cstring> | `202306L` | (C++26) | P2338R4 |
| Removing std::strtok from freestanding facilities | `202311L` | P2937R0 |
| `__cpp_lib_freestanding_cwchar` | Freestanding facilities in <cwchar> | `202306L` | (C++26) | P2338R4 |
| `__cpp_lib_freestanding_errc` | Freestanding std::errc | `202306L` | (C++26) | P2338R4 |
| `__cpp_lib_freestanding_expected` | Make parts of std::expected freestanding | `202311L` | (C++26) | P2833R2 |
| `__cpp_lib_freestanding_feature_test_macros` | Support for freestanding feature-test macros | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_functional` | Freestanding facilities in <functional> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_iterator` | Freestanding facilities in <iterator> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_mdspan` | Freestanding std::mdspan | `202311L` | (C++26) | P2833R2 |
| `__cpp_lib_freestanding_memory` | Freestanding facilities in <memory> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_numeric` | Freestanding facilities in <numeric> (saturation arithmetic) | `202311L` | (C++26) | P0543R3 |
| `__cpp_lib_freestanding_operator_new` | Definition of operator new (optional in freestanding implementations) | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_optional` | Making parts of std::optional freestanding | `202311L` | (C++26) | P2407R5 |
| `__cpp_lib_freestanding_ranges` | Freestanding facilities in <ranges> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_ratio` | Freestanding facilities in <ratio> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_string_view` | Making parts of std::string_view freestanding | `202311L` | (C++26) | P2407R5 |
| `__cpp_lib_freestanding_tuple` | Freestanding facilities in <tuple> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_utility` | Freestanding facilities in <utility> | `202306L` | (C++26) | P2198R7 |
| `__cpp_lib_freestanding_variant` | Making parts of std::variant freestanding | `202311L` | (C++26) | P2407R5 |
| `__cpp_lib_fstream_native_handle` | Obtaining native handles from file streams | `202306L` | (C++26) | P1759R6 |
| `__cpp_lib_function_ref` | std::function_ref: A type-erased callable reference | `202306L` | (C++26) | P0792R14 |
| `__cpp_lib_gcd_lcm` | std::gcd, std::lcm | `201606L` | (C++17) | P0295R0 |
| `__cpp_lib_generator` | std::generator: Synchronous coroutine generator for ranges | `202207L` | (C++23) | P2502R2 |
| `__cpp_lib_generic_associative_lookup` | Heterogeneous comparison lookup in associative containers | `201304L` | (C++14) | N3657 |
| `__cpp_lib_generic_unordered_lookup` | Heterogeneous comparison lookup in unordered associative containers | `201811L` | (C++20) | P0919R3 |
| `__cpp_lib_hardware_interference_size` | Constexpr std::hardware_{constructive, destructive}_interference_size | `201703L` | (C++17) | P0154R1 |
| `__cpp_lib_has_unique_object_representations` | std::has_unique_object_representations | `201606L` | (C++17) | P0258R2 |
| `__cpp_lib_hazard_pointer` | <hazard_pointer>: Hazard pointers | `202306L` | (C++26) | P2530R3 |
| `__cpp_lib_hypot` | 3-argument overload of std::hypot | `201603L` | (C++17) | P0030R1 |
| `__cpp_lib_incomplete_container_elements` | Minimal incomplete type support for std::forward_list, std::list, and std::vector | `201505L` | (C++17) | N4510 |
| `__cpp_lib_inplace_vector` | std::inplace_vector: Dynamically-resizable vector with fixed capacity (inplace storage) | `202406L` | (C++26) | P0843R14 |
| `__cpp_lib_int_pow2` | Integral power-of-2 operations (std::has_single_bit, std::bit_ceil, std::bit_floor, std::bit_width) | `202002L` | (C++20) | P0556R3 P1956R1 |
| `__cpp_lib_integer_comparison_functions` | Integer comparison functions | `202002L` | (C++20) | P0586R2 |
| `__cpp_lib_integer_sequence` | Compile-time integer sequences | `201304L` | (C++14) | N3658 |
| `__cpp_lib_integral_constant_callable` | std::integral_constant::operator() | `201304L` | (C++14) | N3545 |
| `__cpp_lib_interpolate` | std::lerp, std::midpoint | `201902L` | (C++20) | P0811R3 |
| `__cpp_lib_invoke` | std::invoke | `201411L` | (C++17) | N4169 |
| `__cpp_lib_invoke_r` | std::invoke_r | `202106L` | (C++23) | P2136R3 |
| `__cpp_lib_ios_noreplace` | Support exclusive mode for fstreams | `202207L` | (C++23) | P2467R1 |
| `__cpp_lib_is_aggregate` | std::is_aggregate | `201703L` | (C++17) | LWG2911 |
| `__cpp_lib_is_constant_evaluated` | std::is_constant_evaluated | `201811L` | (C++20) | P0595R2 |
| `__cpp_lib_is_final` | std::is_final | `201402L` | (C++14) | LWG2112 |
| `__cpp_lib_is_implicit_lifetime` | std::is_implicit_lifetime | `202302L` | (C++23) | P2674R1 |
| `__cpp_lib_is_invocable` | std::is_invocable, std::invoke_result | `201703L` | (C++17) | P0604R0 |
| `__cpp_lib_is_layout_compatible` | std::is_layout_compatible | `201907L` | (C++20) | P0466R5 |
| `__cpp_lib_is_nothrow_convertible` | std::is_convertible | `201806L` | (C++20) | P0758R1 LWG3356 |
| `__cpp_lib_is_null_pointer` | std::is_null_pointer | `201309L` | (C++14) (DR11) | LWG2247 |
| `__cpp_lib_is_pointer_interconvertible` | Pointer-interconvertibility traits: std::is_pointer_interconvertible_with_class, std::is_pointer_interconvertible_base_of | `201907L` | (C++20) | P0466R5 |
| `__cpp_lib_is_scoped_enum` | std::is_scoped_enum | `202011L` | (C++23) | P1048R1 |
| `__cpp_lib_is_sufficiently_aligned` | std::is_sufficiently_aligned: checks a pointer’s alignment precondition | `202411L` | (C++26) | P2897R7 |
| `__cpp_lib_is_swappable` | (nothrow-)swappable traits | `201603L` | (C++17) | P0185R1 |
| `__cpp_lib_is_virtual_base_of` | std::is_virtual_base_of: Type trait for detecting virtual base classes | `202406L` | (C++26) | P2985R0 |
| `__cpp_lib_is_within_lifetime` | Checking if a union alternative is active (std::is_within_lifetime) | `202306L` | (C++26) | P2641R4 |
| `__cpp_lib_jthread` | Stop token and joining thread | `201911L` | (C++20) | P0660R10 P1869R1 |
| `__cpp_lib_latch` | std::latch | `201907L` | (C++20) | P1135R6 |
| `__cpp_lib_launder` | CWG issue 1776: Replacement of class objects containing reference members (std::launder) | `201606L` | (C++17) | P0137R1 |
| `__cpp_lib_linalg` | A free function linear algebra interface based on the BLAS | `202311L` | (C++26) | P1673R13 |
| `__cpp_lib_list_remove_return_type` | Change the return type of the `remove()`, `remove_if()` and `unique()` of std::forward_list and std::list | `201806L` | (C++20) | P0646R1 |
| `__cpp_lib_logical_traits` | Logical operations on type traits | `201510L` | (C++17) | P0013R1 |
| `__cpp_lib_make_from_tuple` | std::make_from_tuple | `201606L` | (C++17) | P0209R2 |
| `__cpp_lib_make_reverse_iterator` | std::make_reverse_iterator | `201402L` | (C++14) | LWG2285 |
| `__cpp_lib_make_unique` | std::make_unique | `201304L` | (C++14) | N3656 |
| `__cpp_lib_map_try_emplace` | std::map::try_emplace, std::map::insert_or_assign | `201411L` | (C++17) | N4279 |
| `__cpp_lib_math_constants` | Mathematical constants | `201907L` | (C++20) | P0631R8 |
| `__cpp_lib_math_special_functions` | Mathematical special functions | `201603L` | (C++17) | P0226R1 |
| `__cpp_lib_mdspan` | std::mdspan | `202207L` | (C++23) | P0009R18 P2599R2 P2604R0 P2613R1 |
| std::dims for std::mdspan | `202406L` | (C++26) | P2389R2 |
| `__cpp_lib_memory_resource` | std::pmr::memory_resource | `201603L` | (C++17) | P0220R1 |
| `__cpp_lib_modules` | Standard library modules `std` and `std.compat` | `202207L` | (C++23) | P2465R3 |
| `__cpp_lib_move_iterator_concept` | Make std::move_iterator<T\*> a random access iterator | `202207L` | (C++23) | P2520R0 |
| `__cpp_lib_move_only_function` | std::move_only_function | `202110L` | (C++23) | P0288R9 |
| `__cpp_lib_node_extract` | Splicing maps and sets (std::map::extract, std::map::merge, insert(node_type), etc) | `201606L` | (C++17) | P0083R3 |
| `__cpp_lib_nonmember_container_access` | std::size, std::data and std::empty | `201411L` | (C++17) | N4280 |
| `__cpp_lib_not_fn` | std::not_fn | `201603L` | (C++17) | P0005R4 |
| Allow passing callable objects as non-type template arguments to std::not_fn | `202306L` | (C++26) | P2714R1 |
| `__cpp_lib_null_iterators` | Null LegacyForwardIterators | `201304L` | (C++14) | N3644 |
| `__cpp_lib_optional` | std::optional | `201606L` | (C++17) | P0220R1 P0032R3 P0307R2 |
| Fully constexpr std::optional | `202106L` | (C++23) (DR20) | P2231R1 |
| Monadic operations in std::optional | `202110L` | (C++23) | P0798R8 LWG3621 |
| `__cpp_lib_optional_range_support` | std::optional range support | `202406L` | (C++26) | P3168R2 |
| `__cpp_lib_out_ptr` | std::out_ptr, std::inout_ptr | `202106L` | (C++23) | P1132R8 |
| Freestanding std::out_ptr, std::inout_ptr | `202311L` | (C++26) | P2833R2 |
| `__cpp_lib_parallel_algorithm` | Parallel algorithms | `201603L` | (C++17) | P0024R2 |
| `__cpp_lib_polymorphic_allocator` | std::pmr::polymorphic_allocator<> as a vocabulary type | `201902L` | (C++20) | P0339R6 LWG3437 |
| `__cpp_lib_print` | Formatted output | `202207L` | (C++23) | P2093R14 |
| Permit an efficient implementation of std::print | `202403L` | (C++26) (DR23) | P3107R5 P3235R3 |
| Printing Blank Lines with std::println | `202403L` | (C++26) | P3142R0 |
| `__cpp_lib_quoted_string_io` | std::quoted | `201304L` | (C++14) | N3654 |
| `__cpp_lib_philox_engine` | std::philox_engine: Counter-based random number engine | `202406L` | (C++26) | P2075R6 |
| `__cpp_lib_ranges` | Ranges library and constrained algorithms | `201911L` | (C++20) | P0896R4 P1035R7 P1716R3 |
| Non-default-initializable views | `202106L` | (C++23) (DR20) | P2325R3 |
| Views with ownership | `202110L` | P2415R2 |
| std::ranges::range_adaptor_closure | `202202L` | (C++23) | P2387R3 |
| Relaxing range adaptors to allow for move-only types | `202207L` | P2494R2 |
| Removing “poison pill” overloads in ranges::begin, ranges::end, ranges::rbegin, ranges::rend, and ranges::size | `202211L` | P2602R2 |
| Relaxing ranges to allow certain projections | `202302L` | P2609R3 |
| Removing the common reference requirement from the indirectly invocable concepts | `202406L` | (C++26) (DR20) | P2997R1 |
| `__cpp_lib_ranges_as_const` | std::const_iterator, std::ranges::as_const_view | `202207L` | (C++23) | P2278R4 |
| Making std::basic_const_iterator follow its underlying type's convertibility | `202311L` | (C++26) | P2836R1 |
| `__cpp_lib_ranges_as_rvalue` | std::ranges::as_rvalue_view | `202207L` | (C++23) | P2446R2 |
| `__cpp_lib_ranges_cache_latest` | std::ranges::cache_latest_view") | `202411L` | (C++26) | P3138R5 |
| `__cpp_lib_ranges_cartesian_product` | std::ranges::cartesian_product_view | `202207L` | (C++23) | P2374R4 P2540R1 |
| `__cpp_lib_ranges_chunk` | std::ranges::chunk_view | `202202L` | (C++23) | P2442R1 |
| `__cpp_lib_ranges_chunk_by` | std::ranges::chunk_by_view | `202202L` | (C++23) | P2443R1 |
| `__cpp_lib_ranges_concat` | std::ranges::concat_view | `202403L` | (C++26) | P2542R8 |
| `__cpp_lib_ranges_contains` | std::ranges::contains | `202207L` | (C++23) | P2302R4 |
| `__cpp_lib_ranges_enumerate` | std::ranges::enumerate_view | `202302L` | (C++23) | P2164R9 |
| `__cpp_lib_ranges_find_last` | std::ranges::find_last, std::ranges::find_last_if, and std::ranges::find_last_if_not | `202207L` | (C++23) | P1223R5 LWG3807 |
| `__cpp_lib_ranges_fold` | `std::ranges` fold algorithms | `202207L` | (C++23) | P2322R6 |
| `__cpp_lib_ranges_generate_random` | Vector API for random number generation (std::ranges::generate_random) | `202403L` | (C++26) | P1068R11 |
| `__cpp_lib_ranges_iota` | std::ranges::iota | `202202L` | (C++23) | P2440R1 |
| `__cpp_lib_ranges_join_with` | std::ranges::join_with_view | `202202L` | (C++23) | P2441R2 |
| `__cpp_lib_ranges_repeat` | std::ranges::repeat_view | `202207L` | (C++23) | P2474R2 |
| `__cpp_lib_ranges_slide` | std::ranges::slide_view | `202202L` | (C++23) | P2442R1 |
| `__cpp_lib_ranges_starts_ends_with` | std::ranges::starts_with, std::ranges::ends_with | `202106L` | (C++23) | P1659R3 |
| `__cpp_lib_ranges_stride` | std::ranges::stride_view | `202207L` | (C++23) | P1899R3 |
| `__cpp_lib_ranges_to_container` | std::ranges::to | `202202L` | (C++23) | P1206R7 |
| `__cpp_lib_ranges_zip` | std::ranges::zip_view, std::ranges::zip_transform_view, std::ranges::adjacent_view, std::ranges::adjacent_transform_view | `202110L` | (C++23) | P2321R2 |
| `__cpp_lib_ratio` | Adding the new 2022 SI prefixes | `202306L` | (C++26) | P2734R0 |
| `__cpp_lib_raw_memory_algorithms` | Extending memory management tools | `201606L` | (C++17) | P0040R3 |
| constexpr for specialized memory algorithms | `202411L` | (C++26) | P3508R0 P3369R0 |
| `__cpp_lib_rcu` | <rcu>: Read-Copy Update (RCU) | `202306L` | (C++26) | P2545R4 |
| `__cpp_lib_reference_from_temporary` | std::reference_constructs_from_temporary and std::reference_converts_from_temporary | `202202L` | (C++23) | P2255R2 |
| `__cpp_lib_reference_wrapper` | Comparisons for std::reference_wrapper | `202403L` | (C++26) | P2944R3 |
| `__cpp_lib_remove_cvref` | std::remove_cvref | `201711L` | (C++20) | P0550R2 |
| `__cpp_lib_result_of_sfinae` | std::result_of and SFINAE | `201210L` | (C++14) | N3462 |
| `__cpp_lib_robust_nonmodifying_seq_ops` | Making non-modifying sequence operations more robust (two-range overloads for std::mismatch, std::equal and std::is_permutation) | `201304L` | (C++14) | N3671 |
| `__cpp_lib_sample` | std::sample | `201603L` | (C++17) | P0220R1 |
| `__cpp_lib_saturation_arithmetic` | Saturation arithmetic | `202311L` | (C++26) | P0543R3 |
| `__cpp_lib_scoped_lock` | std::scoped_lock | `201703L` | (C++17) | P0156R2 |
| `__cpp_lib_semaphore` | std::counting_semaphore, `std::binary_semaphore` | `201907L` | (C++20) | P1135R6 |
| `__cpp_lib_senders` | std::execution: Sender-receiver model of execution control | `202406L` | (C++26) | P2300R10 |
| `__cpp_lib_shared_mutex` | std::shared_mutex (untimed) | `201505L` | (C++17) | N4508 |
| `__cpp_lib_shared_ptr_arrays` | [std::shared_ptr<T[]>](memory/shared_ptr.html "cpp/memory/shared ptr") | `201611L` | (C++17) | P0497R0 |
| Array support of std::make_shared | `201707L` | (C++20) | P0674R1 |
| `__cpp_lib_shared_ptr_weak_type` | shared_ptr::weak_type | `201606L` | (C++17) | P0163R0 |
| `__cpp_lib_shared_timed_mutex` | std::shared_timed_mutex | `201402L` | (C++14) | N3891 |
| `__cpp_lib_shift` | std::shift_left and std::shift_right | `201806L` | (C++20) | P0769R2 |
| std::ranges::shift_left and std::ranges::shift_right | `202202L` | (C++23) | P2440R1 |
| `__cpp_lib_simd` | <simd>: Data-parallel types | `202411L` | (C++26) | P1928R15 |
| `__cpp_lib_smart_ptr_for_overwrite` | Smart pointer creation with default initialization (std::allocate_shared_for_overwrite, std::make_shared_for_overwrite, std::make_unique_for_overwrite) | `202002L` | (C++20) | P1020R1 P1973R1 |
| `__cpp_lib_smart_ptr_owner_equality` | Enabling the use of std::weak_ptr as keys in unordered associative containers | `202306L` | (C++26) | P1901R2 |
| `__cpp_lib_source_location` | Source-code information capture (std::source_location) | `201907L` | (C++20) | P1208R6 |
| `__cpp_lib_span` | std::span | `202002L` | (C++20) | P0122R7 LWG3274 P1024R3 P1976R2 |
| Making parts of std::span freestanding | `202311L` | (C++26) | P2821R5 P2833R2 |
| `__cpp_lib_span_initializer_list` | Constructing std::span from an initializer list | `202311L` | (C++26) | P2447R6 |
| `__cpp_lib_spanstream` | std::spanbuf, std::spanstream | `202106L` | (C++23) | P0448R4 |
| `__cpp_lib_ssize` | std::ssize and unsigned std::span::size | `201902L` | (C++20) | P1227R2 |
| `__cpp_lib_sstream_from_string_view` | Interfacing std::stringstreams with std::string_view | `202306L` | (C++26) | P2495R3 |
| `__cpp_lib_stacktrace` | Stacktrace library | `202011L` | (C++23) | P0881R7 |
| `__cpp_lib_start_lifetime_as` | Explicit lifetime management (std::start_lifetime_as) | `202207L` | (C++23) | P2590R2 |
| `__cpp_lib_starts_ends_with` | String prefix and suffix checking (`starts_with()` and `ends_with()` for std::string and std::string_view) | `201711L` | (C++20) | P0457R2 |
| `__cpp_lib_stdatomic_h` | Compatibility header for C atomic operations | `202011L` | (C++23) | P0943R6 |
| `__cpp_lib_string_contains` | `contains()` for std::basic_string and std::basic_string_view | `202011L` | (C++23) | P1679R3 |
| `__cpp_lib_string_resize_and_overwrite` | std::basic_string::resize_and_overwrite | `202110L` | (C++23) | P1072R10 |
| `__cpp_lib_string_udls` | User-defined literals for string types | `201304L` | (C++14) | N3642 |
| `__cpp_lib_string_view` | std::string_view | `201606L` | (C++17) | P0220R1 P0254R2 |
| ConstexprIterator | `201803L` | (C++20) | P0858R0 LWG3257 |
| Concatenation of std::strings and std::string_views | `202403L` | (C++26) | P2591R5 |
| `__cpp_lib_submdspan` | std::submdspan | `202306L` | (C++26) | P2630R4 |
| Padded mdspan layouts | `202403L` | P2642R6 |
| `__cpp_lib_syncbuf` | Synchronized buffered ostream (std::syncbuf, std::osyncstream) and manipulators | `201803L` | (C++20) | P0053R7 P0753R2 |
| `__cpp_lib_text_encoding` | std::text_encoding | `202306L` | (C++26) | P1885R12 |
| `__cpp_lib_three_way_comparison` | Three-way comparison (library support); adding three-way comparison to the library | `201907L` | (C++20) | P0768R1 P1614R2 |
| `__cpp_lib_to_address` | Utility to convert a pointer to a raw pointer (std::to_address) | `201711L` | (C++20) | P0653R2 |
| `__cpp_lib_to_array` | std::to_array | `201907L` | (C++20) | P0325R4 |
| `__cpp_lib_to_chars` | Elementary string conversions (std::to_chars, std::from_chars) | `201611L` | (C++17) | P0067R5 P0682R1 LWG3137 |
| Testing for success or failure of <charconv> functions | `202306L` | (C++26) | P2497R0 |
| `__cpp_lib_to_string` | Redefining std::to_string in terms of std::format | `202306L` | (C++26) | P2587R3 |
| `__cpp_lib_to_underlying` | std::to_underlying | `202102L` | (C++23) | P1682R3 |
| `__cpp_lib_transformation_trait_aliases` | Alias templates for transformation traits | `201304L` | (C++14) | N3655 |
| `__cpp_lib_transparent_operators` | Transparent operator functors (std::less<> et al) | `201210L` | (C++14) | N3421 |
| Transparent std::owner_less (std::owner_less<void>) | `201510L` | (C++17) | P0074R0 |
| `__cpp_lib_tuple_element_t` | std::tuple_element_t | `201402L` | (C++14) | N3887 |
| `__cpp_lib_tuple_like` | Compatibility between std::tuple and tuple-like objects (std::pair, std::array, std::subrange) | `202207L` | (C++23) | P2165R4 |
| Add tuple protocol to std::complex | `202311L` | (C++26) | P2819R2 |
| `__cpp_lib_tuples_by_type` | Addressing tuples by type | `201304L` | (C++14) | N3670 |
| `__cpp_lib_type_identity` | std::type_identity | `201806L` | (C++20) | P0887R1 |
| `__cpp_lib_type_trait_variable_templates` | Type traits variable templates (std::is_void_v, etc) | `201510L` | (C++17) | P0006R0 |
| `__cpp_lib_uncaught_exceptions` | std::uncaught_exceptions | `201411L` | (C++17) | N4259 |
| `__cpp_lib_unordered_map_try_emplace` | std::unordered_map::try_emplace, std::unordered_map::insert_or_assign | `201411L` | (C++17) | N4279 |
| `__cpp_lib_unreachable` | std::unreachable | `202202L` | (C++23) | P0627R6 |
| `__cpp_lib_unwrap_ref` | std::unwrap_ref_decay and std::unwrap_reference | `201811L` | (C++20) | P0318R1 LWG3348 |
| `__cpp_lib_variant` | std::variant: A type-safe union for C++17 | `201606L` | (C++17) | P0088R3 P0393R3 P0032R3 |
| std::visit for classes derived from std::variant | `202102L` | (C++23) (DR17) | P2162R2 |
| Fully constexpr std::variant | `202106L` | (C++23) (DR20) | P2231R1 |
| Member visit | `202306L` | (C++26) | P2637R3 |
| `__cpp_lib_void_t` | std::void_t | `201411L` | (C++17) | N3911 |
| Total number of macros: 246 | | | | |

### Example

#### Normal usage

Run this code

```
#ifdef __has_include                           // Check if __has_include is present
#  if __has_include(<optional>)                // Check for a standard library
#    include <optional>
#  elif __has_include(<experimental/optional>) // Check for an experimental version
#    include <experimental/optional>
#  elif __has_include(<boost/optional.hpp>)    // Try with an external library
#    include <boost/optional.hpp>
#  else                                        // Not found at all
#     error "Missing <optional>"
#  endif
#endif
 
#ifdef __has_cpp_attribute                      // Check if __has_cpp_attribute is present
#  if __has_cpp_attribute(deprecated)           // Check for an attribute
#    define DEPRECATED(msg) [[deprecated(msg)]]
#  endif
#endif
#ifndef DEPRECATED
#    define DEPRECATED(msg)
#endif
 
DEPRECATED("foo() has been deprecated") void foo();
 
#if __cpp_constexpr >= 201304                // Check for a specific version of a feature
#  define CONSTEXPR constexpr
#else
#  define CONSTEXPR inline
#endif
 
CONSTEXPR int bar(unsigned i)
{
#if __cpp_binary_literals                    // Check for the presence of a feature
    unsigned mask1 = 0b11000000;
    unsigned mask2 = 0b00000111;
#else
    unsigned mask1 = 0xC0;
    unsigned mask2 = 0x07;
#endif
    if (i & mask1)
        return 1;
    if (i & mask2)
        return 2;
    return 0;
}
 
int main() {}

```

#### Compiler Features Dump

The following (C++11 compatible) program dumps C++ compiler features and attributes.
Note that the use of __has_cpp_attribute() is not conformant and depends on the gcc/clang implementation.

Run this code

```
static constexpr struct change_these_options_to_select_what_will_be_printed
{
    constexpr static int longest_macro_name { 45 };
    constexpr static bool titles               = 1;
    constexpr static bool counters             = 1;
    constexpr static bool attributes           = 1;
    constexpr static bool standard_values      = 1;
    constexpr static bool compiler_specific    = 1;
    constexpr static bool core_features        = 1;
    constexpr static bool lib_features         = 1;
    constexpr static bool supported_features   = 1;
    constexpr static bool unsupported_features = 1;
    constexpr static bool sort_by_date         = 0;
    constexpr static bool separate_year_month  = 1;
    constexpr static bool separated_revisions  = 1;
    constexpr static bool latest_revisions     = 1;
    constexpr static bool cxx98                = 0;
    constexpr static bool cxx11                = 1;
    constexpr static bool cxx14                = 1;
    constexpr static bool cxx17                = 1;
    constexpr static bool cxx20                = 1;
    constexpr static bool cxx23                = 1;
    constexpr static bool cxx26                = 1;
    constexpr static bool cxx29                = 0;
} print;
 
#if __cplusplus < 201100
#  error "C++11 or better is required"
#endif
 
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <utility>
#include <vector>
 
#ifdef __has_include
# if __has_include(<version>)
#   include <version>
# endif
#endif
 
// Expect a string that starts with 6-decimal-digits or with '_' (if unsupported)
#define COMPILER_VALUE_INT(n) #n [0] == '_' ? 0 : \
    (#n[5] - '0') + (#n[4] - '0') * 10 + (#n[3] - '0') * 100 + \
    (#n[2] - '0') * 1000 + (#n[1] - '0') * 10000 + (#n[0] - '0') * 100000
#define COMPILER_FEATURE_ENTRY(expect, name) { #name, COMPILER_VALUE_INT(name), expect },
 
#if defined(__has_cpp_attribute) && defined(__GNUG__)
# define COMPILER_ATTRIBUTE(expect, name) { #name, __has_cpp_attribute(name), expect },
#else
# define COMPILER_ATTRIBUTE(expect, name) { #name, COMPILER_VALUE_INT(name), expect },
#endif
 
#define COMPILER_SPECIFIC_STRING(value) #value
#define COMPILER_SPECIFIC_ENTRY(name) { #name, COMPILER_SPECIFIC_STRING(name) },
 
class CompilerFeature
{
    char const* name_; long data_; long std_;
public:
    constexpr CompilerFeature(char const* name, long data, long std)
        : name_(name), data_(data), std_(std) {}
    constexpr CompilerFeature(CompilerFeature const&) = default;
    CompilerFeature& operator=(CompilerFeature const&) = default;
    bool operator<(CompilerFeature const& rhs) const
        { return std::strcmp(name_, rhs.name_) < 0; }
    bool operator==(CompilerFeature const& rhs) const
        { return std::strcmp(name_, rhs.name_) == 0; }
    constexpr bool supported() const { return data_ >= std_; }
    constexpr bool maybe() const { return data_ > 0; }
    constexpr char const* name() const { return name_; }
    constexpr long std() const { return std_; }
    constexpr long data() const { return data_; }
    void data(long x) { data_ = x; }
};
 
static /*constexpr*/ std::pair<const char*, const char*> compiler[] = {
    COMPILER_SPECIFIC_ENTRY(__cplusplus) //< not compiler specific, but useful :)
    COMPILER_SPECIFIC_ENTRY(__clang_major__)
    COMPILER_SPECIFIC_ENTRY(__clang_minor__)
    COMPILER_SPECIFIC_ENTRY(__clang_patchlevel__)
    COMPILER_SPECIFIC_ENTRY(__GNUG__)
    COMPILER_SPECIFIC_ENTRY(__GNUC_MINOR__)
    COMPILER_SPECIFIC_ENTRY(__GNUC_PATCHLEVEL__)
    // Add your favorite compiler specific macros. Undefined ones will not be printed.
};
 
static constexpr CompilerFeature cxx98_core[] = {
    COMPILER_FEATURE_ENTRY(199711L, __cpp_exceptions)
    COMPILER_FEATURE_ENTRY(199711L, __cpp_rtti)
};
 
static constexpr CompilerFeature cxx11_core[] = {
    COMPILER_FEATURE_ENTRY(200704L, __cpp_alias_templates)
    COMPILER_FEATURE_ENTRY(200809L, __cpp_attributes)
    COMPILER_FEATURE_ENTRY(200704L, __cpp_constexpr)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_constexpr_in_decltype)
    COMPILER_FEATURE_ENTRY(200707L, __cpp_decltype)
    COMPILER_FEATURE_ENTRY(200604L, __cpp_delegating_constructors)
    COMPILER_FEATURE_ENTRY(201511L, __cpp_inheriting_constructors)
    COMPILER_FEATURE_ENTRY(200806L, __cpp_initializer_lists)
    COMPILER_FEATURE_ENTRY(200907L, __cpp_lambdas)
    COMPILER_FEATURE_ENTRY(200809L, __cpp_nsdmi)
    COMPILER_FEATURE_ENTRY(200907L, __cpp_range_based_for)
    COMPILER_FEATURE_ENTRY(200710L, __cpp_raw_strings)
    COMPILER_FEATURE_ENTRY(200710L, __cpp_ref_qualifiers)
    COMPILER_FEATURE_ENTRY(200610L, __cpp_rvalue_references)
    COMPILER_FEATURE_ENTRY(200410L, __cpp_static_assert)
    COMPILER_FEATURE_ENTRY(200806L, __cpp_threadsafe_static_init)
    COMPILER_FEATURE_ENTRY(200704L, __cpp_unicode_characters)
    COMPILER_FEATURE_ENTRY(200710L, __cpp_unicode_literals)
    COMPILER_FEATURE_ENTRY(200809L, __cpp_user_defined_literals)
    COMPILER_FEATURE_ENTRY(200704L, __cpp_variadic_templates)
};
 
static constexpr CompilerFeature cxx14_core[] = {
    COMPILER_FEATURE_ENTRY(201304L, __cpp_aggregate_nsdmi)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_binary_literals)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_constexpr)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_decltype_auto)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_generic_lambdas)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_init_captures)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_return_type_deduction)
    COMPILER_FEATURE_ENTRY(201309L, __cpp_sized_deallocation)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_variable_templates)
};
static constexpr CompilerFeature cxx14_lib[] = {
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_chrono_udls)
    COMPILER_FEATURE_ENTRY(201309L, __cpp_lib_complex_udls)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_exchange_function)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_generic_associative_lookup)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_integer_sequence)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_integral_constant_callable)
    COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_is_final)
    COMPILER_FEATURE_ENTRY(201309L, __cpp_lib_is_null_pointer)
    COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_make_reverse_iterator)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_make_unique)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_null_iterators)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_quoted_string_io)
    COMPILER_FEATURE_ENTRY(201210L, __cpp_lib_result_of_sfinae)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_robust_nonmodifying_seq_ops)
    COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_shared_timed_mutex)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_string_udls)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_transformation_trait_aliases)
    COMPILER_FEATURE_ENTRY(201210L, __cpp_lib_transparent_operators)
    COMPILER_FEATURE_ENTRY(201402L, __cpp_lib_tuple_element_t)
    COMPILER_FEATURE_ENTRY(201304L, __cpp_lib_tuples_by_type)
};
 
static constexpr CompilerFeature cxx17_core[] = {
    COMPILER_FEATURE_ENTRY(201603L, __cpp_aggregate_bases)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_aligned_new)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_capture_star_this)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_constexpr)
    COMPILER_FEATURE_ENTRY(201703L, __cpp_deduction_guides)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_enumerator_attributes)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_fold_expressions)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_guaranteed_copy_elision)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_hex_float)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_if_constexpr)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_inline_variables)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_namespace_attributes)
    COMPILER_FEATURE_ENTRY(201510L, __cpp_noexcept_function_type)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_nontype_template_args)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_nontype_template_parameter_auto)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_range_based_for)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_static_assert)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_structured_bindings)
    COMPILER_FEATURE_ENTRY(201611L, __cpp_template_template_args)
    COMPILER_FEATURE_ENTRY(201611L, __cpp_variadic_using)
};
static constexpr CompilerFeature cxx17_lib[] = {
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_addressof_constexpr)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_allocator_traits_is_always_equal)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_any)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_apply)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_array_constexpr)
    COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_as_const)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_atomic_is_always_lock_free)
    COMPILER_FEATURE_ENTRY(201505L, __cpp_lib_bool_constant)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_boyer_moore_searcher)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_byte)
    COMPILER_FEATURE_ENTRY(201611L, __cpp_lib_chrono)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_clamp)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_enable_shared_from_this)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_execution)
    COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_filesystem)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_gcd_lcm)
    COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_hardware_interference_size)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_has_unique_object_representations)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_hypot)
    COMPILER_FEATURE_ENTRY(201505L, __cpp_lib_incomplete_container_elements)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_invoke)
    COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_is_aggregate)
    COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_is_invocable)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_is_swappable)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_launder)
    COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_logical_traits)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_make_from_tuple)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_map_try_emplace)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_math_special_functions)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_memory_resource)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_node_extract)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_nonmember_container_access)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_not_fn)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_optional)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_parallel_algorithm)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_raw_memory_algorithms)
    COMPILER_FEATURE_ENTRY(201603L, __cpp_lib_sample)
    COMPILER_FEATURE_ENTRY(201703L, __cpp_lib_scoped_lock)
    COMPILER_FEATURE_ENTRY(201505L, __cpp_lib_shared_mutex)
    COMPILER_FEATURE_ENTRY(201611L, __cpp_lib_shared_ptr_arrays)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_shared_ptr_weak_type)
    COMPILER_FEATURE_ENTRY(201606L, __cpp_lib_string_view)
    COMPILER_FEATURE_ENTRY(201611L, __cpp_lib_to_chars)
    COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_transparent_operators)
    COMPILER_FEATURE_ENTRY(201510L, __cpp_lib_type_trait_variable_templates)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_uncaught_exceptions)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_unordered_map_try_emplace)
    COMPILER_FEATURE_ENTRY(202102L, __cpp_lib_variant)
    COMPILER_FEATURE_ENTRY(201411L, __cpp_lib_void_t)
};
 
static constexpr CompilerFeature cxx20_core[] = {
    COMPILER_FEATURE_ENTRY(201902L, __cpp_aggregate_paren_init)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_char8_t)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_concepts)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_conditional_explicit)
    COMPILER_FEATURE_ENTRY(202211L, __cpp_consteval)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_constexpr)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_constexpr_dynamic_alloc)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_constinit)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_deduction_guides)
    COMPILER_FEATURE_ENTRY(201707L, __cpp_designated_initializers)
    COMPILER_FEATURE_ENTRY(201707L, __cpp_generic_lambdas)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_impl_coroutine)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_impl_destroying_delete)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_impl_three_way_comparison)
    COMPILER_FEATURE_ENTRY(201803L, __cpp_init_captures)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_modules)
    COMPILER_FEATURE_ENTRY(201911L, __cpp_nontype_template_args)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_using_enum)
};
static constexpr CompilerFeature cxx20_lib[] = {
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_array_constexpr)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_assume_aligned)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_atomic_flag_test)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_atomic_float)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_atomic_lock_free_type_aliases)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_atomic_ref)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_atomic_shared_ptr)
    COMPILER_FEATURE_ENTRY(201911L, __cpp_lib_atomic_value_initialization)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_atomic_wait)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_barrier)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_bind_front)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_bit_cast)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_bitops)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_bounded_array_traits)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_char8_t)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_chrono)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_concepts)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_constexpr_algorithms)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_constexpr_complex)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_dynamic_alloc)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_functional)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_iterator)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_memory)
    COMPILER_FEATURE_ENTRY(201911L, __cpp_lib_constexpr_numeric)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_string)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_string_view)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_tuple)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_constexpr_utility)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_constexpr_vector)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_coroutine)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_destroying_delete)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_endian)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_erase_if)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_execution)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_format)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_generic_unordered_lookup)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_int_pow2)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_integer_comparison_functions)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_interpolate)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_is_constant_evaluated)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_is_layout_compatible)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_is_nothrow_convertible)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_is_pointer_interconvertible)
    COMPILER_FEATURE_ENTRY(201911L, __cpp_lib_jthread)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_latch)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_list_remove_return_type)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_math_constants)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_optional)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_polymorphic_allocator)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_ranges)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_remove_cvref)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_semaphore)
    COMPILER_FEATURE_ENTRY(201707L, __cpp_lib_shared_ptr_arrays)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_shift)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_smart_ptr_for_overwrite)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_source_location)
    COMPILER_FEATURE_ENTRY(202002L, __cpp_lib_span)
    COMPILER_FEATURE_ENTRY(201902L, __cpp_lib_ssize)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_starts_ends_with)
    COMPILER_FEATURE_ENTRY(201803L, __cpp_lib_string_view)
    COMPILER_FEATURE_ENTRY(201803L, __cpp_lib_syncbuf)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_three_way_comparison)
    COMPILER_FEATURE_ENTRY(201711L, __cpp_lib_to_address)
    COMPILER_FEATURE_ENTRY(201907L, __cpp_lib_to_array)
    COMPILER_FEATURE_ENTRY(201806L, __cpp_lib_type_identity)
    COMPILER_FEATURE_ENTRY(201811L, __cpp_lib_unwrap_ref)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_variant)
};
 
static constexpr CompilerFeature cxx23_core[] = {
    COMPILER_FEATURE_ENTRY(202110L, __cpp_auto_cast)
    COMPILER_FEATURE_ENTRY(202211L, __cpp_constexpr)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_explicit_this_parameter)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_if_consteval)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_implicit_move)
    COMPILER_FEATURE_ENTRY(202211L, __cpp_multidimensional_subscript)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_named_character_escapes)
    COMPILER_FEATURE_ENTRY(202211L, __cpp_range_based_for)
    COMPILER_FEATURE_ENTRY(202011L, __cpp_size_t_suffix)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_static_call_operator)
};
static constexpr CompilerFeature cxx23_lib[] = {
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_adaptor_iterator_pair_constructor)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_algorithm_iterator_requirements)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_allocate_at_least)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_associative_heterogeneous_erasure)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_barrier)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_bind_back)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_byteswap)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_common_reference)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_common_reference_wrapper)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_concepts)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_constexpr_bitset)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_constexpr_charconv)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_constexpr_cmath)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_constexpr_memory)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_constexpr_typeinfo)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_containers_ranges)
    COMPILER_FEATURE_ENTRY(202211L, __cpp_lib_expected)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_flat_map)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_flat_set)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_format)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_format_ranges)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_formatters)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_forward_like)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_generator)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_invoke_r)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ios_noreplace)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_is_implicit_lifetime)
    COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_is_scoped_enum)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_mdspan)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_modules)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_move_iterator_concept)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_move_only_function)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_optional)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_out_ptr)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_print)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_ranges)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_as_const)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_as_rvalue)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_cartesian_product)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_chunk)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_chunk_by)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_contains)
    COMPILER_FEATURE_ENTRY(202302L, __cpp_lib_ranges_enumerate)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_find_last)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_fold)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_iota)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_join_with)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_repeat)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_slide)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_ranges_starts_ends_with)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_ranges_stride)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_ranges_to_container)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_ranges_zip)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_reference_from_temporary)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_shift)
    COMPILER_FEATURE_ENTRY(202106L, __cpp_lib_spanstream)
    COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_stacktrace)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_start_lifetime_as)
    COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_stdatomic_h)
    COMPILER_FEATURE_ENTRY(202011L, __cpp_lib_string_contains)
    COMPILER_FEATURE_ENTRY(202110L, __cpp_lib_string_resize_and_overwrite)
    COMPILER_FEATURE_ENTRY(202102L, __cpp_lib_to_underlying)
    COMPILER_FEATURE_ENTRY(202207L, __cpp_lib_tuple_like)
    COMPILER_FEATURE_ENTRY(202202L, __cpp_lib_unreachable)
};
 
static constexpr CompilerFeature cxx26_core[] = {
    //< Continue to Populate
    COMPILER_FEATURE_ENTRY(202406L, __cpp_constexpr)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_constexpr_exceptions)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_deleted_function)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_fold_expressions)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_pack_indexing)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_placeholder_variables)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_static_assert)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_structured_bindings)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_variadic_friend)
};
static constexpr CompilerFeature cxx26_lib[] = {
    //< Continue to Populate
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_algorithm_default_value_type)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_aligned_accessor)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_associative_heterogeneous_insertion)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_atomic_min_max)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_atomic_ref)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_bind_back)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_bind_front)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_bitset)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_chrono)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_constexpr_algorithms)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_constexpr_atomic)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_constexpr_cmath)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_constexpr_complex)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_constexpr_exceptions)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_constexpr_new)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_constrained_equality)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_copyable_function)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_debugging)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_format)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_format_path)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_format_uchar)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_algorithm)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_array)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_char_traits)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_charconv)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_cstdlib)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_cstring)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_cwchar)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_errc)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_expected)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_feature_test_macros)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_functional)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_iterator)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_mdspan)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_memory)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_numeric)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_operator_new)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_optional)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_ranges)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_ratio)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_string_view)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_tuple)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_freestanding_utility)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_freestanding_variant)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_fstream_native_handle)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_function_ref)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_hazard_pointer)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_inplace_vector)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_is_virtual_base_of)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_is_sufficiently_aligned)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_is_within_lifetime)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_linalg)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_mdspan)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_not_fn)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_out_ptr)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_optional_range_support)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_philox_engine)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_print)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_ranges)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_ranges_as_const)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_ranges_cache_latest)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_ranges_concat)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_ranges_generate_random)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_ratio)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_raw_memory_algorithms)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_rcu)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_reference_wrapper)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_saturation_arithmetic)
    COMPILER_FEATURE_ENTRY(202406L, __cpp_lib_senders)
    COMPILER_FEATURE_ENTRY(202411L, __cpp_lib_simd)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_smart_ptr_owner_equality)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_span)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_span_initializer_list)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_sstream_from_string_view)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_string_view)
    COMPILER_FEATURE_ENTRY(202403L, __cpp_lib_submdspan)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_text_encoding)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_to_chars)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_to_string)
    COMPILER_FEATURE_ENTRY(202311L, __cpp_lib_tuple_like)
    COMPILER_FEATURE_ENTRY(202306L, __cpp_lib_variant)
};
 
static constexpr CompilerFeature cxx29_core[] = {
    //< Continue to Populate
    COMPILER_FEATURE_ENTRY(202604L, __cpp_core_TODO)
};
static constexpr CompilerFeature cxx29_lib[] = {
    //< Continue to Populate
    COMPILER_FEATURE_ENTRY(202604L, __cpp_lib_TODO)
};
 
static constexpr CompilerFeature attributes[] = {
    COMPILER_ATTRIBUTE(202207L, assume)
    COMPILER_ATTRIBUTE(200809L, carries_dependency)
    COMPILER_ATTRIBUTE(201309L, deprecated)
    COMPILER_ATTRIBUTE(201603L, fallthrough)
    COMPILER_ATTRIBUTE(202403L, indeterminate)
    COMPILER_ATTRIBUTE(201803L, likely)
    COMPILER_ATTRIBUTE(201603L, maybe_unused)
    COMPILER_ATTRIBUTE(201803L, no_unique_address)
    COMPILER_ATTRIBUTE(201907L, nodiscard)
    COMPILER_ATTRIBUTE(200809L, noreturn)
    COMPILER_ATTRIBUTE(201803L, unlikely)
};
 
inline void show_compiler_specific_info()
{
    std::printf("Compiler specific macros:\n");
    for (auto co : compiler)
        if (std::strcmp(co.first, co.second))
            std::printf("%*s %s\n", -print.longest_macro_name, co.first, co.second);
}
 
inline void print_compiler_feature(const CompilerFeature& x)
{
    if (not ((print.supported_features and x.maybe()) or
            (print.unsupported_features and not x.maybe())))
        return;
    auto print_year_month = [](long n)
    {
        return std::printf("%ld%s%02ld",
            n / 100, print.separate_year_month ? "-" : "", n % 100);
    };
    std::printf("%*s ", -print.longest_macro_name, x.name());
    x.maybe() ? print_year_month(x.data()) :
                    std::printf("------%s", print.separate_year_month ? "-" : "");
    if (print.standard_values)
        std::printf("  %c  ", (x.supported() ? (x.data() > x.std() ? '>' : '=') : '<')),
            print_year_month(x.std());
    std::puts("");
}
 
template<class Container>
inline void show(char const* const title, Container const& co)
{
    if (print.titles)
    {
        std::printf("%-s (", title);
        if (print.counters)
        {
            std::printf("%zd/", std::count_if(std::begin(co), std::end(co),
                [](CompilerFeature x)
                {
                    return x.supported();
                }));
        }
        std::printf("%td)\n", std::distance(std::begin(co), std::end(co)));
    }
    if (print.sort_by_date)
    {
        std::vector<CompilerFeature> v(std::begin(co), std::end(co));
        std::stable_sort(v.begin(), v.end(),
            [](CompilerFeature const& lhs, CompilerFeature const& rhs)
            {
                return lhs.data() < rhs.data();
            });
        std::for_each(v.cbegin(), v.cend(), print_compiler_feature);
    }
    else
        std::for_each(std::begin(co), std::end(co), print_compiler_feature);
    std::puts("");
}
 
inline void show_latest()
{
    auto latest_rev = []() -> int
    {
        return print.cxx29 ? 29 : print.cxx26 ? 26 : print.cxx23 ? 23 : print.cxx20 ? 20 :
               print.cxx17 ? 17 : print.cxx14 ? 14 : print.cxx11 ? 11 : 98;
    };
    std::vector<CompilerFeature> latest;
    auto add = &latest
    {
        auto i = std::lower_bound(latest.begin(), latest.end(), x);
        if (i == latest.end() or not (*i == x))
            latest.insert(i, x);
        else if (i->data() < x.data())
            i->data(x.data());
    };
    char text[64];
    latest.reserve(512); // max macros
    if (print.core_features)
    {   // preserve reverse revision insertion order!
        if (print.cxx29) std::for_each(std::begin(cxx29_core), std::end(cxx29_core), add);
        if (print.cxx26) std::for_each(std::begin(cxx26_core), std::end(cxx26_core), add);
        if (print.cxx23) std::for_each(std::begin(cxx23_core), std::end(cxx23_core), add);
        if (print.cxx20) std::for_each(std::begin(cxx20_core), std::end(cxx20_core), add);
        if (print.cxx17) std::for_each(std::begin(cxx17_core), std::end(cxx17_core), add);
        if (print.cxx14) std::for_each(std::begin(cxx14_core), std::end(cxx14_core), add);
        if (print.cxx11) std::for_each(std::begin(cxx11_core), std::end(cxx11_core), add);
        if (print.cxx98) std::for_each(std::begin(cxx98_core), std::end(cxx98_core), add);
        std::snprintf(text, sizeof text, "ALL CORE MACROS UP TO C++%02i", latest_rev());
        show(text, latest);
    }
    latest.clear();
    if (print.lib_features)
    {   // preserve reverse revision insertion order!
        if (print.cxx29) std::for_each(std::begin(cxx29_lib), std::end(cxx29_lib), add);
        if (print.cxx26) std::for_each(std::begin(cxx26_lib), std::end(cxx26_lib), add);
        if (print.cxx23) std::for_each(std::begin(cxx23_lib), std::end(cxx23_lib), add);
        if (print.cxx20) std::for_each(std::begin(cxx20_lib), std::end(cxx20_lib), add);
        if (print.cxx17) std::for_each(std::begin(cxx17_lib), std::end(cxx17_lib), add);
        if (print.cxx14) std::for_each(std::begin(cxx14_lib), std::end(cxx14_lib), add);
        std::snprintf(text, sizeof text, "ALL LIB MACROS UP TO C++%02i", latest_rev());
        show(text, latest);
    }
}
 
int main()
{
    if (print.separated_revisions)
    {
        if (print.cxx98 and print.core_features) show("C++98 CORE", cxx98_core);
        if (print.cxx11 and print.core_features) show("C++11 CORE", cxx11_core);
        if (print.cxx14 and print.core_features) show("C++14 CORE", cxx14_core);
        if (print.cxx14 and print.lib_features ) show("C++14 LIB" , cxx14_lib);
        if (print.cxx17 and print.core_features) show("C++17 CORE", cxx17_core);
        if (print.cxx17 and print.lib_features ) show("C++17 LIB" , cxx17_lib);
        if (print.cxx20 and print.core_features) show("C++20 CORE", cxx20_core);
        if (print.cxx20 and print.lib_features ) show("C++20 LIB" , cxx20_lib);
        if (print.cxx23 and print.core_features) show("C++23 CORE", cxx23_core);
        if (print.cxx23 and print.lib_features ) show("C++23 LIB" , cxx23_lib);
        if (print.cxx26 and print.core_features) show("C++26 CORE", cxx26_core);
        if (print.cxx26 and print.lib_features ) show("C++26 LIB" , cxx26_lib);
        if (print.cxx29 and print.core_features) show("C++29 CORE", cxx29_core);
        if (print.cxx29 and print.lib_features ) show("C++29 LIB" , cxx29_lib);
    }
    if (print.latest_revisions) show_latest();
    if (print.attributes) show("ATTRIBUTES", attributes);
    if (print.compiler_specific) show_compiler_specific_info();
}

```

Possible output:

```
C++11 CORE (20/20)
__cpp_alias_templates                         2007-04  =  2007-04
__cpp_attributes                              2008-09  =  2008-09
__cpp_constexpr                               2022-11  >  2007-04
__cpp_constexpr_in_decltype                   2017-11  =  2017-11
... truncated ...
 
C++14 CORE (9/9)
__cpp_aggregate_nsdmi                         2013-04  =  2013-04
__cpp_binary_literals                         2013-04  =  2013-04
__cpp_constexpr                               2022-11  >  2013-04
... truncated ...
 
C++14 LIB (20/20)
__cpp_lib_chrono_udls                         2013-04  =  2013-04
__cpp_lib_complex_udls                        2013-09  =  2013-09
__cpp_lib_exchange_function                   2013-04  =  2013-04
... truncated ...
 
... truncated ...
 
C++23 LIB (43/64)
__cpp_lib_adaptor_iterator_pair_constructor   2021-06  =  2021-06
__cpp_lib_algorithm_iterator_requirements     -------  <  2022-07
__cpp_lib_allocate_at_least                   -------  <  2023-02
__cpp_lib_associative_heterogeneous_erasure   -------  <  2021-10
__cpp_lib_barrier                             2019-07  <  2023-02
... truncated ...
 
ALL CORE MACROS UP TO C++26 (60/71)
__cpp_aggregate_bases                         2016-03  =  2016-03
__cpp_aggregate_nsdmi                         2013-04  =  2013-04
__cpp_aggregate_paren_init                    2019-02  =  2019-02
__cpp_alias_templates                         2007-04  =  2007-04
... truncated ...
 
ALL LIB MACROS UP TO C++26 (158/246)
__cpp_lib_adaptor_iterator_pair_constructor   2021-06  =  2021-06
__cpp_lib_addressof_constexpr                 2016-03  =  2016-03
__cpp_lib_algorithm_iterator_requirements     -------  <  2022-07
__cpp_lib_allocate_at_least                   -------  <  2023-02
__cpp_lib_allocator_traits_is_always_equal    2014-11  =  2014-11
... truncated ...
 
ATTRIBUTES (9/11)
assume                                        2022-07  =  2022-07
carries_dependency                            -------  <  2008-09
deprecated                                    2013-09  =  2013-09
fallthrough                                   2016-03  =  2016-03
... truncated ...
 
Compiler specific macros:
__cplusplus                                   202302L
__GNUG__                                      14
__GNUC_MINOR__                                2
__GNUC_PATCHLEVEL__                           0

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P2552R3 | C++20 | `__has_cpp_attribute` must expand to a non-zero value for standard attributes | can expand to ​0​ |

### See also

|  |  |
| --- | --- |
| ****Library feature-test macros**** (C++20) | defined in the header <version> |
| ****Predefined Macro Symbols**** | |
| ****Macro Symbol Index**** | |

### External links

|  |  |
| --- | --- |
| 1. | The official document on Feature-Test Recommendations |
| 2. | Source code to dump compiler features |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/feature_test&oldid=179440>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 January 2025, at 14:53.