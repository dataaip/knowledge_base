# std::filesystem::path::generic_string, std::filesystem::path::generic_wstring, std::filesystem::path::generic_u8string, std::filesystem::path::generic_u16string, std::filesystem::path::generic_u32string

From cppreference.com
< cpp‎ | filesystem‎ | path
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

std::filesystem::path

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| Member types | | | | |
| Member constants | | | | |
| path::native_formatpath::generic_formatpath::auto_format | | | | |
| Member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::path | | | | | | path::~path | | | | | | path::operator= | | | | | | path::assign | | | | | | path::appendpath::operator/= | | | | | | path::concatpath::operator+= | | | | | | path::clear | | | | | | path::make_preferred | | | | | | path::remove_filename | | | | | | path::replace_filename | | | | | | path::replace_extension | | | | | | path::swap | | | | | | path::compare | | | | | | path::beginpath::end | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::c_strpath::nativepath::operator string_type | | | | | | path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring | | | | | | ****path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring**** | | | | | | path::lexically_normalpath::lexically_relativepath::lexically_proximate | | | | | |  | | | | | |
| Path decomposition | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::root_name | | | | | | path::root_directory | | | | | | path::root_path | | | | | | path::relative_path | | | | | | path::parent_path | | | | | | path::filename | | | | | | path::stem | | | | | | path::extension | | | | | | path::empty | | | | | |  | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | path::has_root_pathpath::has_root_namepath::has_root_directorypath::has_relative_pathpath::has_parent_pathpath::has_filenamepath::has_stempath::has_extension | | | | | | path::is_absolutepath::is_relative | | | | | |
| Non-member functions | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator==operator!=operator<operator<=operator>operator>=operator<=>(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20) | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | operator/ | | | | | | operator<<operator>> | | | | | | swap(std::filesystem::path) | | | | | | hash_value | | | | | | u8path | | | | | |
| Helper classes | | | | |
| |  |  |  |  |  | | --- | --- | --- | --- | --- | | hash<std::filesystem::path> | | | | | | |  |  |  |  |  | | --- | --- | --- | --- | --- | | formatter<std::filesystem::path>(C++26) | | | | | |

|  |  |  |
| --- | --- | --- |
| template< class CharT, class Traits = std::char_traits<CharT>,  class Alloc = std::allocator<CharT> >  std::basic_string<CharT,Traits,Alloc>     generic_string( const Alloc& a = Alloc() ) const; | (1) | (since C++17) |
|  |  |  |
| --- | --- | --- |
|  | (2) | (since C++17) |
| std::string generic_string() const; |  |  |
| std::wstring generic_wstring() const; |  |  |
| std::u16string generic_u16string() const; |  |  |
| std::u32string generic_u32string() const; |  |  |
|  |  |  |
| --- | --- | --- |
|  | (3) |  |
| std::string generic_u8string() const; |  | (since C++17)  (until C++20) |
| std::u8string generic_u8string() const; |  | (since C++20) |
|  |  |  |
| --- | --- | --- |
|  |  |  |

Returns the internal pathname in generic pathname format, converted to specific string type. Conversion, if any, is specified as follows:

- If `path::value_type` is char, conversion, if any, is system-dependent. This is the case on typical POSIX systems (such as Linux), where native encoding is UTF-8 and `string()` performs no conversion.
- Otherwise, if `path::value_type` is wchar_t, conversion, if any, is unspecified. This is the case on Windows, where wchar_t is 16 bit and the native encoding is UTF-16.
- Otherwise, if `path::value_type` is char16_t, native encoding is UTF-16 and the conversion method is unspecified.
- Otherwise, if `path::value_type` is char32_t, native encoding is UTF-32 and the conversion method is unspecified.
- Otherwise, if `path::value_type` is char8_t, native encoding is UTF-8 and the conversion method is unspecified.

The `/` character is used as the directory separator.

1) All memory allocations are performed by a.3) The result encoding in the case of `u8string()` is always UTF-8.

### Parameters

|  |  |  |
| --- | --- | --- |
| a | - | allocator to construct the string with |
| Type requirements | | |
| -`CharT` must be one of the encoded character types (char, wchar_t, char8_t(since C++20), char16_t and char32_t). | | |

### Return value

The internal pathname in generic pathname format, converted to specified string type.

### Exceptions

May throw implementation-defined exceptions.

### Example

Run this code

```
#include <cstddef>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <span>
#include <string_view>
 
void print(std::string_view rem, auto const& str)
{
    std::cout << rem << std::hex << std::uppercase << std::setfill('0');
    for (const auto b : std::as_bytes(std::span{str}))
        std::cout << std::setw(2) << std::to_integer<unsigned>(b) << ' ';
    std::cout << '\n';
}
 
int main()
{
    std::filesystem::path p{"/家/屋"};
    std::cout << p << '\n';
 
    print("string    : ", p.generic_string());
    print("u8string  : ", p.generic_u8string());
    print("u16string : ", p.generic_u16string());
    print("u32string : ", p.generic_u32string());
    print("wstring   : ", p.generic_wstring());
}

```

Possible output:

```
"/家/屋"
string    : 2F E5 AE B6 2F E5 B1 8B
u8string  : 2F E5 AE B6 2F E5 B1 8B
u16string : 2F 00 B6 5B 2F 00 4B 5C
u32string : 2F 00 00 00 B6 5B 00 00 2F 00 00 00 4B 5C 00 00
wstring   : 2F 00 00 00 B6 5B 00 00 2F 00 00 00 4B 5C 00 00

```

### See also

|  |  |
| --- | --- |
| stringwstringu8stringu16stringu32string | returns the path in native pathname format converted to a string   (public member function) |

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/path/generic_string&oldid=159794>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 29 September 2023, at 00:06.