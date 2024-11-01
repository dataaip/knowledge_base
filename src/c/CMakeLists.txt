# 创建一个名为App的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.c")
add_executable(progc ${CUR_DIR_SRCS})


target_link_libraries(progc PRIVATE mathAsmLib)

target_link_libraries(progc PRIVATE colorfmt)
target_link_libraries(progc PRIVATE logc)
# 为目标添加头文件包含路径
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/lib)
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/thridparty)