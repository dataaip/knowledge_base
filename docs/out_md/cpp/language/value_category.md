# Value categories

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Value categories**** | | | | | | Order of evaluation | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Operators | | | | | | Operator precedence | | | | | |
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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Value categories**** | | | | | | Order of evaluation | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Each C++ expression (an operator with its operands, a literal, a variable name, etc.) is characterized by two independent properties: a **type** and a **value category**. Each expression has some non-reference type, and each expression belongs to exactly one of the three primary value categories: **prvalue**, **xvalue**, and **lvalue**.

- a glvalue (“generalized” lvalue) is an expression whose evaluation determines the identity of an object or function;
- a prvalue (“pure” rvalue) is an expression whose evaluation

:   - computes the value of an operand of a built-in operator (such prvalue has no **result object**), or
    - initializes an object (such prvalue is said to have a **result object**).

    :   The result object may be a variable, an object created by new-expression, a temporary created by temporary materialization, or a member thereof. Note that non-void discarded expressions have a result object (the materialized temporary). Also, every class and array prvalue has a result object except when it is the operand of `decltype`;

- an xvalue (an “eXpiring” value) is a glvalue that denotes an object whose resources can be reused;
- an lvalue is a glvalue that is not an xvalue;

| Extended content |
| --- |
| So-called, historically, because lvalues could appear on the left-hand side of an assignment expression. In general, it's not always the case:   ```text void foo();   void baz() {     int a; // Expression `a` is lvalue     a = 4; // OK, could appear on the left-hand side of an assignment expression       int &b{a}; // Expression `b` is lvalue     b = 5; // OK, could appear on the left-hand side of an assignment expression       const int &c{a}; // Expression `c` is lvalue     c = 6;           // ill-formed, assignment of read-only reference       // Expression `foo` is lvalue     // address may be taken by built-in address-of operator     void (*p)() = &foo;       foo = baz; // ill-formed, assignment of function } ``` |

- an rvalue is a prvalue or an xvalue;

| Extended content |
| --- |
| So-called, historically, because rvalues could appear on the right-hand side of an assignment expression. In general, it's not always the case: Run this code  ```text #include <iostream>   struct S {     S() : m{42} {}     S(int a) : m{a} {}     int m; };   int main() {     S s;       // Expression `S{}` is prvalue     // May appear on the right-hand side of an assignment expression     s = S{};       std::cout << s.m << '\n';       // Expression `S{}` is prvalue     // Can be used on the left-hand side too     std::cout << (S{} = S{7}).m << '\n'; } ```   Output:   ```text 42 7 ``` |

Note: this taxonomy went through significant changes with past C++ standard revisions, see History below for details.

| Extended content |
| --- |
| Despite their names, these terms classify expressions, not values. Run this code  ```text #include <type_traits> #include <utility>   template <class T> struct is_prvalue : std::true_type {}; template <class T> struct is_prvalue<T&> : std::false_type {}; template <class T> struct is_prvalue<T&&> : std::false_type {};   template <class T> struct is_lvalue : std::false_type {}; template <class T> struct is_lvalue<T&> : std::true_type {}; template <class T> struct is_lvalue<T&&> : std::false_type {};   template <class T> struct is_xvalue : std::false_type {}; template <class T> struct is_xvalue<T&> : std::false_type {}; template <class T> struct is_xvalue<T&&> : std::true_type {};   int main() {     int a{42};     int& b{a};     int&& r{std::move(a)};       // Expression `42` is prvalue     static_assert(is_prvalue<decltype((42))>::value);       // Expression `a` is lvalue     static_assert(is_lvalue<decltype((a))>::value);       // Expression `b` is lvalue     static_assert(is_lvalue<decltype((b))>::value);       // Expression `std::move(a)` is xvalue     static_assert(is_xvalue<decltype((std::move(a)))>::value);       // Type of variable `r` is rvalue reference     static_assert(std::is_rvalue_reference<decltype(r)>::value);       // Type of variable `b` is lvalue reference     static_assert(std::is_lvalue_reference<decltype(b)>::value);       // Expression `r` is lvalue     static_assert(is_lvalue<decltype((r))>::value); } ``` |

### Primary categories

#### lvalue

