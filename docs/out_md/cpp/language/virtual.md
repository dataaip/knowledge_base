# `virtual` function specifier

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Virtual function**** | | | | | | `override` specifier (C++11) | | | | | | `final` specifier (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | explicit (C++11) | | | | | | static | | | | | |  | | | | | |
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
| Empty base optimization (EBO) | | | | |
| ****Virtual member functions**** | | | | |
| Pure virtual functions and abstract classes | | | | |
| `override` specifier (C++11) | | | | |
| `final` specifier (C++11) | | | | |

The virtual specifier specifies that a non-static member function is **virtual** and supports dynamic dispatch. It may only appear in the decl-specifier-seq of the initial declaration of a non-static member function (i.e., when it is declared in the class definition).

### Explanation

Virtual functions are member functions whose behavior can be overridden in derived classes. As opposed to non-virtual functions, the overriding behavior is preserved even if there is no compile-time information about the actual type of the class. That is to say, if a derived class is handled using pointer or reference to the base class, a call to an overridden virtual function would invoke the behavior defined in the derived class. Such a function call is known as **virtual function call** or **virtual call**. Virtual function call is suppressed if the function is selected using qualified name lookup (that is, if the function's name appears to the right of the scope resolution operator `::`).

Run this code

```
#include <iostream>
 
struct Base
{
    virtual void f()
    {
        std::cout << "base\n";
    }
};
 
struct Derived : Base
{
    void f() override // 'override' is optional
    {
        std::cout << "derived\n";
    }
};
 
int main()
{
    Base b;
    Derived d;
 
    // virtual function call through reference
    Base& br = b; // the type of br is Base&
    Base& dr = d; // the type of dr is Base& as well
    br.f(); // prints "base"
    dr.f(); // prints "derived"
 
    // virtual function call through pointer
    Base* bp = &b; // the type of bp is Base*
    Base* dp = &d; // the type of dp is Base* as well
    bp->f(); // prints "base"
    dp->f(); // prints "derived"
 
    // non-virtual function call
    br.Base::f(); // prints "base"
    dr.Base::f(); // prints "base"
}

```

### In detail

If some member function `vf` is declared as `virtual` in a class `Base`, and some class `Derived`, which is derived, directly or indirectly, from `Base`, has a declaration for member function with the same

- name
- parameter type list (but not the return type)
- cv-qualifiers
- ref-qualifiers

Then this function in the class `Derived` is also **virtual** (whether or not the keyword `virtual` is used in its declaration) and **overrides** Base::vf (whether or not the word `override` is used in its declaration).

`Base::vf` does not need to be accessible or visible to be overridden. (`Base::vf` can be declared private, or `Base` can be inherited using private inheritance. Any members with the same name in a base class of `Derived` which inherits `Base` do not matter for override determination, even if they would hide `Base::vf` during name lookup.)

```
class B
{
    virtual void do_f(); // private member
public:
    void f() { do_f(); } // public interface
};
 
struct D : public B
{
    void do_f() override; // overrides B::do_f
};
 
int main()
{
    D d;
    B* bp = &d;
    bp->f(); // internally calls D::do_f();
}

```

For every virtual function, there is the **final overrider**, which is executed when a virtual function call is made. A virtual member function `vf` of a base class `Base` is the final overrider unless the derived class declares or inherits (through multiple inheritance) another function that overrides `vf`.

```
struct A { virtual void f(); };     // A::f is virtual
struct B : A { void f(); };         // B::f overrides A::f in B
struct C : virtual B { void f(); }; // C::f overrides A::f in C
 
struct D : virtual B {}; // D does not introduce an overrider, B::f is final in D
 
struct E : C, D          // E does not introduce an overrider, C::f is final in E
{
    using A::f; // not a function declaration, just makes A::f visible to lookup
};
 
int main()
{
    E e;
    e.f();    // virtual call calls C::f, the final overrider in e
    e.E::f(); // non-virtual call calls A::f, which is visible in E
}

```

If a function has more than one final overrider, the program is ill-formed:

```
struct A
{
    virtual void f();
};
 
struct VB1 : virtual A
{
    void f(); // overrides A::f
};
 
struct VB2 : virtual A
{
    void f(); // overrides A::f
};
 
// struct Error : VB1, VB2
// {
//     // Error: A::f has two final overriders in Error
// };
 
struct Okay : VB1, VB2
{
    void f(); // OK: this is the final overrider for A::f
};
 
struct VB1a : virtual A {}; // does not declare an overrider
 
struct Da : VB1a, VB2
{
    // in Da, the final overrider of A::f is VB2::f
};

```

A function with the same name but different parameter list does not override the base function of the same name, but **hides** it: when unqualified name lookup examines the scope of the derived class, the lookup finds the declaration and does not examine the base class.

```
struct B
{
    virtual void f();
};
 
struct D : B
{
    void f(int); // D::f hides B::f (wrong parameter list)
};
 
struct D2 : D
{
    void f(); // D2::f overrides B::f (doesn't matter that it's not visible)
};
 
int main()
{
    B b;
    B& b_as_b = b;
 
    D d;
    B& d_as_b = d;
    D& d_as_d = d;
 
    D2 d2;
    B& d2_as_b = d2;
    D& d2_as_d = d2;
 
    b_as_b.f();  // calls B::f()
    d_as_b.f();  // calls B::f()
    d2_as_b.f(); // calls D2::f()
 
    d_as_d.f();  // Error: lookup in D finds only f(int)
    d2_as_d.f(); // Error: lookup in D finds only f(int)
}

```

|  |  |
| --- | --- |
| If a function is declared with the specifier `override`, but does not override a virtual function, the program is ill-formed:   ```text struct B {     virtual void f(int); };   struct D : B {     virtual void f(int) override;  // OK, D::f(int) overrides B::f(int)     virtual void f(long) override; // Error: f(long) does not override B::f(int) }; ```   If a function is declared with the specifier `final`, and another function attempts to override it, the program is ill-formed:   ```text struct B {     virtual void f() const final; };   struct D : B {     void f() const; // Error: D::f attempts to override final B::f }; ``` | (since C++11) |

Non-member functions and static member functions cannot be virtual.

Function templates cannot be declared `virtual`. This applies only to functions that are themselves templates - a regular member function of a class template can be declared virtual.

|  |  |
| --- | --- |
| Virtual functions (whether declared virtual or overriding one) cannot have any associated constraints.   ```text struct A {     virtual void f() requires true; // Error: constrained virtual function }; ```   A `consteval` virtual function must not override or be overidden by a non-`consteval` virtual function. | (since C++20) |

Default arguments for virtual functions are substituted at the compile time.

#### Covariant return types

If the function `Derived::f` overrides a function `Base::f`, their return types must either be the same or be **covariant**. Two types are covariant if they satisfy all of the following requirements:

- both types are pointers or references (lvalue or rvalue) to classes. Multi-level pointers or references are not allowed.
- the referenced/pointed-to class in the return type of `Base::f()` must be an unambiguous and accessible direct or indirect base class of the referenced/pointed-to class of the return type of `Derived::f()`.
- the return type of `Derived::f()` must be equally or less  cv-qualified than the return type of `Base::f()`.

The class in the return type of `Derived::f` must be either `Derived` itself, or must be a complete type at the point of declaration of `Derived::f`.

When a virtual function call is made, the type returned by the final overrider is implicitly converted to the return type of the overridden function that was called:

```
class B {};
 
struct Base
{
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual B* vf4();
    virtual B* vf5();
};
 
class D : private B
{
    friend struct Derived; // in Derived, B is an accessible base of D
};
 
class A; // forward-declared class is an incomplete type
 
struct Derived : public Base
{
    void vf1();    // virtual, overrides Base::vf1()
    void vf2(int); // non-virtual, hides Base::vf2()
//  char vf3();    // Error: overrides Base::vf3, but has different
                   // and non-covariant return type
    D* vf4();      // overrides Base::vf4() and has covariant return type
//  A* vf5();      // Error: A is incomplete type
};
 
int main()
{
    Derived d;
    Base& br = d;
    Derived& dr = d;
 
    br.vf1(); // calls Derived::vf1()
    br.vf2(); // calls Base::vf2()
//  dr.vf2(); // Error: vf2(int) hides vf2()
 
    B* p = br.vf4(); // calls Derived::vf4() and converts the result to B*
    D* q = dr.vf4(); // calls Derived::vf4() and does not convert the result to B*
}

```

#### Virtual destructor

Even though destructors are not inherited, if a base class declares its destructor `virtual`, the derived destructor always overrides it. This makes it possible to delete dynamically allocated objects of polymorphic type through pointers to base.

```
class Base
{
public:
    virtual ~Base() { /* releases Base's resources */ }
};
 
class Derived : public Base
{
    ~Derived() { /* releases Derived's resources */ }
};
 
int main()
{
    Base* b = new Derived;
    delete b; // Makes a virtual function call to Base::~Base()
              // since it is virtual, it calls Derived::~Derived() which can
              // release resources of the derived class, and then calls
              // Base::~Base() following the usual order of destruction
}

```

Moreover, if the destructor of the base class is not virtual, deleting a derived class object through a pointer to the base class is **undefined behavior** regardless of whether there are resources that would be leaked if the derived destructor is not invoked, unless the selected deallocation function is a destroying operator delete(since C++20).

A useful guideline is that the destructor of any base class must be public and virtual or protected and non-virtual, whenever delete expressions are involved, e.g. when implicitly used in std::unique_ptr(since C++11).

### During construction and destruction

When a virtual function is called directly or indirectly from a constructor or from a destructor (including during the construction or destruction of the class’s non-static data members, e.g. in a member initializer list), and the object to which the call applies is the object under construction or destruction, the function called is the final overrider
in the constructor’s or destructor’s class and not one overriding it in a more-derived class.
In other words, during construction or destruction, the more-derived classes do not exist.

When constructing a complex class with multiple branches, within a constructor that belongs to one branch, polymorphism is restricted to that class and its bases: if it obtains a pointer or reference to a base subobject outside this subhierarchy, and attempts to invoke a virtual function call (e.g. using explicit member access), the behavior is undefined:

```
struct V
{
    virtual void f();
    virtual void g();
};
 
struct A : virtual V
{
    virtual void f(); // A::f is the final overrider of V::f in A
};
 
struct B : virtual V
{
    virtual void g(); // B::g is the final overrider of V::g in B
    B(V*, A*);
};
 
struct D : A, B
{
    virtual void f(); // D::f is the final overrider of V::f in D
    virtual void g(); // D::g is the final overrider of V::g in D
 
    // note: A is initialized before B
    D() : B((A*) this, this) {}
};
 
// the constructor of B, called from the constructor of D 
B::B(V* v, A* a)
{
    f(); // virtual call to V::f (although D has the final overrider, D doesn't exist)
    g(); // virtual call to B::g, which is the final overrider in B 
 
    v->g(); // v's type V is base of B, virtual call calls B::g as before
 
    a->f(); // a’s type A is not a base of B. it belongs to a different branch of the
            // hierarchy. Attempting a virtual call through that branch causes
            // undefined behavior even though A was already fully constructed in this
            // case (it was constructed before B since it appears before B in the list
            // of the bases of D). In practice, the virtual call to A::f will be
            // attempted using B's virtual member function table, since that's what
            // is active during B's construction)
}

```

### Keywords

virtual

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 258 | C++98 | a non-const member function of a derived class might become virtual because of a const virtual member function of its base | virtuality also require cv- qualifications to be the same |
| CWG 477 | C++98 | a friend declaration could contain the virtual specifier | not allowed |
| CWG 1516 | C++98 | the definition of the terms "virtual function call" and "virtual call" were not provided | provided |

### See also

|  |  |
| --- | --- |
| derived classes and modes of inheritance | |
| `override` specifier(C++11) | explicitly declares that a method overrides another method |
| `final` specifier(C++11) | declares that a method cannot be overridden |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/virtual&oldid=174550>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 August 2024, at 22:21.