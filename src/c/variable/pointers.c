/**
* @file              pointers.c
* @brief             指针 类型代码文件，测试指针类型包括 *
* @version           0.3
* @author            brightl birigtl3016@outlook.com
* @date              2024.11.16
* @copyright         Copyright (c) 2024.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2024.11.18 <td>0.1             <td>brightl         <td>全局、局部枚举声明方式
* <tr><td>2024.11.19 <td>0.2             <td>brightl         <td>指针类型使用特性、存储大小
* <tr><td>2024.11.20 <td>0.3             <td>brightl         <td>指针、多级指针、指针字符串、指针函数、函数指针、指针数组、数组指针、指向void指针、空指针
* </table>
*/

#include "c/variable/variable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void increment(int *value); // 按引用传递语义
void dynamic(int *array, int sz_t); // 访问有动态存储期的对象
void printIfNotNull(int *value); // 实现 “可选” 类型
typedef struct Node {            // 结构体间的聚合关系 如链表
  int data;
  struct Node *next;
} Node;
void insert(Node **head, int value);
void printList(Node *head);
void sayHello(); // 回调（使用指向函数的指针）                       
void sayGoodbye();
void greeter(void (*greetFunction)());
void printInt(void *data); // 泛型接口（使用指向 void 的指针）
void printFloat(void *data);
typedef struct { // 结构体聚合 通过指针实现结构体之间的聚合关系，允许一个结构体包含另一个结构体的指针。这种方式有很多优点，比如可以实现动态分配内存以及避免冗余的内存拷贝 // 定义 Address 结构体
  char street[50];
  char city[50];
  int zipCode;
} Address;
typedef struct { // 定义 Person 结构体，其中包含一个指向 Address 结构体的指针
  char name[50];
  int age;
  Address *address;  // 聚合关系，通过指针实现
} Person;
Address* createAddress(const char *street, const char *city, int zipCode);
Person* createPerson(const char *name, int age, Address *address);
void printPerson(Person *person);
void freePerson(Person *person);

/**
* @brief             语法：类型说明符序列 * 属性说明符序列(可选) 限定符序列(可选) 声明符
*
* @note              在指针声明的声明文法中：类型说明符序列 代表所指向的类型可以是函数或对象类型也可以是不完整类型、属性说明符序列 属性在C23引入应用到被声明的指针的可选属性列表、限定符序列 包括 const、volatile等修饰符它们修饰指针或指针所指向的对象、声明符 指针符号 * 和 包含指针的标识符以及指针的层次结构例如指向指针的指针
*/
#define POINTER_TYPE

