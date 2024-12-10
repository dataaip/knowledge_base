/**
* @file              atomics.c
* @brief             atomic 类型代码文件，测试 原子 类型(C11起)、_Atomic
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.30
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.30 <td>0.1             <td>brightl         <td>_Atomic类型声明、特性、解释
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdatomic.h>  // 原子类型和操作函数定义在 <stdatomic.h> 头文件中
#include <pthread.h>    // 线程库
#include <threads.h>    // 线程库
#include <signal.h>     // 信号库

/**
* @brief             声明：_Atomic (类型名)、_Atomic 类型名 (C11起)
*
* @note              常用的原子类型和宏：atomic_bool、atomic_char、atomic_uchar、atomic_short、atomic_ushort、atomic_int、atomic_uint、atomic_long、atomic_ulong、atomic_llong、atomic_ullong、atomic_flag
*/
#define ATOMICS_TYPE

atomic_int counter = 0;                                               // 4、原子变量 atomic_int counter，并且两个线程 Thread A 和 Thread B 分别对它进行不同的操作
void* thread_A_func(void* arg) {                                      // 线程 A 的操作 
  atomic_store(&counter, 1);                                          // atomic_store(&counter, 1); 将 counter 设置为 1
  printf("Thread A: counter = %d\n", atomic_load(&counter));  // printf("Thread A: counter = %d\n", atomic_load(&counter)); 打印当前 counter 的值
  return NULL;
}
void* thread_B_func(void* arg) {                                      // 线程 B 的操作
  atomic_store(&counter, 2);                                          // atomic_store(&counter, 2); 将 counter 设置为 2
  printf("Thread B: counter = %d\n", atomic_load(&counter));  // printf("Thread B: counter = %d\n", atomic_load(&counter)); 打印当前 counter 的值
  return NULL;
}

int counteri = 0;                               // 4、非原子操作中的数据竞争
void* incrementi(void* arg) {                   // 在这个示例中，两个线程同时递增一个共享变量 counteri 由于 counteri++ 不是一个原子操作，它实际上包含了三个步骤
  for (int i = 0; i < 100000; i++) {            // 1、读取 counter 的当前值
    counteri++;                                 // 2、增加 1
  }                                             // 3、将新值写回 counter
  return NULL;                                  // 4、如果两个线程同时执行这些步骤，它们可能会读取相同的值并将其增加 1，从而导致计数器的值小于预期值（200000）
}
int counterimain(void) {                            
  pthread_t thread1, thread2;
  pthread_create(&thread1, NULL, incrementi, NULL);
  pthread_create(&thread2, NULL, incrementi, NULL);
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  printf("Final counteri value: %d\n", counteri);
  return 0;
}
atomic_int countera = 0;
void* incrementa(void* arg) {                   // 4、在这个示例中，我们使用了 atomic_int 类型和 atomic_fetch_add 函数。atomic_fetch_add 是一个原子操作，它确保对 counter 的读取、增加和写回是不可分割的，即使多个线程同时执行，也不会出现数据竞争
  for (int i = 0; i < 100000; i++) {
    atomic_fetch_add(&countera, 1);
  }
  return NULL;
}
int counteramain(void) {                            
  pthread_t thread1, thread2;
  pthread_create(&thread1, NULL, incrementa, NULL);
  pthread_create(&thread2, NULL, incrementa, NULL);
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  printf("Final countera value: %d\n", atomic_load(&countera));
  return 0;
}

