# std::filesystem::path

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
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | ****filesystem::path**** | | | | | | filesystem::filesystem_error | | | | | | filesystem::directory_entry | | | | | | filesystem::directory_iterator | | | | | | filesystem::recursive_directory_iterator | | | | | | filesystem::file_status | | | | | | filesystem::space_info | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::file_type | | | | | | filesystem::file_time_type | | | | | | filesystem::perms | | | | | | filesystem::perm_options | | | | | | filesystem::copy_options | | | | | | filesystem::directory_options | | | | | |
| Functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::absolute | | | | | | filesystem::canonicalfilesystem::weakly_canonical | | | | | | filesystem::relativefilesystem::proximate | | | | | | filesystem::copy | | | | | | filesystem::copy_file | | | | | | filesystem::copy_symlink | | | | | | filesystem::create_directory filesystem::create_directories | | | | | | filesystem::create_hard_link | | | | | | filesystem::create_symlink filesystem::create_directory_symlink | | | | | | filesystem::current_path | | | | | | filesystem::temp_directory_path | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::exists | | | | | | filesystem::equivalent | | | | | | filesystem::file_size | | | | | | filesystem::hard_link_count | | | | | | filesystem::last_write_time | | | | | | filesystem::permissions | | | | | | filesystem::read_symlink | | | | | | filesystem::remove filesystem::remove_all | | | | | | filesystem::rename | | | | | | filesystem::resize_file | | | | | | filesystem::space | | | | | | filesystem::status filesystem::symlink_status | | | | | |
| File types | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_block_file | | | | | | filesystem::is_character_file | | | | | | filesystem::is_directory | | | | | | filesystem::is_empty | | | | | | filesystem::status_known | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | filesystem::is_fifo | | | | | | filesystem::is_other | | | | | | filesystem::is_regular_file | | | | | | filesystem::is_socket | | | | | | filesystem::is_symlink | | | | | |

