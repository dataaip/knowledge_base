# Memory management library

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
| Feature test macros (C++20) | | | | |
| Language support library | | | | |
| Concepts library (C++20) | | | | |
| Diagnostics library | | | | |
| ****Memory management library**** | | | | |
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

****Memory management library****

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | **voidify**(exposition only\*) | | | | | | Uninitialized memory algorithms | | | | | | uninitialized_copy | | | | | | uninitialized_fill | | | | | | uninitialized_move(C++17) | | | | | | uninitialized_default_construct(C++17) | | | | | | uninitialized_value_construct(C++17) | | | | | | destroy(C++17) | | | | | | destroy_at(C++17) | | | | | | uninitialized_copy_n(C++11) | | | | | | uninitialized_fill_n | | | | | | uninitialized_move_n(C++17) | | | | | | uninitialized_default_construct_n(C++17) | | | | | | uninitialized_value_construct_n(C++17) | | | | | | destroy_n(C++17) | | | | | | construct_at(C++20) | | | | | | Constrained uninitialized memory algorithms | | | | | | ranges::uninitialized_copy(C++20) | | | | | | ranges::uninitialized_fill(C++20) | | | | | | ranges::uninitialized_move(C++20) | | | | | | ranges::construct_at(C++20) | | | | | | ranges::destroy(C++20) | | | | | | ranges::destroy_n(C++20) | | | | | | ranges::destroy_at(C++20) | | | | | | ranges::uninitialized_copy_n(C++20) | | | | | | ranges::uninitialized_fill_n(C++20) | | | | | | ranges::uninitialized_move_n(C++20) | | | | | | ranges::uninitialized_default_construct(C++20) | | | | | | ranges::uninitialized_value_construct(C++20) | | | | | | ranges::uninitialized_default_construct_n(C++20) | | | | | | ranges::uninitialized_value_construct_n(C++20) | | | | | | C Library | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | malloc | | | | | | calloc | | | | | | realloc | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | aligned_alloc(C++17) | | | | | | free | | | | | |  | | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Allocators | | | | | | allocator | | | | | | allocator_traits(C++11) | | | | | | allocation_result(C++23) | | | | | | allocator_arg(C++11) | | | | | | uses_allocator(C++11) | | | | | | uses_allocator_construction_args(C++20) | | | | | | make_obj_using_allocator(C++20) | | | | | | uninitialized_construct_using_allocator(C++20) | | | | | | scoped_allocator_adaptor(C++11) | | | | | | pmr::polymorphic_allocator(C++17) | | | | | | Memory resources | | | | | | pmr::memory_resource(C++17) | | | | | | pmr::get_default_resource(C++17) | | | | | | pmr::set_default_resource(C++17) | | | | | | pmr::new_delete_resource(C++17) | | | | | | pmr::null_memory_resource(C++17) | | | | | | pmr::synchronized_pool_resource(C++17) | | | | | | pmr::unsynchronized_pool_resource(C++17) | | | | | | pmr::monotonic_buffer_resource(C++17) | | | | | | pmr::pool_options(C++17) | | | | | | Garbage collection support | | | | | | declare_reachable(C++11)(until C++23) | | | | | | undeclare_reachable(C++11)(until C++23) | | | | | | declare_no_pointers(C++11)(until C++23) | | | | | | undeclare_no_pointers(C++11)(until C++23) | | | | | | pointer_safety(C++11)(until C++23) | | | | | | get_pointer_safety(C++11)(until C++23) | | | | | | Uninitialized storage | | | | | | raw_storage_iterator(until C++20\*) | | | | | | get_temporary_buffer(until C++20\*) | | | | | | return_temporary_buffer(until C++20\*) | | | | | | Explicit lifetime management | | | | | | start_lifetime_asstart_lifetime_as_array(C++23)(C++23) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Smart pointers | | | | | | unique_ptr(C++11) | | | | | | shared_ptr(C++11) | | | | | | weak_ptr(C++11) | | | | | | auto_ptr(until C++17\*) | | | | | | owner_less(C++11) | | | | | | owner_less<void>(C++17) | | | | | | owner_hash(C++26) | | | | | | owner_equal(C++26) | | | | | | enable_shared_from_this(C++11) | | | | | | bad_weak_ptr(C++11) | | | | | | default_delete(C++11) | | | | | | out_ptr_t(C++23) | | | | | | inout_ptr_t(C++23) | | | | | | Low level memory management | | | | | | operator new | | | | | | [operator new[]](memory/new/operator_new.html "cpp/memory/new/operator new") | | | | | | operator delete | | | | | | [operator delete[]](memory/new/operator_delete.html "cpp/memory/new/operator delete") | | | | | | get_new_handler(C++11) | | | | | | set_new_handler | | | | | | launder(C++17) | | | | | | bad_alloc | | | | | | bad_array_new_length(C++11) | | | | | | nothrow_t | | | | | | align_val_t(C++17) | | | | | | destroying_delete_t(C++20) | | | | | | new_handler | | | | | | nothrow | | | | | | Miscellaneous | | | | | | pointer_traits(C++11) | | | | | | to_address(C++20) | | | | | | addressof(C++11) | | | | | | align(C++11) | | | | | | assume_aligned(C++20) | | | | | | is_sufficiently_aligned(C++26) | | | | | |

