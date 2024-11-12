# 创建一个名为App的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.cpp")

add_executable(progcpp ${CUR_DIR_SRCS}) 

target_link_libraries(progcpp PRIVATE ToolsMathLib UtilsLib)

# 为目标添加头文件包含路径
target_include_directories(progcpp PRIVATE ${CMAKE_SOURCE_DIR}/lib)
target_include_directories(progcpp PRIVATE ${CMAKE_SOURCE_DIR}/thridparty)
target_include_directories(progcpp PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_custom_target(other_app_target
    COMMAND ${CMAKE_COMMAND} -E echo "Custom command executed."
)