# C++ compiler support

From cppreference.com
< cpp
C++

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| ****Compiler support**** | | | | |
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

****Compiler support****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| C++11 | | | | |
| C++14 | | | | |
| C++17 | | | | |
| C++20 | | | | |
| C++23 | | | | |
| C++26 | | | | |

|  |  |
| --- | --- |
|  | This page is maintained as best-effort and may lag behind most recent compiler releases. If you see something is out-of-date, please help us by updating it! |

The following tables present compiler support for new C++ features. These include accepted revisions to the standard, as well as various technical specifications:

- C++26/2c core language features
- C++26/2c library features

- C++23 core language features
- C++23 library features

- C++20 core language features
- C++20 library features
- Older standards
- Vendor compatibility checklists

#### Notes

\* - hover over a cell marked with the star \* to see additional pop-up notes.  
DR**nn** - the number **nn** after "DR" denotes target C++ revision the Defect Report is applied to, e.g., DR20 → C++20.

## C++26 features

Note that this list may change, as the draft C++26/2c standard evolves.

### C++26 core language features

| C++26 feature | Paper(s) | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)\* | Nvidia nvcc | Cray |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| DR98: Removing undefined behavior from lexing | P2621R3 | Yes | 3.3 |  | 16.0.0\* |  |  |  |  |  |
| DR98: Making non-encodable string literals ill-formed | P1854R4 | 14 | 14 |  | 16.0.0\* |  |  |  |  |  |
| Unevaluated strings | P2361R6 | 14 | 17 (partial)\* 18 |  | 16.0.0\* |  |  |  |  |  |
| Adding `@`, `$`, and ``` to the basic character set | P2558R2 | 15 | Yes |  | 16.0.0\* |  |  |  |  |  |
| constexpr cast from void\*  (FTM)\* | P2738R1 | 14 | 17 |  |  |  |  |  |  |  |
| DR20: On the ignorability of standard attributes | P2552R3 | 15 | Yes |  |  |  |  |  |  |  |
| DR11: Static storage for braced initializers | P2752R3 | 14 |  |  |  |  |  |  |  |  |
| User-generated static_assert messages  (FTM)\* | P2741R3 | 14 | 17 |  |  |  |  |  |  |  |
| Placeholder variables with no name  (FTM)\* | P2169R4 | 14 | 18 |  |  |  |  |  |  |  |
| Pack indexing  (FTM)\* | P2662R3 | 15 | 19 |  |  |  |  |  |  |  |
| Removing deprecated arithmetic conversion on enumerations | P2864R2 | 14 | 18 |  |  |  |  |  |  |  |
| DR11/20: Template parameter initialization | P2308R1 |  | 18 |  |  |  |  |  |  |  |
| Disallow binding a returned reference to a temporary | P2748R5 | 14 | 19 |  |  |  |  |  |  |  |
| Attributes for structured bindings  (FTM)\* | P0609R3 | 15 | 19 |  |  |  |  |  |  |  |
| Erroneous behavior for uninitialized reads, `[[indeterminate]]` attribute | P2795R5 |  |  |  |  |  |  |  |  |  |
| = delete("reason");  (FTM)\* | P2573R2 | 15 | 19 |  |  |  |  |  |  |  |
| Variadic friends  (FTM)\* | P2893R3 | 15 | 20 |  |  |  |  |  |  |  |
| DR98: Clarifying rules for brace elision in aggregate initialization | P3106R1 | Yes | 17 |  |  |  |  |  |  |  |
| DR20: Disallow module declarations to be macros | P3034R1 | 15 |  |  |  |  |  |  |  |  |
| DR11: Trivial infinite loops are not undefined behavior | P2809R3 | 14 | 19 |  |  |  |  |  |  |  |
| constexpr placement new  (FTM)\*  (FTM)\* | P2747R2 | 15 | 20 |  |  |  |  |  |  |  |
| Structured binding declaration as a condition  (FTM)\* | P0963R3 | 15 | 6 (partial)\* |  |  |  |  |  |  |  |
| Ordering of constraints involving fold expressions  (FTM)\* | P2963R3 |  | 19 |  |  |  |  |  |  |  |
| Deleting a pointer to an incomplete type should be ill-formed | P3144R2 | 15 | 19 |  |  | 6.7 |  |  |  |  |
| Structured bindings can introduce a pack  (FTM)\* | P1061R10 |  |  |  |  |  |  |  |  |  |
| constexpr structured bindings and references to constexpr variables | P2686R5 |  |  |  |  | 6.7 |  |  |  |  |
| constexpr exceptions  (FTM)\* | P3068R6 |  |  |  |  |  |  |  |  |  |
| Oxford variadic comma | P3176R1 | 15 | 20 |  |  |  |  |  |  |  |
| Removing deprecated array comparisons | P2865R6 | 15 |  |  |  |  |  |  |  |  |
| C++26 feature | Paper(s) | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)\* | Nvidia nvcc | Cray |

### C++26 library features

| C++26 feature | Paper(s) | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang\* |  |
| --- | --- | --- | --- | --- | --- | --- |
| Testing for success or failure of <charconv> functions  (FTM)\* | P2497R0 | 14 | 18 |  | 16.0.0\* |
| std::text_encoding: text encodings identification  (FTM)\* | P1885R12 P2862R1 | 14 |  |  |  |
| Arithmetic overloads of std::to_string and std::to_wstring use std::format  (FTM)\* | P2587R3 | 14 |  |  |  |
| Type checking format args  (FTM)\* | P2757R3 | 15 |  |  |  |
| Formatting pointers  (FTM)\* | P2510R3 | 14\* | 17\* | 19.40\*\* |  |
| Hashing support for std::chrono value classes  (FTM)\* | P2592R3 |  |  |  |  |
| <rcu>: Read-Copy Update  (FTM)\* | P2545R4 |  |  |  |  |
| <hazard_pointer>: Hazard Pointers  (FTM)\* | P2530R3 |  |  |  |  |
| ADL-proof std::projected | P2538R1 | 14\* | 18\* | 19.38\*\* | 16.0.0\* |
| constexpr stable sorting  (FTM)\* | P2562R1 |  |  |  |  |
| Member std::basic_format_arg::visit()  (FTM)\* | P2637R3 | 15 | 19 |  |  |
| Member std::variant::visit()  (FTM)\* | P2637R3 | 15 | 18 |  |  |
| std::is_within_lifetime  (FTM)\* | P2641R4 |  |  |  |  |
| Extending associative containers with the remaining heterogeneous overloads  (FTM)\* | P2363R5 |  |  |  |  |
| Enabling the use of std::weak_ptr as keys in unordered associative containers  (FTM)\* | P1901R2 |  |  |  |  |
| Native handles in file streams  (FTM)\* | P1759R6 | 14 | 18 |  | 16.0.0\* |
| Interfacing string streams with std::string_view  (FTM)\* | P2495R3 |  | 19 |  |  |
| Interfacing std::bitset with std::string_view  (FTM)\* | P2697R1 |  | 18 |  | 16.0.0\* |
| More constexpr for <cmath> and <complex>  (FTM)\*  (FTM)\* | P1383R2 | 4.6 (partial)\* |  |  |  |
| Adding the new 2022 SI prefixes on ratios: std::quecto, std::ronto, std::ronna, and std::quetta  (FTM)\* | P2734R0 | 14 | 17 |  |  |
| std::function_ref: type-erased callable reference  (FTM)\* | P0792R14 |  |  |  |  |
| std::copyable_function  (FTM)\* | P2548R6 |  |  |  |  |
| std::bind_front, std::bind_back, and std::not_fn to NTTP callables  (FTM)\*  (FTM)\*  (FTM)\* | P2714R1 |  |  |  |  |
| std::submdspan()  (FTM)\* | P2630R4 P3355R1 |  |  |  |  |
| Freestanding Language: Optional ::operator new | P2013R5 |  |  | N/A |  |
| Freestanding std::char_traits, std::errc and facilities in: <charconv>, <cstdlib>, <cstring>, <cwchar>  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\* | P2338R4 |  |  | N/A |  |
| More freestanding facilities  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\* | P2198R7 |  |  | N/A |  |
| Saturation Arithmetic  (FTM)\* | P0543R3 | 14 | 18 |  | 16.0.0\* |
| <debugging>: Debugging support  (FTM)\* | P2546R5 P2810R4 |  |  |  |  |
| <linalg>: A free function linear algebra interface based on the BLAS  (FTM)\* | P1673R13 P3050R2 P3222R0 |  |  |  |  |
| Making assert() macro user friendly | P2264R7 |  |  |  |  |
| Runtime format strings  (FTM)\* | P2918R2 | 14 | 18 |  | 16.0.0\* |
| std::span over an initializer list  (FTM)\* | P2447R6 |  | 18 |  | 16.0.0\* |
| std::span::at()  (FTM)\* | P2821R5 | 14 | 18 |  | 16.0.0\* |
| Added tuple protocol to std::complex  (FTM)\* | P2819R2 |  | 19 |  |  |
| A new specification for std::generate_canonical | P0952R2 |  |  | 19.42\* |  |
| Removing deprecated typedef std::allocator::is_always_equal | P2868R3 | 15 | 18 |  | 16.0.0\* |
| Removing function overload of std::basic_string::reserve() that takes no argument | P2870R3 |  | 18 |  | 16.0.0\* |
| Removing deprecated Unicode conversion facets (<codecvt>) | P2871R3 |  | 18 |  | 16.0.0\* |
| Freestanding: removing std::strtok  (FTM)\* | P2937R0 | 14 |  | 19.40\* |  |
| Freestanding Library: Partial Classes  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\* | P2407R5 | 14 |  | 19.42\* |  |
| Freestanding Library: std::inout, std::expected, std::span  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\* | P2833R2 | 14 |  | 19.42\* |  |
| DR23: std::basic_const_iterator should follow its underlying type’s convertibility  (FTM)\* | P2836R1 P2950R0 | 14 |  | 19.40\* |  |
| DR20: std::make_format_args now accepts only lvalue references instead of forwarding references | P2905R2 | 14 | 18 | 19.40\* | 16.0.0\* |
| DR20: Fix formatting of code units as integers  (FTM)\* | P2909R4 | 13.3 | 18 | 19.40\* | 16.0.0\* |
| views::concat  (FTM)\* | P2542R8 | 15 |  |  |  |
| Concatenation of strings and string views  (FTM)\* | P2591R5 | 15 | 19 |  |  |
| Enabling list-initialization for algorithms  (FTM)\* | P2248R8 P3217R0 | 15 |  |  |  |
| std::ranges::generate_random  (FTM)\* | P1068R11 |  |  |  |  |
| Comparisons for std::reference_wrapper, and constraints for comparisons of std::pair, std::tuple, std::optional, and std::variant  (FTM)\*  (FTM)\* | P2944R3 | 14 | 19 (partial)\* |  |  |
| Padded mdspan layouts  (FTM)\* | P2642R6 |  |  |  |  |
| New CTAD for std::span and std::mdspan with integral constants | P3029R1 |  | 19 |  |  |
| Atomic maximum and minimum  (FTM)\* | P0493R5 |  |  |  |  |
| std::formatter<std::filesystem::path>  (FTM)\* | P2845R8 |  |  |  |  |
| Printing Blank Lines with std::println()  (FTM)\* | P3142R0 | 14\* | 19\* | 19.41\*\* |  |
| Undeprecate std::polymorphic_allocator::destroy | P2875R4 |  | 15 | 19.41\* |  |
| Removing deprecated strstreams | P2867R2 |  | 19 |  |  |
| Removing deprecated std::shared_ptr Atomic Access APIs | P2869R4 |  |  |  |  |
| Removing std::wstring_convert | P2872R3 |  | 19 |  |  |
| DR23: Permit an efficient implementation of std::print  (FTM)\* | P3107R5 P3235R3 |  |  | 19.43\* |  |
| Execution library  (FTM)\* | P2300R10 P3396R0 |  |  |  |  |
| std::inplace_vector: dynamically-resizable vector with fixed capacity  (FTM)\* | P0843R14 |  |  |  |  |
| std::philox_engine: counter-based random number engine  (FTM)\* | P2075R6 |  |  |  |  |
| std::optional range support  (FTM)\* | P3168R2 |  |  |  |  |
| std::is_virtual_base_of: type trait for detecting virtual base classes  (FTM)\* | P2985R0 | 15 | 20 |  |  |
| std::dims for std::mdspan  (FTM)\* | P2389R2 |  | 19 |  |  |
| DR11: Formal specification of the type of std::ignore | P2968R2 | 15 | 19 | 19.42\* |  |
| DR20: Removing the common reference requirement from the indirectly invocable concepts  (FTM)\* | P2997R1 | 15 | 19 | 19.42\* |  |
| Deprecating std::is_trivial and std::is_trivial_v | P3247R2 | 15 |  |  |  |
| DR20: Algorithm function objects | P3136R1 | Yes | Yes | 19.39\* | Yes |
| std::ranges::cache_latest_view")  (FTM)\* | P3138R5 |  |  |  |  |
| Constraining std::expected equality operators  (FTM)\* | P3379R0 | 15 |  |  |  |
| std::aligned_accessor: an std::mdspan accessor expressing pointer over-alignment  (FTM)\* | P2897R7 |  |  |  |  |
| std::is_sufficiently_aligned: checks a pointer’s alignment precondition  (FTM)\* | P2897R7 |  |  |  |  |
| std::atomic_ref::address()  (FTM)\* | P2835R7 |  |  |  |  |
| DR11/20: cv-qualified types in std::atomic and std::atomic_ref | P3323R1 |  |  |  |  |
| constexpr std::atomic and std::atomic_ref  (FTM)\* | P3309R3 |  |  |  |  |
| constexpr for specialized memory algorithms  (FTM)\* | P3508R0 P3369R0 |  |  |  |  |
| Added new library headers from C23 | P3370R1 |  |  |  |  |
| <simd>: data-parallel types  (FTM)\* | P1928R15 |  |  |  |  |
| A utility for creating execution environments | P3325R5 |  |  |  |  |
| constexpr for exception types, e.g. std::bad_alloc, std::bad_cast etc.  (FTM)\* | P3068R6 |  |  |  |  |
| C++26 feature | Paper(s) | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang\* |

## C++23 features

### C++23 core language features

| C++23 feature | Paper(s) | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)\* | Nvidia nvcc | Cray |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Literal suffix for (signed) size_t  (FTM)\* | P0330R8 | 11 | 13 | 19.43\* | 13.1.6\* | 6.5 | 2022.2 | 23.9 |  |  |
| Make `()` more optional for lambdas | P1102R2 | 11 | 13 |  | 13.1.6\* | 6.3 | 2022.2 | 22.5 |  |  |
| if consteval  (FTM)\* | P1938R3 | 12 | 14 |  | 14.0.0\* | 6.3 | 2022.2 | 24.1 |  |  |
| Removing Garbage Collection Support | P2186R2 | 12 | N/A | 19.30\* |  | N/A |  | N/A |  |  |
| Narrowing contextual conversions in static_assert and constexpr if | P1401R5 | 9 | 13 (partial)\* 14 |  | 14.0.0\* |  | 2022.2 | 20.7 |  |  |
| Trimming whitespaces before line splicing | P2223R2 | Yes | Yes |  | Yes | 6.7 | 2022.2 | Yes |  |  |
| Make declaration order layout mandated | P1847R4 | Yes | Yes | Yes | Yes |  | 2022.2 | Yes |  |  |
| Removing mixed wide string literal concatenation | P2201R1 | Yes | Yes | Yes | Yes | Yes | Yes | Yes |  |  |
| Explicit object member functions (deducing this)  (FTM)\* | P0847R7 | 14 | 18 19\* | 19.32\* (partial)\* |  | 6.3 |  | 22.5 |  |  |
| `auto(x)` and `auto{x}`  (FTM)\* | P0849R8 | 12 | 15 |  | 14.0.3\* | 6.4 | 2022.2 | 23.3 |  |  |
| `#elifdef` and `#elifndef` | P2334R1 | 12 | 13 | 19.40\* | 13.1.6\* | 6.5 | 2022.2 | 23.9 |  |  |
| Non-literal variables (and labels and gotos) in constexpr functions  (FTM)\* | P2242R3 | 12 | 15 |  | 14.0.3\* | 6.3 | 2022.2 | 22.5 |  |  |
| Consistent character literal encoding | P2316R2 | Yes | Yes | 19.30\* | Yes | Yes | 2022.2 | Yes |  |  |
| Character sets and encodings | P2314R4 | 10 | Yes |  | Yes | Yes | 2022.2 | Yes |  |  |
| Extend init-statement (of `for` loop) to allow alias-declaration | P2360R0 | 12 | 14 |  | 14.0.0\* |  | 2022.2 |  |  |  |
| Multidimensional subscript operator  (FTM)\* | P2128R6 | 12 | 15 |  | 14.0.3\* |  | 2022.2 |  |  |  |
| Attributes on lambdas | P2173R1 | 9 | 13 |  | 13.1.6\* | 6.6 | 2022.2 | 22.5 |  |  |
| `#warning` | P2437R1 | Yes\* | Yes |  | 15.0.0\* | 6.5 | 2023.2 | Yes |  |  |
| Remove non-encodable wide character literals and multicharacter wide character literals | P2362R3 | 13 | 14 |  | 15.0.0\* | 6.7 | 2023.2 |  |  |  |
| Labels at the end of compound statements | P2324R2 | 13 | 16 |  | 16.0.0\* | 6.5 | 2023.2 | 23.9 |  |  |
| Delimited escape sequences | P2290R3 | 13 | 15 |  | 15.0.0\* | 6.7 | 2023.2 |  |  |  |
| Named universal character escapes  (FTM)\* | P2071R2 | 13 | 15 |  | 15.0.0\* | 6.7 | 2023.2 |  |  |  |
| Relaxing some constexpr restrictions  (FTM)\* | P2448R2 | 13 | 17 (partial) 19 |  |  |  | 2024.0 (partial) |  |  |  |
| Simpler implicit move  (FTM)\* | P2266R3 | 13 | 13 |  |  | 6.7 | 2022.2 |  |  |  |
| static operator()  (FTM)\* | P1169R4 | 13 | 16 |  | 16.0.0\* | 6.7 | 2023.2 |  |  |  |
| Requirements for optional extended floating-point types | P1467R9 | 13 |  | N/A |  | 6.4 |  |  |  |  |
| Class template argument deduction from inherited constructors | P2582R1 | 14 |  |  |  |  |  |  |  |  |
| Attribute `[[assume]]` | P1774R8 | 13 | 19 |  |  |  |  |  |  |  |
| Support for UTF-8 as a portable source file encoding | P2295R6 | 13\* | 15\* | 19.0 (Update 2)\*\* | 15.0.0\* |  | 2023.2 |  |  |  |
| static operator[]  (FTM)\* | P2589R1 | 13 | 16 |  | 16.0.0\* | 6.7 | 2023.2 |  |  |  |
| Permitting static constexpr variables in constexpr functions  (FTM)\* | P2647R1 | 13 | 16 |  | 16.0.0\* |  | 2023.2 |  |  |  |
| Extending the lifetime of temporaries in range-based for loop initializer  (FTM)\* | P2644R1 P2718R0 CWG2659 | 15 | 19 |  |  |  |  |  |  |  |
| DR11: Change scope of lambda trailing-return-type | P2036R3 P2579R0 |  | 17 |  |  |  | 2023.2 |  |  |  |
| DR20: Meaningful exports | P2615R1 | 15 | 17 (partial) |  |  |  |  |  |  |  |
| DR20: consteval needs to propagate up  (FTM)\* | P2564R3 | 14 | 17 |  | 16.0.0\* | 6.7 | 2024.0 |  |  |  |
| DR98: C++ Identifier Syntax using Unicode Standard Annex 31 | P1949R7 | 12 | 14 |  | 14.0.0\* | 6.4 | 2022.2 |  |  |  |
| DR11: Allow duplicate attributes | P2156R1 | 11 | 13 |  | 13.1.6\* | 6.5 |  | 23.9 |  |  |
| DR20: Adjusting the value of feature-test macro `__cpp_concepts` | P2493R0 | 12 |  | 19.32\* |  | 6.4 |  | 23.3 |  |  |
| DR98: Relax requirements on wchar_t to match existing practices | P2460R2 | Yes | Yes |  | 15.0.0\* | N/A | 2023.2 |  |  |  |
| DR11: Using unknown pointers and references in constant expressions | P2280R4 | 14 | 20\* |  |  |  |  |  |  |  |
| DR20: The Equality Operator You Are Looking For | P2468R2 | 13 | 16 |  | 16.0.0\* |  | 2023.2 |  |  |  |
| DR20: char8_t Compatibility and Portability Fix  (FTM)\* | P2513R4 | 13 | 16 | 19.34\* | 16.0.0\* |  | 2023.2 |  |  |  |
| DR98/11: Clarify reporting of diagnostic directives and allow static_assert of non-value-dependent expressions in a template context | CWG2518 | 13 | 17 | 16.0\* (partial)\* 19.40\* |  |  |  |  |  |  |
| C++23 feature | Paper(s) | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)\* | Nvidia nvcc | Cray |

