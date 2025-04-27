## 库的使用 静态库与动态库

### 静态库与动态库
静态库: 即就是程序在编译链接的时候把库的代码链接到可执行文件中。程序运行的时候将不再需要静态库，在`Linux`中静态库是以`（.a）`为后缀，`Windows`系统中静态库是以`（.lib）`为后缀。   
动态库: 即就是程序在运行的时候才去链接动态库的代码，多个程序共享使用库的代码。在`Linux`中静态库是以`（.so）`为后缀，`Windows`系统中动态库是以`（.dll）`为后缀。  
 
### 动态库与静态库对比
在软件开发中，通常会遇到两种类型的链接库：静态库`（.a 或 .lib）`和动态库`（.so 或 .dll）`。选择使用哪种类型的库主要取决于你的具体需求。以下是一些可能影响你的决策的因素，每种类型的库都有其优缺点，选择哪种类型的库主要取决于你的具体需求。       

使用静态库的时候：     
- 二进制独立性：静态链接的应用程序在编译链接时就将静态库所有代码都集成（理解为copy）在一起，在物理上成为可执行程序的一部分，程序运行时将不再需要该静态库就可以运行。这使得分发和部署变得简单，因为只需要一个文件。        
- 运行性能：静态库被直接链接到目标程序相当于编译器将代码补充完整了，因此执行程序会大一些，但不存在运行时查找和加载的开销，所以理论上，静态链接的程序性能更好。       
- 版本控制：由于静态库在编译时被包含在二进制文件中，因此你可以确保代码是与你测试过的库版本完全相同的。     
- 特点：静态库是牺牲了空间效率，换取了时间效率。      

使用动态库的时候：     
- 节省空间和内存：一个与动态库链接的可执行文件仅仅包含它用到的函数入口地址的一个表，而不是外部函数所在目标文件的整个机器码，动态库在程序编译时并不会被连接到目标代码中，而是程序在运行时才被加载到内存中，因此在程序运行时还需要动态库存在。动态库可以在多个程序间共享，所以动态链接使得可执行文件更小，节省了磁盘空间。操作系统采用虚拟内存机制允许物理内存中的一份动态库被要用到该库的所有进程共用，节省了内存和磁盘空间。 在可执行文件开始运行以前，外部函数的机器码由操作系统从磁盘上的该动态库中复制到内存中，这个过程称为动态链接`（dynamic linking）`。        
- 易于更新：如果库需要升级或修复，只需要替换库文件，而不需要重新编译和链接使用该库的所有程序。          
- 插件和扩展：如果你想要支持插件或允许第三方开发者为你的程序编写扩展，动态库是很好的选择。    
- 动态库是牺牲了时间效率,换取了空间效率。    

### 库的查看  
- 可以通过 [ ldd 可执行程序文件名 ]来查看可执行程序所依赖的库。      
  ```bash
  lld codeMastery
  ls /lib64/libc.so.6 -l
  ``` 

- 生成可以用过 file 命令查看，首先分别生成链接方式为动静态库链接的可执行文件。    
  ```bash
  gcc cmain.c -o cmain_static -static 
  # -static: 这个选项用来指示链接器使用静态链接。这意味着所有的库函数都会被包含在最终的可执行文件中，使得该文件可以在没有相应库的系统上运行。生成的文件会比动态库大很多。  
  # -static 如果出现这种情况</usr/bin/ld: cannot find -lc>的报错，是因为在新版本的 linux 系统下安装 glibc-devel、glibc 和 gcc-c++ 时，都不会安装 libc.a. 只安装 libc.so. 所以当使用 -static 时，libc.a 不能使用。只能报找不到 libc 了。
  
  gcc cmain.c -o cmain
  # 当你使用 gcc 进行编译的时候，它会默认链接到系统中的动态库（如果存在的话）。这意味着生成的可执行文件在运行时需要这些动态库。如果你想要生成静态链接的可执行文件，需要使用 -static 参数，如 gcc -static cmain.c -o cmain。这会使得所有的库都被嵌入到可执行文件中，这样可执行文件就可以在没有这些库的系统上运行了。需要注意的是，并不是所有的库都可以静态链接，有些库只提供动态版本，或者出于各种原因，禁止静态链接。
  
  file cmain_static
  file cmain。
  # 通过file命名可以查看到所对应的链接信息。
  ```