atomic_int counterac = 0;
void* thread_A(void* arg) {                         // 4、atomic_store 和 atomic_load 函数本身是原子的，这意味着它们在单独的操作中是线程安全的。然而，在多线程环境下，如果我们希望 printf 打印出的值总是 atomic_store 设置的值，还需要确保这些操作之间没有其他线程的干扰
  atomic_store(&counterac, 1);                                      
  printf("Thread A: counterac = %d\n", atomic_load(&counterac));
  return NULL;
}
int sigthmain(void) {                               // 在这个简单的例子中，由于只有一个线程 thread_A 在操作 counter，atomic_store 和 atomic_load 的顺序可以保证 printf 打印的值是 atomic_store 设置的值 1
  pthread_t a;                                      // 但是，如果有多个线程在操作 counter，就需要考虑线程间的同步问题。在多个线程的情况下，不能仅依赖 atomic_store 和 atomic_load 本身，因为在两个原子操作之间，其他线程可能已经修改了 counter 的值
  pthread_create(&a, NULL, thread_A, NULL);
  pthread_join(a, NULL);
  return 0;
}
atomic_int counteracm = 0;                          // 多线程环境下的同步 为了确保 printf 始终打印 atomic_store 设置的值，在多线程环境下需要某种形式的同步机制，例如互斥锁（mutex）或条件变量，以确保在执行 printf 语句时没有其他线程修改 counter
pthread_mutex_t mutex;                              // a、使用互斥锁 以下是一个使用互斥锁来确保线程同步的示例
void* thread_AM(void* arg) {                         
  pthread_mutex_lock(&mutex);
  atomic_store(&counteracm, 1);
  printf("Thread AM: counteracm = %d\n", atomic_load(&counteracm));
  pthread_mutex_unlock(&mutex);
  return NULL;
}
void* thread_BM(void* arg) {
  pthread_mutex_lock(&mutex);
  atomic_store(&counteracm, 2);
  printf("Thread BM: counteracm = %d\n", atomic_load(&counteracm));
  pthread_mutex_unlock(&mutex);
  return NULL;
}
int multhmain(void) {                               // 在这个示例中 使用 pthread_mutex_t 互斥锁来确保对 counter 的访问是同步的，在每个线程中，atomic_store 和 printf 操作在同一个互斥锁保护的临界区内，确保 printf 打印出的值是 atomic_store 设置的值
  pthread_t a, b;                                   // atomic_store 和 atomic_load：单独操作是原子的、线程安全的，但在多线程环境下，不能保证顺序一致性，多线程环境下的同步：需要使用同步机制（如互斥锁）来确保在执行 printf 语句时没有其他线程修改共享变量
  pthread_mutex_init(&mutex, NULL);
  pthread_create(&a, NULL, thread_AM, NULL);
  pthread_create(&b, NULL, thread_BM, NULL);
  pthread_join(a, NULL);
  pthread_join(b, NULL);
  pthread_mutex_destroy(&mutex);
  return 0;
}
pthread_cond_t cond;                               // b、条件变量用于线程之间的复杂同步，通常与互斥锁一起使用。条件变量允许一个线程阻塞并等待某个条件变为真，另一个线程可以发出信号以唤醒等待的线程
int ready = 0;
void* thread_function1(void* arg) {
  pthread_mutex_lock(&mutex);
  ready = 1;
  pthread_cond_signal(&cond);                 // 发出信号，唤醒等待的线程
  pthread_mutex_unlock(&mutex);
  return NULL;
}
void* thread_function2(void* arg) {
  pthread_mutex_lock(&mutex);
  while (ready == 0) {
    pthread_cond_wait(&cond, &mutex);  // 等待条件变为真
  }
  printf("Thread %ld: ready = %d\n", (long)arg, ready);
  pthread_mutex_unlock(&mutex);
  return NULL;
}
int condmain(void) {                               // 在这个示例中，线程 thread_function2 将等待 ready 变为 1，当 thread_function1 设置 ready = 1 并发出信号后，thread_function2 将被唤醒并继续执行
  pthread_t threads[2];
  pthread_mutex_init(&mutex, NULL);
  pthread_cond_init(&cond, NULL);
  pthread_create(&threads[0], NULL, thread_function1, (void*)0);
  pthread_create(&threads[1], NULL, thread_function2, (void*)1);
  for (int i = 0; i < 2; i++) {
    pthread_join(threads[i], NULL);
  }
  pthread_mutex_destroy(&mutex);
  pthread_cond_destroy(&cond);
  return 0;
}
atomic_int xm = 0;                            // c、内存栅栏（Memory Fences）是一种用于强制特定操作顺序的同步原语。它们在多线程编程中尤为重要，特别是在使用低级别的内存操作时。内存栅栏通过防止编译器和处理器对内存操作进行重排序来确保代码执行的顺序性
atomic_int ym = 0;                            // 内存栅栏主要有以下几种类型：读栅栏（Load Fence）：确保在栅栏之前的所有读操作在栅栏之后的读操作之前完成、写栅栏（Store Fence）：确保在栅栏之前的所有写操作在栅栏之后的写操作之前完成、全栅栏（Full Fence）：确保在栅栏之前的所有读和写操作在栅栏之后的读和写操作之前完成
void* thread1_func(void* arg) {               // 使用内存栅栏的目的 内存栅栏的主要目的是防止编译器和CPU对内存操作进行优化或重排序，这些优化可能会破坏多线程程序的正确性。例如，在某些硬件架构上，处理器可能会为了提高性能而改变指令的执行顺序，但这可能会导致数据不一致问题
  atomic_store(&xm, 1);                       // 写入 xm
  atomic_thread_fence(memory_order_seq_cst);  // 全栅栏，确保写入 xm 在读取 ym 之前完成
  int ry = atomic_load(&ym);                  // 读取 ym
  printf("Thread 1: ym = %d\n", ry);
  return NULL;
}
void* thread2_func(void* arg) {
  atomic_store(&ym, 1);                        // 写入 ym
  atomic_thread_fence(memory_order_seq_cst);   // 全栅栏，确保写入 ym 在读取 xm 之前完成
  int rx = atomic_load(&xm);                   // 读取 xm
  printf("Thread 2: xm = %d\n", rx);
  return NULL;
}
int mmain(void) {                              // 在这段代码中，thread1_func 先将 x 设置为 1，然后通过全栅栏 atomic_thread_fence(memory_order_seq_cst) 确保写入 x 的操作在读取 y 之前完成，thread2_func 先将 y 设置为 1，然后通过全栅栏 atomic_thread_fence(memory_order_seq_cst) 确保写入 y 的操作在读取 x 之前完成
  pthread_t t1, t2;                            // 通过使用内存栅栏，我们确保了线程对 x 和 y 的操作顺序，从而避免了竞态条件，内存栅栏是一种强制操作顺序的同步原语，它们通过防止编译器和处理器对内存操作进行重排序来确保代码执行的顺序性。借助内存栅栏，我们可以在多线程环境中确保操作的正确顺序，避免数据不一致和竞态条件
  pthread_create(&t1, NULL, thread1_func, NULL);
  pthread_create(&t2, NULL, thread2_func, NULL);
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  return 0;
}

atomic_int x = 0;
atomic_int y = 0;
void* thread1(void* arg) {                          // 6、假设我们有两个原子变量 atomic_int x 和 atomic_int y，以及两个线程 T1 和 T2。下面是两个线程的代码
  atomic_store(&x, 1);                              // 在这个例子中，thread1 和 thread2 分别修改 x 和 y 并读取对方的值。由于每个原子对象的修改顺序是独立的，不同线程可能会观察到不同的顺序
  int ry = atomic_load(&y);
  printf("Thread 1: y = %d\n", ry);
  return NULL;
}
void* thread2(void* arg) {
  atomic_store(&y, 1);
  int rx = atomic_load(&x);
  printf("Thread 2: x = %d\n", rx);
  return NULL;
}
int xymain(void) {                                 // 可能的执行顺序和结果 由于每个原子对象都有其自身的修改顺序，所有线程对单个原子对象的修改顺序观察是一致的。但是，不同线程对不同原子对象的观察顺序可能会不同。这会导致不同的打印结果
  pthread_t t1, t2;                                // Thread A 先运行，然后 Thread B 运行、Thread B 先运行，然后 Thread A 运行、Thread A 和 Thread B 交替运行、Thread B 和 Thread A 交替运行
  pthread_create(&t1, NULL, thread1, NULL);
  pthread_create(&t2, NULL, thread2, NULL);
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  return 0;
}

