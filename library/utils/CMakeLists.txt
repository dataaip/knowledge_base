add_library(utils STATIC utils.cpp)  # 创建一个名为UtilsLib的静态库

# 为目标添加头文件包含路径
target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})