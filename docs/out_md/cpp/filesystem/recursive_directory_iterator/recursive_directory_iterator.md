# std::filesystem::recursive_directory_iterator::recursive_directory_iterator

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
| ****recursive_directory_iterator::recursive_directory_iterator**** | | | | |
| recursive_directory_iterator::operator\*recursive_directory_iterator::operator-> | | | | |
| recursive_directory_iterator::options | | | | |
| recursive_directory_iterator::depth | | | | |
| recursive_directory_iterator::recursion_pending | | | | |
| recursive_directory_iterator::operator= | | | | |
| recursive_directory_iterator::incrementrecursive_directory_iterator::operator++ | | | | |
| recursive_directory_iterator::pop | | | | |
| recursive_directory_iterator::disable_recursion_pending | | | | |
| Non-member functions | | | | |
| begin(std::filesystem::recursive_directory_iterator)end(std::filesystem::recursive_directory_iterator) | | | | |

|  |  |  |
| --- | --- | --- |
| recursive_directory_iterator() noexcept; | (1) | (since C++17) |
| recursive_directory_iterator( const recursive_directory_iterator& other ); | (2) | (since C++17) |
| recursive_directory_iterator( recursive_directory_iterator&& other ) noexcept; | (3) | (since C++17) |
| explicit recursive_directory_iterator( const std::filesystem::path& p ); | (4) | (since C++17) |
| recursive_directory_iterator(  const std::filesystem::path& p, std::filesystem::directory_options options ); | (5) | (since C++17) |
| recursive_directory_iterator(  const std::filesystem::path& p,      std::filesystem::directory_options options, std::error_code& ec ); | (6) | (since C++17) |
| recursive_directory_iterator( const std::filesystem::path& p, std::error_code& ec ); | (7) | (since C++17) |
|  |  |  |

Constructs new recursive directory iterator.

1) Default constructor. Constructs an end iterator.2) Copy constructor.3) Move constructor.4-7) Constructs an iterator that refers to the first entry in the directory that p resolves to.

|  |  |
| --- | --- |
|  | This section is incomplete Reason: errors |

### Parameters

|  |  |  |
| --- | --- | --- |
| p | - | path to the filesystem object to which the directory iterator will refer |
| ec | - | out-parameter for error reporting in the non-throwing overloads |
| options | - | the set of BitmaskType options that control the behavior of the directory iterator |
| other | - | another directory iterator to use as source to initialize the directory iterator with |

### Exceptions

Any overload not marked `noexcept` may throw std::bad_alloc if memory allocation fails.

4,5) Throws std::filesystem::filesystem_error on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.6,7) Sets a std::error_code& parameter to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur.

### Notes

Recursive directory iterators do not follow directory symlinks by default. To enable this behavior, specify directory_options::follow_directory_symlink among the options option set.

### Example

|  |  |
| --- | --- |
|  | This section is incomplete Reason: no example |

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards.

| DR | Applied to | Behavior as published | Correct behavior |
| --- | --- | --- | --- |
| LWG 3013 | C++17 | `error_code` overload marked noexcept but can allocate memory | noexcept removed |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/recursive_directory_iterator/recursive_directory_iterator&oldid=158093>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 6 September 2023, at 06:26.