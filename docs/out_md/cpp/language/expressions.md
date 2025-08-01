# Expressions

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
| ****Expressions**** | | | | |
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

 ****Expressions****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| General | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Escape sequences | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

An expression is a sequence of **operators** and their **operands**, that specifies a computation.

Expression evaluation may produce a result (e.g., evaluation of 2 + 2 produces the result 4) and may generate side-effects (e.g. evaluation of std::printf("%d", 4) prints the character '4' on the standard output).

Each C++ expression is characterized by two independent properties: A type and a value category.

#### General

- value categories (lvalue, rvalue, glvalue, prvalue, xvalue(since C++11)) classify expressions by their values
- order of evaluation of arguments and subexpressions specify the order in which intermediate results are obtained

### Operators

| Common operators | | | | | | |
| --- | --- | --- | --- | --- | --- | --- |
| assignment | increment decrement | arithmetic | logical | comparison | member access | other |
| a = b  a += b  a -= b  a \*= b  a /= b  a %= b  a &= b  a |= b  a ^= b  a <<= b  a >>= b | ++a  --a  a++  a-- | +a  -a  a + b  a - b  a \* b  a / b  a % b  ~a  a & b  a | b  a ^ b  a << b  a >> b | !a  a && b  a || b | a == b  a != b  a < b  a > b  a <= b  a >= b  a <=> b | a[...]  \*a  &a  a->b  a.b  a->\*b  a.\*b | function call  a(...) |
| comma  a, b |
| conditional  a ? b : c |
| Special operators | | | | | | |
| static_cast converts one type to another related type  dynamic_cast converts within inheritance hierarchies  const_cast adds or removes cv-qualifiers  reinterpret_cast converts type to unrelated type  C-style cast converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  new creates objects with dynamic storage duration  delete destructs objects previously created by the new expression and releases obtained memory area  sizeof queries the size of a type  sizeof... queries the size of a pack (since C++11)  typeid queries the type information of a type  noexcept checks if an expression can throw an exception (since C++11)  alignof queries alignment requirements of a type (since C++11) | | | | | | |

- operator precedence defines the order in which operators are bound to their arguments
- alternative representations are alternative spellings for some operators
- operator overloading makes it possible to specify the behavior of the operators with user-defined classes.

#### Conversions

- standard conversions implicit conversions from one type to another
- `const_cast` conversion
- `static_cast` conversion
- `dynamic_cast` conversion
- `reinterpret_cast` conversion
- explicit cast conversion using C-style cast notation and function-style notation
- user-defined conversion makes it possible to specify conversion from user-defined classes

#### Memory allocation

- new expression allocates memory dynamically
- delete expression deallocates memory dynamically

#### Other

- constant expressions can be evaluated at compile time and used in compile-time context (template arguments, array sizes, etc)
- `sizeof`
- `alignof`
- `typeid`
- throw-expression

### Primary expressions

The operands of any operator may be other expressions or primary expressions (e.g. in 1 + 2 \* 3, the operands of operator+ are the subexpression 2 \* 3 and the primary expression 1).

Primary expressions are any of the following:

- `this`
- literals (e.g. 2 or "Hello, world")
- identifier expressions, including
  - suitably declared unqualified identifiers (e.g. n or cout),
  - suitably declared qualified identifiers (e.g. std::string::npos), and
  - identifiers to be declared in declarators

|  |  |
| --- | --- |
| - pack indexing expression | (since C++26) |

|  |  |
| --- | --- |
| - lambda expressions | (since C++11) |
| - fold expressions | (since C++17) |
| - requires expressions | (since C++20) |

Any expression in parentheses is also classified as a primary expression: this guarantees that the parentheses have higher precedence than any operator. Parentheses preserve value, type, and value category.

#### Literals

Literals are the tokens of a C++ program that represent constant values embedded in the source code.

- integer literals are decimal, octal, hexadecimal or binary numbers of integer type.
- character literals are individual characters of type

:   - char or wchar_t

|  |  |
| --- | --- |
| - char16_t or char32_t | (since C++11) |
| - char8_t | (since C++20) |

- floating-point literals are values of type float, double, or long double
- string literals are sequences of characters of type

:   - const char[] or const wchar_t[]

|  |  |
| --- | --- |
| - const char16_t[] or const char32_t[] | (since C++11) |
| - const char8_t[] | (since C++20) |

- boolean literals are values of type bool, that is true and false

|  |  |
| --- | --- |
| - `nullptr` is the pointer literal which specifies a null pointer value - user-defined literals are constant values of user-specified type | (since C++11) |

### Full-expressions

A **constituent expression** is defined as follows:

- The constituent expression of an expression is that expression.
- The constituent expressions of a braced-init-list or of a (possibly parenthesized) expression list are the constituent expressions of the elements of the respective list.
- The constituent expressions of a brace-or-equal-initializer of the form `=` initializer-clause are the constituent expressions of the initializer-clause.

```
int num1 = 0;
num1 += 1; // Case 1: the constituent expression of `num += 1` is `num += 1`
 
int arr2[2] = {2, 22} // Case 2: the constituent expressions
                      //         of `{2, 22}` are `2` and `22`
                      // Case 3: the constituent expressions of ` = {2, 22}`
                      //         are the constituent expressions of `{2, 22}`
                      //         (i.e. also `2` and `22`)

```

