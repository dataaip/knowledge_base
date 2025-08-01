# continue statement

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
| ****continue**** | | | | |
| return | | | | |
| goto | | | | |

Causes the remaining portion of the enclosing for, while or  do-while loop body to be skipped.

Used when it is otherwise awkward to ignore the remaining portion of the loop using conditional statements.

### Syntax

|  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|  | | | | | | | | | |
| attr-spec-seq(optional) `continue` `;` |  |  |
|  | | | | | | | | | |

|  |  |  |
| --- | --- | --- |
| attr-spec-seq | - | (C23)optional list of attributes, applied to the `continue` statement |

### Explanation

The `continue` statement causes a jump, as if by goto, to the end of the loop body (it may only appear within the loop body of for, while, and do-while loops).

For while loop, it acts as

```
while (/* ... */) {
   // ... 
   continue; // acts as goto contin;
   // ... 
   contin:;
}

```

For do-while loop, it acts as:

```
do {
    // ... 
    continue; // acts as goto contin;
    // ... 
    contin:;
} while (/* ... */);

```

For for loop, it acts as:

```
for (/* ... */) {
    // ... 
    continue; // acts as goto contin;
    // ... 
    contin:;
}

```

### Keywords

continue

### Example

Run this code

```
#include <stdio.h>
 
int main(void) 
{
    for (int i = 0; i < 10; i++) {
        if (i != 5) continue;
        printf("%d ", i);             // this statement is skipped each time i != 5
    }
 
    printf("\n");
 
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 5; k++) { // only this loop is affected by continue
            if (k == 3) continue;
            printf("%d%d ", j, k);    // this statement is skipped each time k == 3
        }
    }
}

```

Output:

```
5
00 01 02 04 10 11 12 14

```

### References

- C17 standard (ISO/IEC 9899:2018):

:   - 6.8.6.2 The continue statement (p: 111)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.8.6.2 The continue statement (p: 153)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.8.6.2 The continue statement (p: 138)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.6.6.2 The continue statement

### See also

|  |  |
| --- | --- |
| C++ documentation for `continue` statement | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/continue&oldid=130663>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 June 2021, at 02:22.