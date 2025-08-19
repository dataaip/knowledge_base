# 创建一个名为 progcpp 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

# 为目标指定生成可执行文件名称
add_library(menu_cmdline_cpp STATIC ${CUR_DIR_SRCS})

# 为目标添加头文件包含路径
target_include_directories(menu_cmdline_cpp PRIVATE ${CMAKE_SOURCE_DIR}/library/menu_manager/menu_cmdline_cpp)
target_include_directories(menu_cmdline_cpp PRIVATE ${CMAKE_SOURCE_DIR}/include/knowledge_base)

