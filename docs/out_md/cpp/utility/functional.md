# Function objects

From cppreference.com
< cpp‎ | utility
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | Type support (basic types, RTTI) | | | | | | Library feature-test macros (C++20) | | | | | | Program utilities | | | | | | Coroutine support (C++20) | | | | | | Variadic functions | | | | | | is_constant_evaluated(C++20) | | | | | | is_within_lifetime(C++26) | | | | | | initializer_list(C++11) | | | | | | source_location(C++20) | | | | | | Three-way comparison | | | | | | three_way_comparablethree_way_comparable_with(C++20)(C++20) | | | | | | strong_ordering(C++20) | | | | | | weak_ordering(C++20) | | | | | | partial_ordering(C++20) | | | | | | common_comparison_category(C++20) | | | | | | compare_three_way_result(C++20) | | | | | | compare_three_way(C++20) | | | | | | strong_order(C++20) | | | | | | weak_order(C++20) | | | | | | partial_order(C++20) | | | | | | compare_strong_order_fallback(C++20) | | | | | | compare_weak_order_fallback(C++20) | | | | | | compare_partial_order_fallback(C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_eqis_ltis_lteq(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | is_neqis_gtis_gteq(C++20)(C++20)(C++20) | | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Function objects**** | | | | | | Bit manipulation (C++20) | | | | | | bitset | | | | | | hash(C++11) | | | | | | | Relational operators (deprecated in C++20) | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator!=rel_ops::operator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | rel_ops::operator<=rel_ops::operator>= | | | | | | | Integer comparison functions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_equalcmp_lesscmp_less_than(C++20)(C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | cmp_not_equalcmp_greatercmp_greater_than(C++20)(C++20)(C++20) | | | | | | | in_range(C++20) | | | | | | Swap and type operations | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | swap | | | | | | ranges::swap(C++20) | | | | | | exchange(C++14) | | | | | | declval(C++11) | | | | | | to_underlying(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | forward(C++11) | | | | | | forward_like(C++23) | | | | | | move(C++11) | | | | | | move_if_noexcept(C++11) | | | | | | as_const(C++17) | | | | | | | Common vocabulary types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | pair | | | | | | tuple(C++11) | | | | | | optional(C++17) | | | | | | any(C++17) | | | | | | variant(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | tuple_size(C++11) | | | | | | tuple_element(C++11) | | | | | | apply(C++17) | | | | | | make_from_tuple(C++17) | | | | | | expected(C++23) | | | | | | |  | | | | | |  | | | | | |  | | | | | | |

****Function objects****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function wrappers | | | | | | function(C++11) | | | | | | move_only_function(C++23) | | | | | | copyable_function(C++26) | | | | | | function_ref(C++26) | | | | | | mem_fn(C++11) | | | | | | bad_function_call(C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Partial function application | | | | | | bind_frontbind_back(C++20)(C++23) | | | | | | bind(C++11) | | | | | | is_bind_expression(C++11) | | | | | | is_placeholder(C++11) | | | | | | _1, _2, _3, ...(C++11) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Function invocation | | | | | | invokeinvoke_r(C++17)(C++23) | | | | | | Identity function object | | | | | | identity(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Reference wrappers | | | | | | reference_wrapper(C++11) | | | | | | refcref(C++11)(C++11) | | | | | | unwrap_referenceunwrap_ref_decay(C++20)(C++20) | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operator wrappers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | plus | | | | | | minus | | | | | | negate | | | | | | multiplies | | | | | | divides | | | | | | modulus | | | | | | bit_and | | | | | | bit_or | | | | | | bit_not(C++14) | | | | | | bit_xor | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_to | | | | | | not_equal_to | | | | | | greater | | | | | | less | | | | | | greater_equal | | | | | | less_equal | | | | | | logical_and | | | | | | logical_or | | | | | | logical_not | | | | | |  | | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Transparent operator wrappers | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | plus<>(C++14) | | | | | | minus<>(C++14) | | | | | | negate<>(C++14) | | | | | | multiplies<>(C++14) | | | | | | divides<>(C++14) | | | | | | modulus<>(C++14) | | | | | | bit_and<>(C++14) | | | | | | bit_or<>(C++14) | | | | | | bit_not<>(C++14) | | | | | | bit_xor<>(C++14) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | equal_to<>(C++14) | | | | | | not_equal_to<>(C++14) | | | | | | greater<>(C++14) | | | | | | less<>(C++14) | | | | | | greater_equal<>(C++14) | | | | | | less_equal<>(C++14) | | | | | | logical_and<>(C++14) | | | | | | logical_or<>(C++14) | | | | | | logical_not<>(C++14) | | | | | |  | | | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Negators | | | | | | not_fn(C++17) | | | | | | Searchers | | | | | | default_searcher(C++17) | | | | | | boyer_moore_searcher(C++17) | | | | | | boyer_moore_horspool_searcher(C++17) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Constrained comparators | | | | | | ranges::equal_to(C++20) | | | | | | ranges::not_equal_to(C++20) | | | | | | ranges::greater(C++20) | | | | | | ranges::less(C++20) | | | | | | ranges::greater_equal(C++20) | | | | | | ranges::less_equal(C++20) | | | | | | compare_three_way(C++20) | | | | | |
| Old binders and adaptors | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | unary_function(until C++17\*) | | | | | | binary_function(until C++17\*) | | | | | | ptr_fun(until C++17\*) | | | | | | pointer_to_unary_function(until C++17\*) | | | | | | pointer_to_binary_function(until C++17\*) | | | | | | mem_fun(until C++17\*) | | | | | | mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t(until C++17\*)(until C++17\*)(until C++17\*)(until C++17\*) | | | | | | not1(until C++20\*) | | | | | | not2(until C++20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | binder1stbinder2nd(until C++17\*)(until C++17\*) | | | | | | bind1stbind2nd(until C++17\*)(until C++17\*) | | | | | |  | | | | | | mem_fun_ref(until C++17\*) | | | | | | mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t(until C++17\*)(until C++17\*)(until C++17\*)(until C++17\*) | | | | | | unary_negate(until C++20\*) | | | | | | binary_negate(until C++20\*) | | | | | |

A **function object** is any object for which the function call operator is defined. C++ provides many built-in function objects as well as support for creation and manipulation of new function objects.

### Function invocation

|  |  |  |  |
| --- | --- | --- | --- |
| The exposition-only operation `INVOKE`(f, arg_0, arg_1, arg_2, ..., arg_N) is defined as follows:  Let type `Obj` be the unqualified type of arg_0 (i.e., std::remove_cv<std::remove_reference<decltype(arg_0)>::type>::type)   - If f is a pointer to member function of class `C`, then `INVOKE`(f, obj, arg_1, arg_2, ..., arg_N) is equivalent to:   - If std::is_same<C, Obj>::value || std::is_base_of<C, Obj>::value is true   - (obj.\*f)(arg_1, arg_2, ..., arg_N) (invoke the member function on the object).   - If `Obj` is a specialization of std::reference_wrapper   - (obj.get().\*f)(arg_1, arg_2, ..., arg_N) (invoke the member function on the specially referred object).   - Otherwise   - ((\*obj).\*f)(arg_1, arg_2, ..., arg_N) (invoke the member function on the dereferenced object).   - Otherwise, if N == 0 and f is a pointer to data member of class `C`, then `INVOKE`(mptr, obj) is equivalent to:   - If std::is_same<C, Obj>::value || std::is_base_of<C, Obj>::value is true   - obj.\*mptr (access the data member of the object).   - If `Obj` is a specialization of std::reference_wrapper   - obj.get().\*mptr (access the data member of the specially referred object).   - Otherwise   - (\*obj).\*mptr (access the data member of the dereferenced object).   - Otherwise   - `INVOKE`(f, arg_0, arg_1, arg_2, ..., arg_N) is equivalent to f(arg_0, arg_1, arg_2, ..., arg_N) (invoke the callable).  The exposition-only operation `INVOKE<R>`(f, arg_0, arg_1, arg_2, ..., arg_N) is defined as follows:   - If `R` is (possibly cv-qualified) void   - static_cast<void>(`INVOKE`(f, arg_0, arg_1, arg_2, ..., arg_N)).   - Otherwise   - `INVOKE`(f, arg_0, arg_1, arg_2, ..., arg_N) implicitly converted to `R`.   |  |  | | --- | --- | | Let type `Actual` be decltype(`INVOKE`(f, arg_0, arg_1, arg_2, ..., arg_N))   - If std::reference_converts_from_temporary_v <R, Actual> is true   - `INVOKE<R>`(f, arg_0, arg_1, arg_2, ..., arg_N) is ill-formed. | (since C++23) | | (since C++11) |

`std::invoke` and `std::invoke_r`(since C++23) can invoke any Callable object with given arguments according to the rules of `INVOKE` and `INVOKE<R>`(since C++23).

|  |  |
| --- | --- |
| invokeinvoke_r(C++17)(C++23) | invokes any Callable object with given arguments and possibility to specify return type(since C++23)   (function template) |

### Function wrappers

These polymorphic wrapper classes provide support for storing arbitrary function objects.

|  |  |
| --- | --- |
| function(C++11) | copyable wrapper of any copy constructible callable object   (class template) |
| move_only_function(C++23) | move-only wrapper of any callable object that supports qualifiers in a given call signature   (class template) |
| copyable_function(C++26) | copyable wrapper of any copy constructible callable object that supports qualifiers in a given call signature   (class template) |
| function_ref(C++26) | non-owning wrapper of any callable object   (class template) |
| bad_function_call(C++11) | the exception thrown when invoking an empty std::function   (class) |
| mem_fn(C++11) | creates a function object out of a pointer to a member   (function template) |

### Identity

std::identity is the identity function object: it returns its argument unchanged.

|  |  |
| --- | --- |
| identity(C++20) | function object that returns its argument unchanged   (class) |

### Partial function application

std::bind_front and std::bind provide support for partial function application, i.e. binding arguments to functions to produce new functions.

|  |  |
| --- | --- |
| bind_frontbind_back(C++20)(C++23) | bind a variable number of arguments, in order, to a function object   (function template) |
| bind(C++11) | binds one or more arguments to a function object   (function template) |
| is_bind_expression(C++11) | indicates that an object is `std::bind` expression or can be used as one   (class template) |
| is_placeholder(C++11) | indicates that an object is a standard placeholder or can be used as one   (class template) |
| Defined in namespace `std::placeholders` | |
| _1, _2, _3, _4, ...(C++11) | placeholders for the unbound arguments in a `std::bind` expression   (constant) |

### Negators

std::not_fn creates a function object that negates the result of the callable object passed to it.

|  |  |
| --- | --- |
| not_fn(C++17) | creates a function object that returns the complement of the result of the function object it holds   (function template) |

### Searchers

Searchers implementing several string searching algorithms are provided and can be used either directly or with std::search.

|  |  |
| --- | --- |
| default_searcher(C++17) | standard C++ library search algorithm implementation   (class template) |
| boyer_moore_searcher(C++17) | Boyer-Moore search algorithm implementation   (class template) |
| boyer_moore_horspool_searcher(C++17) | Boyer-Moore-Horspool search algorithm implementation   (class template) |

### Reference wrappers

Reference wrappers allow reference arguments to be stored in copyable function objects:

|  |  |
| --- | --- |
| reference_wrapper(C++11) | CopyConstructible and CopyAssignable reference wrapper   (class template) |
| refcref(C++11)(C++11) | creates a std::reference_wrapper with a type deduced from its argument   (function template) |
| unwrap_referenceunwrap_ref_decay(C++20)(C++20) | get the reference type wrapped in std::reference_wrapper   (class template) |

|  |  |
| --- | --- |
| Transparent function objects Associative containers and unordered associative containers(since C++20) provide heterogeneous lookup and erasure(since C++23) operations, but they are only enabled if the supplied function object type `T` is **transparent** ﻿: the qualified identifier `T::is_transparent` is valid and denotes a type.  All transparent function object types in the standard library defines a nested type `is_transparent`. However, user-defined transparent function object types do not need to directly provide `is_transparent` as a nested type: it can be defined in a base class, as long as `T::is_transparent` satisfies the transparent requirement stated above. | (since C++14) |

### Operator function objects

C++ defines the following function objects that represent common arithmetic and logical operations.

|  |  |
| --- | --- |
| The void specializations deduce their parameter types and return types from their arguments, they are all transparent. | (since C++14) |

|  |  |
| --- | --- |
| Arithmetic operations | |
| plus | function object implementing x + y   (class template) |
| plus<void>(C++14) | function object implementing x + y deducing parameter and return types   (class template specialization) |
| minus | function object implementing x - y   (class template) |
| minus<void>(C++14) | function object implementing x - y deducing parameter and return types   (class template specialization) |
| multiplies | function object implementing x \* y   (class template) |
| multiplies<void>(C++14) | function object implementing x \* y deducing parameter and return types   (class template specialization) |
| divides | function object implementing x / y   (class template) |
| divides<void>(C++14) | function object implementing x / y deducing parameter and return types   (class template specialization) |
| modulus | function object implementing x % y   (class template) |
| modulus<void>(C++14) | function object implementing x % y deducing parameter and return types   (class template specialization) |
| negate | function object implementing -x   (class template) |
| negate<void>(C++14) | function object implementing -x deducing parameter and return types   (class template specialization) |
| Comparisons | |
| equal_to | function object implementing x == y   (class template) |
| equal_to<void>(C++14) | function object implementing x == y deducing parameter and return types   (class template specialization) |
| not_equal_to | function object implementing x != y   (class template) |
| not_equal_to<void>(C++14) | function object implementing x != y deducing parameter and return types   (class template specialization) |
| greater | function object implementing x > y   (class template) |
| greater<void>(C++14) | function object implementing x > y deducing parameter and return types   (class template specialization) |
| less | function object implementing x < y   (class template) |
| less<void>(C++14) | function object implementing x < y deducing parameter and return types   (class template specialization) |
| greater_equal | function object implementing x >= y   (class template) |
| greater_equal<void>(C++14) | function object implementing x >= y deducing parameter and return types   (class template specialization) |
| less_equal | function object implementing x <= y   (class template) |
| less_equal<void>(C++14) | function object implementing x <= y deducing parameter and return types   (class template specialization) |
| Logical operations | |
| logical_and | function object implementing x && y   (class template) |
| logical_and<void>(C++14) | function object implementing x && y deducing parameter and return types   (class template specialization) |
| logical_or | function object implementing x || y   (class template) |
| logical_or<void>(C++14) | function object implementing x || y deducing parameter and return types   (class template specialization) |
| logical_not | function object implementing !x   (class template) |
| logical_not<void>(C++14) | function object implementing !x deducing parameter and return types   (class template specialization) |
| Bitwise operations | |
| bit_and | function object implementing x & y   (class template) |
| bit_and<void>(C++14) | function object implementing x & y deducing parameter and return types   (class template specialization) |
| bit_or | function object implementing x | y   (class template) |
| bit_or<void>(C++14) | function object implementing x | y deducing parameter and return types   (class template specialization) |
| bit_xor | function object implementing x ^ y   (class template) |
| bit_xor<void>(C++14) | function object implementing x ^ y deducing parameter and return types   (class template specialization) |
| bit_not(C++14) | function object implementing ~x   (class template) |
| bit_not<void>(C++14) | function object implementing ~x deducing parameter and return types   (class template specialization) |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Constrained comparison function objects The following comparison function objects are constrained.   - The equality operators (`ranges::equal_to` and `ranges::not_equal_to`) require the types of the arguments to satisfy `equality_comparable_with`. - The relational operators (`ranges::less`, `ranges::greater`, `ranges::less_equal`, and `ranges::greater_equal`) require the types of the arguments to satisfy `totally_ordered_with`. - The three-way comparison operator (`compare_three_way`) requires the type to model `three_way_comparable_with`.   All these function objects are transparent.   |  |  | | --- | --- | | ranges::equal_to(C++20) | constrained function object implementing x == y   (class) | | ranges::not_equal_to(C++20) | constrained function object implementing x != y   (class) | | ranges::less(C++20) | constrained function object implementing x < y   (class) | | ranges::greater(C++20) | constrained function object implementing x > y   (class) | | ranges::less_equal(C++20) | constrained function object implementing x <= y   (class) | | ranges::greater_equal(C++20) | constrained function object implementing x >= y   (class) | | compare_three_way(C++20) | constrained function object implementing x <=> y   (class) | | (since C++20) |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Helper items Following exposition-only items are used for several components in the standard library but they are not part of the interface of the standard library.   |  |  |  | | --- | --- | --- | | template< class Fn, class... Args >  concept /\*callable\*/ =      requires (Fn&& fn, Args&&... args) {          std::forward<Fn>(fn)(std::forward<Args>(args)...); }; | (1) | (exposition only\*) | | template< class Fn, class... Args >  concept /\*nothrow-callable\*/ =      /\*callable\*/<Fn, Args...> &&      requires (Fn&& fn, Args&&... args) {          { std::forward<Fn>(fn)(std::forward<Args>(args)...) } noexcept; }; | (2) | (exposition only\*) | | template< class Fn, class... Args >  using /\*call-result-t\*/ = decltype(std::declval<Fn>()(std::declval<Args>()...)); | (3) | (exposition only\*) | | template< const auto& T >  using /\*decayed-typeof\*/ = decltype(auto(T)); | (4) | (exposition only\*) | |  |  |  | | (since C++26) |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Old binders and adaptors Several utilities that provided early functional support are deprecated and removed:   |  |  | | --- | --- | | Base | | | unary_function(deprecated in C++11)(removed in C++17) | adaptor-compatible unary function base class   (class template) | | binary_function(deprecated in C++11)(removed in C++17) | adaptor-compatible binary function base class   (class template) | | Binders | | | binder1stbinder2nd(deprecated in C++11)(removed in C++17) | function object holding a binary function and one of its arguments   (class template) | | bind1stbind2nd(deprecated in C++11)(removed in C++17) | binds one argument to a binary function   (function template) | | Function adaptors | | | pointer_to_unary_function(deprecated in C++11)(removed in C++17) | adaptor-compatible wrapper for a pointer to unary function   (class template) | | pointer_to_binary_function(deprecated in C++11)(removed in C++17) | adaptor-compatible wrapper for a pointer to binary function   (class template) | | ptr_fun(deprecated in C++11)(removed in C++17) | creates an adaptor-compatible function object wrapper from a pointer to function   (function template) | | mem_fun_tmem_fun1_tconst_mem_fun_tconst_mem_fun1_t(deprecated in C++11)(removed in C++17) | wrapper for a pointer to nullary or unary member function, callable with a pointer to object   (class template) | | mem_fun(deprecated in C++11)(removed in C++17) | creates a wrapper from a pointer to member function, callable with a pointer to object   (function template) | | mem_fun_ref_tmem_fun1_ref_tconst_mem_fun_ref_tconst_mem_fun1_ref_t(deprecated in C++11)(removed in C++17) | wrapper for a pointer to nullary or unary member function, callable with a reference to object   (class template) | | mem_fun_ref(deprecated in C++11)(removed in C++17) | creates a wrapper from a pointer to member function, callable with a reference to object   (function template) | | unary_negate(deprecated in C++17)(removed in C++20) | wrapper function object returning the complement of the unary predicate it holds   (class template) | | binary_negate(deprecated in C++17)(removed in C++20) | wrapper function object returning the complement of the binary predicate it holds   (class template) | | not1(deprecated in C++17)(removed in C++20) | constructs custom std::unary_negate object   (function template) | | not2(deprecated in C++17)(removed in C++20) | constructs custom std::binary_negate object   (function template) | | (until C++20) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 185 | C++98 | using function objects improved the program efficiency | removed the claim |
| LWG 660 | C++98 | function objects for bitwise operations are missing | added |
| LWG 2149 | C++98 | function objects taking one or two arguments were required to provide nested types to denote the argument and result types | not required |
| LWG 2219 | C++11 | `INVOKE` did not handle std::reference_wrapper correctly | handles correctly |
| LWG 2420 | C++11 | `INVOKE<R>` did not discard the return value if `R` is void | discards the return value in this case |
| LWG 2926 (P0604R0) | C++11 | the syntax of the `INVOKE` operation with a return type `R` was `INVOKE`(f, t1, t2, ..., tN, R) | changed to `INVOKE<R>`(f, t1, t2, ..., tN) |
| LWG 3655 | C++11 | `INVOKE` did not handle unions correctly due to the resolution of LWG issue 2219 | handles correctly |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/utility/functional&oldid=173965>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 July 2024, at 06:21.