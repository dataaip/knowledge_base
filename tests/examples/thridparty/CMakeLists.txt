# 创建一个名为 example_thrid 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

# 为目标指定生成可执行文件名称
add_executable(example_thrid ${CUR_DIR_SRCS})

# 为目标链接库
target_link_libraries(example_thrid PRIVATE gflags::gflags Boost::program_options)

# 为目标添加头文件包含路径
target_include_directories(example_thrid PRIVATE ${CMAKE_SOURCE_DIR}/thridparty/cmdline_parser)
target_include_directories(example_thrid PRIVATE ${CMAKE_SOURCE_DIR}/thridparty/log_format)
target_include_directories(example_thrid PRIVATE ${CMAKE_SOURCE_DIR}/thridparty/general_purpose/boost)

target_include_directories(example_thrid PRIVATE ${CMAKE_SOURCE_DIR}/include/thridparty)
