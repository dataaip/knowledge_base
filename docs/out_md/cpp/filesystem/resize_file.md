# std::filesystem::resize_file

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | ****filesystem::resize_file**** | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| void resize_file( const std::filesystem::path& p,                    std::uintmax_t new_size ); | (1) | (since C++17) |
| void resize_file( const std::filesystem::path& p,  std::uintmax_t new_size, std::error_code& ec ) noexcept; | (2) | (since C++17) |
|  |  |  |

Changes the size of the regular file named by p as if by POSIX `truncate`: if the file size was previously larger than new_size, the remainder of the file is discarded. If the file was previously smaller than new_size, the file size is increased and the new area appears as if zero-filled.

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | path to resize |
| new_size | - | size that the file will now have |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

(none)

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.2) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

On systems that support sparse files, increasing the file size does not increase the space it occupies on the file system: space allocation takes place only when non-zero bytes are written to the file.

### Example

Demonstrates the effect creating a sparse file has on the free space.

Run this code

```
#include <filesystem>
#include <fstream>
#include <iostream>
#include <locale>
 
int main()
{
    auto p = std::filesystem::temp_directory_path() / "example.bin";
    std::ofstream{p}.put('a');
    std::cout.imbue(std::locale{"en_US.UTF8"});
    std::cout << "File size:  " << std::filesystem::file_size(p) << '\n'
              << "Free space: " << std::filesystem::space(p).free << '\n';
    std::filesystem::resize_file(p, 64*1024); // resize to 64 KB
    std::cout << "File size:  " << std::filesystem::file_size(p) << '\n'
              << "Free space: " << std::filesystem::space(p).free << '\n';
    std::filesystem::remove(p);
}

```

Possible output:

```
File size:  1
Free space: 42,954,108,928
File size:  65,536
Free space: 42,954,108,928

```

### See also

|  |  |
| --- | --- |
| file_size(C++17) | returns the size of a file   (function) |
| space(C++17) | determines available free space on the file system   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/resize_file&oldid=157973>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 4 September 2023, at 13:30.