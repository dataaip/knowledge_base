#include <stddef.h> // 包含offsetof宏
#include <stdio.h>
#include <stdlib.h>
/*
两个结构体的区别在于 hash_handle
成员的类型：一个是直接嵌入的结构体实例（h），另一个是指向结构体的指针（h*）。以下是主要区别

一、内存布局
- hash_handle h：h 是直接嵌入的结构体实例，占用 sizeof(hash_handle)
的内存。结构体总大小包含 h 的实际内容。例如，若 hash_handle
包含两个指针（64位系统下占16字节），则结构体大小为 4(key) + 4(idx) + 16(h) = 24
字节（可能加上对齐填充）
- hash_handle* h：h
是一个指针，占用指针大小的内存（64位系统为8字节）。结构体总大小为 4(key) +
4(idx) + 8(h) = 16 字节（可能对齐到16字节）。指针指向的 hash_handle
实例需要额外分配内存 malloc、free

内存管理
- h（实例）：无需额外内存管理，h 的生命周期与结构体实例绑定
- h*（指针）：需要手动分配和释放 h 指向的内存，否则会导致悬空指针或内存泄漏

访问方式
- h（实例）：直接通过成员运算符 . 访问
- h*（指针）：通过箭头运算符 -> 访问

典型用途
- h（实例）：适用于侵入式数据结构（如 Linux 内核链表），通过 container_of 宏从 h
反向定位外层结构体，优势：无需额外内存分配，效率高、数据局部性更好，减少缓存未命中
- h*（指针）适用于需要动态共享 hash_handle
的场景（较少见），但需额外管理内存，可能降低性能
*/
typedef struct hash_handle {
  int *prv;
  int *next;
} hash_handle;

typedef struct nums1 {
  int key;
  int idx;
  hash_handle h;
} hashTable1;

typedef struct nums2 {
  int key;
  int idx;
  hash_handle *h;
} hashTable2;

/*
双向结构体定位（外层↔内层）的技术实现
通过指针的偏移和计算可进行 内外层结构体之间的互相转换

一、关键技术解析：
内存布局认知：通过offsetof(struct iot_device, readings)可以准确获取内层结构体在父结构体中的偏移量

二、双向定位原理：
正向定位（外层→内层）：struct sensor_data *inner = &outer.readings; // 直接成员访问
逆向定位（内层→外层）：outer_ptr = (char*)inner_ptr - offset_value

三、类型安全操作：
强制转换为 char* 进行指针运算，因为只有 char* 的指针运算以字节为单位
使用 offsetof 宏而非手动计算偏移量，保证代码可移植性

四、动态内存验证：
特别演示了在堆分配内存场景下的地址计算
验证计算结果与实际分配地址的一致性

五、典型应用场景：
- 设备驱动开发：通过寄存器结构定位设备上下文
- 网络协议栈：从TCP头定位IP头地址
- 数据库引擎：通过索引项定位完整记录
- 游戏开发：通过组件定位实体对象

这种技术体现了C语言的两个核心能力：
- 精准的内存控制 - 直接操作内存地址
- 零开销抽象 - 不需要额外的元数据存储
使用时需特别注意：
- 确保成员指针确实属于父结构体
- 避免对栈变量地址进行持久化存储
- 多级嵌套结构需要逐级计算偏移量
*/
// 内层结构体（传感器数据）
struct sensor_data {
  float temperature;
  float humidity;
  unsigned int timestamp;
};
// 外层结构体（物联网设备）
struct iot_device {
  char device_id[16];
  int version;
  struct sensor_data readings; // 内嵌结构体成员
  char status;
};
// 进阶技巧：类型安全的封装宏（Linux内核风格）
#define container_of(ptr, type, member) ({                  \
    const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
    (type *)( (char *)__mptr - offsetof(type,member) );})

