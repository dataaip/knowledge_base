# 变量声明 

## 声明是一种 C 语言结构，它将一个或多个标识符引入程序并指定它们的含义和属性，其组成方式：
- 由 属性说明符序列(C23起)  + 说明符 + 限定符 + 声明符  + 初始化器组成

#### 属性说明符序列(C23起) 
- [[attr ]] [[attr1, attr2, attr3(args)]] [[attribute-prefix::attr (args)]]

#### 说明符 ：类型说明符、存储类说明符、对齐说明符、函数说明符
类型说明符：
- void
- 算术类型名
- 原子类型名
- 先前由 typedef 声明引入的名称
- struct、union 或 enum 说明符
- typeof 说明符 (C23起)

零或一个存储类说明符：
- typedef
- constexpr
- auto
- register
- static
- extern
- _Thread_local

零或多个对齐说明符：
- _Alignas

零或多个函数说明符（只在声明函数时）：
- inline
- _Noreturn

#### 限定符 ：类型限定符
零或多个类型限定符：
- const
- volatile
- restrict
- _Atomic

#### 声明符 ：
- 标识符 属性说明符序列(可选) - 此声明符引入的标识符
- (声明符) - 任何可以放入括号中的声明符；引入指向数组或指向函数的指针时要求这么做
- * 声明符 - 指针声明符
- 无指针声明符 [static(可选) 限定符(可选) 表达式] - 数组声明符
- 无指针声明符 [限定符(可选)*] - 数组声明符
- 无指针声明符(形参或标识符) - 函数声明符

#### 初始化器 ：
- = 表达式
- = {初始化式列表}	
- = { }

```c
// 示例：
[[maybe_unused]] static const volatile _Alignas(8) int a = 10;
``` 