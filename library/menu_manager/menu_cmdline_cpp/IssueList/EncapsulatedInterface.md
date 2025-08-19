在 C++ 中封装接口并只暴露公共接口，主要有以下几种方法（从简单到高级）：

### 方法 1：使用头文件分离声明与实现（基础）
```cpp
// mylib.h (公共接口)
class MyClass {
public:
    void publicMethod();  // 只声明公共方法
private:
    void privateMethod(); // 声明私有方法（外部不可见）
    int internalData;     // 私有数据（外部不可见）
};
```

```cpp
// mylib.cpp (隐藏实现)
#include "mylib.h"
void MyClass::publicMethod() {
    // 实现细节
    privateMethod();
}

void MyClass::privateMethod() {
    // 内部实现
}
```

**特点**：
- 头文件只暴露公共方法声明
- 实现细节完全隐藏在 cpp 文件中
- 编译后分发 .h 和 .lib/.a 文件即可

---

### 方法 2：Pimpl 惯用法（推荐）
```cpp
// mylib.h
#include <memory>
class MyClass {
public:
    MyClass();
    ~MyClass(); // 需要显式声明
    void publicMethod();
    
    // 禁用拷贝（可选）
    MyClass(const MyClass&) = delete;
    MyClass& operator=(const MyClass&) = delete;
    
private:
    struct Impl; // 前向声明
    std::unique_ptr<Impl> pImpl; // 实现指针
};
```

```cpp
// mylib.cpp
#include "mylib.h"

// 实现类的定义
struct MyClass::Impl {
    void privateMethod() { /* ... */ }
    int internalData = 0;
};

MyClass::MyClass() : pImpl(std::make_unique<Impl>()) {}
MyClass::~MyClass() = default; // 必须存在（因 unique_ptr 需要完整类型）

void MyClass::publicMethod() {
    pImpl->privateMethod();
    pImpl->internalData++;
}
```

**优点**：
1. **完全隐藏实现细节**：头文件不暴露任何私有成员
2. **二进制兼容性**：修改实现不影响依赖的头文件
3. **减少编译依赖**：实现改动只需重新编译 cpp 文件

---

### 方法 3：接口类 + 工厂函数（面向抽象）
```cpp
// imylib.h (纯接口)
class IMyLib {
public:
    virtual ~IMyLib() = default;
    virtual void publicMethod() = 0;
    
    // 工厂函数
    static std::unique_ptr<IMyLib> create();
};
```

```cpp
// mylib.cpp
#include "imylib.h"

// 实现类（外部完全隐藏）
class ConcreteLib : public IMyLib {
public:
    void publicMethod() override { /* ... */ }
private:
    void privateMethod() { /* ... */ }
    int internalData;
};

// 工厂实现
std::unique_ptr<IMyLib> IMyLib::create() {
    return std::make_unique<ConcreteLib>();
}
```

**使用方式**：
```cpp
#include "imylib.h"

int main() {
    auto lib = IMyLib::create();
    lib->publicMethod();
    // 无法访问任何实现细节
}
```

**优势**：
- 完全解耦接口与实现
- 支持多态和运行时替换实现
- 接口头文件不包含任何实现细节

---

### 方法 4：导出控制（跨平台）
在头文件中使用宏控制导出符号：

```cpp
// mylib_api.h
#ifdef _WIN32
    #ifdef MYLIB_EXPORTS
        #define API __declspec(dllexport)
    #else
        #define API __declspec(dllimport)
    #endif
#else
    #define API __attribute__((visibility("default")))
#endif

// mylib.h
#include "mylib_api.h"
class API MyClass {
public:
    void publicMethod();
};
```

**编译时**：
- Windows：`cl /DMYLIB_EXPORTS ...`
- Linux：`g++ -fvisibility=hidden ...`

---

### 最佳实践总结
| 方法               | 适用场景                          | 优点                          |
|--------------------|---------------------------------|------------------------------|
| 头文件分离         | 小型项目/内部使用                | 简单直接                     |
| **Pimpl 惯用法**   | 中大型项目/库开发 (推荐)         | 二进制兼容性，完美封装       |
| 接口类+工厂        | 跨模块/插件系统                  | 最大灵活性，支持多态         |
| 导出控制           | 动态链接库(DLL/SO)开发          | 控制符号可见性               |

**关键设计原则**：
1. **最小暴露原则**：头文件只包含必要的声明
2. **防火墙模式**：使用指针/接口隔离实现
3. **零头文件依赖**：公共头文件不包含第三方库头文件
```cpp
// 使用前向声明代替包含
namespace boost { class any; } // 前向声明

class MyClass {
public:
    void useBoost(const boost::any& data); // 只需声明
};
```

使用这些技术可以创建出：
- 清晰的公共 API 边界
- 实现可独立演化的模块
- 二进制兼容的库
- 编译防火墙（减少重编译）