atomic_int M = ATOMIC_VAR_INIT(0);                          // 7、假设我们有两个线程，它们分别对一个原子对象 M 进行写操作。以下是一个示例代码，展示了写写连贯性在C语言中的应用
void* thread1_func7(void* arg) {
  atomic_store(&M, 1);                                      // 修改操作 A
  atomic_store(&M, 2);                                      // 修改操作 B
  return NULL;                                              
}                                                                  
void* thread2_func7(void* arg) {
  int value;
  do {
    value = atomic_load(&M); 
  } while (value != 2);                                    // 等待 M 变为 2                     
  printf("M: %d\n", value);
  return NULL;
}
int func7main(void) {                                      // 在这个示例中：thread1 执行两个修改操作、atomic_store(&M, 1)（修改操作A）、atomic_store(&M, 2)（修改操作B）
  pthread_t thread1, thread2;                              // 由于写写连贯性，所有线程都会观察到 thread1 中的修改操作按顺序执行，即 A 发生在 B 之前，这意味着 M 的值会先变为 1，然后变为 2，thread2 不断读取 M 的值，直到值变为 2
  pthread_create(&thread1, NULL, thread1_func7, NULL);
  pthread_create(&thread2, NULL, thread2_func7, NULL);
  pthread_join(thread1, NULL);           // 由于写写连贯性保证 A 发生在 B 之前，最终 M 的值会变为 2，并且 thread2 一定会观察到这一点
  pthread_join(thread2, NULL);
  return 0;
}
atomic_int ME = ATOMIC_VAR_INIT(0);
void* thread1_func7_exp(void* arg) {
  atomic_store_explicit(&ME, 1, memory_order_relaxed);    // 存储操作
  atomic_store_explicit(&ME, 2, memory_order_relaxed);    // 存储操作
  return NULL;
}
void* thread2_func7_exp(void* arg) {
  int value;
  do {
    value = atomic_load_explicit(&ME, memory_order_relaxed); // 加载操作
  } while (value != 2); // 等待 M 变为 2
  printf("ME: %d\n", value);
  return NULL;
}
int func7mainexp(void) {                                   // 在这个示例中 thread1 执行两个存储操作，将 M 设置为 1 和 2，thread2 不断地从 M 中加载值，直到 M 的值变为 2
  pthread_t thread1, thread2;                              // 由于使用了 memory_order_relaxed，这两个线程的操作没有任何排序或同步保证，这意味着 thread1 的两个存储操作可以在任何顺序执行，并且对其它线程立即可见的顺序是不确定的，thread2 的加载操作也可以自由地重新排列，不保证读取到的值是最新的
  pthread_create(&thread1, NULL, thread1_func7_exp, NULL);
  pthread_create(&thread2, NULL, thread2_func7_exp, NULL);
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  return 0;
}
// atomic_store_explicit(&M, 1, memory_order_relaxed);、atomic_load_explicit(&M, memory_order_relaxed);
// 内存顺序 (memory_order_relaxed): 使用 memory_order_relaxed 进行存储操作时，不会对其它线程的操作施加任何排序限制。这意味着此存储操作可以在编译器和处理器层面自由地重新排列，并且该操作对其它线程立即可见的顺序是不确定的，这种方式用于性能优化，适用于不需要跨线程可见性和排序保证的情况
// atomic_store_explicit 允许调用者指定内存顺序，以灵活控制存储操作的同步和排序，内存顺序是一个枚举类型（memory_order），它影响该操作在多线程环境中的可见性和排序。常用的内存顺序值包括
// memory_order_relaxed: 不需要任何排序或同步保证
// memory_order_consume: 数据依赖排序
// memory_order_acquire: 获取语义
// memory_order_release: 释放语义
// memory_order_acq_rel: 获取和释放语义
// memory_order_seq_cst: 顺序一致性
// atomic_store 是 atomic_store_explicit 的简化版本，默认使用最严格的顺序一致性内存顺序（memory_order_seq_cst），意味着该操作是顺序一致的，所有线程都会以一致的顺序观察到这个存储操作

atomic_int MWE = ATOMIC_VAR_INIT(0);                              // 8、读读连贯 读读连贯性规定，如果一个原子对象 MWE 的值计算 A 发生早于值计算 B，且从 MWE 上的副效应 X 求得 A 值，则 B 所计算得的值要么是 X 所存储的值，要么是 MWE 上的副效应 Y 所存储的值，其中 Y 在 MWE 的修改顺序中出现晚于 X
void* writer_thread(void* arg) {                                  // 这意味着，如果一个线程在某个点读取了一个原子变量的值，那么在稍后的时间点再次读取该变量时，读取到的值要么是同一个值，要么是一个更新后的值
  atomic_store_explicit(&MWE, 1, memory_order_relaxed);           // 副效应 X
  atomic_store_explicit(&MWE, 2, memory_order_relaxed);           // 副效应 Y 晚于 X
  return NULL;
}
void* reader_thread1(void* arg) {
  int value = atomic_load_explicit(&MWE, memory_order_relaxed);   // 值计算 A
  printf("Reader 1: %d\n", value);
  return NULL;
}
void* reader_thread2(void* arg) {
  int value = atomic_load_explicit(&MWE, memory_order_relaxed);   // 值计算 B
  printf("Reader 2: %d\n", value);
  return NULL;
}
int wrmain(void) {                                                // 假设我们有三个线程，它们分别对一个原子对象 MWE 进行读和写操作。以下是一个示例代码，展示了读读连贯性在C语言中的应用
  pthread_t writer, reader1, reader2;                             // writer_thread 执行两个写操作 atomic_store_explicit(&M, 1, memory_order_relaxed)（副效应 X) 、atomic_store_explicit(&M, 2, memory_order_relaxed)（副效应 Y）
  pthread_create(&writer, NULL, writer_thread, NULL);     // reader_thread1 和 reader_thread2 分别执行读操作 reader_thread1 执行值计算 A、reader_thread2 执行值计算 B
  pthread_create(&reader1, NULL, reader_thread1, NULL);
  pthread_create(&reader2, NULL, reader_thread2, NULL);
  pthread_join(writer, NULL);                   // 根据读读连贯性，如果 reader_thread1 的值计算 A 早于 reader_thread2 的值计算 B，且 A 从 M 上的副效应 X 求得值（即 M = 1），那么 B 所计算得的值要么是 1（副效应 X 所存储的值），要么是 2（副效应 Y 所存储的值，因为 Y 在 M 的修改顺序中出现晚于 X）
  pthread_join(reader1, NULL);                  // 由于读读连贯性，Reader 2 不会读取到比 Reader 1 更早的值。也就是说，如果 Reader 1 读取到 1 或 2，那么 Reader 2 读取到的值要么是 1，要么是 2，而不会是更早的值 0
  pthread_join(reader2, NULL);
  return 0;
}

