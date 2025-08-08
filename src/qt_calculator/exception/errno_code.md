在 C 语言中，函数错误码的返回通常有以下几种常见方式，各有适用场景：

### 1. **直接通过返回值返回错误码**
   - **适用场景**：函数本身不需要返回有效数据时
   - **约定**：
     - `0` 表示成功
     - **非零值** 表示错误类型（通常用正数）
   - **示例**：
     ```c
     int open_file(const char* path) {
         FILE* fp = fopen(path, "r");
         if (!fp) return 1;  // 1 表示文件打开失败
         // ...其他操作...
         fclose(fp);
         return 0; // 成功
     }
     ```

### 2. **返回值携带数据，错误码通过指针参数返回**
   - **适用场景**：函数需要返回有效数据，同时需反馈错误状态
   - **方法**：
     - 主返回值传递计算结果
     - 通过指针参数（如 `int* errcode`）返回错误码
   - **示例**：
     ```c
     int calculate(int a, int b, int* errcode) {
         if (b == 0) {
             *errcode = -1; // 除零错误
             return 0;
         }
         *errcode = 0; // 成功
         return a / b;
     }
     ```

### 3. **全局变量 `errno`（标准库常用方式）**
   - **适用场景**：符合 POSIX 标准的系统级函数
   - **方法**：
     - 函数返回特定值表示失败（如 `-1`、`NULL`）
     - 全局变量 `errno` 自动被设置为具体错误码
     - 需包含头文件 `<errno.h>`
   - **示例**：
     ```c
     #include <errno.h>
     #include <stdio.h>
     
     int main() {
         FILE* fp = fopen("nonexist.txt", "r");
         if (fp == NULL) {
             perror("错误信息"); // 输出：错误信息: No such file or directory
             printf("错误码: %d\n", errno); // 输出错误码 (如 ENOENT=2)
         }
         return 0;
     }
     ```

### 4. **返回结构体封装结果和错误码**
   - **适用场景**：需要同时返回多个数据的复杂场景
   - **示例**：
     ```c
     typedef struct {
         int value;     // 计算结果
         int error;     // 错误码 (0=成功)
     } Result;
     
     Result safe_divide(int a, int b) {
         Result res = {0, 0};
         if (b == 0) {
             res.error = -1; // 错误码
             return res;
         }
         res.value = a / b;
         return res;
     }
     ```

---

### **最佳实践建议**
1. **一致性原则**：
   - 在整个项目中统一错误码返回方式
   - 定义项目专用的错误码枚举（提高可读性）：
     ```c
     enum ErrorCode {
         SUCCESS = 0,
         FILE_NOT_FOUND,
         INVALID_ARGUMENT,
         OUT_OF_MEMORY
     };
     ```
   
2. **错误码设计**：
   - 使用 `0` 表示成功
   - 正数表示可恢复错误，负数表示严重错误
   - 避免与标准 `errno` 值冲突（系统错误码通常为正）

3. **错误处理**：
   - 及时检查错误码，避免忽略错误
   - 使用 `perror()` 或 `strerror(errno)` 输出可读错误信息

4. **资源清理**：
   - 返回错误前释放已分配的资源（如内存、文件句柄）

### **示例综合应用**
```c
#include <stdio.h>
#include <stdlib.h>

enum ErrorCode { SUCCESS = 0, NULL_PTR, ALLOC_FAIL };

int process_data(int size, int** data, int* err) {
    if (!data) {
        *err = NULL_PTR;
        return -1;
    }
    
    *data = malloc(size * sizeof(int));
    if (!*data) {
        *err = ALLOC_FAIL;
        return -1;
    }
    
    // 处理数据...
    *err = SUCCESS;
    return 0;
}

int main() {
    int* buffer = NULL;
    int err_code;
    
    if (process_data(100, &buffer, &err_code) != 0) {
        fprintf(stderr, "错误码: %d\n", err_code);
        // 根据 err_code 进行错误处理
        return 1;
    }
    
    // 使用 buffer...
    free(buffer);
    return 0;
}
```

选择合适的方式取决于：
- 函数的主要目的（是否需返回数据）
- 项目的规范
- 与现有库的兼容性（如系统 API 常用 `errno`）
- 错误处理的复杂度需求