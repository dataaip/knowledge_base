# Filesystem library (since C++17)

From cppreference.com
< cpp
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
| ****Filesystem library**** (C++17) | | | | |
| Concurrency support library (C++11) | | | | |
| Execution support library (C++26) | | | | |
| Technical specifications | | | | |
| Symbols index | | | | |
| External libraries | | | | |

****Filesystem library****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::path | | | | | | filesystem::filesystem_error | | | | | | filesystem::directory_entry | | | | | | filesystem::directory_iterator | | | | | | filesystem::recursive_directory_iterator | | | | | | filesystem::file_status | | | | | | filesystem::space_info | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_type | | | | | | filesystem::file_time_type | | | | | | filesystem::perms | | | | | | filesystem::perm_options | | | | | | filesystem::copy_options | | | | | | filesystem::directory_options | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

The Filesystem library provides facilities for performing operations on file systems and their components, such as paths, regular files, and directories.

The filesystem library was originally developed as boost.filesystem, was published as the technical specification ISO/IEC TS 18822:2015, and finally merged to ISO C++ as of C++17. The boost implementation is currently available on more compilers and platforms than the C++17 library.

The filesystem library facilities may be unavailable if a hierarchical file system is not accessible to the implementation, or if it does not provide the necessary capabilities. Some features may not be available if they are not supported by the underlying file system (e.g. the FAT filesystem lacks symbolic links and forbids multiple hardlinks). In those cases, errors must be reported.

The behavior is undefined if the calls to functions in this library introduce a **file system race**, that is, when multiple threads, processes, or computers interleave access and modification to the same object in a file system.

#### Library-wide definitions

- **file**: a file system object that holds data, can be written to, read from, or both. Files have names, attributes, one of which is file type:

:   - **directory**: a file that acts as a container of directory entries, which identify other files (some of which may be other, nested directories). When discussing a particular file, the directory in which it appears as an entry is its **parent directory**. The parent directory can be represented by the relative pathname "..".
    - **regular file**: a directory entry that associates a name with an existing file (i.e. a **hard link**). If multiple hard links are supported, the file is removed after the last hard link to it is removed.
    - **symbolic link**: a directory entry that associates a name with a path, which may or may not exist.
    - other special file types: **block**, **character**, **fifo**, **socket**.

- **file name**: a string of characters that names a file. Permissible characters, case sensitivity, maximum length, and the disallowed names are implementation-defined. Names "." (dot) and ".." (dot-dot) have special meaning at library level.
- **path**: sequence of elements that identifies a file. It begins with an optional root-name (e.g. "C:" or "//server" on Windows), followed by an optional root-directory (e.g. "/" on Unix), followed by a sequence of zero or more file names (all but last of which have to be directories or links to directories). The native format (e.g. which characters are used as separators) and character encoding of the string representation of a path (the **pathname**) is implementation-defined, this library provides portable representation of paths.

:   - **absolute path**: a path that unambiguously identifies the location of a file.
    - **canonical path**: an absolute path that includes no symlinks, "." or ".." elements.
    - **relative path**: a path that identifies the location of a file relative to some location on the file system. The special path names "." (dot, "current directory") and ".." (dot-dot, "parent directory") are relative paths.

|  |  |
| --- | --- |
| Classes | |
| Defined in header `<filesystem>` | |
| Defined in namespace `std::filesystem` | |
| path(C++17) | represents a path   (class) |
| filesystem_error(C++17) | an exception thrown on file system errors   (class) |
| directory_entry(C++17) | a directory entry   (class) |
| directory_iterator(C++17) | an iterator to the contents of the directory   (class) |
| recursive_directory_iterator(C++17) | an iterator to the contents of a directory and its subdirectories   (class) |
| file_status(C++17) | represents file type and permissions   (class) |
| space_info(C++17) | information about free and available space on the filesystem   (class) |
| file_type(C++17) | the type of a file   (enum) |
| perms(C++17) | identifies file system permissions   (enum) |
| perm_options(C++17) | specifies semantics of permissions operations   (enum) |
| copy_options(C++17) | specifies semantics of copy operations   (enum) |
| directory_options(C++17) | options for iterating directory contents   (enum) |
| file_time_type(C++17) | represents file time values   (typedef) |
| Non-member functions | |
| Defined in header `<filesystem>` | |
| Defined in namespace `std::filesystem` | |
| absolute(C++17) | composes an absolute path   (function) |
| canonicalweakly_canonical(C++17) | composes a canonical path   (function) |
| relativeproximate(C++17) | composes a relative path   (function) |
| copy(C++17) | copies files or directories   (function) |
| copy_file(C++17) | copies file contents   (function) |
| copy_symlink(C++17) | copies a symbolic link   (function) |
| create_directorycreate_directories(C++17)(C++17) | creates new directory   (function) |
| create_hard_link(C++17) | creates a hard link   (function) |
| create_symlinkcreate_directory_symlink(C++17)(C++17) | creates a symbolic link   (function) |
| current_path(C++17) | returns or sets the current working directory   (function) |
| exists(C++17) | checks whether path refers to existing file system object   (function) |
| equivalent(C++17) | checks whether two paths refer to the same file system object   (function) |
| file_size(C++17) | returns the size of a file   (function) |
| hard_link_count(C++17) | returns the number of hard links referring to the specific file   (function) |
| last_write_time(C++17) | gets or sets the time of the last data modification   (function) |
| permissions(C++17) | modifies file access permissions   (function) |
| read_symlink(C++17) | obtains the target of a symbolic link   (function) |
| removeremove_all(C++17)(C++17) | removes a file or empty directory removes a file or directory and all its contents, recursively   (function) |
| rename(C++17) | moves or renames a file or directory   (function) |
| resize_file(C++17) | changes the size of a regular file by truncation or zero-fill   (function) |
| space(C++17) | determines available free space on the file system   (function) |
| statussymlink_status(C++17)(C++17) | determines file attributes determines file attributes, checking the symlink target   (function) |
| temp_directory_path(C++17) | returns a directory suitable for temporary files   (function) |
| File types | |
| is_block_file(C++17) | checks whether the given path refers to block device   (function) |
| is_character_file(C++17) | checks whether the given path refers to a character device   (function) |
| is_directory(C++17) | checks whether the given path refers to a directory   (function) |
| is_empty(C++17) | checks whether the given path refers to an empty file or directory   (function) |
| is_fifo(C++17) | checks whether the given path refers to a named pipe   (function) |
| is_other(C++17) | checks whether the argument refers to an **other** file   (function) |
| is_regular_file(C++17) | checks whether the argument refers to a regular file   (function) |
| is_socket(C++17) | checks whether the argument refers to a named IPC socket   (function) |
| is_symlink(C++17) | checks whether the argument refers to a symbolic link   (function) |
| status_known(C++17) | checks whether file status is known   (function) |

### Notes

Using this library may require additional compiler/linker options. GNU implementation prior to 9.1 requires linking with `-lstdc++fs` and LLVM implementation prior to LLVM 9.0 requires linking with `-lc++fs`.

| Feature-test macro | Value | Std | Feature |
| --- | --- | --- | --- |
| `__cpp_lib_filesystem` | `201703L` | (C++17) | Filesystem library |

### See also

|  |  |
| --- | --- |
| C++ documentation for File System TS | |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem&oldid=172316>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 9 June 2024, at 07:54.