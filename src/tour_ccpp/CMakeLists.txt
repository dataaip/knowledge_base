# 创建一个名为 progcpp 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

# 为目标指定生成可执行文件名称
add_executable(progcpp ${CUR_DIR_SRCS}) 

# 为目标链接库
target_link_libraries(progcpp PRIVATE toolsmath utils)

# 为目标添加头文件包含路径
target_include_directories(progcpp PRIVATE ${CMAKE_SOURCE_DIR}/library)
target_include_directories(progcpp PRIVATE ${CMAKE_SOURCE_DIR}/thridparty)
target_include_directories(progcpp PRIVATE ${CMAKE_SOURCE_DIR}/include/tour_ccpp)

add_custom_target(other_app_target
    COMMAND ${CMAKE_COMMAND} -E echo "Custom command executed."
)