### 编译链接的过程
在`Linux`中，gcc 的编译可以分为一下四个步骤：   

- 预处理：在预处理阶段主要负责的是头文件的展开、去掉注释、宏替换、条件编译等(即宏展开)。以#号开头的是预处理指令：`#define #if #include......` 此阶段产生`.i`文件。   
  ```bash
  gcc -E cmain.c -o cmain.i
  ```

- 编译：此阶段完成语法和语义分析，然后生成中间代码，此中间代码是汇编代码，但是还不可执行，gcc 编译的中间文件是`.s`文件。在此阶段会出现各种语法和语义错误，特别要小心未定义的行为，这往往是致命的错误。  
  ```bash
  gcc -S cmain.i -o cmain.s
  ```

- 汇编：此阶段主要完成将汇编代码翻译成机器码指令，并将这些指令打包形成可重定位的目标文件，`.o`文件，是二进制文件。此阶段由汇编器完成。   
  ```bash
  gcc -c cmain.s -o cmain.o
  ```

- 链接：此阶段完成文件中调用的各种函数跟静态库和动态库的连接，并将它们一起打包合并形成目标文件，即可执行文件。此阶段由链接器完成。  
  ```bash
  gcc cmain.o -o cmain
  ```
从以上四个阶段来看，我们要使用自己制作的库或者别人的库，一定是汇编完后产生的`.o`文件，我们只需要对这个`.o`文件进行链接就可以了。   

### 库的制作和使用 
库是一个二进制文件，想要使用库（给别人使用自己的制作的库或者使用别人的库）一定是由三个部分组成：`库文件`、`头文件`、`文档说明`；一般这个库文件就是函数的定义，头文件就是函数声明，我们只需要将这些打包好，别人使用我们头文件所给的接口就行。     

#### 静态库的制作 
编写如下四个文件：其中源文件包含`add.c`和`sub.c`，头文件包含`add.h`和`sub.h`；用来制作静态库并打包。   
  ```c
  // add.h
  #pragma once
  #include <stdio.h>
  extern int my_add(int x, int y);
  ```
  ```c
  // add.c
  #include "add.h" 
  int my_add(int x, int y)
  {
      return x + y;
  }
  ```
  ```c
  // sub.h
  #pragma once
  #include <stdio.h>
  extern int my_sub(int x, int y); 
  ```
  ```c
  // sub.c
  #include "sub.h"
  int my_sub(int x, int y)
  {
      return x - y;
  }
  ```

> 生成二进制(.o)文件: 将上面的.c文件生成.o文件。     
```bash
gcc -c add.c -o add.o
gcc -c sub.c -o sub.o  
``` 

> 打包: 将生成好的.o文件进行打包库名 libxxx.o 模式命名。  
```bash
ar -rc libmymath.a add.o sub.o
# ar: 这是一个Unix工具，用于创建，修改和提取来自归档文件的内容。在这个上下文中，它用于创建和管理静态库。
# -rc: 这是ar命令的两个选项。
# r: 这个选项表示替换。如果在库中已经存在相同的文件，该选项会用新文件替换库中的旧文件。
# c: 这个选项表示创建新的归档文件。如果要创建的归档文件不存在，那么就创建一个新的。
# libmymath.a: 这是你要创建的静态库的名字。在Unix-like操作系统中，静态库的命名通常以 lib 开头，以 .a 结尾。
# add.o 和 sub.o: 这两个是你要添加到 libmymath.a 静态库的目标文件。这些文件通常是由 C 或 C++ 编译器生成的二进制文件。
ar -tv libmymath.a
# ar 命令的 -t 选项和 -v 选项查看静态库当中的文件。
```

> 发布静态库。    
```bash
# 静态库要发布出去供别人使用，只要库文件（所有的.o文件）是不够的，我们需要将其和头文件一起发布出去，别人只要看到头文件，就大致了解如何使用了。
mkdir output # 创建一个文件夹
cp -rf libmymath.a output/ # 将所有库文件和头文件放入文件夹里
cp -rf *.h output/
tree output/
output/
├── add.h
├── libmymath.a
└── sub.h
```