The following expressions are **lvalue expressions**:

- the name of a variable, a function, a template parameter object(since C++20), or a data member, regardless of type, such as std::cin or std::endl. Even if the variable's type is rvalue reference, the expression consisting of its name is an lvalue expression (but see Move-eligible expressions);

| Extended content |
| --- |
| ```text void foo() {}   void baz() {     // `foo` is lvalue     // address may be taken by built-in address-of operator     void (*p)() = &foo; } ```  ```text struct foo {};   template <foo a> void baz() {     const foo* obj = &a;  // `a` is an lvalue, template parameter object } ``` |

- a function call or an overloaded operator expression, whose return type is lvalue reference, such as std::getline(std::cin, str), std::cout << 1, str1 = str2, or ++it;

| Extended content |
| --- |
| ```text int& a_ref() {     static int a{3};     return a; }   void foo() {     a_ref() = 5;  // `a_ref()` is lvalue, function call whose return type is lvalue reference } ``` |

- a = b, a += b, a %= b, and all other built-in assignment and compound assignment expressions;
- ++a and --a, the built-in pre-increment and pre-decrement expressions;
- \*p, the built-in indirection expression;
- a[n] and p[n], the built-in subscript expressions, where one operand in a[n] is an array lvalue(since C++11);
- a.m, the member of object expression, except where `m` is a member enumerator or a non-static member function, or where a is an rvalue and `m` is a non-static data member of object type;

| Extended content |
| --- |
| ```text struct foo {     enum bar     {         m // member enumerator     }; };   void baz() {     foo a;     a.m = 42; // ill-formed, lvalue required as left operand of assignment } ```  ```text struct foo {     void m() {} // non-static member function };   void baz() {     foo a;       // `a.m` is a prvalue, hence the address cannot be taken by built-in     // address-of operator     void (foo::*p1)() = &a.m; // ill-formed       void (foo::*p2)() = &foo::m; // OK: pointer to member function } ```  ```text struct foo {     static void m() {} // static member function };   void baz() {     foo a;     void (*p1)() = &a.m;     // `a.m` is an lvalue     void (*p2)() = &foo::m;  // the same } ``` |

- p->m, the built-in member of pointer expression, except where `m` is a member enumerator or a non-static member function;
- a.\*mp, the pointer to member of object expression, where a is an lvalue and `mp` is a pointer to data member;
- p->\*mp, the built-in pointer to member of pointer expression, where `mp` is a pointer to data member;
- a, b, the built-in comma expression, where b is an lvalue;
- a ? b : c, the ternary conditional expression for certain b and c (e.g., when both are lvalues of the same type, but see definition for detail);
- a string literal, such as "Hello, world!";
- a cast expression to lvalue reference type, such as static_cast<int&>(x) or static_cast<void(&)(int)>(x);
- a non-type template parameter of an lvalue reference type;

```
template <int& v>
void set()
{
    v = 5; // template parameter is lvalue
}
 
int a{3}; // static variable, fixed address is known at compile-time
 
void foo()
{
    set<a>();
}

```

|  |  |
| --- | --- |
| - a function call or an overloaded operator expression, whose return type is rvalue reference to function; - a cast expression to rvalue reference to function type, such as static_cast<void(&&)(int)>(x). | (since C++11) |

Properties:

- Same as glvalue (below).
- Address of an lvalue may be taken by built-in address-of operator: &++i[[1]](value_category.html#cite_note-1) and &std::endl are valid expressions.
- A modifiable lvalue may be used as the left-hand operand of the built-in assignment and compound assignment operators.
- An lvalue may be used to initialize an lvalue reference; this associates a new name with the object identified by the expression.

#### prvalue

The following expressions are **prvalue expressions**:

- a literal (except for string literal), such as 42, true or nullptr;
- a function call or an overloaded operator expression, whose return type is non-reference, such as str.substr(1, 2), str1 + str2, or it++;
- a++ and a--, the built-in post-increment and post-decrement expressions;
- a + b, a % b, a & b, a << b, and all other built-in arithmetic expressions;
- a && b, a || b, !a, the built-in logical expressions;
- a < b, a == b, a >= b, and all other built-in comparison expressions;
- &a, the built-in address-of expression;
- a.m, the member of object expression, where `m` is a member enumerator or a non-static member function[[2]](value_category.html#cite_note-pmfc-2);
- p->m, the built-in member of pointer expression, where `m` is a member enumerator or a non-static member function[[2]](value_category.html#cite_note-pmfc-2);
- a.\*mp, the pointer to member of object expression, where `mp` is a pointer to member function[[2]](value_category.html#cite_note-pmfc-2);
- p->\*mp, the built-in pointer to member of pointer expression, where `mp` is a pointer to member function[[2]](value_category.html#cite_note-pmfc-2);
- a, b, the built-in comma expression, where b is an prvalue;
- a ? b : c, the ternary conditional expression for certain b and c (see definition for detail);
- a cast expression to non-reference type, such as static_cast<double>(x), std::string{}, or (int)42;
- the `this` pointer;
- an enumerator;
- a non-type template parameter of a scalar type;

```
template <int v>
void foo()
{
    // not an lvalue, `v` is a template parameter of scalar type int
    const int* a = &v; // ill-formed
 
    v = 3; // ill-formed: lvalue required as left operand of assignment
}

```

|  |  |
| --- | --- |
| - a lambda expression, such as [](int x){ return x \* x; }; | (since C++11) |
| - a requires-expression, such as requires (T i) { typename T::type; }; - a specialization of a concept, such as std::equality_comparable<int>. | (since C++20) |

Properties:

- Same as rvalue (below).
- A prvalue cannot be polymorphic: the dynamic type of the object it denotes is always the type of the expression.
- A non-class non-array prvalue cannot be cv-qualified, unless it is materialized in order to be bound to a reference to a cv-qualified type(since C++17). (Note: a function call or cast expression may result in a prvalue of non-class cv-qualified type, but the cv-qualifier is generally immediately stripped out.)
- A prvalue cannot have incomplete type (except for type void, see below, or when used in `decltype` specifier).
- A prvalue cannot have abstract class type or an array thereof.

#### xvalue

The following expressions are **xvalue expressions**:

- a.m, the member of object expression, where a is an rvalue and `m` is a non-static data member of an object type;
- a.\*mp, the pointer to member of object expression, where a is an rvalue and `mp` is a pointer to data member;
- a, b, the built-in comma expression, where b is an xvalue;
- a ? b : c, the ternary conditional expression for certain b and c (see definition for detail);

|  |  |
| --- | --- |
| - a function call or an overloaded operator expression, whose return type is rvalue reference to object, such as std::move(x); - a[n], the built-in subscript expression, where one operand is an array rvalue; - a cast expression to rvalue reference to object type, such as static_cast<char&&>(x); | (since C++11) |
| - any expression that designates a temporary object, after temporary materialization; | (since C++17) |
| - a move-eligible expression. | (since C++23) |

Properties:

- Same as rvalue (below).
- Same as glvalue (below).

In particular, like all rvalues, xvalues bind to rvalue references, and like all glvalues, xvalues may be polymorphic, and non-class xvalues may be cv-qualified.

| Extended content |
| --- |
| Run this code  ```text #include <type_traits>   template <class T> struct is_prvalue : std::true_type {}; template <class T> struct is_prvalue<T&> : std::false_type {}; template <class T> struct is_prvalue<T&&> : std::false_type {};   template <class T> struct is_lvalue : std::false_type {}; template <class T> struct is_lvalue<T&> : std::true_type {}; template <class T> struct is_lvalue<T&&> : std::false_type {};   template <class T> struct is_xvalue : std::false_type {}; template <class T> struct is_xvalue<T&> : std::false_type {}; template <class T> struct is_xvalue<T&&> : std::true_type {};   // Example from C++23 standard: 7.2.1 Value category [basic.lval] struct A {     int m; };   A&& operator+(A, A); A&& f();   int main() {     A a;     A&& ar = static_cast<A&&>(a);       // Function call with return type rvalue reference is xvalue     static_assert(is_xvalue<decltype( (f()) )>::value);       // Member of object expression, object is xvalue, `m` is a non-static data member     static_assert(is_xvalue<decltype( (f().m) )>::value);       // A cast expression to rvalue reference     static_assert(is_xvalue<decltype( (static_cast<A&&>(a)) )>::value);       // Operator expression, whose return type is rvalue reference to object     static_assert(is_xvalue<decltype( (a + a) )>::value);       // Expression `ar` is lvalue, `&ar` is valid     static_assert(is_lvalue<decltype( (ar) )>::value);     [[maybe_unused]] A* ap = &ar; } ``` |

### Mixed categories

#### glvalue

A **glvalue expression** is either lvalue or xvalue.

Properties:

- A glvalue may be implicitly converted to a prvalue with lvalue-to-rvalue, array-to-pointer, or function-to-pointer implicit conversion.
- A glvalue may be polymorphic: the dynamic type of the object it identifies is not necessarily the static type of the expression.
- A glvalue can have incomplete type, where permitted by the expression.

#### rvalue

An **rvalue expression** is either prvalue or xvalue.

Properties:

- Address of an rvalue cannot be taken by built-in address-of operator: &int(), &i++[[3]](value_category.html#cite_note-3), &42, and &std::move(x) are invalid.
- An rvalue can't be used as the left-hand operand of the built-in assignment or compound assignment operators.
- An rvalue may be used to initialize a const lvalue reference, in which case the lifetime of the temporary object identified by the rvalue is extended until the scope of the reference ends.

|  |  |
| --- | --- |
| - An rvalue may be used to initialize an rvalue reference, in which case the lifetime of the temporary object identified by the rvalue is extended until the scope of the reference ends. - When used as a function argument and when two overloads of the function are available, one taking rvalue reference parameter and the other taking lvalue reference to const parameter, an rvalue binds to the rvalue reference overload (thus, if both copy and move constructors are available, an rvalue argument invokes the move constructor, and likewise with copy and move assignment operators). | (since C++11) |

### Special categories

#### Pending member function call

The expressions a.mf and p->mf, where `mf` is a non-static member function, and the expressions a.\*pmf and p->\*pmf, where `pmf` is a pointer to member function, are classified as prvalue expressions, but they cannot be used to initialize references, as function arguments, or for any purpose at all, except as the left-hand argument of the function call operator, e.g. (p->\*pmf)(args).

#### Void expressions

Function call expressions returning void, cast expressions to void, and throw-expressions are classified as prvalue expressions, but they cannot be used to initialize references or as function arguments. They can be used in discarded-value contexts (e.g. on a line of its own, as the left-hand operand of the comma operator, etc.) and in the return statement in a function returning void. In addition, throw-expressions may be used as the second and the third operands of the conditional operator ?:.

|  |  |
| --- | --- |
| Void expressions have no **result object**. | (since C++17) |

#### Bit-fields

An expression that designates a bit-field (e.g. a.m, where a is an lvalue of type struct A { int m: 3; }) is a glvalue expression: it may be used as the left-hand operand of the assignment operator, but its address cannot be taken and a non-const lvalue reference cannot be bound to it. A const lvalue reference or rvalue reference can be initialized from a bit-field glvalue, but a temporary copy of the bit-field will be made: it won't bind to the bit-field directly.

|  |  |
| --- | --- |
| Move-eligible expressions Although an expression consisting of the name of any variable is an lvalue expression, such expression may be move-eligible if it appears as the operand of   - a `return` statement - a `co_return` statement (since C++20) - a `throw` expression (since C++17)   If an expression is move-eligible, it is treated either as an rvalue or as an lvalue(until C++23)as an rvalue(since C++23) for the purpose of overload resolution (thus it may select the move constructor). See Automatic move from local variables and parameters for details. | (since C++11) |

### History

#### CPL

The programming language CPL "enwiki:CPL (programming language)") was first to introduce value categories for expressions: all CPL expressions can be evaluated in "right-hand mode", but only certain kinds of expression are meaningful in "left-hand mode". When evaluated in right-hand mode, an expression is regarded as being a rule for the computation of a value (the right-hand value, or **rvalue**). When evaluated in left-hand mode an expression effectively gives an address (the left-hand value, or **lvalue**). "Left" and "Right" here stood for "left of assignment" and "right of assignment".

#### C

The C programming language followed a similar taxonomy, except that the role of assignment was no longer significant: C expressions are categorized between "lvalue expressions" and others (functions and non-object values), where "lvalue" means an expression that identifies an object, a "locator value"[[4]](value_category.html#cite_note-4).

#### C++98

Pre-2011 C++ followed the C model, but restored the name "rvalue" to non-lvalue expressions, made functions into lvalues, and added the rule that references can bind to lvalues, but only references to const can bind to rvalues. Several non-lvalue C expressions became lvalue expressions in C++.

#### C++11

With the introduction of move semantics in C++11, value categories were redefined to characterize two independent properties of expressions[[5]](value_category.html#cite_note-5):

- **has identity**: it's possible to determine whether the expression refers to the same entity as another expression, such as by comparing addresses of the objects or the functions they identify (obtained directly or indirectly);
- **can be moved from**: move constructor, move assignment operator, or another function overload that implements move semantics can bind to the expression.

In C++11, expressions that:

- have identity and cannot be moved from are called **lvalue** expressions;
- have identity and can be moved from are called **xvalue** expressions;
- do not have identity and can be moved from are called **prvalue** ("pure rvalue") expressions;
- do not have identity and cannot be moved from are not used[[6]](value_category.html#cite_note-6).

The expressions that have identity are called "glvalue expressions" (glvalue stands for "generalized lvalue"). Both lvalues and xvalues are glvalue expressions.

The expressions that can be moved from are called "rvalue expressions". Both prvalues and xvalues are rvalue expressions.

#### C++17

In C++17, copy elision was made mandatory in some situations, and that required separation of prvalue expressions from the temporary objects initialized by them, resulting in the system we have today. Note that, in contrast with the C++11 scheme, prvalues are no longer moved from.

### Footnotes

1. ↑ Assuming i has built-in type or the pre-increment operator is overloaded to return by lvalue reference.
2. ↑ 2.0 2.1 2.2 2.3 Special rvalue category, see pending member function call.
3. ↑ Assuming i has built-in type or the post-increment operator is not overloaded to return by lvalue reference.
4. ↑ "A difference of opinion within the C community centered around the meaning of lvalue, one group considering an lvalue to be any kind of object locator, another group holding that an lvalue is meaningful on the left side of an assigning operator. The C89 Committee adopted the definition of lvalue as an object locator." -- ANSI C Rationale, 6.3.2.1/10.
5. ↑ "New" Value Terminology by Bjarne Stroustrup, 2010.
6. ↑ const prvalues (only allowed for class types) and const xvalues do not bind to `T&&` overloads, but they bind to the const T&& overloads, which are also classified as "move constructor" and "move assignment operator" by the standard, satisfying the definition of "can be moved from" for the purpose of this classification. However, such overloads cannot modify their arguments and are not used in practice; in their absence const prvalues and const xvalues bind to const T& overloads.

### References

- C++23 standard (ISO/IEC 14882:2024):

:   - 7.2.1 Value category [basic.lval]

- C++20 standard (ISO/IEC 14882:2020):

:   - 7.2.1 Value category [basic.lval]

- C++17 standard (ISO/IEC 14882:2017):

:   - 6.10 Lvalues and rvalues [basic.lval]

- C++14 standard (ISO/IEC 14882:2014):

:   - 3.10 Lvalues and rvalues [basic.lval]

- C++11 standard (ISO/IEC 14882:2011):

:   - 3.10 Lvalues and rvalues [basic.lval]

- C++98 standard (ISO/IEC 14882:1998):

:   - 3.10 Lvalues and rvalues [basic.lval]

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 616 | C++11 | member access and member access through pointer to member of an rvalue resulted in prvalue | reclassified as xvalue |
| CWG 1059 | C++11 | array prvalues could not be cv-qualified | allowed |
| CWG 1213 | C++11 | subscripting an array rvalue resulted in lvalue | reclassified as xvalue |

### See also

|  |  |
| --- | --- |
| C documentation for value categories | |

### External links

|  |  |
| --- | --- |
| 1. | C++ value categories and decltype demystified — David Mazières, 2021 |
| 2. | Empirically determine value category of expression — StackOverflow  |  | | --- | |  | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/value_category&oldid=178569>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 December 2024, at 13:31.