atomic_int MWR = ATOMIC_VAR_INIT(0);                              // 9、读写连贯（Read-Write Coherence) 读写连贯性规定，如果一个原子对象 M 的值计算 A 发生早于 M 上的操作 B，且从 M 上的副效应 X 求得 A 值，则 X 在 M 的修改顺序中出现早于 B。这意味着在多线程环境中，如果一个线程读取了一个原子对象的某个值，并且另一个线程在稍后对该原子对象进行了写入操作，那么读取的值一定是写入操作之前的值
void* writer_thread9(void* arg) {                           
  atomic_store_explicit(&MWR, 1, memory_order_relaxed);           // 副效应 X
  return NULL;
}
void* reader_thread9(void* arg) {
  int value = atomic_load_explicit(&MWR, memory_order_relaxed);   // 值计算 A
  printf("Reader: %d\n", value);
  return NULL;
}
int wr9main(void) {                                               // 假设我们有两个线程，一个线程执行读取操作，另一个线程执行写入操作
  pthread_t writer, reader;                                       // 在这个示例中 writer_thread 执行一个写操作 atomic_store_explicit(&M, 1, memory_order_relaxed)（副效应 X）、reader_thread 执行一个读操作 atomic_load_explicit(&M, memory_order_relaxed)（值计算 A）
  pthread_create(&writer, NULL, writer_thread9, NULL);
  pthread_create(&reader, NULL, reader_thread9, NULL);
  pthread_join(writer, NULL);                   // 可能的执行顺序与输出 reader_thread 在 writer_thread 之前执行 如果 reader_thread 的读操作 A 早于 writer_thread 的写操作 B，那么 reader_thread 读取的值是写操作之前的值，即初始值 0、writer_thread 在 reader_thread 之前执行 如果 writer_thread 的写操作 B 早于 reader_thread 的读操作 A，那么 reader_thread 读取的值是写操作之后的值，即 1
  pthread_join(reader, NULL);                   // 读写连贯性保证了在时间上发生较早的读操作，其读取的值一定是写操作之前的值。通过示例代码可以看到，在多线程环境中，如果一个线程读取了一个原子对象的值，并且另一个线程在稍后对该原子对象进行了写入操作，那么读取的值不会是写入操作之后的值。这种性质确保了原子操作的正确性和一致性
  return 0;
}

atomic_int flag = 0;                                                // 11、内存顺序类型
int data = 0;
void* flagwriter(void* arg) {
  data = 42;                                                        // 写入数据
  atomic_store_explicit(&flag, 1, memory_order_release);            // writer 线程先写入数据 42 到变量 data，然后使用 memory_order_release 将 flag 设为 1，memory_order_release 确保在设置 flag 之前的所有写操作（即 data = 42）对其他线程是可见的
  return NULL;
}
void* flagreader(void* arg) {
  while (atomic_load_explicit(&flag, memory_order_acquire) == 0) {  // reader 线程在读取 flag 时使用 memory_order_acquire，这个读取操作保证了在读取到 flag 为 1 之后的所有操作（即读取 data 的操作）都不会被重排序到读取 flag 之前，从而确保读取到的 data 是 42
      // 等待 flag 变为 1
  }
  printf("Read data: %d\n", data);                          // 确保读取 42
  return NULL;
}
int flagmain(void) {
  pthread_t t1, t2;
  pthread_create(&t1, NULL, flagwriter, NULL);
  pthread_create(&t2, NULL, flagreader, NULL);
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  return 0;
}

atomic_int acnt;
int cnt;
int thacntf(void* thr_data) {
  for(int n = 0; n < 1000; ++n) {
    ++cnt;
    ++acnt;
    // 对于此例，宽松内存顺序是足够的，例如
    // atomic_fetch_add_explicit(&acnt, 1, memory_order_relaxed);
  }
  return 0;
}

