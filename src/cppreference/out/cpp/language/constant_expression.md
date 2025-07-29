# Constant expressions

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

 Expressions

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | ****Constant expressions**** | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Defines an expression that can be evaluated at compile time.

Such expressions can be used as non-type template arguments, array sizes, and in other contexts that require constant expressions, e.g.

```
int n = 1;
std::array<int, n> a1;  // Error: “n” is not a constant expression
const int cn = 2;
std::array<int, cn> a2; // OK: “cn” is a constant expression

```

### Definition

|  |  |  |  |
| --- | --- | --- | --- |
| An expression that belongs to any of the constant expression categories listed below is a **constant expression**.   | C++98 constant expression categories | | --- | | Integral constant expression (C++98) In the following places, C++ requires expressions that evaluate to an integral or enumeration constant:   - array bounds (including the dimensions in new expressions other than the first) - case label constants - bit-field lengths - enumerator initializers - static data member initializers - template non-type arguments of integral or enumeration type   An expression satisfying all following conditions is an **integral constant-expression** ﻿:   - It only involves the following entities:   - literals of arithmetic types - enumerators - variables or static data members satisfying all following conditions:   - They are const-qualified. - They are not volatile-qualified. - They are of integral or enumeration types. - They are initialized with constant expressions.   - non-type template parameters of integral or enumeration types - `sizeof` expressions   - It does not use any floating-point literals, unless they are explicitly converted to integral or enumeration types. - It does not apply any conversion to non-integral and non-enumeration types. - It does not use any of the following entities except in the operands of sizeof:   - function - class object - pointer - reference - assignment operator - increment operator - decrement operator - function-call operator - comma operator Other constant expression categories Other expressions are considered constant expressions only for the purpose of constant initialization. Such a constant expression must be one of the following expressions:   - an expression that evaluates to a null pointer value - an expression that evaluates to a null pointer-to-member value - an arithmetic constant expression - an address constant expression - a reference constant expression - an address constant expression for a complete object type, plus or minus an integral constant expression - a pointer-to-member constant expression   An **arithmetic constant expression** is an expression satisfying the requirements for an integral constant expression, with the following exceptions:   - Floating-point literals can be used without explicit conversion. - Conversions to floating-point types can be applied.   An **address constant expression** is an expression of pointer type satisfying all following conditions:   - The pointer points to an lvalue designating an object of static storage duration, a string literal, or a function. The object is not a subobject of non-POD class type. - The pointer is created by one of the following methods:   - explicitly using the address-of operator - implicitly using a non-type template parameter of pointer type - using an expression of array or function type   - The expression does not call any function. - The expression uses explicit pointer conversions (except `dynamic_cast`) and the following operators without accessing the result object:   - subscript operator - indirection operator - address-of operator - member access operator   - If the subscript operator is used, one of its operands is an integral constant expression.   A **reference constant expression** is an expression of reference type satisfying all following conditions:   - The reference designates an object of static storage duration, a non-type template parameter of reference type, or a function. The reference does not designate a member or base class of non-POD class type. - The expression does not call any function. - The expression uses explicit reference conversions (except `dynamic_cast`) and the following operators without accessing the result object:   - subscript operator - indirection operator - address-of operator - member access operator   - If the subscript operator is used, one of its operands is an integral constant expression.   A **pointer-to-member constant expression** is an expression of pointer-to-member type where the pointer is created by applying the address-of operator to a qualified identifier, optionally preceded by an explicit pointer-to-member conversion. | | (until C++11) |
| The following expressions are collectively called **constant expressions** ﻿:   - prvalue core constant expressions of non-pointer literal type - lvalue core constant expressions that designate objects with static storage duration or functions - prvalue core constant expressions of pointer type that evaluate to one of the following values:   - the address of an object with static storage duration - the address of a function - a null pointer value   - prvalue core constant expressions of type std::nullptr_t | (since C++11) (until C++14) |
| The following entities are **permitted results of a constant expression** ﻿:   - temporary objects with static storage duration - non-temporary objects with static storage duration whose values satisfy the constraints listed below - non-immediate (since C++20)functions   A **constant expression** is either a glvalue core constant expression that refers to an entity that is a permitted result of a constant expression, or a prvalue core constant expression whose value satisfies the following constraints:   - If the value is an object of class type, each non-static data member of reference type refers to an entity that is a permitted result of a constant expression. - If the value is an object of scalar type, it does not have an indeterminate value. - If the value is of pointer type, it is one of the following values:   - the address of an object with static storage duration - the address past the end of an object with static storage duration - the address of a non-immediate(since C++20) function - a null pointer value   |  |  | | --- | --- | | - If the value is of pointer-to-member-function type, it does not designate an immediate function. | (since C++20) |  - If the value is an object of class or array type, each subobject satisfies these constraints for the value. | (since C++14) (until C++26) |
| A **constant expression** is either a glvalue core constant expression that refers to an object or a non-immediate function, or a prvalue core constant expression whose value satisfies the following constraints:   - Each constituent reference refers to an object or a non-immediate function. - No constituent value of scalar type is an indeterminate or erroneous value. - No constituent value of pointer type is a pointer to an immediate function or an invalid pointer value. - No constituent value of pointer-to-member type designates an immediate function. | (since C++26) |

