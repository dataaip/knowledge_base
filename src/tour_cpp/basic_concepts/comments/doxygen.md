## Doxygen- C++使用规则规范

Doxygen 是 C++ 项目文档生成的标准工具，支持类、模板、命名空间等面向对象特性。以下是针对 C++ 的完整使用规范：

---

#### 一、基础注释规范（与C语言兼容）
1. **文档注释标记**：
   ```cpp
   /**
    * 多行文档注释（推荐）
    */
   /// 单行文档注释
   //! 另一种单行格式
   /*! 另一种多行格式 */
   ```

2. **文件头注释（必须包含 `@file`）**：
   ```cpp
   /**
    * @file    MyClass.hpp
    * @brief   类功能简述
    * @author  作者
    * @date    2023-10-01
    * @details 详细说明
    * @version 1.0
    */
   ```

---

#### 二、类注释规范
```cpp
/**
 * @brief 类功能简述
 * 
 * 类的详细描述，包括设计目的、使用场景等。
 * 
 * @tparam T 模板参数说明
 * 
 * @note 注意事项
 * @warning 警告信息
 */
template<typename T>
class MyClass {
public:
    /**
     * @brief 构造函数说明
     * @param value 初始值
     */
    explicit MyClass(T value);
    
    /**
     * @brief 成员函数说明
     * @param input 输入参数
     * @return 处理结果
     */
    T process(T input);
    
    ///< 成员变量说明（行尾注释）
    T m_value;  
    
protected:
    /**
     * @brief 虚函数说明
     * @override 标记重写
     */
    virtual void doSomething() = 0;
};
```

---

#### 三、模板类/函数注释
```cpp
/**
* @brief 模板类示例
*
* @tparam T 类型参数说明
*/
template <typename T>
class Container {
public:
/**
* @brief 添加元素
* @param element 要添加的元素
*/
void add(const T& element);

/**
* @brief 获取元素
* @param index 索引
* @return 对应元素
*/
T get(size_t index) const;
};

/**
* @brief 模板函数示例
*
* @tparam T 类型参数
* @param a 参数1
* @param b 参数2
* @return T 较大值
*/
template <typename T>
T max(const T& a, const T& b) {
return a > b ? a : b;
}
```

---

#### 四、命名空间注释
```cpp
/**
 * @brief 命名空间功能描述
 */
namespace ProjectModule {
    /**
     * @brief 命名空间内的函数
     */
    void helperFunction();
}
```

---

#### 五、枚举注释（C++11强类型枚举）
```cpp
/**
 * @brief 状态码枚举
 */
enum class StatusCode {
    OK = 0,      ///< 操作成功
    IO_ERROR,    ///< 输入输出错误
    TIMEOUT      ///< 操作超时
};
```

---

#### 六、继承关系注释
```cpp
/**
 * @brief 派生类说明
 * 
 * @extends BaseClassName 显式声明继承关系
 */
class Derived : public Base {
public:
    /**
     * @override 标记重写基类方法
     */
    void virtualMethod() override;
};
```

---

#### 七、友元函数注释
```cpp
class MyClass {
    /**
     * @relates FriendClass
     * @brief 友元类说明
     */
    friend class FriendClass;
    
    /**
     * @relates freeFunction
     * @brief 友元函数说明
     */
    friend void freeFunction(MyClass& obj);
};
```

---

#### 八、Lambda表达式注释（C++11+）
```cpp
auto lambda = [](int x) -> int {
    /** 
     * @brief Lambda功能说明
     * @param x 输入参数
     * @return 计算结果
     */
    return x * 2;
};
```

---

#### 九、配置规范（Doxyfile）
```ini
# C++ 特有配置
OPTIMIZE_OUTPUT_FOR_C  = NO
BUILTIN_STL_SUPPORT    = YES   # 支持STL容器
EXTRACT_PRIVATE        = YES   # 包含私有成员
EXTRACT_STATIC         = YES   # 包含静态成员
HIDE_UNDOC_MEMBERS     = NO    # 显示未文档化成员
CALL_GRAPH             = YES   # 生成调用图
REFERENCED_BY_RELATION = YES   # 显示被引用关系
```

---

#### 十、C++ 特有命令
| 命令 | 用途 | 示例 |
|------|------|------|
| `@tparam` | 模板参数 | `@tparam T 元素类型` |
| `@extends` | 继承关系 | `@extends BaseClass` |
| `@implements` | 接口实现 | `@implements IInterface` |
| `@override` | 重写标记 | `@override` |
| `@relates` | 关联声明 | `@relates freeFunction` |
| `@interface` | 接口类标记 | `@interface` |

---

#### 十一、最佳实践
1. **必须注释项**：
   - 所有公共类和接口
   - 模板类和模板函数
   - 虚函数和重写方法
   - 命名空间及其内容
   - 异常说明（使用 `@throw`）

2. **构造函数/析构函数**：
   ```cpp
   class Resource {
   public:
       /**
        * @brief 构造函数
        * @throw std::runtime_error 资源初始化失败
        */
       Resource();
       
       /**
        * @brief 虚析构函数（基类必需）
        */
       virtual ~Resource() noexcept;
   };
   ```

3. **移动语义（C++11+）**：
   ```cpp
   class Buffer {
   public:
       /**
        * @brief 移动构造函数
        * @param other 源对象（将被置空）
        */
       Buffer(Buffer&& other) noexcept;
   };
   ```

4. **智能指针**：
   ```cpp
   /**
    * @brief 创建对象
    * @return std::unique_ptr 对象所有权
    */
   std::unique_ptr<MyClass> createObject();
   ```

---

#### 十二、生成文档
```bash
# 生成配置
doxygen -g

# 修改Doxyfile后生成文档
doxygen
```

> **高级技巧**：
> 1. 使用 `\copydoc` 复用注释：`/// \copydoc ClassName::function()`
> 2. 启用 `HAVE_DOT=YES` 生成UML类图
> 3. 使用 `@snippet` 嵌入示例代码片段
> 4. 通过 `\cond` 和 `\endcond` 控制文档包含范围

通过遵循这些规范，可生成专业级的 C++ API 文档，特别适合大型项目和库开发。Doxygen 支持最新的 C++20 特性，包括概念（Concepts）和模块（Modules）。