### C++23 library features

| C++23 feature | Paper(s) | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang\* |  |
| --- | --- | --- | --- | --- | --- | --- |
| Stacktrace library  (FTM)\* | P0881R7 P2301R1 | 12 (partial)\* 14\* |  | 19.34\* |  |
| <stdatomic.h>  (FTM)\* | P0943R6 | 12 | 15 | 19.31\* | 14.0.3\* |
| std::is_scoped_enum  (FTM)\* | P1048R1 | 11 | 12 | 19.30\* | 13.0.0\* |
| std::basic_string::contains(), std::basic_string_view::contains()  (FTM)\* | P1679R3 | 11 | 12 | 19.30\* | 13.0.0\* |
| std::to_underlying  (FTM)\* | P1682R3 | 11 | 13 | 19.30\* | 13.1.6\* |
| Relaxing requirements for time_point<>::clock | P2212R2 | N/A | N/A | N/A | N/A |
| Providing size feedback in the Allocator interface  (FTM)\* | P0401R6 |  | 15 | 19.30\* | 14.0.3\* |
| <spanstream>: string-stream with std::span-based buffer  (FTM)\* | P0448R4 | 12 |  | 19.31\* |  |
| std::out_ptr(), std::inout_ptr()  (FTM)\* | P1132R8 | 14 | 19 | 19.30\* |  |
| constexpr type_info::operator==()  (FTM)\* | P1328R1 | 12 | 17 | 19.33\*\* 19.34\* | 15.0.0\* |
| Iterator pair constructors for std::stack and std::queue  (FTM)\* | P1425R4 | 12 | 14 | 19.31\* | 14.0.3\* |
| Non-deduction context for allocators in container deduction guides | P1518R2 | 12\* | 13\* | 19.31\*\* | 13.1.6\*\* |
| ranges::starts_with() and ranges::ends_with()  (FTM)\* | P1659R3 |  | 17 (partial)\* 18 | 19.31\* | 16.0.0\* |
| Prohibiting std::basic_string and std::basic_string_view construction from nullptr | P2166R1 | 12 | 13 | 19.30\* | 13.1.6\* |
| std::invoke_r()  (FTM)\* | P2136R3 | 12 | 17 | 19.31\* | 15.0.0\* |
| Range constructor for std::basic_string_view | P1989R2 | 11 | 14 | 19.30\* | 14.0.3\* |
| Default template arguments for std::pair's forwarding constructor | P1951R1 | 14 | 14 | 19.30\* | 14.0.3\* |
| Remove Garbage Collection and Reachability-Based Leak Detection (library support) | P2186R2 | 12 | 14 | 19.30\* | 14.0.3\* |
| zip: views::zip, views::zip_transform, views::adjacent, and views::adjacent_transform  (FTM)\* | P2321R2 | 13 | 15 (partial)\* | 19.33\*(partial)\*\*\* 19.37\* | 14.0.3\* |
| Heterogeneous erasure overloads for associative containers  (FTM)\* | P2077R3 |  |  | 19.32\* |  |
| std::byteswap()  (FTM)\* | P1272R4 | 12 | 14 | 19.31\* | 14.0.3\* |
| Printing volatile T\* | P1147R1 | 11.3 | 14 | 19.31\* | 14.0.3\* |
| basic_string::resize_and_overwrite()  (FTM)\* | P1072R10 | 12 | 14 | 19.31\* | 14.0.3\* |
| Monadic operations for std::optional  (FTM)\* | P0798R8 | 12 | 14 | 19.32\* | 14.0.3\* |
| std::move_only_function  (FTM)\* | P0288R9 | 12 |  | 19.32\* |  |
| Add a conditional noexcept specification to std::exchange | P2401R0 | 12 | 14 | 19.25\* | 14.0.3\* |
| Require std::span & std::basic_string_view to be TriviallyCopyable | P2251R1 | Yes | Yes | Yes | Yes |
| Clarifying the status of the “C headers” | P2340R1 | Yes | Yes | Yes | Yes |
| <expected>  (FTM)\* | P0323R12 P2549R1 | 12 | 16 | 19.33\* | 15.0.0\* |
| constexpr for <cmath> and <cstdlib>  (FTM)\* | P0533R9 | 4.6 (partial)\* |  |  |  |
| std::unreachable()  (FTM)\* | P0627R6 | 12 | 15 | 19.32\* | 14.0.3\* |
| Deprecating std::aligned_storage and std::aligned_union | P1413R3 | 13 | 16 | 19.33\* |  |
| std::reference_constructs_from_temporary & std::reference_converts_from_temporary  (FTM)\* | P2255R2 | 13 (partial)\* 14 | 19 |  |  |
| constexpr std::unique_ptr  (FTM)\* | P2273R3 | 12 | 16 | 19.33\* | 15.0.0\* |
| Constructing containers and strings from ranges with ranges::to(), tagged constructors, insert and assign member functions  (FTM)\*  (FTM)\* | P1206R7 | 14 (partial)\* | 17 | 19.34\* | 15.0.0\* |
| Pipe support for user-defined range adaptors (ranges::range_adaptor_closure, std::bind_back)  (FTM)\*  (FTM)\* | P2387R3 | 13 (partial)\* 14 | 19 | 19.34\* |  |
| ranges::iota(), ranges::shift_left(), and ranges::shift_right()  (FTM)\*  (FTM)\* | P2440R1 | 13 (partial)\* |  | 19.34\* |  |
| views::join_with  (FTM)\* | P2441R2 | 13 |  | 19.34\* |  |
| views::chunk and views::slide  (FTM)\*  (FTM)\* | P2442R1 | 13 |  | 19.33\* |  |
| views::chunk_by  (FTM)\* | P2443R1 | 13 | 18 | 19.33\* | 16.0.0\* |
| std::mdspan: a non-owning multidimensional array reference  (FTM)\* | P0009R18 P2599R2 P2604R0 P2613R1 P2763R1 |  | 17 (partial)\* 18 | 19.39\* | 15.0.0\* |
| <flat_map>  (FTM)\* | P0429R9 | 15 | 20 |  |  |
| <flat_set>  (FTM)\* | P1222R4 | 15 |  |  |  |
| ranges::find_last(), ranges::find_last_if(), and ranges::find_last_if_not()  (FTM)\* | P1223R5 | 13 | 19 | 19.36\* |  |
| Freestanding Library: Easy <utility>, <ranges>, and <iterator> | P1642R11 | 13\* |  | N/A |  |
| views::stride  (FTM)\* | P1899R3 | 13 |  | 19.34\* |  |
| Compatibility between std::tuple and tuple-like objects  (FTM)\* | P2165R4 | 14 | 2.9 (partial)\* | 19.36\* (partial)\* 19.37\* | partial\* |
| Rectifying constant iterators, sentinels, and ranges. views::as_const  (FTM)\* | P2278R4 | 13 |  | 19.35\* (partial)\* 19.36\* |  |
| Formatting Ranges  (FTM)\* | P2286R8 |  | 16 | 19.37\*(partial)\* 19.39\*(partial)\* 19.41\*(partial)\* 19.42\* | 15.0.0\* |
| Improve default container formatting  (FTM)\* | P2585R1 |  | 16 (partial)\* 17 | 19.42\* | 15.0.0\* |
| Formatted output library <print>  (FTM)\* | P2093R14 P2539R4 | 14 | 17 (partial)\* 18 | 19.37\* | 15.0.0\*\* 16.0.0\* |
| Formatting std::thread::id and std::stacktrace  (FTM)\* | P2693R1 | 14 | 17 (partial)\* | 19.38\* | 15.0.0\* |
| constexpr for integral overloads of std::to_chars() and std::from_chars()  (FTM)\* | P2291R3 | 13 | 16 | 19.34\* | 15.0.0\* |
| ranges::contains() and ranges::contains_subrange()  (FTM)\* | P2302R4 | 13 | 19 | 19.34\* | 16.0.0\*\* |
| Ranges fold algorithms  (FTM)\* | P2322R6 | 13 |  | 19.35\* |  |
| views::cartesian_product  (FTM)\* | P2374R4 P2540R1 | 13 |  | 19.37\* |  |
| Adding move-only types support for comparison concepts (`equality_comparable`, `totally_ordered`, `three_way_comparable`)  (FTM)\* | P2404R3 |  |  | 19.36\* |  |
| Ranges iterators as inputs to non-ranges algorithms  (FTM)\* | P2408R5 |  |  | 19.34\* |  |
| constexpr std::bitset  (FTM)\* | P2417R2 | 13 | 16 | 19.34\* | 15.0.0\* |
| basic_string::substr() `&&` | P2438R2 |  | 16 | 19.34\* | 15.0.0\* |
| views::as_rvalue  (FTM)\* | P2446R2 | 13 | 16 | 19.34\* | 15.0.0\* |
| Standard Library Modules  (FTM)\* | P2465R3 | 15\* | 17 (partial)\* | 19.35\* (partial)\* 19.36\* |  |
| std::forward_like()  (FTM)\* | P2445R1 | 14 | 16 | 19.34\* | 15.0.0\* |
| Support exclusive mode for std::fstream  (FTM)\* | P2467R1 | 12 | 18 | 19.36\* | 16.0.0\* |
| views::repeat  (FTM)\* | P2474R2 | 13 | 17 | 19.36\* | 15.0.0\* |
| Relaxing range adaptors to allow for move-only types  (FTM)\* | P2494R2 | 14 | 17 | 19.34\* | 15.0.0\* |
| std::basic_string_view range constructor should be explicit | P2499R0 | 12.2 | 16 | 19.34\* | 15.0.0\* |
| std::generator: synchronous coroutine generator for ranges  (FTM)\* | P2502R2 P2787R0 | 14 |  | 19.43\* |  |
| Add a conditional noexcept specification to std::apply | P2517R1 | 10 | 18 | 19.34\* | 16.0.0\* |
| Explicit lifetime management (std::start_lifetime_as)  (FTM)\* | P2590R2 P2679R2 |  |  |  |  |
| Clarify handling of encodings in localized formatting of chrono types  (FTM)\* | P2419R2 | 15\* |  | 19.34\*\* |  |
| std::move_iterator should not always be `input_iterator`  (FTM)\* | P2520R0 | 12.3\* | 17\* | 19.34\*\* | 15.0.0\* |
| Deduction guides update for explicit object parameter call operators | LWG3617 | 14 |  | 19.34\* |  |
| Deduction guides update for static operator() | P1169R4 | 13 | 16 | 19.39\* | 15.0.0\* |
| Standard names and library support for extended floating-point types | P1467R9 | 13 |  | 19.37\*\* |  |
| Monadic operations for std::expected  (FTM)\* | P2505R5 | 13 | 17 | 19.36\* | 15.0.0\* |
| views::enumerate  (FTM)\* | P2164R9 | 13 |  | 19.37\* |  |
| std::is_implicit_lifetime  (FTM)\* | P2674R1 |  | 20 |  |  |
| std::common_reference_t of std::reference_wrapper should be a reference type  (FTM)\*  (FTM)\* | P2655R3 |  |  | 19.37\* |  |
| Disallowing user specialization of std::allocator_traits | P2652R2 |  | 19 | 19.37\* |  |
| Deprecating std::numeric_limits::has_denorm | P2614R2 |  | 18 | 19.37\* | 16.0.0\* |
| Making Multi-Param Constructors Of views explicit | P2711R1 |  | 17 (partial)\* | 19.36\*\* | 15.0.0\* |
| DR20: Relaxing Ranges Just A Smidge  (FTM)\* | P2609R3 | 15 | 20 | 19.37\* |  |
| DR20: Stashing Stashing Iterators For Proper Flattening | P2770R0 | 14 | 18 | 19.37\* |  |
| DR17: std::visit() for classes derived from std::variant  (FTM)\* | P2162R2 | 11.3 | 13 | 19.20\*\* 19.30\* | 13.1.6\* |
| DR20: Conditionally borrowed ranges | P2017R1 | 11 | 16 | 19.30\* |  |
| DR20: Repairing input range adaptors and std::counted_iterator | P2259R1 | 12 |  | 19.30\*(partial)\* 19.31\* |  |
| DR20: views::join should join all views of ranges | P2328R1 | 11.2 | 15 | 19.30\* | 14.0.3\* |
| DR20: `view` does not require `default_initializable`  (FTM)\* | P2325R3 | 11.3 | 16 | 19.30\* | 15.0.0\* |
| DR20: Range adaptor objects bind arguments by value | P2281R1 | 11 | 14 | 19.29 (16.10)\* (partial)\* 19.31\* | 14.0.3\* |
| DR20: constexpr for std::optional and std::variant  (FTM)\*  (FTM)\* | P2231R1 | 11.3 (partial)\* 12 | 13 (partial)\* 19 | 19.31\* | 13.1.6\* (partial) |
| DR20: views::lazy_split and redesigned views::split | P2210R2 | 12 | 16 | 19.31\* | 15.0.0\* |
| DR20: Fix ranges::istream_view | P2432R1 | 12 | 16 | 19.31\* | 15.0.0\* |
| DR20: `view` with ownership  (FTM)\* | P2415R2 | 12 | 14 | 19.31\* | 14.0.3\* |
| DR20: Fixing locale handling in chrono formatters  (FTM)\* | P2372R3 P2418R2 | 13 |  | 19.31\* |  |
| DR20: Cleaning up integer-class types | P2393R1 |  |  | 19.32\* |  |
| DR20: Compile-time format string checks; Reducing binary code size of std::format() family  (FTM)\* | P2216R3 | 13 | 14 (partial)\* 15 | 19.32\* | 14.0.3\* |
| DR20: Add support for non-const-formattable types to std::format | P2418R2 | 13 | 15 | 19.32\* | 14.0.3\* |
| DR20: std::basic_format_string | P2508R1 | 13 | 15 | 19.35\* | 14.0.3\* |
| DR20: Poison Pills are Too Toxic  (FTM)\* | P2602R2 | 14 | 19 | 19.36\* |  |
| DR20: std::format fill character allowances | P2572R1 | 14 | 17 | 19.37\* |  |
| DR20: Improving std::format's width estimation | P2675R1 | 14 | 17 | 19.38\* |  |
| DR20: std::barrier's phase completion guarantees  (FTM)\* | P2588R3 |  |  | 19.28 (16.8)\*\* 19.36\* |  |
| C++23 feature | Paper(s) | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang\* |