When determining whether an expression is a constant expression, copy elision is assumed not to be performed.

The C++98 definition of constant expressions is entirely within the collpase box. The following description applies to C++11 and later C++ versions.

### Literal type

The following types are collectively called **literal types** ﻿:

- possibly cv-qualified void
- scalar type
- reference type
- an array of literal type
- possibly cv-qualified class type that satisfies all following conditions:

:   - It has a trivial destructor(until C++20)constexpr destructor(since C++20).
    - All of its non-static non-variant data members and base classes are of non-volatile literal types.
    - It is one of the following types:

|  |  |
| --- | --- |
| - a closure type | (since C++17) |

:   :   - an aggregate union type that satisfies one of the following conditions:

        :   - It has no variant member.
            - It has at least one variant member of non-volatile literal type.

        - a non-union aggregate type, and each of its anonymous union members satisfies one of the following conditions:

        :   - It has no variant member.
            - It has at least one variant member of non-volatile literal type.

        - a type with at least one constexpr constructor (template) that is not a copy or move constructor

Only objects of literal types can be created within a constant expression.

### Core constant expression

A **core constant expression** is any expression whose evaluation ****would not**** evaluate any one of the following language constructs:

| Language construct | Version | Paper(s) |
| --- | --- | --- |
| the `this` pointer, except in a constexpr function that is being evaluated as part of the expression, or when appearing in an implicit or explicit class member access expression |  | N2235 |
| a control flow that passes through a declaration of a block variable with static or thread storage duration that is not usable in constant expressions | (since C++23) | P2242R3 |

|  |  |
| --- | --- |
|  | This section is incomplete Reason: Transfer the contents from the raw-HTML ordered list below to the wikitable above, while adding the papers/CWG issues that introduced the corresponding item to the standard. The mini-examples are not preserved, they can be combined to form a large example at the bottom of this page. |

1. a function call expression that calls a function (or a constructor) that is not declared constexpr

   ```
   constexpr int n = std::numeric_limits<int>::max(); // OK: max() is constexpr
   constexpr int m = std::time(nullptr); // Error: std::time() is not constexpr
   
```
2. a function call to a constexpr function which is declared, but not defined
3. a function call to a constexpr function/constructor template instantiation where the instantiation fails to satisfy constexpr function/constructor requirements.
4. a function call to a constexpr virtual function, invoked on an object whose dynamic type is constexpr-unknown
5. an expression that would exceed the implementation-defined limits
6. an expression whose evaluation leads to any form of core language undefined or erroneous(since C++26) behavior, except for any potential undefined behavior introduced by standard attributes.

   ```
   constexpr double d1 = 2.0 / 1.0; // OK
   constexpr double d2 = 2.0 / 0.0; // Error: not defined
   constexpr int n = std::numeric_limits<int>::max() + 1; // Error: overflow
   int x, y, z[30];
   constexpr auto e1 = &y - &x;        // Error: undefined
   constexpr auto e2 = &z[20] - &z[3]; // OK
   constexpr std::bitset<2> a; 
   constexpr bool b = a[2]; // UB, but unspecified if detected
   
```
7. (until C++17) a lambda expression
8. an lvalue-to-rvalue implicit conversion unless applied to...
   1. a glvalue of type (possibly cv-qualified) std::nullptr_t
   2. a non-volatile literal-type glvalue that designates an object that is usable in constant expressions

      ```
      int main()
      {
          const std::size_t tabsize = 50;
          int tab[tabsize]; // OK: tabsize is a constant expression
                            // because tabsize is usable in constant expressions
                            // because it has const-qualified integral type, and
                            // its initializer is a constant initializer
       
          std::size_t n = 50;
          const std::size_t sz = n;
          int tab2[sz]; // Error: sz is not a constant expression
                        // because sz is not usable in constant expressions
                        // because its initializer was not a constant initializer
      }
      
```
   3. a non-volatile literal-type glvalue that refers to a non-volatile object whose lifetime began within the evaluation of this expression
