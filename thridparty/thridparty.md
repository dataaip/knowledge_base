# 跨平台安装

Boost.Program_options 是 Boost C++ 库的一部分，用于解析命令行选项。以下是安装 Boost.Program_options 的几种方法：

## 方法一：使用包管理器安装（推荐）

### Ubuntu/Debian
```bash
sudo apt-get update
sudo apt-get install libboost-program-options-dev
```

### CentOS/RHEL/Fedora
```bash
# CentOS/RHEL
sudo yum install boost-devel
# 或者 Fedora
sudo dnf install boost-devel
```

### macOS (使用 Homebrew)
```bash
brew install boost
```

## 方法二：从源码编译安装

### 1. 下载 Boost
```bash
wget https://boostorg.jfrog.io/artifactory/main/release/1.83.0/source/boost_1_83_0.tar.gz
tar -xzf boost_1_83_0.tar.gz
cd boost_1_83_0
```

### 2. Bootstrap 和编译
```bash
./bootstrap.sh --with-libraries=program_options
./b2
```

### 3. 安装
```bash
sudo ./b2 install
```

## 方法三：使用 vcpkg（跨平台）

```bash
# 安装 vcpkg（如果还没安装）
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh  # Linux/macOS
# 或 ./bootstrap-vcpkg.bat  # Windows

# 安装 boost-program-options
./vcpkg install boost-program-options
```

## 验证安装

创建一个简单的测试程序 `test.cpp`：

```cpp
#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        po::options_description desc("Allowed options");
        desc.add_options()
            ("help", "produce help message")
            ("verbose", "verbose output")
            ("input-file", po::value<std::string>(), "input file");
        
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);
        
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
        
        std::cout << "Program_options installed correctly!" << std::endl;
        
    } catch(std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

编译测试程序：
```bash
g++ -o test test.cpp -lboost_program_options
./test --help
```

## CMake 配置示例

如果你使用 CMake，可以在 `CMakeLists.txt` 中添加：

```cmake
find_package(Boost REQUIRED COMPONENTS program_options)

target_link_libraries(your_target 
    ${Boost_PROGRAM_OPTIONS_LIBRARY}
)

target_include_directories(your_target PRIVATE 
    ${Boost_INCLUDE_DIRS}
)
```

## 常见问题

1. **找不到库文件**：确保库文件路径在链接器搜索路径中
2. **版本不匹配**：确保编译器和库版本兼容
3. **权限问题**：在安装时可能需要 sudo 权限

选择最适合你系统和需求的安装方法即可。

---

# 子项目
将 Boost 作为子项目添加到你的项目中是一个很好的做法，可以确保项目依赖的一致性。以下是几种方法：

## 方法一：使用 Git Submodule

### 1. 添加 Boost 作为子模块
```bash
git submodule add https://github.com/boostorg/boost.git external/boost
git submodule update --init --recursive
```

### 2. 创建 CMakeLists.txt 配置
在你的主 CMakeLists.txt 中添加：

```cmake
cmake_minimum_required(VERSION 3.14)
project(YourProject)

# 添加 Boost 子模块
add_subdirectory(external/boost)

# 你的可执行文件
add_executable(your_app main.cpp)

# 链接 Boost.Program_options
target_link_libraries(your_app 
    Boost::program_options
    # 其他需要的 Boost 库
)
```

## 方法二：下载并构建特定版本

### 1. 创建获取脚本
创建 `scripts/get_boost.cmake`：

```cmake
set(BOOST_VERSION "1.83.0")
set(BOOST_URL "https://boostorg.jfrog.io/artifactory/main/release/${BOOST_VERSION}/source/boost_${BOOST_VERSION_MAJOR}_${BOOST_VERSION_MINOR}_${BOOST_VERSION_PATCH}.tar.gz")

# 下载 Boost
include(FetchContent)
FetchContent_Declare(
    boost
    URL ${BOOST_URL}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/boost
)

FetchContent_MakeAvailable(boost)
```

### 2. 在主 CMakeLists.txt 中使用
```cmake
cmake_minimum_required(VERSION 3.14)
project(YourProject)

# 获取 Boost
include(scripts/get_boost.cmake)