The **immediate subexpressions** of an expression E are

- the constituent expressions of E’s operands,

|  |  |
| --- | --- |
| - if E creates an aggregate object, the constituent expressions of each default member initializer used in the initialization, | (since C++14) |

|  |  |
| --- | --- |
| - if E is a lambda expression, the initialization of the entities captured by copy and the constituent expressions of the initializer of the captures, | (since C++11) |

- any function call that E implicitly invokes, or
- if E is a function call or implicitly invokes a function, the constituent expressions of each default argument used in the call.

A **subexpression** of an expression E is an immediate subexpression of E or a subexpression of an immediate subexpression of E. Note that expressions appearing in the 'function body' of lambda expressions are not subexpressions of the lambda expression.(since C++11)

A **full-expression** is

- an unevaluated operand,
- a constant expression,

|  |  |
| --- | --- |
| - an immediate invocation, | (since C++20) |

- a declarator of a simple declaration or a member initializer, including the constituent expressions of the initializer,
- an invocation of a destructor generated at the end of the lifetime of an object other than a temporary object whose lifetime has not been extended, or
- an expression that is not a subexpression of another expression and that is not otherwise part of a full-expression.

If a language construct is defined to produce an implicit call of a function, a use of the language construct is considered to be an expression for the purposes of this definition. Conversions applied to the result of an expression in order to satisfy the requirements of the language construct in which the expression appears are also considered to be part of the full-expression.

For an initializer, performing the initialization of the entity (including evaluating default member initializers of an aggregate)(since C++14) is also considered part of the full-expression.

### Potentially-evaluated expressions

|  |  |
| --- | --- |
| An expression is **potentially evaluated** unless   - it is the operand of the `sizeof` operator, or - it is the operand of the `typeid` operator and does not designate an lvalue of polymorphic class type. | (until C++11) |
| The following operands are **unevaluated operands** , they are not evaluated:   - expressions which the `typeid` operator applies to, except glvalues of polymorphic class types - expressions which are operands of the `sizeof` operator - operands of the `noexcept` operator - operands of the `decltype` specifier  |  |  | | --- | --- | | - constraint-expression of concept definitions - expressions following the requires keyword of requires-clauses - expressions appearing in requirement-seq of requires-expressions | (since C++20) |   An expression is **potentially evaluated** unless   - it is an unevaluated operand, or - it is a subexpression of an unevaluated operand. | (since C++11) |

Potentially-evaluated expressions are ODR-use.

|  |  |
| --- | --- |
|  | This section is incomplete Reason: example of unevaluated operands |

### Discarded-value expressions

A **discarded-value expression** is an expression that is used for its side-effects only. The value calculated from such expression is discarded. Such expressions include the full-expression of any expression statement, the left-hand operand of the built-in comma operator, or the operand of a cast-expression that casts to the type void.

Array-to-pointer and function-to-pointer conversions are never applied to the value calculated by a discarded-value expression. The lvalue-to-rvalue conversion is applied if and only if the expression is a volatile-qualified glvalue and has one of the following forms (built-in meaning required, possibly parenthesized):

- id-expression,
- array subscript expression,
- class member access expression,
- indirection,
- pointer-to-member operation,
- conditional expression where both the second and the third operands are one of these expressions,
- comma expression where the right operand is one of these expressions.

In addition, if the lvalue is of volatile-qualified class type, a volatile copy constructor is required to initialize the resulting rvalue temporary.

|  |  |
| --- | --- |
| If the expression is a non-void prvalue (after any lvalue-to-rvalue conversion that might have taken place), temporary materialization occurs.  Compilers may issue warnings when an expression other than cast to void discards a value declared `[[nodiscard]]`. | (since C++17) |

  

|  |  |
| --- | --- |
| Expression-equivalence A number of expressions e1, e2, ..., eN are **expression-equivalent** if all following conditions are satisfied:   1. They have the same effects. 2. Either they are all constant subexpressions or neither is. 3. Either they are all noexcept or else neither is.   e1 is **expression-equivalent to** e2 if and only if e1 and e2 are expression-equivalent (which means e2 is also expression-equivalent to e1). | (since C++20) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 1054 | C++98 | assigning a value to a volatile variable might result in an unnecessary read due to the lvalue-to- rvalue conversion applied to the assignment result | introduce discarded-value expressions and exclude this case from the list of cases that require the conversion |
| CWG 1343 | C++98 | sequencing of destructor calls in aggregate initialization was underspecified | full-expressions in aggregate initialization are well-specified |
| CWG 1383 | C++98 | the list of expressions where lvalue-to-rvalue conversion is applied to discarded-value expressions also covered overloaded operators | only cover operators with built-in meaning |
| CWG 1576 | C++11 | lvalue-to-rvalue conversions were not applied to discarded-value volatile xvalue expressions | apply the conversion in this case |
| CWG 2249 | C++98 | identifiers to be declared in declarators were not id-expressions | they are |
| CWG 2431 | C++11 | the invocations of the destructors of temporaries that are bound to references were not full-expressions | they are |

### See also

|  |  |
| --- | --- |
| C documentation for Expressions | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/expressions&oldid=175971>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 September 2024, at 07:23.