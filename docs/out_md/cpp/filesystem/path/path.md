# std::filesystem::path::path

From cppreference.com
< cpp‎ | filesystem‎ | path
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

Filesystem library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::path | | | | | | filesystem::filesystem_error | | | | | | filesystem::directory_entry | | | | | | filesystem::directory_iterator | | | | | | filesystem::recursive_directory_iterator | | | | | | filesystem::file_status | | | | | | filesystem::space_info | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_type | | | | | | filesystem::file_time_type | | | | | | filesystem::perms | | | | | | filesystem::perm_options | | | | | | filesystem::copy_options | | | | | | filesystem::directory_options | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

std::filesystem::path

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member constants | | | | |
| path::native_formatpath::generic_formatpath::auto_format | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****path::path**** | | | | | | path::~path | | | | | | path::operator= | | | | | | path::assign | | | | | | path::appendpath::operator/= | | | | | | path::concatpath::operator+= | | | | | | path::clear | | | | | | path::make_preferred | | | | | | path::remove_filename | | | | | | path::replace_filename | | | | | | path::replace_extension | | | | | | path::swap | | | | | | path::compare | | | | | | path::beginpath::end | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::c_strpath::nativepath::operator string_type | | | | | | path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring | | | | | | path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring | | | | | | path::lexically_normalpath::lexically_relativepath::lexically_proximate | | | | | |  | | | | | |
| Path decomposition | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::root_name | | | | | | path::root_directory | | | | | | path::root_path | | | | | | path::relative_path | | | | | | path::parent_path | | | | | | path::filename | | | | | | path::stem | | | | | | path::extension | | | | | | path::empty | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::has_root_pathpath::has_root_namepath::has_root_directorypath::has_relative_pathpath::has_parent_pathpath::has_filenamepath::has_stempath::has_extension | | | | | | path::is_absolutepath::is_relative | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator/ | | | | | | operator<<operator>> | | | | | | swap(std::filesystem::path) | | | | | | hash_value | | | | | | u8path | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | hash<std::filesystem::path> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | formatter<std::filesystem::path>(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| path() noexcept; | (1) | (since C++17) |
| path( const path& p ); | (2) | (since C++17) |
| path( path&& p ) noexcept; | (3) | (since C++17) |
| path( string_type&& source, format fmt = auto_format ); | (4) | (since C++17) |
| template< class Source >  path( const Source& source, format fmt = auto_format ); | (5) | (since C++17) |
| template< class InputIt >  path( InputIt first, InputIt last, format fmt = auto_format ); | (6) | (since C++17) |
| template< class Source >  path( const Source& source, const std::locale& loc, format fmt = auto_format ); | (7) | (since C++17) |
| template< class InputIt >  path( InputIt first, InputIt last, const std::locale& loc, format fmt = auto_format ); | (8) | (since C++17) |
|  |  |  |

Constructs a new `path` object.

1) Constructs an empty path.2) Copy constructor. Constructs a path whose pathname, in both native and generic formats, is the same as that of p.3) Move constructor. Constructs a path whose pathname, in both native and generic formats, is the same as that of p, p is left in valid but unspecified state.4-6) Constructs the path from a character sequence (format interpreted as specified by fmt) provided by source (4,5), which is a pointer or an input iterator to a null-terminated character/wide character sequence, an std::basic_string or an std::basic_string_view, or represented as a pair of input iterators first, last) (6). Any of the character types char, char8_t, (since C++20)char16_t, char32_t, wchar_t is allowed, and the method of conversion to the native character set depends on the character type used by source.

:   - If the source character type is char, the encoding of the source is assumed to be the native narrow encoding (so no conversion takes place on POSIX systems).

|  |  |
| --- | --- |
| - If the source character type is char8_t, conversion from UTF-8 to native filesystem encoding is used. | (since C++20) |

:   - If the source character type is char16_t, conversion from UTF-16 to native filesystem encoding is used.
    - If the source character type is char32_t, conversion from UTF-32 to native filesystem encoding is used.
    - If the source character type is wchar_t, the input is assumed to be the native wide encoding (so no conversion takes places on Windows).

7,8) Constructs the path from a character sequence (format interpreted as specified by fmt) provided by source (7), which is a pointer or an input iterator to a null-terminated character sequence, an [std::string, an std::string_view, or represented as a pair of input iterators first, last) (8). The only character type allowed is char. Uses loc to perform the character encoding conversion. If `value_type` is wchar_t, converts from to wide using the [std::codecvt<wchar_t, char, std::mbstate_t> facet of loc. Otherwise, first converts to wide using the std::codecvt<wchar_t, char, std::mbstate_t> facet and then converts to filesystem native character type using std::codecvt<wchar_t,value_type> facet of loc.

(5) and (7) participate in overload resolution only if `Source` and `path` are not the same type, and either:

- `Source` is a specialization of std::basic_string or std::basic_string_view, or
- std::iterator_traits<std::decay_t<Source>>::value_type is valid and denotes a possibly const-qualified encoding character type (char, char8_t, (since C++20)char16_t, char32_t, or wchar_t).

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | a path to copy |
| source | - | std::basic_string, std::basic_string_view, pointer to a null-terminated character string, or input iterator with a character value type that points to a null-terminated character sequence (the character type must be char for overload (7)) |
| first, last | - | pair of LegacyInputIterators that specify a character sequence |
| fmt | - | enumerator of type path::format which specifies how pathname format is to be interpreted |
| loc | - | locale that defines encoding conversion to use |
| Type requirements | | |
| -`InputIt` must meet the requirements of LegacyInputIterator. | | |
| -The value type of `InputIt` must be one of the character types char, wchar_t, char8_t, (since C++20)char16_t and char32_t to use the overload (6). | | |
| -The value type of `InputIt` must be char to use the overload (8). | | |

### Exceptions

2,4-8) May throw implementation-defined exceptions.

### Notes

|  |  |
| --- | --- |
| For portable pathname generation from Unicode strings, see `u8path`. | (until C++20) |
| `path` constructor supports creation from UTF-8 string when the source is a sequence of char8_t. | (since C++20) |

### Example

Run this code

```
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
 
int main()
{
    fs::path p1 = "/usr/lib/sendmail.cf"; // portable format
    fs::path p2 = "C:\\users\\abcdef\\AppData\\Local\\Temp\\"; // native format
    fs::path p3 = U"D:/猫.txt"; // UTF-32 string
    fs::path p4 = u8"~/狗.txt"; // UTF-8 string
 
    std::cout << "p1 = " << p1 << '\n'
              << "p2 = " << p2 << '\n'
              << "p3 = " << p3 << '\n'
              << "p4 = " << p4 << '\n';
}

```

Output:

```
p1 = "/usr/lib/sendmail.cf"
p2 = "C:\\users\\abcdef\\AppData\\Local\\Temp\\"
p3 = "D:/猫.txt"
p4 = "~/狗.txt"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3244 | C++17 | constraint that `Source` cannot be `path` was missing | added |

### See also

|  |  |
| --- | --- |
| u8path(C++17)(deprecated in C++20) | creates a `path` from a UTF-8 encoded source   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/path/path&oldid=160182>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 5 October 2023, at 02:04.