/**
* @brief             指针是一种对象类型，它引用函数或另一种类型的对象，可以添加限定符。指针亦可以不引用任何内容，这通过一个特定的空指针值指示
* @return  int       Return Description
*
* @note              指针是用来存储内存地址的数据类型，可以引用（指向）函数或其他类型的对象。通过指针，可以访问和修改这些对象。指针可以是空指针，表示它不指向任何有效对象或函数。指针还可以添加限定符，如 const，以限制其使用
*/
int pointers_fn(void) {
#ifdef POINTER_TYPE
  /*
  1、简单指向对象的指针
  2、指向指针的指针
  3、指向函数的指针
  // 4、返回指针的函数
  5、带限定符的指针
  6、带属性说明符序列的指针(C23起)
  */
  float *p;          // 1、简单指向对象的指针 类型说明符序列 float 说明指针 p 指向 float 类型的对象、声明符 *p 表示 p 是一个指针，指向 float 类型
  float **pp;        // 2、指向指针的指针 类型说明符序列 float 说明指针 pp 指向的是一个指向 float 类型对象的指针、声明符 **pp 表示 pp 是一个指向指针的指针，而这个指针指向 float 类型
  int (*fp)(int);    // 3、指向函数的指针 类型说明符序列 int 说明 fp 最终指向的函数返回 int 类型、声明符 (*fp)(int) 表示 fp 是一个指向函数的指针，这个函数接受一个 int 参数，返回 int 类型
  // int* fn(int);      // 4、返回指针的函数 类型说明符序列 int*，表示返回一个指向 int 的指针、声明符 fn(int) 表示 fn 是一个函数，这个函数接受一个 int 参数，并返回一个 int* 类型的值
  const int *pc;     // 5、带限定符的指针 pc 是一个指向 const int 的指针，这意味着通过 pc 不能修改它所指向的 int 值
  int * const cp;    // 5、带限定符的指针 cp 是一个 const 指针，指向一个 int，这意味着 cp 本身不能指向其他地址，但可以修改它所指向的 int 值
  int * const * pcp; // 5、带限定符的指针 pcp 是一个指向 const 指针（该指针指向 int）的指针，这意味着 pcp 可以修改所指向的 const 指针，但不能通过 const 指针修改 int 值
  // [[deprecated]] int *ptr; // 6、带属性说明符序列的指针(C23起) ptr 是一个指针，指向 int，并且标记为 deprecated 
  
  float *p1, **pp1;     // p1 是指向 float 的指针，pp1 是指向指向 float 指针的指针
  int (*fp1)(int);      // fp1 是指向类型 int(int) 为函数的指针
  int n;
  const int * pc1 = &n; // pc1 是指向 const int 的非 const 指针
  // *pc1 = 2;          // 错误：不能通过 pc1 修改 n
  pc1 = NULL;           // OK：pc 自身可修改
  int * const cp1 = &n; // cp1 是一个指向非 const int 的 const 指针
  *cp1 = 2;             // OK：通过 cp1 修改 n
  // cp1 = NULL;        // 错误：cp1 自身不能修改
  int * const * pcp1 = &cp1; // pcp1 是一个指向指向 const 指针的非 const 指针，即是一个二级指针 一级非const、二级const、 int * const：说明这是一个 const 指针，指向一个 int 类型的数据，* pcp1：pcp1 是一个指针，指向 int * const 类型的指针
  // *pcp1 = NULL;           // 错误，不能修改 *pcp1  *pcp1 是一个 const 指针
  pcp1 = NULL;               // OK，可以修改 pcp1，pcp1 是一个非 const 的二级指针，指向一个 const 的一级指针
  int ** const pcp2 = &cp1;  // pcp2 是一个 const 指针，是指向一个指向 int 的指针、int ** const：说明这是一个 const 指针，指向一个 int * 类型的数据，pcp2：pcp2 是一个 const 指针，指向 int * 类型的指针
  *pcp2 = NULL;              // OK，可以通过 pcp2 修改 cp1 的值，pcp2 是一个 const 的二级指针，指向一个非 const 的一级指针
  // pcp2 = NULL;            // 错误，不能修改 pcp2 pcp2 是一个 const 指针
   
  /*
  使用：指针用于间接使用，这是种普遍存在的编程技巧；它们可以用于实现按引用传递语义，访问有动态存储期的对象，实现“可选”类型（使用空指针值），结构体间的聚合关系，回调（使用指向函数指针），泛型接口（使用指向 void 的指针）以及其他更多
  1、按引用传递语义 在函数调用时，我们通常按值传递参数，这意味着函数得到的是参数的一个副本。有时我们希望函数能够直接修改传递给它的变量，这时可以使用指针来实现按引用传递
  2、访问有动态存储期的对象 通过动态内存分配（如 malloc 和 free），我们可以在运行时分配和释放内存，这些内存块的生命周期可以跨越函数调用
  3、实现 “可选” 类型 指针可以用来表示一个“可选”值（例如，指针为 NULL 表示没有值）
  4、结构体间的聚合关系 通过指针，可以实现结构体之间的聚合关系，例如链表、树等数据结构，结构体之间的聚合关系是一种常见的设计模式，它允许一个结构体包含另一个结构体的实例或指针。这种关系可以通过指针来实现，使得不同结构体能够协同工作，彼此引用，从而构建更复杂的数据结构和系统
  5、回调（使用指向函数的指针）函数指针可以用来实现回调机制，使得函数的行为可以在运行时灵活变化
  6、泛型接口（使用指向 void 的指针）void 指针可以指向任何类型的数据，常用于实现泛型接口
  */
  int a = 5;
  increment(&a);                              // 1、按引用传递语义 、传递变量 a 的地址
  print_purple("a = %d.\n", a);                      // 输出 a = 6
  int *array = (int *)malloc(5 * sizeof(int)); // 2、访问有动态存储期的对象 分配内存
  dynamic(array,5);                            // 内存块的生命周期可以跨越函数调用
  for (int i = 0; i < 5; ++i) {
    print_purple("%d ", array[i]);
  }
  print_purple(".\n");
  free(array);                                  // 释放内存 
  int *ptr = &a;                                    // 3、实现 “可选” 类型
  printIfNotNull(ptr);                        // 输出 Value is: 10
  ptr = NULL;
  printIfNotNull(ptr);                        // 输出 Value is NULL 
  Node *head = NULL;                                // 4、结构体间的聚合关系
  insert(&head, 3);
  insert(&head, 2);
  insert(&head, 1);
  printList(head);                                  // 输出 1 -> 2 -> 3 -> NULL
  Address *addr = createAddress("123 Main St", "Springfield", 12345);
  Person *person = createPerson("John Doe", 30, addr);
  printPerson(person);
  freePerson(person);  
  greeter(sayHello);                 // 5、回调（使用指向函数的指针） 输出 Hello!
  greeter(sayGoodbye);               // 输出 Goodbye!
  int va = 10;
  float vb = 3.14;
  printInt(&va);                              // 6、泛型接口（使用指向 void 的指针）输出 10
  printFloat(&vb);                            // 输出 3.140000

  /*
  指向对象的指针 指向对象的指针可以通过应用于对象类型（可以不完整）表达式的取值运算符初始化

  */
  int nn;
  int *nnp = &nn;                         // 指向 int 的指针
  int *const *nnpp = &nnp;                // 指向 const 指针(这个const 指针指向 int 类型)的 非 const 指针，即 *nnpp 是 const
  int ** const nnpp1 = &nnp;              // 指向 非 const 指针(这个const 指针指向 int 类型)的 const 指针，即 nnpp1 是 const 指针
  int arr[2];
  int (*arrp)[2] = &arr;                  // 指向 int 数组的指针  指向数组的一个指针
  int* arr2[2] = {nnp, *nnpp1};           // 指针的数组  数组的元素是指针类型
  struct S { int n; } s = {1};
  int* sp  = &s;                          // 指向 s 结构体的指针
  int* spn = &s.n;                        // 指向作为 s 成员的 int 的指针
  

#endif // POINTER_TYPE pointer 类型   

  return 0;  
}