/*
offsetof 宏和 ptrdiff_t 类型都与内存地址计算相关，但它们的用途和实现方式有本质区别

一、offsetof 宏
定义：offsetof(type, member) 定义在 <stddef.h> 头文件中
作用：计算结构体 (type) 中某个成员 (member) 相对于结构体起始地址的字节偏移量
输入：类型和成员名（编译时计算）
单位：字节（size_t）
依赖关系：结构体的内存布局
典型场景：通过成员指针反推外层结构体地址（如Linux内核链表）

二、ptrdiff_t 类型
定义：ptrdiff_t 是定义在 <stddef.h> 中的有符号整数类型
作用：表示两个指针之间的差值（以元素个数为单位），通常用于指针算术运算
输入：两个指针（运行时计算）
单位：元素个数（ptrdiff_t）
依赖关系：指针指向同一连续内存块，仅当两个指针指向同一数组或同一内存块时，差值才有意义
典型场景：计算数组元素间隔或内存块长度

三、注意事项
offsetof 的合法性：只能用于标准布局的结构体（C语言中所有结构体均符合），不可用于联合体（union）或位域成员
ptrdiff_t 的安全性：仅在指针指向同一数组或内存块时有效，超出 ptrdiff_t 表示范围的差值会导致未定义行为
类型转换：使用 (char*) 进行指针运算以确保按字节计算偏移（如反向定位结构体地址）

四、总结
offsetof：面向结构体内存布局，用于编译时计算成员的字节偏移
ptrdiff_t：面向指针算术，用于运行时计算指针之间的元素差值
联合应用：在处理嵌套结构或动态内存时，二者结合可实现精确的内存地址操作（如Linux内核的 container_of 宏）
*/    
struct Container {
    int meta;
    double data[100];
    char tag;
};

int main(void) {

  struct nums1 entry1; // h 的内存随 entry 自动分配/释放
  struct nums2 entry2;
  entry2.h = malloc(sizeof(hash_handle)); // 分配
  free(entry2.h);                         // 释放

  entry1.h.next = NULL;
  entry2.h->next = NULL;

  // 创建外层结构体实例并初始化
  struct iot_device my_device = {.device_id = "DEV-2024-001",
                                 .version = 2,
                                 .readings = {25.5f, 60.0f, 1717023456},
                                 .status = 'A'};

  /**************** 外层→内层定位 ****************/
  // 直接访问内层结构体（常规方式）
  struct sensor_data *inner_ptr = &my_device.readings;
  printf("\n[外层→内层定位]\n");
  printf("温度: %.1f℃\n", inner_ptr->temperature);
  printf("湿度: %.1f%%\n", inner_ptr->humidity); 
  /**************** 内层→外层定位 ****************/
  // 通过内层指针反推外层结构体地址
  struct iot_device *outer_ptr = (struct iot_device*) (
    (char*)inner_ptr - offsetof(struct iot_device, readings)
  );
  printf("\n[内层→外层定位]\n");
  printf("原始地址: \t%p\n", &my_device);
  printf("计算地址: \t%p\n", outer_ptr);
  printf("设备ID: %s\n", outer_ptr->device_id);
  printf("状态: %c\n", outer_ptr->status);                                
  /**************** 内存动态分配验证 ****************/
  // 动态分配测试
  struct iot_device *dyn_device = malloc(sizeof(struct iot_device));
  dyn_device->readings.temperature = 18.0f;
  // 反向定位验证
  struct iot_device *dyn_calculated = (struct iot_device*) (
      (char*)&dyn_device->readings - offsetof(struct iot_device, readings)
  );
  printf("\n[动态分配验证]\n");
  printf("动态分配地址: \t%p\n", dyn_device);
  printf("计算所得地址: \t%p\n", dyn_calculated);
  free(dyn_device);


  struct Container c;
  double *data_ptr = &c.data[10]; // 指向内层数组的某个元素
  // 通过指针差值计算元素索引
  ptrdiff_t index = data_ptr - c.data;
  printf("元素索引: %td\n", index); // 输出 10
  // 通过offsetof计算结构体成员偏移
  size_t data_offset = offsetof(struct Container, data);
  printf("'data'成员的字节偏移量: %zu\n", data_offset); // 取决于结构体对齐
  // 反向定位外层结构体地址
  struct Container *outer_ptr1 = (struct Container*)(
      (char*)data_ptr - index * sizeof(double) - data_offset 
  );
  printf("外层结构体地址一致？ %s\n", 
      (outer_ptr1 == &c) ? "是" : "否"); // 输出 "是"

  return 0;
}