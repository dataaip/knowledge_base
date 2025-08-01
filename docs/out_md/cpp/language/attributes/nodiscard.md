# C++ attribute: nodiscard (since C++17)

From cppreference.com
< cpp‎ | language‎ | attributes
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

C++ language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General topics | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Preprocessor | | | | | | Comments | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Keywords | | | | | | Escape sequences | | | | | |
| Flow control | | | | |
| Conditional execution statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | if | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | switch | | | | | |
| Iteration statements (loops) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | for | | | | | | range-`for` (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | while | | | | | | `do-while` | | | | | |
| Jump statements | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | continue - break | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | goto - return | | | | | |
| Functions | | | | |
| Function declaration | | | | |
| Lambda function expression | | | | |
| `inline` specifier | | | | |
| Dynamic exception specifications (until C++17\*) | | | | |
| `noexcept` specifier (C++11) | | | | |
| Exceptions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `throw`-expression | | | | | | `try` block | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | |  | | | | | | `catch` handler | | | | | |
| Namespaces | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace declaration | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Namespace aliases | | | | | |
| Types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Fundamental types | | | | | | Enumeration types | | | | | | Function types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class/struct types | | | | | | Union types | | | | | |  | | | | | |
| Specifiers | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const`/`volatile` | | | | | | decltype (C++11) | | | | | | auto (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | constexpr (C++11) | | | | | | consteval (C++20) | | | | | | constinit (C++20) | | | | | |
| Storage duration specifiers | | | | |
| Initialization | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default-initialization | | | | | | Value-initialization | | | | | | Zero-initialization | | | | | | Copy-initialization | | | | | | Direct-initialization | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Aggregate initialization | | | | | | List-initialization (C++11) | | | | | | Constant initialization | | | | | | Reference initialization | | | | | |  | | | | | |

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Expressions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operators | | | | | | Operator precedence | | | | | |
| Alternative representations | | | | |
| Literals | | | | |
| Boolean - Integer - Floating-point | | | | |
| Character - String - nullptr (C++11) | | | | |
| User-defined (C++11) | | | | |
| Utilities | | | | |
| Attributes (C++11) | | | | |
| Types | | | | |
| `typedef` declaration | | | | |
| Type alias declaration (C++11) | | | | |
| Casts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | static_cast | | | | | | const_cast | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Explicit conversions | | | | | | dynamic_cast | | | | | | reinterpret_cast | | | | | |
| Memory allocation | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `new` expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `delete` expression | | | | | |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class declaration | | | | | | Constructors | | | | | | `this` pointer | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Access specifiers | | | | | | `friend` specifier | | | | | |  | | | | | |
| Class-specific function properties | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Virtual function | | | | | | `override` specifier (C++11) | | | | | | `final` specifier (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | explicit (C++11) | | | | | | static | | | | | |  | | | | | |
| Special member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Default constructor | | | | | | Copy constructor | | | | | | Move constructor (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Copy assignment | | | | | | Move assignment (C++11) | | | | | | Destructor | | | | | |
| Templates | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class template | | | | | | Function template | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Template specialization | | | | | | Parameter packs (C++11) | | | | | |
| Miscellaneous | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Inline assembly | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | History of C++ | | | | | |

Declarations

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Overview | | | | | | Declaration syntax | | | | | | **decl-specifier-seq** | | | | | | Declarator | | | | | | Conflicting declarations | | | | | | Specifiers | | | | | | typedef | | | | | | inline | | | | | | virtual function specifier | | | | | | explicit function specifier | | | | | | friend | | | | | | constexpr(C++11) | | | | | | consteval(C++20) | | | | | | constinit(C++20) | | | | | | Storage class specifiers | | | | | | Translation-unit-local (C++20) | | | | | | class/struct | | | | | | union | | | | | | enum | | | | | | decltype(C++11) | | | | | | auto(C++11) | | | | | | alignas(C++11) | | | | | | constvolatile | | | | | | Pack indexing specifier (C++26) | | | | | | Elaborated type specifier | | | | | | Attributes (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Declarators | | | | | | Reference | | | | | | Pointer | | | | | | Array | | | | | | Block declarations | | | | | | Simple-declaration | | | | | | →Structured binding declaration (C++17) | | | | | | Alias declaration (C++11) | | | | | | Namespace alias definition | | | | | | using declaration | | | | | | `using` directive | | | | | | static_assert declaration (C++11) | | | | | | asm declaration | | | | | | Opaque enum declaration (C++11) | | | | | | Other declarations | | | | | | Namespace definition | | | | | | Function declaration | | | | | | Class template declaration | | | | | | Function template declaration | | | | | | Explicit template instantiation (C++11) | | | | | | Explicit template specialization | | | | | | Linkage specification | | | | | | Attribute declaration (C++11) | | | | | | Empty declaration | | | | | |  | | | | | |

Attributes

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| assume(C++23) | | | | |
| carries_dependency(C++11) | | | | |
| deprecated(C++14) | | | | |
| fallthrough(C++17) | | | | |
| indeterminate(C++26) | | | | |
| likely(C++20) | | | | |
| maybe_unused(C++17) | | | | |
| ****nodiscard****(C++17) | | | | |
| noreturn(C++11) | | | | |
| no_unique_address(C++20) | | | | |
| optimize_for_synchronized(TM TS) | | | | |
| unlikely(C++20) | | | | |

If a function declared `nodiscard` or a function returning an enumeration or class declared `nodiscard` by value is called from a discarded-value expression other than a cast to void, the compiler is encouraged to issue a warning.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `[[nodiscard]]` | (1) | (since C++17) |
|  | | | | | | | | | |
| `[[nodiscard(` string-literal `)]]` | (2) | (since C++20) |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| string-literal | - | an unevaluated string literal that could be used to explain the rationale for why the result should not be discarded |

### Explanation

Appears in a function declaration, enumeration declaration, or class declaration.

If, from a discarded-value expression other than a cast to void,

- a function declared `nodiscard` is called, or
- a function returning an enumeration or class declared `nodiscard` by value is called, or
- a constructor declared `nodiscard` is called by explicit type conversion or static_cast, or
- an object of an enumeration or class type declared `nodiscard` is initialized by explicit type conversion or static_cast,

the compiler is encouraged to issue a warning.

|  |  |
| --- | --- |
| The string-literal, if specified, is usually included in the warnings. | (since C++20) |

### Example

Run this code

```
struct [[nodiscard]] error_info { /*...*/ };
 
error_info enable_missile_safety_mode() { /*...*/ return {}; }
 
void launch_missiles() { /*...*/ }
 
void test_missiles()
{
    enable_missile_safety_mode(); // compiler may warn on discarding a nodiscard value
    launch_missiles();
}
 
error_info& foo() { static error_info e; /*...*/ return e; }
 
void f1() { foo(); } // nodiscard type is not returned by value, no warning
 
// nodiscard( string-literal ) (since C++20):
[[nodiscard("PURE FUN")]] int strategic_value(int x, int y) { return x ^ y; }
 
int main()
{
    strategic_value(4, 2); // compiler may warn on discarding a nodiscard value
    auto z = strategic_value(0, 0); // OK: return value is not discarded
    return z;
}

```

Possible output:

```
game.cpp:5:4: warning: ignoring return value of function declared with ⮠
 'nodiscard' attribute
game.cpp:17:5: warning: ignoring return value of function declared with ⮠
 'nodiscard' attribute: PURE FUN

```

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Standard library The following standard functions are declared with `nodiscard` attribute:   | Extended content | | --- | | |  |  | | --- | --- | | Allocation functions | | | [operator newoperator new[]](../../memory/new/operator_new.html "cpp/memory/new/operator new") | allocation functions   (function) | | allocate | allocates uninitialized storage   (public member function of `std::allocator<T>`) | | allocate[static] | allocates uninitialized storage using the allocator   (public static member function of `std::allocator_traits<Alloc>`) | | allocate | allocates memory   (public member function of `std::pmr::memory_resource`) | | allocate | allocate memory   (public member function of `std::pmr::polymorphic_allocator<T>`) | | allocate | allocates uninitialized storage using the outer allocator   (public member function of `std::scoped_allocator_adaptor<OuterAlloc,InnerAlloc...>`) | | Indirect access | | | launder(C++17) | pointer optimization barrier   (function template) | | assume_aligned(C++20) | informs the compiler that a pointer is aligned   (function template) | | Emptiness-checking functions | | | empty(C++17) | checks whether the container is empty   (function template) | | empty | checks whether the node handle is empty (public member function of `node handle`) | | empty | checks whether the container is empty   (public member function of `std::array<T,N>`) | | empty | checks whether the string is empty   (public member function of `std::basic_string<CharT,Traits,Allocator>`) | | empty | checks whether the view is empty   (public member function of `std::basic_string_view<CharT,Traits>`) | | empty | checks whether the container is empty   (public member function of `std::deque<T,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::forward_list<T,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::list<T,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::map<Key,T,Compare,Allocator>`) | | empty | checks whether the match was successful   (public member function of `std::match_results<BidirIt,Alloc>`) | | empty | checks whether the container is empty   (public member function of `std::multimap<Key,T,Compare,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::multiset<Key,Compare,Allocator>`) | | empty | checks whether the container adaptor is empty   (public member function of `std::priority_queue<T,Container,Compare>`) | | empty | checks whether the container adaptor is empty   (public member function of `std::queue<T,Container>`) | | empty | checks whether the container is empty   (public member function of `std::set<Key,Compare,Allocator>`) | | empty | checks if the sequence is empty   (public member function of `std::span<T,Extent>`) | | empty | checks whether the container adaptor is empty   (public member function of `std::stack<T,Container>`) | | empty | checks whether the container is empty   (public member function of `std::unordered_map<Key,T,Hash,KeyEqual,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::unordered_multimap<Key,T,Hash,KeyEqual,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::unordered_multiset<Key,Hash,KeyEqual,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::unordered_set<Key,Hash,KeyEqual,Allocator>`) | | empty | checks whether the container is empty   (public member function of `std::vector<T,Allocator>`) | | empty | checks if the path is empty   (public member function of `std::filesystem::path`) | | Miscellaneous | | | async(C++11) | runs a function asynchronously (potentially in a new thread) and returns a std::future that will hold the result   (function template) | | | (until C++26) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| P1771R1 | C++17 | `[[nodiscard]]` on constructors has no effect | can cause a warning if the constructed object is discarded |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 9.12.9 Nodiscard attribute [dcl.attr.nodiscard]

- C++20 standard (ISO/IEC 14882:2020):

:   - 9.12.8 Nodiscard attribute [dcl.attr.nodiscard]

- C++17 standard (ISO/IEC 14882:2017):

:   - 10.6.7 Nodiscard attribute [dcl.attr.nodiscard]

### See also

|  |  |
| --- | --- |
| ignore(C++11) | placeholder to skip an element when unpacking a `tuple` using tie   (constant) |
| C documentation for nodiscard | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/attributes/nodiscard&oldid=174654>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 12 August 2024, at 11:45.