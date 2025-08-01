# Extensions for reflection

From cppreference.com
< cpp‎ | experimental
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| ****Reflection**** (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

****Extensions for reflection****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Object | | | | | | ObjectSequence | | | | | | TemplateParameterScope") | | | | | | Named | | | | | | Alias | | | | | | RecordMember | | | | | | Enumerator | | | | | | Variable | | | | | | ScopeMember | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Typed | | | | | | Namespace | | | | | | GlobalScope | | | | | | Class | | | | | | Enum | | | | | | Record | | | | | | Scope | | | | | | Type | | | | | | Constant | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Base | | | | | | FunctionParameter | | | | | | Callable | | | | | | Expression | | | | | | ParenthesizedExpression | | | | | | FunctionCallExpression | | | | | | FunctionalTypeConversion | | | | | | Function | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MemberFunction | | | | | | SpecialMemberFunction | | | | | | Constructor | | | | | | Destructor | | | | | | Operator | | | | | | ConversionOperator | | | | | | Lambda | | | | | | LambdaCapture | | | | | |  | | | | | |
| Meta-object operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `Object` | | | | | | reflects_same") | | | | | | get_source_line | | | | | | get_source_column | | | | | | get_source_file_name") | | | | | | `ObjectSequence` | | | | | | get_size") | | | | | | get_element") | | | | | | unpack_sequence") | | | | | | `Named` | | | | | | is_unnamed") | | | | | | get_name") | | | | | | get_display_name") | | | | | | `Alias` | | | | | | get_alias") | | | | | | `Type` | | | | | | get_type") | | | | | | get_reflected_type") | | | | | | is_enum") | | | | | | is_union") | | | | | | uses_class_keyuses_struct_key") | | | | | | `ScopeMember` | | | | | | get_scope") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `RecordMember` and `Base` | | | | | | is_public") | | | | | | is_protected") | | | | | | is_private") | | | | | | `Record` | | | | | | get_public_data_membersget_accessible_data_membersget_data_members") | | | | | | get_public_member_functionsget_accessible_member_functionsget_member_functions") | | | | | | get_constructors") | | | | | | get_operators") | | | | | | get_destructor") | | | | | | get_public_member_typesget_accessible_member_typesget_member_types") | | | | | | get_public_base_classesget_accessible_base_classesget_base_classes") | | | | | | `Enum` | | | | | | is_scoped_enum") | | | | | | get_enumerators") | | | | | | get_underlying_type") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `Variable` | | | | | | get_constant") | | | | | | is_thread_local") | | | | | | `FunctionParameter` | | | | | | has_default_argument") | | | | | | `Callable` | | | | | | get_parameters") | | | | | | is_vararg") | | | | | | is_noexcept") | | | | | | is_deleted") | | | | | | `Variable` and `Callable` | | | | | | is_constexpr") | | | | | | `Namespace` and `Callable` | | | | | | is_inline") | | | | | | `ParenthesizedExpression` | | | | | | get_subexpression") | | | | | | `FunctionCallExpression` | | | | | | get_callable") | | | | | | `FunctionalConversion` | | | | | | get_constructor") | | | | | | `Variable` and `Function` | | | | | | get_pointer") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `MemberFunction` | | | | | | is_constis_volatilehas_lvalueref_qualifierhas_rvalueref_qualifier") | | | | | | is_override") | | | | | | is_implicitly_declared") | | | | | | is_defaulted") | | | | | | is_explicit") | | | | | | is_virtual") | | | | | | is_pure_virtual") | | | | | | `Record` and `MemberFunction` | | | | | | is_final") | | | | | | `Variable` and `MemberFunction` | | | | | | is_static") | | | | | | `Lambda` | | | | | | get_captures") | | | | | | uses_default_copy_captureuses_default_reference_capture") | | | | | | is_call_operator_const") | | | | | | `LambdaCapture` | | | | | | is_explicitly_captured") | | | | | | is_init_capture") | | | | | |

The C++ Extensions for Reflection, ISO/IEC TS 23619:2021, specifies modifications to the core language and defines new components for the C++ standard library listed on this page.

