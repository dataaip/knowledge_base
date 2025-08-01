# Language linkage

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Overview | | | | | | Declaration syntax | | | | | | **decl-specifier-seq** | | | | | | Declarator | | | | | | Conflicting declarations | | | | | | Specifiers | | | | | | typedef | | | | | | inline | | | | | | virtual function specifier | | | | | | explicit function specifier | | | | | | friend | | | | | | constexpr(C++11) | | | | | | consteval(C++20) | | | | | | constinit(C++20) | | | | | | Storage class specifiers | | | | | | Translation-unit-local (C++20) | | | | | | class/struct | | | | | | union | | | | | | enum | | | | | | decltype(C++11) | | | | | | auto(C++11) | | | | | | alignas(C++11) | | | | | | constvolatile | | | | | | Pack indexing specifier (C++26) | | | | | | Elaborated type specifier | | | | | | Attributes (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Declarators | | | | | | Reference | | | | | | Pointer | | | | | | Array | | | | | | Block declarations | | | | | | Simple-declaration | | | | | | →Structured binding declaration (C++17) | | | | | | Alias declaration (C++11) | | | | | | Namespace alias definition | | | | | | using declaration | | | | | | `using` directive | | | | | | static_assert declaration (C++11) | | | | | | asm declaration | | | | | | Opaque enum declaration (C++11) | | | | | | Other declarations | | | | | | Namespace definition | | | | | | Function declaration | | | | | | Class template declaration | | | | | | Function template declaration | | | | | | Explicit template instantiation (C++11) | | | | | | Explicit template specialization | | | | | | ****Linkage specification**** | | | | | | Attribute declaration (C++11) | | | | | | Empty declaration | | | | | |  | | | | | |

Provides for linkage between program units written in different programming languages.

|  |  |
| --- | --- |
| This can also be used to detach a declaration from its module. See Module ownership. | (since C++20) |

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `extern` string-literal `{` declaration-seq ﻿(optional) `}` | (1) |  |
|  | | | | | | | | | |
| `extern` string-literal declaration | (2) |  |
|  | | | | | | | | | |

1) Applies the language specification string-literal to all function types, function names with external linkage and variables with external linkage declared in declaration-seq.2) Applies the language specification string-literal to a single declaration or definition.

|  |  |  |
| --- | --- | --- |
| string-literal | - | an unevaluated string literal that names the required language linkage |
| declaration-seq | - | a sequence of declarations, which may include nested linkage specifications |
| declaration | - | a declaration |

### Explanation

Every function type, every function name with external linkage, and every variable name with external linkage, has a property called **language linkage**. Language linkage encapsulates the set of requirements necessary to link with a program unit written in another programming language: calling convention, name mangling (name decoration) algorithm, etc.

Only two language linkages are guaranteed to be supported:

1. "C++", the default language linkage.
2. "C", which makes it possible to link with functions written in the C programming language, and to define, in a C++ program, functions that can be called from the units written in C.

```
extern "C"
{
    int open(const char *path_name, int flags); // C function declaration
}
 
int main()
{
    int fd = open("test.txt", 0); // calls a C function from a C++ program
}
 
// This C++ function can be called from C code
extern "C" void handler(int)
{
    std::cout << "Callback invoked\n"; // It can use C++
}

```

Since language linkage is part of every function type, pointers to functions maintain language linkage as well. Language linkage of function types (which represents calling convention) and language linkage of function names (which represents name mangling) are independent of each other:

```
extern "C" void f1(void(*pf)()); // declares a function f1 with C linkage,
                             // which returns void and takes a pointer to a C function
                             // which returns void and takes no parameters
 
extern "C" typedef void FUNC(); // declares FUNC as a C function type that returns void
                                // and takes no parameters
 
FUNC f2;            // the name f2 has C++ linkage, but its type is C function
extern "C" FUNC f3; // the name f3 has C linkage and its type is C function void()
void (*pf2)(FUNC*); // the name pf2 has C++ linkage, and its type is
                    // "pointer to a C++ function which returns void and takes one
                    // argument of type 'pointer to the C function which returns void
                    // and takes no parameters'"
 
extern "C"
{
    static void f4(); // the name of the function f4 has internal linkage (no language)
                      // but the function's type has C language linkage
}

```

If two declarations of an entity give it different language linkages, the program is ill-formed; no diagnostic is required if neither declaration is reachable from the other. A redeclaration of an entity without a linkage specification inherits the language linkage of the entity and its type (if exists).

```
extern "C" int f();
extern "C++" int f(); // Error: different language linkages
 
extern "C" int g();
int g(); // OK, has C language linkage
 
int h(); // has C++ language linkage by default
extern "C" int h(); // Error: different language linkages

```

#### Special rules for "C" linkage

When class members, friend functions with a trailing requires clause,(since C++20) or non-static member functions appear in a "C" language block, the linkage of their types remains "C++" (but parameter types, if any, remain "C"):

