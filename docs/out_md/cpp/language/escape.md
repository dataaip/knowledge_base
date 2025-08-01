# Escape sequences

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Preprocessor | | | | | | Comments | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Keywords | | | | | | ****Escape sequences**** | | | | | |
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Value categories | | | | | | Order of evaluation | | | | | | Constant expressions | | | | | | Primary expressions | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Lambda expressions (C++11) | | | | | | Requires expressions (C++20) | | | | | | Pack indexing expression (C++26) | | | | | | Potentially-evaluated expressions | | | | | |
| Literals | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Integer literals | | | | | | Floating-point literals | | | | | | Boolean literals | | | | | | Character literals | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****Escape sequences**** | | | | | | String literals | | | | | | Null pointer literal (C++11) | | | | | | User-defined literal (C++11) | | | | | |
| Operators | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Assignment operators | | | | | | Increment and decrement | | | | | | Arithmetic operators | | | | | | Logical operators | | | | | | Comparison operators | | | | | | Member access operators | | | | | | Other operators | | | | | | `new`-expression | | | | | | `delete`-expression | | | | | | `throw`-expression | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `alignof` | | | | | | `sizeof` | | | | | | `sizeof...` (C++11) | | | | | | `typeid` | | | | | | `noexcept` (C++11) | | | | | | Fold expressions (C++17) | | | | | | Alternative representations of operators | | | | | | Precedence and associativity | | | | | | Operator overloading | | | | | | Default comparisons (C++20) | | | | | |
| Conversions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Implicit conversions | | | | | | Explicit conversions | | | | | | Usual arithmetic conversions | | | | | | User-defined conversion | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `const_cast` | | | | | | `static_cast` | | | | | | `dynamic_cast` | | | | | | `reinterpret_cast` | | | | | |

Escape sequences are used to represent certain special characters within string literals and character literals.

The following escape sequences are available:

| Escape  sequence | Description | Representation |
| --- | --- | --- |
| Simple escape sequences | | |
| `\'` | single quote | byte `0x27` in ASCII encoding |
| `\"` | double quote | byte `0x22` in ASCII encoding |
| `\?` | question mark | byte `0x3f` in ASCII encoding |
| `\\` | backslash | byte `0x5c` in ASCII encoding |
| `\a` | audible bell | byte `0x07` in ASCII encoding |
| `\b` | backspace | byte `0x08` in ASCII encoding |
| `\f` | form feed - new page | byte `0x0c` in ASCII encoding |
| `\n` | line feed - new line | byte `0x0a` in ASCII encoding |
| `\r` | carriage return | byte `0x0d` in ASCII encoding |
| `\t` | horizontal tab | byte `0x09` in ASCII encoding |
| `\v` | vertical tab | byte `0x0b` in ASCII encoding |
| Numeric escape sequences | | |
| `\nnn` | arbitrary octal value | code unit `nnn` (1~3 octal digits) |
| `\o{n...}` (since C++23) | code unit `n...` (arbitrary number of octal digits) |
| `\xn...` | arbitrary hexadecimal value | code unit `n...` (arbitrary number of hexadecimal digits) |
| `\x{n...}` (since C++23) |
| Conditional escape sequences[[1]](escape.html#cite_note-1) | | |
| `\c` | Implementation-defined | Implementation-defined |
| Universal character names | | |
| `\unnnn` | arbitrary Unicode value; may result in several code units | code point `U+nnnn` (4 hexadecimal digits) |
| `\u{n...}` (since C++23) | code point `U+n...` (arbitrary number of hexadecimal digits) |
| `\Unnnnnnnn` | code point `U+nnnnnnnn` (8 hexadecimal digits) |
| `\N{NAME}` (since C++23) | arbitrary Unicode character | character named by `NAME` (see below) |

1. ↑ Conditional escape sequences are conditionally-supported. The character `c` in each conditional escape sequence is a member of basic source character set(until C++23)basic character set(since C++23) that is not the character following the `\` in any other escape sequence.

### Range of universal character names

|  |  |
| --- | --- |
| If a universal character name corresponds to a code point that is not 0x24 (`$`), 0x40 (`@`), nor 0x60 (```) and less than 0xA0, the program is ill-formed. In other words, members of basic source character set and control characters (in ranges 0x0-0x1F and 0x7F-0x9F) cannot be expressed in universal character names. | (until C++11) |
| If a universal character name corresponding to a code point of a member of basic source character set or control characters appear outside a character or string literal, the program is ill-formed.  If a universal character name corresponds surrogate code point (the range 0xD800-0xDFFF, inclusive), the program is ill-formed.  If a universal character name used in a UTF-16/32 string literal does not correspond to a code point in ISO/IEC 10646 (the range 0x0-0x10FFFF, inclusive), the program is ill-formed. | (since C++11) (until C++20) |
| If a universal character name corresponding to a code point of a member of basic source character set or control characters appear outside a character or string literal, the program is ill-formed.  If a universal character name does not correspond to a code point in ISO/IEC 10646 (the range 0x0-0x10FFFF, inclusive) or corresponds to a surrogate code point (the range 0xD800-0xDFFF, inclusive), the program is ill-formed. | (since C++20) (until C++23) |
| If a universal character name corresponding to a scalar value of a character in the basic character set or a control character appear outside a character or string literal, the program is ill-formed.  If a universal character name does not correspond to a scalar value of a character in the translation character set, the program is ill-formed. | (since C++23) |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Named universal character escapes  |  |  |  |  |  |  |  |  |  |  | | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | |  | | | | | | | | | | | `\N{` n-char-sequence `}` |  |  | |  | | | | | | | | | |  |  |  |  | | --- | --- | --- | | n-char-sequence | - | one or more n-chars | | n-char | - | a character from the translation character set, except the right curly bracket } or new-line character |   A universal character name of the syntax above is a **named universal character**. It designates the corresponding character in the Unicode Standard (chapter 4.8 Name) if the n-char-sequence is equal to its character name or to one of its character name aliases of type “control”, “correction”, or “alternate”; otherwise, the program is ill-formed.  These aliases are listed in the Unicode Character Database’s NameAliases.txt. None of these names or aliases have leading or trailing spaces.  A valid n-char-sequence must contain only uppercase Latin letters A through Z, digits, space, and hyphen-minus. Other characters never occur in a Unicode character name, and thus their appearance in a n-char-sequence always renders the program ill-formed. | (since C++23) |

