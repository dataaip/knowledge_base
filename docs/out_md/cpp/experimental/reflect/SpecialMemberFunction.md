# std::experimental::reflect::SpecialMemberFunction

From cppreference.com
< cpp‎ | experimental‎ | reflect
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
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Extensions for reflection

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Concepts | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Object | | | | | | ObjectSequence | | | | | | TemplateParameterScope") | | | | | | Named | | | | | | Alias | | | | | | RecordMember | | | | | | Enumerator | | | | | | Variable | | | | | | ScopeMember | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Typed | | | | | | Namespace | | | | | | GlobalScope | | | | | | Class | | | | | | Enum | | | | | | Record | | | | | | Scope | | | | | | Type | | | | | | Constant | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Base | | | | | | FunctionParameter | | | | | | Callable | | | | | | Expression | | | | | | ParenthesizedExpression | | | | | | FunctionCallExpression | | | | | | FunctionalTypeConversion | | | | | | Function | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | MemberFunction | | | | | | ****SpecialMemberFunction**** | | | | | | Constructor | | | | | | Destructor | | | | | | Operator | | | | | | ConversionOperator | | | | | | Lambda | | | | | | LambdaCapture | | | | | |  | | | | | |
| Meta-object operations | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `Object` | | | | | | reflects_same") | | | | | | get_source_line | | | | | | get_source_column | | | | | | get_source_file_name") | | | | | | `ObjectSequence` | | | | | | get_size") | | | | | | get_element") | | | | | | unpack_sequence") | | | | | | `Named` | | | | | | is_unnamed") | | | | | | get_name") | | | | | | get_display_name") | | | | | | `Alias` | | | | | | get_alias") | | | | | | `Type` | | | | | | get_type") | | | | | | get_reflected_type") | | | | | | is_enum") | | | | | | is_union") | | | | | | uses_class_keyuses_struct_key") | | | | | | `ScopeMember` | | | | | | get_scope") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `RecordMember` and `Base` | | | | | | is_public") | | | | | | is_protected") | | | | | | is_private") | | | | | | `Record` | | | | | | get_public_data_membersget_accessible_data_membersget_data_members") | | | | | | get_public_member_functionsget_accessible_member_functionsget_member_functions") | | | | | | get_constructors") | | | | | | get_operators") | | | | | | get_destructor") | | | | | | get_public_member_typesget_accessible_member_typesget_member_types") | | | | | | get_public_base_classesget_accessible_base_classesget_base_classes") | | | | | | `Enum` | | | | | | is_scoped_enum") | | | | | | get_enumerators") | | | | | | get_underlying_type") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `Variable` | | | | | | get_constant") | | | | | | is_thread_local") | | | | | | `FunctionParameter` | | | | | | has_default_argument") | | | | | | `Callable` | | | | | | get_parameters") | | | | | | is_vararg") | | | | | | is_noexcept") | | | | | | is_deleted") | | | | | | `Variable` and `Callable` | | | | | | is_constexpr") | | | | | | `Namespace` and `Callable` | | | | | | is_inline") | | | | | | `ParenthesizedExpression` | | | | | | get_subexpression") | | | | | | `FunctionCallExpression` | | | | | | get_callable") | | | | | | `FunctionalConversion` | | | | | | get_constructor") | | | | | | `Variable` and `Function` | | | | | | get_pointer") | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `MemberFunction` | | | | | | is_constis_volatilehas_lvalueref_qualifierhas_rvalueref_qualifier") | | | | | | is_override") | | | | | | is_implicitly_declared") | | | | | | is_defaulted") | | | | | | is_explicit") | | | | | | is_virtual") | | | | | | is_pure_virtual") | | | | | | `Record` and `MemberFunction` | | | | | | is_final") | | | | | | `Variable` and `MemberFunction` | | | | | | is_static") | | | | | | `Lambda` | | | | | | get_captures") | | | | | | uses_default_copy_captureuses_default_reference_capture") | | | | | | is_call_operator_const") | | | | | | `LambdaCapture` | | | | | | is_explicitly_captured") | | | | | | is_init_capture") | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/reflect>` |  |  |
| template< class T >  concept SpecialMemberFunction = RecordMember<T> && /\* see below \*/; |  | (reflection TS) |
|  |  |  |

The `SpecialMemberFunction` concept is satisfied if and only if `T` reflects a special member function.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: examples |

### See also

|  |  |
| --- | --- |
|  | This section is incomplete Reason: templatization |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/reflect/SpecialMemberFunction&oldid=129485>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 June 2021, at 14:44.