## C++20 features

### C++20 core language features

| C++20 feature | Paper(s) | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)\* | Nvidia nvcc | Cray |  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Allow Lambda capture [=, this] | P0409R2 | 8 | 6 | 19.22\* | 10.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| `__VA_OPT__` | P0306R4 P1042R1 | 8 (partial)\* 10 (partial)\* 12 | 9 | 19.25\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Designated initializers  (FTM)\* | P0329R4 | 4.7 (partial)\* 8 | 3.0 (partial)\* 10 | 19.21\* | 12.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| template-parameter-list for generic lambdas  (FTM)\* | P0428R2 | 8 | 9 | 19.22\* | 11.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Default member initializers for bit-fields | P0683R1 | 8 | 6 | 19.25\* | 10.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Initializer list constructors in class template argument deduction | P0702R1 | 8 | 6 | 19.14\* | Yes | 5.0 | 2021.1 | 20.7 | 12.0 | 11.0 |
| const&-qualified pointers to members | P0704R1 | 8 | 6 | 19.0 (2015)\* | 10.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Concepts  (FTM)\* | P0734R0 | 5\* 10 | 10 | 19.23\* (partial)\* 19.30\* | 12.0.0\* (partial) | 6.1 | 2023.1\* | 20.11 | 12.0 | 11.0 |
| Lambdas in unevaluated contexts | P0315R4 | 9 | 13 (partial)\* 14 (partial)\* 17 | 19.28 (16.8)\* | 13.1.6\* (partial) | 6.2 | 2023.1 (partial) 2024.0 | 20.7 | 12.0 |  |
| Three-way comparison operator  (FTM)\* | P0515R3 | 10 | 8 (partial) 10 | 19.20\* | 12.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| DR11: Simplifying implicit lambda capture | P0588R1 | 8 |  | 19.24\* |  | 5.1 | 2021.1 | 20.7 | 12.0 |  |
| init-statements for range-based for | P0614R1 | 9 | 8 | 19.25\* | 11.0.0\* | 6.0 | 2021.7 | 20.11 | 12.0 | 11.0 |
| Default constructible and assignable stateless lambdas | P0624R2 | 9 | 8 | 19.22\* | 10.0.1\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Type mismatch of defaulted special member functions | P0641R2 | 9 (partial)\* | 8 | 19.0 (2015)\* (partial)\* | 10.0.1\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Access checking on specializations | P0692R1 | Yes | 8 (partial) 14 | 19.26\* | 14.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 |  |
| ADL and function templates that are not visible | P0846R0 | 9 | 9 | 19.21\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| DR11: Specify when constexpr function definitions are needed for constant evaluation  (FTM)\* | P0859R0 | 5.2 (partial)\* 9 | 8 | 19.27\* (partial)\* 19.31\*\* | 11.0.0\* | (partial) |  |  | 12.0 | 11.0 |
| Attributes `[[likely]]` and `[[unlikely]]` | P0479R5 | 9 | 12 | 19.26\* | 13.0.0\* | 5.1 | 2021.7 | 20.7 | 12.0 |  |
| Make typename more optional | P0634R3 | 9 | 16 | 19.29 (16.10)\* | 16.0.0\* | 5.1 | 2023.1 | 20.7 | 12.0 |  |
| Pack-expansions in lambda init-captures  (FTM)\* | P0780R2 | 9 | 9 | 19.22\* | 11.0.3\* | 6.1 | 2021.7 | 20.11 | 12.0 | 11.0 |
| Attribute `[[no_unique_address]]` | P0840R2 | 9 | 9 | 19.28 (16.9)\*\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Conditionally trivial special member functions  (FTM)\* | P0848R3 | 10 | 16 | 19.28 (16.8)\* |  | 6.1 | 2021.7 | 20.11 | 12.0 |  |
| DR17: Relaxing the structured bindings customization point finding rules | P0961R1 | 8 | 8 | 19.21\* | 10.0.1\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| DR11: Relaxing the range-for loop customization point finding rules | P0962R1 | 8 | 8 | 19.25\* | 11.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| DR17: Allow structured bindings to accessible members | P0969R0 | 8 | 8 | 19.21\* | 10.0.1\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Destroying `operator delete`  (FTM)\* | P0722R3 | 9 | 6 | 19.27\* | 10.0.0\* | 6.1 | 2023.1 | 20.11 | 12.0 | 11.0 |
| Class types in Non-type template parameters | P0732R2 | 9 | 12 (partial) | 19.26\*(partial)\* 19.28 (16.9)\* | 13.0.0\* (partial) | 6.2 | 2023.1 (partial) | 21.3 | 12.0 |  |
| Deprecate implicit capture of this via `[=]` | P0806R2 | 9 | 7 | 19.22\* | 10.0.1\* | 5.1 |  | 20.7 | 12.0 | 11.0 |
| explicit(bool)  (FTM)\* | P0892R2 | 9 | 9 | 19.24\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Integrating feature-test macros | P0941R2 | 5 | 3.4 | 19.15\* (partial) 19.20\* | Yes | 5.0 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Prohibit aggregates with user-declared constructors | P1008R1 | 9 | 8 | 19.20\* | 10.0.1\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| constexpr virtual function  (FTM)\* | P1064R0 | 9 | 9 | 19.28 (16.9)\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Consistency improvements for comparisons | P1120R0 | 10 | 8 (partial) 10 | 19.22\* | 12.0.0\* | 5.1 | 2023.1 | 20.7 | 12.0 | 11.0 |
| `char8_t`  (FTM)\* | P0482R6 | 9 | 7\* | 19.22\* | 10.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| std::is_constant_evaluated()  (FTM)\* | P0595R2 | 9 | 9 | 19.25\* | 11.0.3\* | 5.1 | 19.1 | 21.1 | 12.0 | 11.0 |
| constexpr try-catch blocks | P1002R1 | 9 | 8 | 19.25\* | 10.0.1\* | 5.1 | 2023.1 | 20.7 | 12.0 | 11.0 |
| Immediate functions (consteval)  (FTM)\* | P1073R3 | 10 (partial)\* 11 | 11 (partial) 14 (partial)\* 17 | 19.28 (16.8)\* (partial)\* 19.29 (16.10)\* | 11.0.3\* (partial) 15.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 |  |
| Nested inline namespaces | P1094R2 | 9 | 8 | 19.27\* | 10.0.1\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Yet another approach for constrained declarations | P1141R2 | 10 | 10 | 19.26\* (partial) 19.28 (16.9)\* | 12.0.5\* | 6.1 | 2023.1 | 20.11 | 12.0 | 11.0 |
| Signed integers are two's complement | P1236R1 | 9 | 9 | Yes | 11.0.3\* | N/A | 2023.1\* | yes\* | 12.0 | 11.0 |
| dynamic_cast and polymorphic typeid in constant expressions | P1327R1 | 10 | 9 | 19.29 (16.10)\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Changing the active member of a union inside constexpr  (FTM)\* | P1330R0 | 9 | 9 | 19.10\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Coroutines  (FTM)\*  (FTM)\* | P0912R5 LWG3393 | 10 | 8 (partial) 17 (partial)\* | 19.0 (2015)\* (partial) 19.10\*\* 19.28 (16.8)\* | 10.0.1\* (partial) | 5.1 | 2021.1 | 23.3\* | 12.0 (host code only) |  |
| Parenthesized initialization of aggregates  (FTM)\* | P0960R3 | 10 | 16 | 19.28 (16.8)\* | 16.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 |  |
| DR11: Array size deduction in `new`-expressions | P1009R2 | 11 | 9 | 19.27\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Modules  (FTM)\* | P1103R3 | 11 (partial) | 8 (partial) | 19.0 (2015)\* (partial) 19.10\*\* 19.28 (16.8)\* | 10.0.1\* (partial) |  | 2023.1 (partial) |  |  |  |
| Stronger Unicode requirements | P1041R4 P1139R2 | 10 | Yes | 19.0 (2015)\*\* 19.26\*\* | Yes | N/A | 2023.1\* | Yes | 12.0 | 11.0 |
| `<=> != ==` | P1185R2 | 10 | 10 | 19.22\* | 12.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| DR11: Explicitly defaulted functions with different exception specifications | P1286R2 | 10 | 9 | 19.28 (16.8)\* | 11.0.3\* | 5.1 | 2021.1 | 20.7 | 12.0 | 11.0 |
| Lambda capture and storage class specifiers of structured bindings | P1091R3 P1381R1 | 10 | 8 (partial) 16 | 19.11\*\* 19.24\*\* | 16.0.0\* | 5.1 | 2021.1 | 20.7 | 12.0 |  |
| Permit conversions to arrays of unknown bound | P0388R4 | 10 | 14 | 19.27\* | 14.0.0\* | 6.0 | 2021.5 | 20.11 | 12.0 |  |
| constexpr container operations  (FTM)\* | P0784R7 | 10 | 10 | 19.28 (16.9)\* | 12.0.0\* | 6.0 | 2021.5 | 20.11 | 12.0 | 11.0 |
| Deprecating some uses of `volatile` | P1152R4 | 10 | 10 | 19.27\* | 12.0.0\* | 6.0 | 2021.5 | 20.11 | 12.0 | 11.0 |
| constinit  (FTM)\* | P1143R2 | 10 | 10 | 19.29 (16.10)\* | 12.0.0\* | 6.1 | 2021.7 | 20.11 | 12.0 | 11.0 |
| Deprecate comma operator in subscripts | P1161R3 | 10 | 9 | 19.25\* | 11.0.3\* | 6.0 | 2021.7 | 20.11 | 12.0 | 11.0 |
| `[[nodiscard]]` with message | P1301R4 | 10 | 9 | 19.25\* | 11.0.3\* | 6.0 | 2021.5 | 20.11 | 12.0 | 11.0 |
| Trivial default initialization in constexpr functions | P1331R2 | 10 | 10 | 19.27\* | 12.0.0\* | 6.1 | 2021.7 | 20.11 | 12.0 | 11.0 |
| Unevaluated asm-declaration in constexpr functions | P1668R1 | 10 | 10 | 19.28 (16.9)\* | 12.0.0\* | 6.1 | 2021.7 | 20.11 | 12.0 | 11.0 |
| using enum  (FTM)\* | P1099R5 | 11 | 13 | 19.24\* | 13.1.6\* | 6.3 | 2023.1 | 22.5 | 12.0 |  |
| Synthesizing Three-way comparison for specified comparison category | P1186R3 | 11 | 10 | 19.24\* | 12.0.0\* | 6.0 | 2021.5 | 20.11 | 12.0 | 11.0 |
| DR17: `[[nodiscard]]` for constructors | P1771R1 | 10 | 9 | 19.24\* | 11.0.3\* | 6.0 | 2021.5 | 20.11 | 12.0 | 11.0 |
| class template argument deduction for alias templates  (FTM)\* | P1814R0 | 10 | 19 | 19.27\* |  | 6.5 |  | 23.9 | 12.0 |  |
| class template argument deduction for aggregates  (FTM)\* | P1816R0 P2082R1 | 10\* 11\* | 17 | 19.27\* |  | 6.3 | 2023.1 (partial)\* 2024.1 | 23.3 | 12.0 |  |
| DR11: Implicit move for more local objects and rvalue references | P1825R0 | 11\* | 13 | 19.24\* | 13.1.6\* | 6.0 | 2021.5 | 20.11 | 12.0 |  |
| Allow defaulting comparisons by value | P1946R0 | 10 | 10 | 19.25\* | 12.0.0\* | 6.1 | 2021.7 | 20.11 | 12.0 | 11.0 |
| Remove `std::weak_equality` and `std::strong_equality` | P1959R0 | 10 | 10 | 19.25\* | 12.0.0\* | 6.1 | 2021.7 | 20.11 | 12.0 | 11.0 |
| Inconsistencies with non-type template parameters  (FTM)\* | P1907R1 | 10 (partial) 11 | 18 (partial)\* | 19.26\* | 13.1.6\* (partial) | 6.2 | 2023.1 (partial) | 21.3 | 12.0 |  |
| DR98: Pseudo-destructors end object lifetimes | P0593R6 | 11 | 11 | Yes | 12.0.5\* | N/A | 2023.1\* | Yes | 12.0 | 11.0 |
| DR11: Converting from T\* to bool should be considered narrowing | P1957R2 | 10\* 11\* | 11 | 19.27\* | 12.0.5\* | 6.1 |  |  | 12.0 | 11.0 |
| C++20 feature | Paper(s) | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)\* | Nvidia nvcc | Cray |