9. an lvalue-to-rvalue implicit conversion or modification applied to a non-active member of a union or its subobject (even if it shares a common initial sequence with the active member)
10. an lvalue-to-rvalue implicit conversion on an object whose value is indeterminate
11. an invocation of implicit copy/move constructor/assignment for a union whose active member is mutable (if any), with lifetime beginning outside the evaluation of this expression
12. (until C++20) an assignment expression that would change the active member of a union
13. conversion from pointer to void to a pointer-to-object type `T*` unless the pointer holds a null pointer value or points to an object whose type is similar to `T`(since C++26)
14. `dynamic_cast` whose operand is a glvalue that refers to an object whose dynamic type is constexpr-unknown(since C++20)
15. `reinterpret_cast`
16. (until C++20) pseudo-destructor call
17. (until C++14) an increment or a decrement operator
18. (since C++14) modification of an object, unless the object has non-volatile literal type and its lifetime began within the evaluation of the expression

    ```
    constexpr int incr(int& n)
    {
        return ++n;
    }
     
    constexpr int g(int k)
    {
        constexpr int x = incr(k); // Error: incr(k) is not a core constant
                                   // expression because lifetime of k
                                   // began outside the expression incr(k)
        return x;
    }
     
    constexpr int h(int k)
    {
        int x = incr(k); // OK: x is not required to be initialized
                         // with a core constant expression
        return x;
    }
     
    constexpr int y = h(1); // OK: initializes y with the value 2
                            // h(1) is a core constant expression because
                            // the lifetime of k begins inside the expression h(1)
    
```
19. (since C++20) a destructor call or pseudo destructor call for an object whose lifetime did not begin within the evaluation of this expression
20. a `typeid` expression applied to a glvalue of polymorphic type and that glvalue refers to an object whose dynamic type is constexpr-unknown(since C++20)
21. a new expression, unless one of the following conditions is satisfied:(since C++20)

    |  |  |
    | --- | --- |
    | - The selected allocation function is a replaceable global allocation function and the allocated storage is deallocated within the evaluation of this expression. | (since C++20) |
    | - The selected allocation function is a non-allocating form with an allocated type `T`, and the placement argument satisfies all following conditions: - It points to: - an object whose type is similar to `T`, if `T` is not an array type, or - the first element of an object of a type similar to `T`, if `T` is an array type.  - It points to storage whose duration began within the evaluation of this expression. | (since C++26) |