# 或者直接使用 FetchContent
include(FetchContent)
FetchContent_Declare(
    Boost
    URL https://boostorg.jfrog.io/artifactory/main/release/1.83.0/source/boost_1_83_0.tar.gz
)
FetchContent_MakeAvailable(Boost)

# 添加你的源码
add_executable(your_app main.cpp)

# 链接 Boost 库
target_link_libraries(your_app PRIVATE 
    Boost::program_options
)
```

## 方法三：使用 CMake 的 FetchContent（推荐）

### 1. 在 CMakeLists.txt 中添加：
```cmake
cmake_minimum_required(VERSION 3.14)
project(YourProject)

include(FetchContent)

# 获取 Boost
FetchContent_Declare(
    Boost
    GIT_REPOSITORY https://github.com/boostorg/boost.git
    GIT_TAG boost-1.83.0
)

# 只获取特定的子库
set(BOOST_ENABLE_CMAKE ON)
set(BOOST_INCLUDE_LIBRARIES program_options system)
FetchContent_MakeAvailable(Boost)

# 创建你的可执行文件
add_executable(your_app main.cpp)

# 链接 Boost 库
target_link_libraries(your_app 
    PRIVATE 
        Boost::program_options
)
```

## 方法四：手动下载和集成

### 1. 创建项目结构
```
your_project/
├── CMakeLists.txt
├── src/
│   └── main.cpp
├── external/
│   └── boost/
│       ├── libs/
│       ├── boost/
│       └── CMakeLists.txt
└── include/
```

### 2. 下载 Boost 库
```bash
mkdir -p external/boost
cd external/boost
wget https://boostorg.jfrog.io/artifactory/main/release/1.83.0/source/boost_1_83_0.tar.gz
tar -xzf boost_1_83_0.tar.gz
mv boost_1_83_0/* .
cd ../..
```

### 3. CMakeLists.txt 配置
```cmake
cmake_minimum_required(VERSION 3.14)
project(YourProject)

# 设置 Boost 路径
set(BOOST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/external/boost)
set(Boost_NO_SYSTEM_PATHS ON)

# 查找 Boost 库
find_package(Boost REQUIRED COMPONENTS program_options)

# 添加可执行文件
add_executable(your_app src/main.cpp)

# 链接 Boost
target_include_directories(your_app PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(your_app PRIVATE ${Boost_LIBRARIES})
```

## 示例：完整的工作项目

### 项目结构
```
my_project/
├── CMakeLists.txt
├── src/
│   └── main.cpp
└── external/
    └── .gitkeep
```

### CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# 使用 FetchContent 获取 Boost
include(FetchContent)

FetchContent_Declare(
    Boost
    URL https://boostorg.jfrog.io/artifactory/main/release/1.83.0/source/boost_1_83_0.tar.gz
    DOWNLOAD_EXTRACT_TIMESTAMP true
)

# 设置 Boost 配置
set(Boost_USE_STATIC_LIBS ON)
set(BOOST_ENABLE_CMAKE ON)
set(BOOST_INCLUDE_LIBRARIES program_options)

FetchContent_MakeAvailable(Boost)

# 创建可执行文件
add_executable(my_app src/main.cpp)

# 链接 Boost.Program_options
target_link_libraries(my_app PRIVATE Boost::program_options)

# 设置包含目录
target_include_directories(my_app PRIVATE 
    ${Boost_INCLUDE_DIRS}
)
```

### src/main.cpp 示例
```cpp
#include <boost/program_options.hpp>
#include <iostream>
#include <string>

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {
        po::options_description desc("Allowed options");
        desc.add_options()
            ("help,h", "produce help message")
            ("input-file,i", po::value<std::string>(), "input file")
            ("verbose,v", "verbose output");
        
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);
        
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
        
        if (vm.count("input-file")) {
            std::cout << "Input file: " << vm["input-file"].as<std::string>() << std::endl;
        }
        
        if (vm.count("verbose")) {
            std::cout << "Verbose mode enabled" << std::endl;
        }
        
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
```

## 构建项目

```bash
mkdir build
cd build
cmake ..
make
./my_app --help
```

这种方法的优点：
1. **版本控制**：依赖版本固定在项目中
2. **可重现性**：任何人克隆项目都能得到相同的依赖
3. **离线构建**：不需要网络连接也可以构建
4. **隔离性**：不会影响系统其他项目