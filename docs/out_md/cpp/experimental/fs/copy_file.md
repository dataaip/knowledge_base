# std::experimental::filesystem::copy_file

From cppreference.com
< cpp‎ | experimental‎ | fs
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

Experimental

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Technical Specification | | | | |
| Filesystem library (filesystem TS) | | | | |
| Library fundamentals (library fundamentals TS) | | | | |
| Library fundamentals 2 (library fundamentals TS v2) | | | | |
| Library fundamentals 3 (library fundamentals TS v3) | | | | |
| Extensions for parallelism (parallelism TS) | | | | |
| Extensions for parallelism 2 (parallelism TS v2) | | | | |
| Extensions for concurrency (concurrency TS) | | | | |
| Extensions for concurrency 2") (concurrency TS v2) | | | | |
| Concepts (concepts TS) | | | | |
| Ranges (ranges TS) | | | | |
| Reflection (reflection TS) | | | | |
| Mathematical special functions (special functions TR) | | | | |
| Experimental Non-TS | | | | |
| Pattern Matching") | | | | |
| Linear Algebra") | | | | |
| std::execution | | | | |
| Contracts") | | | | |
| 2D Graphics") | | | | |

Filesystem library

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::path | | | | | | filesystem::filesystem_error | | | | | | filesystem::directory_entry | | | | | | filesystem::directory_iterator | | | | | | filesystem::recursive_directory_iterator | | | | | | filesystem::file_status | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::space_info | | | | | | filesystem::file_type | | | | | | filesystem::perms | | | | | | filesystem::copy_options | | | | | | filesystem::directory_options | | | | | | filesystem::file_time_type | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute filesystem::system_complete | | | | | | filesystem::canonical | | | | | | filesystem::copy | | | | | | ****filesystem::copy_file**** | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | | filesystem::temp_directory_path | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/filesystem>` |  |  |
| bool copy_file( const path& from, const path& to );  bool copy_file( const path& from, const path& to, error_code& ec ); | (1) | (filesystem TS) |
| bool copy_file( const path& from, const path& to, copy_options options );  bool copy_file( const path& from, const path& to, copy_options options, error_code& ec ); | (2) | (filesystem TS) |
|  |  |  |

1) The default, equivalent to (2) with `copy_options::none` used as options.2) Copies a single file from from to to, using the copy options indicated by options. The behavior is undefined if there is more than one option in any of the copy_options option group present in options (even in the groups not relevant to `copy_file`).

- If the destination file does not exist,

:   - copies the contents and the attributes of the file to which from resolves to the file to which to resolves (symlinks are followed).

- Otherwise, if the destination file already exists:

:   - If to and from are the same as determined by equivalent(from, to), report an error.
    - Otherwise, if none of the copy_file control options are set in options, report an error.
    - Otherwise, if `copy_options::skip_existing` is set in options, do nothing.
    - Otherwise, if `copy_options::overwrite_existing` is set in options, copy the contents and the attributes of the file to which from resolves to the file to which to resolves.
    - Otherwise, if `copy_options::update_existing` is set in options, only copy the file if from is newer than to, as defined by last_write_time().

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

The overload that does not take an error_code& parameter throws filesystem_error on underlying OS API errors, constructed with from as the first argument, to as the second argument, and the OS error code as the error code argument. std::bad_alloc may be thrown if memory allocation fails. The overload taking an error_code& parameter sets it to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur. This overload hasnoexcept specification:noexcept

### Notes

The functions involve at most one direct or indirect call to status(to) (used both to determine if the file exists, and, for `copy_options::update_existing` option, its last write time).

Error is reported when `copy_file` is used to copy a directory: use copy for that.

`copy_file` follows symlinks: use copy_symlink or copy with `copy_options::copy_symlinks` for that.

### Example

Run this code

```
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;
 
int main()
{
    fs::create_directory("sandbox");
    std::ofstream("sandbox/file1.txt").put('a');
 
    fs::copy_file("sandbox/file1.txt", "sandbox/file2.txt");
 
    // now there are two files in sandbox:
    std::cout << "file1.txt holds : "
              << std::ifstream("sandbox/file1.txt").rdbuf() << '\n';
    std::cout << "file2.txt holds : "
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
file1.txt holds : a
file2.txt holds : a
Could not copy sandbox/abc: copy_file: Is a directory: "sandbox/abc", "sandbox/def"

```

### See also

|  |  |
| --- | --- |
| copy_options | specifies semantics of copy operations   (enum) |
| copy_symlink | copies a symbolic link   (function) |
| copy | copies files or directories   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/copy_file&oldid=159075>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 15 September 2023, at 03:23.