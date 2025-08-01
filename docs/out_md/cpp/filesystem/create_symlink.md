# std::filesystem::create_symlink, std::filesystem::create_directory_symlink

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | ****filesystem::create_symlink filesystem::create_directory_symlink**** | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| void create_symlink( const std::filesystem::path& target,                       const std::filesystem::path& link ); | (1) | (since C++17) |
| void create_symlink( const std::filesystem::path& target,  const std::filesystem::path& link, std::error_code& ec ) noexcept; | (2) | (since C++17) |
| void create_directory_symlink( const std::filesystem::path& target,                                 const std::filesystem::path& link ); | (3) | (since C++17) |
| void create_directory_symlink( const std::filesystem::path& target,  const std::filesystem::path& link, std::error_code& ec ) noexcept; | (4) | (since C++17) |
|  |  |  |

Creates a symbolic link link with its target set to target as if by POSIX `symlink()`: the pathname target may be invalid or non-existing.

Some operating systems require symlink creation to identify that the link is to a directory. Portable code should use (3,4) to create directory symlinks rather than (1,2), even though there is no distinction on POSIX systems.

### Parameters

|  |  |  |
| --- | --- | --- |
| target | - | path to point the symlink to, does not have to exist |
| link | - | path of the new symbolic link |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

(none)

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1,3) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with target as the first path argument, link as the second path argument, and the OS error code as the error code argument.2,4) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

Some operating systems do not support symbolic links at all or support them only for regular files.

Some file systems do not support symbolic links regardless of the operating system, for example the FAT system used on some memory cards and flash drives.

Like a hard link, a symbolic link allows a file to have multiple logical names. The presence of a hard link guarantees the existence of a file, even after the original name has been removed. A symbolic link provides no such assurance; in fact, the file named by the target argument need not exist when the link is created. A symbolic link can cross file system boundaries.

### Example

Run this code

```
#include <cassert>
#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
 
int main()
{
    fs::create_directories("sandbox/subdir");
    fs::create_symlink("target", "sandbox/sym1");
    fs::create_directory_symlink("subdir", "sandbox/sym2");
 
    for (auto it = fs::directory_iterator("sandbox"); it != fs::directory_iterator(); ++it)
        if (is_symlink(it->symlink_status()))
            std::cout << *it << "->" << read_symlink(*it) << '\n';
 
    assert(std::filesystem::equivalent("sandbox/sym2", "sandbox/subdir"));
    fs::remove_all("sandbox");
}

```

Possible output:

```
"sandbox/sym1"->"target"
"sandbox/sym2"->"subdir"

```

### See also

|  |  |
| --- | --- |
| statussymlink_status(C++17)(C++17) | determines file attributes determines file attributes, checking the symlink target   (function) |
| read_symlink(C++17) | obtains the target of a symbolic link   (function) |
| create_hard_link(C++17) | creates a hard link   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/create_symlink&oldid=157956>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 September 2023, at 10:44.