The Reflection TS is based on the C++20 standard (except that the definition of concepts are specified in the style of Concepts TS).

### Core language changes

#### reflexpr-specifier

A reflexpr-specifier is of form `reflexpr` `(` reflexpr-operand `)`, and specifies a meta-object type (see below).

reflexpr-operand can be one of following:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `::` | (1) |  |
|  | | | | | | | | | |
| type-id | (2) |  |
|  | | | | | | | | | |
| nested-name-specifier(optional) namespace-name | (3) |  |
|  | | | | | | | | | |
| id-expression | (4) |  |
|  | | | | | | | | | |
| `(` expression `)` | (5) |  |
|  | | | | | | | | | |
| function-call-expression | (6) |  |
|  | | | | | | | | | |
| functional-type-conv-expression | (7) |  |
|  | | | | | | | | | |

where function-call-expression is

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| postfix-expression `(` expression-list(optional) `)` |  |  |
|  | | | | | | | | | |

and functional-type-conv-expression are following sorts of expressions which perform explict cast:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| simple-type-specifier `(` expression-list(optional) `)` | (1) |  |
|  | | | | | | | | | |
| typename-specifier `(` expression-list(optional) `)` | (2) |  |
|  | | | | | | | | | |
| simple-type-specifier braced-init-list | (3) |  |
|  | | | | | | | | | |
| typename-specifier braced-init-list | (4) |  |
|  | | | | | | | | | |

The operand to the reflexpr-specifier shall be a type, namespace, enumerator, variable, data member, function parameter, captured entity, function-call-expression or functional-type-conv-expression, and parenthesized expression. reflexpr(::) reflects the global namespace.

For a reflexpr-operand of form `(` expression `)`, the expression shall be a (possibly multi-parenthesized) function-call-expression or functional-type-conv-expression.

If an unparenthesized operand can be treated as either a type-id or a functional-type-conv-expression, then it is treated as a type-id. Parenthesizes can be used for disambiguation between function-style cast and a type-id. For example, given a class type `X` with default constructor, reflexpr(X()) reflects the function type X(), and reflexpr((X())) reflects the expression X().

If the operand designates both an alias and a class name, the type represented by the reflexpr-specifier reflects the alias and satisfies `reflect::Alias`.

If the operand designates a name whose declaration is enclosed in a block scope and the named entity is neither captured nor a function parameter, the program is ill-formed.

#### Meta-object types

A **meta-object type** is an unnamed, incomplete namespace-scope class type. A type satisfies the concept `reflect::Object` if and only if it is a meta-object type. Meta-object types may satisfy other concepts, depending on the operand to `reflexpr`.

It is unspecified whether repeatedly applying `reflexpr` to the same operand yields the same type or a different type. If a meta-object type reflects an incomplete class type, certain type transformations cannot be applied.

A meta-object type allows inspection of some properties of the operand to `reflexpr` through type traits or type transformations on it.

#### Overload resolution

If the postfix-expression of the function-call-expression is of class type, i.e. e in the function-call-expression e(args) is of class type, then the user-defined conversion function of the type of the postfix-expression (e) shall not be used.

If postfix-expression is not of class type, it shall name a function that is the unique result of overload resolution.

```
struct Functor
{
    void operator()(int) const;
 
    using fptr_t = void(*)(std::nullptr_t);
    operator fptr_t() const;
};
 
using Meta0 = reflexpr(Functor{}(0));          // OK
// using Meta1 = reflexpr(Functor{}(nullptr)); // error: conversion function used

```

#### Reflection-related

An **alias** is a name introduced by a typedef declaration, an alias-declaration, or a using-declaration.

An entity or alias `B` is **reflection-related** to an entity or alias `A` if

