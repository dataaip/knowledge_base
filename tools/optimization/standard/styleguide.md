### 代码风格规范 
- google-styleguide

# 代码风格 code styleguide 优雅的代码规范，提升代码质量 

在软件开发中，优雅的代码规范可以帮助我们写出既美观又实用的代码。以下是提升代码质量的建议性规范：
- 命名清晰：使用描述性强的命名，让代码自我解释。

- 简洁性：力求简洁，避免冗余，用最少的代码行数完成功能。

- 一致性：保持项目中命名和编码风格的统一，减少认知负荷。

- 注释：用注释阐明代码意图，但避免过度注释。

- 避免复杂性：将复杂逻辑分解为简单、可管理的函数或模块。

- 重构：定期重构，提升代码的可读性和性能。

- 测试：编写单元测试，确保代码的稳定性和可靠性。

- 错误处理：合理处理错误，增强程序的健壮性。

- 文档：编写清晰的文档，包括 API 文档和项目文档。

- 代码复用：创建可复用的函数或模块，避免重复代码。

- 性能优化：在不牺牲可读性的前提下，优化性能瓶颈。

- 安全性：编写安全的代码，防范常见的安全漏洞。

接下来我们展开说明：
1、命名清晰
在编程中，命名是第一印象。
好的命名可以让人一眼看出变量、函数或类的作用。
清晰准确的命名可以减少误解，提高代码的可读性。
比如，customerList 比 list 更清楚地表达了它存储的是客户信息。
变量、函数和类的命名应该直观地描述其功能和用途，避免使用模糊或不相关的名称。
# 好的例子：命名清晰
def calculate_area(width, height):
    return width * height

# 坏的例子：命名不清晰
def calc(w, h):
    return w * h

2、简洁性
简洁的代码意味着用最少的代码行数完成所需的功能，它减少了维护的难度和出错的概率。
例如，使用 Python 的列表推导式可以比传统的 for 循环更简洁地创建列表。
尽量用最少的代码完成功能，避免冗余，简洁的代码更易于阅读和维护。
# 好的例子：使用内置函数
numbers = [1, 2, 3, 4, 5]
total = sum(numbers)

# 坏的例子：冗余的循环
total = 0
for number in numbers:
    total += number

3、一致性
一致性是团队协作中的关键。
无论是命名规则、函数结构还是代码格式，一致的风格可以减少团队成员之间的沟通成本。
如果一个团队决定使用驼峰命名法，那么所有的变量和函数名都应遵循这一规则。
整个项目中应保持一致的命名和编码风格，包括命名约定、代码格式和注释风格。
# 好的例子：一致的命名
def get_user_name(user):
    return user.name

def get_user_email(user):
    return user.email

# 坏的例子：不一致的命名
def getName(user):
    return user.name

def getEmail(user):
    return user.email

4、注释
注释是代码的说明书。
合理的注释可以解释代码的意图，帮助他人（或未来的你）理解复杂的逻辑。
最好的代码是自解释的，只有当代码本身不足以清晰表达时，才需要注释。
避免过度注释显而易见的代码。
# 好的例子：必要的注释
# 检查用户是否已登录
if user.is_authenticated:
    # 用户已登录，允许访问
    pass

# 坏的例子：过度注释
def add(a, b):
    # a 是第一个数字
    # b 是第二个数字
    # 这个函数返回两个数字的和
    return a + b

5、避免复杂性
复杂的代码难以理解和维护。
尽量将复杂逻辑分解成简单的部分，使用函数或类来封装。
避免过长的函数和深层的嵌套，它们会增加代码的阅读难度。
将复杂逻辑分解为更小的、可管理的部分。
# 好的例子：简单的逻辑
def is_even(number):
    return number % 2 == 0

# 坏的例子：复杂的逻辑
def check_number(number):
    if number is None:
        return False
    elif number < 0:
        return False
    else:
        return number % 2 == 0

6、重构
重构是改进现有代码而不改变其外部行为的过程。
定期的重构可以提高代码的可读性和性能，去除重复代码，优化结构。
重构需要谨慎进行，确保测试覆盖以避免引入新的错误。
# 重构前：重复的字符串格式化
def greet(name):
    return "Hello, " + name + "!"

def farewell(name):
    return "Goodbye, " + name + "!"

# 重构后：使用字符串格式化
def greet(name):
    return f"Hello, {name}!"

def farewell(name):
    return f"Goodbye, {name}!"

7、测试
单元测试是确保代码按预期工作的保障。
编写单元测试，确保代码的稳定性和可靠性。
测试可以自动验证代码的功能，特别是在代码修改或重构时。
# 使用unittest框架编写测试
import unittest

class TestCalculator(unittest.TestCase):
    def test_add(self):
        self.assertEqual(add(1, 2), 3)

    def test_subtract(self):
        self.assertEqual(subtract(3, 1), 2)

