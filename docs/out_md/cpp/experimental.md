# Experimental C++ Features

From cppreference.com
< cpp
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
| ****Technical specifications**** | | | | |
| Symbols index | | | | |
| External libraries | | | | |

****Experimental****

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

The C++ standards committee publishes experimental C++ language and library extensions for future standardization.

Note: until 2012, these publications used the ****TR**** (technical report) format. Since 2012 ISO procedure changed to use the ****TS**** (technical specification) format.

#### TR/TS specifications

| ISO number | Name | Status | Links, headers |
| --- | --- | --- | --- |
| ISO/IEC TR 18015:2006 | Technical Report on C++ Performance | Published 2006 (ISO store). Draft: TR18015 (2006-02-15). |  |
| ISO/IEC TR 19768:2007 | Technical Report on C++ Library Extensions | Published 2007-11-15 (ISO store). Draft: N1836 (2005-06-24)  ISO 29124 split off, the rest merged into C++11. |  |
| ISO/IEC 29124:2010 | Extensions to the C++ Library to support mathematical special functions | Published 2010-09-03 (ISO Store). Final draft: N3060 (2010-03-06).  ****✔****Merged into C++17. | Special functions (experimental), Special functions |
| ISO/IEC TR 24733:2011 | Extensions for the programming language C++ to support decimal floating-point arithmetic | Published 2011-10-25 (ISO Store) Draft: N2849 (2009-03-06).  May be superseded by a future TS or merged into a future revision of C++ (most recent merge proposal was N3871). |  |
| ISO/IEC TS 18822:2015 | C++ File System Technical Specification | Published 2015-06-18 (ISO store). Final draft: N4100 (2014-07-04).  ****✔****Merged into C++17. | Filesystem (experimental), Filesystem, <filesystem> |
| ISO/IEC TS 19570:2015 | C++ Extensions for Parallelism | Published 2015-06-24. (ISO Store). Final draft: N4507 (2015-05-05).  ****✔****Merged into C++17. | Parallelism |
| ISO/IEC TS 19841:2015 | Transactional Memory TS | Published 2015-09-16, (ISO Store). Final draft: N4514 (2015-05-08). | Transactional memory |
| ISO/IEC TS 19568:2015 | C++ Extensions for Library Fundamentals | Published 2015-09-30, (ISO Store). Final draft: N4480 (2015-04-07).  ****✔****Merged into C++17 except for invocation traits. | Library extensions |
| ISO/IEC TS 19217:2015 | C++ Extensions for Concepts | Published 2015-11-13 (ISO Store). Final draft: N4553 (2015-10-02). Current draft: P0734R0 (2017-07-14).  ****✔****Merged into C++20 (with modifications). | Constraints and concepts (experimental), Concepts, <concepts> |
| ISO/IEC TS 19571:2016 | C++ Extensions for Concurrency | Published 2016-01-19 (ISO Store). Final draft: P0159R0 (2015-10-22).  ****✔****Partially merged into C++20. | Concurrency |
| ISO/IEC TS 19568:2017 | C++ Extensions for Library Fundamentals, Version 2 | Published 2017-03-30 (ISO Store). Draft: N4617 (2016-11-28).  ****✔****Partially merged into C++17 and C++20. | Library extensions 2 |
| ISO/IEC TS 21425:2017 | Ranges TS | Published 2017-12-05 (ISO Store). Draft: N4685 (2017-07-31).  ****✔****Merged into C++20. | Ranges (experimental), Ranges, <ranges> |
| ISO/IEC TS 22277:2017 | Coroutines TS | Published 2017-12-05 (ISO Store). Draft: N4736 (2018-03-31). Latest draft: N4775 (2018-10-07).  ****✔****Merged into C++20. | <coroutine> |
| ISO/IEC TS 19216:2018 | Networking TS | Published 2018-04-24 (ISO Store). Draft: N4734 (2017-04-04). Latest draft: N4771 (2018-10-08).  | See also non-TS proposals | | --- | | - Standard Secure Networking - P2586R0 (2022-09-13) - Sender-Receiver Interface For Networking - P2762R2 (2023-10-12) - A proposed direction for C++ Standard Networking based on IETF TAPS - P3185R0 (2024-12-14) - Proposed API for creating TAPS based networking connections - P3482R0 (2024-12-14) | | Networking |
| ISO/IEC TS 21544:2018 | Modules TS | Published 2018-05-16 (ISO Store). Final Draft: N4720 (2018-01-29).  ****✔****Merged into C++20. |  |
| ISO/IEC TS 19570:2018 | Parallelism TS Version 2 | Published 2018-11-15 (ISO Store). Final draft: N4793 (2018-11-26). Post-publication draft: N4808 (2019-03-11). See also non-TS `std::simd` proposals below. | Parallelism 2 |
| ISO/IEC TS 23619:2021 | Reflection TS | Published 2021-10-11 (ISO store). Draft: N4856 (2020-03-02). See also non-TS proposals below. | Reflection |
|  | Numerics | Early development. Draft: P1889R1 (2019-12-27). |  |
| ISO/IEC TS 9922 | Concurrency TS Version 2 | Published 2024-10-09 (ISO Store). Draft: N4956 (2023-07-05). | Concurrency 2") |
| ISO/IEC TS 19568:2024 | C++ Extensions for Library Fundamentals, Version 3 | Published 2024-08-26 (ISO Store). Draft: N4948 (2023-05-08). | Library extensions 3 |
| ISO/IEC DTS 12907 | Transactional Memory TS, Version 2 | Early development. Draft: N4923 (2022-10-14). |  |
| ISO/IEC NP 19569 | Array Extensions TS | ****×**** Withdrawn. Abandoned draft: N3820 (2013-10-10). |  |

