# Union declaration

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Fundamental types | | | | | | Enumeration types | | | | | | Function types | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Class/struct types | | | | | | ****Union types**** | | | | | |  | | | | | |
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
| ****`union` types**** | | | | |
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
| Empty base optimization (EBO) | | | | |
| Virtual member functions | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

A union is a special class type that can hold only one of its non-static data members at a time.

### Syntax

The class specifier for a union declaration is similar to class or struct declaration:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `union` attr class-head-name `{` member-specification `}` |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) optional sequence of any number of attributes |
| class-head-name | - | the name of the union that's being defined. Optionally prepended by nested-name-specifier (sequence of names and scope-resolution operators, ending with scope-resolution operator). The name may be omitted, in which case the union is **unnamed** |
| member-specification | - | list of access specifiers, member object and member function declarations and definitions. |

A union can have member functions (including constructors and destructors), but not virtual functions.

A union cannot have base classes and cannot be used as a base class.

A union cannot have non-static data members of reference types.

|  |  |
| --- | --- |
| Unions cannot contain a non-static data member with a non-trivial special member function (copy constructor, copy-assignment operator, or destructor). | (until C++11) |
| If a union contains a non-static data member with a non-trivial special member function (copy/move constructor, copy/move assignment, or destructor), that function is deleted by default in the union and needs to be defined explicitly by the programmer.  If a union contains a non-static data member with a non-trivial default constructor, the default constructor of the union is deleted by default unless a variant member of the union has a default member initializer.  At most one variant member can have a default member initializer. | (since C++11) |

Just like in struct declaration, the default member access in a union is public.

### Explanation

The union is at least as big as necessary to hold its largest data member, but is usually not larger. The other data members are intended to be allocated in the same bytes as part of that largest member. The details of that allocation are implementation-defined, except that all non-static data members have the same address. It is undefined behavior to read from the member of the union that wasn't most recently written. Many compilers implement, as a non-standard language extension, the ability to read inactive members of a union.

Run this code

```
#include <cstdint>
#include <iostream>
 
union S
{
    std::int32_t n;     // occupies 4 bytes
    std::uint16_t s[2]; // occupies 4 bytes
    std::uint8_t c;     // occupies 1 byte
};                      // the whole union occupies 4 bytes
 
int main()
{
    S s = {0x12345678}; // initializes the first member, s.n is now the active member
    // At this point, reading from s.s or s.c is undefined behavior,
    // but most compilers define it.
    std::cout << std::hex << "s.n = " << s.n << '\n';
 
    s.s[0] = 0x0011; // s.s is now the active member
    // At this point, reading from s.n or s.c is undefined behavior,
    // but most compilers define it.
    std::cout << "s.c is now " << +s.c << '\n' // 11 or 00, depending on platform
              << "s.n is now " << s.n << '\n'; // 12340011 or 00115678
}

```

Possible output:

```
s.n = 12345678
s.c is now 0
s.n is now 115678

```

Each member is allocated as if it is the only member of the class.

|  |  |
| --- | --- |
| If members of a union are classes with user-defined constructors and destructors, to switch the active member, explicit destructor and placement new are generally needed: Run this code  ```text #include <iostream> #include <string> #include <vector>   union S {     std::string str;     std::vector<int> vec;     ~S() {} // needs to know which member is active, only possible in union-like class  };          // the whole union occupies max(sizeof(string), sizeof(vector<int>))   int main() {     S s = {"Hello, world"};     // at this point, reading from s.vec is undefined behavior     std::cout << "s.str = " << s.str << '\n';     s.str.~basic_string();     new (&s.vec) std::vector<int>;     // now, s.vec is the active member of the union     s.vec.push_back(10);     std::cout << s.vec.size() << '\n';     s.vec.~vector(); } ```   Output:   ```text s.str = Hello, world 1 ``` | (since C++11) |

If two union members are standard-layout types, it's well-defined to examine their common subsequence on any compiler.

#### Member lifetime

The lifetime of a union member begins when the member is made active. If another member was active previously, its lifetime ends.

When active member of a union is switched by an assignment expression of the form `E1 = E2` that uses either the built-in assignment operator or a trivial assignment operator, for each union member X that appears in the member access and array subscript subexpressions of `E1` that is not a class with non-trivial or deleted default constructors, if modification of X would have undefined behavior under type aliasing rules, an object of the type of X is implicitly created in the nominated storage; no initialization is performed and the beginning of its lifetime is sequenced after the value computation of the left and right operands and before the assignment.

