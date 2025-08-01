# std::filesystem::copy_file

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | ****filesystem::copy_file**** | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| bool copy_file( const std::filesystem::path& from,                  const std::filesystem::path& to ); | (1) | (since C++17) |
| bool copy_file( const std::filesystem::path& from,  const std::filesystem::path& to, std::error_code& ec ); | (2) | (since C++17) |
| bool copy_file( const std::filesystem::path& from,  const std::filesystem::path& to, std::filesystem::copy_options options ); | (3) | (since C++17) |
| bool copy_file( const std::filesystem::path& from,  const std::filesystem::path& to,                  std::filesystem::copy_options options, std::error_code& ec ); | (4) | (since C++17) |
|  |  |  |

1,2) The default, equivalent to (3,4) with `copy_options::none` used as options.3,4) Copies a single file from from to to, using the copy options indicated by options. The behavior is undefined if there is more than one option in any of the copy_options option group present in options (even in the groups not relevant to ****filesystem::copy_file****).

- If !filesystem::is_regular_file(from) (either because the source file doesn't exist or because it is not a regular file), report an error.
- Otherwise, if the destination file does not exist,

:   - copies the contents and the attributes of the file to which from resolves to the file to which to resolves (symlinks are followed).

- Otherwise, if the destination file already exists,

:   - report an error if any of the following is true:

    :   - to and from are the same as determined by filesystem::equivalent(from, to);
        - to is not a regular file as determined by !filesystem::is_regular_file(to);
        - none of the ****filesystem::copy_file**** control options are set in options.

    - Otherwise, if `copy_options::skip_existing` is set in options, do nothing.
    - Otherwise, if `copy_options::overwrite_existing` is set in options, copy the contents and the attributes of the file to which from resolves to the file to which to resolves.
    - Otherwise, if `copy_options::update_existing` is set in options, only copy the file if from is newer than to, as defined by filesystem::last_write_time().

The non-throwing overloads return false if an error occurs.

### Parameters

|  |  |  |
| --- | --- | --- |
| from | - | path to the source file |
| to | - | path to the target file |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

true if the file was copied, false otherwise.

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1,3) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with from as the first path argument, to as the second path argument, and the OS error code as the error code argument.2,4) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

The functions involve at most one direct or indirect call to filesystem::status(to) (used both to determine if the file exists, and, for `filesystem::copy_options::update_existing` option, its last write time).

Error is reported when ****filesystem::copy_file**** is used to copy a directory: use filesystem::copy for that.

****filesystem::copy_file**** follows symlinks: use filesystem::copy_symlink or filesystem::copy with `filesystem::copy_options::copy_symlinks` for that.

### Example

Run this code

```
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::filesystem;
 
int main()
{
    fs::create_directory("sandbox");
    std::ofstream("sandbox/file1.txt").put('a');
 
    fs::copy_file("sandbox/file1.txt", "sandbox/file2.txt");
 
    // now there are two files in sandbox:
    std::cout << "file1.txt holds: "
              << std::ifstream("sandbox/file1.txt").rdbuf() << '\n';
    std::cout << "file2.txt holds: "
              << std::ifstream("sandbox/file2.txt").rdbuf() << '\n';
 
    // fail to copy directory
    fs::create_directory("sandbox/abc");
    try
    {
        fs::copy_file("sandbox/abc", "sandbox/def");
    }
    catch (fs::filesystem_error& e)
    {
        std::cout << "Could not copy sandbox/abc: " << e.what() << '\n';
    }
    fs::remove_all("sandbox");
}

```

Possible output:

```
file1.txt holds: a
file2.txt holds: a
Could not copy sandbox/abc: copy_file: Is a directory: "sandbox/abc", "sandbox/def"

```

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3014 | C++17 | `error_code` overload marked noexcept but can allocate memory | noexcept removed |

### See also

|  |  |
| --- | --- |
| copy_options(C++17) | specifies semantics of copy operations   (enum) |
| copy_symlink(C++17) | copies a symbolic link   (function) |
| copy(C++17) | copies files or directories   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/copy_file&oldid=157938>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 September 2023, at 08:40.