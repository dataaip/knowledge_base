# 创建一个名为App的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.c")
add_executable(progc ${CUR_DIR_SRCS})

# 启用汇编语言支持
set_source_files_properties(math.s PROPERTIES LANGUAGE ASM)
enable_language(ASM)

add_library(mathAsmLibrary math.s) 
target_link_libraries(progc PRIVATE mathAsmLibrary)
target_include_directories(mathAsmLibrary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(progc PRIVATE colorfmt)
target_link_libraries(progc PRIVATE logc)
# 为目标添加头文件包含路径
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/lib)
target_include_directories(progc PRIVATE ${CMAKE_SOURCE_DIR}/thridparty)