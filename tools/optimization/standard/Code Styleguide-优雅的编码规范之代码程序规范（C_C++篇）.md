## Code Styleguide-优雅的编码规范之代码程序规范（C/C++篇）


### 三、代码程序编写规范
上一节我们说明了目录结构体的设计规范以及文件结构设计规范，完成项目目录的骨架搭建，如果说文件结构是基因序列的编排，代码实现便是驱动系统运行的蛋白质合成过程。接下来，代码的编写规范将成为保证项目可维护性、可读性和团队协作效率的关键，如同精确的分子机制决定生物体功能。

---

#### 1. 代码排版：程序员的视觉交响曲
代码排版就像写字的笔迹。字迹潦草没人爱看，代码混乱没人想改。好的排版让代码一目了然，方便自己和别人阅读、修改。

**缩进规范：代码的脊椎矫正术**

缩进是代码的骨架，它清晰展示代码的层次关系（比如哪些代码属于哪个函数或循环）
- 统一使用 **4个空格** 作为缩进单位（禁用制表符）：每层缩进固定4个空格（不要用键盘上的Tab键，因为不同电脑显示可能不一样）
- K&R 花括号风格：左花括号 { 不换行，紧跟在函数名或 if/for 后面
  ```c
  // 函数定义
  void func(void) {
      // 缩进4空格，形成视觉层级
  }
  
  // 控制语句
  if (condition) {
      // ...
  } else {
      // ...
  }
  ```
- 必须使用花括号的场景：为什么单行代码也要穿 braces（花括号）？
  - 防止走光：以后想在 if 里多加一行代码时，不容易出错（忘了加花括号会导致第二行代码不受 if 控制）
  - 避免悬空 else 的社死现场：明确告诉 else 它属于哪个 if
  - 用编辑器折叠代码块时更清晰
  ```c
  // 单行逻辑也必须使用花括号 - 防止未来扩展出错
  if (error) {
      return FAILURE;
  }
  
  // 循环体必须使用花括号 - 避免悬空 else 问题
  for (int i=0; i<MAX; i++) {
      process(i);
  }
  ```

**呼吸空间：空行使用规范**

代码挤在一起像一堵密不透风的墙，看久了头晕。空行像段落间的留白，让代码呼吸，划分逻辑块
- 代码段落分隔法则
  | 场景         | 空行数 | 作用         |
  | ------------ | ------ | ------------ |
  | 函数间       | 2行    | 创建视觉隔离 |
  | 逻辑段落间   | 1行    | 区分功能模块 |
  | 声明与执行间 | 1行    | 隔离不同阶段 |
  | 头文件保护宏 | 1行    | 提升可读性   |
- 留白法则
  - 文件首尾、头文件保护宏保留 1 空行（ EOF 规范）
  - 连续空行不超过 2 行
  ```c
  #include <genome.h>
  
  static gene_pool_t shared_pool;  // 全局资源
  
  void gene_expression(void) {
  
      // 声明区
      rna_strand_t* messenger = NULL;
      amino_acid_t chain[POLYPEPTIDE_MAX];
      
      // 空行分隔声明与执行
      messenger = transcribe_dna(template_strand);
      
      // 空行分隔逻辑块
      if (mature(messenger)) {
          translate_rna(messenger, chain);
      }
  }
  ```

**优雅折行：长语句处理规范**  

当代码行开始挑战 IDE 的右边界，是时候进行优雅的长代码折行了。一行代码太长（超过120个字符），需要把它优雅地“折断”成几行，方便阅读。
- 超长语句必须换行（120字符黄金法则）
- 换行位置遵循自然语义边界
  ```c
  // 运算符换行后置
  result = very_long_variable_name1 + very_long_variable_name2 
           + very_long_variable_name3;
  
  // 函数参数换行对齐，函数参数排列（超过三个就换行）  
  draw_rectangle(x_position, y_position, 
                 width_value, height_value,
                 color_red, color_green, color_blue);
  ```
- 长语句分段
  ```c
  // 复杂条件分段
  if ((temperature > MAX_SAFE_TEMP) 
      && (pressure < CRITICAL_PRESSURE) 
      && (system_state == OPERATIONAL)) {
      emergency_shutdown();
  }
  
  // 链式调用分段
  result = object->first_method(param1)
               ->second_method(param2)
               ->final_method();
  ```
- 折行规范
  - 在自然断点处折行： 比如在运算符（+, -, &&, || 等）之后、逗号之后换行
  - 换行后对齐： 换行后，新的一行通常比上一行多缩进4个空格（或与上一行的同类元素对齐）
  - 操作符放行首： 把 +、&& 这类符号放在新行的开头，一眼就知道这是继续上一行的
  - 函数参数太多就换行： 如果一个函数调用参数超过 3 个，就把每个参数单独放一行（或合理分组）
  - 禁止在.或->后换行： 不要把 object. 或 pointer-> 和后面的方法名/成员名分开

**空格艺术：空格使用规范**

空格是代码里的标点符号，用得好让代码眉清目秀，用得不好就一团乱麻。
- 分子间距原则 
  | 场景       | 正确示例                      | 错误示例                     |
  | ---------- | ----------------------------- | ---------------------------- |
  | 操作符两侧 | `atp = adp + phosphate;`      | `atp=adp+phosphate;`         |
  | 逗号后     | `transcribe(template, sense)` | `transcribe(template,sense)` |
  | 关键字后   | `while (replication)`         | `while(replication)`         |
  | 指针声明   | `nucleotide_t* sequence`      | `nucleotide_t * sequence`    |
  | 禁止空格   | `helix[base_index]`           | `helix[ base_index ]`        |
  ```c
  // 操作符示范  
  float bmi = weight / (height * height);  // 运算符间保持体面  
  
  // 指针声明防误解指南  
  char* buffer = malloc(1024);  // *紧贴类型，远离变量名  
  
  // 函数调用规范  
  printf("ID: %d, Name: %s", user_id, user_name); // 逗号后自觉隔离  
  
  // 错误示范：挤得像早高峰地铁  
  int x=5*(y+z);  // 操作符亲密无间  
  
  // 正确姿势：保持舒适距离  
  int x = 5 * (y + z);  // 每个符号都有独立空间  
  
  // 错误示范：指针立场摇摆  
  int * ptr;  // *在中间像墙头草  
  
  // 正确姿势：明确站队  
  int* ptr;  // 大声宣告"我是int型指针"  
  ```

**代码净化：无用代码处理** 

没用的代码（尤其是被注释掉的旧代码）就是垃圾，必须清理掉！留着只会添乱。
- 严禁注释式保留代码：
  ```c
  // ❌ 危险保留（禁止）：
  // old_codon_table();
  // deprecated_folding_algorithm();
  
  // ✅ 正确做法：
  // 1. 立即删除无用代码
  // 2. 版本控制系统保留历史记录
  // 3. 需要时通过git blame追溯
  ```
- 注释代码的三大危害  
  - 僵尸代码：注释掉的代码像实验室的过期试剂，占用空间且存在污染风险
  - 认知负担：每行无用代码都在消耗队友的脑细胞
  - 工具干扰：静态分析工具会被"死代码"误导

**空间折叠原则**：  
- 层次性：缩进展现代码逻辑层级  
- 呼吸感：空行划分功能模块边界  
- 韵律美：空格创造视觉节奏  
- 简洁性：及时清除无效代码片段  
良好的代码排版使程序如蛋白质般优雅折叠，在三维空间呈现完美功能形态。

---

#### 2. 代码注释

**核心原则**
写注释的本质是给代码增加说明文档，目的是让其他人（包括未来的自己）能快速理解代码意图。好的注释应该做到：
- 精准明确：避免模糊描述，需要明确说明代码意图
- 及时更新：随代码变更同步修改，代码改了注释也得改
- 适度精简：只解释必要内容，简单代码无需注释

**注释语言**
- 默认使用英文注释：英文是编程领域的通用语言，确保跨国团队协作无障碍
- 特殊情况用中文：仅当项目成员全是中文母语者且项目有特殊要求时使用
- 禁止中英混用：同一文件内保持语言统一

**注释缩进**
- 注释必须与对应代码保持相同缩进层级：
  ```c
  void critical_function(void)
  {
      // 安全验证步骤
      if (!safety_check()) {
          // 错误处理流程
          log_error(ERROR_CODE);
      }
  }
  ```

**代码块结束标记**
- 仅当代码块超过50行时添加结束标记
- 标记应说明结束的是哪个代码块
- 关键提醒：如果经常需要这种标记，说明代码块太长（该拆分成小函数了）
  ```c
  } // End of while (data_processing)
  ```

**两种注释用法**
- 三种注释用法
  |     注释类型      |          使用场景          |         示例          |
  | :---------------: | :------------------------: | :-------------------: |
  |   单行注释 `//`   |   解释单行或相邻几行代码   | `// 初始化传感器数组` |
  | 多行注释 `/* */`  |  文件头说明/复杂算法解释   |  文件开头的功能概述   |
  | 文档注释 `/** */` | 函数/类说明（生成API文档） |  函数参数的详细说明   |
  ```c
  /* 模块级说明：描述文件/模块功能 */
  // 单行注释：解释局部代码
  
  /*
   * 多行注释用于：
   * 1. 复杂算法说明
   * 2. 重要设计决策
   */
  ```

**switch-case 注释规范**
- 当代码有非常规操作时必须说明
- 不写注释的后果：同事以为你忘了写 break，偷偷"修复"这个 bug
  ```c
  switch (state) {
  case STATE_IDLE:
      handle_idle();
      // 故意不break，流转到下一状态
      /* FALLTHROUGH */
  case STATE_STARTUP:
      init_system();
      break;
  default:
      // 显式标注default处理
      /* UNHANDLED STATE */
  }
  ```

**函数注释规范**
- 完整函数注释应包含
- 就像家电说明书：参数=使用方法，返回值=故障代码，警告=安全须知
  ```c
  /**
   * @brief 读取传感器数据并校准
   * 
   * @param sensor_id 传感器编号 (0-15)
   * @param temp_ptr 温度数据输出指针
   * @param hum_ptr 湿度数据输出指针
   * 
   * @return int 错误代码 (0=成功)
   * 
   * @note 调用前需确保传感器已初始化
   * @warning 非线程安全
   */
  int read_calibrated_data(uint8_t sensor_id, 
                          float* temp_ptr, 
                          float* hum_ptr);
  ```

**注释质量检测标准**
检查注释是否合格的3个问题：
- 半年后测试：半年后回看，能10秒内看懂吗？（例：为什么用这个算法？）
- 新人测试：新同事只看注释能正确调用函数吗？（例：参数0-15是编号还是电压值？）
- 更新成本测试：改代码时更新注释超过30秒吗？（超过说明注释太复杂）

**黄金法则**
好注释解释"为什么"，而不是"是什么"：

❌ 差注释：x = x + 1 // 给x加1（代码已说明）
✅ 好注释：x = x + 1 // 补偿传感器误差（见手册2.3节）

终极提示：当需要大段注释解释代码时，就像用十句话说明怎么开灯——该换更亮的灯泡（重构代码）了！💡

---

#### 3. 命名规则

1. **变量与函数命名**
   | 类型 | 风格 | 示例 |
   |---|---|---|
   | 全局变量 | `g_`前缀 | `g_system_state` |
   | 静态变量 | `s_`前缀 | `s_instance_count` |
   | 局部变量 | 小写+下划线 | `buffer_size` |
   | 函数名 | 动词+名词 | `calculate_checksum()` |
   | 布尔值 | `is_`/`has_`前缀 | `is_ready` |

2. **宏与常量命名**
   | 类型 | 风格 | 示例 |
   |---|---|---|
   | 宏定义 | 全大写+下划线 | `#define MAX_RETRIES (5)` |
   | 枚举值 | 全大写+下划线 | `enum { MODE_NORMAL, MODE_DEBUG };` |
   | 常量 | `k_`前缀 | `const int k_max_users = 100;` |

---

#### 4. 其他关键规范

1. **结构体字节对齐**
   ```c
   // 错误：未优化布局（可能产生填充字节）
   struct BadStruct {
       char c;     // 1 byte
                   // 3 bytes padding
       int i;      // 4 bytes
       short s;    // 2 bytes
                   // 2 bytes padding
   }; // 总大小12字节
   
   // 正确：按大小降序排列
   struct GoodStruct {
       int i;      // 4 bytes
       short s;    // 2 bytes
       char c;     // 1 byte
                   // 1 byte padding
   }; // 总大小8字节
   ```

2. **变量初始化**
   ```c
   // 声明时立即初始化
   int counter = 0;
   char* buffer = NULL;
   
   // 结构体初始化
   struct Config config = {
       .timeout = 1000,
       .retries = 3,
       .mode = DEFAULT_MODE
   };
   ```

3. **浮点数比较**
   ```c
   // 禁止直接比较
   // if (a == b) { ... }
   
   // 正确方式
   #define FLOAT_EPSILON 1e-6
   if (fabs(a - b) < FLOAT_EPSILON) {
       // 视为相等
   }
   ```

4. **运算符优先级**
   ```c
   // 错误：依赖隐式优先级
   result = a << 8 + b * c;
   
   // 正确：显式括号分组
   result = (a << 8) + (b * c);
   ```

5. **函数参数限制**
   ```c
   // 禁止：直接传递大结构体
   void process_data(struct BigStruct data); // 错误
   
   // 正确：传递指针
   void process_data(const struct BigStruct* data_ptr);
   ```

6. **宏定义括号规则**
   ```c
   // 错误：缺少括号保护
   #define SQUARE(x) x * x
   
   // 正确：完全括号化
   #define SQUARE(x) ((x) * (x))
   ```

7. **宏参数副作用禁止**
   ```c
   // 危险：参数带副作用
   #define INCREMENT(x) ((x)++)
   
   int a = 5;
   int b = INCREMENT(a) * 2; // 结果依赖求值顺序
   
   // 解决方案：改用内联函数
   static inline int increment(int* x) {
       return (*x)++;
   }
   ```

---

#### 5. 规范执行建议

1. **自动化检查**
   - 使用`clang-format`配置排版规则
   - 使用`cppcheck`/`clang-tidy`进行静态分析
   ```yaml
   # .clang-format 示例
   BasedOnStyle: LLVM
   IndentWidth: 4
   BraceWrapping:
     AfterFunction: true
   ColumnLimit: 120
   ```

2. **代码审查要点**
   | 审查项 | 检查内容 |
   |---|---|
   | 提交前 | 运行静态分析工具 |
   | Review时 | 重点检查内存/资源管理 |
   | 合并前 | 验证跨平台兼容性 |

3. **文档维护**
   - 在代码仓库根目录存放：
     - `CODING_STANDARDS.md` 完整规范
     - `.clang-format` 格式化配置
     - `check_rules.py` 自动化检查脚本

此规范综合了Linux内核、Google C++等主流标准，并针对嵌入式开发特点进行了优化，兼顾代码安全性和执行效率。