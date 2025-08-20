# 创建一个名为 example_knowbase 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

# 为目标指定生成可执行文件名称
add_executable(example_knowbase ${CUR_DIR_SRCS})

# 为目标链接库
target_link_libraries(example_knowbase PRIVATE menu_cmdline_cpp)

# 为目标添加头文件包含路径

target_include_directories(example_knowbase PRIVATE ${CMAKE_SOURCE_DIR}/include/knowledge_base)
target_include_directories(example_knowbase PRIVATE ${CMAKE_SOURCE_DIR}/library)

target_include_directories(example_knowbase PRIVATE ${CMAKE_SOURCE_DIR}/include/thridparty)