/**
* @brief             按引用传递语义
* @param   value     Param Description
*
* @note              Revision History
*/
void increment(int *value) {
  *value += 1;
}

/**
* @brief             访问有动态存储期的对象
* @param   array     Param Description
* @param   sz_t      Param Description
*
* @note              Revision History
*/
void dynamic(int *array, int sz_t) {
  for (int i = 0; i < sz_t; ++i) {
    array[i] = i * i;
  }
}

/**
* @brief             实现 “可选” 类型
* @param   value     Param Description
*
* @note              Revision History
*/
void printIfNotNull(int *value) {
  if (value != NULL) {
    print_purple("Value is: %d\n", *value);
  } else {
    print_purple("Value is NULL\n");
  }
}

/**
* @brief             结构体间的聚合关系
* @param   head      Param Description
* @param   value     Param Description
*
* @note              Node **head：是一个指向 Node * 类型的指针（即指向指针的指针）。通常用于需要修改指针本身的函数，如插入或删除链表的节点，因为这样可以在函数内部改变链表的头节点
*/
void insert(Node **head, int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = *head;
  *head = newNode;
}
/**
* @brief             结构体间的聚合关系
* @param   head      Param Description
*
* @note              Node *head：是一个指向 Node 结构体的指针。通常用于遍历链表或表示链表的头节点。在这种情况下，函数不能直接修改 head 的值（即不能改变链表的头节点），只能修改 head 所指向的节点的内容
*/
void printList(Node *head) {
  Node *current = head;
  while (current != NULL) {
    print_purple("%d -> ", current->data);
    current = current->next;
  }
  print_purple("NULL\n");
}

/**
* @brief             回调（使用指向函数的指针）
*
* @note              Revision History
*/
void sayHello() {
  print_purple("Hello!\n");
}
/**
* @brief             回调（使用指向函数的指针）
*
* @note              Revision History
*/
void sayGoodbye() {
  print_purple("Goodbye!\n");
}
/**
* @brief             回调（使用指向函数的指针）
* @param   greetFunctionParam Description
*
* @note              Revision History
*/
void greeter(void (*greetFunction)()) {
  greetFunction();
}

/**
* @brief             泛型接口（使用指向 void 的指针）
* @param   data      Param Description
*
* @note              Revision History
*/
void printInt(void *data) {
  print_purple("%d\n", *(int *)data);
}
/**
* @brief             泛型接口（使用指向 void 的指针）
* @param   data      Param Description
*
* @note              Revision History
*/
void printFloat(void *data) {
  print_purple("%f\n", *(float *)data);
}

/**
* @brief             创建一个 Address 实例并返回指向它的指针
* @param   street    Param Description
* @param   city      Param Description
* @param   zipCode   Param Description
* @return  Address*  Return Description
*
* @note              Revision History
*/
Address* createAddress(const char *street, const char *city, int zipCode) {
  Address *addr = (Address *)malloc(sizeof(Address));
  strcpy(addr->street, street);
  strcpy(addr->city, city);
  addr->zipCode = zipCode;
  return addr;
}
/**
* @brief             创建一个 Person 实例并返回指向它的指针
* @param   name      Param Description
* @param   age       Param Description
* @param   address   Param Description
* @return  Person*   Return Description
*
* @note              Revision History
*/
Person* createPerson(const char *name, int age, Address *address) {
  Person *person = (Person *)malloc(sizeof(Person));
  strcpy(person->name, name);
  person->age = age;
  person->address = address;
  return person;
}
/**
* @brief             打印 Person 信息
* @param   person    Param Description
*
* @note              Revision History
*/
void printPerson(Person *person) {
  if (person != NULL && person->address != NULL) {
    print_purple("Name: %s\n", person->name);
    print_purple("Age: %d\n", person->age);
    print_purple("Address: %s, %s, %d\n", person->address->street, person->address->city, person->address->zipCode);
  }
}
/**
* @brief             释放 Person 和 Address 的内存
* @param   person    Param Description
*
* @note              Revision History
*/
void freePerson(Person *person) {
  if (person != NULL) {
    if (person->address != NULL) {
      free(person->address);
    }
    free(person);
  }
}