8、错误处理
错误处理是健壮程序的重要组成部分。
恰当地处理可能发生的错误情况，避免程序在遇到异常情况时崩溃，同时提供有用的反馈。
通过 try-except 块来捕获和处理可能的异常
# 好的例子：恰当的错误处理
try:
    number = int(input("Enter a number: "))
    if number < 0:
        raise ValueError("Number must be non-negative")
except ValueError as e:
    print(f"Error: {e}")

# 坏的例子：缺乏错误处理
number = int(input("Enter a number: "))  # 没有错误处理

9、文档
文档是项目的地图。
编写清晰的文档，包括 API 文档和项目文档，帮助新团队成员快速了解项目结构，API 文档则让使用者了解如何使用你的代码。
"""
这个模块提供了一些用于处理用户数据的工具函数。
"""
def validate_email(email):
    """
    检查邮箱地址是否合法。
    参数：
    email (str): 待验证的邮箱地址。
    返回：
    bool: 如果邮箱合法，返回 True；否则返回 False。
    """
    # 实现验证逻辑
文档中清晰地说明了函数的作用、参数和返回值，帮助其他开发者正确使用这个函数。

10、代码复用
避免重复是编程的一条基本原则。
避免重复编写相同的代码，创建可复用的函数或模块，减少代码的冗余，提高开发效率。同时，复用的代码更容易维护和更新。
# 好的例子：复用代码
def format_name(first, last):
    return f"{first} {last}"
user1 = format_name("John", "Doe")
user2 = format_name("Jane", "Smith")
# 坏的例子：重复代码
def get_user1_name():
    return "John Doe"
def get_user2_name():
    return "Jane Smith"

11、性能优化
性能优化是提高程序运行效率的过程。
在不牺牲可读性的前提下，对性能瓶颈进行优化。这可能涉及到算法的选择、数据结构的使用或者代码的优化。
但记住，过早的优化是万恶之源，确保在不牺牲代码可读性的前提下进行优化。
# 好的例子：使用集合提高查找效率
def has_duplicates(numbers):
    return len(numbers) != len(set(numbers))

# 坏的例子：使用列表进行查找，效率较低
def has_duplicates(numbers):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if numbers[i] == numbers[j]:
                return True
    return False

12、安全性
安全性是编程中不可忽视的方面。
编写安全的代码，避免常见的安全漏洞，如 SQL 注入、XSS 攻击等。
# 好的例子：防止SQL注入
cursor.execute("SELECT * FROM users WHERE username = %s AND password = %s", (username, password))

# 坏的例子：易受SQL注入攻击
cursor.execute("SELECT * FROM users WHERE username = " + username + " AND password = " + password)


## Code Styleguide-优雅的编码规范

### 1. 项目结构规范

### 2. 文件结构规范

### 3. 代码风格规范

### 4. 关键语言特性约束

### 5. 内存与资源管理

### 6. 错误处理

### 7. 构建系统集成规范

### 8. 工具链集成

### 9. 争议与例外处理

### 10. 结语


Code Styleguide-优雅的编码规范（C/C++ 篇）

一、项目结构
1. 目录结构规范
2. 文件和目录命名
3. 业界参考案例

二、文件结构
1. 版权和版本声明（不是必须，但是我建议看看）
2. 头文件结构
3. 源文件结构

三、代码排版（以 K&R 风格为主）
1. 缩进与左花括号的位置
2. 空行的插入
3. 该分行就分行
4. 花括号
5. 长语句分段
6. 空格
7. 无用的代码必须删除

四、代码注释
1. 注释用什么语言？
2. 注释缩进
3. 程序块结束注释
4. 两种注释的用法
5. switch 语句如无需 break，须加上明确的注释
6. 函数块的注释

五、命名规则
1. 变量与函数的命名
2. 宏定义和常数的命名

六、构建系统集成规范
1. CMake 项目标准
2. 模块级 CMakeLists.txt

六、其他
1. 结构体定义注意字节对齐
2. 定义变量时同时进行初始化
3. 禁止浮点数直接进行等于或者不等于的比较操作
4. 超过两级的运算符表达式必须使用括号分离
5. 函数参数不能出现结构体
6. 有参宏定义表达式都必须使用括号
7. 使用有参宏定义，禁止参数带自增自减运算符

### **五、构建系统集成规范**
#### **1. CMake 项目标准**
```cmake
# 项目根 CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(MyProject LANGUAGES CXX C)

# 全局配置
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(src)       # 主源码
add_subdirectory(tests)     # 测试代码
add_subdirectory(examples)  # 示例代码
```

#### **2. 模块级 CMakeLists.txt**
```cmake
# src/CMakeLists.txt
add_library(core STATIC
  algorithm.cpp
  data_structures/hash_map.cpp
)
target_include_directories(core PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)
```