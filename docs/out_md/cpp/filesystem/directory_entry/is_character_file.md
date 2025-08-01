# std::filesystem::directory_entry::is_character_file

From cppreference.com
< cpp‎ | filesystem‎ | directory entry
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

std::filesystem::directory_entry

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member functions | | | | |
| directory_entry::directory_entry | | | | |
| Modifiers | | | | |
| directory_entry::operator= | | | | |
| directory_entry::assign | | | | |
| directory_entry::replace_filename | | | | |
| directory_entry::refresh | | | | |
| Observers | | | | |
| directory_entry::pathdirectory_entry::operator const path& | | | | |
| directory_entry::exists | | | | |
| directory_entry::is_block_file | | | | |
| ****directory_entry::is_character_file**** | | | | |
| directory_entry::is_directory | | | | |
| directory_entry::is_fifo | | | | |
| directory_entry::is_other | | | | |
| directory_entry::is_regular_file | | | | |
| directory_entry::is_socket | | | | |
| directory_entry::is_symlink | | | | |
| directory_entry::file_size | | | | |
| directory_entry::hard_link_count | | | | |
| directory_entry::last_write_time | | | | |
| directory_entry::statusdirectory_entry::symlink_status | | | | |
| directory_entry::operator==directory_entry::operator!=directory_entry::operator<directory_entry::operator>directory_entry::operator<=directory_entry::operator>=directory_entry::operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | |
| Non-member functions | | | | |
| operator<< | | | | |

|  |  |  |
| --- | --- | --- |
| bool is_character_file() const; | (1) | (since C++17) |
| bool is_character_file( std::error_code& ec ) const noexcept; | (2) | (since C++17) |
|  |  |  |

Checks whether the pointed-to object is a character device. Effectively returns:

1) std::filesystem::is_character_file(status()),2) std::filesystem::is_character_file(status(ec)).

### Parameters

|  |  |  |
| --- | --- | --- |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

true if the referred-to filesystem object is a character device, false otherwise.

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

1) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.2) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Example

Run this code

```
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iostream>
#include <memory>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/un.h>
#include <unistd.h>
 
namespace fs = std::filesystem;
 
void print_entry_type(const std::filesystem::directory_entry& entry)
{
    std::cout << entry.path() << ": ";
 
    if (!entry.exists())
        std::cout << "does not exist ";
    if (entry.is_block_file())
        std::cout << "is a block device ";
    if (entry.is_character_file())
        std::cout << "is a character device ";
    if (entry.is_directory())
        std::cout << "is a directory ";
    if (entry.is_fifo())
        std::cout << "is a named IPC pipe ";
    if (entry.is_regular_file())
        std::cout << "is a regular file ";
    if (entry.is_socket())
        std::cout << "is a named IPC socket ";
    if (entry.is_symlink())
        std::cout << "(a symlink)";
    if (entry.is_other())
        std::cout << "(an `other` file)";
 
    std::cout << '\n';
}
 
template<typename Type, typename Fun>
class scoped_cleanup
{
    std::unique_ptr<Type, std::function<void(const Type*)>> u;
 
public:
    scoped_cleanup(Type* ptr, Fun fun) : u{ptr, std::move(fun)} {}
};
 
int main()
{
    // Create files of different kinds.
    std::filesystem::current_path(fs::temp_directory_path());
    const std::filesystem::path sandbox{"sandbox"};
    scoped_cleanup remove_all_at_exit{&sandbox, [](const fs::path* p)
    {
        std::cout << "cleanup: remove_all(" << *p << ")\n";
        fs::remove_all(*p);
    }};
    std::filesystem::create_directory(sandbox);
    std::ofstream{sandbox/"file"}; // Creates a regular file
    std::filesystem::create_directory(sandbox/"dir");
 
    mkfifo((sandbox/"pipe").string().data(), 0644);
    struct sockaddr_un addr; addr.sun_family = AF_UNIX;
 
    std::strcpy(addr.sun_path, (sandbox/"sock").string().data());
    int fd{socket(PF_UNIX, SOCK_STREAM, 0)};
    scoped_cleanup close_socket_at_exit{&fd, [](const int* f)
    {
        std::cout << "cleanup: close socket #" << *f << '\n';
        close(*f);
    }};
    bind(fd, reinterpret_cast<sockaddr*>(std::addressof(addr)), sizeof addr);
 
    fs::create_symlink("file", sandbox/"symlink");
 
    for (std::filesystem::directory_entry entry: fs::directory_iterator(sandbox))
        print_entry_type(entry);
 
    // Request file system objects status directly:
    for (const char* str : {"/dev/null", "/dev/cpu", "/usr/include/c++",
                            "/usr/include/asm", "/usr/include/time.h"})
        print_entry_type(fs::directory_entry{str});
 
} // Cleanup via scoped_cleanup objects

```

Possible output:

```
"sandbox/symlink": is a regular file (a symlink) 
"sandbox/sock": is a named IPC socket (an `other` file) 
"sandbox/pipe": is a named IPC pipe (an `other` file) 
"sandbox/dir": is a directory 
"sandbox/file": is a regular file 
"/dev/null": is a character device (an `other` file) 
"/dev/cpu": does not exist 
"/usr/include/c++": is a directory 
"/usr/include/asm": is a directory (a symlink) 
"/usr/include/time.h": is a regular file 
cleanup: close socket #3
cleanup: remove_all("sandbox")

```

### See also

|  |  |
| --- | --- |
| is_character_file(C++17) | checks whether the given path refers to a character device   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/directory_entry/is_character_file&oldid=158263>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 8 September 2023, at 13:32.