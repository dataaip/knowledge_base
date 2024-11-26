# 设置cmake的最低版本
cmake_minimum_required(VERSION 3.22.0)
# 设置工程名称和版本
project(brightl-pl VERSION 0.1.1 LANGUAGES ASM C CXX)
# 设置指定的C++编译器版本是必须的，如果不设置，或者为OFF，则指定版本不可用时，会使用上一版本。
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 不接受编译器提供的C++扩展（便于跨编译器使用）
set(CMAKE_CXX_EXTENSIONS OFF)
# 指定为C++14 版本
set(CMAKE_CXX_STANDARD 14)
# 指定为C11 版本
set(CMAKE_C_STANDARD 11)
# 指令告诉 CMake 使用 Unix Makefile 生成器创建 Makefile 而不是 Ninja
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
# 指令告诉 CMake 生成 build/compile_commands.json 构建文件。
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
# CMAKE_BUILD_TYPE 是 CMake 中的一个重要变量，它决定了构建的类型。常见的取值有Debug（调试版本）、Release（发布版本）
set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Build type")
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release")

# CMake 中可以通过设置编译器标志来添加 -pg 和 -g 参数
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pg")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O1")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wextra")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -finput-charset=UTF-8 -fexec-charset=UTF-8")

# 包含子目录
add_subdirectory(lib/ToolsMathLib)        # 添加MathLib库的子目录
add_subdirectory(lib/UtilsLib)       # 添加UtilsLib库的子目录
add_subdirectory(lib/ColorfmtLib)       # 添加UtilsLib库的子目录
add_subdirectory(thridparty/log.c)       # 添加logc库的子目录
add_subdirectory(src/c)                # 添加源代码的子目录
add_subdirectory(src/asm)                # 添加源代码的子目录
add_subdirectory(src/cpp)                # 添加源代码的子目录
add_subdirectory(tests/c)                # 添加测试代码的子目录

# =================================================
# 安装
# 设置安装目录，以下表示安装在当前目录的myapp_install目录下，没有目录会自动创建
set(CMAKE_INSTALL_PREFIX "progc")
# 安装可执行文件：
# install(TARGETS App
#         RUNTIME DESTINATION bin)
install(TARGETS progc
        DESTINATION bin PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE WORLD_EXECUTE WORLD_READ)
# 安装库文件：
install(TARGETS ToolsMathLib UtilsLib
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
# 安装头文件：
        install(FILES "lib/ToolsMathLib/mathlib.h" "lib/UtilsLib/utilslib.h"
        DESTINATION include)
# 安装其他文件，暂时没有
# install(DIRECTORY "path/to/data"
#         DESTINATION share/mybasicapp)


# =================================================
# 打包
include(CPack)

set(CPACK_PACKAGE_NAME "BasicApp")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_CONTACT "")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "BasicApp - A Simple C++ Application")

# 选择打包格式
set(CPACK_GENERATOR "TGZ;DEB;RPM") 

# 配置依赖关系
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.14), libgcc1 (>= 1:3.0)")
