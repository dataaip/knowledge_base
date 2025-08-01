# std::filesystem::canonical, std::filesystem::weakly_canonical

From cppreference.com
< cpp‎ | filesystem
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | ****filesystem::canonicalfilesystem::weakly_canonical**** | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| path canonical( const std::filesystem::path& p ); | (1) | (since C++17) |
| path canonical( const std::filesystem::path& p,                  std::error_code& ec ); | (2) | (since C++17) |
| path weakly_canonical( const std::filesystem::path& p ); | (3) | (since C++17) |
| path weakly_canonical( const std::filesystem::path& p,                         std::error_code& ec ); | (4) | (since C++17) |
|  |  |  |

1,2) Converts path p to a canonical absolute path, i.e. an absolute path that has no dot, dot-dot elements or symbolic links in its generic format representation. If p is not an absolute path, the function behaves as if it is first made absolute by std::filesystem::absolute(p). The path p must exist.3,4) Returns a path composed by operator/= from the result of calling `canonical()` with a path argument composed of the leading elements of p that exist (as determined by status(p) or status(p, ec)), if any, followed by the elements of p that do not exist. The resulting path is in normal form.

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | a path which may be absolute or relative; for `canonical` it must be an existing path |
| ec | - | error code to store error status to |

### Return value

1,2) An absolute path that resolves to the same file as std::filesystem::absolute(p).3,4) A normal path of the form canonical(x)/y, where x is a path composed of the longest leading sequence of elements in p that exist, and y is a path composed of the remaining trailing non-existent elements of p.

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1,3) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.2,4) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

The function `canonical()` is modeled after the POSIX `realpath`.

The function `weakly_canonical()` was introduced to simplify operational semantics of `relative()`.

### Example

Run this code

```
#include <filesystem>
#include <iostream>
 
int main()
{
    /* set up sandbox directories:
     a
     └── b
         ├── c1
         │   └── d <== current path
         └── c2
             └── e
    */
    auto old = std::filesystem::current_path();
    auto tmp = std::filesystem::temp_directory_path();
    std::filesystem::current_path(tmp);
    auto d1 = tmp / "a/b/c1/d";
    auto d2 = tmp / "a/b/c2/e";
    std::filesystem::create_directories(d1);
    std::filesystem::create_directories(d2);
    std::filesystem::current_path(d1);
 
    auto p1 = std::filesystem::path("../../c2/./e");
    auto p2 = std::filesystem::path("../no-such-file");
    std::cout << "Current path is "
              << std::filesystem::current_path() << '\n'
              << "Canonical path for " << p1 << " is "
              << std::filesystem::canonical(p1) << '\n'
              << "Weakly canonical path for " << p2 << " is "
              << std::filesystem::weakly_canonical(p2) << '\n';
    try
    {
        [[maybe_unused]] auto x_x = std::filesystem::canonical(p2);
        // NOT REACHED
    }
    catch (const std::exception& ex)
    {
        std::cout << "Canonical path for " << p2 << " threw exception:\n"
                  << ex.what() << '\n';
    }
 
    // cleanup
    std::filesystem::current_path(old);
    const auto count = std::filesystem::remove_all(tmp / "a");
    std::cout << "Deleted " << count << " files or directories.\n";
}

```

Possible output:

```
Current path is "/tmp/a/b/c1/d"
Canonical path for "../../c2/./e" is "/tmp/a/b/c2/e"
Weakly canonical path for "../no-such-file" is "/tmp/a/b/c1/no-such-file"
Canonical path for "../no-such-file" threw exception:
filesystem error: in canonical: No such file or directory [../no-such-file] [/tmp/a/b/c1/d]
Deleted 6 files or directories.

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2956 | C++17 | `canonical` has a spurious `base` parameter | removed |

### See also

|  |  |
| --- | --- |
| path(C++17) | represents a path   (class) |
| absolute(C++17) | composes an absolute path   (function) |
| relativeproximate(C++17) | composes a relative path   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/canonical&oldid=157935>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 September 2023, at 08:28.