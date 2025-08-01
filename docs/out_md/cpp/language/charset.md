# Character sets and encodings

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

 Basic Concepts

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Comments | | | | |
| ASCII | | | | |
| Punctuation | | | | |
| Names and identifiers | | | | |
| Types | | | | |
| Fundamental types | | | | |
| Objects | | | | |
| Scope | | | | |
| Object lifetime | | | | |
| Storage duration and linkage | | | | |
| Definitions and ODR | | | | |
| Name lookup | | | | |
| Qualified name lookup | | | | |
| Unqualified name lookup | | | | |
| The as-if rule | | | | |
| Undefined behavior | | | | |
| Memory model | | | | |
| Multi-threaded executions and data races (C++11) | | | | |
| ****Character sets and encodings**** | | | | |
| Phases of translation | | | | |
| The `main` function | | | | |
| Modules (C++20) | | | | |

This page describes several character sets specified by the C++ standard.

|  |  |
| --- | --- |
| Translation character set The **translation character set** consists of the following elements:   - each abstract character assigned a code point in the Unicode codespace, and - a distinct character for each Unicode scalar value not assigned to an abstract character.   The translation character set is a superset of the basic character set and the basic literal character set (see below). | (since C++23) |

### Basic character set

The **basic character set** consists of the following 96(until C++26)99(since C++26) characters:

| Code unit | Character | Glyph |
| --- | --- | --- |
| U+0009 | Character tabulation |  |
| U+000B | Line tabulation |  |
| U+000C | Form feed (FF) |  |
| U+0020 | Space |  |
| U+000A | Line feed (LF) | new-line |
| U+0021 | Exclamation mark | `!` |
| U+0022 | Quotation mark | `"` |
| U+0023 | Number sign | `#` |
| U+0025 | Percent sign | `%` |
| U+0026 | Ampersand | `&` |
| U+0027 | Apostrophe | `'` |
| U+0028 | Left parenthesis | `(` |
| U+0029 | Right parenthesis | `)` |
| U+002A | Asterisk | `*` |
| U+002B | Plus sign | `+` |
| U+002C | Comma | `,` |
| U+002D | Hyphen-minus | `-` |
| U+002E | Full stop | `.` |
| U+002F | Solidus | `/` |
| U+0030 .. U+0039 | Digit zero .. nine | `0 1 2 3 4 5 6 7 8 9` |
| U+003A | Colon | `:` |
| U+003B | Semicolon | `;` |
| U+003C | Less-than sign | `<` |
| U+003D | Equals sign | `=` |
| U+003E | Greater-than sign | `>` |
| U+003F | Question mark | `?` |
| U+0041 .. U+005A | Latin capital letter A .. Z | `A B C D E F G H I J K L M` `N O P Q R S T U V W X Y Z` |
| U+005B | Left square bracket | `[` |
| U+005C | Reverse solidus | `\` |
| U+005D | Right square bracket | `]` |
| U+005E | Circumflex accent | `^` |
| U+005F | Low line | `_` |
| U+0061 .. U+007A | Latin small letter a .. z | `a b c d e f g h i j k l m` `n o p q r s t u v w x y z` |
| U+007B | Left curly bracket | `{` |
| U+007C | Vertical line | `|` |
| U+007D | Right curly bracket | `}` |
| U+007E | Tilde | `~` |

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| The following characters are added to the basic character set since C++26:   | Code unit | Character | Glyph | | --- | --- | --- | | U+0024 | Dollar Sign | `$` | | U+0040 | Commercial At | `@` | | U+0060 | Grave Accent | ``` | | (since C++26) |

### Basic literal character set

The **basic literal character set** consists of all characters of the basic character set, plus the following control characters:

| Code unit | Character |
| --- | --- |
| U+0000 | Null |
| U+0007 | Bell |
| U+0008 | Backspace |
| U+000D | Carriage return (CR) |

### Execution character set

The execution character set and the execution wide-character set are supersets of the basic literal
character set. The encodings of the execution character sets and the sets of additional elements
(if any) are locale-specific. Each element of execution wide-character set must be representable as a distinct wchar_t code unit.

### Code unit and literal encoding

A **code unit** is an integer value of character type. Characters in a character literal other than a multicharacter or non-encodable character literal or in a string literal are encoded as a sequence of one or more code units, as determined by the encoding prefix; this is termed the respective **literal encoding**.

A literal encoding or a locale-specific encoding of one of the execution character sets encodes
each element of the basic literal character set as a single code unit with non-negative value, distinct from the code unit for any other such element. A character not in the basic literal character set can be encoded with more than one code unit; the value of such a code unit can be the same as that of a code unit for an element of the basic literal character set. The encodings of the execution character sets can be unrelated to any literal encoding.

The ordinary literal encoding is the encoding applied to an ordinary character or string literal. The wide literal encoding is the encoding applied to a wide character or string literal.

The U+0000 NULL character is encoded as the value 0. No other element of the translation character set is encoded with a code unit of value 0. The code unit value of each decimal digit character after the digit 0 (U+0030) shall be one greater than the value of the previous. The ordinary and wide literal encodings are otherwise implementation-defined.

For a UTF-8, UTF-16, or UTF-32 literal, the UCS scalar value corresponding to each character of the translation character set is encoded as specified in ISO/IEC 10646 for the respective UCS encoding form.

### Notes

The standard names of some character sets are changed in C++23 via P2314R4.

| New name(s) | Old name(s) |
| --- | --- |
| basic character set | basic source character set |
| basic literal character set | basic execution character set basic execution wide-character set |

Mapping from source file (other than a UTF-8 source file)(since C++23) characters to the basic character set(until C++23)translation character set(since C++23) during translation phase 1 is implementation-defined, so an implementation is required to document how the basic source characters are represented in source files.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| CWG 788 | C++98 | the values of the members of the execution character sets were implementation-defined, but were not locale-specific | they are locale-specific |
| CWG 1796 | C++98 | the representation of the null (wide) character in basic execution (wide-)character set had all zero bits | only required value to be zero |

### See also

|  |  |
| --- | --- |
| ASCII chart | |
| C documentation for Character sets and encodings | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/language/charset&oldid=173938>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 28 July 2024, at 19:49.