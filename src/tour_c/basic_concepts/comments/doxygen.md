## Doxygen- C使用规则规范

Doxygen 是一个自动化文档生成工具，通过解析代码注释生成 API 文档。以下是 C 语言中的核心使用规则和规范：

---

#### 一、基础注释规范
1. **文档注释标记**：
   ```c
   /**
    * 多行文档注释（推荐）
    */
   /// 单行文档注释
   /*! 另一种多行格式 */
   ```

2. **文件头注释**（必须包含 `@file`）：
   ```c
   /**
    * @file example.c
    * @brief 文件功能简述
    * @author 作者
    * @date 创建日期
    * @details 详细说明
    */
   ```

---

#### 二、关键命令规范
| 命令          | 用途                          | 示例                                     |
|---------------|-------------------------------|------------------------------------------|
| `@brief`      | 简要描述（必须）              | `@brief 计算两数之和`                   |
| `@param`      | 函数参数说明                  | `@param[in] a 第一个参数`               |
| `@return`     | 返回值说明                    | `@return 计算结果`                      |
| `@note`       | 注意事项                      | `@note 非线程安全`                      |
| `@warning`    | 警告信息                      | `@warning 禁止传入负数`                 |
| `@code`/`@endcode` | 嵌入代码示例              | 见下方示例                               |
| `@see`        | 参考链接                      | `@see other_function()`                  |

---

#### 三、函数注释规范
```c
/**
 * @brief 计算两个整数的和
 * 
 * @param a 第一个加数（输入参数）
 * @param b 第二个加数（输入参数）
 * @return int 计算结果
 * 
 * @note 参数范围限制：-1000 < a,b < 1000
 * @code
 *   int result = add(2, 3); // 返回 5
 * @endcode
 */
int add(int a, int b) {
    return a + b;
}
```

---

#### 四、数据结构注释
```c
/**
 * @brief 用户数据结构体
 */
typedef struct {
    int id;         ///< 用户ID（使用`///<`行尾注释）
    char *name;     /**< 用户名 */
    /**
     * @brief 用户年龄
     * @warning 必须大于0
     */
    int age;
} User;
```

---

#### 五、枚举注释
```c
/**
 * @brief 错误码枚举
 */
typedef enum {
    ERR_NONE = 0,   ///< 无错误
    ERR_INVALID,    ///< 无效输入
    ERR_TIMEOUT     ///< 操作超时
} ErrorCode;
```

---

#### 六、宏注释规范
```c
/**
 * @def MAX(a,b)
 * @brief 求两数最大值
 * @param a 第一个数值
 * @param b 第二个数值
 * @return 较大的数值
 */
#define MAX(a,b) ((a) > (b) ? (a) : (b))
```

---

#### 七、配置规范（Doxyfile）
1. 生成配置文件：
   ```bash
   doxygen -g
   ```
2. 关键配置项：
   ```ini
   PROJECT_NAME           = "MyProject"
   OUTPUT_DIRECTORY       = docs/
   INPUT                  = src/
   RECURSIVE              = YES
   EXTRACT_ALL            = YES
   GENERATE_LATEX         = NO  # 禁用LaTeX输出
   ```

---

#### 八、最佳实践
1. **必须注释项**：
   - 所有公共API函数
   - 全局变量和数据结构
   - 关键宏定义
   - 模块头文件（.h）

2. **禁止行为**：
   ```c
   // 错误！普通注释不会被Doxygen解析
   /* 这个注释也不会出现在文档中 */
   ```

3. **跨模块引用**：
   ```c
   /** 
    * @see module1.h 中的 related_function()
    */
   ```

4. **分组管理**：
   ```c
   /** @defgroup MathAPI 数学计算API */
   /** @addtogroup MathAPI */
   /*! @{ */
   int add(int a, int b);
   int sub(int a, int b);
   /*! @} */
   ```

---

#### 九、生成文档
```bash
doxygen Doxyfile  # 生成HTML文档到docs/html目录
```

> **重要提示**：注释需直接位于被描述对象上方，中间不能有空行。Doxygen 默认支持 **Markdown 语法**，可在注释中使用列表、表格等格式增强可读性。

通过遵循这些规范，可生成结构清晰、内容完整的 API 文档，大幅提升代码可维护性。