# Parallelized version of existing algorithms (parallelism TS)

From cppreference.com
< cpp‎ | experimental‎ | parallelism
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Extensions for parallelism

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Execution policies") | | | | |
| parallel::execution_policy") | | | | |
| parallel::sequential_execution_policyparallel::parallel_execution_policyparallel::parallel_vector_execution_policy | | | | |
| parallel::seqparallel::parparallel::par_vec | | | | |
| Parallel algorithms") | | | | |
| Parallel exceptions | | | | |
| parallel::exception_list") | | | | |
| ****Parallelized version of existing algorithms**** | | | | |
| New algorithms | | | | |
| parallel::for_eachparallel::for_each_n") | | | | |
| parallel::reduce | | | | |
| parallel::exclusive_scan") | | | | |
| parallel::inclusive_scan") | | | | |
| parallel::transform_reduce | | | | |
| parallel::transform_exclusive_scan") | | | | |
| parallel::transform_inclusive_scan") | | | | |

The C++ Extensions for Parallelism TS provides parallelized versions of the following 69 existing algorithms. Each of the following parallelized algorithms

- is declared in the `std::experimental::parallel` namespace,
- does not participate in overload resolution unless `is_execution_policy<std::decay_t<ExecutionPolicy>>::value` is `true`, and
- has the same semantics as the corresponding existing algorithm in the C++ standard library, except as noted in the page on parallel algorithms").