1. `A` and `B` are the same entity or alias,
2. `A` is a variable or enumerator and `B` is the type of `A`,
3. `A` is an enumeration and `B` is the underlying type of `A`,
4. `A` is a class and `B` is a member or base class of `A`,
5. `A` is a non-template alias that designates the entity `B`,
6. `A` is not the global namespace and `B` is an enclosing class or namespace of `A`,
7. `A` is the parenthesized expression ( `B` ),
8. `A` is a lambda capture of the closure type `B`,
9. `A` is the closure type of the lambda capture `B`,
10. `B` is the type specified by the functional-type-conv-expression `A`,
11. `B` is the function selected by overload resolution for a function-call-expression `A`,
12. `B` is the return type, a parameter type, or function type of the function `A`, or
13. `B` is reflection-related to an entity or alias `X` and `X` is reflection-related to `A`.

Reflection-relation relationship is reflexive and transitive, but not symmetric.

Informally speaking, the case that `B` is reflection-related to `A` means that `B` participates in the declaration or definition of `A`.

Zero or more successive applications of type transformations that yield meta-object types to the type denoted by a reflexpr-specifier enable inspection of entities and aliases that are reflection-related to the operand; such a meta-object type is said to reflect the respective reflection-related entity or alias.

```
struct X;
struct B
{
    using X = ::X;
    typedef X Y;
};
struct D : B
{
    using B::Y;
};
// ::X, but not B::X or B::Y is reflection-related to D::Y

```

#### Miscellaneous

- An expression used as reflexpr-operand is an unevaluated expressions and potentially constant evaluated.
- For the purpose of determination of variables captured in a lambda expression by a capture-default, a `reflexpr` operand is not considered to be an unevaluated operand.
- A function or variable of static storage duration reflected by meta-object type `T` is odr-used by the specialization std::experimental::reflect::get_pointer<T>, as if by taking the address of an id-expression nominating the function or variable.
- There can be more than one definition of a meta-object type, as long as all operations on this type yield the same constant expression results.
- A type is dependent if it is denoted by a reflexpr-specifier, and the operand
  - is a type-dependent expression or a (possibly parenthesized) functional-type-conv-expression with at least one type-dependent immediate subexpression, or
  - designates a dependent type or a member of an unknown specialization or a value-dependent constant expression.

#### Keywords

reflexpr

#### Predefined feature testing macros

|  |  |
| --- | --- |
| __cpp_reflection(reflection TS) | a value of at least 201902 indicates that the Reflection TS is supported   (macro constant) |

### Library support

#### Concepts

