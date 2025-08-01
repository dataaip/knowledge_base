# std::shared_ptr<T>::shared_ptr

From cppreference.com
< cpp‎ | memory‎ | shared ptr
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

Memory management library

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **voidify**(exposition only\*) | | | | | | Uninitialized memory algorithms | | | | | | uninitialized_copy | | | | | | uninitialized_fill | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | destroy(C++17) | | | | | | destroy_at(C++17) | | | | | | uninitialized_copy_n(C++11) | | | | | | uninitialized_fill_n | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | destroy_n(C++17) | | | | | | construct_at(C++20) | | | | | | Constrained uninitialized memory algorithms | | | | | | ranges::uninitialized_copy(C++20) | | | | | | ranges::uninitialized_fill(C++20) | | | | | | ranges::uninitialized_move(C++20) | | | | | | ranges::construct_at(C++20) | | | | | | ranges::destroy(C++20) | | | | | | ranges::destroy_n(C++20) | | | | | | ranges::destroy_at(C++20) | | | | | | ranges::uninitialized_copy_n(C++20) | | | | | | ranges::uninitialized_fill_n(C++20) | | | | | | ranges::uninitialized_move_n(C++20) | | | | | | ranges::uninitialized_default_construct(C++20) | | | | | | ranges::uninitialized_value_construct(C++20) | | | | | | ranges::uninitialized_default_construct_n(C++20) | | | | | | ranges::uninitialized_value_construct_n(C++20) | | | | | | C Library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | malloc | | | | | | calloc | | | | | | realloc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_alloc(C++17) | | | | | | free | | | | | |  | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Allocators | | | | | | allocator | | | | | | allocator_traits(C++11) | | | | | | allocation_result(C++23) | | | | | | allocator_arg(C++11) | | | | | | uses_allocator(C++11) | | | | | | uses_allocator_construction_args(C++20) | | | | | | make_obj_using_allocator(C++20) | | | | | | uninitialized_construct_using_allocator(C++20) | | | | | | scoped_allocator_adaptor(C++11) | | | | | | pmr::polymorphic_allocator(C++17) | | | | | | Memory resources | | | | | | pmr::memory_resource(C++17) | | | | | | pmr::get_default_resource(C++17) | | | | | | pmr::set_default_resource(C++17) | | | | | | pmr::new_delete_resource(C++17) | | | | | | pmr::null_memory_resource(C++17) | | | | | | pmr::synchronized_pool_resource(C++17) | | | | | | pmr::unsynchronized_pool_resource(C++17) | | | | | | pmr::monotonic_buffer_resource(C++17) | | | | | | pmr::pool_options(C++17) | | | | | | Garbage collection support | | | | | | declare_reachable(C++11)(until C++23) | | | | | | undeclare_reachable(C++11)(until C++23) | | | | | | declare_no_pointers(C++11)(until C++23) | | | | | | undeclare_no_pointers(C++11)(until C++23) | | | | | | pointer_safety(C++11)(until C++23) | | | | | | get_pointer_safety(C++11)(until C++23) | | | | | | Uninitialized storage | | | | | | raw_storage_iterator(until C++20\*) | | | | | | get_temporary_buffer(until C++20\*) | | | | | | return_temporary_buffer(until C++20\*) | | | | | | Explicit lifetime management | | | | | | start_lifetime_asstart_lifetime_as_array(C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Smart pointers | | | | | | unique_ptr(C++11) | | | | | | shared_ptr(C++11) | | | | | | weak_ptr(C++11) | | | | | | auto_ptr(until C++17\*) | | | | | | owner_less(C++11) | | | | | | owner_less<void>(C++17) | | | | | | owner_hash(C++26) | | | | | | owner_equal(C++26) | | | | | | enable_shared_from_this(C++11) | | | | | | bad_weak_ptr(C++11) | | | | | | default_delete(C++11) | | | | | | out_ptr_t(C++23) | | | | | | inout_ptr_t(C++23) | | | | | | Low level memory management | | | | | | operator new | | | | | | [operator new[]](../new/operator_new.html "cpp/memory/new/operator new") | | | | | | operator delete | | | | | | [operator delete[]](../new/operator_delete.html "cpp/memory/new/operator delete") | | | | | | get_new_handler(C++11) | | | | | | set_new_handler | | | | | | launder(C++17) | | | | | | bad_alloc | | | | | | bad_array_new_length(C++11) | | | | | | nothrow_t | | | | | | align_val_t(C++17) | | | | | | destroying_delete_t(C++20) | | | | | | new_handler | | | | | | nothrow | | | | | | Miscellaneous | | | | | | pointer_traits(C++11) | | | | | | to_address(C++20) | | | | | | addressof(C++11) | | | | | | align(C++11) | | | | | | assume_aligned(C++20) | | | | | | is_sufficiently_aligned(C++26) | | | | | |

std::shared_ptr

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ****shared_ptr::shared_ptr**** | | | | |
| shared_ptr::~shared_ptr | | | | |
| shared_ptr::operator= | | | | |
| Modifiers | | | | |
| shared_ptr::reset | | | | |
| shared_ptr::swap | | | | |
| Observers | | | | |
| shared_ptr::get | | | | |
| shared_ptr::operator\*shared_ptr::operator-> | | | | |
| [shared_ptr::operator[]](operator_at.html "cpp/memory/shared ptr/operator at")(C++17) | | | | |
| shared_ptr::use_count | | | | |
| shared_ptr::unique(until C++20\*) | | | | |
| shared_ptr::operator bool | | | | |
| shared_ptr::owner_before | | | | |
| shared_ptr::owner_hash(C++26) | | | | |
| shared_ptr::owner_equal(C++26) | | | | |
| Non-member functions | | | | |
| swap(std::shared_ptr) | | | | |
| make_sharedmake_shared_for_overwrite(C++20) | | | | |
| allocate_sharedallocate_shared_for_overwrite(C++20) | | | | |
| static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast(C++17) | | | | |
| get_deleter | | | | |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | |
| operator<< | | | | |
| atomic_xxxfunctions (until C++26\*) | | | | |
| Helper classes | | | | |
| atomic<std::shared_ptr>(C++20) | | | | |
| hash<std::shared_ptr> | | | | |
| Deduction guides(C++17) | | | | |

|  |  |  |
| --- | --- | --- |
| constexpr shared_ptr() noexcept; | (1) |  |
| constexpr shared_ptr( std::nullptr_t ) noexcept; | (2) |  |
| template< class Y >   explicit shared_ptr( Y\* ptr ); | (3) |  |
| template< class Y, class Deleter >   shared_ptr( Y\* ptr, Deleter d ); | (4) |  |
| template< class Deleter >   shared_ptr( std::nullptr_t ptr, Deleter d ); | (5) |  |
| template< class Y, class Deleter, class Alloc >   shared_ptr( Y\* ptr, Deleter d, Alloc alloc ); | (6) |  |
| template< class Deleter, class Alloc >   shared_ptr( std::nullptr_t ptr, Deleter d, Alloc alloc ); | (7) |  |
| template< class Y >   shared_ptr( const shared_ptr<Y>& r, element_type\* ptr ) noexcept; | (8) |  |
| template< class Y >   shared_ptr( shared_ptr<Y>&& r, element_type\* ptr ) noexcept; | (8) | (since C++20) |
| shared_ptr( const shared_ptr& r ) noexcept; | (9) |  |
| template< class Y >   shared_ptr( const shared_ptr<Y>& r ) noexcept; | (9) |  |
| shared_ptr( shared_ptr&& r ) noexcept; | (10) |  |
| template< class Y >   shared_ptr( shared_ptr<Y>&& r ) noexcept; | (10) |  |
| template< class Y >   explicit shared_ptr( const std::weak_ptr<Y>& r ); | (11) |  |
| template< class Y >   shared_ptr( std::auto_ptr<Y>&& r ); | (12) | (removed in C++17) |
| template< class Y, class Deleter >   shared_ptr( std::unique_ptr<Y, Deleter>&& r ); | (13) |  |
|  |  |  |

Constructs new `shared_ptr` from a variety of pointer types that refer to an object to manage.

|  |  |
| --- | --- |
| For the purposes of the description below, a pointer type `Y*` is said to be **compatible with** a pointer type `T*` if either `Y*` is convertible to `T*` or `Y` is the array type `U[N]` and `T` is `U cv []` (where cv is some set of cv-qualifiers). | (since C++17) |

1,2) Constructs a `shared_ptr` with no managed object, i.e. empty `shared_ptr`.3-7) Constructs a `shared_ptr` with ptr as the pointer to the managed object.

