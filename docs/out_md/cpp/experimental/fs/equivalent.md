# std::experimental::filesystem::equivalent

From cppreference.com
< cpp‎ | experimental‎ | fs
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute filesystem::system_complete | | | | | | filesystem::canonical | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::exists | | | | | | ****filesystem::equivalent**** | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | | filesystem::temp_directory_path | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/filesystem>` |  |  |
| bool equivalent( const path& p1, const path& p2 );  bool equivalent( const path& p1, const path& p2, error_code& ec ); | (1) | (filesystem TS) |
|  |  |  |

Checks whether the paths p1 and p2 refer to the same file or directory and have the same file status as determined by status (symlinks are followed).

If p1 or p2 does not exist or if their file type is not file, directory, or symlink (as determined by is_other), an error is reported.

The non-throwing overload returns false on errors.

### Parameters

|  |  |  |
| --- | --- | --- |
| p1, p2 | - | paths to check for equivalence |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

true if the p1 and p2 refer to the same file or directory and their file status is the same. false otherwise.

### Exceptions

The overload that does not take an error_code& parameter throws filesystem_error on underlying OS API errors, constructed with p1 as the first argument, p2 as the second argument, and the OS error code as the error code argument. std::bad_alloc may be thrown if memory allocation fails. The overload taking an error_code& parameter sets it to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur. This overload hasnoexcept specification:noexcept

### Notes

Two paths are considered to resolve to the same file system entity if `st_dev` and `st_ino` of their POSIX stat structure, obtained as if by POSIX stat, are equal (meaning, the files are located on the same device at the same location).

In particular, all hard links for the same file or directory are equivalent, and a symlink and its target on the same file system are equivalent.

### Example

Run this code

```
#include <cstdint>
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;
 
int main()
{
    // hard link equivalency
    fs::path p1 = ".";
    fs::path p2 = fs::current_path();
    if (fs::equivalent(p1, p2))
        std::cout << p1 << " is equivalent to " << p2 << '\n';
 
    // symlink equivalency
    fs::path p3 = "/lib/libc.so.6";
    fs::path p4 = p3.parent_path() / fs::read_symlink(p3);
    if (fs::equivalent(p3, p4))
        std::cout << p3 << " is equivalent to " << p4 << '\n';
}

```

Possible output:

```
"." is equivalent to "/var/tmp/test"
"/lib/libc.so.6" is equivalent to "/lib/libc-2.12.so"

```

### See also

|  |  |
| --- | --- |
| statussymlink_status | determines file attributes determines file attributes, checking the symlink target   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/equivalent&oldid=158744>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 11 September 2023, at 01:01.