# std::filesystem::recursive_directory_iterator::depth

From cppreference.com
< cpp‎ | filesystem‎ | recursive directory iterator
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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

std::filesystem::recursive_directory_iterator

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| recursive_directory_iterator::recursive_directory_iterator | | | | |
| recursive_directory_iterator::operator\*recursive_directory_iterator::operator-> | | | | |
| recursive_directory_iterator::options | | | | |
| ****recursive_directory_iterator::depth**** | | | | |
| recursive_directory_iterator::recursion_pending | | | | |
| recursive_directory_iterator::operator= | | | | |
| recursive_directory_iterator::incrementrecursive_directory_iterator::operator++ | | | | |
| recursive_directory_iterator::pop | | | | |
| recursive_directory_iterator::disable_recursion_pending | | | | |
| Non-member functions | | | | |
| begin(std::filesystem::recursive_directory_iterator)end(std::filesystem::recursive_directory_iterator) | | | | |

|  |  |  |
| --- | --- | --- |
| int depth() const; |  | (since C++17) |
|  |  |  |

Returns the number of directories from the starting directory to the currently iterated directory, i.e. the current depth of the directory hierarchy.

The starting directory has depth of 0, its subdirectories have depth 1, etc.

The behavior is undefined if \*this is the end iterator.

### Parameters

(none)

### Return value

Current depth of the directory hierarchy.

### Exceptions

Throws nothing.

### Example

This example uses iteration depth to calculate the indentation of a directory tree printout.

Run this code

```
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
namespace fs = std::filesystem;
 
int main()
{
    fs::current_path(fs::temp_directory_path());
    fs::create_directories("sandbox/a/b/c");
    fs::create_directories("sandbox/a/b/d/e");
    std::ofstream("sandbox/a/b/file1.txt");
    fs::create_symlink("a", "sandbox/syma");
    for (auto i = fs::recursive_directory_iterator("sandbox");
         i != fs::recursive_directory_iterator();
         ++i)
    {
        std::cout << std::string(i.depth() << 1, ' ') << *i;
        if (fs::is_symlink(i->symlink_status()))
            std::cout << " -> " << fs::read_symlink(*i);
        std::cout << '\n';
    }
    fs::remove_all("sandbox");
}

```

Output:

```
"sandbox/syma" -> "a"
"sandbox/a"
  "sandbox/a/b"
    "sandbox/a/b/d"
      "sandbox/a/b/d/e"
    "sandbox/a/b/file1.txt"
    "sandbox/a/b/c"

```

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/recursive_directory_iterator/depth&oldid=158193>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 September 2023, at 03:20.