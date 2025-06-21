file(GLOB_RECURSE CUR_CPP_DIR_SRCS "./*.cpp")
add_executable(calculator_cpp ${CUR_CPP_DIR_SRCS})

file(GLOB_RECURSE CUR_C_DIR_SRCS "./*.c")
add_executable(calculator_c ${CUR_C_DIR_SRCS})

target_link_libraries(calculator_c PUBLIC m)
