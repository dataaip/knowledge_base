# 创建一个名为 tour_cpp 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

# 为目标指定生成可执行文件名称
add_executable(tour_cpp ${CUR_DIR_SRCS})

# 为目标链接库
target_link_libraries(tour_cpp PRIVATE menu_cmdline_cpp)

# 为目标添加头文件包含路径
target_include_directories(tour_cpp PRIVATE ${CMAKE_SOURCE_DIR}/include/knowledge_base)
target_include_directories(tour_cpp PRIVATE ${CMAKE_SOURCE_DIR}/library)

add_custom_target(other_app_target
    COMMAND ${CMAKE_COMMAND} -E echo "Custom command executed."
)