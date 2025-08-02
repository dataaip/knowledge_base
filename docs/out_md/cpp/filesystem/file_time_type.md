# std::filesystem::file_time_type

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::path | | | | | | filesystem::filesystem_error | | | | | | filesystem::directory_entry | | | | | | filesystem::directory_iterator | | | | | | filesystem::recursive_directory_iterator | | | | | | filesystem::file_status | | | | | | filesystem::space_info | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_type | | | | | | ****filesystem::file_time_type**** | | | | | | filesystem::perms | | | | | | filesystem::perm_options | | | | | | filesystem::copy_options | | | | | | filesystem::directory_options | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
|  |  |  |
| --- | --- | --- |
| using file_time_type = std::chrono::time_point</\*trivial-clock\*/>; |  | (since C++17)  (until C++20) |
| using file_time_type = std::chrono::time_point<std::chrono::file_clock>; |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Represents file time.

|  |  |
| --- | --- |
| /\*trivial-clock\*/ is an implementation-defined type that satisfies TrivialClock and is sufficient to represent the resolution and range of the file time values offered by the filesystem. | (until C++20) |

### Example

Run this code

```
#include <chrono>
#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
 
using namespace std::chrono_literals;
 
int main()
{
    auto p = std::filesystem::temp_directory_path() / "example.bin";
    std::ofstream{p.c_str()}.put('a'); // create file
 
    std::filesystem::file_time_type ftime = std::filesystem::last_write_time(p);
    std::cout << std::format("File write time is {}\n", ftime);
 
    // move file write time 1 hour to the future
    std::filesystem::last_write_time(p, ftime + 1h);
 
    // read back from the filesystem
    ftime = std::filesystem::last_write_time(p);
    std::cout << std::format("File write time is {}\n", ftime);
 
    std::filesystem::remove(p);
}

```

Possible output:

```
File write time is 2023-09-04 19:33:24.702639224
File write time is 2023-09-04 20:33:24.702639224

```

### See also

|  |  |
| --- | --- |
| last_write_time(C++17) | gets or sets the time of the last data modification   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/file_time_type&oldid=173964>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 30 July 2024, at 05:29.