# std::experimental::filesystem::path::concat, std::experimental::filesystem::path::operator+=

From cppreference.com
< cpp‎ | experimental‎ | fs‎ | path
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

Filesystem library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::path | | | | | | filesystem::filesystem_error | | | | | | filesystem::directory_entry | | | | | | filesystem::directory_iterator | | | | | | filesystem::recursive_directory_iterator | | | | | | filesystem::file_status | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::space_info | | | | | | filesystem::file_type | | | | | | filesystem::perms | | | | | | filesystem::copy_options | | | | | | filesystem::directory_options | | | | | | filesystem::file_time_type | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute filesystem::system_complete | | | | | | filesystem::canonical | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | | filesystem::temp_directory_path | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

path

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::path | | | | | | path::~path | | | | | | path::operator= | | | | | | path::assign | | | | | | path::appendoperator /= | | | | | | ****path::concatoperator +=**** | | | | | | path::clear | | | | | | path::make_preferred | | | | | | path::remove_filename | | | | | | path::replace_filename | | | | | | path::replace_extension | | | | | | path::swap | | | | | | path::compare | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::c_strpath::nativeoperator string_type | | | | | | path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring | | | | | | path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring | | | | | | path::beginpath::end | | | | | |
| Path decomposition | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::root_name | | | | | | path::root_directory | | | | | | path::root_path | | | | | | path::relative_path | | | | | | path::parent_path | | | | | | path::filename | | | | | | path::stem | | | | | | path::extension | | | | | | path::empty | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::has_root_pathpath::has_root_namepath::has_root_directorypath::has_relative_pathpath::has_parent_pathpath::has_filenamepath::has_stempath::has_extension | | | | | | path::is_absolutepath::is_relative | | | | | |
| Non-member functions | | | | |
| swap(path) | | | | |
| operator==operator!=operator<operator<=operator>operator>= | | | | |
| operator/ | | | | |
| operator<<operator>> | | | | |
| u8path | | | | |

|  |  |  |
| --- | --- | --- |
| path& operator+=( const path& p ); | (1) | (filesystem TS) |
| path& operator+=( const string_type& str ); | (2) | (filesystem TS) |
| path& operator+=( const value_type\* ptr ); | (3) | (filesystem TS) |
| path& operator+=( value_type x ); | (4) | (filesystem TS) |
| template< class Source >  path& operator+=( const Source& source ); | (5) | (filesystem TS) |
| template< class CharT >  path& operator+=( CharT x ); | (6) | (filesystem TS) |
| template< class Source >  path& concat( const Source& source ); | (7) | (filesystem TS) |
| template< class InputIt >  path& concat( InputIterator first, InputIterator last ); | (8) | (filesystem TS) |
|  |  |  |

Concatenates the current path and the argument.

1) Concatenates \*this and p in such a way that native() of the result is exactly original native() concatenated with p.native().2) Same as (1), except the resulting native() is a concatenation of the original native() and the string str.3) Same as (1), except the resulting native() is a concatenation of the original native() and the null-terminated string whose first character is pointed to by ptr.4) Same as (1), except the resulting native() is a concatenation of the original native() and the single character x.5) Same as (1), except the resulting native() is a concatenation of the original native() and the sequence (which may be in portable or native format) represented by source, which may be std::basic_string, null-terminated multicharacter string, or an input iterator pointing to a null-terminated multicharacter sequence.6) Same as (4), except that character conversion may be performed.7) Same as (5).8) Same as (5), except that the sequence is represented by any iterator pair that designates a multicharacter string.

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | path to append |
| str | - | string to append |
| ptr | - | pointer to the beginning of a null-terminated string to append |
| x | - | single character to append |
| source | - | std::basic_string, null-terminated multicharacter string, or an input iterator pointing to a null-terminated multicharacter sequence, which represents a path name (either in portable or in native format) |
| first, last | - | pair of LegacyInputIterators that specify a multicharacter sequence that represents a path name |
| Type requirements | | |
| -`InputIt` must meet the requirements of LegacyInputIterator. | | |
| -The value type of `InputIt` must be one of the encoded character types (char, wchar_t, char16_t and char32_t). | | |
| -`CharT` must be one of the encoded character types (char, wchar_t, char16_t and char32_t). | | |

### Return value

\*this

### Exceptions

May throw filesystem_error on underlying OS API errors or std::bad_alloc if memory allocation fails.

### Notes

Unlike with append() or operator/=, additional directory separators are never introduced.

### Example

Run this code

```
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
 
int main()
{
    fs::path p1; // empty path
    p1 += "var"; // does not insert a separator
    std::cout << "\"\" + \"var\" == " << p1 << '\n';
    p1 += "lib"; // does not insert a separator
    std::cout << "\"\" + \"var\" + \"lib\" == " << p1 << '\n';
}

```

Output:

```
"" + "var" == "var"
"" + "var" + "lib" == "varlib"

```

### See also

|  |  |
| --- | --- |
| appendoperator/= | appends elements to the path   (public member function) |
| operator/ | concatenates two paths with a directory separator   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/path/concat&oldid=154865>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 July 2023, at 03:40.