|  |  |
| --- | --- |
| For (3,4,6), `Y*` must be convertible to `T*`. | (until C++17) |
| If `T` is an array type `U[N]`, (3,4,6) do not participate in overload resolution if `Y(*)[N]` is an invalid type or not convertible to `T*`. If `T` is an array type `U[]`, (3,4,6) do not participate in overload resolution if `Y(*)[]` is an invalid type or not convertible to `T*`. Otherwise, (3,4,6) do not participate in overload resolution if `Y*` is not convertible to `T*`. | (since C++17) |

Additionally:3) Uses the delete-expression delete ptr  if `T` is not an array type; delete[] ptr if `T` is an array type(since C++17) as the deleter. `Y` must be a complete type. The delete expression must be well-formed, have well-defined behavior and not throw any exceptions. This constructor additionally does not participate in overload resolution if the delete expression is not well-formed.(since C++17)4,5) Uses the specified deleter d as the deleter. The expression d(ptr) must be well formed, have well-defined behavior and not throw any exceptions. The construction of d and of the stored deleter copied from it must not throw exceptions.

|  |  |
| --- | --- |
| `Deleter` must be CopyConstructible. | (until C++17) |
| These constructors additionally do not participate in overload resolution if the expression d(ptr) is not well-formed, or if std::is_move_constructible_v<D> is false. | (since C++17) |

