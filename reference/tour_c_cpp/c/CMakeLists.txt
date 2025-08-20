# 创建一个名为 tour_c 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.c")

# 为目标指定生成可执行文件名称
add_executable(tour_c ${CUR_DIR_SRCS})

# 为目标链接库
target_link_libraries(tour_c PRIVATE toolsmath utils)

# 为目标添加头文件包含路径
target_include_directories(tour_c PRIVATE ${CMAKE_SOURCE_DIR}/library)
target_include_directories(tour_c PRIVATE ${CMAKE_SOURCE_DIR}/thridparty)