# Empty base optimization

From cppreference.com
< cpp‎ | language
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

 Classes

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| Overview | | | | |
| `class`/`struct` types | | | | |
| `union` types | | | | |
| Injected-class-name | | | | |
| Members | | | | |
| Data members | | | | |
| Static members | | | | |
| The `this` pointer | | | | |
| Nested classes | | | | |
| Member templates | | | | |
| Bit-fields | | | | |
| `using`-declarations | | | | |
| Member functions | | | | |
| Member access specifiers | | | | |
| Constructors and member initializer lists | | | | |
| Default member initializer (C++11) | | | | |
| `friend` specifier | | | | |
| `explicit` specifier | | | | |
| Converting constructor | | | | |
| Special member functions | | | | |
| Default constructor | | | | |
| Copy constructor | | | | |
| Move constructor (C++11) | | | | |
| Copy assignment operator | | | | |
| Move assignment operator (C++11) | | | | |
| Destructor | | | | |
| Inheritance | | | | |
| Base and derived classes | | | | |
| ****Empty base optimization (EBO)**** | | | | |
| Virtual member functions | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

Allows the size of an empty base subobject to be zero.

### Explanation

The size of any object or member subobject is required to be at least 1 even if the type is an empty class type (that is, a class or struct that has no non-static data members), (unless with `[[no_unique_address]]`, see below)(since C++20) in order to be able to guarantee that the addresses of distinct objects of the same type are always distinct.

However, base class subobjects are not so constrained, and can be completely optimized out from the object layout:

Run this code

```
struct Base {}; // empty class
 
struct Derived1 : Base
{
    int i;
};
 
int main()
{
    // the size of any object of empty class type is at least 1
    static_assert(sizeof(Base) >= 1);
 
    // empty base optimization applies
    static_assert(sizeof(Derived1) == sizeof(int));
}

```

Empty base optimization is prohibited if one of the empty base classes is also the type or the base of the type of the first non-static data member, since the two base subobjects of the same type are required to have different addresses within the object representation of the most derived type.

A typical example of such situation is the naive implementation of std::reverse_iterator (derived from the empty base std::iterator), which holds the underlying iterator (also derived from std::iterator) as its first non-static data member.

Run this code

```
struct Base {}; // empty class
 
struct Derived1 : Base
{
    int i;
};
 
struct Derived2 : Base
{
    Base c; // Base, occupies 1 byte, followed by padding for i
    int i;
};
 
struct Derived3 : Base
{
    Derived1 c; // derived from Base, occupies sizeof(int) bytes
    int i;
};
 
int main()
{
    // empty base optimization does not apply,
    // base occupies 1 byte, Base member occupies 1 byte
    // followed by 2 bytes of padding to satisfy int alignment requirements
    static_assert(sizeof(Derived2) == 2*sizeof(int));
 
    // empty base optimization does not apply,
    // base takes up at least 1 byte plus the padding
    // to satisfy alignment requirement of the first member (whose
    // alignment is the same as int)
    static_assert(sizeof(Derived3) == 3*sizeof(int));
}

```

If multiple inheritance occurs, then the specific optimizations are compiler specific.

- In MSVC, the null base class optimization is applied with and only with the last null base class, the rest of the null base classes are not applied with the null base optimization and one byte is allocated.
- In GCC, no matter how many empty base classes exist, the empty base class applies the empty base class optimization without allocating any space and the empty base class address is the same as the first address of the derived class object.

|  |  |
| --- | --- |
| Empty base optimization is **required** for StandardLayoutTypes in order to maintain the requirement that the pointer to a standard-layout object, converted using `reinterpret_cast`, points to its initial member, which is why the requirements for a standard layout type include "has all non-static data members declared in the same class (either all in the derived or all in some base)" and "has no base classes of the same type as the first non-static data member". | (since C++11) |

|  |  |
| --- | --- |
| The empty member subobjects are permitted to be optimized out just like the empty bases if they use the attribute `[[no_unique_address]]`. Taking the address of such member results in an address that may equal the address of some other member of the same object. Run this code  ```text struct Empty {}; // empty class   struct X {     int i;     [[no_unique_address]] Empty e; };   int main() {     // the size of any object of empty class type is at least 1     static_assert(sizeof(Empty) >= 1);       // empty member optimized out:     static_assert(sizeof(X) == sizeof(int)); } ``` | (since C++20) |

### Notes

Empty base optimization is commonly used by allocator-aware standard library classes (std::vector, std::function, std::shared_ptr, etc) to avoid occupying any additional storage for its allocator member if the allocator is stateless. This is achieved by storing one of the required data members (e.g., `begin`, `end`, or `capacity` pointer for the `vector`) in an equivalent of `boost::compressed_pair` with the allocator.

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 7.6.10 Equality operators [expr.eq]

:   - 7.6.2.5 Sizeof [expr.sizeof]

:   - 11 Classes [class]

:   - 11.4 Class members [class.mem]

- C++20 standard (ISO/IEC 14882:2020):

:   - 7.6.10 Equality operators [expr.eq]

:   - 7.6.2.4 Sizeof [expr.sizeof]

:   - 11 Classes [class]

:   - 11.4 Class members [class.mem]

- C++17 standard (ISO/IEC 14882:2017):

:   - 8.10 Equality operators [expr.eq]

:   - 8.3.3 Sizeof [expr.sizeof]

:   - 12 Classes [class]

:   - 12.2 Class members [class.mem]

- C++14 standard (ISO/IEC 14882:2014):

:   - 5.10 Equality operators [expr.eq]

:   - 5.3.3 Sizeof [expr.sizeof]

:   - 9 Classes [class]

:   - 9.2 Class members [class.mem]

- C++11 standard (ISO/IEC 14882:2011):

:   - 5.10 Equality operators [expr.eq] (p: 2)

:   - 5.3.3 Sizeof [expr.sizeof] (p: 2)

:   - 9 Classes [class] (p: 4,7)

:   - 9.2 Class members [class.mem] (p: 20)

- C++98 standard (ISO/IEC 14882:1998):

:   - 5.10 Equality operators [expr.eq] (p: 2)

:   - 5.3.3 Sizeof [expr.sizeof] (p: 2)

:   - 9 Classes [class] (p: 3)

### External links

|  |
| --- |
| More C++ Idioms/Empty Base Optimization — A wikibook |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/ebo&oldid=179878>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 January 2025, at 05:51.