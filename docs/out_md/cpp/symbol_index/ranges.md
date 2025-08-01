# std::ranges Symbol Index

From cppreference.com
< cpp‎ | symbol index
C++Symbol Index

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| std | | | | |
| std::chrono(C++11) | | | | |
| std::execution(C++17) | | | | |
| std::filesystem(C++17) | | | | |
| std::linalg(C++26) | | | | |
| std::literals(C++14) | | | | |
| std::numbers(C++20) | | | | |
| std::placeholders(C++11) | | | | |
| std::pmr(C++17) | | | | |
| ****std::ranges****(C++20) | | | | |
| std::regex_constants(C++11) | | | | |
| std::rel_ops(deprecated in C++20) | | | | |
| std::this_thread(C++11) | | | | |
| Macros | | | | |
| Removed symbols (Zombie names) | | | | |
| Exposition-only symbols | | | | |

****std::ranges****

|  |  |  |  |  |
| --- | --- | --- | --- | --- |
| std::ranges::views(C++20) | | | | |

This page tries to list all the symbols that are available from the standard library (ranges library) in the namespace std::ranges. The symbols are written as follows:

- Function names with `()`.
- Templates with `<>`.

Symbols from std::ranges's sub-namespaces (e.g. views) are not listed here, but the namespace names (prepended with the icon ▶) are the links to the corresponding pages.

## `A B C D E F G I J K L M N O P R S T U V W Z`

### A

adjacent_find (since C++23)  
adjacent_transform_view<> (since C++23)  
adjacent_view<> (since C++23)  
advance (since C++20)  
all_of (since C++20)  
any_of (since C++20)  
as_const_view<> (since C++23)  
as_rvalue_view<> (since C++23)

### B

basic_istream_view<> (since C++20)  
begin (since C++20)  
bidirectional_range<> (since C++20)  
binary_search (since C++20)  
binary_transform_result<> (since C++20)  
borrowed_iterator_t<> (since C++20)  
borrowed_range<> (since C++20)  
borrowed_subrange_t<> (since C++20)

### C

cartesian_product_view<> (since C++23)  
cbegin (since C++20)  
cdata (since C++20)  
chunk_by_view<> (since C++23)  
chunk_view<> (since C++23)  
cend (since C++20)  
clamp (since C++20)  
common_range<> (since C++20)  
common_view<> (since C++20)  
concat_view<> (since C++26)  
const_iterator_t<> (since C++23)  
constant_range<> (since C++23)  
construct_at (since C++20)  
contains (since C++23)  
contains_subrange (since C++23)  
contiguous_range<> (since C++20)  
copy (since C++20)  
copy_backward (since C++20)  
copy_backward_result<> (since C++20)  
copy_if (since C++20)  
copy_if_result<> (since C++20)  
copy_n (since C++20)  
copy_n_result<> (since C++20)  
copy_result<> (since C++20)  
count (since C++20)  
count_if (since C++20)  
crbegin (since C++20)  
crend (since C++20)

### D

dangling (since C++20)  
data (since C++20)  
destroy (since C++20)  
destroy_at (since C++20)  
destroy_n (since C++20)  
disable_sized_range<> (since C++20)  
distance (since C++20)  
drop_view<> (since C++20)  
drop_while_view<> (since C++20)

### E

elements_of<> (since C++23)  
elements_view<> (since C++20)  
enumerate_view<> (since C++23)  
empty (since C++20)  
empty_view<> (since C++20)  
enable_borrowed_range<> (since C++20)  
enable_view<> (since C++20)  
end (since C++20)  
ends_with (since C++23)  
equal (since C++20)  
equal_range (since C++20)  
equal_to (since C++20)

### F

fill (since C++20)  
fill_n (since C++20)  
filter_view<> (since C++20)  
find (since C++20)  
find_end (since C++20)  
find_first_of (since C++20)  
find_if (since C++20)  
find_if_not (since C++20)  
find_last (since C++23)  
find_last_if (since C++23)  
find_last_if_not (since C++23)  
fold_left (since C++23)  
fold_left_first (since C++23)  
fold_left_first_with_iter (since C++23)  
fold_left_with_iter (since C++23)  
fold_right (since C++23)  
fold_right_last (since C++23)  
for_each (since C++20)  
for_each_n (since C++20)  
for_each_n_result<> (since C++20)  
for_each_result<> (since C++20)  
forward_range<> (since C++20)

### G

generate (since C++20)  
generate_n (since C++20)  
get<>() (`std::ranges::subrange`) (since C++20)  
greater (since C++20)  
greater_equal (since C++20)

### I

in_found_result<> (since C++20)  
in_fun_result<> (since C++20)  
in_in_out_result<> (since C++20)  
in_in_result<> (since C++20)  
in_out_out_result<> (since C++20)  
in_out_result<> (since C++20)  
in_value_result<> (since C++23)  
includes (since C++20)  
inplace_merge (since C++20)  
input_range<> (since C++20)  
iota (since C++23)  
iota_result<> (since C++23)  
iota_view<> (since C++20)  
is_heap (since C++20)  
is_heap_until (since C++20)  
is_partitioned (since C++20)  
is_permutation (since C++20)  
is_sorted (since C++20)  
is_sorted_until (since C++20)  
istream_view<> (since C++20)  
iter_move (since C++20)  
iter_swap (since C++20)  
iterator_t<> (since C++20)

