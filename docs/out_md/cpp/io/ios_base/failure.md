# std::ios_base::failure

From cppreference.com
< cpp‎ | io‎ | ios base
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

Input/output library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| I/O manipulators | | | | |
| Print functions (C++23) | | | | |
| C-style I/O | | | | |
| Buffers | | | | |
| basic_streambuf | | | | |
| basic_filebuf | | | | |
| basic_stringbuf | | | | |
| basic_spanbuf(C++23) | | | | |
| strstreambuf(C++98/26\*) | | | | |
| basic_syncbuf(C++20) | | | | |
| Streams | | | | |
| Abstractions | | | | |
| ios_base | | | | |
| basic_ios | | | | |
| basic_istream | | | | |
| basic_ostream | | | | |
| basic_iostream | | | | |
| File I/O | | | | |
| basic_ifstream | | | | |
| basic_ofstream | | | | |
| basic_fstream | | | | |
| String I/O | | | | |
| basic_istringstream | | | | |
| basic_ostringstream | | | | |
| basic_stringstream | | | | |
| Array I/O | | | | |
| basic_ispanstream(C++23) | | | | |
| basic_ospanstream(C++23) | | | | |
| basic_spanstream(C++23) | | | | |
| istrstream(C++98/26\*) | | | | |
| ostrstream(C++98/26\*) | | | | |
| strstream(C++98/26\*) | | | | |
| Synchronized Output | | | | |
| basic_osyncstream(C++20) | | | | |
| Types | | | | |
| streamoff | | | | |
| streamsize | | | | |
| fpos | | | | |
| Error category interface | | | | |
| iostream_category(C++11) | | | | |
| io_errc(C++11) | | | | |