6,7) Same as (4,5), but additionally uses a copy of alloc for allocation of data for internal use. `Alloc` must be an Allocator.8) The **aliasing constructor**: constructs a `shared_ptr` which shares ownership information with the initial value of r, but holds an unrelated and unmanaged pointer ptr. If this `shared_ptr` is the last of the group to go out of scope, it will call the stored deleter for the object originally managed by r. However, calling `get()` on this `shared_ptr` will always return a copy of ptr. It is the responsibility of the programmer to make sure that this ptr remains valid as long as this shared_ptr exists, such as in the typical use cases where ptr is a member of the object managed by r or is an alias (e.g., downcast) of `r.get()` For the second overload taking an rvalue, r is empty and r.get() == nullptr after the call.(since C++20)9) Constructs a `shared_ptr` which shares ownership of the object managed by r. If r manages no object, \*this manages no object either. The template overload doesn't participate in overload resolution if `Y*` is not implicitly convertible to(until C++17)**compatible with**(since C++17) `T*`.10) Move-constructs a `shared_ptr` from r. After the construction, \*this contains a copy of the previous state of r, r is empty and its stored pointer is null. The template overload doesn't participate in overload resolution if `Y*` is not implicitly convertible to(until C++17)**compatible with**(since C++17) `T*`.11) Constructs a `shared_ptr` which shares ownership of the object managed by r. `Y*` must be implicitly convertible to `T*`.(until C++17)This overload participates in overload resolution only if `Y*` is compatible with `T*`.(since C++17) Note that r.lock() may be used for the same purpose: the difference is that this constructor throws an exception if the argument is empty, while std::weak_ptr<T>::lock() constructs an empty `std::shared_ptr` in that case.12) Constructs a `shared_ptr` that stores and owns the object formerly owned by r. `Y*` must be convertible to `T*`. After construction, r is empty.13) Constructs a `shared_ptr` which manages the object currently managed by r. The deleter associated with r is stored for future deletion of the managed object. r manages no object after the call.

|  |  |
| --- | --- |
| This overload doesn't participate in overload resolution if `std::unique_ptr<Y, Deleter>::pointer` is not **compatible with** `T*`. If r.get() is a null pointer, this overload is equivalent to the default constructor (1). | (since C++17) |

If `Deleter` is a reference type, it is equivalent to shared_ptr(r.release(), std::ref(r.get_deleter()). Otherwise, it is equivalent to shared_ptr(r.release(), std::move(r.get_deleter())).

When `T` is not an array type, the overloads (3,4,6) enable `shared_from_this` with ptr, and the overload (13) enables `shared_from_this` with the pointer returned by r.release().

### Parameters

|  |  |  |
| --- | --- | --- |
| ptr | - | a pointer to an object to manage |
| d | - | a deleter to use to destroy the object |
| alloc | - | an allocator to use for allocations of data for internal use |
| r | - | another smart pointer to share the ownership to or acquire the ownership from |

### Exceptions

3) std::bad_alloc if required additional memory could not be obtained. May throw implementation-defined exception for other errors. If an exception occurs, this calls delete ptr if `T` is not an array type, and calls delete[] ptr otherwise(since C++17).4-7) std::bad_alloc if required additional memory could not be obtained. May throw implementation-defined exception for other errors. d(ptr) is called if an exception occurs.11) std::bad_weak_ptr if r.expired() == true. The constructor has no effect in this case.12) std::bad_alloc if required additional memory could not be obtained. May throw implementation-defined exception for other errors. This constructor has no effect if an exception occurs.13) If an exception is thrown, the constructor has no effects.

