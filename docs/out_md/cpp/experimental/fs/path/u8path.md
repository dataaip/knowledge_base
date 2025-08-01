# std::experimental::filesystem::u8path

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::path | | | | | | path::~path | | | | | | path::operator= | | | | | | path::assign | | | | | | path::appendoperator /= | | | | | | path::concatoperator += | | | | | | path::clear | | | | | | path::make_preferred | | | | | | path::remove_filename | | | | | | path::replace_filename | | | | | | path::replace_extension | | | | | | path::swap | | | | | | path::compare | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::c_strpath::nativeoperator string_type | | | | | | path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring | | | | | | path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring | | | | | | path::beginpath::end | | | | | |
| Path decomposition | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::root_name | | | | | | path::root_directory | | | | | | path::root_path | | | | | | path::relative_path | | | | | | path::parent_path | | | | | | path::filename | | | | | | path::stem | | | | | | path::extension | | | | | | path::empty | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::has_root_pathpath::has_root_namepath::has_root_directorypath::has_relative_pathpath::has_parent_pathpath::has_filenamepath::has_stempath::has_extension | | | | | | path::is_absolutepath::is_relative | | | | | |
| Non-member functions | | | | |
| swap(path) | | | | |
| operator==operator!=operator<operator<=operator>operator>= | | | | |
| operator/ | | | | |
| operator<<operator>> | | | | |
| ****u8path**** | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/filesystem>` |  |  |
| template< class Source >  path u8path( const Source& source ); | (1) | (filesystem TS) |
| template< class InputIt >  path u8path( InputIt first, InputIt last ); | (2) | (filesystem TS) |
|  |  |  |

Constructs a path `p` from a UTF-8 encoded sequence of chars, supplied either as an std::string, or as a null-terminated multibyte string, or as a first, last) iterator pair.

- If `path::value_type` is char and native encoding is UTF-8, constructs a path directly as if by path(source) or path(first, last). Note: this is the typical situation of a POSIX system that uses Unicode, such as Linux.
- Otherwise, if `path::value_type` is wchar_t and native encoding is UTF-16 (this is the situation on Windows), or if `path::value_type` is char16_t (native encoding guaranteed UTF-16) or char32_t (native encoding guaranteed UTF-32), then first converts the UTF-8 character sequence to a temporary string `tmp` of type `path::string_type` and then the new path is constructed as if by path(tmp).
- Otherwise (for non-UTF-8 narrow character encodings and for non-UTF-16 wchar_t), first converts the UTF-8 character sequence to a temporary UTF-32-encoded string `tmp` of type [std::u32string, and then the new path is constructed as if by path(tmp) (this path is taken on a POSIX system with a non-Unicode multibyte or single-byte encoded filesystem).

### Parameters

|  |  |  |
| --- | --- | --- |
| source | - | a UTF-8 encoded std::string, pointer to a null-terminated multibyte string, or an input iterator with char value type that points to a null-terminated multibyte string |
| first, last | - | pair of LegacyInputIterators that specify a UTF-8 encoded character sequence |
| Type requirements | | |
| -`InputIt` must meet the requirements of LegacyInputIterator. | | |
| -The value type of `InputIt` must be char. | | |

### Return value

The path constructed from the input string after conversion from UTF-8 to the filesystem's native character encoding.

### Exceptions

May throw filesystem_error on underlying OS API errors or std::bad_alloc if memory allocation fails.

### Notes

On systems where native path format differs from the generic path format (neither Windows nor POSIX systems are examples of such OSes), if the argument to this function is using generic format, it will be converted to native.

### Example

Run this code

```
#include <clocale>
#include <cstdio>
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;
 
int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::locale::global(std::locale("en_US.utf8"));
 
    fs::path p = fs::u8path(u8"要らない.txt");
 
    // native string representation can be used with OS APIs
    std::ofstream(p) << "File contents"; // this uses operator string()
    if (std::FILE* f = std::fopen(p.c_str(), "r"))
    {
        int ch;
        while ((ch=fgetc(f))!= EOF) putchar(ch);
        std::fclose(f);
    }
 
    // multibyte and wide representation can be used for output
    std::cout.imbue(std::locale());
    std::cout << "\nFile name in narrow multibyte encoding: "
              << p.string() << '\n';
 
    std::wcerr.imbue(std::locale());
    std::wcerr << "File name in wide encoding: "
               << p.wstring() << '\n';
 
    fs::remove(p);
}

```

Possible output:

```
File contents
File name in narrow multibyte encoding: 要らない.txt
File name in wide encoding: 要らない.txt

```

### See also

|  |  |
| --- | --- |
| path | represents a path   (class) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/path/u8path&oldid=154892>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 July 2023, at 06:32.