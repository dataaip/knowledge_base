# C++ 类（Classes）

来源：cppreference.com

## 类概览

| 类相关主题 | 说明 |
|------------|------|
| **一般概念** | 类/结构体类型、联合体类型、注入类名 |
| **成员** | 数据成员、静态成员、this指针、嵌套类等 |
| **成员函数** | 访问控制、构造函数、特殊成员函数 |
| **继承** | 基类与派生类、虚函数、抽象类 |
| **现代特性** | override/final说明符（C++11） |

**类**是用户定义类型。

类类型由类说明符定义，出现在声明语法的decl-specifier-seq中。

---

## 类成员类型

类可以有以下类型的成员：

### 1. 数据成员
- **非静态数据成员**（包括位域）
- **静态数据成员**

### 2. 成员函数
- **非静态成员函数**
- **静态成员函数**

### 3. 嵌套类型
- 类和枚举定义
- 使用typedef或类型别名（C++11）定义的现有类型别名
- 类定义中的类名作为自身的公共成员类型别名（**注入类名**）

### 4. 枚举常量
- 所有在类中定义的非作用域枚举的枚举常量
- 通过using声明或using-enum声明引入的枚举常量（C++20）

### 5. 成员模板
- 变量模板（C++14）
- 类模板或函数模板

> ⚠️ **重要**：所有成员在类定义中一次性定义，不能添加到已定义的类中（与命名空间成员不同）。

---

## 类成员命名规则

类`T`的成员不能使用`T`作为名称，如果该成员是：

- 静态数据成员
- 成员函数
- 成员类型
- 成员模板
- 枚举的枚举常量（除非枚举是作用域枚举）（C++11）
- 成员匿名联合体的成员

> 💡 **例外**：非静态数据成员可以使用名称`T`，只要没有用户声明的构造函数。

---

## 类的特性

### 一、多态类

具有至少一个声明或继承的虚成员函数的类是**多态类**：

- 对象是多态对象
- 对象表示中存储运行时类型信息
- 可通过`dynamic_cast`和`typeid`查询
- 虚成员函数参与动态绑定

### 二、抽象类

具有至少一个声明或继承的纯虚成员函数的类是**抽象类**：

- 不能创建此类的对象

### 三、字面类型类（C++11）

具有constexpr构造函数的类是**字面类型**：

- 此类对象可在编译时由constexpr函数操作

---

## 类的属性分类

### 一、可平凡复制类（Trivially Copyable Class）

满足以下条件的类：

1. 至少有一个合格的拷贝构造函数、移动构造函数、拷贝赋值运算符或移动赋值运算符
2. 每个合格的拷贝构造函数都是平凡的
3. 每个合格的移动构造函数都是平凡的
4. 每个合格的拷贝赋值运算符都是平凡的
5. 每个合格的移动赋值运算符都是平凡的
6. 有非删除的平凡析构函数

### 二、平凡类（Trivial Class）

满足以下条件的类：

1. 是可平凡复制类
2. 有一个或多个合格的默认构造函数，且每个都是平凡的

> ⚠️ **C++26弃用**

### 三、标准布局类（Standard-layout Class）（C++11）

满足以下条件的类：

1. 没有非标准布局类类型（或此类类型的数组）或引用的非静态数据成员
2. 没有虚函数和虚基类
3. 所有非静态数据成员具有相同的访问控制
4. 没有非标准布局基类
5. 层次结构中只有一个类有非静态数据成员
6. 基类类型与第一个非静态数据成员类型不同（形式化定义涉及集合M(X)）

**标准布局结构体**：用struct或class关键字定义的标准布局类  
**标准布局联合体**：用union关键字定义的标准布局类

### 四、隐式生命周期类（Implicit-lifetime Class）

满足以下条件之一的类：

1. 是聚合类且析构函数不是用户声明的（C++11前）/用户提供的（C++11起）
2. 有至少一个平凡的合格构造函数和一个平凡的、非删除的析构函数

> 💡 由缺陷报告P0593R6澄清隐式生命周期属性

### 五、POD类（Plain Old Data Class）

#### C++11前定义：
1. 是聚合类
2. 没有用户声明的拷贝赋值运算符
3. 没有用户声明的析构函数
4. 没有非POD类类型（或此类类型的数组）或引用的非静态数据成员

#### C++11后定义：
1. 是平凡类
2. 是标准布局类
3. 没有非POD类类型（或此类类型的数组）的非静态数据成员

**POD结构体**：非联合体POD类  
**POD联合体**：是POD类的联合体

> ⚠️ **C++20弃用**

---

## 扩展知识详解

### 一、类成员访问控制

```cpp
class MyClass {
private:
    int private_data;
    void private_func();
    
protected:
    int protected_data;
    void protected_func();
    
public:
    int public_data;
    void public_func();
};
```

### 二、特殊成员函数

```cpp
class MyClass {
public:
    // 默认构造函数
    MyClass() = default;
    
    // 拷贝构造函数
    MyClass(const MyClass& other) = default;
    
    // 移动构造函数（C++11）
    MyClass(MyClass&& other) noexcept = default;
    
    // 拷贝赋值运算符
    MyClass& operator=(const MyClass& other) = default;
    
    // 移动赋值运算符（C++11）
    MyClass& operator=(MyClass&& other) noexcept = default;
    
    // 析构函数
    ~MyClass() = default;
};
```

### 三、继承与多态

```cpp
class Base {
public:
    virtual void virtual_func() = 0;  // 纯虚函数
    virtual void common_func() { /* 实现 */ }
    virtual ~Base() = default;        // 虚析构函数
};

class Derived : public Base {
public:
    void virtual_func() override { /* 实现 */ }
    void common_func() override final { /* 实现 */ }  // final（C++11）
};
```

