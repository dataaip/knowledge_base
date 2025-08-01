# Array declaration

From cppreference.com
< c‎ | language
 C

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Compiler support | | | | |
| Language | | | | |
| Headers | | | | |
| Type support | | | | |
| Program utilities | | | | |
| Variadic function support | | | | |
| Error handling | | | | |
| Dynamic memory management | | | | |
| Strings library | | | | |
| Algorithms | | | | |
| Numerics | | | | |
| Date and time utilities | | | | |
| Input/output support | | | | |
| Localization support | | | | |
| Concurrency support (C11) | | | | |
| Technical Specifications | | | | |
| Symbol index | | | | |

 C language

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Basic concepts | | | | |
| Keywords | | | | |
| Preprocessor | | | | |
| Statements | | | | |
| Expressions | | | | |
| Initialization | | | | |
| Declarations | | | | |
| Functions | | | | |
| Miscellaneous | | | | |
| History of C | | | | |
| Technical Specifications | | | | |

 Declarations

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Pointer | | | | |
| ****Array**** | | | | |
| enum | | | | |
| struct | | | | |
| union | | | | |
| Bit-field | | | | |
| Atomic types (C11) | | | | |
| const | | | | |
| constexpr(C23) | | | | |
| volatile | | | | |
| restrict(C99) | | | | |
| Alignment specifiers | | | | |
| Storage duration and linkage | | | | |
| External and tentative definitions | | | | |
| typedef | | | | |
| Static assertions | | | | |
| Attributes (C23) | | | | |

Array is a type consisting of a contiguously allocated nonempty sequence of objects with a
particular **element type**. The number of those objects (the array size) never changes during the array lifetime.

### Syntax

In the declaration grammar of an array declaration, the **type-specifier** sequence designates the **element type** (which must be a complete object type), and the **declarator** has the form:

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| `[` `static`(optional) qualifiers ﻿(optional) expression ﻿(optional) `]` attr-spec-seq ﻿(optional) | (1) |  |
|  | | | | | | | | | |
| `[` qualifiers ﻿(optional) `static`(optional) expression ﻿(optional) `]` attr-spec-seq ﻿(optional) | (2) |  |
|  | | | | | | | | | |
| `[` qualifiers ﻿(optional) `*` `]` attr-spec-seq ﻿(optional) | (3) |  |
|  | | | | | | | | | |

1,2) General array declarator syntax3) Declarator for VLA of unspecified size (can appear in function prototype scope only)
where

|  |  |  |
| --- | --- | --- |
| expression | - | any expression other than comma operator, designates the number of elements in the array |
| qualifiers | - | any combination of `const`, `restrict`, or `volatile` qualifiers, only allowed in function parameter lists; this qualifies the pointer type to which this array parameter is transformed |
| attr-spec-seq | - | (C23)optional list of attributes, applied to the declared array |

```
float fa[11], *afp[17]; // fa is an array of 11 floats
                        // afp is an array of 17 pointers to floats

```

### Explanation

There are several variations of array types: arrays of known constant size, variable-length arrays, and arrays of unknown size.

#### Arrays of constant known size

If expression in an array declarator is an integer constant expression with a value greater than zero and the element type is a type with a known constant size (that is, elements are not VLA)(since C99), then the declarator declares an array of constant known size:

```
int n[10]; // integer constants are constant expressions
char o[sizeof(double)]; // sizeof is a constant expression
enum { MAX_SZ=100 };
int n[MAX_SZ]; // enum constants are constant expressions

```

Arrays of constant known size can use array initializers to provide their initial values:

```
int a[5] = {1,2,3}; // declares int[5] initialized to 1,2,3,0,0
char str[] = "abc"; // declares char[4] initialized to 'a','b','c','\0'

```

