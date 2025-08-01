# std::filesystem::create_hard_link

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | ****filesystem::create_hard_link**** | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| void create_hard_link( const std::filesystem::path& target,                         const std::filesystem::path& link ); | (1) | (since C++17) |
| void create_hard_link( const std::filesystem::path& target,  const std::filesystem::path& link, std::error_code& ec ) noexcept; | (2) | (since C++17) |
|  |  |  |

Creates a hard link link with its target set to target as if by POSIX `link()`: the pathname target must exist.

Once created, link and target are two logical names that refer to the same file (they are equivalent). Even if the original name target is deleted, the file continues to exist and is accessible as link.

### Parameters

|  |  |  |
| --- | --- | --- |
| target | - | path of the file or directory to link to |
| link | - | path of the new hard link |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

(none)

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with target as the first path argument, link as the second path argument, and the OS error code as the error code argument.2) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

Some operating systems do not support hard links at all or support them only for regular files.

Some file systems do not support hard links regardless of the operating system: the FAT file system used on memory cards and flash drives, for example.

Some file systems limit the number of links per file.

Hardlinking to directories is typically restricted to the superuser.

Hard links typically cannot cross filesystem boundaries.

The special pathname dot (".") is a hard link to its parent directory. The special pathname dot-dot ".." is a hard link to the directory that is the parent of its parent.

### Example

Run this code

```
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
 
int main()
{
    fs::create_directories("sandbox/subdir");
    std::ofstream("sandbox/a").put('a'); // create regular file
    fs::create_hard_link("sandbox/a", "sandbox/b");
    fs::remove("sandbox/a");
    // read from the original file via surviving hard link
    char c = std::ifstream("sandbox/b").get();
    std::cout << c << '\n';
    fs::remove_all("sandbox");
}

```

Output:

```
a

```

### See also

|  |  |
| --- | --- |
| create_symlinkcreate_directory_symlink(C++17)(C++17) | creates a symbolic link   (function) |
| hard_link_count(C++17) | returns the number of hard links referring to the specific file   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/create_hard_link&oldid=157949>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 September 2023, at 10:18.