### Notes

A constructor **enables `shared_from_this`** with a pointer ptr of type `U*` means that it determines if `U` has an unambiguous and accessible(since C++17) base class that is a specialization of std::enable_shared_from_this, and if so, the constructor evaluates 
if (ptr != nullptr && ptr->`weak_this` ﻿.expired())  
ptr->`weak_this`= std::shared_ptr<std::remove_cv_t<U>>  
(\*this, const_cast<std::remove_cv_t<U>\*>(ptr));
.

The assignment to the `weak_this` is not atomic and conflicts with any potentially concurrent access to the same object. This ensures that future calls to shared_from_this() would share ownership with the std::shared_ptr created by this raw pointer constructor.

The test ptr->`weak_this` ﻿.expired() in the code above makes sure that `weak_this` is not reassigned if it already indicates an owner. This test is required as of C++17.

The raw pointer overloads assume ownership of the pointed-to object. Therefore, constructing a `shared_ptr` using the raw pointer overload for an object that is already managed by a `shared_ptr`, such as by shared_ptr(ptr.get()) is likely to lead to undefined behavior, even if the object is of a type derived from std::enable_shared_from_this.

Because the default constructor is `constexpr`, static shared_ptrs are initialized as part of static non-local initialization, before any dynamic non-local initialization begins. This makes it safe to use a shared_ptr in a constructor of any static object.

In C++11 and C++14 it is valid to construct a std::shared_ptr<T> from a std::unique_ptr<T[]>:

```
std::unique_ptr<int[]> arr(new int[1]);
std::shared_ptr<int> ptr(std::move(arr));

```

Since the `shared_ptr` obtains its deleter (a std::default_delete<T[]> object) from the std::unique_ptr, the array will be correctly deallocated.

This is no longer allowed in C++17. Instead the array form std::shared_ptr<T[]> should be used.

### Example

Run this code

```
#include <iostream>
#include <memory>
 
struct Foo
{
    int id{0};
    Foo(int i = 0) : id{i} { std::cout << "Foo::Foo(" << i <<  ")\n"; }
    ~Foo() { std::cout << "Foo::~Foo(), id=" << id << '\n'; }
};
 
struct D
{
    void operator()(Foo* p) const
    {
        std::cout << "Call delete from function object. Foo::id=" << p->id << '\n';
        delete p;
    }
};
 
int main()
{
    {
        std::cout << "1) constructor with no managed object\n";
        std::shared_ptr<Foo> sh1;
    }
 
    {
        std::cout << "2) constructor with object\n";
        std::shared_ptr<Foo> sh2(new Foo{10});
        std::cout << "sh2.use_count(): " << sh2.use_count() << '\n';
        std::shared_ptr<Foo> sh3(sh2);
        std::cout << "sh2.use_count(): " << sh2.use_count() << '\n';
        std::cout << "sh3.use_count(): " << sh3.use_count() << '\n';
    }
 
    {
        std::cout << "3) constructor with object and deleter\n";
        std::shared_ptr<Foo> sh4(new Foo{11}, D());
        std::shared_ptr<Foo> sh5(new Foo{12}, [](auto p)
        {
            std::cout << "Call delete from lambda... p->id=" << p->id << '\n';
            delete p;
        });
    }
}

```

Output:

```
1) constructor with no managed object
2) constructor with object
Foo::Foo(10)
sh2.use_count(): 1
sh2.use_count(): 2
sh3.use_count(): 2
Foo::~Foo(), id=10
3) constructor with object and deleter
Foo::Foo(11)
Foo::Foo(12)
Call delete from lambda... p->id=12
Foo::~Foo(), id=12
Call delete from function object. Foo::id=11
Foo::~Foo(), id=11

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3548 | C++11 | the constructor from `unique_ptr` copy-constructed the deleter | move-constructs instead |

### See also

|  |  |
| --- | --- |
| make_sharedmake_shared_for_overwrite(C++20) | creates a shared pointer that manages a new object   (function template) |
| allocate_sharedallocate_shared_for_overwrite(C++20) | creates a shared pointer that manages a new object allocated using an allocator   (function template) |
| enable_shared_from_this(C++11) | allows an object to create a `shared_ptr` referring to itself   (class template) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory/shared_ptr/shared_ptr&oldid=167064>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 December 2023, at 22:55.