|  |  |
| --- | --- |
| In function parameter lists, additional syntax elements are allowed within the array declarators: the keyword `static` and qualifiers, which may appear in any order before the size expression (they may also appear even when the size expression is omitted).  In each function call to a function where an array parameter uses the keyword `static` between `[` and `]`, the value of the actual parameter must be a valid pointer to the first element of an array with at least as many elements as specified by expression:   ```text void fadd(double a[static 10], const double b[static 10]) {     for (int i = 0; i < 10; i++)     {         if (a[i] < 0.0) return;         a[i] += b[i];     } } // a call to fadd may perform compile-time bounds checking // and also permits optimizations such as prefetching 10 doubles int main(void) {     double a[10] = {0}, b[20] = {0};     fadd(a, b); // OK     double x[5] = {0};     fadd(x, b); // undefined behavior: array argument is too small } ```   If qualifiers are present, they qualify the pointer type to which the array parameter type is transformed:   ```text int f(const int a[20]) {     // in this function, a has type const int* (pointer to const int) } int g(const int a[const 20]) {     // in this function, a has type const int* const (const pointer to const int) } ```   This is commonly used with the `restrict` type qualifier:   ```text void fadd(double a[static restrict 10],           const double b[static restrict 10]) {     for (int i = 0; i < 10; i++) // loop can be unrolled and reordered     {         if (a[i] < 0.0)             break;         a[i] += b[i];     } } ```  Variable-length arrays If expression is not an integer constant expression, the declarator is for an array of variable size.  Each time the flow of control passes over the declaration, expression is evaluated (and it must always evaluate to a value greater than zero), and the array is allocated (correspondingly, lifetime of a VLA ends when the declaration goes out of scope). The size of each VLA instance does not change during its lifetime, but on another pass over the same code, it may be allocated with a different size. Run this code  ```text #include <stdio.h>   int main(void) {    int n = 1; label:;    int a[n]; // re-allocated 10 times, each with a different size    printf("The array has %zu elements\n", sizeof a / sizeof *a);    if (n++ < 10)        goto label; // leaving the scope of a VLA ends its lifetime } ```   If the size is `*`, the declaration is for a VLA of unspecified size. Such declaration may only appear in a function prototype scope, and declares an array of a complete type. In fact, all VLA declarators in function prototype scope are treated as if expression were replaced by `*`.   ```text void foo(size_t x, int a[*]); void foo(size_t x, int a[x]) {     printf("%zu\n", sizeof a); // same as sizeof(int*) } ```   Variable-length arrays and the types derived from them (pointers to them, etc) are commonly known as "variably-modified types" (VM). Objects of any variably-modified type may only be declared at block scope or function prototype scope.   ```text extern int n; int A[n];            // Error: file scope VLA extern int (*p2)[n]; // Error: file scope VM int B[100];          // OK: file-scope array of constant known size void fvla(int m, int C[m][m]); // OK: prototype-scope VLA ```   VLA must have automatic or allocated storage duration. Pointers to VLA, but not VLA themselves may also have static storage duration. No VM type may have linkage.   ```text void fvla(int m, int C[m][m]) // OK: block scope/auto duration pointer to VLA {     typedef int VLA[m][m]; // OK: block scope VLA     int D[m];              // OK: block scope/auto duration VLA //  static int E[m]; // Error: static duration VLA //  extern int F[m]; // Error: VLA with linkage     int (*s)[m];     // OK: block scope/auto duration VM     s = malloc(m * sizeof(int)); // OK: s points to VLA in allocated storage //  extern int (*r)[m]; // Error: VM with linkage     static int (*q)[m] = &B; // OK: block scope/static duration VM} } ```   Variably-modified types cannot be members of structs or unions.   ```text struct tag {     int z[n]; // Error: VLA struct member     int (*y)[n]; // Error: VM struct member }; ``` | (since C99) |
| If the compiler defines the macro constant __STDC_NO_VLA__ to integer constant 1, then VLA and VM types are not supported. | (since C11) (until C23) |
| If the compiler defines the macro constant __STDC_NO_VLA__ to integer constant 1, then VLA objects with automatic storage duration are not supported.  The support for VM types and VLAs with allocated storage durations is mandated. | (since C23) |

#### Arrays of unknown size

If expression in an array declarator is omitted, it declares an array of unknown size. Except in function parameter lists (where such arrays are transformed to pointers) and when an initializer is available, such type is an incomplete type (note that VLA of unspecified size, declared with `*` as the size, is a complete type)(since C99):

```
extern int x[]; // the type of x is "array of unknown bound of int"
int a[] = {1,2,3}; // the type of a is "array of 3 int"

```

|  |  |
| --- | --- |
| Within a struct definition, an array of unknown size may appear as the last member (as long as there is at least one other named member), in which case it is a special case known as **flexible array member**. See struct for details:   ```text struct s { int n; double d[]; }; // s.d is a flexible array member struct s *s1 = malloc(sizeof (struct s) + (sizeof (double) * 8)); // as if d was double d[8] ``` | (since C99) |

#### Qualifiers

|  |  |
| --- | --- |
| If an array type is declared with a `const`, `volatile`, or `restrict`(since C99) qualifier (which is possible through the use of typedef), the array type is not qualified, but its element type is: | (until C23) |
| An array type and its element type are always considered to be identically qualified, except that an array type is never considered to be `_Atomic`-qualified. | (since C23) |