### J

join_view<> (since C++20)  
join_with_view<> (since C++23)

### K

keys_view<> (since C++20)

### L

lazy_split_view<> (since C++20)  
less (since C++20)  
less_equal (since C++20)  
lexicographical_compare (since C++20)  
lower_bound (since C++20)

### M

make_heap (since C++20)  
max (since C++20)  
max_element (since C++20)  
merge (since C++20)  
merge_result<> (since C++20)  
min (since C++20)  
min_element (since C++20)  
min_max_result<> (since C++20)  
minmax (since C++20)  
minmax_element (since C++20)  
minmax_element_result<> (since C++20)  
minmax_result<> (since C++20)  
mismatch (since C++20)  
mismatch_result<> (since C++20)  
move (since C++20)  
move_backward (since C++20)  
move_backward_result<> (since C++20)  
move_result<> (since C++20)

### N

next (since C++20)  
next_permutation (since C++20)  
next_permutation_result<> (since C++20)  
none_of (since C++20)  
not_equal_to (since C++20)  
nth_element (since C++20)

### O

out_value_result<> (since C++23)  
output_range<> (since C++20)  
owning_view<> (since C++20)

### P

partial_sort (since C++20)  
partial_sort_copy (since C++20)  
partial_sort_copy_result<> (since C++20)  
partition (since C++20)  
partition_copy (since C++20)  
partition_copy_result<> (since C++20)  
partition_point (since C++20)  
pop_heap (since C++20)  
prev (since C++20)  
prev_permutation (since C++20)  
prev_permutation_result<> (since C++20)  
push_heap (since C++20)

### R

random_access_range<> (since C++20)  
range<> (since C++20)  
range_adaptor_closure<> (since C++23)  
range_const_reference_t<> (since C++23)  
range_difference_t<> (since C++20)  
range_reference_t<> (since C++20)  
range_rvalue_reference_t<> (since C++20)  
range_size_t<> (since C++20)  
range_value_t<> (since C++20)  
rbegin (since C++20)  
ref_view<> (since C++20)  
remove (since C++20)  
remove_copy (since C++20)  
remove_copy_if (since C++20)  
remove_copy_if_result<> (since C++20)  
remove_copy_result<> (since C++20)  
remove_if (since C++20)  
rend (since C++20)  
repeat_view<> (since C++23)  
replace (since C++20)  
replace_copy (since C++20)  
replace_copy_if (since C++20)  
replace_copy_if_result<> (since C++20)  
replace_copy_result<> (since C++20)  
replace_if (since C++20)  
reverse (since C++20)  
reverse_copy (since C++20)  
reverse_copy_result<> (since C++20)  
reverse_view<> (since C++20)  
rotate (since C++20)  
rotate_copy (since C++20)  
rotate_copy_result<> (since C++20)

### S

sample (since C++20)  
search (since C++20)  
search_n (since C++20)  
sentinel_t<> (since C++20)  
set_difference (since C++20)  
set_difference_result<> (since C++20)  
set_intersection (since C++20)  
set_intersection_result<> (since C++20)  
set_symmetric_difference (since C++20)  
set_symmetric_difference_result<> (since C++20)  
set_union (since C++20)  
set_union_result<> (since C++20)  
shift_left (since C++23)  
shift_right (since C++23)  
shuffle (since C++20)  
single_view<> (since C++20)  
size (since C++20)  
sized_range<> (since C++20)  
sort (since C++20)  
sort_heap (since C++20)  
slide_view<> (since C++23)  
split_view<> (since C++20)  
ssize (since C++20)  
stable_partition (since C++20)  
stable_sort (since C++20)  
starts_with (since C++23)  
stride_view<> (since C++23)  
subrange<> (since C++20)  
subrange_kind (since C++20)  
swap (since C++20)  
swap_ranges (since C++20)  
swap_ranges_result<> (since C++20)

### T

take_view<> (since C++20)  
take_while_view<> (since C++20)  
transform (since C++20)  
to<> (since C++23)  
transform_view<> (since C++20)

### U

unary_transform_result<> (since C++20)  
uninitialized_copy (since C++20)  
uninitialized_copy_n (since C++20)  
uninitialized_copy_n_result<> (since C++20)  
uninitialized_copy_result<> (since C++20)  
uninitialized_default_construct (since C++20)  
uninitialized_default_construct_n (since C++20)  
uninitialized_fill (since C++20)  
uninitialized_fill_n (since C++20)  
uninitialized_move (since C++20)  
uninitialized_move_n (since C++20)  
uninitialized_move_n_result<> (since C++20)  
uninitialized_move_result<> (since C++20)  
uninitialized_value_construct (since C++20)  
uninitialized_value_construct_n (since C++20)  
unique (since C++20)  
unique_copy (since C++20)  
unique_copy_result<> (since C++20)  
upper_bound (since C++20)

### V

values_view<> (since C++20)  
view<> (since C++20)  
view_base (since C++20)  
view_interface<> (since C++20)  
viewable_range<> (since C++20)  
▶ `views` (since C++20)

### W

wistream_view<> (since C++20)

### Z

zip_transform_view<> (since C++23)  
zip_view<> (since C++23)

Retrieved from "<https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/ranges&oldid=177954>"

##### Navigation

- Online version
- Offline version retrieved 2025-02-09 16:39.

- This page was last modified on 25 November 2024, at 10:37.