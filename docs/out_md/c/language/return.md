# return statement

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

 Statements

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Labels | | | | |
| label : statement | | | | |
| Expression statements | | | | |
| expression ; | | | | |
| Compound statements | | | | |
| { statement... } | | | | |
| Selection statements | | | | |
| if | | | | |
| switch | | | | |
| Iteration statements | | | | |
| while | | | | |
| do-while | | | | |
| for | | | | |
| Jump statements | | | | |
| break | | | | |
| continue | | | | |
| ****return**** | | | | |
| goto | | | | |

Terminates current function and returns specified value to the caller function.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr-spec-seq(optional) `return` expression `;` | (1) |  |
|  | | | | | | | | | |
| attr-spec-seq(optional) `return` `;` | (2) |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| expression | - | expression used for initializing the return value of the function |
| attr-spec-seq | - | (C23)optional list of attributes, applied to the `return` statement |

### Explanation

1) Evaluates the expression, terminates the current function and returns the result of the expression to the caller (the value returned becomes the value of the function call expression). Only valid if the function return type is not void.2) Terminates the current function. Only valid if the function return type is void.

If the type of the expression is different from the return type of the function, its value is converted as if by assignment to an object whose type is the return type of the function, except that overlap between object representations is permitted:

```
struct s { double i; } f(void); // function returning struct s
union { struct { int f1; struct s f2; } u1;
        struct { struct s f3; int f4; } u2; } g;
struct s f(void)
{
    return g.u1.f2;
}
int main(void)
{
// g.u2.f3 = g.u1.f2; // undefined behavior (overlap in assignment)
   g.u2.f3 = f();     // well-defined
}

```

If the return type is a real floating type, the result may be represented in greater range and precision than implied by the new type.

Reaching the end of a function returning void is equivalent to return;. Reaching the end of any other value-returning function is undefined behavior if the result of the function is used in an expression (it is allowed to discard such return value). For `main`, see `main` function.

|  |  |
| --- | --- |
| Executing the `return` statement in a no-return function is undefined behavior. | (since C11) |

### Keywords

return

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: improve |

Run this code

```
#include <stdio.h>
 
void fa(int i)
{
    if (i == 2)
       return;
    printf("fa():   %d\n", i);
} // implied return;
 
int fb(int i)
{
    if (i > 4)
       return 4;
    printf("fb():   %d\n", i);
    return 2;
}
 
int main(void)
{
    fa(2);
    fa(1);
    int i = fb(5);   // the return value 4 used to initializes i
    i = fb(i);       // the return value 2 used as rhs of assignment
    printf("main(): %d\n", i);
}

```

Output:

```
fa():   1
fb():   4
main(): 2

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 6.8.6.4 The return statement (p: 111-112)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.8.6.4 The return statement (p: 154)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.8.6.4 The return statement (p: 139)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.6.6.4 The return statement

### See also

|  |  |
| --- | --- |
| C++ documentation for `return` statement | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/return&oldid=130665>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 June 2021, at 02:23.