/**
* @brief             介绍：C11 标准引入了原子类型（atomic types），用于在多线程编程环境中实现安全的并发访问。原子类型确保对某个变量的所有操作（如读、写或修改）是不可分割的，即这些操作要么完全执行，要么完全不执行，不会被其他线程打断。这对于避免数据竞争和确保线程安全非常重要 
* @return  int       Return Description
*
* @note              头文件和类型定义 原子类型和相关操作定义在 <stdatomic.h> 头文件中。C11 提供了一组原子类型的宏和函数，允许开发者声明和操作原子对象
*/
int atomics_fn(void) {
#ifdef ATOMICS_TYPE
  /*
  原子类型语法 (C11起) _Atomic 有两种用法：用作类型说明符和用作类型限定符
  1、_Atomic (类型名) 用作类型说明符；这种用法定义了一个新的原子类型，其中类型名是除数组或函数外的任意类型。注意，类型名不能是另一个原子类型或带有 const、volatile、restrict 限定符的类型
  2、_Atomic 类型名 用作类型限定符；这种用法定义了类型名的一个原子版本。与 const、volatile 和 restrict 等其他类型限定符不同，原子类型可能有不同的大小、对齐和对象表示。原子类型可以与 const、volatile 和 restrict 等限定符混合使用
  _Atomic (类型名)：用作类型说明符，定义新的原子类型，不能带有其他限定符或嵌套其他原子类型。这是为了简化类型系统，避免复杂性，即这种用法定义了一个新的原子类型。此时，_Atomic 创建了一个新的类型，与基础类型不同。由于 _Atomic (类型名) 是创建一个全新的类型定义，所以它不能包含任何限定符（如 const、volatile、restrict），也不能嵌套另一个原子类型
  _Atomic 类型名：用作类型限定符，修饰现有类型，可以与其他限定符（如 const、volatile、restrict）一起使用。这种用法提供了更大的灵活性，即这种用法将一个已存在的类型限定为原子类型。在这种用法中，_Atomic 被视为类型限定符，就像 const、volatile 和 restrict 一样。由于它是一个限定符，可以与其他限定符一起使用

  3、头文件 <stdatomic.h> 定义了 37 个便利类型别名，从 atomic_bool 到 atomic_uintmax_t 简化了此关键词与内建及库类型的组合使用，<stdatomic.h> 提供了 37 个便利类型别名。这些别名可以让代码更简洁、更易读
  以下是 <stdatomic.h> 中一些常用的便利类型别名
  atomic_bool
  atomic_char
  atomic_schar
  atomic_uchar
  atomic_short
  atomic_ushort
  atomic_int
  atomic_uint
  atomic_long
  atomic_ulong
  atomic_llong
  atomic_ullong
  atomic_wchar_t
  atomic_char16_t
  atomic_char32_t
  atomic_int_least8_t
  atomic_uint_least8_t
  atomic_int_least16_t
  atomic_uint_least16_t
  atomic_int_least32_t
  atomic_uint_least32_t
  atomic_int_least64_t
  atomic_uint_least64_t
  atomic_int_fast8_t
  atomic_uint_fast8_t
  atomic_int_fast16_t
  atomic_uint_fast16_t
  atomic_int_fast32_t
  atomic_uint_fast32_t
  atomic_int_fast64_t
  atomic_uint_fast64_t
  atomic_intptr_t
  atomic_uintptr_t
  atomic_size_t
  atomic_ptrdiff_t
  atomic_intmax_t
  atomic_uintmax_t 
  这些别名是对 _Atomic 类型名 的简化 atomic_int 实际上是 _Atomic int、atomic_long 实际上是 _Atomic long、atomic_uint64_t 实际上是 _Atomic uint64_t 

  若编译器定义了宏常量 __STDC_NO_ATOMICS__，则不提供关键词 _Atomic

  解释
  4、原子类型的对象是仅有的免除数据竞争的对象；即它们可以被两个线程共时修改，或被一个修改并被另一个读取
  数据竞争（Data Race）是一种常见的并发问题，发生在两个或多个线程同时访问同一个共享变量，并且至少有一个线程在修改这个变量。数据竞争可能导致不可预测的行为和难以调试的错误，原子类型通过确保对变量的操作是不可分割的（即原子的），从而避免数据竞争。原子操作可以被看作是在内部加锁，使得一个操作在一个时间点只能由一个线程完成
  原子对象：原子对象通过原子操作避免数据竞争
  线程安全：原子操作提供了一种线程安全的方式来修改共享变量，避免了多线程访问中的数据竞争问题
  
  为什么原子类型可以避免数据竞争
  原子类型（Atomic Types）通过确保对变量的操作是不可分割的（即原子的），从而避免了数据竞争。具体来说，原子操作具有以下特性
  不可分割性：原子操作是不可分割的，即操作要么全部完成，要么完全不完成。不会出现部分完成的情况
  顺序一致性：原子操作保证在不同线程中对同一个原子对象的操作有一个一致的顺序。即使多个线程同时操作同一个原子对象，它们看到的操作结果也是一致的
  硬件支持：现代处理器提供了对原子操作的硬件支持，如原子加减、交换等，使得这些操作在硬件层面上也是原子的

  5、每个原子对象都拥有关联于其自身的修改顺序，即对该对象的修改的全序。若从某个线程的视角来看，对于某原子对象 M 修改的 A 发生早于同一原子对象 M 修改的 B，则在 M 修改的顺序中 A 出现早于 B
  修改顺序 每个原子对象都有一个关联的修改顺序（Modification Order），这是一种全序（Total Order），即对该对象的所有修改可以按某种线性顺序排列。这种顺序定义了某个线程视角下对该原子对象的所有修改的顺序
  修改顺序：原子对象的修改顺序是全序的，确保对原子对象的所有修改可以按某种线性顺序排列

  6、注意即使每个原子对象都有其自身的修改顺序，却并无单独的全序；不同线程可能会观测到不同原子对象有相异的修改顺序，即原子的修改顺序 每个原子对象都有其自身的“修改顺序”（modification order），这是对该对象的所有修改操作的总顺序。对于一个特定的原子对象，所有线程都能以相同的顺序观察到这些修改。但这并不意味着所有线程对不同原子对象的观察顺序是一致的 
  多线程编程中的一个重要概念 内存模型和一致性。在多线程环境中，即使单个原子对象的操作具有顺序一致性，不同线程可能会观察到不同的操作顺序。这是因为内存模型允许某些优化和重排序，以提高性能
  内存模型中的一致性 内存模型允许一定程度的重排序和优化，这使得不同线程可能以不同的顺序观察到操作的执行。即使 atomic_store 和 atomic_load 是原子的且在单个对象上是有序的，不同线程对不同对象的观察顺序仍可能不一致
  
  解决方法 如果需要确保某些操作的严格顺序，可以使用更多的同步原语
  互斥锁（Mutex）：确保临界区内的操作是顺序一致的，互斥锁（Mutex）是用于保护临界区的一种同步机制。临界区是指那些不允许多个线程同时执行的代码段。通过使用互斥锁，可以确保在同一时间只有一个线程可以进入临界区，从而保证操作的顺序一致性
  条件变量（Condition Variable）：用于线程间的复杂同步，条件变量用于线程之间的复杂同步，通常与互斥锁一起使用。条件变量允许一个线程阻塞并等待某个条件变为真，另一个线程可以发出信号以唤醒等待的线程
  内存栅栏（Memory Fences）：强制特定的操作顺序，内存栅栏（也称为内存屏障）是一种低级的同步原语，用于防止编译器和处理器对读写操作进行重排序。内存栅栏可以确保某些操作在内存中的执行顺序

  原子的修改顺序：每个原子对象都有其自身的修改顺序，所有线程对同一原子对象的修改顺序观察是一致的
  不同线程的观察顺序：不同线程可能对不同原子对象的修改顺序观察不一致，这没有单独的全序
  内存模型的影响：内存模型允许优化和重排序，使得不同线程可能以不同的顺序观察到操作

  对于所有原子运算，保证有四种连贯，即在多线程编程中，原子操作是确保并发安全的关键。C11标准引入了原子类型和操作，这些操作保证了四种连贯性：写写连贯、读读连贯、读写连贯和写读连贯
  7、写写连贯：若原子对象 M 的修改操作 A 发生早于 M 的修改操作 B，则 M 的修改顺序中 A 出现早于 B
  8、读读连贯：若原子对象 M 的值计算 A 发生早于 M 的值计算 B，且从 M 上的副效应 X 求得 A 值，则 B 所计算得的值要么是 X 所存储的值，要么是 M 上的副效应 Y 所存储的值，其中 Y 在 M 的修改顺序中出现晚于 X
  9、读写连贯：若原子对象 M 的值计算 A 发生早于 M 上的操作 B，则从 M 上的副效应 X 求得 A 值，这里 X 在 M 的修改顺序中出现早于 B
  10、写读连贯：若在原子对象 M 上的副效应 X 发生早于 M 的值计算 B，则求值 B 从 X，或从在 M 的修改顺序中出现晚于 X 的副效应 Y 求得其值
  写写连贯性保证了在一个线程对某个原子对象进行写操作之后，该线程以及其他所有线程对该原子对象的后续写操作都能够看到先前写操作的结果。这意味着写操作不会被乱序执行
  读读连贯性保证一个线程对原子对象的读操作在另一个线程对该原子对象的读操作之前发生时，前一个读操作不得看到后一个读操作的结果
  读写连贯性保证一个线程对原子对象的读操作在另一个线程对该原子对象的写操作之前发生时，读操作不能读取到写操作之后的值
  写读连贯性保证如果一个线程对原子对象进行了写操作，而另一个线程随后进行了读操作，那么读操作要么读取到当前的写入值，要么读取到之后的某个值，而不会读取到更早的值

  11、一些原子运算亦是同步操作：它们可以拥有附加的释放语义、获取语义，或顺序一致语义。见 memory_order ?
  在C语言中的多线程编程中，原子操作提供了一种确保并发访问数据安全的机制。不同的内存顺序（memory_order）描述了操作的同步语义以及它们在程序中的顺序。具体来说，内存顺序控制了原子操作对其他线程的可见性，以及它们在与其他内存操作的相对顺序
  memory_order_relaxed 不提供任何同步或顺序的保证。这意味着此操作只保证原子性，不提供跨线程的可见性保证，当你只需要原子操作的原子性而不关心操作的顺序时
  memory_order_acquire 获取操作，确保在当前线程中，这个操作之后的所有读写操作都不会在内存操作之前被重排序。这种语义主要用于加载操作，当你需要确保在读取一个值之后，随后读取的其他值都是最新的
  memory_order_release 释放操作，确保在当前线程中，这个操作之前的所有读写操作都不会在内存操作之后被重排序。这种语义主要用于存储操作，当你需要确保在写入一个值之前，所有的写操作都已经完成
  memory_order_acq_rel 获取-释放操作，结合了获取和释放语义。这意味着这个操作既是获取操作又是释放操作。它确保在当前线程中，这个操作之前的所有写操作在这个操作之后的所有读操作之前完成，当你在同一操作中既需要获取语义又需要释放语义时，通常用于读-改-写操作
  memory_order_seq_cst 顺序一致性操作，提供最强的同步和顺序保证。所有操作都看起来像是在单一的全局顺序中执行。它确保所有线程看到的操作顺序是一致的，当你需要最强的同步和顺序保证时

  12、内建的自增减运算符和复合赋值运算符是拥有完全序列一致顺序（如同用 memory_order_seq_cst）的读-修改-写操作。若想要较不严格的同步语义，则可以用标准库函数替代
  内建的自增减运算符和复合赋值运算符 在C语言中，内建的自增/自减运算符（如++和--）以及复合赋值运算符（如+=和-=）在用于原子类型时，通常会具有完全序列一致的顺序（memory_order_seq_cst）的读-修改-写操作
  
  完全序列一致顺序（memory_order_seq_cst）memory_order_seq_cst（Sequentially Consistent Order）是C11标准中的一个内存顺序模型。它确保所有操作在所有线程中以全局一致的顺序进行，这意味着所有线程看到的操作顺序都是相同的。这是最严格的内存序列模型，确保了最强的同步语义，具体来说，对于原子变量的内建自增/自减以及复合赋值操作，使用memory_order_seq_cst意味着这些操作不仅是原子的，而且它们的执行顺序在程序的所有线程中是一致的
  较不严格的同步语义 在某些情况下，完全序列一致顺序可能不必要，并且可能会导致性能开销。如果你希望使用较不严格的同步语义，可以使用标准库函数来替换默认的内建运算符，并指定更松散的内存顺序约束，C标准库提供了一些原子操作函数（如atomic_fetch_add、atomic_fetch_sub等），允许你指定内存顺序模型，如memory_order_relaxed、memory_order_acquire、memory_order_release等
  
  13、原子属性仅对左值表达式有意义。左值到右值转换（模仿从原子区域到 CPU 寄存器的内存读取）会把原子性及其他限定符剥去
  原子属性仅对左值表达式有意义 左值（lvalue）是指可以出现在赋值运算符左侧的表达式，它代表一个存储位置。原子类型（如atomic_int）的原子属性是指这些类型的变量在多线程环境中执行原子操作（如读、写、修改时不会被其他线程干扰）的能力
  原子属性仅对左值表达式有意义，这意味着对原子变量的原子操作必须通过左值来进行。例如，对一个原子变量执行原子读、写或修改操作时，该变量必须是一个左值

  左值到右值转换 在C和C++中，右值（rvalue）是指可以出现在赋值运算符右侧的表达式，它代表某个值（而不是存储位置）。当一个左值转换为右值时，它的值会被读取，并且该值可以被用来进行计算或赋值给其他变量
  左值到右值转换（即从原子区域到CPU寄存器的内存读取）会把原子性及其他限定符剥去。意思是，当你读取一个原子变量的值并将其存储在一个非原子变量（通常是一个CPU寄存器）中时，原子变量的原子性属性就不再适用了

  原子属性仅对左值表达式有意义：原子操作必须通过左值（存储位置）来进行
  左值到右值转换：当将一个原子变量的值读取到一个普通变量（或右值）中时，原子性属性被剥去，该普通变量就不再具备原子性

  14、本节未完成原因：更多和 memory_order 及原子库页面的综述互动

  原子类型注解
  15、访问原子结构体/联合体的成员是未定义行为，在C11标准中，如果你定义了一个包含原子类型成员的结构体或联合体，直接访问这些原子成员是未定义行为。这是因为标准并未定义如何保证这些成员的原子性
  16、sig_atomic_t 不提供线程间同步或内存定序，仅提供原子性，sig_atomic_t 是C标准库定义的一个类型，通常用于信号处理程序中，以确保对变量的访问是原子的。然而，sig_atomic_t 并不提供线程间的同步或内存序列保证，只提供对信号处理上下文中变量访问的基本原子性
  17、volatile 类型不提供线程间同步、内存定序或原子性，在C和C++中，volatile 关键字告诉编译器不要对使用该变量的代码进行优化，因为该变量可能在程序外部（如硬件或信号处理程序）被修改。然而，volatile 并不提供线程间同步、内存序列保证或原子性
  18、推荐实现确保对于每个可能的类型 T，C 中 _Atomic(T) 的表示与 C++ 中 std::atomic<T> 的相同，为了保证C和C++之间的兼容性，推荐实现保证C中的 _Atomic(T) 与C++中的 std::atomic<T> 表示相同。这确保了原子性和内存顺序机制在两种语言中是一致的
  */
  print_purple("atomic type\n");  
  _Atomic (int) atomic_int_var;                     // 1、在这个示例中，atomic_int_var 是一个原子的 int 类型变量，通过 _Atomic (int) 语法定义
  atomic_int_var = 0;
  atomic_fetch_add(&atomic_int_var, 1);             // 原子地增加 1
  // _Atomic (const int) atomic_const_int_var;      // 不允许，const 不能用于类型说明符
  // _Atomic (_Atomic (int)) nested_atomic_int_var; // 不允许，不能嵌套原子类型

  atomic_int atomic_counter;                 // 2、定义一个原子的 int 类型变量，在这个示例中，atomic_counter 是一个原子的 int 类型变量，通过 atomic_int 宏定义。atomic_int 是 _Atomic int 的别名 
  atomic_counter = 0;                 
  atomic_fetch_add(&atomic_counter, 1);      // 原子地增加 1
  _Atomic const int atomic_const_int;        // 2、定义一个原子的、const常量的 int 类型变量，在这个示例中，atomic_const_int 是一个原子的、常量的 int 类型变量。因为它是常量，所以不能修改它的值
  // atomic_const_int                        // 是常量，不能修改它的值
  // atomic_fetch_add(&atomic_const_int, 1); // 这将导致编译错误  
  _Atomic const int atomic_const_int_var;    // 可以与 const 一起使用
  _Atomic volatile int atomic_volatile_int_var; // 可以与 volatile 一起使用
  _Atomic int * restrict atomic_ptr;         // 可以与 restrict 一起使用
  
  _Atomic const int * p1;                    // p1 是指向 atomic const int 的指针
  const atomic_int * p2;                     // 同上 p2 是指向 atomic const int 的指针
  const _Atomic(int) * p3;                   // 同上 p3 是指向 atomic const int 的指针

  atomic_int atomic_counter1;                // 3、声明一个原子的 int 变量
  atomic_bool flag;                          // 声明一个原子的 bool 变量
  atomic_store(&atomic_counter, 0);          // 初始化原子变量
  atomic_store(&flag, false);                // 初始化原子布尔变量  
  atomic_fetch_add(&atomic_counter, 1);      // 原子地增加 1
  bool current_flag = atomic_load(&flag);    // 原子地加载布尔值
  print_purple("current_flag = %d.\n", current_flag);

  pthread_t thread_A, thread_B;                                                               // 4、在上述示例中，我们有一个原子变量 counter，初始值为 0。两个线程 Thread A 和 Thread B 分别将其设置为 1 和 2
  pthread_create(&thread_A, NULL, thread_A_func, NULL);    // 由于 counter 是原子类型，atomic_store 和 atomic_load 操作都是原子的，不会出现数据竞争。每个线程对 counter 的操作都有一个全序，即在某个线程的视角下，atomic_store(&counter, 1) 一定发生在 atomic_store(&counter, 2) 之前或之后，但不会出现交错
  pthread_create(&thread_B, NULL, thread_B_func, NULL);    // 5、修改顺序的视角 Thread A 先执行 atomic_store(&counter, 1);、Thread B 后执行 atomic_store(&counter, 2);、那么从任何线程的视角来看，对 counter 的修改顺序是：先将 counter 设置为 1，然后设置为 2。最终 counter 的值将是 2
  pthread_join(thread_A, NULL);                                             
  pthread_join(thread_B, NULL);
  print_purple("Final counter value: %d\n", atomic_load(&counter));
  sigthmain();                               // atomic_store 和 atomic_load：单独操作是原子的、线程安全的，但在多线程环境下，不能保证顺序一致性，在多个线程的情况下，不能仅依赖 atomic_store 和 atomic_load 本身，因为在两个原子操作之间，其他线程可能已经修改了 counter 的值
  multhmain();                               // 互斥锁 多线程环境下的同步：需要使用同步机制（如互斥锁）来确保在执行 printf 语句时没有其他线程修改共享变量
  condmain();                                // 条件变量
  mmain();                                   // 内存栅栏

  xymain();                                  // 6、由于每个原子对象都有其自身的修改顺序，所有线程对单个原子对象的修改顺序观察是一致的。但是，不同线程对不同原子对象(x，y)的观察顺序可能会不同。这会导致不同的打印结果

  func7main();                               // 7、写写连贯（Write-Write Coherence）写写连贯性规定，如果一个原子对象 M 的修改操作 A 发生在修改操作 B 之前（在时间上），则在 M 的内部修改顺序中，操作 A 一定会出现在操作 B 之前。换句话说，所有线程都会以相同的顺序观察到这些写操作
  func7mainexp();
  wrmain();                                  // 8、读读连贯（Read-Read Coherence）读读连贯性规定，如果一个原子对象 M 的值计算 A 发生早于值计算 B，且从 M 上的副效应 X 求得 A 值，则 B 所计算得的值要么是 X 所存储的值，要么是 M 上的副效应 Y 所存储的值，其中 Y 在 M 的修改顺序中出现晚于 X，即如果一个线程在某个点读取了一个原子变量的值，那么在稍后的时间点再次读取该变量时，读取到的值要么是同一个值，要么是一个更新后的值
  wr9main();                                 // 9、读写连贯（Read-Write Coherence）读写连贯性规定，如果一个原子对象 M 的值计算 A 发生早于 M 上的操作 B，且从 M 上的副效应 X 求得 A 值，则 X 在 M 的修改顺序中出现早于 B。这意味着在多线程环境中，如果一个线程读取了一个原子对象的某个值，并且另一个线程在稍后对该原子对象进行了写入操作，那么读取的值一定是写入操作之前的值
  wr9main();                                 // 10、写读连贯（Write-Read Coherence）写读连贯性规定，如果在原子对象 M 上的副效应 X 发生早于 M 的值计算 B，则求值 B 要么从 X 中获取其值，要么从在 M 的修改顺序中出现晚于 X 的副效应 Y 中获取其值。换句话说，如果一个线程对一个原子对象进行了写操作，而另一个线程随后进行了读操作，那么读操作要么读取到当前的写入值，要么读取到之后的某个值，而不会读取到更早的值

  atomic_int xmo = ATOMIC_VAR_INIT(0);       // 11、不同的内存顺序（memory_order）描述了操作的同步语义以及它们在程序中的顺序。具体来说，内存顺序控制了原子操作对其他线程的可见性，以及它们在与其他内存操作的相对顺序
  atomic_store_explicit(&xmo, 1, memory_order_relaxed);         // 描述：不提供任何同步或顺序的保证。这意味着此操作只保证原子性，不提供跨线程的可见性保证，适用场景：当你只需要原子操作的原子性而不关心操作的顺序时
  int value = atomic_load_explicit(&xmo, memory_order_acquire); // 描述：获取操作，确保在当前线程中，这个操作之后的所有读写操作都不会在内存操作之前被重排序。这种语义主要用于加载操作，适用场景：当你需要确保在读取一个值之后，随后读取的其他值都是最新的，即获取（Acquire）语义用于标识一个原子操作，使得在读取该原子变量之后的所有操作不能被编译器重排序到这个操作之前。这种语义保证了当前线程中，在获取操作之后的所有读写操作，都看到了在获取操作之前其他线程所做的所有写操作的结果
  atomic_store_explicit(&x, 1, memory_order_release);           // 描述：释放操作，确保在当前线程中，这个操作之前的所有读写操作都不会在内存操作之后被重排序。这种语义主要用于存储操作，适用场景：当你需要确保在写入一个值之前，所有的写操作都已经完成，即释放（Release）语义用于标识一个原子操作，使得在写入该原子变量之前的所有操作不能被编译器重排序到这个操作之后。这种语义保证了当前线程中，在释放操作之前的所有读写操作之后，其他线程能够看到这些操作的结果
  atomic_exchange_explicit(&x, 1, memory_order_acq_rel);        // 描述：获取-释放操作，结合了获取和释放语义。这意味着这个操作既是获取操作又是释放操作。它确保在当前线程中，这个操作之前的所有写操作在这个操作之后的所有读操作之前完成，适用场景：当你在同一操作中既需要获取语义又需要释放语义时，通常用于读-改-写操作
  atomic_store_explicit(&x, 1, memory_order_seq_cst);           // 描述：顺序一致性操作，提供最强的同步和顺序保证。所有操作都看起来像是在单一的全局顺序中执行。它确保所有线程看到的操作顺序是一致的，适用场景：当你需要最强的同步和顺序保证时
  flagmain();

  typedef struct {
    atomic_int counter;
  } AtomicStruct;
  AtomicStruct obj;
  obj.counter = 10;                           // 15、访问原子成员是未定义行为，在这个例子中，直接访问 obj.counter 是未定义行为。为了避免这种问题，应使用标准库提供的原子操作函数 

  volatile sig_atomic_t sgflag = 0;           // 16、sig_atomic_t 是C标准库定义的一个类型，通常用于信号处理程序中，以确保对变量的访问是原子的。然而，sig_atomic_t 并不提供线程间的同步或内存序列保证，只提供对信号处理上下文中变量访问的基本原子性
  // #include <signal.h>
  // #include <stdio.h>
  //
  // volatile sig_atomic_t flag = 0;
  //
  // void handler(int sig) {
  //   flag = 1;                              // 仅提供原子性，不保证同步或内存序列
  // }
  //
  // int main() {
  //   signal(SIGINT, handler);
  //   while (!flag) {
  //     // 等待信号
  //   }
  //   printf("Signal received!\n");
  //   return 0;
  // }  

  volatile int shared_var = 0;                // 17、shared_var 是一个 volatile 变量，但对它的操作并不提供任何同步或原子性保证。这可能会导致数据竞争

  // #include <stdatomic.h>                   // 18、在这个例子中，我们分别在C和C++中定义了原子变量，并对它们执行相同的操作。推荐实现确保它们在内存中的表示和操作行为是相同的，从而提供一致的原子性和内存顺序保证
  // #include <atomic>
  // #include <iostream>

  // int main() {
  //   _Atomic(int) c_atomic_var = 10;
  //   std::atomic<int> cpp_atomic_var = 10;
  //   // 在C和C++中具有相同的表示和行为
  //   atomic_store(&c_atomic_var, 20);
  //   cpp_atomic_var.store(20);
  //   std::cout << "C atomic variable: " << atomic_load(&c_atomic_var) << std::endl;
  //   std::cout << "C++ atomic variable: " << cpp_atomic_var.load() << std::endl;
  //   return 0;
  // }  

  thrd_t thr[10];
  for(int n = 0; n < 10; ++n) {
    thrd_create(&thr[n], thacntf, NULL);
  }
  for(int n = 0; n < 10; ++n) {
    thrd_join(thr[n], NULL);
  }
  print_purple("The atomic counter is %u\n", acnt);
  print_purple("The non-atomic counter is %u\n", cnt);  

#endif // ATOMICS_TYPE  atomic 原子类型

  return 0;
}