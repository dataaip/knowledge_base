# goto statement

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
| return | | | | |
| ****goto**** | | | | |

Transfers control unconditionally to the desired location.

Used when it is otherwise impossible to transfer control to the desired location using conventional constructs.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr-spec-seq(optional) `goto` label `;` |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| label | - | target label for the `goto` statement |
| attr-spec-seq | - | (C23)optional list of attributes, applied to the `goto` statement |

### Explanation

The `goto` statement causes an unconditional jump (transfer of control) to the statement prefixed by the named label (which must appear in the same function as the goto statement), except when this jump would enter the scope of a variable-length array or another variably-modified type.(since C99)

A label is an identifier followed by a colon (`:`) and a statement(until C23). Labels are the only identifiers that have **function scope**: they can be used (in a goto statement) anywhere in the same function in which they appear. There may be multiple labels before any statement.

|  |  |
| --- | --- |
| Entering the scope of a non-variably modified variable is permitted:   ```text goto lab1; // OK: going into the scope of a regular variable     int n = 5; lab1:; // Note, n is uninitialized, as if declared by int n;   //   goto lab2;   // Error: going into the scope of two VM types      double a[n]; // a VLA      int (*p)[n]; // a VM pointer lab2: ```   If `goto` leaves the scope of a VLA, it is deallocated (and may be reallocated if its initialization is executed again):   ```text {    int n = 1; label:;    int a[n]; // re-allocated 10 times, each with a different size    if (n++ < 10) goto label; // leaving the scope of a VM } ``` | (since C99) |

### Keywords

goto

### Notes

|  |  |
| --- | --- |
| Because declarations are not statements, a label before a declaration must use a null statement (a semicolon immediately after the colon). Same applies to a label before the end of a block. | (until C23) |

C++ imposes additional limitations on the `goto` statement, but allows labels before declarations (which are statements in C++).

### Example

Run this code

```
#include <stdio.h>
 
int main(void)
{
    // goto can be used to leave a multi-level loop easily
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("(%d;%d)\n",x,y);
            if (x + y >= 3) goto endloop;
        }
    }
endloop:;
}

```

Output:

```
(0;0)
(0;1)
(0;2)
(1;0)
(1;1)
(1;2)

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 6.8.6.1 The goto statement (p: 110-111)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.8.6.1 The goto statement (p: 152-153)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.8.6.1 The goto statement (p: 137-138)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.6.6.1 The goto statement

### See also

|  |  |
| --- | --- |
| C++ documentation for `goto` statement | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/goto&oldid=130664>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 June 2021, at 02:23.