|  |  |
| --- | --- |
| Defined in header `<experimental/reflect>` | |
| Defined in namespace `std::experimental::reflect` | |
| Defined in inline namespace `std::experimental::reflect::v1` | |
| Object(reflection TS) | specifies that a type is a meta-object type   (concept) |
| ObjectSequence(reflection TS) | specifies that a meta-object type is a meta-object sequence type   (concept) |
| TemplateParameterScope")(reflection TS) | specifies that a meta-object type reflects a template parameter scope   (concept) |
| Named(reflection TS) | specifies that a meta-object type reflects an entity or alias with an associated (possibly empty) name   (concept) |
| Alias(reflection TS) | specifies that a meta-object type reflects a type alias, namespace alias, or an alias introduced by a using-declaration   (concept) |
| RecordMember(reflection TS) | specifies that a meta-object type reflects a member-declaration of a class   (concept) |
| Enumerator(reflection TS) | specifies that a meta-object type reflects an enumerator   (concept) |
| Variable(reflection TS) | specifies that a meta-object type reflects a variable or data member   (concept) |
| ScopeMember(reflection TS) | specifies that a meta-object type satisfies `RecordMember`, `Enumerator`, or `Variable`, or reflects a namespace other than the global namespace   (concept) |
| Typed(reflection TS) | specifies that a meta-object type reflects an entity with a type   (concept) |
| Namespace(reflection TS) | specifies that a meta-object type reflects a namespace   (concept) |
| GlobalScope(reflection TS) | specifies that a meta-object type reflects the global namespace   (concept) |
| Class(reflection TS) | specifies that a meta-object type reflects a non-union class type   (concept) |
| Enum(reflection TS) | specifies that a meta-object type reflects an enumeration type   (concept) |
| Record(reflection TS) | specifies that a meta-object type reflects a class type   (concept) |
| Scope(reflection TS) | specifies that a meta-object type reflects a namespace, class, enumeration, function, closure type, a template parameter scope   (concept) |
| Type(reflection TS) | specifies that a meta-object type reflects a type   (concept) |
| Constant(reflection TS) | specifies that a meta-object type reflects an enumerator or a constexpr variable   (concept) |
| Base(reflection TS) | specifies that a meta-object type reflects a direct base class obtained from `get_base_classes`   (concept) |
| FunctionParameter(reflection TS) | specifies that a meta-object type reflects a function parameter   (concept) |
| Callable(reflection TS) | specifies that a meta-object type reflects a function (including constructors and destructors)   (concept) |
| Expression(reflection TS) | specifies that a meta-object type reflects an expression   (concept) |
| ParenthesizedExpression(reflection TS) | specifies that a meta-object type reflects a parenthesized expression   (concept) |
| FunctionCallExpression(reflection TS) | specifies that a meta-object type reflects a function-call-expression   (concept) |
| FunctionalTypeConversion(reflection TS) | specifies that a meta-object type reflects a functional-type-conv-expression   (concept) |
| Function(reflection TS) | specifies that a meta-object type reflects a function (excluding constructors and destructors)   (concept) |
| MemberFunction(reflection TS) | specifies that a meta-object type reflects a member function (excluding constructors and destructors)   (concept) |
| SpecialMemberFunction(reflection TS) | specifies that a meta-object type reflects a special member function   (concept) |
| Constructor(reflection TS) | specifies that a meta-object type reflects a constructor   (concept) |
| Destructor(reflection TS) | specifies that a meta-object type reflects a destructor   (concept) |
| Operator(reflection TS) | specifies that a meta-object type reflects an operator function or a conversion function   (concept) |
| ConversionOperator(reflection TS) | specifies that a meta-object type reflects a conversion function   (concept) |
| Lambda(reflection TS) | specifies that a meta-object type reflects the closure type of a non-generic lambda   (concept) |
| LambdaCapture(reflection TS) | specifies that a meta-object type reflects a lambda capture   (concept) |

#### Meta-object operations