****std::filesystem::path****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member constants | | | | |
| path::native_formatpath::generic_formatpath::auto_format | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::path | | | | | | path::~path | | | | | | path::operator= | | | | | | path::assign | | | | | | path::appendpath::operator/= | | | | | | path::concatpath::operator+= | | | | | | path::clear | | | | | | path::make_preferred | | | | | | path::remove_filename | | | | | | path::replace_filename | | | | | | path::replace_extension | | | | | | path::swap | | | | | | path::compare | | | | | | path::beginpath::end | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::c_strpath::nativepath::operator string_type | | | | | | path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring | | | | | | path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring | | | | | | path::lexically_normalpath::lexically_relativepath::lexically_proximate | | | | | |  | | | | | |
| Path decomposition | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::root_name | | | | | | path::root_directory | | | | | | path::root_path | | | | | | path::relative_path | | | | | | path::parent_path | | | | | | path::filename | | | | | | path::stem | | | | | | path::extension | | | | | | path::empty | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::has_root_pathpath::has_root_namepath::has_root_directorypath::has_relative_pathpath::has_parent_pathpath::has_filenamepath::has_stempath::has_extension | | | | | | path::is_absolutepath::is_relative | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator/ | | | | | | operator<<operator>> | | | | | | swap(std::filesystem::path) | | | | | | hash_value | | | | | | u8path | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | hash<std::filesystem::path> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | formatter<std::filesystem::path>(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| Defined in header `<filesystem>` |  |  |
| class path; |  | (since C++17) |
|  |  |  |

Objects of type `path` represent paths on a filesystem. Only syntactic aspects of paths are handled: the pathname may represent a non-existing path or even one that is not allowed to exist on the current file system or OS.

The path name has the following syntax:

1. root-name(optional): identifies the root on a filesystem with multiple roots (such as "C:" or "//myserver"). In case of ambiguity, the longest sequence of characters that forms a valid root-name is treated as the root-name. The standard library may define additional root-names besides the ones understood by the OS API.
2. root-directory(optional): a directory separator that, if present, marks this path as **absolute**. If it is missing (and the first element other than the root name is a file name), then the path is **relative** and requires another path as the starting location to resolve to a file name.
3. Zero or more of the following:

:   - file-name: sequence of characters that aren't directory separators or preferred directory separators (additional limitations may be imposed by the OS or file system). This name may identify a file, a hard link, a symbolic link, or a directory. Two special file-names are recognized:

    :   - dot: the file name consisting of a single dot character . is a directory name that refers to the current directory.
        - dot-dot: the file name consisting of two dot characters .. is a directory name that refers to the parent directory.

    - directory-separators: the forward slash character / or the alternative character provided as `path::preferred_separator`. If this character is repeated, it is treated as a single directory separator: /usr///////lib is the same as /usr/lib.

A path can be **normalized** by following this algorithm:

1. If the path is empty, stop (normal form of an empty path is an empty path).
2. Replace each directory-separator (which may consist of multiple slashes) with a single `path::preferred_separator`.
3. Replace each slash character in the root-name with `path::preferred_separator`.
4. Remove each dot and any immediately following directory-separator.
5. Remove each non-dot-dot filename immediately followed by a directory-separator and a dot-dot, along with any immediately following directory-separator.
6. If there is root-directory, remove all dot-dots and any directory-separators immediately following them.
7. If the last filename is dot-dot, remove any trailing directory-separator.
8. If the path is empty, add a dot (normal form of ./ is .).

The path can be traversed element-wise via iterators returned by the begin() and end() functions, which views the path in generic format and iterates over root name, root directory, and the subsequent file name elements (directory separators are skipped except the one that identifies the root directory). If the very last element in the path is a directory separator, the last iterator will dereference to an empty element.

Calling any non-const member function of a `path` invalidates all iterators referring to elements of that object.

If the OS uses a **native** syntax that is different from the portable **generic** syntax described above, library functions that are defined to accept "detected format" accept path names in both formats: a detected format argument is taken to be in the generic format if and only if it matches the generic format but is not acceptable to the operating system as a native path. On those OS where native format differs between pathnames of directories and pathnames of files, a generic pathname is treated as a directory path if it ends on a directory separator and a regular file otherwise.

In any case, the path class behaves as if it stores a pathname in the native format and automatically converts to generic format as needed (each member function specifies which format it interprets the path as).

On POSIX systems, the generic format is the native format and there is no need to distinguish or convert between them.

Paths are implicitly convertible to and from std::basic_strings, which makes it possible to use them with other file APIs.

The stream operators use std::quoted so that spaces do not cause truncation when later read by stream input operator.

Decomposition member functions (e.g. extension) return `filesystem::path` objects instead of string objects as other APIs do.

### Member types

|  |  |
| --- | --- |
| Type | Definition |
| `value_type` | character type used by the native encoding of the filesystem: char on POSIX, wchar_t on Windows |
| `string_type` | std::basic_string<value_type> |
| `const_iterator` | a constant LegacyInputIterator with a `value_type` of `path` that meets all requirements of LegacyBidirectionalIterator except that for two equal dereferenceable iterators `a` and `b` of type `const_iterator`, there is no requirement that \*a and \*b refer to the same object. It is unspecified whether `const_iterator` is actually a LegacyBidirectionalIterator |
| `iterator` | `const_iterator` |
| format | determines how to interpret string representations of pathnames. The following enumerators are also defined:   |  |  | | --- | --- | | Name | Explanation | | native_format | native pathname format | | generic_format | generic pathname format | | auto_format | implementation-defined format, auto-detected where possible |   (public member enum) |

### Member constants

|  |  |
| --- | --- |
| constexpr value_type preferred_separator[static] | alternative directory separator which may be used in addition to the portable /. On Windows, this is the backslash character \. On POSIX, this is the same forward slash / as the portable separator   (public static member constant) |

### Member functions

|  |  |
| --- | --- |
| (constructor) | constructs a `path`   (public member function) |
| (destructor) | destroys a `path` object   (public member function) |
| operator= | assigns another path   (public member function) |
| assign | assigns contents   (public member function) |
| Concatenation | |
| appendoperator/= | appends elements to the path with a directory separator   (public member function) |
| concatoperator+= | concatenates two paths without introducing a directory separator   (public member function) |
| Modifiers | |
| clear | erases the contents   (public member function) |
| make_preferred | converts directory separators to preferred directory separator   (public member function) |
| remove_filename | removes filename path component   (public member function) |
| replace_filename | replaces the last path component with another path   (public member function) |
| replace_extension | replaces the extension   (public member function) |
| swap | swaps two paths   (public member function) |
| Format observers | |
| c_strnativeoperator string_type | returns the native version of the path   (public member function) |
| stringwstringu8stringu16stringu32string | returns the path in native pathname format converted to a string   (public member function) |
| generic_stringgeneric_wstringgeneric_u8stringgeneric_u16stringgeneric_u32string | returns the path in generic pathname format converted to a string   (public member function) |
| Compare | |
| compare | compares the lexical representations of two paths lexicographically   (public member function) |
| Generation | |
| lexically_normallexically_relativelexically_proximate | converts path to normal form converts path to relative form converts path to proximate form   (public member function) |
| Decomposition | |
| root_name | returns the root-name of the path, if present   (public member function) |
| root_directory | returns the root directory of the path, if present   (public member function) |
| root_path | returns the root path of the path, if present   (public member function) |
| relative_path | returns path relative to the root path   (public member function) |
| parent_path | returns the path of the parent path   (public member function) |
| filename | returns the filename path component   (public member function) |
| stem | returns the stem path component (filename without the final extension)   (public member function) |
| extension | returns the file extension path component   (public member function) |
| Queries | |
| empty | checks if the path is empty   (public member function) |
| has_root_pathhas_root_namehas_root_directoryhas_relative_pathhas_parent_pathhas_filenamehas_stemhas_extension | checks if the corresponding path element is not empty   (public member function) |
| is_absoluteis_relative | checks if root_path() uniquely identifies file system location   (public member function) |
| Iterators | |
| beginend | iterator access to the path as a sequence of elements   (public member function) |

### Non-member functions

|  |  |
| --- | --- |
| Defined in namespace `std::filesystem` | |
| swap(std::filesystem::path)(C++17) | specializes the std::swap algorithm   (function) |
| hash_value(C++17) | calculates a hash value for a path object   (function) |
| operator==operator!=operator<operator<=operator>operator>=operator<=>(C++17)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++20) | lexicographically compares two paths   (function) |
| operator/(C++17) | concatenates two paths with a directory separator   (function) |
| operator<<operator>>(C++17) | performs stream input and output on a quoted path   (function) |
| u8path(C++17)(deprecated in C++20) | creates a `path` from a UTF-8 encoded source   (function) |

### Helper classes

|  |  |
| --- | --- |
| Defined in namespace `std` | |
| std::hash<std::filesystem::path>(C++17) | hash support for ****std::filesystem::path****   (class template specialization) |
| std::formatter<std::filesystem::path>(C++26) | formatting support for `filesystem::path`   (class template specialization) |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3657 | C++17 | `hash` for `path` was disabled | enabled |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/path&oldid=178501>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 19 December 2024, at 15:06.