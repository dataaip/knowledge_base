# 创建一个名为 progcpp 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

# 为目标指定生成可执行文件名称
add_executable(thridpa ${CUR_DIR_SRCS})

# 为目标链接库
target_link_libraries(thridpa PRIVATE gflags::gflags Boost::program_options)

# 为目标添加头文件包含路径
#target_include_directories(thridpa PRIVATE ${CMAKE_SOURCE_DIR}/thridparty/cmdline_parser)
#target_include_directories(thridpa PRIVATE ${CMAKE_SOURCE_DIR}/thridparty/log_format)
#target_include_directories(thridpa PRIVATE ${CMAKE_SOURCE_DIR}/thridparty/general_purpose/boost)

target_include_directories(thridpa PRIVATE ${CMAKE_SOURCE_DIR}/include/thridparty)
