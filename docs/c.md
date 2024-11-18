# pl c 编程文档
- [pl c 编程文档](#pl-c-编程文档)
    - [相关网站资料](#相关网站资料)
    - [compiler](#compiler)
    - [build](#build)
    - [profiling](#profiling)
    - [standard](#standard)
    - [variable](#variable)
    - [expressions](#expressions)
    - [statements](#statements)
    - [datalife](#datalife)
    - [iostream](#iostream)
    - [memory](#memory)
    - [thread](#thread)
    - [errno](#errno)
    - [preprocessor](#preprocessor)
    - [headers](#headers)
    - [containers](#containers)
    - [algorithms](#algorithms)
    - [library](#library)
    - [miscellaneous](#miscellaneous)

### 相关网站资料
- cprimerplus  6th
- 编程语言排行榜 https://www.tiobe.com/tiobe-index/
- github https://github.com/
- c/c++官网 https://isocpp.org/
- c/c++标准 https://www.open-std.org/
- iso标准组织 c的标准(ISO/IEC 9899) c++的标准(ISO/IEC 14882) https://www.iso.org/ 
- gnu官网 https://www.gnu.org/
- llvm官网 https://llvm.org/
- gcc官网 https://gcc.gnu.org/
- clang官网 https://clang.llvm.org/
- msvc网站 https://visualstudio.microsoft.com/
- 开源软件社区 https://sourceware.org/
- c/c++参考网站 https://en.cppreference.com/
- c/c++学习网站 https://cplusplus.com/
- c/c++在线编译器网站 https://godbolt.org/
- 
- cmake参考网站 https://cmake.org/
- make参考网站 https://www.gnu.org/software/make/
- make学习网站 https://makefiletutorial.com/
- 
- gnu gprof性能分析工具 https://ftp.gnu.org/old-gnu/Manuals/gprof-2.9.1/html_mono/gprof.html 
- linux perf性能分析工具 https://perf.wiki.kernel.org/index.php/Main_Page
- valgrind性能分析工具 https://valgrind.org/
- gperftools性能分析工具 https://github.com/gperftools/gperftools
- sanitizer性能分析工具集 https://github.com/google/Sanitizers
- visual studio profiler性能分析工具 https://learn.microsoft.com/zh-cn/visualstudio
- cppcheck静态代码分析工具 https://cppcheck.sourceforge.io/
- clang-tidy静态代码分析工具 https://clang.llvm.org/extra/clang-tidy/
- 
- google代码风格指南 https://google.github.io/styleguide/cppguide.html
- clang-format代码格式化 https://clang.llvm.org/docs/ClangFormat.html

### compiler
- 编译过程 
- 编译工具链

### build
- 构建系统
- 跨平台的构建系统
- 包管理器
- 项目架构规范
- 目录结构规范

### profiling
- 性能分析
- 代码检测

### standard
- c标准
- 代码风格规范：注释
- 代码格式化
- 程序结构    

### variable
类型、声明、初始化、关键词
- 整型 integer
- 布尔类型 boolean
- 字符 character
- 字符串 string
- 浮点型 floating 
- 枚举 enumeration
- 结构体 structure
- 联合体 unions 
- 数组：数组、二维数组、三维数组、多维数组 arrays
- 指针：指针、指针数组、指针字符串、指针函数、函数指针、多级指针、指针数组、数组指针 pionters
- 函数：函数、函数指针、指针函数 functions
- void voidtypes
- 原子 atomics
- 关键词  keywords
- 初始化 initialization
- 声明 declarations  

### expressions
表达式和运算符
- 赋值表达式
- 算术运算
- 位运算
- 逻辑运算
- 三元运算
- 运算优先级

### statements
控制语句和作用域
- 顺序语句
- 选择语句
- 循环语句
- 跳转语句

### datalife
数据生存
- 作用域
- 生存期
- 存储期
- 对齐要求
- 大小
- 有效类型
- 值
- 标识符
- 命名空间
- 未定义行为
- 内存模型与数据竞争  

### iostream
文件操作和流处理
- <stdio.h>
- <wchar.h>

### memory
内存操作和管理
- <stdlib.h>

### thread
线程操作和管理
- <threads.h>
- <pthread.h>

### errno
异常处理和管理
- <errno.h>  

### preprocessor
预处理器
- 预处理指令
- #if, #ifdef, #ifndef, #else, #elif, #elifdef, #elifndef、#endif
- #define、#undef 
- #include
- #error、#warning
- #pragma
- #line   

### headers
头文件和标准库
- <assert.h>
- <complex.h>
- <ctype.h>
- <errno.h>
- <fenv.h>
- <float.h>
- <inttypes.h>
- <iso646.h>
- <limits.h>
- <locale.h>
- <math.h>
- <setjmp.h>
- <signal.h>
- <stdalign.h>
- <stdarg.h>
- <stdatomic.h>
- <stdbit.h>
- <stdbool.h>
- <stdckdint.h>
- <stddef.h>
- <stdint.h>
- <stdio.h>
- <stdlib.h>
- <stdnoreturn.h>
- <string.h>
- <tgmath.h>
- <threads.h>
- <time.h>
- <uchar.h>
- <wchar.h>
- <wctype.h>   

### containers
容器库
- 数据结构

### algorithms
算法库
- 算法

### library
扩展C库   
- C库    

### miscellaneous
扩展功能
- 内联汇编
- 信号处理
- 可分析性    



/*
各种动物和家禽的英文名称有很多，以下是一些常见的：
一、哺乳动物
1. 猫 cat
2. 狗 dog
3. 兔子 rabbit
4. 老鼠 mouse
5. 猪 pig
6. 牛 cow
7. 羊 sheep
8. 马 horse
9. 猴子 monkey
10. 熊猫 panda
11. 狮子 lion
12. 老虎 tiger
13. 熊 bear
14. 袋鼠 kangaroo
15. 大象 elephant
16. 狼 wolf
17. 狐狸 fox
18. 鹿 deer
19. 大猩猩 gorilla
20. 犀牛 rhinoceros
21. 河马 hippopotamus
22. 骆驼 camel
23. 海豹 seal
25. 海豚 dolphin
26. 鲸鱼 whale
27. 蝙蝠 bat
28. 松鼠 squirrel
29. 穿山甲 pangolin
30. 树懒 sloth
31. 浣熊 raccoon
32. 水獭 otter
33. 羚羊 antelope
34. 野猪 wild boar
35. 牦牛 yak
36. 棕熊 brown bear
37. 北极熊 polar bear
38. 猎豹 cheetah
39. 黑豹 panther
40. 猞猁 lynx
41. 食蚁兽 anteater
42. 袋鼠鼠 kangaroo rat
43. 豪猪 porcupine
44. 旱獭 marmot
45. 鼹鼠 mole
46. 刺猬 hedgehog
47. 臭鼬 skunk
48. 貂 mink
49. 水豚 capybara
50. 袋鼠熊 wombat
51. 白鼬 stoat
52. 海象 walrus
53. 鸭嘴兽 platypus
54. 负鼠 opossum
55. 驯鹿 reindeer
56. 马来貘 tapir
57. 小熊猫 red panda
58. 眼镜熊 spectacled bear
59. 马来熊 sun bear
60. 短尾猫 bobcat

二、家禽
1. 鸡 chicken
2. 鸭 duck
3. 鹅 goose
4. 鸽子 pigeon

三、其他动物
1. 鸟 bird
2. 鱼 fish
3. 青蛙 frog
4. 蛇 snake
5. 乌龟 tortoise
6. 蝴蝶 butterfly
7. 蜜蜂 bee
8. 蚂蚁 ant
9. 蜘蛛 spider
10. 蜗牛 snail
*/