```
extern "C"
{
    class X
    {
        void mf();           // the function mf and its type have C++ language linkage
        void mf2(void(*)()); // the function mf2 has C++ language linkage;
                             // the parameter has type “pointer to C function”
    };
}
 
template<typename T>
struct A { struct B; };
 
extern "C"
{
    template<typename T>
    struct A<T>::B
    {
        friend void f(B*) requires true {} // C language linkage ignored
    };
}
 
namespace Q
{
    extern "C" void f(); // not ill-formed
}

```

Let `C` be a declaration that declares a function or variable with "C" language linkage. If another declaration `D` declares an entity with the same name, and it satisfies any of the following conditions, `C` and `D` declare the same entity:

- `D` declares a variable that belongs to the global scope.
- If `C` declares a variable, `D` also declares a variable.
- If `C` declares a function, `D` also declares a function.

Unlike regular redeclarations, `C` and `D` can have different target scopes:

```
extern "C"
{
    int x;
    int f();
    int g() { return 1; }
}
 
namespace A
{
    int x;                // Error: redefines “x”
    int f();              // OK, redeclares “f”
    int g() { return 1; } // Error: redefines “g”
}

```

However, the restrictions of such declarations still apply, which means they should either both declare functions or both declare variables, and the declared entities must have the same type:

```
namespace A
{
    extern "C" int x();
    extern "C" int y();
}
 
int x; // Error: redeclares “x” as a different kind of entity
 
namespace B
{
    void y(); // Error: redeclares “y” with a different type
}

```

### Notes

Language specifications can only appear in namespace scope.

The braces of the language specification do not establish a scope.

When language specifications nest, the innermost specification is the one that is in effect.

A declaration directly contained in a language linkage specification is treated as if it contains the extern specifier for the purpose of determining the linkage of the declared name and whether it is a definition.

```
extern "C" int x; // a declaration and not a definition
// The above line is equivalent to extern "C" { extern int x; }
 
extern "C" { int x; } // a declaration and definition
 
extern "C" double f();
static double f(); // error: linkage conflict
 
extern "C" static void g(); // error: linkage conflict

```

extern "C" makes it possible to include header files containing declarations of C library functions in a C++ program, but if the same header file is shared with a C program, extern "C" (which is not allowed in C) must be hidden with an appropriate #ifdef, typically __cplusplus:

```
#ifdef __cplusplus
extern "C" int foo(int, int); // C++ compiler sees this
#else
int foo(int, int);            // C compiler sees this
#endif

```

The only modern compiler that differentiates function types with "C" and "C++" language linkages is Oracle Studio, others do not permit overloads that are only different in language linkage, including the overload sets required by the C++ standard (std::qsort, std::bsearch, std::signal, std::atexit, and std::at_quick_exit): GCC bug 2316, Clang bug 6277, CWG issue 1555.

```
extern "C"   using c_predfun   = int(const void*, const void*);
extern "C++" using cpp_predfun = int(const void*, const void*);
 
// ill-formed, but accepted by most compilers
static_assert(std::is_same<c_predfun, cpp_predfun>::value,
              "C and C++ language linkages shall not differentiate function types.");
 
// following declarations do not declare overloads in most compilers
// because c_predfun and cpp_predfun are considered to be the same type
void qsort(void* base, std::size_t nmemb, std::size_t size, c_predfun*   compar);
void qsort(void* base, std::size_t nmemb, std::size_t size, cpp_predfun* compar);

```

### Keywords

extern

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 4 | C++98 | names with internal linkage can have language linkages | limited to names with external linkage |
| CWG 341 | C++98 | a function with "C" language linkage can have the same name as a global variable | the program is ill-formed in this case (no diagnostic required if they appear in different translation units) |
| CWG 564 | C++98 | the program was ill-formed if two declarations only differ in language linkage specifications (i.e. different string literals following 'extern') | the actual language linkages given by the declarations are compared instead |
| CWG 2460 | C++20 | friend functions with a trailing requires clause and "C" language linkage had conflict behaviors | "C" language linkage is ignored in this case |
| CWG 2483 | C++98 | the linkage of the types of static member functions appear in "C" language blocks was "C++" | the linkage is "C" |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 9.11 Linkage specifications [dcl.link]

- C++20 standard (ISO/IEC 14882:2020):

:   - 9.11 Linkage specifications [dcl.link]

- C++17 standard (ISO/IEC 14882:2017):

:   - 10.5 Linkage specifications [dcl.link]

- C++14 standard (ISO/IEC 14882:2014):

:   - 7.5 Linkage specifications [dcl.link]

- C++11 standard (ISO/IEC 14882:2011):

:   - 7.5 Linkage specifications [dcl.link]

- C++03 standard (ISO/IEC 14882:2003):

:   - 7.5 Linkage specifications [dcl.link]

- C++98 standard (ISO/IEC 14882:1998):

:   - 7.5 Linkage specifications [dcl.link]

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/language_linkage&oldid=176550>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 September 2024, at 02:52.