### C++20 library features

| C++20 feature | Paper(s) | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang\* |  |
| --- | --- | --- | --- | --- | --- | --- |
| std::endian  (FTM)\* | P0463R1 | 8 | 7 | 19.22\* | 10.0.0\* |
| Extending std::make_shared() to support arrays  (FTM)\* | P0674R1 | 12 | 15 | 19.27\* | 14.0.3\* |
| Floating-point atomic  (FTM)\* | P0020R6 | 10 | 18 | 19.22\* | 16.0.0\* |
| Synchronized buffered (std::basic_osyncstream)  (FTM)\* | P0053R7 | 11 | 18 | 19.29 (16.10)\* |  |
| constexpr for <algorithm> and <utility>  (FTM)\* | P0202R3 | 10 | 8 (partial) 12 | 19.26\* | 10.0.1\* (partial) 13.0.0\* |
| More constexpr for <complex>  (FTM)\* | P0415R1 | 9 | 7 (partial) 16 | 19.27\* | 10.0.0\* (partial) 15.0.0\* |
| Make std::memory_order a scoped enumeration | P0439R0 | 9 | 9 | 19.25\* | 11.0.3\* |
| String prefix and suffix checking: string(_view)::starts_with / ends_with  (FTM)\* | P0457R2 | 9 | 6 | 19.21\* | 10.0.0\* |
| Library support for `operator<=>` <compare>  (FTM)\* | P0768R1 | 10 | 7 (partial) 12 (partial)\* 17 | 19.20\* (partial) 19.28 (16.9)\* | 13.0.0\* |
| std::remove_cvref  (FTM)\* | P0550R2 | 9 | 6 | 19.20\* | 10.0.0\* |
| `[[nodiscard]]` in the standard library | P0600R1 | 9 | 7 (partial) 16 | 19.13\* (partial) 19.22\* | 10.0.0\* (partial) 15.0.0\* |
| Using std::move in numeric algorithms | P0616R0 | 9 | 12 | 19.23\* | 13.0.0\* |
| Utility to convert a pointer to a raw pointer  (FTM)\* | P0653R2 | 8 | 6 | 19.22\* | Yes |
| Atomic std::shared_ptr and std::weak_ptr  (FTM)\* | P0718R2 | 12 |  | 19.27\* |  |
| std::span  (FTM)\* | P0122R7 | 10 | 7 | 19.26\* | 10.0.0\* |
| Calendar and Time zone  (FTM)\* | P0355R7 | 11 (partial)\* 13 (partial)\* 14 | 7 (partial) 19 (partial)\* | 19.29 (16.10)\* | 10.0.0\* (partial) |
| <version> | P0754R2 | 9 | 7 | 19.22\* | 10.0.0\* |
| Comparing unordered containers | P0809R0 | Yes | Yes | 16.0\* | Yes |
| ConstexprIterator requirements  (FTM)\*  (FTM)\* | P0858R0 | 9 | 12 | 19.11\* | 13.0.0\* |
| std::basic_string::reserve() should not shrink | P0966R1 | 11 | 8 | 19.25\* | 10.0.1\* |
| Atomic Compare-And-Exchange with padding bits | P0528R3 | 13 |  | 19.28 (16.8)\* |  |
| std::atomic_ref  (FTM)\* | P0019R8 | 10 | 19 | 19.28 (16.8)\* |  |
| contains() member function of associative containers, e.g. std::map::contains() | P0458R2 | 9 | 13 | 19.21\* | 13.1.6\* |
| DR11: Guaranteed copy elision for piecewise construction | P0475R1 | 9 | Yes | 19.29 (16.10)\* | Yes |
| std::bit_cast()  (FTM)\* | P0476R2 | 11 | 14 | 19.27\* | 14.0.3\* |
| Integral power-of-2 operations: std::bit_ceil(), std::bit_floor(), std::bit_width(), std::has_single_bit()  (FTM)\* | P0556R3 P1956R1 | 9\* 10\* | 9\* 12\* | 19.25\*\* 19.27\*\* 19.28 (16.8)\* | 11.0.3\*\* 13.0.0\*\* |
| Improving the return value of erase-like algorithms  (FTM)\* | P0646R1 | 9 | 10 | 19.21\* | 12.0.0\* |
| std::destroying_delete_t  (FTM)\* | P0722R3 | 9 | 9 | 19.27\* | 11.0.3\* |
| std::is_convertible  (FTM)\* | P0758R1 | 9 | 9 | 19.23\* | 11.0.3\* |
| Add std::shift_left/right to <algorithm>  (FTM)\* | P0769R2 | 10 | 12 | 19.21\* | 13.0.0\* |
| Constexpr for std::swap() and `swap` related functions | P0879R0 | 10 | 13 | 19.26\* | 13.1.6\* |
| std::type_identity  (FTM)\* | P0887R1 | 9 | 8 | 19.21\* | 10.0.1\* |
| Concepts library  (FTM)\* | P0898R3 | 10 | 13 | 19.23\* | 13.1.6\* |
| `constexpr` comparison operators for std::array | P1023R0 | 10 | 8 | 19.27\* | 10.0.1\* |
| `std::unwrap_ref_decay` and `std::unwrap_reference`  (FTM)\* | P0318R1 | 9 | 8 | 19.21\* | 10.0.1\* |
| std::bind_front()  (FTM)\* | P0356R5 | 9 | 13 | 19.25\* | 13.1.6\* |
| std::reference_wrapper for incomplete types | P0357R3 | 9 | 8 | 19.26\* | 10.0.1\* |
| Fixing operator>>(basic_istream&, CharT\*) | P0487R1 | 11 | 8 | 19.23\* | 10.0.1\* |
| Library support for `char8_t`  (FTM)\* | P0482R6 | 9 | 8 (partial) 16 | 19.22\* | 10.0.1\* (partial) 15.0.0\* |
| Utility functions to implement uses-allocator construction | P0591R4 | 9 | 16 | 19.29 (16.10)\* | 15.0.0\* |
| DR17: std::variant and std::optional should propagate copy/move triviality | P0602R4 | 8.3 | 8 | 19.11\* | 10.0.1\* |
| DR17: A sane std::variant converting constructor | P0608R3 | 10 | 9 | 19.29 (16.10)\*\* 19.42\*\* | 11.0.3\* |
| std::function's move constructor should be noexcept | P0771R1 | 7.2 | 6 | 19.22\* | Yes |
| The One Ranges Proposal  (FTM)\* | P0896R4 | 10 | 13 (partial) 15\* | 19.29 (16.10)\* | 14.0.3\* |
| Heterogeneous lookup for unordered associative containers  (FTM)\* | P0919R3 P1690R1 | 11 | 12 | 19.23\* (P0919R3) 19.25\* (P1690R1) | 13.0.0\* |
| <chrono> `zero()`, `min()`, and `max()` should be noexcept | P0972R0 | 9 | 8 | 19.14\* | 10.0.1\* |
| constexpr in std::pointer_traits  (FTM)\* | P1006R1 | 9 | 8 | 19.26\* | 10.0.1\* |
| std::assume_aligned()  (FTM)\* | P1007R3 | 9\* 11 | 15 | 19.28 (16.9)\* | 14.0.3\* |
| Smart pointer creation with default initialization (e.g. make_unique_for_overwrite)  (FTM)\* | P1020R1 P1973R1 | 11\* 12\* | 16 | 19.28 (16.9)\* | 15.0.0\* |
| Misc constexpr bits  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\* | P1032R1 | 10 | 13 | 19.28 (16.8)\* | 13.1.6\* |
| Remove comparison operators of std::span | P1085R2 | 10 | 8 | 19.26\* | 10.0.1\* |
| Make stateful allocator propagation more consistent for operator+(basic_string) | P1165R1 | 10 | 15 | 19.26\* | 14.0.3\* |
| Consistent container erasure, e.g. std::erase(std::vector), or std::erase_if(std::map)  (FTM)\* | P1209R0 P1115R3 | 9\* 10\* | 8\* 11\* | 19.25\*\* 19.27\*\* | 10.0.1\*\* 12.0.5\*\* |
| Standard library header units | P1502R1 | 11 |  | 19.29 (16.10)\* |  |
| polymorphic_allocator<> as a vocabulary type  (FTM)\* | P0339R6 | 9 | 16 | 19.28 (16.9)\* | 15.0.0\* |
| std::execution::unseq  (FTM)\* | P1001R2 | 9 | 17 | 19.28 (16.8)\* |  |
| std::lerp() and std::midpoint()  (FTM)\* | P0811R3 | 9 | 9 | 19.23\* (partial) 19.28 (16.8)\* | 11.0.3\* |
| Usability enhancements for std::span | P1024R3 | 10 | 9\* 14 | 19.26\* | 11.0.3\* |
| DR17: Make std::create_directory() intuitive | P1164R1 | 8.3 | 12 | 19.20\* | 13.0.0\* |
| std::ssize() and unsigned extent for std::span  (FTM)\* | P1227R2 | 10 | 9 | 19.25\* | 11.0.3\* |
| Traits for (un)bounded arrays  (FTM)\* | P1357R1 | 9 | 9 | 19.25\* | 11.0.3\* |
| std::to_array()  (FTM)\* | P0325R4 | 10 | 10 | 19.25\* | 12.0.0\* |
| Efficient access to std::basic_stringbuf’s buffer | P0408R7 | 11 | 17 | 19.29 (16.10)\* | 15.0.0\* |
| Layout-compatibility and pointer-interconvertibility traits  (FTM)\*  (FTM)\* | P0466R5 | 12 |  | 19.29 (16.10)\*\* |  |
| Bit operations: std:: rotl(), rotr(), countl_zero(), countl_one(), countr_zero(), countr_one(), popcount()  (FTM)\* | P0553R4 | 9 | 9 | 19.25\*\* 19.28 (16.8)\* | 11.0.3\* |
| Mathematical constants  (FTM)\* | P0631R8 | 10 | 11 | 19.25\* | 12.0.5\* |
| Text formatting  (FTM)\* | P0645R10 | 13 | 14\*\* 17 | 19.29 (16.10)\* | 15.0.0\* |
| std::stop_token and std::jthread  (FTM)\* | P0660R10 | 10 | 17 (partial)\* 20\* | 19.28 (16.9)\* |  |
| constexpr std::allocator and related utilities  (FTM)\* | P0784R7 | 10 | 12 | 19.29 (16.10)\* | 13.0.0\* |
| constexpr std::string  (FTM)\* | P0426R1 P1032R1 P0980R1 | 12 | 15 | 19.29 (16.10)\* 19.30\*\* | 14.0.3\* |
| constexpr std::vector  (FTM)\* | P1004R2 | 12 | 15 | 19.29 (16.10)\* 19.30\*\* | 14.0.3\* |
| Input range adaptors | P1035R7 | 10 | 16 | 19.29 (16.10)\* | 15.0.0\* |
| constexpr std::invoke() and related utilities | P1065R2 | 10 | 12 | 19.28 (16.8)\* | 13.0.0\* |
| Atomic waiting and notifying, std::counting_semaphore, std::latch and std::barrier  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\*  (FTM)\* | P1135R6 | 11 | 11 | 19.28 (16.8)\* | 13.1.6\* |
| std::source_location  (FTM)\* | P1208R6 | 11 | 15\* (partial) 16 | 19.29 (16.10)\* | 15.0.0\* |
| Adding <=> to the standard library | P1614R2 | 10 | 14\* (partial) 17\* (partial) 19 | 19.29 (16.10)\* | 13.1.6\* (partial) |
| constexpr default constructor of std::atomic and std::atomic_flag  (FTM)\* | P0883R2 | 10 | 13 | 19.26\* | 13.1.6\* |
| constexpr for numeric algorithms  (FTM)\* | P1645R1 | 10 | 12 | 19.26\* | 13.0.0\* |
| Safe integral comparisons  (FTM)\* | P0586R2 | 10 | 13 | 19.27\* | 13.1.6\* |
| C++20 feature | Paper(s) | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang\* |

## Older standards

- C++17 core language features
- C++17 library features

- C++14 core language features
- C++14 library features

- C++11 core language features
- C++11 library features

### See also

|  |  |
| --- | --- |
| ****Feature testing**** (C++20) | A set of preprocessor macros to test the corresponding to C++ language and library features |
| C documentation for compiler support | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support&oldid=177796>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 21 November 2024, at 12:56.