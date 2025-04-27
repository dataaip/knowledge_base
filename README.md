##  C/C++ 工程

### 一般的 C/C++ 工程目录

```bash   
brightl-pl/             项目目录结构   
├── .vscode/            存放 vscode 环境配置目录，包含了你的工作环境配置如调试、任务、格式化  
├── bin/                存放项目编译后的二进制文件，可执行文件、静态、动态链接库文件       
├── build/              存放项目编译的中间文件、构建的中间文件 
├── cmake/              存放 cmake、make 构建的配置和脚本文件
├── config/             存放项目运行所需的配置文件       
├── dist/               存放项目可部署的项目，包括各种环境依赖的安装包  
├── doc/                存放项目中的描述文档，包括说明性质的文档              
├── docker/             存放项目 docker 环境配置文件，包含 Dockerfile 和与 docker 相关的脚本   
├── env/                存放与环境配置相关的文件  
├── examples/           存放项目示例相关代码 
└── include/            存放项目公共的、对外头文件目录，包含 C/C++ 的 .h、.hpp 文件     
├── lib/                存放项目依赖的库文件，或静态库、动态链接库          
├── resource/           存放项目使用的资源文件，如图像、音频
├── install/            存放项目安装目录，存放bin、lib、include文件目录   
└── src/                存放项目的源代码文件              
    ├── asm/
    ├── c/             
    └── cpp/      
├── test/               存放项目的测试代码文件     
├── thirdparty/         存放项目依赖的第三方库文件      
├── todo/               存放项目 TODO 清单   
├── tools/              存放项目提供的工具包   
├── .clang-format       存放项目自动格式化 C++ 代码配置文件   
├── .clang-tidy         存放项目静态分析 C++ 代码的质量和风格配置文件   
├── .gitgnore           存放项目 git 忽略版本控制配置文件 
├── .gitattributes      存放项目 gitattributes 配置文件，定义特定路径目录子目录或文件类型的属性和行为
├── .gitmodules         存放项目 git modules 配置文件   
├── BUILD.md            存放项目构建文档文件，包含如何构建项目、运行项目
├── configure           存放项目 configure 脚本，基于 Autotools 项目，用于配置和生成适合当前系统环境的 Makefile
├── Makefile            存放项目 Make 构建的配置文件
├── CMakeLists.txt      存放项目 CMake 构建的配置文件，包含了如何构建项目的指南   
├── CMakePresets.json   存放项目 CMake 预设的配置文件   
├── LICENSE             存放项目的许可证信息   
└── README.md           存放项目的说明和描述信息
```

### 项目进度优化

- 项目的每一行代码、每一个源文件、每一个模块都按照 C/C++ 标准代码风格规范来严格执行。

### 您在开发C++程序呀？

- 哪个系统啊？Win、Linux……
- 谁家编译器啊？VC、GCC、MinGW、clang++……
- 啥语言版本啊？98、03、11、14、17、20……
- 目标平台呢？x86、x64、arm64、cross……
- 目标文件咧？exe、lib、dll、c、asm……
- 开优化/分析不？Debug、Release、O123、-g、-pg……
- 函数调用方式？cdecl、stdcall、fastcall……
- 数据存储方式？auto、static、const、constexpr、extern、mutable、volatile、register、thread_local……
- 要线程不？ML/MT/MD……
- 异常模型用的啥？SJLJ、SEH、DW2……
- 字符集？MBCS、Unicode……
- char带符号不、wchar_t是2字节还是4字节？……
- 用了模板？传说有module、export、import……
- 客户还要兼容XP啊？v141_xp + WinSDK7考虑一下……
- 困难？还行吧，小时候指针还分near、far、huge呢……