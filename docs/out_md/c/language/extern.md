# External and tentative definitions

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
| Array | | | | |
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
| ****External and tentative definitions**** | | | | |
| typedef | | | | |
| Static assertions | | | | |
| Attributes (C23) | | | | |

At the top level of a translation unit (that is, a source file with all the #includes after the preprocessor), every C program is a sequence of declarations, which declare functions and objects with external or internal linkage. These declarations are known as **external declarations** because they appear outside of any function.

```
extern int n; // external declaration with external linkage
int b = 1;    // external definition with external linkage
static const char *c = "abc"; // external definition with internal linkage
 
int f(void)    // external definition with external linkage
{
    int a = 1; // non-external
    return b;
}
 
static void x(void) // external definition with internal linkage
{
}

```

Objects declared with an external declaration have static storage duration, and as such cannot use auto or register specifiers except that auto can be used for type inference(since C23). The identifiers introduced by external declarations have file scope.

### Tentative definitions

A **tentative definition** is an external declaration without an initializer, and
either without a storage-class specifier or with the specifier static.

A **tentative definition** is a declaration that may or may not act as a definition. If an actual external definition is found earlier or later in the same translation unit, then the tentative definition just acts as a declaration.

```
int i1 = 1;     // definition, external linkage
int i1;         // tentative definition, acts as declaration because i1 is defined
extern int i1;  // declaration, refers to the earlier definition
 
extern int i2 = 3; // definition, external linkage
int i2;            // tentative definition, acts as declaration because i2 is defined
extern int i2;     // declaration, refers to the external linkage definition

```

If there are no definitions in the same translation unit, then the tentative definition acts as an actual definition that empty-initializes the object.

```
int i3;        // tentative definition, external linkage
int i3;        // tentative definition, external linkage
extern int i3; // declaration, external linkage
// in this translation unit, i3 is defined as if by "int i3 = 0;"

```

Unlike the extern declarations, which don't change the linkage of an identifier if a previous declaration established it, tentative definitions may disagree in linkage with another declaration of the same identifier. If two declarations for the same identifier are in scope and have different linkage, the behavior is undefined:

```
static int i4 = 2; // definition, internal linkage
int i4;            // Undefined behavior: linkage disagreement with previous line
extern int i4;     // declaration, refers to the internal linkage definition
 
static int i5; // tentative definition, internal linkage
int i5;        // Undefined behavior: linkage disagreement with previous line
extern int i5; // refers to previous, whose linkage is internal

```

A tentative definition with internal linkage must have complete type.

```
static int i[]; // Error, incomplete type in a static tentative definition
int i[]; // OK, equivalent to int i[1] = {0}; unless redeclared later in this file

```

### One definition rule

Each translation unit may have zero or one external definition of every identifier with internal linkage (a static global).

If an identifier with internal linkage is used in any expression other than a non-VLA,(since C99) `sizeof`, `_Alignof`(since C11)(until C23), `alignof`(since C23), or `typeof`(since C23), there must be one and only one external definition for that identifier in the translation unit.

The entire program may have zero or one external definition of every identifier with external linkage.

If an identifier with external linkage is used in any expression other than a non-VLA,(since C99) `sizeof`, `_Alignof`(since C11)(until C23), `alignof`(since C23), or `typeof`(since C23), there must be one and only one external definition for that identifier somewhere in the entire program.

### Notes

|  |  |
| --- | --- |
| Inline definitions in different translation units are not constrained by one definition rule. See `inline` for the details on the inline function definitions. | (since C99) |

See storage duration and linkage for the meaning of the keyword extern with declarations at file scope

See definitions for the distinction between declarations and definitions.

Tentative definitions were invented to standardize various pre-C89 approaches to forward declaring identifiers with internal linkage.

### References

- C23 standard (ISO/IEC 9899:2024):

:   - 6.9 External definitions (p: TBD)

- C17 standard (ISO/IEC 9899:2018):

:   - 6.9 External definitions (p: 113-116)

- C11 standard (ISO/IEC 9899:2011):

:   - 6.9 External definitions (p: 155-159)

- C99 standard (ISO/IEC 9899:1999):

:   - 6.9 External definitions (p: 140-144)

- C89/C90 standard (ISO/IEC 9899:1990):

:   - 3.7 EXTERNAL DEFINITIONS

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=c/language/extern&oldid=180002>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 31 January 2025, at 08:12.