> 直接编写`Makefile`，一步的完成静态库的编译打包及发布。  
```Makefile
# 也可以直接编写 Makefile，就不需要我们一步一步的完成静态库的打包及发布。
# Makefile
libmymath.a:add.o sub.o
  ar -rc $@ $^

%.o:%.c
  gcc -c $<

.PHONY:clean
clean:
  rm -rf *.o output libmymath.a

.PHONY:output
output:
  mkdir output
  cp -rf *.h output
  cp libmymath.a output
# libmymath.a:add.o sub.o：这个是目标规则，用来生成静态库libmymath.a，需要的依赖是add.o和sub.o。
# ar -rc $@ $^：这是命令，用来生成静态库。其中，$@表示目标文件，即libmymath.a，$^表示所有依赖文件。
# %.o:%.c：这个是模式规则，用来生成.o文件，%.c表示所有的.c文件。
# gcc -c $<：这是命令，用来将.c文件编译成.o文件。其中，$<表示依赖文件。
# .PHONY:clean：.PHONY表示clean是伪目标，即不管是否存在同名的文件或目录，都会执行。
# clean: rm -rf *.o output libmymath.a：这个命令用来删除所有的.o文件，output目录以及libmymath.a文件。
# .PHONY:output：.PHONY表示output是伪目标，即不管是否存在同名的文件或目录，都会执行。
# output:：这个是目标规则，用来生成output目录。
# mkdir output：这个命令用来创建output目录。
# cp -rf *.h output：这个命令用来将所有的.h文件复制到output目录。
# cp libmymath.a output：这个命令用来将libmymath.a文件复制到output目录。

# 执行生成静态库
# make 
# make output
# make 运行 gcc -c add.c -o add.o、gcc -c sub.c -o sub.o、ar -rc libmymath.a add.o sub.o
# make output 运行 mkdir output、cp -rf *.h output、cp libmymath.a output
```

#### 静态库的使用   
> 方法一：现在我们已经有了静态库`output`了，别人该如何使用呢？ 例如：想要在`friend`文件下使用这个`libmymath.a`库。     
```bash
# 创建 friend 项目文件
mkdir friend && cd friend && mkdir lib # 创建文件夹
cp -rf output friend/lib # 将 output 拷贝到 lib 文件夹下
tree friend
friend/    
├── Makefile
├── mytest.c
└── lib/
    ├── libmymath.a
    ├── sub.h
    └── add.h    
```
```c
// 在 friend 目录下有一个 mytest.c 文件和一个静态库文件 lib ，mytest.c 想要使用 lib ，我们先编写一下 mytest.c 代码。
#include "add.h"
#include "sub.h"
int main()
{
    int x = 30;
    int y = 20;
 
    int ret1 = my_add(x, y);
    int ret2 = my_sub(x, y);
 
    printf("ret1 = %d\n",ret1);
    printf("ret2 = %d\n",ret2);
    return 0;
}
```
```bash
# 编译 mytest.c 程序。 
gcc mytest.c -I ./lib -L ./lib -l mymath
# 在使用静态库进行编译链接时，需要指定头文件的所在路径，库文件的所在路径以及所要掉用的库名称
# -I：指定头文件所在路径。
# -L：指定库文件所在路径。
# -l：指明需要链接库文件路径下的哪一个库

# gcc mytest.c -L ./lib -l mymath -I ./lib -o mytest: 这条命令主要用来链接动态库，其中 -L ./lib 指定库文件搜索的路径（在这个例子中是当前目录），而 -l mymath 指定需要链接的库的名字（在这个例子中是 libmymath.so 或 libmymath.a）。这条命令会优先链接动态库 libmymath.so，如果没有找到，那么就尝试链接静态库 libmymath.a。
# gcc mytest.c -o mytest -static: 这条命令用来编译源代码文件 mytest.c，并生成静态链接的可执行文件 mytest -static 参数表示所有的库都应该静态链接。在这种情况下，链接器将把所有使用到的库函数的代码都嵌入到最终的可执行文件中，这样的话，即使在没有任何库的情况下，这个可执行文件也能正常运行。不过，这样的话，可执行文件的大小会变大。
```
```Makefile
# 也可以编写 Makefile 一步到位。
mytest:mytest.c
  gcc -o $@ $^ -I ./lib -L ./lib -l mymath
.PHONY:clean
clean:
  rm -rf mytest

# make 
# make 编译运行 gcc mytest.c -I ./lib -L ./lib -l mymath 
```
> 方法二：对比我们之前在编译某个`.c`文件时，为什么有加上这些选项呢？。这是因为之前的库都是在系统的默认路径下，所以我们可以将我们做好的静态库拷贝到系统的默认路径下，也是可以达到不需要加这些选项的效果；但是严重不推荐。    

