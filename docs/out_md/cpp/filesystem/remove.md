# std::filesystem::remove, std::filesystem::remove_all

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | ****filesystem::remove filesystem::remove_all**** | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| bool remove( const std::filesystem::path& p ); | (1) | (since C++17) |
| bool remove( const std::filesystem::path& p, std::error_code& ec ) noexcept; | (2) | (since C++17) |
| std::uintmax_t remove_all( const std::filesystem::path& p ); | (3) | (since C++17) |
| std::uintmax_t remove_all( const std::filesystem::path& p, std::error_code& ec ); | (4) | (since C++17) |
|  |  |  |

1,2) The file or empty directory identified by the path p is deleted as if by the POSIX `remove`. Symlinks are not followed (symlink is removed, not its target).3,4) Deletes the contents of p (if it is a directory) and the contents of all its subdirectories, recursively, then deletes p itself as if by repeatedly applying the POSIX `remove`. Symlinks are not followed (symlink is removed, not its target).

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | path to delete |
| ec | - | out-parameter for error reporting in the non-throwing overload. |

### Return value

1,2) true if the file was deleted, false if it did not exist. The overload that takes `error_code&` argument returns false on errors.3,4) Returns the number of files and directories that were deleted (which may be zero if p did not exist to begin with). The overload that takes `error_code&` argument returns static_cast<std::uintmax_t>(-1) on error.

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1,3) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.2,4) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

On POSIX systems, this function typically calls `unlink` and `rmdir` as needed, on Windows `DeleteFileW` and `RemoveDirectoryW`.

If p did not exist, this function returns false and does not report an error.

### Example

Run this code

```
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
 
int main()
{
    namespace fs = std::filesystem;
    std::cout << std::boolalpha;
 
    fs::path tmp{std::filesystem::temp_directory_path()};
 
    const auto O_O{"O_O"};
    std::ofstream{tmp / O_O} << O_O; // creates file containing O_O
    std::cout << "remove(): " << fs::remove(tmp / O_O) << '\n'; // success
    std::cout << "remove(): " << fs::remove(tmp / O_O) << '\n'; // fail
 
    std::filesystem::create_directories(tmp / "abcdef/example");
    const std::uintmax_t n{fs::remove_all(tmp / "abcdef")};
    std::cout << "remove_all(): " << n << " files or directories\n";
}

```

Possible output:

```
remove(): true
remove(): false
remove_all(): 2 files or directories

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3014 | C++17 | `error_code` overload of `remove_all` marked noexcept but can allocate memory | noexcept removed |

### See also

|  |  |
| --- | --- |
| remove | erases a file   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/remove&oldid=178128>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 3 December 2024, at 18:32.