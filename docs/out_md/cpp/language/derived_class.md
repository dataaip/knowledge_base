# Derived classes

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
| ****Base and derived classes**** | | | | |
| Empty base optimization (EBO) | | | | |
| Virtual member functions | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

Any class type (whether declared with class-key `class` or `struct`) may be declared as **derived** from one or more **base classes** which, in turn, may be derived from their own base classes, forming an inheritance hierarchy.

### Syntax

The list of base classes is provided in the base-clause of the class declaration syntax. The base-clause consists of the character `:` followed by a comma-separated list of one or more base-specifiers.

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr ﻿(optional) class-or-computed | (1) |  |
|  | | | | | | | | | |
| attr ﻿(optional) `virtual` class-or-computed | (2) |  |
|  | | | | | | | | | |
| attr ﻿(optional) access-specifier class-or-computed | (3) |  |
|  | | | | | | | | | |
| attr ﻿(optional) `virtual` access-specifier class-or-computed | (4) |  |
|  | | | | | | | | | |
| attr ﻿(optional) access-specifier `virtual` class-or-computed | (5) |  |
|  | | | | | | | | | |

1) Specifies a non-virtual inheritance with default member accessibility.2) Specifies a virtual inheritance with default member accessibility.3) Specifies a non-virtual inheritance with given member accessibility.4) Specifies a virtual inheritance with given member accessibility.5) Same as 4), `virtual` and access-specifier can appear in any order.

|  |  |  |
| --- | --- | --- |
| attr | - | (since C++11) sequence of any number of attributes |
| access-specifier | - | one of `private`, `public`, or `protected` |
| class-or-computed | - | one of  - nested-name-specifier ﻿(optional) type-name - nested-name-specifier `template` simple-template-id  |  |  | | --- | --- | | - decltype-specifier | (since C++11) |  |  |  | | --- | --- | | - pack-index-specifier | (since C++26) | |

An elaborated type specifier cannot directly appear as class-or-computed due to syntax limitations.

|  |  |
| --- | --- |
| base-specifiers in a base-clause may be pack expansions.  A class or struct declared `final` cannot be denoted by class-or-computed. | (since C++11) |

If access-specifier is omitted, it defaults to `public` for derived classes declared with class-key `struct` and to `private` for derived classes declared with class-key `class`.

```
struct Base
{
    int a, b, c;
};
 
// every object of type Derived includes Base as a subobject
struct Derived : Base
{
    int b;
};
 
// every object of type Derived2 includes Derived and Base as subobjects
struct Derived2 : Derived
{
    int c;
};

```

Classes denoted by class-or-computed's listed in the base-clause are direct base classes. Their bases are indirect base classes. The same class cannot be specified as a direct base class more than once, but the same class can be both direct and indirect base class.

Each direct and indirect base class is present, as **base class subobject**, within the object representation of the derived class at an ABI-dependent offset. Empty base classes usually do not increase the size of the derived object due to empty base optimization. The constructors of base class subobjects are called by the constructor of the derived class: arguments may be provided to those constructors in the member initializer list.

### Virtual base classes

For each distinct base class that is specified `virtual`, the most derived object contains only one base class subobject of that type, even if the class appears many times in the inheritance hierarchy (as long as it is inherited `virtual` every time).

```
struct B { int n; };
class X : public virtual B {};
class Y : virtual public B {};
class Z : public B {};
 
// every object of type AA has one X, one Y, one Z, and two B's:
// one that is the base of Z and one that is shared by X and Y
struct AA : X, Y, Z
{
    AA()
    {
        X::n = 1; // modifies the virtual B subobject's member
        Y::n = 2; // modifies the same virtual B subobject's member
        Z::n = 3; // modifies the non-virtual B subobject's member
 
        std::cout << X::n << Y::n << Z::n << '\n'; // prints 223
    }
};

```

An example of an inheritance hierarchy with virtual base classes is the iostreams hierarchy of the standard library: std::istream and std::ostream are derived from std::ios using virtual inheritance. std::iostream is derived from both std::istream and std::ostream, so every instance of std::iostream contains a std::ostream subobject, a std::istream subobject, and just one std::ios subobject (and, consequently, one std::ios_base).

All virtual base subobjects are initialized before any non-virtual base subobject, so only the most derived class calls the constructors of the virtual bases in its member initializer list:

```
struct B
{
    int n;
 
    B(int x) : n(x) {}
};
 
struct X : virtual B { X() : B(1) {} };
struct Y : virtual B { Y() : B(2) {} };
struct AA : X, Y     { AA() : B(3), X(), Y() {} };
 
// the default constructor of AA calls the default constructors of X and Y
// but those constructors do not call the constructor of B because B is a virtual base
AA a; // a.n == 3
 
// the default constructor of X calls the constructor of B
X x;  // x.n == 1

```

