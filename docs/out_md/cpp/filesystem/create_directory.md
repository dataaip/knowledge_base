# std::filesystem::create_directory, std::filesystem::create_directories

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | ****filesystem::create_directory filesystem::create_directories**** | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| bool create_directory( const std::filesystem::path& p ); | (1) | (since C++17) |
| bool create_directory( const std::filesystem::path& p, std::error_code& ec ) noexcept; | (2) | (since C++17) |
| bool create_directory( const std::filesystem::path& p,                         const std::filesystem::path& existing_p ); | (3) | (since C++17) |
| bool create_directory( const std::filesystem::path& p,  const std::filesystem::path& existing_p, std::error_code& ec ) noexcept; | (4) | (since C++17) |
| bool create_directories( const std::filesystem::path& p ); | (5) | (since C++17) |
| bool create_directories( const std::filesystem::path& p, std::error_code& ec ); | (6) | (since C++17) |
|  |  |  |

1,2) Creates the directory p as if by POSIX `mkdir()` with a second argument of static_cast<int>(std::filesystem::perms::all) (the parent directory must already exist). If the function fails because p resolves to an existing directory, no error is reported. Otherwise on failure an error is reported.3,4) Same as (1,2), except that the attributes of the new directory are copied from existing_p (which must be a directory that exists). It is OS-dependent which attributes are copied: on POSIX systems, the attributes are copied as if by

```
stat(existing_p.c_str(), &attributes_stat)
mkdir(p.c_str(), attributes_stat.st_mode)

```

On Windows OS, no attributes of existing_p are copied.5,6) Executes (1,2) for every element of p that does not already exist. If p already exists, the function does nothing (this condition is not treated as an error).

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | the path to the new directory to create |
| existing_p | - | the path to a directory to copy the attributes from |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

true if a directory was newly created for the directory p resolves to, false otherwise.

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1,5) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.2,6) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.3) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument, existing_p as the second path argument, and the OS error code as the error code argument.4) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

The attribute-preserving overload (3,4) is implicitly invoked by copy() when recursively copying directories. Its equivalent in boost.filesystem is `copy_directory` (with argument order reversed).

### Example

Run this code

```
#include <cassert>
#include <cstdlib>
#include <filesystem>
 
int main()
{
    std::filesystem::current_path(std::filesystem::temp_directory_path());
 
    // Basic usage
    std::filesystem::create_directories("sandbox/1/2/a");
    std::filesystem::create_directory("sandbox/1/2/b");
 
    // Directory already exists (false returned, no error)
    assert(!std::filesystem::create_directory("sandbox/1/2/b"));
 
    // Permissions copying usage
    std::filesystem::permissions(
        "sandbox/1/2/b",
        std::filesystem::perms::others_all,
        std::filesystem::perm_options::remove
    );
    std::filesystem::create_directory("sandbox/1/2/c", "sandbox/1/2/b");
 
    std::system("ls -l sandbox/1/2");
    std::system("tree sandbox");
    std::filesystem::remove_all("sandbox");
}

```

Possible output:

```
drwxr-xr-x 2 user group 4096 Apr 15 09:33 a
drwxr-x--- 2 user group 4096 Apr 15 09:33 b
drwxr-x--- 2 user group 4096 Apr 15 09:33 c
sandbox
└── 1
    └── 2
        ├── a
        ├── b
        └── c

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 2935 | C++17 | error if target already exists but is not a directory | not error |
| LWG 3014 | C++17 | `error_code` overload of `create_directories` marked noexcept but can allocate memory | noexcept removed |
| P1164R1 | C++17 | creation failure caused by an existing non-directory file is not an error | made error |

### See also

|  |  |
| --- | --- |
| create_symlinkcreate_directory_symlink(C++17)(C++17) | creates a symbolic link   (function) |
| copy(C++17) | copies files or directories   (function) |
| perms(C++17) | identifies file system permissions   (enum) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/create_directory&oldid=171249>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 24 April 2024, at 05:04.