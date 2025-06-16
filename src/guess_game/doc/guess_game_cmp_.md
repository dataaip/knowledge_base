# C、C++与Rust猜数游戏的深度横向对比

下面我将从15个维度全面对比三种语言实现猜数游戏的设计差异，包含更多技术细节和具体示例。

## 4. 并发安全实现对比

**C的线程不安全示例**：
```c
int counter = 0;

void* increment(void* arg) {
    for (int i = 0; i < 10000; i++) {
        counter++; // 数据竞争！
    }
    return NULL;
}
```

**C++的原子操作**：

```cpp
std::atomic<int> counter{0};

void increment() {
    for (int i = 0; i < 10000; i++) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
}
```

**Rust的线程安全保证**：
```rust
use std::sync::Arc;
use std::sync::Mutex;

let counter = Arc::new(Mutex::new(0));
let mut handles = vec![];

for _ in 0..10 {
    let counter = Arc::clone(&counter);
    handles.push(std::thread::spawn(move || {
        let mut num = counter.lock().unwrap();
        *num += 1;
    }));
}
// 编译期保证线程安全
```

## 5. 接口设计范式

**C的函数指针**：
```c
typedef int (*Comparator)(int, int);

void play_game(Comparator cmp) {
    int result = cmp(guess, secret);
    // ...
}
```

**C++的虚函数**：
```cpp
class IComparator {
public:
    virtual ~IComparator() = default;
    virtual int compare(int a, int b) = 0;
};

void play_game(const IComparator& cmp) {
    int result = cmp.compare(guess, secret);
    // ...
}
```

**Rust的trait**：
```rust
trait Comparator {
    fn compare(&self, a: u32, b: u32) -> Ordering;
}

fn play_game<C: Comparator>(cmp: C) {
    match cmp.compare(guess, secret) {
        Ordering::Less => println!("Too small!"),
        // ...
    }
}
```

## 6. 构建系统与依赖管理

**C的Makefile**：
```makefile
CC=gcc
CFLAGS=-Wall -O2

guess_game: main.o utils.o
    $(CC) $(CFLAGS) -o $@ $^
```

**C++的CMake**：
```cmake
cmake_minimum_required(VERSION 3.10)
project(GuessGame)

add_executable(guess_game 
    src/main.cpp 
    src/game.cpp
)

target_link_libraries(guess_game PRIVATE 
    pthread
)
```

**Rust的Cargo.toml**：
```toml
[package]
name = "guess_game"
version = "0.1.0"

[dependencies]
rand = "0.8.5"
```

## 7. 测试支持对比

**C的简单测试**：
```c
void test_compare() {
    assert(compare(1, 2) == -1);
    printf("Test passed!\n");
}
```

**C++的Google Test**：
```cpp
TEST(ComparisonTest, LessCase) {
    EXPECT_EQ(compare(1, 2), Ordering::Less);
}
```

**Rust的内置测试**：
```rust
#[cfg(test)]
mod tests {
    #[test]
    fn test_compare() {
        assert_eq!(compare(1, 2), Ordering::Less);
    }
}
```

## 8. 文档生成对比

**C的Doxygen**：
```c
/**
 * @brief 比较两个数字
 * @param a 第一个数字
 * @param b 第二个数字
 * @return 比较结果
 */
int compare(int a, int b);
```

**C++的文档注释**：
```cpp
/// \brief Compares two numbers
/// \tparam T Number type
/// \exception throws on invalid input
template<typename T>
Ordering compare(T a, T b);
```

**Rust的rustdoc**：
```rust
/// Compares two numbers
/// # Examples
/// ```
/// assert_eq!(compare(1, 2), Ordering::Less);
/// ```
pub fn compare(a: u32, b: u32) -> Ordering {
    a.cmp(&b)
}
```

## 9. 性能优化手段

**C的底层优化**：
```c
// 内联汇编优化
int fast_compare(int a, int b) {
    asm volatile (
        "cmp %1, %0\n\t"
        : "=r"(a)
        : "r"(b)
    );
    return a;
}
```

**C++的模板元编程**：
```cpp
template<int A, int B>
struct Compare {
    static constexpr Ordering value = 
        (A < B) ? Ordering::Less : 
        (A > B) ? Ordering::Greater : 
        Ordering::Equal;
};
```

**Rust的零成本抽象**：
```rust
#[inline(always)]
fn compare(a: u32, b: u32) -> Ordering {
    a.cmp(&b) // 编译后直接生成机器指令
}
```

## 10. 模式匹配能力

**C的switch局限**：
```c
switch (compare(a, b)) {
    case -1: printf("Less"); break;
    case 0: printf("Equal"); break;
    case 1: printf("Greater"); break;
    default: printf("Unknown"); // 必须处理
}
```

**C++17的pattern matching**：
```cpp
std::visit(overloaded {
    [](Ordering::Less) { std::cout << "Less"; },
    [](Ordering::Equal) { std::cout << "Equal"; },
    [](auto) { std::cout << "Other"; }
}, result);
```

**Rust的完整模式匹配**：
```rust
match a.cmp(&b) {
    Ordering::Less => println!("Less"),
    Ordering::Equal => println!("Equal"),
    Ordering::Greater => println!("Greater"),
    // 穷尽匹配检查
}
```

## 11. 标准库功能对比

**C的有限标准库**：
```c
#include <stdlib.h>
#include <time.h>

srand(time(NULL)); // 随机数初始化
int r = rand(); // 基本随机数
```

**C++的丰富STL**：
```cpp
#include <random>
#include <algorithm>

std::vector<int> v{1,2,3};
std::shuffle(v.begin(), v.end(), std::mt19937{std::random_device{}()});
```

**Rust的现代标准库**：
```rust
use rand::seq::SliceRandom;

let mut v = vec![1, 2, 3];
v.shuffle(&mut rand::thread_rng());
```

## 12. 元编程能力对比

**C的宏元编程**：
```c
#define COMPARE(a, b) ((a) < (b) ? -1 : ((a) > (b) ? 1 : 0))
```

**C++的模板元编程**：
```cpp
template<typename T>
constexpr auto compare(T a, T b) {
    return a <=> b; // C++20太空船操作符
}
```

**Rust的过程宏**：
```rust
#[derive(PartialEq, PartialOrd)]
struct Guess(u32); // 自动生成比较trait实现
```
