# C++ named requirements: Allocator

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Basic | | | | | | DefaultConstructible | | | | | | MoveConstructible(C++11) | | | | | | CopyConstructible | | | | | | CopyAssignable | | | | | | MoveAssignable(C++11) | | | | | | Destructible | | | | | | Type properties | | | | | | ScalarType | | | | | | PODType | | | | | | TriviallyCopyable(C++11) | | | | | | TrivialType(C++11) | | | | | | StandardLayoutType(C++11) | | | | | | ImplicitLifetimeType | | | | | | Library-wide | | | | | | BooleanTestable | | | | | | EqualityComparable | | | | | | LessThanComparable | | | | | | Swappable | | | | | | ValueSwappable(C++11) | | | | | | NullablePointer(C++11) | | | | | | Hash(C++11) | | | | | | ****Allocator**** | | | | | | FunctionObject | | | | | | Callable | | | | | | Predicate | | | | | | BinaryPredicate | | | | | | Compare | | | | | |  | | | | | |  | | | | | |  | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Container | | | | | | Container | | | | | | ReversibleContainer | | | | | | AllocatorAwareContainer | | | | | | SequenceContainer | | | | | | ContiguousContainer(C++17) | | | | | | AssociativeContainer | | | | | | UnorderedAssociativeContainer(C++11) | | | | | | Container element | | | | | | DefaultInsertable(C++11) | | | | | | CopyInsertable(C++11) | | | | | | MoveInsertable(C++11) | | | | | | EmplaceConstructible(C++11) | | | | | | Erasable(C++11) | | | | | | Iterator | | | | | | LegacyIterator | | | | | | LegacyInputIterator | | | | | | LegacyOutputIterator | | | | | | LegacyForwardIterator | | | | | | LegacyBidirectionalIterator | | | | | | LegacyRandomAccessIterator | | | | | | LegacyContiguousIterator(C++17) | | | | | | ConstexprIterator(C++20) | | | | | | Stream I/O | | | | | | FormattedInputFunction | | | | | | UnformattedInputFunction | | | | | | FormattedOutputFunction | | | | | | UnformattedOutputFunction | | | | | | Formatters | | | | | | BasicFormatter(C++20) | | | | | | Formatter(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Random Numbers | | | | | | SeedSequence(C++11) | | | | | | RandomNumberEngine(C++11) | | | | | | RandomNumberDistribution(C++11) | | | | | | UniformRandomBitGenerator(C++11) | | | | | | RandomNumberEngineAdaptor(C++11) | | | | | | Concurrency | | | | | | BasicLockable(C++11) | | | | | | Lockable(C++11) | | | | | | TimedLockable(C++11) | | | | | | SharedLockable(C++14) | | | | | | SharedTimedLockable(C++14) | | | | | | Mutex(C++11) | | | | | | TimedMutex(C++11) | | | | | | SharedMutex(C++17) | | | | | | SharedTimedMutex(C++14) | | | | | | Ranges | | | | | | RangeAdaptorObject(C++20) | | | | | | RangeAdaptorClosureObject(C++20) | | | | | | Multidimensional View | | | | | | LayoutMapping(C++23) | | | | | | LayoutMappingPolicy(C++23) | | | | | | AccessorPolicy(C++23) | | | | | | Other | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | CharTraits | | | | | | RegexTraits(C++11) | | | | | | BitmaskType | | | | | | LiteralType(C++11) | | | | | | NumericType | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | UnaryTypeTrait(C++11) | | | | | | BinaryTypeTrait(C++11) | | | | | | TransformationTrait(C++11) | | | | | | Clock(C++11) | | | | | | TrivialClock(C++11) | | | | | | |  | | | | | |

Encapsulates strategies for access/addressing, allocation/deallocation and construction/destruction of objects.

Every standard library component that may need to allocate or release storage, from std::string, std::vector, and every container, except std::array(since C++11) and std::inplace_vector(since C++26), to std::shared_ptr and std::function(until C++17), does so through an ****Allocator****: an object of a class type that satisfies the following requirements.

The implementation of many allocator requirements is optional because all AllocatorAwareContainer access allocators indirectly through std::allocator_traits, and std::allocator_traits supplies the default implementation of those requirements.

### Requirements

Given

- `T`, a non-const, non-reference type(until C++11)non-const object type(since C++11)(until C++17)cv-unqualified object type(since C++17),
- `A`, an Allocator type for type `T`,
- a, an object of type `A`,
- `B`, the corresponding Allocator type for some cv-unqualified object type `U` (as obtained by rebinding `A`),
- b, an object of type `B`,
- p, a value of type std::allocator_traits<A>::pointer, obtained by calling std::allocator_traits<A>::allocate(),
- cp, a value of type std::allocator_traits<A>::const_pointer, obtained by conversion from p,
- vp, a value of type std::allocator_traits<A>::void_pointer, obtained by conversion from p,
- cvp, a value of type std::allocator_traits<A>::const_void_pointer, obtained by conversion from cp or from vp,
- xp, a dereferenceable pointer to some cv-unqualified object type `X`,
- r, an lvalue of type `T` obtained by the expression \*p,
- n, a value of type std::allocator_traits<A>::size_type.

Inner types

| Type-id | Aliased type | Requirements |
| `A::pointer` (optional) | **(unspecified)**[[1]](Allocator.html#cite_note-1) | - Satisfies NullablePointer, LegacyRandomAccessIterator, and LegacyContiguousIterator. |
| `A::const_pointer` (optional) | **(unspecified)** | - Satisfies NullablePointer, LegacyRandomAccessIterator, and LegacyContiguousIterator. - `A::pointer` is convertible to `A::const_pointer`. |
| `A::void_pointer` (optional) | **(unspecified)** | - Satisfies NullablePointer. - `A::pointer` is convertible to `A::void_pointer`. - `B::void_pointer` and `A::void_pointer` are the same type. |
| `A::const_void_pointer` (optional) | **(unspecified)** | - Satisfies NullablePointer. - `A::pointer`, `A::const_pointer`, and `A::void_pointer` are convertible to `A::const_void_pointer`. - `B::const_void_pointer` and `A::const_void_pointer` are the same type. |
| `A::value_type` | `T` |  |
| `A::size_type` (optional) | **(unspecified)** | - An unsigned integer type. - Can represent the size of the largest object `A` can allocate. |
| `A::difference_type` (optional) | **(unspecified)** | - A signed integer type. - Can represent the difference of any two pointers to the objects allocated by `A`. |
| `A::template rebind<U>::other` (optional)[[2]](Allocator.html#cite_note-2) | `B` | - For any `U`, `B::template rebind<T>::other` is `A`. |

Operations on pointers

| Expression | Return type | Requirements |
| \*p | `T&` |  |
| \*cp | const T& | \*cp and \*p identify the same object. |
| p->m | **(as is)** | Same as (\*p).m, if (\*p).m is well-defined. |
| cp->m | **(as is)** | Same as (\*cp).m, if (\*cp).m is well-defined. |
| static_cast<A::pointer>(vp) | **(as is)** | static_cast<A::pointer>(vp) == p |
| static_cast<A::const_pointer>(cvp) | **(as is)** | static_cast<A::const_pointer>(cvp) == cp |
| std::pointer_traits<A::pointer>::pointer_to(r) | **(as is)** |  |

Storage and lifetime operations

| Expression | Return type | Requirements |
| a.allocate(n) | `A::pointer` | Allocates storage suitable for an array object of type `T[n]` and creates the array, but does not construct array elements. May throw exceptions. If n == 0, the return value is unspecified. |
| a.allocate(n, cvp) (optional) | Same as a.allocate(n), but may use cvp (nullptr or a pointer obtained from a.allocate()) in unspecified manner to aid locality. |
| a.allocate_at_least(n) (optional) (since C++23) | std::allocation_result  <A::pointer> | Allocates storage suitable for an array object of type `T[cnt]` and creates the array, but does not construct array elements, then returns {p, cnt}, where p points to the storage and cnt is not less than n. May throw exceptions. |
| a.deallocate(p, n) | **(not used)** | Deallocates storage pointed to p, which must be a value returned by a previous call to `allocate` or `allocate_at_least`(since C++23) that has not been invalidated by an intervening call to `deallocate`. n must match the value previously passed to `allocate`or be between the request and returned number of elements via `allocate_at_least` (may be equal to either bound)(since C++23). Does not throw exceptions. |
| a.max_size() (optional) | `A::size_type` | The largest value that can be passed to A::allocate(). |
| a.construct(xp, args...) (optional) | **(not used)** | Constructs an object of type `X` in previously-allocated storage at the address pointed to by xp, using args... as the constructor arguments. |
| a.destroy(xp) (optional) | **(not used)** | Destructs an object of type `X` pointed to by xp, but does not deallocate any storage. |

Relationship between instances

| Expression | Return type | Requirements |
| a1 == a2 | bool | - true only if the storage allocated by the allocator a1 can be deallocated through a2. - Establishes reflexive, symmetric, and transitive relationship. - Does not throw exceptions. |
| a1 != a2 | - Same as !(a1 == a2). |
| Declaration | Effect | Requirements |
| A a1(a) | Copy-constructs a1 such that a1 == a. (Note: Every Allocator also satisfies CopyConstructible.) | - Does not throw exceptions. |
| A a1 = a |
| A a(b) | Constructs a such that B(a) == b and A(b) == a. (Note: This implies that all allocators related by `rebind` maintain each other's resources, such as memory pools.) | - Does not throw exceptions. |
| A a1(std::move(a)) | Constructs a1 such that it equals the prior value of a. | - Does not throw exceptions. - The value of a is unchanged and a1 == a. |
| A a1 = std::move(a) |
| A a(std::move(b)) | Constructs a such that it equals the prior value of A(b). | - Does not throw exceptions. |
| Type-id | Aliased type | Requirements |
| `A::is_always_equal` (optional) | std::true_type or std::false_type or derived from such. | - true if any two allocators of type `A` always compare equal. - (If not provided, std::allocator_traits defaults this to std::is_empty<A>::type.) |

Influence on container operations

| Expression | Return type | Description |
| a.select_on_container_copy_construction() (optional) | `A` | - Provides an instance of `A` to be used by the container that is copy-constructed from the one that uses a currently. - (Usually returns either a copy of a or a default-constructed `A`.) |
| Type-id | Aliased type | Description |
| `A::propagate_on_container_copy_assignment` (optional) | std::true_type or std::false_type or derived from such. | - std::true_type or derived from it if the allocator of type `A` needs to be copied when the container that uses it is copy-assigned. - If this member is std::true_type or derived from it, then `A` must satisfy CopyAssignable and the copy operation must not throw exceptions. - Note that if the allocators of the source and the target containers do not compare equal, copy assignment has to deallocate the target's memory using the old allocator and then allocate it using the new allocator before copying the elements (and the allocator). |
| `A::propagate_on_container_move_assignment` (optional) | - std::true_type or derived from it if the allocator of type `A` needs to be moved when the container that uses it is move-assigned. - If this member is std::true_type or derived from it, then `A` must satisfy MoveAssignable and the move operation must not throw exceptions. - If this member is not provided or derived from std::false_type and the allocators of the source and the target containers do not compare equal, move assignment cannot take ownership of the source memory and must move-assign or move-construct the elements individually, resizing its own memory as needed. |
| `A::propagate_on_container_swap` (optional) | - std::true_type or derived from it if the allocators of type `A` need to be swapped when two containers that use them are swapped. - If this member is std::true_type or derived from it, type `A` must satisfy Swappable and the swap operation must not throw exceptions. - If this member is not provided or derived from std::false_type and the allocators of the two containers do not compare equal, the behavior of container swap is undefined. |

Notes:

1. ↑ See also fancy pointers below.
2. ↑ `rebind` is only optional (provided by std::allocator_traits) if this allocator is a template of the form `SomeAllocator<T, Args>`, where `Args` is zero or more additional template type parameters.

Given

- x1 and x2, objects of (possibly different) types `X::void_pointer`, `X::const_void_pointer`, `X::pointer`, or `X::const_pointer`

:   Then, x1 and x2 are **equivalently-valued** pointer values, if and only if both x1 and x2 can be explicitly converted to the two corresponding objects px1 and px2 of type `X::const_pointer`, using a sequence of static_casts using only these four types, and the expression px1 == px2 evaluates to true.

Given

- w1 and w2, objects of type `X::void_pointer`

:   Then, for the expression w1 == w2 and w1 != w2 either or both objects may be replaced by an **equivalently-valued** object of type `X::const_void_pointer` with no change in semantics.

Given

- p1 and p2, objects of type `X::pointer`

:   Then, for the expressions p1 == p2, p1 != p2, p1 < p2, p1 <= p2, p1 >= p2, p1 > p2, p1 - p2 either or both objects may be replaced by an **equivalently-valued** object of type `X::const_pointer` with no change in semantics.

The above requirements make it possible to compare Container's `iterator`s and `const_iterator`s.

|  |  |
| --- | --- |
| Allocator completeness requirements An allocator type `X` for type `T` additionally satisfies the **allocator completeness requirements** if both of the following are true regardless of whether `T` is a complete type:   - `X` is a complete type. - Except for `value_type`, all the member types of std::allocator_traits<X> are complete types. | (since C++17) |

### Stateful and stateless allocators

Every Allocator type is either **stateful** or **stateless**. Generally, a stateful allocator type can have unequal values which denote distinct memory resources, while a stateless allocator type denotes a single memory resource.

|  |  |
| --- | --- |
| Although custom allocators are not required to be stateless, whether and how the use of stateful allocators in the standard library is implementation-defined. Use of unequal allocator values may result in implementation-defined runtime errors or undefined behavior if the implementation does not support such usage. | (until C++11) |
| Custom allocators may contain state. Each container or another allocator-aware object stores an instance of the supplied allocator and controls allocator replacement through std::allocator_traits. | (since C++11) |

Instances of a stateless allocator type always compare equal. Stateless allocator types are typically implemented as empty classes and suitable for empty base class optimization.

|  |  |
| --- | --- |
| The member type `is_always_equal` of std::allocator_traits is intendedly used for determining whether an allocator type is stateless. | (since C++11) |

### Fancy pointers

When the member type `pointer` is not a raw pointer type, it is commonly referred to as a "fancy pointer". Such pointers were introduced to support segmented memory architectures and are used today to access objects allocated in address spaces that differ from the homogeneous virtual address space that is accessed by raw pointers. An example of a fancy pointer is the mapping address-independent pointer `boost::interprocess::offset_ptr`, which makes it possible to allocate node-based data structures such as std::set in shared memory and memory mapped files mapped in different addresses in every process. Fancy pointers can be used independently of the allocator that provided them, through the class template std::pointer_traits(since C++11). The function std::to_address can be used to obtain a raw pointer from a fancy pointer.(since C++20)

|  |  |
| --- | --- |
| Use of fancy pointers and customized size/different type in the standard libary are conditionally supported. Implementations may require that member type `pointer`, `const_pointer`, `size_type`, and `difference_type` are `value_type*`, const value_type\*, std::size_t, and std::ptrdiff_t, respectively. | (until C++11) |

|  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| Concept For the definition of the query object std::get_allocator, the following exposition-only concept is defined.   |  |  |  | | --- | --- | --- | | template<class Alloc>  concept /\*simple-allocator\*/ = requires(Alloc alloc, std::size_t n)  {      { \*alloc.allocate(n) } -> std::same_as<typename Alloc::value_type&>;      { alloc.deallocate(alloc.allocate(n), n) };    } && std::copy_constructible<Alloc> && std::equality_comparable<Alloc>; |  |  | |  |  |  |   The exposition-only concept /\*simple-allocator\*/ defines the minimal usability constraints of the ****Allocator**** requirement. | (since C++26) |

### Standard library

The following standard library components satisfy the Allocator requirements:

|  |  |
| --- | --- |
| allocator | the default allocator   (class template) |
| scoped_allocator_adaptor(C++11) | implements multi-level allocator for multi-level containers   (class template) |
| polymorphic_allocator(C++17) | an allocator that supports run-time polymorphism based on the std::pmr::memory_resource it is constructed with   (class template) |

### Examples

Demonstrates a C++11 allocator, except for `[[nodiscard]]` added to match C++20 style.

Run this code

```
#include <cstdlib>
#include <iostream>
#include <limits>
#include <new>
#include <vector>
 
template<class T>
struct Mallocator
{
    typedef T value_type;
 
    Mallocator() = default;
 
    template<class U>
    constexpr Mallocator(const Mallocator <U>&) noexcept {}
 
    [[nodiscard]] T* allocate(std::size_t n)
    {
        if (n > std::numeric_limits<std::size_t>::max() / sizeof(T))
            throw std::bad_array_new_length();
 
        if (auto p = static_cast<T*>(std::malloc(n * sizeof(T))))
        {
            report(p, n);
            return p;
        }
 
        throw std::bad_alloc();
    }
 
    void deallocate(T* p, std::size_t n) noexcept
    {
        report(p, n, 0);
        std::free(p);
    }
private:
    void report(T* p, std::size_t n, bool alloc = true) const
    {
        std::cout << (alloc ? "Alloc: " : "Dealloc: ") << sizeof(T) * n
                  << " bytes at " << std::hex << std::showbase
                  << reinterpret_cast<void*>(p) << std::dec << '\n';
    }
};
 
template<class T, class U>
bool operator==(const Mallocator <T>&, const Mallocator <U>&) { return true; }
 
template<class T, class U>
bool operator!=(const Mallocator <T>&, const Mallocator <U>&) { return false; }
 
int main()
{
    std::vector<int, Mallocator<int>> v(8);
    v.push_back(42);
}

```

Possible output:

```
Alloc: 32 bytes at 0x2020c20
Alloc: 64 bytes at 0x2023c60
Dealloc: 32 bytes at 0x2020c20
Dealloc: 64 bytes at 0x2023c60

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 179 | C++98 | `pointer` and `const_pointer` were not required to be comparable with each other | required |
| LWG 199 | C++98 | the return value of a.allocate(0) was unclear | it is unspecified |
| LWG 258 (N2436) | C++98 | the equality relationship between allocators were not required to be reflexive, symmetric or transitive | required to be reflexive, symmetric and transitive |
| LWG 274 | C++98 | `T` could be a const-qualified type or reference type, making std::allocator possibly ill-formed[[1]](Allocator.html#cite_note-3) | prohibited these types |
| LWG 2016 | C++11 | the copy, move and swap operations of allocator might be throwing when used | required to be non-throwing |
| LWG 2081 | C++98 C++11 | allocators were not required to support copy assignment (C++98) and move assignment (C++11) | required |
| LWG 2108 | C++11 | there was no way to show an allocator is stateless | `is_always_equal` provided |
| LWG 2263 | C++11 | the resolution of LWG issue 179 was accidently dropped in C++11 and not generalized to `void_pointer` and `const_void_pointer` | restored and generalized |
| LWG 2447 | C++11 | `T` could be a volatile-qualified object type | prohibited these types |
| LWG 2593 | C++11 | moving from an allocator might modify its value | modification forbidden |
| P0593R6 | C++98 | `allocate` were not required to create an array object in the storage it allocated | required |

1. ↑ The member types `reference` and `const_reference` of std::allocator are defined as `T&` and `const T&` respectively.
   - If `T` is a reference type, `reference` and `const_reference` are ill-formed because reference to reference cannot be formed (reference collapsing was introduced in C++11).
   - If `T` is const-qualified, `reference` and `const_reference` are the same, and the overload set of address() is ill-formed.
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/named_req/Allocator&oldid=177185>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 October 2024, at 14:05.