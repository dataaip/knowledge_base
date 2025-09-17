C++ 事务内存 （TM TS）

	正在进行的工作此页面正在建设中
	实验功能本页描述的功能是事务内存技术规范 ISO/IEC TS 19841：2015 （TM TS） 的一部分
事务内存是一种并发同步机制，它组合事务中的语句组，这些语句是

atomic（要么所有语句都发生，要么什么都不发生）
隔离（事务中的语句可能不会观察到另一个事务进行的半写入，即使它们并行执行）
典型的实现在支持的情况下使用硬件事务内存，并在可用的限制范围内（例如，直到变更集饱和），并回退到软件事务内存，通常以乐观并发实现：如果另一个事务更新了事务使用的一些变量，则静默重试。因此，可重试事务（“原子块”）只能调用事务安全函数。

请注意，在没有其他外部同步的情况下访问事务中的变量和事务之外的变量是数据竞争。

如果支持特征测试，则此处描述的功能由值等于或更大的 201505 的宏常量 __cpp_transactional_memory 指示。

同步块
同步复合语句

执行复合语句 ，就像在全局锁下一样：程序中所有最外层的同步块都以单个总顺序执行。每个同步块的末尾按该顺序与下一个同步块的开头同步。嵌套在其他同步块中的同步块没有特殊语义。

同步区块不是事务（与下面的原子区块不同），可以调用事务不安全的函数。

运行此代码
#include <iostream>
#include <thread>
#include <vector>
 
int f()
{
    static int i = 0;
    synchronized { // begin synchronized block
        std::cout << i << " -> ";
        ++i;       // each call to f() obtains a unique value of i
        std::cout << i << '\n';
        return i;  // end synchronized block
    }
}
 
int main()
{
    std::vector<std::thread> v(10);
    for (auto& t : v)
        t = std::thread([] { for (int n = 0; n < 10; ++n) f(); });
    for (auto& t : v)
        t.join();
}
输出：

0 -> 1
1 -> 2
2 -> 3
...
99 -> 100
通过任何方式离开同步块（到达末尾、执行 goto、break、continue 或 return，或抛出异常）会退出该块，如果退出的块是外部块，则以单个总顺序与下一个块同步。如果使用 std：：longjmp 退出同步块，则行为未定义。

不允许通过 goto 或 switch 进入同步块。

尽管同步块在全局锁下执行，但实现应检查每个块中的代码，并使用乐观并发（在可用的情况下由硬件事务内存支持）来处理事务安全代码，并使用最小锁定来处理非事务安全代码。当同步块调用非内联函数时，编译器可能必须退出推测执行并围绕整个调用保持锁，除非该函数被声明为 transaction_safe（见下文）或属性 [[optimize_for_synchronized]] （见下文）。

原子块
本节不完整
atomic_noexcept 复合语句

atomic_cancel 复合语句

atomic_commit 复合语句

1） 如果抛出异常，则调用 std：：abort。
2） 如果抛出异常，则调用 std：：abort，除非该异常是用于事务取消的异常之一（见下文），在这种情况下，事务被取消 ：程序中因原子块作的副作用而修改的所有内存位置的值将恢复为执行原子块开始时的值， 并且异常像往常一样继续堆栈展开。
3） 如果抛出异常，则事务正常提交。
用于 atomic_cancel 块中事务取消的异常是 std：：bad_alloc、std：：bad_array_new_length、std：：bad_cast、std：：bad_typeid、std：：bad_exception、std：：exception 和从中派生的所有标准库异常，以及特殊异常类型 std::tx_exception<T> 。

原子块中的 compound-statement 不允许执行任何表达式或语句或调用任何未 transaction_safe 的函数（这是编译时错误）。

// each call to f() retrieves a unique value of i, even when done in parallel
int f()
{
    static int i = 0;
    atomic_noexcept { // begin transaction
//  printf("before %d\n", i); // error: cannot call a non transaction-safe function
        ++i;
        return i; // commit transaction
    }
}
通过异常（到达末尾、转到、中断、继续、返回）以外的任何方式离开原子块都会提交事务。如果使用 std：：longjmp 退出原子块，则行为未定义。

事务安全功能
本节不完整
可以通过在其声明中使用关键字 transaction_safe 来显式声明函数为事务安全。

本节不完整
在 lambda 声明中，它要么紧接出现在捕获列表之后，要么紧接在 （关键字 mutable（如果使用）。

