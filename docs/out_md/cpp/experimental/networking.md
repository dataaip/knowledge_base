# Extensions for networking

From cppreference.com
< cpp‎ | experimental
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

 ****Networking****Template:cpp/experimental/networking/navbar content")

The C++ Extensions for Networking, ISO/IEC TS 19216:2018, defines new components for the C++ standard library listed on this page.

The Networking TS is based on the C++14 standard as modified by version 1 of the Library Fundamentals TS. Its design is based on the Asio library.

#### Library named requirements

The following named requirements are used in the normative text of the Networking TS to define the expectations of the library. The burden is on the programmer to ensure that library templates are instantiated with template arguments that satisfy these requirements. Failure to do so may result in very complex compiler diagnostics or in undefined behavior at runtime.

|  |  |
| --- | --- |
| AcceptableProtocol") | (named requirement) |
| AsyncReadStream") | (named requirement) |
| AsyncWriteStream") | (named requirement) |
| CompletionCondition") | (named requirement) |
| CompletionToken") | (named requirement) |
| ConnectCondition") | (named requirement) |
| ConstBufferSequence") | represents a set of memory regions that may be used as input to an operation (named requirement) |
| DynamicBuffer") | (named requirement) |
| EndpointSequence") | (named requirement) |
| ExecutionContext") | (named requirement) |
| Executor") | (named requirement) |
| GettableSocketOption") | (named requirement) |
| InternetProtocol") | (named requirement) |
| IoControlCommand") | (named requirement) |
| MutableBufferSequence") | (named requirement) |
| ProtoAllocator") | (named requirement) |
| Protocol") | (named requirement) |
| Service") | (named requirement) |
| SettableSocketOption") | (named requirement) |
| Signature") | (named requirement) |
| SyncReadStream") | (named requirement) |
| SyncWriteStream") | (named requirement) |
| WaitTraits") | (named requirement) |

#### Convenience headers

|  |  |
| --- | --- |
| `<experimental/net>` | convenience header that includes every other Networking TS header |
| `<experimental/netfwd>` | contains forward declarations of major Networking TS components |

#### Asynchronous model

|  |  |
| --- | --- |
| Defined in header `<experimental/executor>` | |
| Defined in namespace `std::experimental::net` | |
| Asynchronous result | |
| async_result") | (class template) |
| async_completion") | (class template) |
| associated_allocator") | (class template) |
| get_associated_allocator") | (function template) |
| Execution context and services | |
| execution_context") | (class) |
| use_service") | (function template) |
| make_service") | (function template) |
| has_service") | (function template) |
| service_already_exists") | (class) |
| Executors | |
| is_executor") | (class template) |
| executor_arg_t") | (class) |
| uses_executor") | (class template) |
| associated_executor") | (class template) |
| get_associated_executor") | (function template) |
| executor_binder") | (class template) |
| bind_executor") | (function template) |
| executor_work_guard") | (class template) |
| system_executor") | (class) |
| system_context") | (class) |
| executor") | (class) |
| bad_executor") | (class) |
| Dispatch/post/defer | |
| dispatch") | (function template) |
| post") | (function template) |
| defer") | (function template) |
| Strand | |
| strand") | (class template) |
| std::future interop | |
| use_future_t") | (class template) |

#### Basic I/O services

|  |  |
| --- | --- |
| Defined in header `<experimental/io_context>` | |
| Defined in namespace `std::experimental::net` | |
| io_context") | (class) |

#### Buffers and buffer-oriented streams

|  |  |
| --- | --- |
| Defined in header `<experimental/buffer>` | |
| Defined in namespace `std::experimental::net` | |
| Stream error codes | |
| stream_errc") | (function) |
| stream_category") | (enum) |
| Buffers | |
| mutable_buffer") | (class) |
| const_buffer") | (class) |
| buffer") | (function template) |
| Buffer type traits | |
| is_mutable_buffer_sequence") | (class template) |
| is_const_buffer_sequence") | (class template) |
| is_dynamic_buffer") | (class template) |
| Buffer sequence access | |
| buffer_sequence_begin") | (function template) |
| buffer_sequence_end") | (function template) |
| Buffer operations | |
| buffer_size") | (function template) |
| buffer_copy") | (function template) |
| Dynamic buffers | |
| dynamic_vector_buffer") | (class template) |
| dynamic_string_buffer") | (class template) |
| dynamic_buffer") | (function template) |
| Buffer I/O | |
| transfer_all") | (class) |
| transfer_at_least") | (class) |
| transfer_exactly") | (class) |
| read") | (function template) |
| read_until") | (function template) |
| async_read") | (function template) |
| async_read_until") | (function template) |
| write") | (function template) |
| async_write") | (function template) |

#### Sockets and socket streams

|  |  |
| --- | --- |
| Defined in header `<experimental/socket>` | |
| Defined in namespace `std::experimental::net` | |
| Socket error codes | |
| socket_errc") | (enum) |
| socket_category") | (function) |
| Sockets | |
| socket_base") | (class) |
| basic_socket") | (class template) |
| basic_datagram_socket") | (class template) |
| basic_stream_socket") | (class template) |
| basic_socket_acceptor") | (class template) |
| Socket streams | |
| basic_socket_streambuf") | (class template) |
| basic_socket_iostream") | (class template) |
| Connect operations | |
| connect") | (function template) |
| async_connect") | (function template) |

#### Internet protocol

|  |  |
| --- | --- |
| Defined in header `<experimental/internet>` | |
| Defined in namespace `std::experimental::net::ip` | |
| Resolver error codes | |
| resolver_errc") | (enum) |
| resolver_category") | (function) |
| IP addresses | |
| address_v4") | (class) |
| make_address_v4") | (function template) |
| address_v6") | (class) |
| make_address_v6") | (function template) |
| address") | (class) |
| bad_address_cast") | (class) |
| make_address") | (function template) |
| Address iteration | |
| basic_address_iterator") | (class template) |
| basic_address_range") | (class template) |
| Networks | |
| network_v4") | (class) |
| make_network_v4") | (function template) |
| network_v6") | (class) |
| make_network_v6") | (function template) |
| Endpoints | |
| basic_endpoint") | (class template) |
| Name resolution | |
| basic_resolver_entry") | (class template) |
| basic_resolver_results") | (class template) |
| resolver_base") | (class) |
| basic_resolver") | (class template) |
| Host name | |
| host_name") | (function template) |
| TCP and UDP sockets | |
| tcp") | (class) |
| udp") | (class) |
| Socket options | |
| Defined in namespace `std::experimental::net::ip` | |
| v6_only") | (class) |
| Defined in namespace `std::experimental::net::ip::unicast` | |
| hops") | (class) |
| Defined in namespace `std::experimental::net::ip::multicast` | |
| join_group") | (class) |
| leave_group") | (class) |
| outbound_interface") | (class) |
| hops") | (class) |
| enable_loopback") | (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&oldid=158791>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 September 2023, at 10:28.