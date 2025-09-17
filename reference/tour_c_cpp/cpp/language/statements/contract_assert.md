C++ contract_assert 声明 （自 C++26 日起）

contract_assert 语句是一种契约断言，可以出现在函数或 lambda 体中，用于验证内部条件。它确保条件在执行过程中保持不变，如果条件计算结果为 false 或评估通过异常退出，则会在调试构建中触发冲突（例如终止），并且可以在发布构建中忽略以提高性能。

语法
contract_assertattr（可选）（ 谓词 ）;		
属性	-	任意数量的属性
谓语	-	计算结果应为 true 的布尔表达式
关键字
contract_assert

笔记
功能测试宏	价值	性病	特征
__cpp_contracts	202502L	（C++26）	合同
例
该 contract_assert 确保向量的范数为正，并且是正态或次正态 。

template <std::floating_point T>
constexpr auto normalize(std::array<T, 3> vector) noexcept
    pre(/* is_normalizable(vector) */)
    post(/* vector: is_normalized(vector) */)
{
    auto& [x, y, z]{vector};
    const auto norm{std::hypot(x, y, z)};
 
    // debug check for normalization safety
    contract_assert(std::isfinite(norm) && norm > T(0));
 
    x /= norm, y /= norm, z /= norm;
 
    return vector;
}
支持状态
C++26 功能

 	论文

 	
GCC
铛
MSVC
苹果叮当声
EDG eccp
英特尔 C++
Nvidia HPC C++（前 PGI）*
英伟达 nvcc
克雷


合约   （FTM）*	P2900R14									
引用
C++26 标准 （ISO/IEC 14882：2026）：
8.（7+c） 断言语句 [stmt.contract.assert]
另请参阅
断言
 
如果用户指定的条件不为 true，则中止程序。对于发布版本，可能会被禁用。
（函数宏）
合约断言 （C++26）	指定在执行期间必须在某些点保持的属性
static_assert 声明 （C++11）	执行编译时断言检查
函数合约说明符（C++26）	指定前置条件 （pre） 和后置条件 （post）
[[assume(expression)]]
  
（C++23）
 
指定表达式在给定点的计算结果始终为 true
（属性说明符）
