# Translation-unit-local entities (since C++20)

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

Declarations

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Overview | | | | | | Declaration syntax | | | | | | **decl-specifier-seq** | | | | | | Declarator | | | | | | Conflicting declarations | | | | | | Specifiers | | | | | | typedef | | | | | | inline | | | | | | virtual function specifier | | | | | | explicit function specifier | | | | | | friend | | | | | | constexpr(C++11) | | | | | | consteval(C++20) | | | | | | constinit(C++20) | | | | | | Storage class specifiers | | | | | | ****Translation-unit-local**** (C++20) | | | | | | class/struct | | | | | | union | | | | | | enum | | | | | | decltype(C++11) | | | | | | auto(C++11) | | | | | | alignas(C++11) | | | | | | constvolatile | | | | | | Pack indexing specifier (C++26) | | | | | | Elaborated type specifier | | | | | | Attributes (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Declarators | | | | | | Reference | | | | | | Pointer | | | | | | Array | | | | | | Block declarations | | | | | | Simple-declaration | | | | | | →Structured binding declaration (C++17) | | | | | | Alias declaration (C++11) | | | | | | Namespace alias definition | | | | | | using declaration | | | | | | `using` directive | | | | | | static_assert declaration (C++11) | | | | | | asm declaration | | | | | | Opaque enum declaration (C++11) | | | | | | Other declarations | | | | | | Namespace definition | | | | | | Function declaration | | | | | | Class template declaration | | | | | | Function template declaration | | | | | | Explicit template instantiation (C++11) | | | | | | Explicit template specialization | | | | | | Linkage specification | | | | | | Attribute declaration (C++11) | | | | | | Empty declaration | | | | | |  | | | | | |

Translation-unit-local (TU-local) entities are introduced to prevent entities that are supposed to be local (not used in any other translation unit) being exposed and used in other translation units.

An example from Understanding C++ Modules: Part 2 illustrates the problem of not constraining exposures:

```
// Module unit without TU-local constraints
export module Foo;
 
import <iostream>;
 
namespace
{
   class LolWatchThis {        // internal linkage, cannot be exported
       static void say_hello()
       {
           std::cout << "Hello, everyone!\n";
       }
   };
}
 
export LolWatchThis lolwut() { // LolWatchThis is exposed as return type
    return LolWatchThis();
}

```

```
// main.cpp
import Foo;
 
int main()
{
    auto evil = lolwut();        // 'evil' has type of 'LolWatchThis'
    decltype(evil)::say_hello(); // definition of 'LolWatchThis' is not internal anymore
}

```

### TU-local entities

An entity is **TU-local** if it is

1. a type, function, variable, or template that
   1. has a name with internal linkage, or
   2. does not have a name with linkage and is declared, or introduced by a lambda expression, within the definition of a TU-local entity,
2. a type with no name that is defined outside a class-specifier, function body, or initializer or is introduced by a defining-type-specifier (type-specifier, class-specifier or enum-specifier) that is used to declare only TU-local entities,
3. a specialization of a TU-local template,
4. a specialization of a template with any TU-local template argument, or
5. a specialization of a template whose (possibly instantiated) declaration is an exposure (defined below).

```
// TU-local entities with internal linkage
namespace { // all names declared in unnamed namespace have internal linkage
    int tul_var = 1;                          // TU-local variable
    int tul_func() { return 1; }              // TU-local function
    struct tul_type { int mem; };             // TU-local (class) type
}
template<typename T>
static int tul_func_temp() { return 1; }      // TU-local template
 
// TU-local template specialization
template<>
static int tul_func_temp<int>() { return 3; } // TU-local specialization
 
// template specialization with TU-local template argument
template <> struct std::hash<tul_type> {      // TU-local specialization
    std::size_t operator()(const tul_type& t) const { return 4u; }
};

```

|  |  |
| --- | --- |
|  | This section is incomplete Reason: missing examples of rules #1.2, #2 and #5 |

A value or object is **TU-local** if either

1. it is, or is a pointer to, a TU-local function or the object associated with a TU-local variable, or
2. it is an object of class or array type and any of its subobjects or any of the objects or functions to which its non-static data members of reference type refer is TU-local and is usable in constant expressions.

```
static int tul_var = 1;             // TU-local variable
static int tul_func() { return 1; } // TU-local function
 
int* tul_var_ptr = &tul_var;        // TU-local: pointer to TU-local variable
int (* tul_func_ptr)() = &tul_func; // TU-local: pointer to TU-local function
 
constexpr static int tul_const = 1; // TU-local variable usable in constant expressions
int tul_arr[] = { tul_const };      // TU-local: array of constexpr TU-local object 
struct tul_class { int mem; };
tul_class tul_obj{tul_const};       // TU-local: has member constexpr TU-local object

```

### Exposures

A declaration D **names** an entity E if

1. D contains a lambda expression whose closure type is E,
2. E is not a function or function template and D contains an id-expression, type-specifier, nested-name-specifier, template-name, or concept-name denoting E, or
3. E is a function or function template and D contains an expression that names E or an id-expression that refers to a set of overloads that contains E.

```
// lambda naming
auto x = [] {}; // names decltype(x)
 
// non-function (template) naming
int y1 = 1;                      // names y1 (id-expression)
struct y2 { int mem; };
y2 y2_obj{1};                    // names y2 (type-specifier)
struct y3 { int mem_func(); };
int y3::mem_func() { return 0; } // names y3 (nested-name-specifier)
template<typename T> int y4 = 1;
int var = y4<y2>;                // names y4 (template-name)
template<typename T> concept y5 = true;
template<typename T> void func(T&&) requires y5<T>; // names y5 (concept-name)
 
// function (template) naming
int z1(int arg)    { std::cout << "no overload"; return 0; }
int z2(int arg)    { std::cout << "overload 1";  return 1; }
int z2(double arg) { std::cout << "overload 2";  return 2; }
 
int val1 = z1(0); // names z1
int val2 = z2(0); // names z2 ( int z2(int) )

```

A declaration is an **exposure** if it either names a TU-local entity, ignoring

1. the function-body for a non-inline function or function template (but not the deduced return type for a (possibly instantiated) definition of a function with a declared return type that uses a placeholder type),
2. the initializer for a variable or variable template (but not the variable’s type),
3. friend declarations in a class definition, and
4. any reference to a non-volatile const object or reference with internal or no linkage initialized with a constant expression that is not an odr-use,

or defines a constexpr variable initialized to a TU-local value.

|  |  |
| --- | --- |
|  | This section is incomplete Reason: missing examples for exposures |

### TU-local constraints

If a (possibly instantiated) declaration of, or a deduction guide for, a non-TU-local entity in a module interface unit (outside the private-module-fragment, if any) or module partition is an exposure, the program is ill-formed. Such a declaration in any other context is deprecated.

If a declaration that appears in one translation unit names a TU-local entity declared in another translation unit that is not a header unit, the program is ill-formed. A declaration instantiated for a template specialization appears at the point of instantiation of the specialization.

|  |  |
| --- | --- |
|  | This section is incomplete Reason: missing examples for constraints |

### Example

Translation unit #1:

```
export module A;
static void f() {}
inline void it() { f(); }         // error: is an exposure of f
static inline void its() { f(); } // OK
template<int> void g() { its(); } // OK
template void g<0>();
 
decltype(f) *fp;                             // error: f (though not its type) is TU-local
auto &fr = f;                                // OK
constexpr auto &fr2 = fr;                    // error: is an exposure of f
constexpr static auto fp2 = fr;              // OK
struct S { void (&ref)(); } s{f};            // OK: value is TU-local
constexpr extern struct W { S &s; } wrap{s}; // OK: value is not TU-local
 
static auto x = []{ f(); }; // OK
auto x2 = x;                // error: the closure type is TU-local
int y = ([]{ f(); }(), 0);  // error: the closure type is not TU-local
int y2 = (x, 0);            // OK
 
namespace N
{
    struct A {};
    void adl(A);
    static void adl(int);
}
void adl(double);
 
inline void h(auto x) { adl(x); } // OK, but a specialization might be an exposure

```

Translation unit #2:

```
module A;
void other()
{
    g<0>();                  // OK: specialization is explicitly instantiated
    g<1>();                  // error: instantiation uses TU-local its
    h(N::A{});               // error: overload set contains TU-local N::adl(int)
    h(0);                    // OK: calls adl(double)
    adl(N::A{});             // OK; N::adl(int) not found, calls N::adl(N::A)
    fr();                    // OK: calls f
    constexpr auto ptr = fr; // error: fr is not usable in constant expressions here
}

```

|  |  |
| --- | --- |
|  | This section is incomplete Reason: examples are too complex, need better arrangement |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/tu_local&oldid=151923>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 May 2023, at 23:13.