22. a delete expression, unless it deallocates a region of storage allocated within the evaluation of this expression(since C++20)
23. (since C++20) Coroutines: an await-expression or a yield-expression
24. (since C++20) a three-way comparison when the result is unspecified
25. an equality or relational operator whose result is unspecified
26. (until C++14) an assignment or a compound assignment operator
27. (until C++26) a throw expression
28. (since C++26) a construction of an exception object, unless the exception object and all of its implicit copies created by invocations of std::current_exception or std::rethrow_exception are destroyed within the evaluation of this expression

    ```
    constexpr void check(int i)
    {
        if (i < 0)
            throw i;
    }
     
    constexpr bool is_ok(int i)
    {
        try {
            check(i);
        } catch (...) {
            return false;
        }
        return true;
    }
     
    constexpr bool always_throw()
    {
        throw 12;
        return true;
    }
     
    static_assert(is_ok(5)); // OK
    static_assert(!is_ok(-1)); // OK since C++26
    static_assert(always_throw()); // Error: uncaught exception
    
```
29. an asm-declaration
30. an invocation of the va_arg macro
31. a `goto` statement
32. a `dynamic_cast` or `typeid` expression or new expression(since C++26) that would throw an exception where no definition of the exception type is reachable(since C++26)
33. inside a lambda expression, a reference to this or to a variable defined outside that lambda, if that reference would be an odr-use

    ```
    void g()
    {
        const int n = 0;
     
        constexpr int j = *&n; // OK: outside of a lambda-expression
     
        [=]
        {
            constexpr int i = n;   // OK: 'n' is not odr-used and not captured here.
            constexpr int j = *&n; // Ill-formed: '&n' would be an odr-use of 'n'.
        };
    }
    
```

    |  |  |
    | --- | --- |
    | note that if the ODR-use takes place in a function call to a closure, it does not refer to this or to an enclosing variable, since it accesses a closure's data member instead   ```text // OK: 'v' & 'm' are odr-used but do not occur in a constant-expression // within the nested lambda auto monad = [](auto v){ return [=]{ return v; }; }; auto bind = [](auto m){ return ={ return fvm(m()); }; };   // OK to have captures to automatic objects created during constant expression evaluation. static_assert(bind(monad(2))(monad)() == monad(2)()); ``` | (since C++17) |

#### Extra requirements

Even if an expression E does not evaluate anything stated above, it is implementation-defined whether E is a core constant expression if evaluating E would result in runtime-undefined behavior.

Even if an expression E does not evaluate anything stated above, it is unspecified whether E is a core constant expression if evaluating E would evalute any of the following:

- An operation with undefined behavior in the standard library.
- An invocation of the va_start macro.

For the purposes of determining whether an expression is a core constant expression, the evaluation of the body of a member function of std::allocator<T> is ignored if `T` is a literal type.

For the purposes of determining whether an expression is a core constant expression, the evaluation of a call to a trivial copy/move constructor or copy/move assignment operator of a union is considered to copy/move the active member of the union, if any.

|  |  |
| --- | --- |
| For the purposes of determining whether an expression is a core constant expression, the evaluation of an identifier expression that names a structured binding bd has the following semantics:   - If bd is an lvalue referring to the object bound to an invented reference ref, the behavior is as if ref were nominated. - Otherwise, if bd names an array element, the behavior is that of evaluating e[i], where e is the name of the variable initialized from the initializer of the structured binding declaration, and i is the index of the element referred to by bd. - Otherwise, if bd names a class member, the behavior is that of evaluating e.m, where e is the name of the variable initialized from the initializer of the structured binding declaration, and m is the name of the member referred to by bd. | (since C++26) |

During the evaluation of the expression as a core constant expression, all identifier expressions and uses of \*this that refer to an object or reference whose lifetime began outside the evaluation of the expression are treated as referring to a specific instance of that object of that object or reference whose lifetime and that of all subobjects (including all union members) includes the entire constant evaluation.

- For such an object that is not usable in constant expressions(since C++20), the dynamic type of the object is **constexpr-unknown**.
- For such a reference that is not usable constant expression(since C++20)s, the reference is treated as binding to an unspecified object of the referenced type whose lifetime and that of all subobjects includes the entire constant evaluation and whose dynamic type is constexpr-unknown.

### Integral constant expression

**Integral constant expression** is an expression of integral or unscoped enumeration type implicitly converted to a prvalue, where the converted expression is a core constant expression.

If an expression of class type is used where an integral constant expression is expected, the expression is contextually implicitly converted to an integral or unscoped enumeration type.

### Converted constant expression

A **converted constant expression** of type `T` is an expression implicitly converted to type `T`, where the converted expression is a constant expression, and the implicit conversion sequence contains only:

:   - constexpr user-defined conversions
    - lvalue-to-rvalue conversions
    - integral promotions
    - non-narrowing integral conversions
    - floating-point promotions
    - non-narrowing floating-point conversions