```
union A { int x; int y[4]; };
struct B { A a; };
union C { B b; int k; };
 
int f()
{
    C c;               // does not start lifetime of any union member
    c.b.a.y[3] = 4;    // OK: "c.b.a.y[3]", names union members c.b and c.b.a.y;
                       // This creates objects to hold union members c.b and c.b.a.y
    return c.b.a.y[3]; // OK: c.b.a.y refers to newly created object
}
 
struct X { const int a; int b; };
union Y { X x; int k; };
 
void g()
{
    Y y = {{1, 2}}; // OK, y.x is active union member
    int n = y.x.a;
    y.k = 4;   // OK: ends lifetime of y.x, y.k is active member of union
    y.x.b = n; // undefined behavior: y.x.b modified outside its lifetime,
               // "y.x.b" names y.x, but X's default constructor is deleted,
               // so union member y.x's lifetime does not implicitly start
}

```

Trivial move constructor, move assignment operator, (since C++11)copy constructor and copy assignment operator of union types copy object representations. If the source and the destination are not the same object, these special member functions start lifetime of every object (except for objects that are neither subobjects of the destination nor of implicit-lifetime type) nested in the destination corresponding to the one nested in the source before the copy is performed. Otherwise, they do nothing. Two union objects have the same corresponding active member (if any) after construction or assignment via trivial special functions.

#### Anonymous unions

An **anonymous union** is an unnamed union definition that does not simultaneously define any variables (including objects of the union type, references, or pointers to the union).

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `union` `{` member-specification `}` `;` |  |  |
|  | | | | | | | | | |

Anonymous unions have further restrictions: they cannot have member functions, cannot have static data members, and all their data members must be public. The only declarations allowed are non-static data members  and `static_assert` declarations(since C++11).

Members of an anonymous union are injected in the enclosing scope (and must not conflict with other names declared there).

```
int main()
{
    union
    {
        int a;
        const char* p;
    };
    a = 1;
    p = "Jennifer";
}

```

Namespace-scope anonymous unions must be declared static unless they appear in an unnamed namespace.

#### Union-like classes

A **union-like class** is either a union, or a (non-union) class that has at least one anonymous union as a member. A union-like class has a set of **variant members**:

- the non-static data members of its member anonymous unions;
- in addition, if the union-like class is a union, its non-static data members that are not anonymous unions.

Union-like classes can be used to implement tagged union.

Run this code

```
#include <iostream>
 
// S has one non-static data member (tag), three enumerator members (CHAR, INT, DOUBLE), 
// and three variant members (c, i, d)
struct S
{
    enum{CHAR, INT, DOUBLE} tag;
    union
    {
        char c;
        int i;
        double d;
    };
};
 
void print_s(const S& s)
{
    switch(s.tag)
    {
        case S::CHAR: std::cout << s.c << '\n'; break;
        case S::INT: std::cout << s.i << '\n'; break;
        case S::DOUBLE: std::cout << s.d << '\n'; break;
    }
}
 
int main()
{
    S s = {S::CHAR, 'a'};
    print_s(s);
    s.tag = S::INT;
    s.i = 123;
    print_s(s);
}

```

Output:

```
a
123

```

|  |  |
| --- | --- |
| The C++ standard library includes std::variant, which can replace many uses of unions and union-like classes. The example above can be re-written as Run this code  ```text #include <iostream> #include <variant>   int main() {     std::variant<char, int, double> s = 'a';     std::visit([](auto x){ std::cout << x << '\n';}, s);     s = 123;     std::visit([](auto x){ std::cout << x << '\n';}, s); } ```   Output:   ```text a 123 ``` | (since C++17) |

### Keywords

union

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1940 | C++11 | anonymous unions only allowed non-static data members | `static_assert` also allowed |

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 11.5 Unions [class.union]

- C++20 standard (ISO/IEC 14882:2020):

:   - 11.5 Unions [class.union]

- C++17 standard (ISO/IEC 14882:2017):

:   - 12.3 Unions [class.union]

- C++14 standard (ISO/IEC 14882:2014):

:   - 9.5 Unions [class.union]

- C++11 standard (ISO/IEC 14882:2011):

:   - 9.5 Unions [class.union]

- C++03 standard (ISO/IEC 14882:2003):

:   - 9.5 Unions [class.union]

- C++98 standard (ISO/IEC 14882:1998):

:   - 9.5 Unions [class.union]

### See also

|  |  |
| --- | --- |
| variant(C++17) | a type-safe discriminated union   (class template) |
| C documentation for Union declaration | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/union&oldid=179775>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 January 2025, at 16:19.