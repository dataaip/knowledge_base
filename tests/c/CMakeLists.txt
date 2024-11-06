# 创建一个名为App的可执行文件
file(GLOB_RECURSE CUR_DIR_SRCS "./*.c")
add_executable(variable_test ${CUR_DIR_SRCS})