There are special rules for unqualified name lookup for class members when virtual inheritance is involved (sometimes referred to as the rules of dominance).

### Public inheritance

When a class uses `public` member access specifier to derive from a base, all public members of the base class are accessible as public members of the derived class and all protected members of the base class are accessible as protected members of the derived class (private members of the base are never accessible unless friended).

Public inheritance models the subtyping relationship of object-oriented programming: the derived class object IS-A base class object. References and pointers to a derived object are expected to be usable by any code that expects references or pointers to any of its public bases (see LSP) or, in DbC terms, a derived class should maintain class invariants of its public bases, should not strengthen any precondition or weaken any postcondition of a member function it overrides.

Run this code

```
#include <iostream>
#include <string>
#include <vector>
 
struct MenuOption { std::string title; };
 
// Menu is a vector of MenuOption: options can be inserted, removed, reordered...
// and has a title.
class Menu : public std::vector<MenuOption>
{
public:
    std::string title;
 
    void print() const
    {
        std::cout << title << ":\n";
        for (std::size_t i = 0, s = size(); i < s; ++i)
            std::cout << "  " << (i + 1) << ". " << at(i).title << '\n';
    }
};
// Note: Menu::title is not problematic because its role is independent of the base class.
 
enum class Color { WHITE, RED, BLUE, GREEN };
 
void apply_terminal_color(Color) { /* OS-specific */ }
 
// THIS IS BAD!
// ColorMenu is a Menu where every option has a custom color.
class ColorMenu : public Menu
{
public:
    std::vector<Color> colors;
 
    void print() const
    {
        std::cout << title << ":\n";
 
        for (std::size_t i = 0, s = size(); i < s; ++i)
        {
            std::cout << "  " << (i + 1) << ". ";
            apply_terminal_color(colors[i]);
            std::cout << at(i).title << '\n';
            apply_terminal_color(Color::WHITE);
        }
    }
};
// ColorMenu needs the following invariants that cannot be satisfied
// by publicly inheriting from Menu, for example:
// - ColorMenu::colors and Menu must have the same number of elements
// - To make sense, calling erase() should remove also elements from colors,
//   in order to let options keep their colors
// Basically every non-const call to a std::vector method will break the invariant
// of the ColorMenu and will need fixing from the user by correctly managing colors.
 
int main()
{
    ColorMenu color_menu;
 
    // The big problem of this class is that we must keep ColorMenu::Color
    // in sync with Menu.
    color_menu.push_back(MenuOption{"Some choice"});
 
    // color_menu.print(); // ERROR! colors[i] in print() is out of range
 
    color_menu.colors.push_back(Color::RED);
 
    color_menu.print(); // OK: colors and Menu has the same number of elements
}

```

### Protected inheritance

When a class uses `protected` member access specifier to derive from a base, all public and protected members of the base class are accessible as protected members of the derived class (private members of the base are never accessible unless friended).

Protected inheritance may be used for "controlled polymorphism": within the members of Derived, as well as within the members of all further-derived classes, the derived class IS-A base: references and pointers to Derived may be used where references and pointers to Base are expected.

### Private inheritance

When a class uses `private` member access specifier to derive from a base, all public and protected members of the base class are accessible as private members of the derived class (private members of the base are never accessible unless friended).

Private inheritance is commonly used in policy-based design, since policies are usually empty classes, and using them as bases both enables static polymorphism and leverages empty-base optimization.

Private inheritance can also be used to implement the composition relationship (the base class subobject is an implementation detail of the derived class object). Using a member offers better encapsulation and is generally preferred unless the derived class requires access to protected members (including constructors) of the base, needs to override a virtual member of the base, needs the base to be constructed before and destructed after some other base subobject, needs to share a virtual base or needs to control the construction of a virtual base. Use of members to implement composition is also not applicable in the case of multiple inheritance from a parameter pack or when the identities of the base classes are determined at compile time through template metaprogramming.

Similar to protected inheritance, private inheritance may also be used for controlled polymorphism: within the members of the derived (but not within further-derived classes), derived IS-A base.

```
template<typename Transport>
class service : private Transport // private inheritance from the Transport policy
{
public:
    void transmit()
    {
        this->send(...); // send using whatever transport was supplied
    }
};
 
// TCP transport policy
class tcp
{
public:
    void send(...);
};
 
// UDP transport policy
class udp
{
public:
    void send(...);
};
 
service<tcp> service(host, port); 
service.transmit(...); // send over TCP

```

### Member name lookup

Unqualified and qualified name lookup rules for class members are detailed in name lookup.

### Keywords

virtual

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1710 | C++98 | the syntax of class-or-decltype made it impossible to derive from a dependent class where the template disambiguator is required | allowed template |

### See also

- virtual functions
- abstract classes
Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/derived_class&oldid=174551>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 August 2024, at 22:22.