```
typedef int A[2][3];
const A a = {{4, 5, 6}, {7, 8, 9}}; // array of array of const int
int* pi = a[0]; // Error: a[0] has type const int*
void* unqual_ptr = a; // OK until C23; error since C23
// Notes: clang applies the rule in C++/C23 even in C89-C17 modes

```

|  |  |
| --- | --- |
| `_Atomic` is not allowed to be applied to an array type, although an array of atomic type is allowed.   ```text typedef int A[2]; // _Atomic A a0 = {0};    // Error // _Atomic(A) a1 = {0};   // Error _Atomic int a2[2] = {0};  // OK _Atomic(int) a3[2] = {0}; // OK ``` | (since C11) |

#### Assignment

Objects of array type are not modifiable lvalues, and although their address may be taken, they cannot appear on the left hand side of an assignment operator. However, structs with array members are modifiable lvalues and can be assigned:

```
int a[3] = {1,2,3}, b[3] = {4,5,6};
int (*p)[3] = &a; // okay, address of a can be taken
// a = b;            // error, a is an array
struct { int c[3]; } s1, s2 = {3,4,5};
s1 = s2; // okay: can assign structs holding array members

```

#### Array to pointer conversion

Any lvalue expression of array type, when used in any context other than

- as the operand of the address-of operator
- as the operand of `sizeof`
- as the operand of `typeof` and `typeof_unqual` (since C23)
- as the string literal used for array initialization

|  |  |
| --- | --- |
| - as the operand of `_Alignof`(since C11)(until C23)`alignof`(since C23) | (since C11) |

undergoes an implicit conversion to the pointer to its first element. The result is not an lvalue.

If the array was declared `register`, the behavior of the program that attempts such conversion is undefined.

```
int a[3] = {1,2,3};
int* p = a;
printf("%zu\n", sizeof a); // prints size of array
printf("%zu\n", sizeof p); // prints size of a pointer

```

When an array type is used in a function parameter list, it is transformed to the corresponding pointer type: int f(int a[2]) and int f(int\* a) declare the same function. Since the function's actual parameter type is pointer type, a function call with an array argument performs array-to-pointer conversion; the size of the argument array is not available to the called function and must be passed explicitly:

Run this code

```
#include <stdio.h>
 
void f(int a[], int sz) // actually declares void f(int* a, int sz)
{
    for (int i = 0; i < sz; ++i)
        printf("%d\n", a[i]);
}
 
void g(int (*a)[10]) // pointer to array parameter is not transformed
{
    for (int i = 0; i < 10; ++i)
        printf("%d\n", (*a)[i]);
}
 
int main(void)
{
    int a[10] = {0};
    f(a, 10); // converts a to int*, passes the pointer
    g(&a);    // passes a pointer to the array (no need to pass the size)
}

```

#### Multidimensional arrays

When the element type of an array is another array, it is said that the array is multidimensional:

```
// array of 2 arrays of 3 ints each
int a[2][3] = {{1,2,3},  // can be viewed as a 2x3 matrix
               {4,5,6}}; // with row-major layout

```

Note that when array-to-pointer conversion is applied, a multidimensional array is converted to a pointer to its first element, e.g., pointer to the first row:

```
int a[2][3]; // 2x3 matrix
int (*p1)[3] = a; // pointer to the first 3-element row
int b[3][3][3]; // 3x3x3 cube
int (*p2)[3][3] = b; // pointer to the first 3x3 plane

```

|  |  |
| --- | --- |
| Multidimensional arrays may be variably modified in every dimension if VLAs are supported(since C11):   ```text int n = 10; int a[n][2*n]; ``` | (since C99) |

### Notes

Zero-length array declarations are not allowed, even though some compilers offer them as extensions (typically as a pre-C99 implementation of flexible array members).

If the size expression of a VLA has side effects, they are guaranteed to be produced except when it is a part of a sizeof expression whose result doesn't depend on it:

```
int n = 5, m = 5;
size_t sz = sizeof(int (*[n++])[m++]); // n is incremented, m may or may not be incremented

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.7.6.2 Array declarators (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.7.6.2 Array declarators (p: 94-96)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.7.6.2 Array declarators (p: 130-132)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.7.5.2 Array declarators (p: 116-118)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.5.4.2 Array declarators

### See also

|  |  |
| --- | --- |
| C++ documentation for Array declaration | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/array&oldid=179987>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2025, at 05:54.