### 四、现代C++类特性

#### 1. 默认成员初始化器（C++11）
```cpp
class MyClass {
    int x = 42;           // 默认成员初始化器
    std::string name{"default"};
};
```

#### 2. 委托构造函数（C++11）
```cpp
class MyClass {
    int x, y;
public:
    MyClass(int val) : x(val), y(val) {}
    MyClass() : MyClass(0) {}  // 委托构造函数
};
```

#### 3. 继承构造函数（C++11）
```cpp
class Derived : public Base {
public:
    using Base::Base;  // 继承构造函数
};
```

### 五、聚合类

```cpp
struct Point {
    int x;
    int y;
    // 聚合类：无用户声明构造函数、私有/保护非静态成员等
};

Point p{1, 2};  // 聚合初始化
```

---

## 实际应用示例

### 一、完整类示例

```cpp
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    
    // 静态数据成员
    static int total_count;
    
public:
    // 构造函数
    Person(const std::string& n, int a) : name(n), age(a) {
        ++total_count;
    }
    
    // 拷贝构造函数
    Person(const Person& other) : name(other.name), age(other.age) {
        ++total_count;
    }
    
    // 移动构造函数（C++11）
    Person(Person&& other) noexcept : name(std::move(other.name)), age(other.age) {
        ++total_count;
    }
    
    // 析构函数
    ~Person() {
        --total_count;
    }
    
    // 成员函数
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
    
    // 静态成员函数
    static int get_total_count() {
        return total_count;
    }
    
    // 友元函数
    friend std::ostream& operator<<(std::ostream& os, const Person& p);
};

// 静态数据成员定义
int Person::total_count = 0;

// 友元函数实现
std::ostream& operator<<(std::ostream& os, const Person& p) {
    os << "Person(" << p.name << ", " << p.age << ")";
    return os;
}

// 派生类
class Employee : public Person {
private:
    std::string company;
    
public:
    Employee(const std::string& name, int age, const std::string& comp)
        : Person(name, age), company(comp) {}
    
    void work() const {
        std::cout << "Working at " << company << std::endl;
    }
};
```

### 二、多态应用

```cpp
class Shape {
public:
    virtual double area() const = 0;
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : radius(r) {}
    
    double area() const override {
        return 3.14159 * radius * radius;
    }
    
    void draw() const override {
        std::cout << "Drawing circle with radius " << radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
    
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() const override {
        return width * height;
    }
    
    void draw() const override {
        std::cout << "Drawing rectangle " << width << "x" << height << std::endl;
    }
};

// 多态使用
void process_shapes(const std::vector<std::unique_ptr<Shape>>& shapes) {
    for (const auto& shape : shapes) {
        shape->draw();
        std::cout << "Area: " << shape->area() << std::endl;
    }
}
```

---

## 缺陷报告（Defect Reports）

| 缺陷编号 | 应用于 | 发布行为 | 修正行为 |
|----------|--------|----------|----------|
| CWG 148 | C++98 | POD类不能包含指向成员的指针（虽然是POD标量类型） | 移除限制 |
| CWG 383 | C++98 | 如果未定义，POD类中可有用户声明的拷贝赋值运算符或析构函数 | 不允许 |
| CWG 1363 | C++11 | 同时有平凡和非平凡默认构造函数的类可能是平凡的 | 是非平凡的 |
| CWG 1496 | C++11 | 只有被定义为删除的构造函数的类可能是平凡的 | 是非平凡的 |
| CWG 1672 | C++11 | 有多个空基类的类可能是标准布局类 | 不是标准布局类 |
| CWG 1734 | C++11 | 有非平凡删除的拷贝/移动构造函数/赋值运算符的类不能是可平凡复制的 | 如果删除可以是平凡的 |
| CWG 1813 | C++11 | 有继承非静态数据成员的基类的类永远不会是标准布局类 | 可以是标准布局类 |
| CWG 1881 | C++11 | 标准布局类及其基类中未命名位域可在不同类中声明 | 所有非静态数据成员和位域需在同一类中首次声明 |
| CWG 1909 | C++98 | 成员模板可与类同名 | 禁止 |
| CWG 2120 | C++11 | 确定标准布局类的M(X)定义未考虑首个成员是数组的情况 | 在M(X)定义中处理此情况 |
| CWG 2605 | C++98 | 隐式生命周期类可有用户提供的析构函数 | 禁止 |

---

## 标准参考文献

### 相关C++标准章节：

- C++23标准
  - 11 Classes
- C++20标准
  - 11 Classes
- C++17标准
  - 12 Classes
- C++14标准
  - 9 Classes
- C++11标准
  - 9 Classes
- C++98/C++03标准
  - 9 Classes

---

## 页面信息

- 页面地址：<https://en.cppreference.com/mwiki/index.php?title=cpp/language/classes&oldid=178050>
- 最后修改时间：2024年11月26日 21:58
- 离线版本获取时间：2025年2月9日 16:39

---

✅ C++类系统是面向对象编程的核心，从简单的数据封装到复杂的继承体系，提供了强大的抽象机制。理解各类属性（平凡类、标准布局类、POD类）对于优化内存布局和性能至关重要。现代C++引入的默认成员初始化器、委托构造函数、override/final说明符等特性，大大提升了代码安全性和可维护性。正确使用访问控制、友元机制和静态成员，能够构建清晰、安全的类接口。多态性和虚函数机制为运行时多态提供了基础，而特殊成员函数的正确实现（特别是移动语义）对性能优化至关重要。掌握缺陷报告中的修正内容，有助于避免潜在的语言陷阱。