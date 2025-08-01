# std::experimental::filesystem::copy

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute filesystem::system_complete | | | | | | filesystem::canonical | | | | | | ****filesystem::copy**** | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | | filesystem::temp_directory_path | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<experimental/filesystem>` |  |  |
| void copy( const path& from, const path& to );  void copy( const path& from, const path& to, error_code& ec ); | (1) | (filesystem TS) |
| void copy( const path& from, const path& to, copy_options options );  void copy( const path& from, const path& to, copy_options options, error_code& ec ); | (2) | (filesystem TS) |
|  |  |  |

Copies files and directories, with a variety of options:

1) The default, equivalent to (2) with `copy_options::none` used as options.2) Copies the file or directory from to file or directory to, using the copy options indicated by options. The behavior is undefined if there is more than one option in any of the copy_options option group present in options (even in the `copy_file` group, which is not relevant to `copy`).

The behavior is as follows:

- First, before doing anything else, obtains type and permissions of from by no more than single call to status (or, if `copy_options::skip_symlinks` or `copy_options::create_symlinks` are present in options, by a call to `symlink_status`).
- If necessary, obtains the status of to the same way, by no more than a single status or symlink_status call.
- If from does not exist, reports an error.
- If from and to are the same file as determined by equivalent(), reports an error.
- If either from or to is not a regular file, a directory, or a symlink, as determined by is_other, reports an error.
- If from is a directory, but to is a regular file, reports an error.
- If from is a symbolic link, then

:   - If `copy_options::skip_symlink` is present in options, does nothing.
    - Otherwise, if to does not exist and `copy_options::copy_symlinks` is present in options, then behaves as if copy_symlink(from, to).
    - Otherwise, reports an error.

- Otherwise, if from is a regular file, then

:   - If `copy_options::directories_only` is present in options, does nothing.
    - Otherwise, if `copy_options::create_symlinks` is present in options, creates a symlink to to. Note: from must be an absolute path unless to is in the current directory.
    - Otherwise, if `copy_options::create_hard_links` is present in options, creates a hard link to to.
    - Otherwise, if to is a directory, then behaves as if copy_file(from, to/from.filename(), options) (creates a copy of from as a file in the directory to).
    - Otherwise, behaves as if copy_file(from, to, options) (copies the file).

- Otherwise, if from is a directory and either options has `copy_options::recursive` or is `copy_options::none`.

:   - If to does not exist, first executes create_directory(to, from) (creates the new directory with a copy of the old directory's attributes).
    - Then, whether to already existed or was just created, iterates over the files contained in from as if by for (const directory_entry& x : directory_iterator(from)) and for each directory entry, recursively calls copy(x.path(), to/x.path().filename(), options | unspecified), where **unspecified** is a special bit that has no other effect when set in options (the sole purpose of setting this bit is to prevent recursive copying subdirectories if options is `copy_options::none`).

- Otherwise does nothing.

### Parameters

|  |  |  |
| --- | --- | --- |
| from | - | path to the source file, directory, or symlink |
| to | - | path to the target file, directory, or symlink |
| ec | - | out-parameter for error reporting in the non-throwing overload |

### Return value

(none)

### Exceptions

The overload that does not take an error_code& parameter throws filesystem_error on underlying OS API errors, constructed with from as the first argument, to as the second argument, and the OS error code as the error code argument. std::bad_alloc may be thrown if memory allocation fails. The overload taking an error_code& parameter sets it to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur. This overload hasnoexcept specification:noexcept

### Notes

The default behavior when copying directories is the non-recursive copy: the files are copied, but not the subdirectories:

```
// Given
// /dir1 contains /dir1/file1, /dir1/file2, /dir1/dir2
// and /dir1/dir2 contains /dir1/dir2/file3
// After
std::experimental::filesystem::copy("/dir1", "/dir3");
// /dir3 is created (with the attributes of /dir1)
// /dir1/file1 is copied to /dir3/file1
// /dir1/file2 is copied to /dir3/file2

```

While with `copy_options::recursive`, the subdirectories are also copied, with their content, recursively.

```
// ...but after
std::experimental::filesystem::copy("/dir1", "/dir3", copy_options::recursive);
// /dir3 is created (with the attributes of /dir1)
// /dir1/file1 is copied to /dir3/file1
// /dir1/file2 is copied to /dir3/file2
// /dir3/dir2 is created (with the attributes of /dir1/dir2)
// /dir1/dir2/file3 is copied to /dir3/dir2/file3

```

### Example

Run this code

```
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::experimental::filesystem;
 
int main()
{
    fs::create_directories("sandbox/dir/subdir");
    std::ofstream("sandbox/file1.txt").put('a');
    fs::copy("sandbox/file1.txt", "sandbox/file2.txt"); // copy file
    fs::copy("sandbox/dir", "sandbox/dir2"); // copy directory (non-recursive)
    // sandbox holds 2 files and 2 directories, one of which has a subdirectory
    // sandbox/file1.txt
    // sandbox/file2.txt
    // sandbox/dir2
    // sandbox/dir
    //    sandbox/dir/subdir
    fs::copy("sandbox", "sandbox/copy", fs::copy_options::recursive);
    // sandbox/copy holds copies of the above files and subdirectories
    fs::remove_all("sandbox");
}

```

### See also

|  |  |
| --- | --- |
| copy_options | specifies semantics of copy operations   (enum) |
| copy_symlink | copies a symbolic link   (function) |
| copy_file | copies file contents   (function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/copy&oldid=154821>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 14 July 2023, at 23:29.