|  |  |
| --- | --- |
| - array-to-pointer conversions - function-to-pointer conversions - function pointer conversions - qualification conversions - null pointer conversions from std::nullptr_t - null member pointer conversions from std::nullptr_t | (since C++17) |

And if any reference binding takes place, it can only be direct binding.

The following contexts require a converted constant expression:

- the constant-expression of case labels
- enumerator initializers when the underlying type is fixed
- integral and enumeration (until C++17)non-type template arguments

|  |  |
| --- | --- |
| - array bounds - the dimensions in new expressions other than the first | (since C++14) |
| - the index of pack indexing expression and pack indexing specifier | (since C++26) |

A **contextually converted constant expression of type bool** is an expression, contextually converted to bool, where the converted expression is a constant expression and the conversion sequence contains only the conversions above.

The following contexts require a contextually converted constant expression of type bool:

- noexcept specifications

|  |  |
| --- | --- |
| - static_assert declarations | (until C++23) |
| - constexpr if-statements | (since C++17) (until C++23) |
| - conditional explicit specifiers | (since C++20) |

|  |  |
| --- | --- |
| Constituent entities The **constituent values** of an object obj are defined as follows:   - If obj has scalar type, the constituent value is the value of obj. - Otherwise, the constituent values are the constituent values of any direct subobjects of obj other than inactive union members.   The **constituent references** of an object obj include the following references:   - any direct members of obj that have reference type - the constituent references of any direct subobjects of obj other than inactive union members   The **constituent values** and **constituent references** of a variable var are defined as follows:   - If var declares an object, the constituent values and references are the constituent values and references of that object. - If var declares a reference, the constituent reference is that reference.   For any constituent reference ref of a variable var, if ref is bound to a temporary object or subobject thereof whose lifetime is extended to that of ref, the constituent values and references of that temporary object are also constituent values and references of var, recursively. Constexpr-representable entities Objects with static storage duration is **constexpr-referenceable** at any point in the program.  An object obj with automatic storage duration is **constexpr-referenceable** from a point `P` if the smallest scope enclosing the variable var and the smallest scope enclosing `P` that are the same function parameter scope that does not associate with the parameter list of a requires expression, where var is the variable corresponding to obj’s complete object or the variable to whose lifetime that of obj is extended.  An object or reference x is **constexpr-representable** at a point `P` if all following conditions are satisfied:   - For each constituent value of x that points to an object obj, obj is constexpr-referenceable from `P`. - For each constituent value of x that points past an object obj, obj is constexpr-referenceable from `P`. - For each constituent reference of x that refers to an object obj, obj is constexpr-referenceable from `P`. | (since C++26) |
| Constant-initialized entities  |  |  | | --- | --- | | A variable or temporary object obj is **constant-initialized** if all following conditions are satisfied:   - Either it has an initializer, or its type is const-default-constructible. - The full-expression of its initialization is a constant expression in the context of requiring a constant expression, except that if obj is an object, that full-expression may also invoke constexpr constructors for obj and its subobjects even if those objects are of non-literal class types. | (until C++26) | | A variable var is **constant-initializable** if all following conditions are satisfied:   - The full-expression of its initialization is a constant expression in the context of requiring a constant expression. - Immediately after the initializing declaration of var, the object or reference declared by var is constexpr-representable. - If the object or reference x declared by var has static or thread storage duration, x is constexpr-representable at the nearest point whose immediate scope is a namespace scope that follows the initializing declaration of var.   A constant-initializable variable is **constant-initialized** if either it has an initializer, or its type is const-default-constructible. | (since C++26) |  Usable in constant expressions A variable is **potentially-constant** if it is a constexpr variable or it has reference or non-volatile const-qualified integral or enumeration type.  A constant-initialized potentially-constant variable var is **usable in constant expressions** at a point `P` if var’s initializing declaration `D` is reachable from `P` and any of the following conditions is satisfied:   - var is a constexpr variable. - var is not initialized to a TU-local value. - `P` is in the same translation unit as `D`.  |  |  | | --- | --- | | An object or reference is **usable in constant expressions** at a point `P` if it is one of the following entities:   - a variable that is usable in constant expressions at `P` - a temporary object of non-volatile const-qualified literal type whose lifetime is extended to that of a variable that is usable in constant expressions at `P` - a template parameter object - a string literal object - a non-mutable subobject of any of the above - a reference member of any of the above | (until C++26) | | An object or reference is **potentially usable in constant expressions** at a point `P` if it is one of the following entities:   - a variable that is usable in constant expressions at `P` - a temporary object of non-volatile const-qualified literal type whose lifetime is extended to that of a variable that is usable in constant expressions at `P` - a template parameter object - a string literal object - a non-mutable subobject of any of the above - a reference member of any of the above   An object or reference is **usable in constant expressions** at point `P` if it is an object or reference that is potentially usable in constant expressions at `P` and is constexpr-representable at `P`. | (since C++26) |  Manifestly constant-evaluated expressions The following expressions (including conversions to the destination type) are **manifestly constant-evaluated** ﻿:   - array bounds - the dimensions in new expressions other than the first - bit-field lengths - enumeration initializers - alignments - the constant-expression of case labels - non-type template arguments - expressions in noexcept specifications - expressions in static_assert declarations - initializers of constexpr variables - conditions of constexpr if-statements - expressions in conditional explicit specifiers - immediate invocations - constraint expressions in concept definitions, nested requirements, and requires clauses, when determining whether the constraints are satisfied - initializers of variables with reference type or const-qualified integral or enumeration type, but only if the initializers are constant expressions - initializers of static and thread local variables, but only if all subexpressions of the initializers (including constructor calls and implicit conversions) are constant expressions (that is, if the initializers are constant initializers)   Whether an evaluation occurs in a manifestly constant-evaluated context can be detected by std::is_constant_evaluated and `if consteval`(since C++23). | (since C++20) |

