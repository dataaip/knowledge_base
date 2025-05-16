#include <stdlib.h>

/*
两个结构体的区别在于 hash_handle 成员的类型：一个是直接嵌入的结构体实例（h），另一个是指向结构体的指针（h*）。以下是主要区别

一、内存布局
- hash_handle h：h 是直接嵌入的结构体实例，占用 sizeof(hash_handle) 的内存。结构体总大小包含 h 的实际内容。例如，若 hash_handle 包含两个指针（64位系统下占16字节），则结构体大小为 4(key) + 4(idx) + 16(h) = 24 字节（可能加上对齐填充）
- hash_handle* h：h 是一个指针，占用指针大小的内存（64位系统为8字节）。结构体总大小为 4(key) + 4(idx) + 8(h) = 16 字节（可能对齐到16字节）。指针指向的 hash_handle 实例需要额外分配内存 malloc、free

内存管理
- h（实例）：无需额外内存管理，h 的生命周期与结构体实例绑定
- h*（指针）：需要手动分配和释放 h 指向的内存，否则会导致悬空指针或内存泄漏

访问方式
- h（实例）：直接通过成员运算符 . 访问
- h*（指针）：通过箭头运算符 -> 访问

典型用途
- h（实例）：适用于侵入式数据结构（如 Linux 内核链表），通过 container_of 宏从 h 反向定位外层结构体，优势：无需额外内存分配，效率高、数据局部性更好，减少缓存未命中
- h*（指针）适用于需要动态共享 hash_handle 的场景（较少见），但需额外管理内存，可能降低性能
*/
typedef struct hash_handle {
  int* prv;
  int* next;
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

int main(void) {

  struct nums1 entry1; // h 的内存随 entry 自动分配/释放
  struct nums2 entry2;
  entry2.h = malloc(sizeof(hash_handle)); // 分配
  free(entry2.h); // 释放

  entry1.h.next = NULL;
  entry2.h->next = NULL;

  return 0;
}