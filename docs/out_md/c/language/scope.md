# Scope

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

 Basic Concepts

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Comments | | | | |
| ASCII | | | | |
| Character sets | | | | |
| Translation phases | | | | |
| Punctuation | | | | |
| Identifier | | | | |
| ****Scope**** | | | | |
| Lifetime | | | | |
| Lookup and name spaces | | | | |
| Type | | | | |
| Arithmetic types | | | | |
| Objects and alignment | | | | |
| The main() function | | | | |
| The as-if rule | | | | |
| Undefined behavior | | | | |
| Memory model and data races | | | | |

Each identifier that appears in a C program is **visible** (that is, may be used) only in some possibly discontiguous portion of the source code called its **scope**.

Within a scope, an identifier may designate more than one entity only if the entities are in different name spaces.

C has four kinds of scopes:

:   - block scope
    - file scope
    - function scope
    - function prototype scope

### Nested scopes

If two different entities named by the same identifier are in scope at the same time, and they belong to the same name space, the scopes are nested (no other form of scope overlap is allowed), and the declaration that appears in the inner scope hides the declaration that appears in the outer scope:

```
// The name space here is ordinary identifiers.
 
int a;   // file scope of name a begins here
 
void f(void)
{
    int a = 1; // the block scope of the name a begins here; hides file-scope a
    {
      int a = 2;         // the scope of the inner a begins here, outer a is hidden
      printf("%d\n", a); // inner a is in scope, prints 2
    }                    // the block scope of the inner a ends here
    printf("%d\n", a);   // the outer a is in scope, prints 1
}                        // the scope of the outer a ends here
 
void g(int a);   // name a has function prototype scope; hides file-scope a

```

### Block scope

The scope of any identifier declared inside a compound statement, including function bodies, or in any expression, declaration, or statement appearing in if, switch, for, while, or do-while statement(since C99), or within the parameter list of a function definition begins at the point of declaration and ends at the end of the block or statement in which it was declared.

```
void f(int n)  // scope of the function parameter 'n' begins
{         // the body of the function begins
   ++n;   // 'n' is in scope and refers to the function parameter
// int n = 2; // error: cannot redeclare identifier in the same scope
   for(int n = 0; n<10; ++n) { // scope of loop-local 'n' begins
       printf("%d\n", n); // prints 0 1 2 3 4 5 6 7 8 9
   } // scope of the loop-local 'n' ends
     // the function parameter 'n' is back in scope
   printf("%d\n", n); // prints the value of the parameter
} // scope of function parameter 'n' ends
int a = n; // Error: name 'n' is not in scope

```

|  |  |
| --- | --- |
| Until C99, selection and iteration statements did not establish their own block scopes (although if a compound statement was used in the statement, it had its usual block scope):   ```text enum {a, b}; int different(void) {     if (sizeof(enum {b, a}) != sizeof(int))         return a; // a == 1     return b; // b == 0 in C89, b == 1 in C99 } ``` | (since C99) |

Block-scope variables have no linkage and automatic storage duration by default. Note that storage duration for non-VLA local variables begins when the block is entered, but until the declaration is seen, the
variable is not in scope and cannot be accessed.

### File scope

The scope of any identifier declared outside of any block or parameter list begins at the point of declaration and ends at the end of the translation unit.

```
int i; // scope of i begins
static int g(int a) { return a; } // scope of g begins (note, "a" has block scope)
int main(void)
{
    i = g(2); // i and g are in scope
}

```

File-scope identifiers have external linkage and static storage duration by default.

### Function scope

A label (and only a label) declared inside a function is in scope everywhere in that function, in all nested blocks, before and after its own declaration. Note: a label is declared implicitly, by using an otherwise unused identifier before the colon character before any statement.

```
void f()
{
   {   
       goto label; // label in scope even though declared later
label:;
   }
   goto label; // label ignores block scope
}
 
void g()
{
    goto label; // error: label not in scope in g()
}

```

### Function prototype scope

The scope of a name introduced in the parameter list of a function declaration that is not a definition ends at the end of the function declarator.

```
int f(int n,
      int a[n]); // n is in scope and refers to the first parameter

```

Note that if there are multiple or nested declarators in the declaration, the scope ends at the end of the nearest enclosing function declarator:

```
void f ( // function name 'f' is at file scope
 long double f,            // the identifier 'f' is now in scope, file-scope 'f' is hidden
 char (**a)[10 * sizeof f] // 'f' refers to the first parameter, which is in scope
);
 
enum{ n = 3 };
int (*(*g)(int n))[n]; // the scope of the function parameter 'n'
                       // ends at the end of its function declarator
                       // in the array declarator, global n is in scope
// (this declares a pointer to function returning a pointer to an array of 3 int)

```

### Point of declaration

The scope of structure, union, and enumeration tags begins immediately after the appearance of the tag in a type specifier that declares the tag.

```
struct Node {
   struct Node* next; // Node is in scope and refers to this struct
};

```

The scope of enumeration constant begins immediately after the appearance of its defining enumerator in an enumerator list.

```
enum { x = 12 };
{
    enum { x = x + 1, // new x is not in scope until the comma, x is initialized to 13
           y = x + 1  // the new enumerator x is now in scope, y is initialized to 14
         };
}

```

The scope of any other identifier begins just after the end of its declarator and before the initializer, if any:

```
int x = 2; // scope of the first 'x' begins
{
    int x[x]; // scope of the newly declared x begins after the declarator (x[x]).
              // Within the declarator, the outer 'x' is still in scope.
              // This declares a VLA array of 2 int.
}

```

```
unsigned char x = 32; // scope of the outer 'x' begins
{
    unsigned char x = x;
            // scope of the inner 'x' begins before the initializer (= x)
            // this does not initialize the inner 'x' with the value 32, 
            // this initializes the inner 'x' with its own, indeterminate, value
}
 
unsigned long factorial(unsigned long n)
// declarator ends, 'factorial' is in scope from this point
{
   return n<2 ? 1 : n*factorial(n-1); // recursive call
}

```

As a special case, the scope of a type name that is not a declaration of an identifier is considered to begin just after the place within the type name where the identifier would appear were it not omitted.

### Notes

Prior to C89, identifiers with external linkage had file scope even when introduced within a block, and because of that, a C89 compiler is not required to diagnose the use of an extern identifier that has gone out of scope (such use is undefined behavior).

Local variables within a loop body can hide variables declared in the init clause of a for loop in C (their scope is nested), but cannot do that in C++.

Unlike C++, C has no struct scope: names declared within a struct/union/enum declaration are in the same scope as the struct declaration (except that data members are in their own member name space):

```
struct foo {
    struct baz {};
    enum color {RED, BLUE};
};
struct baz b; // baz is in scope
enum color x = RED; // color and RED are in scope

```

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.2.1 Scopes of identifiers, type names, and compound literals (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.2.1 Scopes of identifiers (p: 28-29)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.2.1 Scopes of identifiers (p: 35-36)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.2.1 Scopes of identifiers (p: 29-30)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.1.2.1 Scopes of identifiers

### See also

|  |  |
| --- | --- |
| C++ documentation for Scope | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/scope&oldid=179344>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 January 2025, at 23:08.