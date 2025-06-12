file(GLOB_RECURSE CUR_CPP_DIR_SRCS "./*.cpp")
add_executable(guess_game_cpp ${CUR_CPP_DIR_SRCS})

file(GLOB_RECURSE CUR_C_DIR_SRCS "./*.c")
add_executable(guess_game_c ${CUR_C_DIR_SRCS})