std::ios_base

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| ios_base::ios_base | | | | |
| ios_base::~ios_base | | | | |
| ios_base::operator= | | | | |
| Formatting | | | | |
| ios_base::flags | | | | |
| ios_base::setf | | | | |
| ios_base::unsetf | | | | |
| ios_base::precision | | | | |
| ios_base::width | | | | |
| Locales | | | | |
| ios_base::imbue | | | | |
| ios_base::getloc | | | | |
| Internal extensible array | | | | |
| ios_base::xalloc | | | | |
| ios_base::iword | | | | |
| ios_base::pword | | | | |
| Miscellaneous | | | | |
| ios_base::register_callback | | | | |
| ios_base::sync_with_stdio | | | | |
| Member classes | | | | |
| ****ios_base::failure**** | | | | |
| ios_base::Init | | | | |
| Member types | | | | |
| ios_base::openmode | | | | |
| ios_base::fmtflags | | | | |
| ios_base::iostate | | | | |
| ios_base::seekdir | | | | |
| ios_base::event | | | | |
| ios_base::event_callback | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<ios>` |  |  |
| class failure; |  |  |
|  |  |  |

The class `std::ios_base::failure` defines an exception object that is thrown on failure by the functions in the Input/Output library.

|  |  |
| --- | --- |
| `std::ios_base::failure` may be defined either as a member class of std::ios_base or as a synonym (typedef) for another class with equivalent functionality. | (since C++17) |

|  |  |
| --- | --- |
| std-ios base-failure-2003-inheritance.svg Inheritance diagram | (until C++11) |
| std-ios base-failure-inheritance.svg Inheritance diagram | (since C++11) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a new `failure` object with the given message   (public member function) |
| operator= | replaces the `failure` object   (public member function) |
| what | returns the explanatory string   (public member function) |

## std::ios_base::failure::failure

|  |  |  |
| --- | --- | --- |
|  | (1) |  |
| explicit failure( const std::string& message ); |  | (until C++11) |
| explicit failure( const std::string& message,                     const std::error_code& ec = std::io_errc::stream ); |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
| explicit failure( const char\* message,                    const std::error_code& ec = std::io_errc::stream ); | (2) | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  | (3) |  |
| failure( const failure& other ); |  | (until C++11) |
| failure( const failure& other ) noexcept; |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

1,2) Constructs the exception object using message as explanation string which can later be retrieved using what(). ec is used to identify the specific reason for the failure.(since C++11)3) Copy constructor. Initialize the contents with those of other. If \*this and other both have dynamic type `std::ios_base::failure` then std::strcmp(what(), other.what()) == 0.(since C++11)

### Parameters

|  |  |  |
| --- | --- | --- |
| message | - | explanatory string |
| ec | - | error code to identify the specific reason for the failure |
| other | - | another `failure` to copy |

### Notes

Because copying `std::ios_base::failure` is not permitted to throw exceptions, this message is typically stored internally as a separately-allocated reference-counted string. This is also why there is no constructor taking std::string&&: it would have to copy the content anyway.

## std::ios_base::failure::operator=

|  |  |  |
| --- | --- | --- |
| failure& operator=( const failure& other ); |  | (until C++11) |
| failure& operator=( const failure& other ) noexcept; |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Assigns the contents with those of other. If \*this and other both have dynamic type `std::ios_base::failure` then std::strcmp(what(), other.what()) == 0 after assignment.(since C++11)

### Parameters

|  |  |  |
| --- | --- | --- |
| other | - | another exception object to assign with |

### Return value

\*this

## std::ios_base::failure::what

|  |  |  |
| --- | --- | --- |
| virtual const char\* what() const throw(); |  | (until C++11) |
| virtual const char\* what() const noexcept; |  | (since C++11) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Returns the explanatory string.

### Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a std::wstring. The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called.

|  |  |
| --- | --- |
| The returned string is encoded with the ordinary literal encoding during constant evaluation. | (since C++26) |

### Notes

Implementations are allowed but not required to override `what()`.

## Inherited from std::system_error

### Member functions

|  |  |
| --- | --- |
| code | returns error code   (public member function of `std::system_error`) |
| what[virtual] | returns an explanatory string   (virtual public member function of `std::system_error`) |

## Inherited from std::runtime_error

## Inherited from std::exception

### Member functions

|  |  |
| --- | --- |
| (destructor)[virtual] | destroys the exception object   (virtual public member function of `std::exception`) |
| what[virtual] | returns an explanatory string   (virtual public member function of `std::exception`) |

### Notes

Before the resolution of LWG issue 331, `std::ios_base::failure` declared a destructor without throw(), where std::exception::~exception() was declared with throw()[[1]](failure.html#cite_note-1). This means the `std::ios_base::failure::~failure()` had a weaker exception specification. The resolution is to remove that declaration so that the non-throwing exception specification is kept.

LWG issue 363 targets the same defect and its resolution is to add throw() to the declaration of `std::ios_base::failure::~failure()`. That resolution was not applied due to the conflict between the two resolutions.

1. ↑ The non-throwing exception specification is now applied globally across the standard library, so the destructors of standard library classes are not declared with throw() or noexcept.

### Example

Run this code

```
#include <fstream>
#include <iostream>
 
int main()
{
    std::ifstream f("doesn't exist");
 
    try
    {
        f.exceptions(f.failbit);
    }
    catch (const std::ios_base::failure& e)
    {
        std::cout << "Caught an ios_base::failure.\n"
                  << "Explanatory string: " << e.what() << '\n'
                  << "Error code: " << e.code() << '\n';
    }
}

```

Possible output:

```
Caught an ios_base::failure.
Explanatory string: ios_base::clear: unspecified iostream_category error
Error code: iostream:1

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 48 | C++98 | the constructor overload (1) initialized the base class std::exception with msg, but the base class does not have a matching constructor | corresponding description removed |
| LWG 331 | C++98 | `std::ios_base::failure` declared a destructor without throw() | removed the destructor declaration |

### See also

|  |  |
| --- | --- |
| io_errc(C++11) | the IO stream error codes   (enum) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base/failure&oldid=177686>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 18 November 2024, at 07:57.