#### Non-TS proposals

| Name | Status | Links, Headers |
| --- | --- | --- |
| Linear Algebra | ****✔****Merged into C++26. Proposal: P1673R13 (2023-11-10).  | More proposals: | | --- | | - A proposal to add linear algebra support to the C++ standard library - P1385R7 (2022-10-15) - Evolving a Standard C++ Linear Algebra Library from the BLAS - P1674R2 (2022-05-15) - Presentation of P1385R7 to LEWG at Issaquah 2023 - P2802R0 (2023-02-09) - Fix C++26 by optimizing linalg::conjugated for non-complex value types - P3050R3 (2024-10-29) - Fix C++26 by making the symmetric and Hermitian rank-k and rank-2k updates consistent with the BLAS - P3371R3 (2024-10-29) | | <linalg> |
| std::execution | ****✔****Merged into C++26. Proposal: P2300R10 (2024-06-28).  | More proposals: | | --- | | - System execution context - P2079R6 (2025-01-13) - Sender-Receiver Interface for Networking - P2762R2 (2023-10-12) - Member customization points for Senders and Receivers - P2855R1 (2024-02-22) - An Event Model for C++ Executors - P2882R0 (2023-05-11) - Sender Algorithm Customization - P2999R3 (2023-12-13) - std::execution introduction - P3090R0 (2024-02-14) - A plan for std::execution for C++26 - P3109R0 (2024-02-12) - Improving diagnostics for Sender expressions - P3164R3 (2025-01-10) - Reconsidering the std::execution::on algorithm - P3175R3 (2024-06-25) - A sender query for completion behaviour - P3206R0 (2025-01-13) - `finally`, `write_env`, and `unstoppable` Sender Adaptors - P3284R2 (2024-11-21) - Fixing Lazy Sender Algorithm Customization - P3303R1 (2024-06-25) - A Utility for Creating Execution Environments - P3325R5 (2024-11-22) - When Do You Know `connect` Doesn't Throw? - P3388R1 (2025-01-11) - std::execution wording fixes - P3396R1 (2024-11-19) - Enabling more efficient stop-token based cancellation of senders - P3409R1 (2024-11-17) - `system_scheduler` on Win32, Darwin and Linux - P3456R0 (2024-10-15) - Summarizing std::execution::bulk() issues - P3481R1 (2025-01-13) - High-Quality Sender Diagnostics with Constexpr Exceptions - P3557R0 (2025-01-13) | | Execution (experimental), Execution, <execution> |
| std::inplace_vector | ****✔****Merged into C++26. Proposal: P0843R14 (2024-06-26).  | More proposals: | | --- | | - `inplace_vector` - P0843(R7) LEWG presentation - P2925R0 (2023-06-16) - A direction for Vector - P3147R1 (2024-03-18) - An allocator-aware std::inplace_vector - P3160R2 (2024-10-15) | | <inplace_vector> |
| `experimental::simd` std::simd | ****✔****Merged into C++26. Proposal: P1928R15 (2024-11-22). The main document (TS ISO/IEC 19570:2018) is described in "C++ Extensions for Parallelism V2" above.  | More proposals: | | --- | | - Expected Feedback from SIMD in Parallelism TS2 - P1915R0 (2019-10-07) - Intel's response to `std::simd` - P2638R0 (2022-09-22) - Proposal to support interleaved complex values in `std::simd` - P2663R6 (2025-01-13) - Proposal to extend `std::simd` with permutation API - P2664R9 (2025-01-13) - `std::simd` Intro slides - P2803R0 (2023-02-09) - Issaquah Slides for Intel response to `std::simd` - P2807R0 (2023-02-10) - Proposal to extend `std::simd` with more constructors and accessors - P2876R1 (2024-05-22) - Algorithm-like vs `std::simd` based RNG API - P2880R0 (2023-05-18) - `std::simd` types should be regular - P2892R0 (2023-05-19) - `std::simd` types should be regular - P2892R0 LEWG presentation - P2926R0 (2023-06-19) - `simd_invoke` - P2929R0 (2023-07-19) - `std::simd` overloads for <bit> - P2933R3 (2025-01-13) - Add saturating library support to `std::simd` - P2956R0 (2023-08-01) - Allowing user-defined types in `std::simd` - P2964R1 (2024-05-22) - Interface Directions for `std::simd` - P3024R0 (2023-11-30) - Provide predefined `std::simd` permute generator functions for common operations - P3067R0 (2024-05-22) - Replace `std::simd` operator[] with getter and setter functions - or not - P3275R0 (2024-05-22) - Exploration of namespaces for `std::simd` - P3287R2 (2024-11-13) - Range constructors for `std::simd` - P3299R3 (2024-12-17) - Add an `iota` object for `std::simd` (and more) - P3319R2 (2024-11-19) - `std::simd` issues: explicit, unsequenced, identity-element position, and members of disabled simd - P3430R2 (2025-01-13) - Add `n_elements` named constructor to `std::simd` - P3440R0 (2024-10-15) - Rename `simd_split` to `simd_chunk` - P3441R0 (2024-10-15) - Add utilities for easier type-bit casting in `std::simd` - P3445R0 (2024-10-16) - `std::simd` is a `range` - P3480R3 (2025-01-13) | | Data parallel types (experimental), Data parallel types, <simd> |
| Pattern Matching | Early development. Draft P1371R3 (2020-09-15).  | More proposals: | | --- | | - Pattern Matching using is and as - P2392R3 (2024-10-16) - Pattern Matching: match expression - P2688R5 (2025-01-13) - switch for Pattern Matching - P2940R0 (2022-04-18) - Identifiers for Pattern Matching - P2941R0 (2022-02-24) - A Postcondition **is** a Pattern Match - P3210R2 (2024-09-10) - A unified syntax for Pattern Matching and Contracts when introducing a new name - P3249R0 (2024-05-22) - A simpler notation for PM - P3332R0 (2024-06-18) - Slides for P2688R2 - Pattern Matching: match Expression - P3476R0 (2024-10-16) - Pattern Matching: Customization Point for Open Sum Types - P3521R0 (2024-12-17) - Pattern Matching: \*variant-like\* and 'std::expected' - P3527R1 (2025-01-13) - Pattern matching - P3572R0 (2025-01-12) | |  |
| Reflection | The main document (ISO/IEC TS 23619:2021) is described in Reflection TS above.  | More proposals: | | --- | | - Scalable Reflection in C++ - P1240R2 (2022-01-14) - Expansion statements - P1306R3 (2024-10-14) - Reflection on attributes - P1887R1 (2020-01-13) - Metaprogramming - P2237R0 (2020-10-15) - Python Bindings with Value-Based Reflection - P2911R1 (2023-10-13) - Reflection for C++26 - P2996R9 (2025-01-13) - Using Reflection to Replace a Metalanguage for Generating JS Bindings - P3010R0 (2023-10-13) - ABI comparison with reflection - P3095R0 (2024-02-15) - Function Parameter Reflection in Reflection for C++26 - P3096R5 (2024-12-14) - Generative Extensions for Reflection - P3157R1 (2024-05-22) - Syntax for Reflection - P3381R0 (2024-09-17) - Attributes reflection - P3385R3 (2025-01-07) - Annotations for Reflection - P3394R1 (2025-01-13) - Reflection Syntax Options Summary - P3419R0 (2024-10-11) - Reflection of Templates - P3420R1 (2025-01-13) - Reflection header should minimize standard library dependencies - P3429R1 (2024-11-29) - Reflection and meta-programming - P3435R0 (2024-10-14) - Proposed default principles: Reflect C++, Generate C++ - P3437R1 (2024-11-07) - Reflection on SG21 2024 Process - P3443R0 (2024-10-14) - A Suggestion for Reflection Access Control - P3451R0 (2024-10-15) - Ruminations on reflection and access - P3493R0 (2024-11-10) - Modeling Access Control With Reflection - P3547R0 (2025-01-09) - Error Handling in Reflection - P3560R0 (2025-01-12) - Split define_aggregate from Reflection - P3569R0 (2025-01-11) - Reconsider reflection access for C++26 - P3587R0 (2025-01-13) | | Reflection (experimental) |
| Contracts | Early development. Proposal P2659R2 (2022-11-30). Draft P2660R0 (2022-10-14).  | More proposals: | | --- | | - A Proposal to Publish a Technical Specification for Contracts - P2659R2 (2022-12-05) - Miscellaneous amendments to the Contracts TS - P2661R0 (2022-10-15) - Contracts for C++: Prioritizing Safety - P2680R1 (2022-12-15) - A proposed plan for contracts in C++ - P2695R1 (2023-02-09) - Proposal of Condition-centric Contracts Syntax - P2737R0 (2022-12-30) - Contracts for C++: Prioritizing Safety - Presentation slides - P2743R0 (2022-12-13) - Evaluation of Checked Contracts - P2751R1 (2023-02-14) - A Bold Plan for a Complete Contracts Facility - P2755R1 (2024-04-11) - The idea behind the contracts MVP - P2817R0 (2023-03-05) - Proposal of Contracts Supporting Const-On-Definition Style - P2829R0 (2023-04-13) - Contract violation handling semantics for the contracts MVP - P2852R0 (2023-04-24) - The Lakos Rule: Narrow Contracts and noexcept Are Inherently Incompatible - P2861R0 (2023-05-19) - Requirements for a Contracts syntax - P2885R3 (2023-10-05) - Contracts on lambdas - P2890R2 (2023-12-13) - Constant evaluation of Contracts - P2894R2 (2024-01-11) - Outstanding design questions for the Contracts MVP - P2896R0 (2023-08-22) - Contracts for C++ - Rationale - P2899R0 (2025-01-13) - Contracts for C++ - P2900R13 (2025-01-13) - A Principled Approach to Open Design Questions for Contracts - P2932R3 (2024-01-16) - An Attribute-Like Syntax for Contracts - P2935R4 (2023-11-05) - Contracts must avoid disclosing sensitive information - P2947R0 (2023-07-20) - Slides for P2861R0: Narrow Contracts and noexcept are Inherently Incompatible - P2949R0 (2023-07-14) - Contracts and virtual functions for the Contracts MVP - P2954R0 (2023-08-03) - Contracts and coroutines - P2957R2 (2024-10-14) - A natural syntax for Contracts - P2961R2 (2023-11-08) - An Overview of Syntax Choices for Contracts - P3028R0 (2023-11-05) - Protection against modifications in contracts - P3071R1 (2023-12-17) - Remove `evaluation_undefined_behavior` and `will_continue` from the Contracts MVP - P3073R0 (2024-01-27) - Should `ignore` and `observe` exist for constant evaluation of contracts? - P3079R0 (2024-01-11) - Contracts for C++: Support for virtual functions - P3097R0 (2024-04-15) - Contracts for C++: Postcondition captures - P3098R1 (2024-12-11) - Undefined and erroneous behavior are contract violations - P3100R1 (2024-10-16) - Tokyo Technical Fixes to Contracts - P3119R1 (2024-05-09) - Contracts on virtual functions for the Contracts MVP - P3165R0 (2024-02-27) - Inherited contracts - P3169R0 (2024-04-14) - Contract testing support - P3183R1 (2024-05-22) - Slides for LEWG presentation of P2900R6: Contracts for C++ - P3189R0 (2024-03-19) - Slides for LEWG presentation of P2900R7: Contracts for C++ - P3190R0 (2024-03-20) - A response to the Tokyo EWG polls on the Contracts MVP (P2900R6) - P3197R0 (2024-04-12) - A takeaway from the Tokyo LEWG meeting on Contracts MVP - P3198R0 (2024-03-29) - Why Contracts? - P3204R0 (2024-11-07) - The contract of sort() - P3212R0 (2024-07-03) - Contracts for C++: Naming the **Louis semantic** - P3226R0 (2024-04-12) - Contracts for C++: Fixing the contract violation handling API - P3227R1 (2024-10-24) - Contracts for C++: Revisiting contract check elision and duplication - P3228R1 (2024-05-21) - Making erroneous behaviour compatible with Contracts - P3229R0 (2025-01-13) - An alternate proposal for naming contract semantics - P3238R0 (2024-05-06) - A unified syntax for Pattern Matching and Contracts when introducing a new name - P3249R0 (2024-05-22) - C++ contracts with regards to function pointers - P3250R0 (2024-05-07) - C++ contracts and coroutines - P3251R0 (2024-05-07) - Make the predicate of `contract_assert` more regular - P3257R0 (2024-04-26) - Ship Contracts in a TS - P3265R3 (2024-05-28) - Approaches to C++ Contracts - P3267R1 (2024-05-22) - C++ Contracts Constification Challenges Concerning Current Code - P3268R0 (2024-05-07) - Do Not Ship Contracts as a TS - P3269R0 (2024-05-21) - Repetition, Elision, and Constification w.r.t. `contract_assert` - P3270R0 (2024-05-22) - Function Usage Types (Contracts for Function Pointers) - P3271R1 (2024-10-15) - P2900 Is Superior to a Contracts TS - P3276R0 (2024-05-18) - Contracts: Protecting The Protector - P3285R0 (2024-05-15) - Integrating Existing Assertions With Contracts - P3290R2 (2024-09-06) - C++26 Needs Contract Checking - P3297R1 (2024-06-21) - An opt-in approach for integration of traditional assert facilities in C++ contracts - P3311R0 (2024-05-22) - Compile time resolved contracts - P3317R0 (2024-05-22) - Contracts Interaction With Tooling - P3321R0 (2024-07-12) - Contract assertions on function pointers - P3327R0 (2024-10-16) - Observable Checkpoints During Contract Evaluation - P3328R0 (2024-06-14) - Usage Experience for Contracts with BDE - P3336R0 (2024-06-23) - Contracts - What are we doing here (EWG Presentation) - P3343R0 (2024-06-25) - Virtual Functions on Contracts (EWG - Presentation for P3097) - P3344R0 (2024-06-28) - Class invariants and contract checking philosophy - P3361R1 (2024-07-23) - Static analysis and “safety” of Contracts, P2900 vs P2680/P3285 - P3362R0 (2024-08-13) - Contract assertions versus static analysis and “safety” - P3376R0 (2024-10-14) - Static Analysis of Contracts with P2900 - P3386R1 (2024-11-25) - Contract assertions on coroutines - P3387R0 (2024-10-09) - Specifying Contract Assertion Properties with Labels - P3400R0 (2025-01-09) - Improving the handling of exceptions thrown from contract predicates - P3417R0 (2024-10-16) - Contracts Implementors Report - P3460R0 (2024-10-16) - Standard library hardening - P3471R2 (2024-12-14) - Constification should not be part of the MVP (****M****inimal ****V****iable ****P****roduct) - P3478R0 (2024-10-16) - Exploring strict contract predicates - P3499R0 (2025-01-13) - Are Contracts 'safe'? - P3500R0 (2025-01-13) - Slides for P2900R11 - Contracts for C++ - P3502R0 (2024-11-18) - P2900 Is Still not Ready for C++26 - P3506R0 (2025-01-13) - Violation handlers vs noexcept - P3541R1 (2025-01-07) - Core Language Contracts By Default - P3558R0 (2025-01-12) - Contract concerns - P3573R0 (2025-01-12) - Require a non-throwing default contract-violation handler - P3577R0 (2025-01-12) - Observed a contract violation? Skip subsequent assertions! - P3582R0 (2025-01-13) - Contracts, Types & Functions - P3583R0 (2025-01-13) | |  |
| 2D Graphics | Early development. Draft P0267R10 (2019-10-07). |  |
| Graph Library | Early development.  | More proposals: | | --- | | - Graph Library: Overview - P3126R2 (2024-08-05) - Graph Library: Algorithms - P3128R2 (2024-09-12) - Graph Library: Graph Container Interface - P3130R2 (2024-08-05) - Graph Library: Graph Containers - P3131R2 (2024-08-05) | |  |
| Statistics | Early development.  | More proposals: | | --- | | - Basic Statistics - P1708R9 (2024-10-15) - Remarks on Basic Statistics, P1708R9 - P3495R0 (2024-11-13) | |  |
| Profiles | Early development.  | More proposals: | | --- | | - Safety Profiles: Type-and-resource Safe programming in ISO Standard C+ - P2816R0 (2023-02-16) - Concrete suggestions for initial Profiles - P3038R0 (2023-12-16) - Core safety Profiles: Specification, adoptability, and impact - P3081R0 (2024-10-16) - A framework for Profiles development - P3274R0 (2024-05-10) - A Safety Profile Verifying Class Initialization - P3402R1 (2024-10-15) - Profile invalidation - eliminating dangling pointers - P3446R0 (2024-10-14) - Profiles syntax - P3447R0 (2024-10-14) - Response to Core Safety Profiles (P3081R0) - P3543R0 (2024-12-17) - The Plethora of Problems With Profiles - P3586R0 (2025-01-13) - C++ Profiles: The Framework - P3589R0 (2025-01-13) | |  |

### See also

|  |  |
| --- | --- |
| C documentation for Experimental C features | |

### External links

|  |  |
| --- | --- |
| 1. | PL22.16/WG21 document list - All C++ committee documents (TS/proposals) for 2016-2025. |
| 2. | JTC1/SC22/WG21 Proposals (mailing) for 2025. |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental&oldid=179779>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 20 January 2025, at 17:14.