本节不完整
extern volatile int * p = 0;
struct S
{
    virtual ~S();
};
int f() transaction_safe
{
    int x = 0;  // ok: not volatile
    p = &x;     // ok: the pointer is not volatile
    int i = *p; // error: read through volatile glvalue
    S s;        // error: invocation of unsafe destructor
}
int f(int x) { // implicitly transaction-safe
    if (x <= 0)
        return 0;
    return x + f(x - 1);
}
如果通过指向事务安全函数的引用或指针调用非事务安全的函数，则该行为是未定义的。


指向事务安全函数的指针和指向事务安全成员函数的指针可分别隐式转换为指向函数的指针和指向成员函数的指针。如果生成的指针与原始指针相等，则未指定。

事务安全的虚拟函数
本节不完整
如果 transaction_safe_dynamic 函数的最终覆盖未声明 transaction_safe，则在原子块中调用它是未定义的行为。

标准库
除了引入新的异常模板外 std::tx_exception ，事务内存技术规范还对标准库进行了以下更改：

使以下函数显式 transaction_safe：
std：：forward， std：：move， std：：move_if_noexcept， std：：align， std：：abort， 全局默认运算符 new， 全局默认运算符 delete， std：：allocator：：construct 如果调用的构造函数是事务安全的，std：：allocator：:d estroy 如果调用的析构函数是事务安全的， std：：get_temporary_buffer、std：：return_temporary_buffer、std：：addressof、std：:p ointer_traits：:p ointer_to、支持事务取消的所有异常类型的每个非虚拟成员函数（参见上面的 atomic_cancel）
本节不完整
原因：还有更多
使以下函数显式 transaction_safe_dynamic
支持事务取消的所有异常类型的每个虚拟成员函数（请参阅上面的 atomic_cancel）
要求在分配器 X 上事务安全的所有作在 X：：rebind<>：：other 上都是事务安全的
属性
属性 [[optimize_for_synchronized]] 可以应用于函数声明中的声明符，并且必须出现在函数的第一个声明上。

如果一个函数在一个翻译单元中声明为 [[optimize_for_synchronized]]， 而在另一个翻译单元中声明了相同的函数而没有 [[optimize_for_synchronized]]， 则程序格式错误;无需诊断。

它指示应针对从同步语句调用的函数定义进行优化。特别是，它避免序列化同步块，这些块调用对大多数调用都是事务安全的函数，但不是所有调用（例如，可能需要重新哈希的哈希表插入，可能必须请求新块的分配器，一个可能很少记录的简单函数）。

std::atomic<bool> rehash{false};
 
// maintenance thread runs this loop
void maintenance_thread(void*)
{
    while (!shutdown)
    {
        synchronized
        {
            if (rehash)
            {
                hash.rehash();
                rehash = false;
            }
        }
    }
}
 
// worker threads execute hundreds of thousands of calls to this function 
// every second. Calls to insert_key() from synchronized blocks in other
// translation units will cause those blocks to serialize, unless insert_key()
// is marked [[optimize_for_synchronized]]
[[optimize_for_synchronized]] void insert_key(char* key, char* value)
{
    bool concern = hash.insert(key, value);
    if (concern)
        rehash = true;
}
没有属性的 GCC 汇编：整个函数序列化

insert_key(char*, char*):
	subq	$8, %rsp
	movq	%rsi, %rdx
	movq	%rdi, %rsi
	movl	$hash, %edi
	call	Hash::insert(char*, char*)
	testb	%al, %al
	je	.L20
	movb	$1, rehash(%rip)
	mfence
.L20:
	addq	$8, %rsp
	ret
GCC 程序集，属性为：

transaction clone for insert_key(char*, char*):
	subq	$8, %rsp
	movq	%rsi, %rdx
	movq	%rdi, %rsi
	movl	$hash, %edi
	call	transaction clone for Hash::insert(char*, char*)
	testb	%al, %al
	je	.L27
	xorl	%edi, %edi
	call	_ITM_changeTransactionMode # Note: this is the serialization point
	movb	$1, rehash(%rip)
	mfence
.L27:
	addq	$8, %rsp
	ret
本节不完整
原因：检查带有中继的组装，同时显示调用方更改
笔记
本节不完整
原因：怀亚特论文/演讲的经验笔记
关键字
atomic_cancel ， atomic_commit ， atomic_noexcept ， synchronized ， transaction_safe ， transaction_safe_dynamic

编译器支持
GCC 从 6.1 版开始支持此技术规范（需要 -fgnu-tm 才能启用）。从 4.7 开始，GCC 支持此规范的旧变体。