### Functions and variables needed for constant evaluation

Following expressions or conversions are **potentially constant evaluated**:

- manifestly constant-evaluated expressions
- potentially-evaluated expressions
- immediate subexpressions of a braced-enclosed initializer list (constant evaluation may be necessary to determine whether a conversion is narrowing)
- address-of expressions that occur within a templated entity (constant evaluation may be necessary to determine whether such an expression is value-dependent)
- subexpressions of one of the above that are not a subexpression of a nested unevaluated operand

A function is **needed for constant evaluation** if it is a constexpr function and named by an expression that is potentially constant evaluated.

A variable is **needed for constant evaluation** if it is either a constexpr variable or is of non-volatile const-qualified integral type or of reference type and the identifier expression that denotes it is potentially constant evaluated.

Definition of a defaulted function and instantiation of a function template specialization or variable template specialization(since C++14) are triggered if the function or variable(since C++14) is needed for constant evaluation.

### Constant subexpression

A **constant subexpression** is an expression whose evaluation as subexpression of an expression e would not prevent e from being a core constant expression, where e is not any of the following expressions:

- throw expression

|  |  |
| --- | --- |
| - yield expression | (since C++20) |

- assignment expression
- comma expression

### Notes

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_constexpr_in_decltype` | `201711L` | (C++20) (DR11) | Generation of function and variable definitions when needed for constant evaluation |
| `__cpp_constexpr_dynamic_alloc` | `201907L` | (C++20) | Operations for dynamic storage duration in constexpr functions |
| `__cpp_constexpr` | `202306L` | (C++26) | constexpr cast from void\*: towards constexpr type-erasure |
| `202406L` | (C++26) | constexpr placement new and new[] |
| `__cpp_constexpr_exceptions` | `202411L` | (C++26) | constexpr exceptions |

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 94 | C++98 | arithmetic constant expressions could not involve variables and static data members | they can |
| CWG 366 | C++98 | expressions involving string literals could be integral constant expressions | they are not |
| CWG 457 | C++98 | expressions involving volatile variables could be integral constant expressions | they are not |
| CWG 1293 | C++11 | it was unclear whether string literals are usable in constant expressions | they are usable |
| CWG 1311 | C++11 | volatile glvalues could be used in constant expressions | prohibited |
| CWG 1312 | C++11 | reinterpret_cast is prohibited in constant expressions, but casting to and from void\* could achieve the same effect | prohibited conversions from type **cv** void\* to a pointer-to-object type |
| CWG 1313 | C++11 | undefined behavior was permitted; all pointer subtraction was prohibited | UB prohibited; same-array pointer subtraction OK |
| CWG 1405 | C++11 | for objects that are usable in constant expressions, their mutable subobjects were also usable | they are not usable |
| CWG 1454 | C++11 | passing constants through constexpr functions via references was not allowed | allowed |
| CWG 1455 | C++11 | converted constant expressions could only be prvalues | can be lvalues |
| CWG 1456 | C++11 | an address constant expression could not designate the address one past the end of an array | allowed |
| CWG 1535 | C++11 | a typeid expression whose operand is of a polymorphic class type was not a core constant expression even if no runtime check is involved | the operand constraint is limited to glvalues of polymorphic class types |
| CWG 1581 | C++11 | functions needed for constant evaluation were not required to be defined or instantiated | required |
| CWG 1613 | C++11 | core constant expressions could evaluate any ODR-used reference inside lambda expressions | some references could not be evaluated |
| CWG 1694 | C++11 | binding the value of a temporary to a static storage duration reference was a constant expression | it is not a constant expression |
| CWG 1872 | C++11 | core constant expressions could invoke constexpr function template insantiations that do not satisfy the constexpr function requirements | such instantiations cannot be invoked |
| CWG 1952 | C++11 | standard library undefined behaviors were required to be diagnosed | unspecified whether they are diagnosed |
| CWG 2022 | C++98 | the determination of constant expression might depend on whether copy elision is performed | assume that copy elision is always performed |
| CWG 2126 | C++11 | constant initialized lifetime-extended temporaries of const- qualified literal types were not usable in constant expressions | usable |
| CWG 2129 | C++11 | integer literals were not constant expressions | they are |
| CWG 2167 | C++11 | non-member references local to an evaluation made the evaluation non-constexpr | non-member references allowed |
| CWG 2278 | C++98 | the resolution of CWG issue 2022 was not implementable | assume that copy elision is never performed |
| CWG 2299 | C++14 | it was unclear whether macros in <cstdarg> can be used in constant evaluation | `va_arg` forbidden, `va_start` unspecified |
| CWG 2400 | C++11 | invoking a constexpr virtual function on an object not usable in constant expressions and whose lifetime began outside the expression containing the invocation could be a constant expression | it is not a constant expression |
| CWG 2490 | C++20 | (pseudo) destructor calls lacked restrictions in constant evaluation | restriction added |
| CWG 2552 | C++23 | when evaluating a core constant expression, the control flow could not pass through a declaration of a non-block variable | it can |
| CWG 2558 | C++11 | an indeterminate value could be a constant expression | not a constant expression |
| CWG 2647 | C++20 | variables of volatile-qualified types could be potentially-constant | they are not |
| CWG 2763 | C++11 | the violation of `[[noreturn]]` was not required to be detected during constant evaluation | required |
| CWG 2851 | C++11 | converted constant expressions did not allow floating-point conversions | allow non-narrowing floating-point conversions |
| CWG 2907 | C++11 | core constant expressions could not apply lvalue-to-rvalue conversions to std::nullptr_t glvalues | can apply such conversions |
| CWG 2909 | C++20 | a variable without an initializer could only be constant-initialized if its default-initialization results in some initialization being performed | can only be constant- initialized if its type is const-default-initializable |
| CWG 2924 | C++11 C++23 | it was unspecified whether an expression violating the constraints of `[[noreturn]]` (C++11) or `[[assume]]` (C++23) is a core constant expression | it is implementation-defined |
| P2280R4 | C++11 | evaluating an expression containing an identifier expression or \*this that refers to an object or reference whose lifetime began outside this evaluation is not a constant expression | it can be a constant expression |

### See also

|  |  |
| --- | --- |
| `constexpr` specifier(C++11) | specifies that the value of a variable or function can be computed at compile time |
| is_literal_type(C++11)(deprecated in C++17)(removed in C++20) | checks if a type is a literal type   (class template) |
| C documentation for Constant expressions | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/constant_expression&oldid=180148>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 February 2025, at 17:32.