|  |  |
| --- | --- |
| Defined in header `<experimental/reflect>` | |
| Defined in namespace `std::experimental::reflect` | |
| Defined in inline namespace `std::experimental::reflect::v1` | |
| `Object` operations | |
| reflects_same")(reflection TS) | checks if two meta-object types reflect the same entity or alias   (class template) |
| get_source_line(reflection TS) | obtains the presumed line number of the declaration of the reflected entity or alias   (class template) |
| get_source_column(reflection TS) | obtains the implementation-defined column number of the declaration of the reflected entity or alias   (class template) |
| get_source_file_name")(reflection TS) | obtains the presumed file name of the declaration of the reflected entity or alias   (class template) |
| `ObjectSequence` operations | |
| get_size")(reflection TS) | obtains the size of a meta-object sequence   (class template) |
| get_element")(reflection TS) | obtains the meta-object type with specified index in a sequence   (class template) |
| unpack_sequence")(reflection TS) | applies a template to the meta-object sequence   (class template) |
| `Named` operations | |
| is_unnamed")(reflection TS) | checks if the reflected entity or alias is unnamed   (class template) |
| get_name")(reflection TS) | obtains the unqualified name of the reflected entity or alias   (class template) |
| get_display_name")(reflection TS) | obtains the implementation-defined display name of the reflected entity or alias   (class template) |
| `Alias` operations | |
| get_alias")(reflection TS) | obtains the meta-object type reflecting the associated entity of the reflected alias   (class template) |
| `Type` operations | |
| get_type")(reflection TS) | obtains the meta-object type reflecting the type of the reflected entity or alias   (class template) |
| get_reflected_type")(reflection TS) | obtains the type of the reflected entity or alias   (class template) |
| is_enum")(reflection TS) | checks if the meta-object type reflects an enumeration type   (class template) |
| is_union")(reflection TS) | checks if the meta-object type reflects a union type   (class template) |
| uses_class_keyuses_struct_key")(reflection TS) | checks if the meta-object type reflects a non-union class type whose declaration uses class or struct respectively   (class template) |
| `ScopeMember` operations | |
| get_scope")(reflection TS) | obtains the meta-object type reflecting the scope of the reflected entity or alias   (class template) |
| `Base` operations | |
| get_class")(reflection TS) | obtains the meta-object type reflecting the base class in the given base class relationship   (class template) |
| `RecordMember` and `Base` operations | |
| is_public")(reflection TS) | checks if the reflected member or base class is public   (class template) |
| is_protected")(reflection TS) | checks if the reflected member or base class is protected   (class template) |
| is_private")(reflection TS) | checks if the reflected member or base class is private   (class template) |
| `Record` operations | |
| get_public_data_membersget_accessible_data_membersget_data_members")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all data members of the reflected class   (class template) |
| get_public_member_functionsget_accessible_member_functionsget_member_functions")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all member functions of the reflected class   (class template) |
| get_constructors")(reflection TS) | obtains a meta-object sequence type whose elements reflect all constructors of the reflected class   (class template) |
| get_operators")(reflection TS) | obtains a meta-object sequence type whose elements reflect all operator functions and conversion functions declared in the reflected class   (class template) |
| get_destructor")(reflection TS) | obtains the meta-object type reflecting the destructor of the reflected class   (class template) |
| get_public_member_typesget_accessible_member_typesget_member_types")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all nested type or member typedefs of the reflected class   (class template) |
| get_public_base_classesget_accessible_base_classesget_base_classes")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all base classes of the reflected class   (class template) |
| `Enum` operations | |
| is_scoped_enum")(reflection TS) | checks whether the reflected enumeration is scoped   (class template) |
| get_enumerators")(reflection TS) | obtains a meta-object sequence type whose elements reflects the enumerators of the reflected enumeration   (class template) |
| get_underlying_type")(reflection TS) | obtains the meta-object type reflecting the underlying type of the reflected enumeration   (class template) |
| `Variable` operations | |
| get_constant")(reflection TS) | obtains the value of the reflected variable which is a constant expression   (class template) |
| is_thread_local")(reflection TS) | checks if the variable is declared with thread_local   (class template) |
| `FunctionParameter` operations | |
| has_default_argument")(reflection TS) | checks whether the reflected parameter has a default argument   (class template) |
| `Callable` operations | |
| get_parameters")(reflection TS) | obtains a meta-object sequence type whose elements reflects the parameters of the reflected function   (class template) |
| is_vararg")(reflection TS) | checks whether the parameter list of the reflected function contains an ellipsis parameter   (class template) |
| is_noexcept")(reflection TS) | checks whether the reflected function is non-throwing   (class template) |
| is_deleted")(reflection TS) | checks whether the reflected function is deleted   (class template) |
| `Variable` and `Callable` operations | |
| is_constexpr")(reflection TS) | checks if the reflected variable or function is constexpr   (class template) |
| `Namespace` and `Callable` operations | |
| is_inline")(reflection TS) | checks whether the reflected namespace or function is inline   (class template) |
| `ParenthesizedExpression` operations | |
| get_subexpression")(reflection TS) | obtains the meta-object type reflecting the unparenthesized expression of the reflected parethesized expression   (class template) |
| `FunctionCallExpression` operations | |
| get_callable")(reflection TS) | obtains the meta-object type reflecting the function in the reflected function-call-expression   (class template) |
| `FunctionalTypeConversion` operations | |
| get_constructor")(reflection TS) | obtains the meta-object type reflecting the constructor in reflected functional-type-conv-expression   (class template) |
| `Variable` and `Function` operations | |
| get_pointer")(reflection TS) | get the address of the reflected variable or function, or the pointer-to-member value to the reflected non-static member   (class template) |
| `MemberFunction` operations | |
| is_constis_volatilehas_lvalueref_qualifierhas_rvalueref_qualifier")(reflection TS) | checks if the reflected member function is declared with const, volatile, &, or && qualifier respectively   (class template) |
| is_override")(reflection TS) | checks if the reflected member function overrides a member function of base class   (class template) |
| `Record` and `MemberFunction` operations | |
| is_final")(reflection TS) | checks if the reflected class or member function is marked with final   (class template) |
| `Variable` and `MemberFunction` operations | |
| is_static")(reflection TS) | checks if the reflected variable is of static storage duration, or the reflected member function is static   (class template) |
| `SpecialMemberFunction` operations | |
| is_implicitly_declared")(reflection TS) | checks if the reflected special member function is implicitly declared   (class template) |
| is_defaulted")(reflection TS) | checks if the reflected special member function is defaulted in its first declaration   (class template) |
| `Constructor` and `ConversionOperator` operations | |
| is_explicit")(reflection TS) | checks if the reflected constructor or conversion function is declared with explicit   (class template) |
| `MemberFunction` and `Destructor` operations | |
| is_virtual")(reflection TS) | checks if the reflected member function is virtual   (class template) |
| is_pure_virtual")(reflection TS) | checks if the reflected member function is pure virtual   (class template) |
| `Lambda` operations | |
| get_captures")(reflection TS) | obtains a meta-object sequence type whose elements reflect the captures of the reflected closure type   (class template) |
| uses_default_copy_captureuses_default_reference_capture")(reflection TS) | checks if the capture-default of the lambda expression of the reflected closure type is `=` or `&` respectively   (class template) |
| is_call_operator_const")(reflection TS) | checks if the `operator()` of the reflected closure type is declared with const   (class template) |
| `LambdaCapture` operations | |
| is_explictly_captured")(reflection TS) | checks if the reflected lambda capture is explicitly captured   (class template) |
| is_init_capture")(reflection TS) | checks if the reflected lambda capture is an init-capture   (class template) |

