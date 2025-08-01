# C++ named requirements: RandomNumberDistribution (since C++11)

From cppreference.com
< cpp‎ | named req
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

C++ named requirements

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Basic | | | | | | DefaultConstructible | | | | | | MoveConstructible(C++11) | | | | | | CopyConstructible | | | | | | CopyAssignable | | | | | | MoveAssignable(C++11) | | | | | | Destructible | | | | | | Type properties | | | | | | ScalarType | | | | | | PODType | | | | | | TriviallyCopyable(C++11) | | | | | | TrivialType(C++11) | | | | | | StandardLayoutType(C++11) | | | | | | ImplicitLifetimeType | | | | | | Library-wide | | | | | | BooleanTestable | | | | | | EqualityComparable | | | | | | LessThanComparable | | | | | | Swappable | | | | | | ValueSwappable(C++11) | | | | | | NullablePointer(C++11) | | | | | | Hash(C++11) | | | | | | Allocator | | | | | | FunctionObject | | | | | | Callable | | | | | | Predicate | | | | | | BinaryPredicate | | | | | | Compare | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Container | | | | | | Container | | | | | | ReversibleContainer | | | | | | AllocatorAwareContainer | | | | | | SequenceContainer | | | | | | ContiguousContainer(C++17) | | | | | | AssociativeContainer | | | | | | UnorderedAssociativeContainer(C++11) | | | | | | Container element | | | | | | DefaultInsertable(C++11) | | | | | | CopyInsertable(C++11) | | | | | | MoveInsertable(C++11) | | | | | | EmplaceConstructible(C++11) | | | | | | Erasable(C++11) | | | | | | Iterator | | | | | | LegacyIterator | | | | | | LegacyInputIterator | | | | | | LegacyOutputIterator | | | | | | LegacyForwardIterator | | | | | | LegacyBidirectionalIterator | | | | | | LegacyRandomAccessIterator | | | | | | LegacyContiguousIterator(C++17) | | | | | | ConstexprIterator(C++20) | | | | | | Stream I/O | | | | | | FormattedInputFunction | | | | | | UnformattedInputFunction | | | | | | FormattedOutputFunction | | | | | | UnformattedOutputFunction | | | | | | Formatters | | | | | | BasicFormatter(C++20) | | | | | | Formatter(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random Numbers | | | | | | SeedSequence(C++11) | | | | | | RandomNumberEngine(C++11) | | | | | | ****RandomNumberDistribution****(C++11) | | | | | | UniformRandomBitGenerator(C++11) | | | | | | RandomNumberEngineAdaptor(C++11) | | | | | | Concurrency | | | | | | BasicLockable(C++11) | | | | | | Lockable(C++11) | | | | | | TimedLockable(C++11) | | | | | | SharedLockable(C++14) | | | | | | SharedTimedLockable(C++14) | | | | | | Mutex(C++11) | | | | | | TimedMutex(C++11) | | | | | | SharedMutex(C++17) | | | | | | SharedTimedMutex(C++14) | | | | | | Ranges | | | | | | RangeAdaptorObject(C++20) | | | | | | RangeAdaptorClosureObject(C++20) | | | | | | Multidimensional View | | | | | | LayoutMapping(C++23) | | | | | | LayoutMappingPolicy(C++23) | | | | | | AccessorPolicy(C++23) | | | | | | Other | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | CharTraits | | | | | | RegexTraits(C++11) | | | | | | BitmaskType | | | | | | LiteralType(C++11) | | | | | | NumericType | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | UnaryTypeTrait(C++11) | | | | | | BinaryTypeTrait(C++11) | | | | | | TransformationTrait(C++11) | | | | | | Clock(C++11) | | | | | | TrivialClock(C++11) | | | | | | |  | | | | | |

A ****RandomNumberDistribution**** is a function object returning random numbers according to a probability density function p(x) or a discrete probability distribution P(xi).

### Requirements

The type `D` satisfies RandomNumberDistribution if

- `D` satisfies CopyConstructible
- `D` satisfies CopyAssignable

Given

- `T`, the type named by D::result_type
- `P`, the type named by D::param_type, which

:   - satisfies CopyConstructible
    - satisfies CopyAssignable
    - satisfies EqualityComparable
    - has a constructor taking identical arguments as each of the constructors of `D` that take arguments corresponding to the distribution parameters.
    - has a member function with the identical name, type, and semantics, as every member function of `D` that returns a parameter of the distribution
    - declares a member typedef using distribution_type = D;

- `d`, a value of type `D`
- `x` and `y`, (possibly const) values of type `D`
- `p`, a (possibly const) value of type `P`
- `g`, `g1`, `g2`, lvalues of a type satisfying UniformRandomBitGenerator
- `os`, lvalue of a specialization of std::basic_ostream
- `is`, lvalue of a specialization of std::basic_istream

The following expressions must be valid and have their specified effects

| Expression | Type | Notes | Complexity |
| --- | --- | --- | --- |
| `D::result_type` | `T` | An arithmetic type | Compile-time |
| `D::param_type` | `P` |  | Compile-time |
| `D()` |  | Creates a distribution indistinguishable from any other default-constructed `D` | Constant |
| `D(p)` |  | Creates a distribution indistinguishable from `D` constructed directly from the values used to construct `p` | Same as `p`'s construction |
| `d.reset()` | `void` | Resets the internal state of the distribution. The next call to `operator()` on `d` will not depend on values produced by any engine prior to `reset()` | Constant |
| `x.param()` | `P` | Returns `p` such that D(p).param() == p | No worse than `D(p)` |
| `d.param(p)` | `void` | Postcondition: d.param() == p | No worse than `D(p)` |
| `d(g)` | `T` | The sequence of numbers returned by successive invocations of this call with the same `g` are randomly distributed according to the distribution parametrized by `d.param()` | Amortized constant number of invocations of `g` |
| `d(g,p)` | `T` | The sequence of numbers returned by successive invocations of this call with the same `g` are randomly distributed according to the distribution parametrized by `p` | Amortized constant number of invocations of `g` |
| `x.min()` | `T` | The greatest lower bound on the values potentially returned by `x`’s `operator()`, as determined by the current values of `x`’s parameters | Constant |
| `x.max()` | `T` | The least upper bound on the values potentially returned by `x`’s `operator()`, as determined by the current values of `x`’s parameters | Constant |
| `x == y` | `bool` | Establishes an equivalence relation. Returns `true` if x.param() == y.param() and future infinite sequences of values that would be generated by repeated invocations of x(g1) and y(g2) would be equal as long as g1 == g2 | Constant |
| `x != y` | `bool` | `!(x == y)` | Constant |
| `os << x` | Reference to the type of `os` | Writes a textual representation of the distribution parameters and internal state to `os`. The formatting flags and fill character of `os` are unchanged |  |
| `is >> d` | Reference to the type of `is` | Restores the distribution parameters and internal state with data read from `is`. The formatting flags of `is` are unchanged. The data must have been written using a stream with the same locale, `CharT` and `Traits` stream template parameters, otherwise the behavior is undefined. If bad input is encountered, is.setstate(std::ios::failbit) is called, which may throw std::ios_base::failure. `d` is unchanged in that case |  |

### Notes

The parameters of a distribution object may be changed either permanently, by using d.param(p) or just for the duration of a single operator() call, by using d(g,p).

Calls to const member functions of the distribution and os << d do not affect the sequence of numbers produced by repeated d(g).

### Standard library

The following standard library components satisfy RandomNumberDistribution

|  |  |
| --- | --- |
| uniform_int_distribution(C++11) | produces integer values evenly distributed across a range   (class template) |
| uniform_real_distribution(C++11) | produces real values evenly distributed across a range   (class template) |
| bernoulli_distribution(C++11) | produces bool values on a Bernoulli distribution   (class) |
| binomial_distribution(C++11) | produces integer values on a binomial distribution   (class template) |
| negative_binomial_distribution(C++11) | produces integer values on a negative binomial distribution   (class template) |
| geometric_distribution(C++11) | produces integer values on a geometric distribution   (class template) |
| poisson_distribution(C++11) | produces integer values on a poisson distribution   (class template) |
| exponential_distribution(C++11) | produces real values on an exponential distribution   (class template) |
| gamma_distribution(C++11) | produces real values on a gamma distribution   (class template) |
| weibull_distribution(C++11) | produces real values on a Weibull distribution   (class template) |
| extreme_value_distribution(C++11) | produces real values on an extreme value distribution   (class template) |
| normal_distribution(C++11) | produces real values on a standard normal (Gaussian) distribution   (class template) |
| lognormal_distribution(C++11) | produces real values on a lognormal distribution   (class template) |
| chi_squared_distribution(C++11) | produces real values on a chi-squared distribution   (class template) |
| cauchy_distribution(C++11) | produces real values on a Cauchy distribution   (class template) |
| fisher_f_distribution(C++11) | produces real values on a Fisher's F-distribution   (class template) |
| student_t_distribution(C++11) | produces real values on a Student's t-distribution   (class template) |
| discrete_distribution(C++11) | produces random integers on a discrete distribution   (class template) |
| piecewise_constant_distribution(C++11) | produces real values distributed on constant subintervals   (class template) |
| piecewise_linear_distribution(C++11) | produces real values distributed on defined subintervals   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/named_req/RandomNumberDistribution&oldid=160691>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 October 2023, at 12:40.