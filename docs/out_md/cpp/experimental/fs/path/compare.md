# std::experimental::filesystem::path::compare

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::path | | | | | | path::~path | | | | | | path::operator= | | | | | | path::assign | | | | | | path::appendoperator /= | | | | | | path::concatoperator += | | | | | | path::clear | | | | | | path::make_preferred | | | | | | path::remove_filename | | | | | | path::replace_filename | | | | | | path::replace_extension | | | | | | path::swap | | | | | | ****path::compare**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::c_strpath::nativeoperator string_type | | | | | | path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring | | | | | | path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring | | | | | | path::beginpath::end | | | | | |
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
| int compare( const path& p ) const noexcept; | (1) | (filesystem TS) |
| int compare( const string_type& str ) const; | (2) | (filesystem TS) |
| int compare( const value_type\* s ) const; | (3) | (filesystem TS) |
|  |  |  |

Compares the lexical representations of the path and another path.

1) Returns a value less than, equal to or greater than 0 if the native representation of the path (native()) is respectively lexicographically less than, equal to or greater than the native representation of p (p.native()). Comparison is performed element-wise, as if by iterating both paths from begin() to end().2) Equivalent to compare(path(str)).3) Equivalent to compare(path(s)).

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | a path to compare to |
| str | - | a string representing path to compare to |
| s | - | a null-terminated string representing path to compare to |

### Return value

A value less than 0 if the path is lexicographically less than the given path.

A value equal to 0 if the path is lexicographically equal to the given path.

A value greater than 0 if the path is lexicographically greater than the given path.

### Exceptions

2,3) May throw implementation-defined exceptions.

### Notes

For two-way comparisons, binary operators may be more suitable.

### Example

Run this code

```
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
 
void demo(int rc, fs::path p1, fs::path p2)
{
    if (rc < 0)
        std::cout << p1 << " < " << p2 << '\n';
    else if (rc > 0)
        std::cout << p1 << " > " << p2 << '\n';
    else if (rc == 0)
        std::cout << p1 << " = " << p2 << '\n';
}
 
int main()
{
    fs::path p1 = "/a/b/"; // as if "a/b/." for lexicographical iteration
    fs::path p2 = "/a/b/#";
    demo(p1.compare(p2), p1, p2);
    demo(p1.compare("a/b/_"), p1, "a/b/_");
}

```

Output:

```
"/a/b/" > "/a/b/#"
"/a/b/" < "a/b/_"

```

### See also

|  |  |
| --- | --- |
| operator==operator!=operator<operator<=operator>operator>= | lexicographically compares two paths   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/path/compare&oldid=157721>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 1 September 2023, at 23:41.