### Smart pointers (since C++11)

Smart pointers enable automatic, exception-safe, object lifetime management.

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| Pointer categories | |
| unique_ptr(C++11) | smart pointer with unique object ownership semantics   (class template) |
| shared_ptr(C++11) | smart pointer with shared object ownership semantics   (class template) |
| weak_ptr(C++11) | weak reference to an object managed by std::shared_ptr   (class template) |
| auto_ptr(deprecated in C++11)(removed in C++17) | smart pointer with strict object ownership semantics   (class template) |
| Helper classes | |
| owner_less(C++11) | provides mixed-type owner-based ordering of shared and weak pointers   (class template) |
| owner_hash(C++26) | provides owner-based hashing for shared and weak pointers   (class) |
| owner_equal(C++26) | provides mixed-type owner-based equal comparisons of shared and weak pointers   (class) |
| enable_shared_from_this(C++11) | allows an object to create a `shared_ptr` referring to itself   (class template) |
| bad_weak_ptr(C++11) | exception thrown when accessing a `weak_ptr` which refers to already destroyed object   (class) |
| default_delete(C++11) | default deleter for unique_ptr   (class template) |
| Smart pointer adaptors (since C++23) | |
| out_ptr_t(C++23) | interoperates with foreign pointer setters and resets a smart pointer on destruction   (class template) |
| out_ptr(C++23) | creates an `out_ptr_t` with an associated smart pointer and resetting arguments   (function template) |
| inout_ptr_t(C++23) | interoperates with foreign pointer setters, obtains the initial pointer value from a smart pointer, and resets it on destruction   (class template) |
| inout_ptr(C++23) | creates an `inout_ptr_t` with an associated smart pointer and resetting arguments   (function template) |

### Allocators

Allocators are class templates encapsulating memory allocation strategy. This allows generic containers to decouple memory management from the data itself.

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| allocator | the default allocator   (class template) |
| allocator_traits(C++11) | provides information about allocator types   (class template) |
| allocation_result(C++23) | records the address and the actual size of storage allocated by `allocate_at_least`   (class template) |
| allocator_argallocator_arg_t(C++11) | a tag used to select allocator-aware constructors (tag) |
| uses_allocator(C++11) | checks if the specified type supports uses-allocator construction   (class template) |
| uses_allocator_construction_args(C++20) | prepares the argument list matching the flavor of uses-allocator construction required by the given type   (function template) |
| make_obj_using_allocator(C++20) | creates an object of the given type by means of uses-allocator construction   (function template) |
| uninitialized_construct_using_allocator(C++20) | creates an object of the given type at specified memory location by means of uses-allocator construction   (function template) |
| Defined in header `<scoped_allocator>` | |
| scoped_allocator_adaptor(C++11) | implements multi-level allocator for multi-level containers   (class template) |
| Defined in header `<memory_resource>` | |
| Defined in namespace `std::pmr` | |
| polymorphic_allocator(C++17) | an allocator that supports run-time polymorphism based on the std::pmr::memory_resource it is constructed with   (class template) |

### Memory resources (since C++17)

Memory resources implement memory allocation strategies that can be used by std::pmr::polymorphic_allocator.

|  |  |
| --- | --- |
| Defined in header `<memory_resource>` | |
| Defined in namespace `std::pmr` | |
| memory_resource(C++17) | an abstract interface for classes that encapsulate memory resources   (class) |
| new_delete_resource(C++17) | returns a static program-wide std::pmr::memory_resource that uses the global operator new and operator delete to allocate and deallocate memory   (function) |
| null_memory_resource(C++17) | returns a static std::pmr::memory_resource that performs no allocation   (function) |
| get_default_resource(C++17) | gets the default std::pmr::memory_resource   (function) |
| set_default_resource(C++17) | sets the default std::pmr::memory_resource   (function) |
| pool_options(C++17) | a set of constructor options for pool resources   (class) |
| synchronized_pool_resource(C++17) | a thread-safe std::pmr::memory_resource for managing allocations in pools of different block sizes   (class) |
| unsynchronized_pool_resource(C++17) | a thread-unsafe std::pmr::memory_resource for managing allocations in pools of different block sizes   (class) |
| monotonic_buffer_resource(C++17) | a special-purpose std::pmr::memory_resource that releases the allocated memory only when the resource is destroyed   (class) |

### Uninitialized storage (until C++17)

Several utilities are provided to create and access raw storage.

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| raw_storage_iterator(deprecated in C++17)(removed in C++20) | an iterator that allows standard algorithms to store results in uninitialized memory   (class template) |
| get_temporary_buffer(deprecated in C++17)(removed in C++20) | obtains uninitialized storage   (function template) |
| return_temporary_buffer(deprecated in C++17)(removed in C++20) | frees uninitialized storage   (function template) |

