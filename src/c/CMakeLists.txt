# 创建一个名为 progc 的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.c")

# 为目标指定生成可执行文件名称
add_executable(progc ${CUR_DIR_SRCS})

# 为目标链接库
target_link_libraries(progc PRIVATE mathAsmLib)
target_link_libraries(progc PRIVATE colorfmt)
target_link_libraries(progc PRIVATE logc)

# 正常的 C 程序，像是使用了 stdio 或是 stdlib 等库的程序在编译时都是直接编译的，不需要指定任何链接选项
# 如果程序中使用了 math 库，想要正确编译，就必须在其后加上 -lm 选项
target_link_libraries(progc PRIVATE m)  

# 为目标添加头文件包含路径
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/lib)
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/thridparty)