### Notes

\0 is the most commonly used octal escape sequence, because it represents the terminating null character in null-terminated strings.

The new-line character \n has special meaning when used in text mode I/O: it is converted to the OS-specific newline representation, usually a byte or byte sequence. Some systems mark their lines with length fields instead.

Octal escape sequences have a limit of three octal digits, but terminate at the first character that is not a valid octal digit if encountered sooner.

Hexadecimal escape sequences have no length limit and terminate at the first character that is not a valid hexadecimal digit. If the value represented by a single hexadecimal escape sequence does not fit the range of values represented by the character type used in this string literal (char, char8_t, (since C++20)char16_t, char32_t, (since C++11)or wchar_t), the result is unspecified.

|  |  |
| --- | --- |
| A universal character name in a narrow string literal or a 16-bit string literal may map to more than one code unit, e.g. \U0001f34c is 4 char code units in UTF-8 (\xF0\x9F\x8D\x8C) and 2 char16_t code units in UTF-16 (\xD83C\xDF4C). | (since C++11) |

The question mark escape sequence \? is used to prevent trigraphs from being interpreted inside string literals: a string such as "??/" is compiled as "\", but if the second question mark is escaped, as in "?\?/", it becomes "??/". As trigraphs have been removed from C++, the question mark escape sequence is no longer necessary. It is preserved for compatibility with C++14 (and former revisions) and C.(since C++17)

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_named_character_escapes` | `202207L` | (C++23) | Named universal character escapes |

### Example

Run this code

```
#include <iostream>
 
int main()
{
    std::cout << "This\nis\na\ntest\n\n";
    std::cout << "She said, \"Sells she seashells on the seashore?\"\n";
}

```

Output:

```
This
is
a
test
 
She said, "Sells she seashells on the seashore?"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 505 | C++98 | the behavior was undefined if the character following a backslash was not one of those specified in the table | made conditionally supported (semantic is implementation-defined) |

### See also

- ASCII chart

|  |  |
| --- | --- |
| C documentation for Escape sequence | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/escape&oldid=169688>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 February 2024, at 00:08.