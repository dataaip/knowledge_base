# Symbol Index (removed)

From cppreference.com
< cpp‎ | symbol index
C++Symbol Index

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| std | | | | |
| std::chrono(C++11) | | | | |
| std::execution(C++17) | | | | |
| std::filesystem(C++17) | | | | |
| std::linalg(C++26) | | | | |
| std::literals(C++14) | | | | |
| std::numbers(C++20) | | | | |
| std::placeholders(C++11) | | | | |
| std::pmr(C++17) | | | | |
| std::ranges(C++20) | | | | |
| std::regex_constants(C++11) | | | | |
| std::rel_ops(deprecated in C++20) | | | | |
| std::this_thread(C++11) | | | | |
| Macros | | | | |
| ****Removed symbols (Zombie names)**** | | | | |
| Exposition-only symbols | | | | |

This page tries to list all the symbols that were available from the standard library in the namespace std or in the scope of a scoped enumeration or a class, but removed in following standards. The symbols are written as follows:

- Function names with `()`.
- Templates with `<>`.

Member names that are still available in other types are not listed here.

## Removed in C++11   C++14   C++17   C++20   C++23   C++26

### Removed in C++14

gets() (deprecated in C++11)(removed in C++14)

### Removed in C++17

auto_ptr<> (deprecated in C++11)(removed in C++17)  
binary_function<> (deprecated in C++11)(removed in C++17)  
bind1st<>() (deprecated in C++11)(removed in C++17)  
bind2nd<>() (deprecated in C++11)(removed in C++17)  
binder1st<> (deprecated in C++11)(removed in C++17)  
binder2nd<> (deprecated in C++11)(removed in C++17)  
const_mem_fun_ref_t<> (deprecated in C++11)(removed in C++17)  
const_mem_fun_t<> (deprecated in C++11)(removed in C++17)  
const_mem_fun1_ref_t<> (deprecated in C++11)(removed in C++17)  
const_mem_fun1_t<> (deprecated in C++11)(removed in C++17)  
get_unexpected() (deprecated in C++11)(removed in C++17)  
mem_fun<>() (deprecated in C++11)(removed in C++17)  
mem_fun_ref<>() (deprecated in C++11)(removed in C++17)  
mem_fun_ref_t (deprecated in C++11)(removed in C++17)  
mem_fun_t<> (deprecated in C++11)(removed in C++17)  
mem_fun1_ref_t<> (deprecated in C++11)(removed in C++17)  
mem_fun1_t<> (deprecated in C++11)(removed in C++17)  
pointer_to_binary_function<> (deprecated in C++11)(removed in C++17)  
pointer_to_unary_function<> (deprecated in C++11)(removed in C++17)  
ptr_fun<>() (deprecated in C++11)(removed in C++17)  
random_shuffle<>() (deprecated in C++14)(removed in C++17)  
set_unexpected() (deprecated in C++11)(removed in C++17)  
unary_function<> (deprecated in C++11)(removed in C++17)  
unexpected_handler (deprecated in C++11)(removed in C++17)

#### Member names

io_state (deprecated in C++98)(removed in C++17)  
op (deprecated in C++11)(removed in C++17)  
open_mode (deprecated in C++98)(removed in C++17)  
seek_dir (deprecated in C++98)(removed in C++17)  
stossc() (deprecated in C++98)(removed in C++17)

### Removed in C++20

binary_negate<> (deprecated in C++17)(removed in C++20)  
get_temporary_buffer<>() (deprecated in C++17)(removed in C++20)  
is_literal_type<> (since C++11)(deprecated in C++17)(removed in C++20)  
is_literal_type_v<> (since C++17)(deprecated in C++17)(removed in C++20)  
not1<>() (deprecated in C++17)(removed in C++20)  
not2<>() (deprecated in C++17)(removed in C++20)  
raw_storage_iterator<> (deprecated in C++17)(removed in C++20)  
result_of<> (since C++11)(deprecated in C++17)(removed in C++20)  
result_of_t<> (since C++14)(deprecated in C++17)(removed in C++20)  
return_temporary_buffer<>() (deprecated in C++17)(removed in C++20)  
unary_negate<> (deprecated in C++17)(removed in C++20)  
uncaught_exception() (deprecated in C++17)(removed in C++20)

#### Member names

argument_type (deprecated in C++17)(removed in C++20)  
first_argument_type (deprecated in C++17)(removed in C++20)  
second_argument_type (deprecated in C++17)(removed in C++20)

### Removed in C++23

declare_no_pointers() (since C++11)(removed in C++23)  
declare_reachable() (since C++11)(removed in C++23)  
get_pointer_safety() (since C++11)(removed in C++23)  
pointer_safety (since C++11)(removed in C++23)  
undeclare_no_pointers() (since C++11)(removed in C++23)  
undeclare_reachable<>() (since C++11)(removed in C++23)

#### Member names

relaxed (since C++11)(removed in C++23)  
preferred (since C++11)(removed in C++23)  
strict (since C++11)(removed in C++23)

### Removed in C++26

codecvt_mode (since C++11)(deprecated in C++17)(removed in C++26)  
codecvt_utf16<> (since C++11)(deprecated in C++17)(removed in C++26)  
codecvt_utf8<> (since C++11)(deprecated in C++17)(removed in C++26)  
codecvt_utf8_utf16<> (since C++11)(deprecated in C++17)(removed in C++26)  
istrstream<> (deprecated in C++98)(removed in C++26)  
ostrstream<> (deprecated in C++98)(removed in C++26)  
strstream<> (deprecated in C++98)(removed in C++26)  
strstreambuf<> (deprecated in C++98)(removed in C++26)  
wbuffer_convert<> (deprecated in C++17)(removed in C++26)  
wstring_convert<> (deprecated in C++17)(removed in C++26)

#### Member names

consume_header (since C++11)(deprecated in C++17)(removed in C++26)  
freeze() (deprecated in C++98)(removed in C++26)  
generate_header (since C++11)(deprecated in C++17)(removed in C++26)  
little_endian (since C++11)(deprecated in C++17)(removed in C++26)  
pcount() (deprecated in C++98)(removed in C++26)

### Notes

The removed names are considered reserved and may be reused for other facilities in future Standard library revisions.

Names reserved as members for previous standardization may not be used as a name for object-like macros in portable code.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3885 | C++17 | “`op`” was not a reserved member name | it is |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/zombie_names&oldid=178415>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 December 2024, at 03:35.