|  |  |
| --- | --- |
| Non-modifying sequence operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  bool all_of( ExecutionPolicy&& policy, InputIt first, InputIt last,               UnaryPred p ); | std::all_of |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  bool any_of( ExecutionPolicy&& policy, InputIt first, InputIt last,               UnaryPred p ); | std::any_of |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  bool none_of( ExecutionPolicy&& policy, InputIt first, InputIt last,                UnaryPred p ); | std::none_of |
| template< class ExecutionPolicy, class InputIt, class T >  typename iterator_traits<InputIt>::difference_type      count( ExecutionPolicy&& policy, InputIt first, InputIt last,              const T &value ); | std::count |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  typename iterator_traits<InputIt>::difference_type      count_if( ExecutionPolicy&& policy, InputIt first, InputIt last,                UnaryPred p ); | std::count_if |
| template< class ExecutionPolicy, class InputIt1, class InputIt2 >  std::pair<InputIt1,InputIt2>      mismatch( ExecutionPolicy&& policy,                InputIt1 first1, InputIt1 last1,                InputIt2 first2 );    template< class ExecutionPolicy, class InputIt1,             class InputIt2, class BinaryPred >  std::pair<InputIt1,InputIt2>      mismatch( ExecutionPolicy&& policy,                InputIt1 first1, InputIt1 last1,                InputIt2 first2, BinaryPred p );    template< class ExecutionPolicy, class InputIt1, class InputIt2 >  std::pair<InputIt1,InputIt2>      mismatch( ExecutionPolicy&& policy,                InputIt1 first1, InputIt1 last1,                InputIt2 first2, InputIt2 last2 );    template< class ExecutionPolicy, class InputIt1,            class InputIt2, class BinaryPred >  std::pair<InputIt1,InputIt2>      mismatch( ExecutionPolicy&& policy,                InputIt1 first1, InputIt1 last1,                InputIt2 first2, InputIt2 last2, BinaryPred p ); | std::mismatch |
| template< class ExecutionPolicy, class InputIt1, class InputIt2 >  bool equal( ExecutionPolicy&& policy,              InputIt1 first1, InputIt1 last1,              InputIt2 first2 );    template< class ExecutionPolicy, class InputIt1,             class InputIt2, class BinaryPred >  bool equal( ExecutionPolicy&& policy,              InputIt1 first1, InputIt1 last1,              InputIt2 first2, BinaryPred p );    template< class ExecutionPolicy, class InputIt1, class InputIt2 >  bool equal( ExecutionPolicy&& policy,              InputIt1 first1, InputIt1 last1,              InputIt2 first2, InputIt2 last2 );    template< class ExecutionPolicy, class InputIt1,            class InputIt2, class BinaryPred >  bool equal( ExecutionPolicy&& policy,              InputIt1 first1, InputIt1 last1,               InputIt2 first2, InputIt2 last2, BinaryPred p ); | std::equal |
| template< class ExecutionPolicy, class InputIt, class T >  InputIt find( ExecutionPolicy&& policy, InputIt first, InputIt last,                const T& value ); | std::find |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  InputIt find_if( ExecutionPolicy&& policy, InputIt first, InputIt last,                   UnaryPred p ); | std::find_if |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  InputIt find_if_not( ExecutionPolicy&& policy,                       InputIt first, InputIt last,                        UnaryPred p ); | std::find_if_not |
| template< class ExecutionPolicy, class ForwardIt1, class ForwardIt2 >  ForwardIt1 find_end( ExecutionPolicy&& policy,                       ForwardIt1 first, ForwardIt1 last,                       ForwardIt2 s_first, ForwardIt2 s_last );            template< class ExecutionPolicy, class ForwardIt1,            class ForwardIt2, class BinaryPred >  ForwardIt1 find_end( ExecutionPolicy&& policy,                       ForwardIt1 first, ForwardIt1 last,                       ForwardIt2 s_first, ForwardIt2 s_last,                       BinaryPred p ); | std::find_end |
| template< class ExecutionPolicy, class InputIt, class ForwardIt >  InputIt find_first_of( ExecutionPolicy&& policy,                         InputIt first, InputIt last,                         ForwardIt s_first, ForwardIt s_last );    template< class ExecutionPolicy, class InputIt,            class ForwardIt, class BinaryPred >  InputIt find_first_of( ExecutionPolicy&& policy,                         InputIt first, InputIt last,                         ForwardIt s_first, ForwardIt s_last,                         BinaryPred p ); | std::find_first_of |
| template< class ExecutionPolicy, class ForwardIt >  ForwardIt adjacent_find( ExecutionPolicy&& policy,                            ForwardIt first, ForwardIt last );            template< class ExecutionPolicy, class ForwardIt, class BinaryPred >  ForwardIt adjacent_find( ExecutionPolicy&& policy,                            ForwardIt first, ForwardIt last,                           BinaryPred p ); | std::adjacent_find |
| template< class ExecutionPolicy, class ForwardIt1, class ForwardIt2 >  ForwardIt1 search( ExecutionPolicy&& policy,                      ForwardIt1 first, ForwardIt1 last,                     ForwardIt2 s_first, ForwardIt2 s_last );    template< class ExecutionPolicy, class ForwardIt1,            class ForwardIt2, class BinaryPred >  ForwardIt1 search( ExecutionPolicy&& policy,                     ForwardIt1 first, ForwardIt1 last,                     ForwardIt2 s_first, ForwardIt2 s_last,                     BinaryPred p ); | std::search |
| template< class ExecutionPolicy, class ForwardIt, class Size, class T >  ForwardIt search_n( ExecutionPolicy&& policy,                      ForwardIt first, ForwardIt last,                      Size count, const T& value );            template< class ExecutionPolicy, class ForwardIt,            class Size, class T, class BinaryPred >  ForwardIt search_n( ExecutionPolicy&& policy,                      ForwardIt first, ForwardIt last,                      Size count, const T& value,                       BinaryPred p ); | std::search_n |
| Modifying sequence operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class InputIt, class OutputIt >  OutputIt copy( ExecutionPolicy&& policy, InputIt first, InputIt last,                  OutputIt d_first ); | std::copy |
| template< class ExecutionPolicy, class InputIt,  class OutputIt, class UnaryPred >  OutputIt copy_if( ExecutionPolicy&& policy, InputIt first, InputIt last,                    OutputIt d_first, UnaryPred pred ); | std::copy_if |
| template< class ExecutionPolicy, class InputIt,  class Size, class OutputIt >  OutputIt copy_n( ExecutionPolicy&& policy, InputIt first, Size count,                   OutputIt result ); | std::copy_n |
| template< class ExecutionPolicy, class InputIt, class OutputIt >  OutputIt move( ExecutionPolicy&& policy, InputIt first, InputIt last,                 OutputIt d_first ); | std::move |
| template< class ExecutionPolicy, class ForwardIt, class T >  void fill( ExecutionPolicy&& policy, ForwardIt first, ForwardIt last,             const T& value ); | std::fill |
| template< class ExecutionPolicy, class OutputIt, class Size, class T >  OutputIt fill_n( ExecutionPolicy&& policy, OutputIt first, Size count,                   const T& value ); | std::fill_n |
| template< class ExecutionPolicy, class InputIt,   class OutputIt, class UnaryOp >  OutputIt transform( ExecutionPolicy&& policy,                       InputIt first1, InputIt last1,                       OutputIt d_first, UnaryOp unary_op );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class OutputIt, class BinaryOp >  OutputIt transform( ExecutionPolicy&& policy,                       InputIt1 first1, InputIt1 last1,                       InputIt2 first2, OutputIt d_first,                      BinaryOp binary_op ); | std::transform |
| template< class ExecutionPolicy, class ForwardIt, class Generator >  void generate( ExecutionPolicy&& policy, ForwardIt first, ForwardIt last,                 Generator g ); | std::generate |
| template< class ExecutionPolicy, class OutputIt,  class Size, class Generator >  OutputIt generate_n( ExecutionPolicy&& policy, OutputIt first,                       Size count, Generator g ); | std::generate_n |
| template< class ExecutionPolicy, class ForwardIt, class T >  ForwardIt remove( ExecutionPolicy&& policy,                    ForwardIt first, ForwardIt last, const T& value ); | std::remove |
| template< class ExecutionPolicy, class ForwardIt, class UnaryPred >  ForwardIt remove_if( ExecutionPolicy&& policy,                        ForwardIt first, ForwardIt last, UnaryPred p ); | std::remove_if |
| template< class ExecutionPolicy, class InputIt, class OutputIt, class T >  OutputIt remove_copy( ExecutionPolicy&& policy,                         InputIt first, InputIt last,                         OutputIt d_first, const T& value ); | std::remove_copy |
| template< class ExecutionPolicy, class InputIt,  class OutputIt, class UnaryPred >  OutputIt remove_copy_if( ExecutionPolicy&& policy,                            InputIt first, InputIt last,                            OutputIt d_first, UnaryPred p ); | std::remove_copy_if |
| template< class ExecutionPolicy, class ForwardIt, class T >  void replace( ExecutionPolicy&& policy,                ForwardIt first, ForwardIt last,                const T& old_value, const T& new_value ); | std::replace |
| template< class ExecutionPolicy, class ForwardIt,  class UnaryPred, class T >  void replace_if( ExecutionPolicy&& policy,                   ForwardIt first, ForwardIt last,                   UnaryPred p, const T& new_value ); | std::replace_if |
| template< class ExecutionPolicy, class InputIt, class OutputIt, class T >  OutputIt replace_copy( ExecutionPolicy&& policy,                          InputIt first, InputIt last, OutputIt d_first,                         const T& old_value, const T& new_value ); | std::replace_copy |
| template< class ExecutionPolicy, class InputIt, class OutputIt,  class UnaryPred, class T >  OutputIt replace_copy_if( ExecutionPolicy&& policy,                             InputIt first, InputIt last, OutputIt d_first,                            UnaryPred p, const T& new_value ); | std::replace_copy_if |
| template< class ExecutionPolicy, class ForwardIt1, class ForwardIt2 >  ForwardIt2 swap_ranges( ExecutionPolicy&& policy,                          ForwardIt1 first1, ForwardIt1 last1,                          ForwardIt2 first2 ); | std::swap_ranges |
| template< class ExecutionPolicy, class BidirIt >  void reverse( ExecutionPolicy&& policy, BidirIt first, BidirIt last ); | std::reverse |
| template< class ExecutionPolicy, class BidirIt, class OutputIt >  OutputIt reverse_copy( ExecutionPolicy&& policy,                          BidirIt first, BidirIt last, OutputIt d_first ); | std::reverse_copy |
| template< class ExecutionPolicy, class ForwardIt >  ForwardIt rotate( ExecutionPolicy&& policy,                     ForwardIt first, ForwardIt n_first, ForwardIt last ); | std::rotate |
| template< class ExecutionPolicy, class ForwardIt, class OutputIt >  OutputIt rotate_copy( ExecutionPolicy&& policy,                         ForwardIt first, ForwardIt n_first, ForwardIt last,                        OutputIt d_first ); | std::rotate_copy |
| template< class ExecutionPolicy, class ForwardIt >  ForwardIt unique( ExecutionPolicy&& policy,                     ForwardIt first, ForwardIt last );    template< class ExecutionPolicy, class ForwardIt, class BinaryPred >  ForwardIt unique( ExecutionPolicy&& policy,                     ForwardIt first, ForwardIt last, BinaryPred p ); | std::unique |
| template< class ExecutionPolicy, class InputIt, class OutputIt >  OutputIt unique_copy( ExecutionPolicy&& policy,                         InputIt first, InputIt last,                        OutputIt d_first );    template< class ExecutionPolicy, class InputIt,            class OutputIt, class BinaryPred >  OutputIt unique_copy( ExecutionPolicy&& policy,                         InputIt first, InputIt last,                        OutputIt d_first, BinaryPred p ); | std::unique_copy |
| Partitioning operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class InputIt, class UnaryPred >  bool is_partitioned( ExecutionPolicy&& policy,                        InputIt first, InputIt last, UnaryPred p ); | std::is_partitioned |
| template< class ExecutionPolicy, class ForwardIt, class UnaryPred >  ForwardIt partition( ExecutionPolicy&& policy,                        ForwardIt first, ForwardIt last, UnaryPred p ); | std::partition |
| template< class ExecutionPolicy, class InputIt, class OutputIt1,  class OutputIt2, class UnaryPred >  std::pair<OutputIt1, OutputIt2>       partition_copy( ExecutionPolicy&& policy,                        InputIt first, InputIt last,                       OutputIt1 d_first_true, OutputIt2 d_first_false,                       UnaryPred p ); | std::partition_copy |
| template< class ExecutionPolicy, class BidirIt, class UnaryPred >  BidirIt stable_partition( ExecutionPolicy&& policy,                             BidirIt first, BidirIt last, UnaryPred p ); | std::stable_partition |
| Sorting operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class ForwardIt >  bool is_sorted( ExecutionPolicy&& policy,                  ForwardIt first, ForwardIt last );    template< class ExecutionPolicy, class ForwardIt, class Compare >  bool is_sorted( ExecutionPolicy&& policy,                   ForwardIt first, ForwardIt last, Compare cmp ); | std::is_sorted |
| template< class ExecutionPolicy, class ForwardIt >  ForwardIt is_sorted_until( ExecutionPolicy&& policy,                             ForwardIt first, ForwardIt last );    template< class ExecutionPolicy, class ForwardIt, class Compare >  ForwardIt is_sorted_until( ExecutionPolicy&& policy,                              ForwardIt first, ForwardIt last,                              Compare cmp ); | std::is_sorted_until |
| template< class ExecutionPolicy, class RandomIt >  void sort( ExecutionPolicy&& policy, RandomIt first, RandomIt last );    template< class ExecutionPolicy, class RandomIt, class Compare >  void sort( ExecutionPolicy&& policy,              RandomIt first, RandomIt last, Compare cmp ); | std::sort |
| template< class ExecutionPolicy, class RandomIt >  void partial_sort( ExecutionPolicy&& policy,                     RandomIt first, RandomIt middle, RandomIt last );    template< class ExecutionPolicy, class RandomIt, class Compare >  void partial_sort( ExecutionPolicy&& policy,                      RandomIt first, RandomIt middle, RandomIt last,                     Compare cmp ); | std::partial_sort |
| template< class ExecutionPolicy, class InputIt, class RandomIt >  RandomIt partial_sort_copy( ExecutionPolicy&& policy,                               InputIt first, InputIt last,                              RandomIt d_first, RandomIt d_last );    template< class ExecutionPolicy, class InputIt,            class RandomIt, class Compare >  RandomIt partial_sort_copy( ExecutionPolicy&& policy,                               InputIt first, InputIt last,                              RandomIt d_first, RandomIt d_last,                              Compare cmp ); | std::partial_sort_copy |
| template< class ExecutionPolicy, class RandomIt >  void stable_sort( ExecutionPolicy&& policy,                     RandomIt first, RandomIt last );    template< class ExecutionPolicy, class RandomIt, class Compare >  void stable_sort( ExecutionPolicy&& policy,                    RandomIt first, RandomIt last, Compare cmp ); | std::stable_sort |
| template< class ExecutionPolicy, class RandomIt >  void nth_element( ExecutionPolicy&& policy,                    RandomIt first, RandomIt nth, RandomIt last );    template< class ExecutionPolicy, class RandomIt, class Compare >  void nth_element( ExecutionPolicy&& policy,                    RandomIt first, RandomIt nth, RandomIt last,                    Compare cmp ); | std::nth_element |
| Set operations (on sorted ranges) | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class InputIt1,  class InputIt2, class OutputIt >  OutputIt merge( ExecutionPolicy&& policy,                  InputIt1 first1, InputIt1 last1,                  InputIt2 first2, InputIt2 last2,                  OutputIt d_first );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class OutputIt, class Compare >  OutputIt merge( ExecutionPolicy&& policy,                   InputIt1 first1, InputIt1 last1,                  InputIt2 first2, InputIt2 last2,                  OutputIt d_first, Compare cmp ); | std::merge |
| template< class ExecutionPolicy, class BidirIt >  void inplace_merge( ExecutionPolicy&& policy,                      BidirIt first, BidirIt middle, BidirIt last );    template< class ExecutionPolicy, class BidirIt, class Compare >  void inplace_merge( ExecutionPolicy&& policy,                      BidirIt first, BidirIt middle, BidirIt last,                      Compare cmp ); | std::inplace_merge |
| template< class ExecutionPolicy, class InputIt1, class InputIt2 >  bool includes( ExecutionPolicy&& policy,                 InputIt1 first1, InputIt1 last1,                 InputIt2 first2, InputIt2 last2 );    template< class ExecutionPolicy, class InputIt1,            class InputIt2, class Compare >  bool includes( ExecutionPolicy&& policy,                 InputIt1 first1, InputIt1 last1,                 InputIt2 first2, InputIt2 last2, Compare cmp ); | std::includes |
| template< class ExecutionPolicy, class InputIt1,  class InputIt2, class OutputIt >  OutputIt set_difference( ExecutionPolicy&& policy,                            InputIt1 first1, InputIt1 last1,                           InputIt2 first2, InputIt2 last2,                           OutputIt d_first );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class OutputIt, class Compare >  OutputIt set_difference( ExecutionPolicy&& policy,                           InputIt1 first1, InputIt1 last1,                           InputIt2 first2, InputIt2 last2,                           OutputIt d_first, Compare cmp ); | std::set_difference |
| template< class ExecutionPolicy, class InputIt1,  class InputIt2, class OutputIt >  OutputIt set_intersection( ExecutionPolicy&& policy,                             InputIt1 first1, InputIt1 last1,                             InputIt2 first2, InputIt2 last2,                             OutputIt d_first );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class OutputIt, class Compare >  OutputIt set_intersection( ExecutionPolicy&& policy,                              InputIt1 first1, InputIt1 last1,                             InputIt2 first2, InputIt2 last2,                             OutputIt d_first, Compare cmp ); | std::set_intersection |
| template< class ExecutionPolicy, class InputIt1,  class InputIt2, class OutputIt >  OutputIt set_symmetric_difference( ExecutionPolicy&& policy,                                      InputIt1 first1, InputIt1 last1,                                     InputIt2 first2, InputIt2 last2,                                     OutputIt d_first );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class OutputIt, class Compare >  OutputIt set_symmetric_difference( ExecutionPolicy&& policy,                                      InputIt1 first1, InputIt1 last1,                                     InputIt2 first2, InputIt2 last2,                                     OutputIt d_first, Compare cmp ); | std::set_symmetric_difference |
| template< class ExecutionPolicy, class InputIt1,  class InputIt2, class OutputIt >  OutputIt set_union( ExecutionPolicy&& policy,                       InputIt1 first1, InputIt1 last1,                      InputIt2 first2, InputIt2 last2,                      OutputIt d_first );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class OutputIt, class Compare >  OutputIt set_union( ExecutionPolicy&& policy,                       InputIt1 first1, InputIt1 last1,                      InputIt2 first2, InputIt2 last2,                      OutputIt d_first, Compare cmp ); | std::set_union |
| Heap operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class RandomIt >  bool is_heap( ExecutionPolicy&& policy,                RandomIt first, RandomIt last );    template< class ExecutionPolicy, class RandomIt, class Compare >  bool is_heap( ExecutionPolicy&& policy,                RandomIt first, RandomIt last, Compare cmp ); | std::is_heap |
| template< class ExecutionPolicy, class RandomIt >  RandomIt is_heap_until( ExecutionPolicy&& policy,                           RandomIt first, RandomIt last );    template< class ExecutionPolicy, class RandomIt, class Compare >  RandomIt is_heap_until( ExecutionPolicy&& policy,                           RandomIt first, RandomIt last, Compare cmp ); | std::is_heap_until |
| Minimum/maximum operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class ForwardIt >   ForwardIt max_element( ExecutionPolicy&& policy,                         ForwardIt first, ForwardIt last );    template< class ExecutionPolicy, class ForwardIt, class Compare >  ForwardIt max_element( ExecutionPolicy&& policy,                          ForwardIt first, ForwardIt last, Compare cmp ); | std::max_element |
| template< class ExecutionPolicy, class ForwardIt >   ForwardIt min_element( ExecutionPolicy&& policy,                         ForwardIt first, ForwardIt last );    template< class ExecutionPolicy, class ForwardIt, class Compare >  ForwardIt min_element( ExecutionPolicy&& policy,                          ForwardIt first, ForwardIt last, Compare cmp ); | std::min_element |
| template< class ExecutionPolicy, class ForwardIt >   std::pair<ForwardIt,ForwardIt>      minmax_element( ExecutionPolicy&& policy,                      ForwardIt first, ForwardIt last );    template< class ExecutionPolicy, class ForwardIt, class Compare >  std::pair<ForwardIt,ForwardIt>       minmax_element( ExecutionPolicy&& policy,                       ForwardIt first, ForwardIt last, Compare cmp ); | std::minmax_element |
| template< class ExecutionPolicy, class InputIt1, class InputIt2 >  bool lexicographical_compare( ExecutionPolicy&& policy,                                InputIt1 first1, InputIt1 last1,                                InputIt2 first2, InputIt2 last2 );    template< class ExecutionPolicy, class InputIt1,             class InputIt2, class Compare >  bool lexicographical_compare( ExecutionPolicy&& policy,                                InputIt1 first1, InputIt1 last1,                                InputIt2 first2, InputIt2 last2,                                Compare cmp ); | std::lexicographical_compare |
| Numeric operations | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class InputIt, class OutputIt >  OutputIt adjacent_difference( ExecutionPolicy&& policy,                                 InputIt first, InputIt last,                                 OutputIt d_first );    template< class ExecutionPolicy, class InputIt,            class OutputIt, class BinaryOp >  OutputIt adjacent_difference( ExecutionPolicy&& policy,                                 InputIt first, InputIt last,                                 OutputIt d_first, BinaryOp op ); | std::adjacent_difference |
| template< class ExecutionPolicy, class InputIt1,  class InputIt2, class T >  T inner_product( ExecutionPolicy&& policy,                    InputIt1 first1, InputIt1 last1, InputIt2 first2,                   T value );    template< class ExecutionPolicy, class InputIt1, class InputIt2,            class T, class BinaryOp1, class BinaryOp2 >   T inner_product( ExecutionPolicy&& policy,                    InputIt1 first1, InputIt1 last1, InputIt2 first2,                   T value, BinaryOp1 op1, BinaryOp2 op2 ); | std::inner_product |
| Operations on uninitialized memory | |
| Parallelized algorithm | Existing algorithm |
| template< class ExecutionPolicy, class InputIt, class ForwardIt >  ForwardIt uninitialized_copy( ExecutionPolicy&& policy,                                 InputIt first, InputIt last,                                ForwardIt d_first ); | std::uninitialized_copy |
| template< class ExecutionPolicy, class InputIt,  class Size, class ForwardIt >  ForwardIt uninitialized_copy_n( ExecutionPolicy&& policy,                                  InputIt first, Size count,                                   ForwardIt d_first ); | std::uninitialized_copy_n |
| template< class ExecutionPolicy, class ForwardIt, class T >  void uninitialized_fill( ExecutionPolicy&& policy,                            ForwardIt first, ForwardIt last,                           const T& value ); | std::uninitialized_fill |
| template< class ExecutionPolicy, class ForwardIt, class Size, class T >  ForwardIt uninitialized_fill_n( ExecutionPolicy&& policy,                                  ForwardIt first, Size count,                                  const T& value ); | std::uninitialized_fill_n |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/parallelism/existing&oldid=155053>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 July 2023, at 10:11.