#### Library feature testing macros

|  |  |
| --- | --- |
| Defined in header `<experimental/reflect>` | |
| __cpp_lib_reflection(reflection TS) | a value of at least 201902 indicates that the support library of the Reflection TS is supported   (macro constant) |

#### Satisfaction of concepts

The following table lists that whether a meta-object type reflecting an operand satisfies concepts introduced by the Reflection TS.

| Category | `reflexpr` operands | Satisfied concepts |
| --- | --- | --- |
| Type | class-name designating a union | `reflect::Union` |
| class-name designating a closure type | `reflect::Lambda` |
| class-name designating a non-union class | `reflect::Record` |
| enum-name | `reflect::Enum` |
| template type-parameter | `reflect::Type`, `reflect::Alias` |
| decltype-specifier | `reflect::Type`, `reflect::Alias` |
| type-name introduced by a using-declaration | `reflect::Type`, `reflect::Alias`, `reflect::ScopedMember` |
| any other typedef-name | `reflect::Type`, `reflect::Alias` |
| any other type-id | `reflect::Type` |
| Namespace | namespace-alias | `reflect::Namespace`, `reflect::Alias` |
| the global namespace | `reflect::GlobalScope` |
| any other namespace | `reflect::Namespace` |
| Expression | the name of a data member | `reflect::Variable` |
| the name of a variable | `reflect::Variable` |
| the name of an enumerator | `reflect::Enumerator` |
| the name of a function parameter | `reflect::FunctionParameter` |
| the name of a captured entity | `reflect::LambdaCapture` |
| parenthesized expression | `reflect::ParenthesizedExpression` |
| function-call-expression | `reflect::FunctionCallExpression` |
| functional-type-conv-expression | `reflect::FunctionalTypeConversion` |

If the operand of the form id-expression is a constant expression, the type specified by the reflexpr-specifier also satisfies `reflect::Constant`.

If the reflexpr-operand designates a class member, the type represented by the reflexpr-specifier also satisfies `reflect::RecordMember`.

### See also

|  |  |
| --- | --- |
| type_info | contains some type’s information, the class returned by the typeid operator   (class) |
| <type_traits>(C++11) | Compile-time type information utilities |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/reflect&oldid=164497>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 December 2023, at 01:08.