#### 动态库的制作 
编写如下四个文件：其中源文件包含`add.c`和`sub.c`，头文件包含`add.h`和`sub.h`；用来制作动态库并打包。      
  ```c
  // add.h
  #pragma once
  #include <stdio.h>
  extern int my_add(int x, int y);
  ```
  ```c
  // add.c
  #include "add.h" 
  int my_add(int x, int y)
  {
      return x + y;
  }
  ```
  ```c
  // sub.h
  #pragma once
  #include <stdio.h>
  extern int my_sub(int x, int y); 
  ```
  ```c
  // sub.c
  #include "sub.h"
  int my_sub(int x, int y)
  {
      return x - y;
  }
  ```

> 生成二进制(.o)文件: 将上面的.c文件生成.o文件。     
```bash
gcc -fPIC -c add.c -o add.o
gcc -fPIC -c sub.c -o sub.o
# -fPIC：作用是告知编译器生成位置无关代码（编译产生的代码没有绝对位置，只有相对位置）；从而可以在任意地方调用生成的动态库。  
``` 

> 打包: 将生成好的.o文件进行打包。     
```bash
gcc -shared -o libmymath.so add.o sub.o
# -shared：linux在gcc编译时加上 -shared 参数时，目的是使源码编译成动态库 .so 文件
```

> 发布: 发布动态库，将库文件和所有的头文件组织起来，放到lib目录下，这样就可以发布动态库了。    
```bash
mkdir lib # 创建一个文件夹
cp -rf libmymath.so lib # 将所有库文件和头文件放入文件夹里
cp -rf *.h lib
tree lib
lib/
├── add.h
├── libmymath.so
└── sub.h
```

> 直接编写 Makefile，一步的完动态库的打包及发布。   
```Makefile
# Makefile
libmymath.so:add.o sub.o
  gcc -shared -o $@ $^

%.o:%.c
  gcc -fPIC -c $<

.PHONY:clean
clean:
  rm -rf *.o lib libmymath.so

.PHONY:lib
lib:
  mkdir lib
  cp -rf *.h lib
  cp libmymath.so lib

# 执行生成动态库
# make 
# make lib
# make 运行 gcc -fPIC -c add.c -o add.o、gcc -fPIC -c sub.c -o sub.o、gcc -shared -o libmymath.so add.o sub.o
# make lib 运行 mkdir lib、cp -rf *.h lib、cp libmymath.so lib 
```

#### 动态库的使用
动态库的使用大致和静态库类似，但略有区别。我们先使用静态库的方法来实现动态库的链接。  
```bash
gcc mytest.c -I ./lib -L ./lib -l mymath
# 能够成功编译，但是运行却报错了，为什么呢?
lld mytest
# ldd 命令列出动态库依赖关系，发现是 libmymath.so 库 not found。虽然已经告诉了编译器库文件和头文件的路径所在位置，但是当编译器编译好后就与编译器无关了；当我们执行（运行）可执行程序 mytest 时，是由加载器来完成的。所以我们需要在运行时，告诉系统库文件在哪里；
```
> 方法一: 拷贝到系统的默认路径下，一般指`/usr/lib`这里不做演示，严重不推荐。  
> 方法二: 更改`LD_LIBRARY_PATH`。   
```bash
# LD_LIBRARY_PATH 环境变量用于在程序加载运行期间查找动态链接库时指定除了系统默认路径之外的其他路径.注意，LD_LIBRARY_PATH中 指定的路径会在系统默认路径之前进行查找;
export LD_LIBRARY_PATH=${动态库的路径}
echo $LD_LIBRARY_PATH

# 添加好后，我们再次查看，发现动态库 libmymath.so 库路径已经指定好了
lld mytest

# 再次编译运行
gcc mytest.c -I ./lib -L ./lib -l mymath -o mytest
./mytest
```