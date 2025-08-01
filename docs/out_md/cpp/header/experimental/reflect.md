# Experimental library header <experimental/reflect>

From cppreference.com
< cpp‎ | header‎ | experimental
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

Standard library headers

|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | Language support | | | | | | <cfloat> | | | | | | <climits> | | | | | | <compare> (C++20) | | | | | | <coroutine> (C++20) | | | | | | <csetjmp> | | | | | | <csignal> | | | | | | <cstdarg> | | | | | | <cstddef> | | | | | | <cstdint> (C++11) | | | | | | <cstdlib> | | | | | | <exception> | | | | | | <initializer_list> (C++11) | | | | | | <limits> | | | | | | <new> | | | | | | <source_location> (C++20) | | | | | | <stdfloat> (C++23) | | | | | | <typeinfo> | | | | | | <version> (C++20) | | | | | | Concepts | | | | | | <concepts> (C++20) | | | | | | Diagnostics | | | | | | <cassert> | | | | | | <cerrno> | | | | | | <debugging> (C++26) | | | | | | <stacktrace> (C++23) | | | | | | <stdexcept> | | | | | | <system_error> (C++11) | | | | | | Memory management | | | | | | <memory> | | | | | | <memory_resource> (C++17) | | | | | | <scoped_allocator> (C++11) | | | | | | Metaprogramming | | | | | | <type_traits> (C++11) | | | | | | <ratio> (C++11) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | General utilities | | | | | | <any> (C++17) | | | | | | <bitset> | | | | | | <bit> (C++20) | | | | | | <charconv> (C++17) | | | | | | <expected> (C++23) | | | | | | <format> (C++20) | | | | | | <functional> | | | | | | <optional> (C++17) | | | | | | <tuple> (C++11) | | | | | | <typeindex> (C++11) | | | | | | <utility> | | | | | | <variant> (C++17) | | | | | | Containers | | | | | | <array> (C++11) | | | | | | <deque> | | | | | | <flat_map> (C++23) | | | | | | <flat_set> (C++23) | | | | | | <forward_list> (C++11) | | | | | | <inplace_vector> (C++26) | | | | | | <list> | | | | | | <map> | | | | | | <mdspan> (C++23) | | | | | | <queue> | | | | | | <set> | | | | | | <span> (C++20) | | | | | | <stack> | | | | | | <unordered_map> (C++11) | | | | | | <unordered_set> (C++11) | | | | | | <vector> | | | | | | Iterators | | | | | | <iterator> | | | | | | Ranges | | | | | | <generator> (C++23) | | | | | | <ranges> (C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Algorithms | | | | | | <algorithm> | | | | | | <numeric> | | | | | | Strings | | | | | | <cctype> | | | | | | <cstring> | | | | | | <cuchar> (C++11) | | | | | | <cwchar> | | | | | | <cwctype> | | | | | | <string_view> (C++17) | | | | | | <string> | | | | | | Text processing | | | | | | <clocale> | | | | | | <codecvt> (C++11/17/26\*) | | | | | | <locale> | | | | | | <regex> (C++11) | | | | | | <text_encoding> (C++26) | | | | | | Numerics | | | | | | <cfenv> (C++11) | | | | | | <cmath> | | | | | | <complex> | | | | | | <linalg> (C++26) | | | | | | <numbers> (C++20) | | | | | | <random> (C++11) | | | | | | <simd> (C++26) | | | | | | <valarray> | | | | | | Time | | | | | | <chrono> (C++11) | | | | | | <ctime> | | | | | | C compatibility | | | | | | <ccomplex> (C++11/17/20\*) | | | | | | <ciso646> (until C++20) | | | | | | <cstdalign> (C++11/17/20\*) | | | | | | <cstdbool> (C++11/17/20\*) | | | | | | <ctgmath> (C++11/17/20\*) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | Input/output | | | | | | <cinttypes> (C++11) | | | | | | <cstdio> | | | | | | <filesystem> (C++17) | | | | | | <fstream> | | | | | | <iomanip> | | | | | | <iosfwd> | | | | | | <iostream> | | | | | | <ios> | | | | | | <istream> | | | | | | <ostream> | | | | | | <print> (C++23) | | | | | | <spanstream> (C++23) | | | | | | <sstream> | | | | | | <streambuf> | | | | | | <strstream> (C++98/26\*) | | | | | | <syncstream> (C++20) | | | | | | Concurrency support | | | | | | <atomic> (C++11) | | | | | | <barrier> (C++20) | | | | | | <condition_variable> (C++11) | | | | | | <future> (C++11) | | | | | | <hazard_pointer> (C++26) | | | | | | <latch> (C++20) | | | | | | <mutex> (C++11) | | | | | | <rcu> (C++26) | | | | | | <semaphore> (C++20) | | | | | | <shared_mutex> (C++14) | | | | | | <stdatomic.h> (C++23) | | | | | | <stop_token> (C++20) | | | | | | <thread> (C++11) | | | | | | Execution support | | | | | | <execution> (C++17) | | | | | |  | | | | | |  | | | | | |

Experimental library headers

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Execution P2300 | | | | |
| <experimental/execution> | | | | |
| Filesystem TS | | | | |
| <experimental/filesystem> | | | | |
| Parallelism TS (v1, v2) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/algorithm` | | | | | | `experimental/execution_policy` | | | | | | `experimental/exception_list` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/numeric` | | | | | | <experimental/simd> | | | | | | `experimental/task_block` | | | | | |
| Library Fundamentals TS (v1, v2, v3) | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/algorithm` | | | | | | <experimental/any> | | | | | | `experimental/array` | | | | | | `experimental/chrono` | | | | | | `experimental/deque` | | | | | | `experimental/forward_list` | | | | | | <experimental/functional> | | | | | | `experimental/future` | | | | | | `experimental/iterator` | | | | | | `experimental/list` | | | | | | `experimental/map` | | | | | | `experimental/memory` | | | | | | <experimental/memory_resource> | | | | | | `experimental/numeric` | | | | | | <experimental/optional> | | | | | | `experimental/propagate_const` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/random` | | | | | | `experimental/ratio` | | | | | | `experimental/regex` | | | | | | `experimental/scope` | | | | | | `experimental/set` | | | | | | `experimental/source_location` | | | | | | `experimental/string` | | | | | | <experimental/string_view> | | | | | | `experimental/system_error` | | | | | | `experimental/tuple` | | | | | | `experimental/type_traits` | | | | | | `experimental/unordered_map` | | | | | | `experimental/unordered_set` | | | | | | `experimental/utility` | | | | | | `experimental/vector` | | | | | |  | | | | | |
| Concurrency TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/atomic` | | | | | | `experimental/barrier` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/future` | | | | | | `experimental/latch` | | | | | |
| Ranges TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/ranges/algorithm> | | | | | | <experimental/ranges/concepts> | | | | | | <experimental/ranges/functional> | | | | | | <experimental/ranges/iterator> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/ranges/random> | | | | | | <experimental/ranges/tuple> | | | | | | <experimental/ranges/type_traits> | | | | | | <experimental/ranges/utility> | | | | | |
| Coroutines TS | | | | |
| `experimental/coroutine` | | | | |
| Networking TS | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | `experimental/buffer` | | | | | | `experimental/executor` | | | | | | `experimental/internet` | | | | | | `experimental/io_context` | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | <experimental/net> | | | | | | `experimental/netfwd` | | | | | | `experimental/socket` | | | | | | `experimental/timer` | | | | | |
| Reflection TS | | | | |
| ****<experimental/reflect>**** | | | | |

This header is part of the Reflection TS.

|  |  |
| --- | --- |
| Defined in namespace `std::experimental::reflect` | |
| Defined in inline namespace `std::experimental::reflect::v1` | |
| Concepts | |
| Object(reflection TS) | specifies that a type is a meta-object type   (concept) |
| ObjectSequence(reflection TS) | specifies that a meta-object type is a meta-object sequence type   (concept) |
| TemplateParameterScope")(reflection TS) | specifies that a meta-object type reflects a template parameter scope   (concept) |
| Named(reflection TS) | specifies that a meta-object type reflects an entity or alias with an associated (possibly empty) name   (concept) |
| Alias(reflection TS) | specifies that a meta-object type reflects a type alias, namespace alias, or an alias introduced by a using-declaration   (concept) |
| RecordMember(reflection TS) | specifies that a meta-object type reflects a member-declaration of a class   (concept) |
| Enumerator(reflection TS) | specifies that a meta-object type reflects an enumerator   (concept) |
| Variable(reflection TS) | specifies that a meta-object type reflects a variable or data member   (concept) |
| ScopeMember(reflection TS) | specifies that a meta-object type satisfies `RecordMember`, `Enumerator`, or `Variable`, or reflects a namespace other than the global namespace   (concept) |
| Typed(reflection TS) | specifies that a meta-object type reflects an entity with a type   (concept) |
| Namespace(reflection TS) | specifies that a meta-object type reflects a namespace   (concept) |
| GlobalScope(reflection TS) | specifies that a meta-object type reflects the global namespace   (concept) |
| Class(reflection TS) | specifies that a meta-object type reflects a non-union class type   (concept) |
| Enum(reflection TS) | specifies that a meta-object type reflects an enumeration type   (concept) |
| Record(reflection TS) | specifies that a meta-object type reflects a class type   (concept) |
| Scope(reflection TS) | specifies that a meta-object type reflects a namespace, class, enumeration, function, closure type, a template parameter scope   (concept) |
| Type(reflection TS) | specifies that a meta-object type reflects a type   (concept) |
| Constant(reflection TS) | specifies that a meta-object type reflects an enumerator or a constexpr variable   (concept) |
| Base(reflection TS) | specifies that a meta-object type reflects a direct base class obtained from `get_base_classes`   (concept) |
| FunctionParameter(reflection TS) | specifies that a meta-object type reflects a function parameter   (concept) |
| Callable(reflection TS) | specifies that a meta-object type reflects a function (including constructors and destructors)   (concept) |
| Expression(reflection TS) | specifies that a meta-object type reflects an expression   (concept) |
| ParenthesizedExpression(reflection TS) | specifies that a meta-object type reflects a parenthesized expression   (concept) |
| FunctionCallExpression(reflection TS) | specifies that a meta-object type reflects a function-call-expression   (concept) |
| FunctionalTypeConversion(reflection TS) | specifies that a meta-object type reflects a functional-type-conv-expression   (concept) |
| Function(reflection TS) | specifies that a meta-object type reflects a function (excluding constructors and destructors)   (concept) |
| MemberFunction(reflection TS) | specifies that a meta-object type reflects a member function (excluding constructors and destructors)   (concept) |
| SpecialMemberFunction(reflection TS) | specifies that a meta-object type reflects a special member function   (concept) |
| Constructor(reflection TS) | specifies that a meta-object type reflects a constructor   (concept) |
| Destructor(reflection TS) | specifies that a meta-object type reflects a destructor   (concept) |
| Operator(reflection TS) | specifies that a meta-object type reflects an operator function or a conversion function   (concept) |
| ConversionOperator(reflection TS) | specifies that a meta-object type reflects a conversion function   (concept) |
| Lambda(reflection TS) | specifies that a meta-object type reflects the closure type of a non-generic lambda   (concept) |
| LambdaCapture(reflection TS) | specifies that a meta-object type reflects a lambda capture   (concept) |
| Classes | |
| `Object` operations | |
| reflects_same")(reflection TS) | checks if two meta-object types reflect the same entity or alias   (class template) |
| get_source_line(reflection TS) | obtains the presumed line number of the declaration of the reflected entity or alias   (class template) |
| get_source_column(reflection TS) | obtains the implementation-defined column number of the declaration of the reflected entity or alias   (class template) |
| get_source_file_name")(reflection TS) | obtains the presumed file name of the declaration of the reflected entity or alias   (class template) |
| `ObjectSequence` operations | |
| get_size")(reflection TS) | obtains the size of a meta-object sequence   (class template) |
| get_element")(reflection TS) | obtains the meta-object type with specified index in a sequence   (class template) |
| unpack_sequence")(reflection TS) | applies a template to the meta-object sequence   (class template) |
| `Named` operations | |
| is_unnamed")(reflection TS) | checks if the reflected entity or alias is named   (class template) |
| get_name")(reflection TS) | obtains the unqualified name of the reflected entity or alias   (class template) |
| get_display_name")(reflection TS) | obtains the implementation-defined display name of the reflected entity or alias   (class template) |
| `Alias` operations | |
| get_alias")(reflection TS) | obtains the meta-object type reflecting the associated entity of the reflected alias   (class template) |
| `Type` operations | |
| get_type")(reflection TS) | obtains the meta-object type reflecting the type of the reflected entity or alias   (class template) |
| get_reflected_type")(reflection TS) | obtains the type of the reflected entity or alias   (class template) |
| is_enum")(reflection TS) | checks if the meta-object type reflects an enumeration type   (class template) |
| is_union")(reflection TS) | checks if the meta-object type reflects a union type   (class template) |
| uses_class_keyuses_struct_key")(reflection TS) | checks if the meta-object type reflects a non-union class type whose declaration uses class or struct respectively   (class template) |
| `ScopeMember` operations | |
| get_scope")(reflection TS) | obtains the meta-object type reflecting the scope of the reflected entity or alias   (class template) |
| `Base` operations | |
| get_class")(reflection TS) | obtains the meta-object type reflecting the base class in the given base class relationship   (class template) |
| `RecordMember` and `Base` operations | |
| is_public")(reflection TS) | checks if the reflected member or base class is public   (class template) |
| is_protected")(reflection TS) | checks if the reflected member or base class is protected   (class template) |
| is_private")(reflection TS) | checks if the reflected member or base class is private   (class template) |
| `Record` operations | |
| get_public_data_membersget_accessible_data_membersget_data_members")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all data members of the reflected class   (class template) |
| get_public_member_functionsget_accessible_member_functionsget_member_functions")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all member functions of the reflected class   (class template) |
| get_constructors")(reflection TS) | obtains a meta-object sequence type whose elements reflect all constructors of the reflected class   (class template) |
| get_operators")(reflection TS) | obtains a meta-object sequence type whose elements reflect all operator functions and conversion functions declared in the reflected class   (class template) |
| get_destructor")(reflection TS) | obtains the meta-object type reflecting the destructor of the reflected class   (class template) |
| get_public_member_typesget_accessible_member_typesget_member_types")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all nested type or member typedefs of the reflected class   (class template) |
| get_public_base_classesget_accessible_base_classesget_base_classes")(reflection TS) | obtains a meta-object sequence type whose elements reflect public, accessible, or all base classes of the reflected class   (class template) |
| `Enum` operations | |
| is_scoped_enum")(reflection TS) | checks whether the reflected enumeration is scoped   (class template) |
| get_enumerators")(reflection TS) | obtains a meta-object sequence type whose elements reflects the enumerators of the reflected enumeration   (class template) |
| get_underlying_type")(reflection TS) | obtains the meta-object type reflecting the underlying type of the reflected enumeration   (class template) |
| `Variable` operations | |
| get_constant")(reflection TS) | obtains the value of the reflected variable which is a constant expression   (class template) |
| is_thread_local")(reflection TS) | checks if the variable is declared with thread_local   (class template) |
| `FunctionParameter` operations | |
| has_default_argument")(reflection TS) | checks whether the reflected parameter has a default argument   (class template) |
| `Callable` operations | |
| get_parameters")(reflection TS) | obtains a meta-object sequence type whose elements reflects the parameters of the reflected function   (class template) |
| is_vararg")(reflection TS) | checks whether the parameter list of the reflected function contains an ellipsis parameter   (class template) |
| is_noexcept")(reflection TS) | checks whether the reflected function is non-throwing   (class template) |
| is_deleted")(reflection TS) | checks whether the reflected function is deleted   (class template) |
| `Variable` and `Callable` operations | |
| is_constexpr")(reflection TS) | checks if the reflected variable or function is constexpr   (class template) |
| `Namespace` and `Callable` operations | |
| is_inline")(reflection TS) | checks whether the reflected namespace or function is inline   (class template) |
| `ParenthesizedExpression` operations | |
| get_subexpression")(reflection TS) | obtains the meta-object type reflecting the unparenthesized expression of the reflected parethesized expression   (class template) |
| `FunctionCallExpression` operations | |
| get_callable")(reflection TS) | obtains the meta-object type reflecting the function in the reflected function-call-expression   (class template) |
| `FunctionalTypeConversion` operations | |
| get_constructor")(reflection TS) | obtains the meta-object type reflecting the constructor in reflected functional-type-conv-expression   (class template) |
| `Variable` and `Function` operations | |
| get_pointer")(reflection TS) | get the address of the reflected variable or function, or the pointer-to-member value to the reflected non-static member   (class template) |
| `MemberFunction` operations | |
| is_constis_volatilehas_lvalueref_qualifierhas_rvalueref_qualifier")(reflection TS) | checks if the reflected member function is declared with const, volatile, &, or && qualifier respectively   (class template) |
| is_override")(reflection TS) | checks if the reflected member function overrides a member function of base class   (class template) |
| `Record` and `MemberFunction` operations | |
| is_final")(reflection TS) | checks if the reflected class or member function is marked with final   (class template) |
| `Variable` and `MemberFunction` operations | |
| is_static")(reflection TS) | checks if the reflected variable is of static storage duration, or the reflected member function is static   (class template) |
| `SpecialMemberFunction` operations | |
| is_implicitly_declared")(reflection TS) | checks if the reflected special member function is implicitly declared   (class template) |
| is_defaulted")(reflection TS) | checks if the reflected special member function is defaulted in its first declaration   (class template) |
| `Constructor` and `ConversionOperator` operations | |
| is_explicit")(reflection TS) | checks if the reflected constructor or conversion function is declared with explicit   (class template) |
| `MemberFunction` and `Destructor` operations | |
| is_virtual")(reflection TS) | checks if the reflected member function is virtual   (class template) |
| is_pure_virtual")(reflection TS) | checks if the reflected member function is pure virtual   (class template) |
| `Lambda` operations | |
| get_captures")(reflection TS) | obtains a meta-object sequence type whose elements reflect the captures of the reflected closure type   (class template) |
| uses_default_copy_captureuses_default_reference_capture")(reflection TS) | checks if the capture-default of the lambda expression of the reflected closure type is `=` or `&` respectively   (class template) |
| is_call_operator_const")(reflection TS) | checks if the `operator()` of the reflected closure type is declared with const   (class template) |
| `LambdaCapture` operations | |
| is_explictly_captured")(reflection TS) | checks if the reflected lambda capture is explicitly captured   (class template) |
| is_init_capture")(reflection TS) | checks if the reflected lambda capture is an init-capture   (class template) |

### Synopsis

```
namespace std::experimental::reflect {
inline namespace v1 {
 
// 21.12.3 Concepts for meta-object types
template <class T>
concept Object = /* see description */;
template <class T>
concept ObjectSequence = /* see description */; // refines Object
template <class T>
concept TemplateParameterScope = /* see description */; // refines Scope
template <class T>
concept Named = /* see description */;          // refines Object
template <class T>
concept Alias = /* see description */;          // refines Named and ScopeMember
template <class T>
concept RecordMember = /* see description */;   // refines ScopeMember
template <class T>
concept Enumerator = /* see description */;     // refines Constant
template <class T>
concept Variable = /* see description */;       // refines Typed and ScopeMember
template <class T>
concept ScopeMember = /* see description */;    // refines Named
template <class T>
concept Typed = /* see description */;          // refines Object
template <class T>
concept Namespace = /* see description */;      // refines Named and Scope
template <class T>
concept GlobalScope = /* see description */;    // refines Namespace
template <class T>
concept Class = /* see description */;          // refines Record
template <class T>
concept Enum = /* see description */;           // refines Type, Scope, and ScopeMember
template <class T>
concept Record = /* see description */;         // refines Type, Scope, and ScopeMember
template <class T>
concept Scope = /* see description */;          // refines Object
template <class T>
concept Type = /* see description */;           // refines Named
template <class T>
concept Constant = /* see description */;       // refines Typed and ScopeMember
template <class T>
concept Base = /* see description */;           // refines Object
template <class T>
concept FunctionParameter = /* see description */; // refines Typed and ScopeMember
template <class T>
concept Callable = /* see description */;       // refines Scope and ScopeMember
template <class T>
concept Expression = /* see description */;     // refines Object
template <class T>
concept ParenthesizedExpression = /* see description */; // refines Expression
template <class T>
concept FunctionCallExpression = /* see description */; // refines Expression
template <class T>
concept FunctionalTypeConversion = /* see description */; // refines Expression
template <class T>
concept Function = /* see description */;       // refines Typed and Callable
template <class T>
concept MemberFunction = /* see description */; // refines RecordMember and Function
template <class T>
concept SpecialMemberFunction = /* see description */; // refines RecordMember
template <class T>
concept Constructor = /* see description */;    // refines Callable and RecordMember
template <class T>
concept Destructor = /* see description */;     // refines Callable and SpecialMemberFunction
template <class T>
concept Operator = /* see description */;       // refines Function
template <class T>
concept ConversionOperator = /* see description */; // refines MemberFunction and Operator
template <class T>
concept Lambda = /* see description */;         // refines Type and Scope
template <class T>
concept LambdaCapture = /* see description */;  // refines Variable
 
// 21.12.4 Meta-object operations
// Multi-concept operations
template <Object T> struct is_public;
template <Object T> struct is_protected;
template <Object T> struct is_private;
template <Object T> struct is_constexpr;
template <Object T> struct is_static;
template <Object T> struct is_final;
template <Object T> struct is_explicit;
template <Object T> struct is_inline;
template <Object T> struct is_virtual;
template <Object T> struct is_pure_virtual;
template <Object T> struct get_pointer;
 
template <class T>
requires RecordMember<T> || Base<T>
  constexpr auto is_public_v = is_public<T>::value;
template <class T>
requires RecordMember<T> || Base<T>
  constexpr auto is_protected_v = is_protected<T>::value;
template <class T>
requires RecordMember<T> || Base<T>
  constexpr auto is_private_v = is_private<T>::value;
template <class T>
requires Variable<T> || Callable<T>
  constexpr auto is_constexpr_v = is_constexpr<T>::value;
template <class T>
requires Variable<T> || MemberFunction<T>
  constexpr auto is_static_v = is_static<T>::value;
template <class T>
requires Class<T> || MemberFunction<T>
  constexpr auto is_final_v = is_final<T>::value;
template <class T>
requires Constructor<T> || ConversionOperator<T>
  constexpr auto is_explicit_v = is_explicit<T>::value;
template <class T>
requires Namespace<T> || Callable<T>
  constexpr auto is_inline_v = is_inline<T>::value;
template <class T>
requires Base<T> || MemberFunction<T> || Destructor<T>
  constexpr auto is_virtual_v = is_virtual<T>::value;
template <class T>
requires MemberFunction<T> || Destructor<T>
  constexpr auto is_pure_virtual_v = is_pure_virtual<T>::value;
template <class T>
requires Variable<T> || Function<T>
  constexpr auto get_pointer_v = get_pointer<T>::value;
 
// 21.12.4.1 Object operations
template <Object T1, Object T2> struct reflects_same;
template <Object T> struct get_source_line;
template <Object T> struct get_source_column;
template <Object T> struct get_source_file_name;
 
template <Object T1, Object T2>
  constexpr auto reflects_same_v = reflects_same<T1, T2>::value;
template <class T>
  constexpr auto get_source_line_v = get_source_line<T>::value;
template <class T>
  constexpr auto get_source_column_v = get_source_column<T>::value;
template <class T>
  constexpr auto get_source_file_name_v = get_source_file_name<T>::value;
 
// 21.12.4.2 ObjectSequence operations
template <ObjectSequence T> struct get_size;
template <size_t I, ObjectSequence T> struct get_element;
template <template <class...> class Tpl, ObjectSequence T>
  struct unpack_sequence;
 
template <ObjectSequence T>
  constexpr auto get_size_v = get_size<T>::value;
template <size_t I, ObjectSequence T>
  using get_element_t = typename get_element<I, T>::type;
template <template <class...> class Tpl, ObjectSequence T>
  using unpack_sequence_t = typename unpack_sequence<Tpl, T>::type;
 
// 21.12.4.3 Named operations
template <Named T> struct is_unnamed;
template <Named T> struct get_name;
template <Named T> struct get_display_name;
 
template <Named T>
  constexpr auto is_unnamed_v = is_unnamed<T>::value;
template <Named T>
  constexpr auto get_name_v = get_name<T>::value;
template <Named T>
  constexpr auto get_display_name_v = get_display_name<T>::value;
 
// 21.12.4.4 Alias operations
template <Alias T> struct get_aliased;
 
template <Alias T>
  using get_aliased_t = typename get_aliased<T>::type;
 
// 21.12.4.5 Type operations
template <Typed T> struct get_type;
template <Type T> struct get_reflected_type;
template <Type T> struct is_enum;
template <Class T> struct uses_class_key;
template <Class T> struct uses_struct_key;
template <Type T> struct is_union;
 
template <Typed T>
  using get_type_t = typename get_type<T>::type;
template <Type T>
  using get_reflected_type_t = typename get_reflected_type<T>::type;
template <Type T>
  constexpr auto is_enum_v = is_enum<T>::value;
template <Class T>
  constexpr auto uses_class_key_v = uses_class_key<T>::value;
template <Class T>
  constexpr auto uses_struct_key_v = uses_struct_key<T>::value;
template <Type T>
  constexpr auto is_union_v = is_union<T>::value;
 
// 21.12.4.6 Member operations
template <ScopeMember T> struct get_scope;
template <RecordMember T> struct is_public<T>;
template <RecordMember T> struct is_protected<T>;
template <RecordMember T> struct is_private<T>;
template <ScopeMember T>
  using get_scope_t = typename get_scope<T>::type;
 
// 21.12.4.7 Record operations
template <Record T> struct get_public_data_members;
template <Record T> struct get_accessible_data_members;
template <Record T> struct get_data_members;
template <Record T> struct get_public_member_functions;
template <Record T> struct get_accessible_member_functions;
template <Record T> struct get_member_functions;
template <Record T> struct get_public_member_types;
template <Record T> struct get_accessible_member_types;
template <Record T> struct get_member_types;
template <Record T> struct get_constructors;
template <Record T> struct get_destructor;
template <Record T> struct get_operators;
template <Class T> struct get_public_base_classes;
template <Class T> struct get_accessible_base_classes;
template <Class T> struct get_base_classes;
template <Class T> struct is_final<T>;
 
template <Record T>
  using get_public_data_members_t = typename get_public_data_members<T>::type;
template <Record T>
  using get_accessible_data_members_t = typename get_accessible_data_members<T>::type;
template <Record T>
  using get_data_members_t = typename get_data_members<T>::type;
template <Record T>
  using get_public_member_functions_t = typename get_public_member_functions<T>::type;
template <Record T>
  using get_accessible_member_functions_t = typename get_accessible_member_functions<T>::type;
template <Record T>
  using get_member_functions_t = typename get_member_functions<T>::type;
template <Record T>
  using get_public_member_types_t = typename get_public_member_types<T>::type;
template <Record T>
  using get_accessible_member_types_t = typename get_accessible_member_types<T>::type;
template <Record T>
  using get_member_types_t = typename get_member_types<T>::type;
template <Record T>
  using get_constructors_t = typename get_constructors<T>::type;
template <Record T>
  using get_destructor_t = typename get_destructor<T>::type;
template <Record T>
  using get_operators_t = typename get_operators<T>::type;
template <Class T>
  using get_public_base_classes_t = typename get_public_base_classes<T>::type;
template <Class T>
  using get_accessible_base_classes_t = typename get_accessible_base_classes<T>::type;
template <Class T>
  using get_base_classes_t = typename get_base_classes<T>::type;
 
// 21.12.4.8 Enum operations
template <Enum T> struct is_scoped_enum;
template <Enum T> struct get_enumerators;
template <Enum T> struct get_underlying_type;
 
template <Enum T>
  constexpr auto is_scoped_enum_v = is_scoped_enum<T>::value;
template <Enum T>
  using get_enumerators_t = typename get_enumerators<T>::type;
template <Enum T>
  using get_underlying_type_t = typename get_underlying_type<T>::type;
 
// 21.12.4.9 Value operations
template <Constant T> struct get_constant;
template <Variable T> struct is_constexpr<T>;
template <Variable T> struct is_static<T>;
template <Variable T> struct is_thread_local;
template <Variable T> struct get_pointer<T>;
 
template <Constant T>
  constexpr auto get_constant_v = get_constant<T>::value;
template <Variable T>
  constexpr auto is_thread_local_v = is_thread_local<T>::value;
 
// 21.12.4.10 Base operations
template <Base T> struct get_class;
template <Base T> struct is_virtual<T>;
template <Base T> struct is_public<T>;
template <Base T> struct is_protected<T>;
template <Base T> struct is_private<T>;
 
template <Base T>
  using get_class_t = typename get_class<T>::type;
 
// 21.12.4.11 Namespace operations
template <Namespace T> struct is_inline<T>;
 
// 21.12.4.12 FunctionParameter operations
template <FunctionParameter T> struct has_default_argument;
 
template <FunctionParameter T>
  constexpr auto has_default_argument_v = has_default_argument<T>::value;
 
// 21.12.4.13 Callable operations
template <Callable T> struct get_parameters;
template <Callable T> struct is_vararg;
template <Callable T> struct is_constexpr<T>;
template <Callable T> struct is_noexcept;
template <Callable T> struct is_inline<T>;
template <Callable T> struct is_deleted;
 
template <Callable T>
  using get_parameters_t = typename get_parameters<T>::type;
template <Callable T>
  constexpr auto is_vararg_v = is_vararg<T>::value;
template <Callable T>
  constexpr auto is_deleted_v = is_deleted<T>::value;
 
// 21.12.4.14 ParenthesizedExpression operations
template <ParenthesizedExpression T> struct get_subexpression;
 
template <ParenthesizedExpression T>
  using get_subexpression_t = typename get_subexpression<T>::type;
 
// 21.12.4.15 FunctionCallExpression operations
template <FunctionCallExpression T> struct get_callable;
 
template <FunctionCallExpression T>
  using get_callable_t = typename get_callable<T>::type;
 
// 21.12.4.16 FunctionalTypeConversion operations
template <FunctionalTypeConversion T> struct get_constructor;
 
template <FunctionalTypeConversion T>
  using get_constructor_t = typename get_constructor<T>::type;
 
// 21.12.4.17 Function operations
template <Function T> struct get_pointer<T>;
 
// 21.12.4.18 MemberFunction operations
template <MemberFunction T> struct is_static<T>;
template <MemberFunction T> struct is_const;
template <MemberFunction T> struct is_volatile;
template <MemberFunction T> struct has_lvalueref_qualifier;
template <MemberFunction T> struct has_rvalueref_qualifier;
template <MemberFunction T> struct is_virtual<T>;
template <MemberFunction T> struct is_pure_virtual<T>;
template <MemberFunction T> struct is_override;
template <MemberFunction T> struct is_final<T>;
 
template <MemberFunction T>
  constexpr auto is_const_v = is_const<T>::value;
template <MemberFunction T>
  constexpr auto is_volatile_v = is_volatile<T>::value;
template <MemberFunction T>
  constexpr auto has_lvalueref_qualifier_v = has_lvalueref_qualifier<T>::value;
template <MemberFunction T>
  constexpr auto has_rvalueref_qualifier_v = has_rvalueref_qualifier<T>::value;
template <MemberFunction T>
  constexpr auto is_override_v = is_override<T>::value;
 
// 21.12.4.19 SpecialMemberFunction operations
template <SpecialMemberFunction T> struct is_implicitly_declared;
template <SpecialMemberFunction T> struct is_defaulted;
 
template <SpecialMemberFunction T>
  constexpr auto is_implicitly_declared_v = is_implicitly_declared<T>::value;
template <SpecialMemberFunction T>
  constexpr auto is_defaulted_v = is_defaulted<T>::value;
 
// 21.12.4.20 Constructor operations
template <Constructor T> struct is_explicit<T>;
 
// 21.12.4.21 Destructor operations
template <Destructor T> struct is_virtual<T>;
template <Destructor T> struct is_pure_virtual<T>;
 
// 21.12.4.22 ConversionOperator operations
template <ConversionOperator T> struct is_explicit<T>;
 
// 21.12.4.23 Lambda operations
template <Lambda T> struct get_captures;
template <Lambda T> struct uses_default_copy_capture;
template <Lambda T> struct uses_default_reference_capture;
template <Lambda T> struct is_call_operator_const;
 
template <Lambda T>
  using get_captures_t = typename get_captures<T>::type;
template <Lambda T>
  constexpr auto uses_default_copy_capture_v = uses_default_copy_capture<T>::value;
template <Lambda T>
  constexpr auto uses_default_reference_capture_v = uses_default_reference_capture<T>::value;
template <Lambda T>
  constexpr auto is_call_operator_const_v = is_call_operator_const<T>::value;
 
// 21.12.4.24 LambdaCapture operations
template <LambdaCapture T> struct is_explicitly_captured;
template <LambdaCapture T> struct is_init_capture;
 
template <LambdaCapture T>
  constexpr auto is_explicitly_captured_v = is_explicitly_captured<T>::value;
template <LambdaCapture T>
  constexpr auto is_init_capture_v = is_init_capture<T>::value;
 
} // inline namespace v1
} // namespace std::experimental::reflect

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/reflect&oldid=148848>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 7 March 2023, at 02:50.