### Uninitialized memory algorithms

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| uninitialized_copy | copies a range of objects to an uninitialized area of memory   (function template) |
| uninitialized_copy_n(C++11) | copies a number of objects to an uninitialized area of memory   (function template) |
| uninitialized_fill | copies an object to an uninitialized area of memory, defined by a range   (function template) |
| uninitialized_fill_n | copies an object to an uninitialized area of memory, defined by a start and a count   (function template) |
| uninitialized_move(C++17) | moves a range of objects to an uninitialized area of memory   (function template) |
| uninitialized_move_n(C++17) | moves a number of objects to an uninitialized area of memory   (function template) |
| uninitialized_default_construct(C++17) | constructs objects by default-initialization in an uninitialized area of memory, defined by a range   (function template) |
| uninitialized_default_construct_n(C++17) | constructs objects by default-initialization in an uninitialized area of memory, defined by a start and a count   (function template) |
| uninitialized_value_construct(C++17) | constructs objects by value-initialization in an uninitialized area of memory, defined by a range   (function template) |
| uninitialized_value_construct_n(C++17) | constructs objects by value-initialization in an uninitialized area of memory, defined by a start and a count   (function template) |
| destroy_at(C++17) | destroys an object at a given address   (function template) |
| destroy(C++17) | destroys a range of objects   (function template) |
| destroy_n(C++17) | destroys a number of objects in a range   (function template) |
| construct_at(C++20) | creates an object at a given address   (function template) |

### Constrained uninitialized memory algorithms (since C++20)

C++20 provides constrained uninitialized memory algorithms that accept range arguments or iterator-sentinel pairs.

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| Defined in namespace `std::ranges` | |
| **no-throw-input-iteratorno-throw-forward-iteratorno-throw-sentinel-forno-throw-input-rangeno-throw-forward-range**(C++20) | specifies some operations on iterators, sentinels and ranges are non-throwing (exposition-only concept\*) |
| ranges::uninitialized_copy(C++20) | copies a range of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_copy_n(C++20) | copies a number of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_fill(C++20) | copies an object to an uninitialized area of memory, defined by a range (algorithm function object) |
| ranges::uninitialized_fill_n(C++20) | copies an object to an uninitialized area of memory, defined by a start and a count (algorithm function object) |
| ranges::uninitialized_move(C++20) | moves a range of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_move_n(C++20) | moves a number of objects to an uninitialized area of memory (algorithm function object) |
| ranges::uninitialized_default_construct(C++20) | constructs objects by default-initialization in an uninitialized area of memory, defined by a range (algorithm function object) |
| ranges::uninitialized_default_construct_n(C++20) | constructs objects by default-initialization in an uninitialized area of memory, defined by a start and count (algorithm function object) |
| ranges::uninitialized_value_construct(C++20) | constructs objects by value-initialization in an uninitialized area of memory, defined by a range (algorithm function object) |
| ranges::uninitialized_value_construct_n(C++20) | constructs objects by value-initialization in an uninitialized area of memory, defined by a start and a count (algorithm function object) |
| ranges::destroy_at(C++20) | destroys an object at a given address (algorithm function object) |
| ranges::destroy(C++20) | destroys a range of objects (algorithm function object) |
| ranges::destroy_n(C++20) | destroys a number of objects in a range (algorithm function object) |
| ranges::construct_at(C++20) | creates an object at a given address (algorithm function object) |

### Garbage collector support (until C++23)

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| declare_reachable(C++11)(removed in C++23) | declares that an object can not be recycled   (function) |
| undeclare_reachable(C++11)(removed in C++23) | declares that an object can be recycled   (function template) |
| declare_no_pointers(C++11)(removed in C++23) | declares that a memory area does not contain traceable pointers   (function) |
| undeclare_no_pointers(C++11)(removed in C++23) | cancels the effect of std::declare_no_pointers   (function) |
| pointer_safety(C++11)(removed in C++23) | lists pointer safety models   (enum) |
| get_pointer_safety(C++11)(removed in C++23) | returns the current pointer safety model   (function) |

### Explicit lifetime management (since C++23)

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| start_lifetime_asstart_lifetime_as_array(C++23) | implicitly creates objects in given storage with the object representation reused   (function template) |

### Miscellaneous

|  |  |
| --- | --- |
| Defined in header `<memory>` | |
| pointer_traits(C++11) | provides information about pointer-like types   (class template) |
| to_address(C++20) | obtains a raw pointer from a pointer-like type   (function template) |
| addressof(C++11) | obtains actual address of an object, even if the `&` operator is overloaded   (function template) |
| align(C++11) | aligns a pointer in a buffer   (function) |
| assume_aligned(C++20) | informs the compiler that a pointer is aligned   (function template) |
| is_sufficiently_aligned(C++26) | checks whether the pointer points to an object whose alignment has at least the given value   (function template) |

### Low level memory management

Includes e.g. operator new, operator delete, std::set_new_handler.

|  |  |
| --- | --- |
| Defined in header `<new>` | |

### C-style memory management

Includes e.g. std::malloc, std::free.

|  |  |
| --- | --- |
| Defined in header `<cstdlib>` | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/memory&oldid=179892>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2025, at 10:10.