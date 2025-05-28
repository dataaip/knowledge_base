## standard 程序标准
- [standard 程序标准](#standard-程序标准)

前言

一、项目结构
1. 目录结构规范
2. 文件和目录命名
3. 业界参考案例
4. 构建系统集成规范
5. 反模式与常见错误

二、文件结构
1. 版权和版本声明（不是必须，但是我建议看看）
2. 头文件结构
3. 源文件结构

三、代码排版（以 K&R 风格为主）
1. 缩进与左花括号的位置
2. 空行的插入
3. 该分行就分行
4. 花括号
5. 长语句分段
6. 空格
7. 无用的代码必须删除

四、代码注释
1. 注释用什么语言？
2. 注释缩进
3. 程序块结束注释
4. 两种注释的用法
5. switch 语句如无需 break，须加上明确的注释
6. 函数块的注释

五、命名规则
1. 变量与函数的命名
2. 宏定义和常数的命名

六、其他
1. 结构体定义注意字节对齐
2. 定义变量时同时进行初始化
3. 禁止浮点数直接进行等于或者不等于的比较操作
4. 超过两级的运算符表达式必须使用括号分离
5. 函数参数不能出现结构体
6. 有参宏定义表达式都必须使用括号
7. 使用有参宏定义，禁止参数带自增自减运算符


二、排版（以 K&R 风格为主）
1. 缩进与左花括号的位置
缩进的全部意义就在于清楚的定义一个控制块起止于何处，网上很多代码的缩进风格让人看的真的是很难受，建议统一设 Tab 为 4 个空格，采用 Tab 缩进。并且设置按下 Tab 后，自动把 Tab 转换为 4个空格（老程序员都懂）。

至于左花括号的位置，不同人有不同的看法，而我已经习惯了工作中的规范要求，所以我写程序块时，左花括号与它的语句同行，用空格隔开，右花括号与引用它们的语句左对齐，花括号之内的代码块在缩进位置处左对齐。而写函数时，左花括号则另起一行，与引用语句左对齐，其余跟程序块一样。具体如下：
        
void example_fun_1(void)
{
... // program code
}

void example_fun_2(void)
{
    for (...) {
    ... // program code
    }

    if (...) {
    ... // program code
    } else {
    ... // program code
    }

    switch (variable) {
        case value1:
            ... // program code
            break;
        case value1:
            ... // program code
            break;
        default:
            ... // program code
            break;
    }
}
关于左花括号的位置，也是一个涉及个人风格的问题，我选用这个写法，沿用了 Kernighan 和 Ritchie（C 语言之父，两人一起编写了《The C Programming Language》）的编码风格，也就是所谓的 K&R 风格，不过我也没有全部照搬，例如函数就不是这个风格，只要用于区分程序块和函数。

2. 空行的插入
相对独立的程序块之间、变量说明之后必须加空行，空行起着分隔程序段落的作用，将使程序的布局更加清晰。

int ret = -1;

if (NULL == dst || NULL == proc) {
    perror();
    return false;
}

const jint *array = env->GetIntArrayElements(srcColors, NULL);
const SkColor *src = (const SkColor *)array + srcOffset;
3. 该分行就分行
切勿把多个短语句写在一行，一行代码只做一件事情，这样的代码容易阅读，并且便于写注释。

以下是不规范的写法：

rect.height = 0; rect.width = 0;

if (NULL == dst || NULL == proc) return;
以下是规范的写法：

rect.height = 0;
rect.width = 0;

if (NULL == dst || NULL == proc)
    return;
4. 花括号
这里又聊到了花括号，一般认为 if、for、do-while、while、switch 等语句必须使用花括号括起来，从上面的示例也可以看出。

当然，也不是任何情况都要加上这个花括号，当只有一个单独的语句的时候，不用加不必要的大括号。如下：

if (condition)
	action();
或者这样：

if (condition)
	do_this();
else
	do_that();
不过，这并不适用于只有一个条件分支是单语句的情况，这时所有分支都要使用大括号：

if (condition) {
    do_this();
    do_that();
} else {
	otherwise();
}
这里只介绍了 if-else 语句，同样适用于 for、do-while、while 等语句。

5. 长语句分段
较长的语句必须分成多行书写，这里说的较长的语句，其实没有统一标准，我个人的标准是每行不超过 80 个字符（包括每次缩进的空格在内）。长表达式要在低优先级操作符处划分新行，操作符放在新行之首（以便突出操作符）。划分出的新行要进行适当的缩进，使排版整齐，语句可读。

例如：

// 判断语句有较长表达式时
if ((very_longer_variable1 >= (very_longer_varable2))
	&& (very_longer_varable3) <= (very_longer_varable4)
	&& (very_longer_varable5) <= (very_longer_varable6)) {
	dosomething();
}

// 函数参数较多或较长时
static void Bitmap_setPixels(JNIEnv* env, jobject, jlong bitmapHandle,
						   jintArray pixelArray, jint offset, jint stride,
						   jint x, jint y, jint width, jint height)
{
    ... // program code
}

// 循环语句有较长表达式时
for (very_longer_initialization;
	 very_longer_condition;
	 very_longer_update) {
	dosomething();
}
6. 空格
比较运算符、赋值运算符、算术运算符、逻辑运算符、位域运算符等双目运算符的前后必须加空格，采用这种松散方式编写代码的目的是使代码更加清晰。以下是各个示例：

逗号，分号只在后面加空格：

dosomething(parm1, parm2, parm3);

for (i = 0; i < MAX_LENGTH; i++) {
	... // program code
}
双目操作符的前后加空格：

比较操作符，赋值操作符（ =、 +=），算术操作符（ +、% 等），逻辑操作符（ &&、& 等），位域操作符（ << 等）等双目操作符的前后加空格。

if (current_time >= MAX_TIME_VALUE)
	... // program code

var1 = var2 + var3;
var1 *= 2;
var1 = var2 ^ 2;
结构体内部变量不加空格：

p->id = pid; // "->"前后不加空格
str.id = pid; // "."前后不加空格
单目操作符前后不加空格：

*p = 'a'; 		 // 内容操作"*"与内容之间
flag = !isEmpty; // 非操作"!"与内容之间
p = &mem;		// 地址操作"&" 与内容之间
i++; 		    // "++","--"与内容之间
部分关键字语句与括号间加空格：

if、for、while、switch 等与后面的括号间应加空格，使 if 等关键字更为突出、明显。

if (var1 >= var2 && var3 > var4)
7. 无用的代码必须删除
代码文件不用的代码不要用注释等方法来保留在文件中，除非你注释掉的代码非常有代表意义（比如对 Android 源码的修改；有的代码使用特殊，别人来修改你的代码可能犯你当初的错误，那么你这部分注释掉的错误代码可以保留，并增加说明），否则不再使用的代码必须删除。

三、注释
1. 注释用什么语言？
关于注释该用中文还是英文要具体看你这个代码的目的是什么。如果是开源到 GitHub 上的项目，建议用英文，如果是开源到 Gitee 上的项目，那么中英文都行。如果只是学习阶段，用中文也没什么，毕竟中国国民英文水平摆在那里，大家有目共睹，不能强迫一个英语本来就不好的程序员强行使用英文写注释（要是公司要求就没办法了）。如果用中文写注释，要注意编码格式的问题，建议使用 UTF-8 的输入格式。

注释的内容必须清楚准确，拒绝二义性！

2. 注释缩进
注释与所描述内容必须进行同样的缩排，这可使程序排版整齐，并方便注释的阅读与理解。如下：

void example_fun( void ) {
    /* code one comments */
    CodeBlock One
    /* code two comments */
    CodeBlock Two
}
3. 程序块结束注释
超出一屏的程序块的结束行和分支语句（条件分支、循环语句等）结束行右方必须加注释标记，以表明某程序块的结束。主要是当代码段较长，特别是多重嵌套时，这样做可以使代码更清晰，更便于阅读。如下：

if (...) {
	... // program code
	while (index < MAX_INDEX) {
		... // program code
    } // end of while (index < MAX_INDEX)
} // end of if (...)

#ifdef __IDMAP_H__
...// program code
#else
...// program code
#endif // __IDMAP_H__
4. 两种注释的用法
早期 C 语言只有 /* */ 这种注释方式，最早使用 // 注释代码的是 Java，后来 C 语言也引入了 // 作为注释，其实两种注释产生的结构并没有什么区别。/* */ 更多用于多行的注释信息，例如前面提到的版权和版本信息等，就是用这种方法注释的。而 // 一般是单行代码进行注释。所以一般都是用 /* */ 注释程序块或者函数，注释必须位于其上方相近位置，放于上方则需与其上面的代码用空行隔开。而 // 一般是写在单行代码的后面，只对一行代码作注释，如果注释内容过程，一行显示不下，也会考虑换成  /* */ 。

5. switch 语句如无需 break，须加上明确的注释
switch 的每个 case 语句，默认要求有 break 返回；如果无需 break，必须加上明确的注释，这样比较清楚程序编写者的意图，有效防止无故遗漏 break 语句。

case CMD_UP:
	ProcessUp();
	break;
case CMD_DOWN:
    ProcessDown();
    break;
case CMD_FWD:
    ProcessFwd();
    if (...) {
    	...
    break;
    } else {
    	ProcessCFW_B(); // now jump into case CMD_A
    }
case CMD_A:
    ProcessA();
    break;
...
default:
    break;
6. 函数块的注释
在多数编程语言中，函数注释风格可能有所不同，但核心元素相似，通常包括函数的概述、参数说明、返回值说明、示例用法和注意事项等。例如，在 Java 或 C++ 中，可能会使用 Javadoc 或 Doxygen 风格的注释，其格式略有不同，但目的相同：

/**
 * @brief exampleFunction - A brief description of the function.
 * @param param1 (Type) Description of param1.
 * @param param2 (Type) Description of param2.
 * @return ReturnType Description of the return value.
 * @throws ExceptionType If something goes wrong, this exception is thrown.
 */
ReturnType ReturnType exampleFunction(Type param1, Type param2) {
    // Function implementation...
}
下面是各个部分的含义：

@brief: 简要描述函数的作用或功能。

@param: 参数说明，描述函数接受的参数及其含义。

@return: 返回值说明，描述函数返回的内容或类型。

@throws: 异常说明，描述函数可能抛出的异常或错误情况。

这种文档注释通常用于提供函数的详细信息，使得其他开发者能够快速了解函数的使用方法和预期行为。

四、命名规则
1. 变量与函数的命名
我对于变量名和函数名的命名法，通常根据开发的情况来决定的。一般做 C51 单片机和 Linux 驱动相关的开发，用下划线命名法。开发 STM32 单片机、Arduino 单片机和 Linux 应用层程序时，用小驼峰命名法，少部分 Linux 应用层开发用大驼峰命名法。如果涉及到 FreeRTOS 相关的开发，可能还会用到匈牙利命名法。

命名法只是基本要求，比较重要的是，千万不要用拼音去命名，除非是一些人名或者地名（人名或者地名一般也不太会出现在代码中），英文差没关系，可以去查，现在工具非常多。

也可以使用一些程序员公认的英文缩写，目前约定俗成的有如下表所示的英语单词：

常见单词	惯用写法	含义
argument	arg	传入的参数
buffer	buf	缓冲存储区
clock	clk	时钟
command	cmd	命令
compare	cmp	比较
configuration	cfg / conf / config	配置
device	dev	设备
error	err	错误
hexadecimal	hex	十六进制数的
increment	inc	增量器
initalize	init	初始化
maximum	max	最大的
message	msg	消息
minimum	min	最小的
parameter	para	参数
previous	prev	上一个的
register	reg	注册
semaphore	sem	信号标志
statistic	stat	统计数据
synchronize	sync	同步器
temp	tmp	临时变量
function	fun	函数
函数的命名一般选择动宾短语，即动词+宾语，这样做可较好地说明函数的功能，而且函数名须准确描述函数的功能。

另外，禁止取名单个字符变量（如 i、j、k...），局部循环变量除外。

2. 宏定义和常数的命名
常量名、宏必须用大写字母和阿拉伯数字命名，并用下划线连接单词，不能有其他符号，也不能用阿拉伯数字开头。禁止任何未经定义的常量值直接被使用，常量值必须使用宏或const 常量定义，禁止在函数里直接使用。不然就是魔鬼数字。

例如，表示一分钟多少秒这样的常量，一小时多少分钟这样的常量，都可以用宏定义或者关键字 const 定义，如下：

#define SECONDS_IN_MINUTE 60
#define MINUTES_IN_HOUR   60
#define HOURS_IN_DAY      24
#define DAYS_IN_YEAR      365
#define SECONDS_IN_YEAR (SECONDS_IN_MINUTE * MINUTES_IN_HOUR * HOURS_IN_DAY * DAYS_IN_YEAR)U

魔鬼数字（Magic Number）指的是在源代码中直接出现的、没有明确解释或上下文说明的数值常量。它们缺乏清晰的命名，使得代码难以理解和维护。例如，直接在代码中写if (x == 42)而不解释42代表的具体意义，这里的42就可以被认为是魔鬼数字。最佳实践是通过命名常量（如 const int MAX_ATTEMPTS = 42;）来替换这些魔法数字，提高代码的可读性和可维护性。

五、其他
1. 结构体定义注意字节对齐
其实现在的内存空间可能真的不需要去考虑这个问题，主要是单片机开发，需要考虑内存空间不足的问题，合理排列结构中元素顺序可节省空间。

如下结构中的位域排列，将占较大空间（其大小为 6 Bytes），系统需要读取两次：

typedef struct EXAMPLE_STRU {
    unsigned char valid;
    unsigned Short person;
    unsigned char set_flg;
} EXAMPLE;
若改成如下形式，不仅可节省 2 字节空间（其大小为 4 Bytes），系统操作时仅需读取一次：

typedef struct EXAMPLE_STRU {
    unsigned char valid;
    unsigned char set_flg;
    unsigned Short person;
} EXAMPLE;

对于 32 位系统，尽量使其 4 字节对齐；对于 64 位系统，尽量使其 8 字节对齐；特别是对于数组的结构体更是如此。

2. 定义变量时同时进行初始化
无数次的经验都在提醒，定义变量时必须同时进行初始化。特别是在 C/C++ 中引用未经赋值的指针，经常会引起系统崩溃。且不同编译系统对于局部变量值的初始化不同，不都为 0。如：VC 为 0xCC。

下面给出一些初始化变量的示例：

int index = 0;
boolean exit = FALSE;
char *name = NULL;
wchar address[10] = {0};
TPhonebookRecord record = {0};
3. 禁止浮点数直接进行等于或者不等于的比较操作
由于浮点型数据并没有准确的数值，所以不得进行相等（或不相等）比较。

对于如下语句，其判断语句的执行结果极有可能为 FALSE。

float value = 12.23;

if (value == 12.23) {
	...
}
如果需要对其进行等值判断，可采用类似如下方式：

float value = 12.23;

if (value >= 12.2299 && value <= 12.2301) {
	...
}
4. 超过两级的运算符表达式必须使用括号分离
为了保证运算符的准确性及阅读方便性，必须使用括号分离。

示例如下：

word = (high << 8) | low;

if ((var1 | var2) && (var1 & var3)) {
	...
}
5. 函数参数不能出现结构体
函数参数禁止出现结构体变量，必须是结构体指针的形式。函数的实参在运行时会进入栈空间的，如果直接传入结构体的话会无谓的消耗栈空间，引起程序不稳定，传入结构指针则没有这个问题。

6. 有参宏定义表达式都必须使用括号
用宏定义表达式时，所有参数都必须使用括号。每一级操作符对应的操作数、表达式都必须使用括号。整个表达式也必须使用括号。如下定义的宏都存在一定的风险：

#define RECTANGLE_AREA(a, b) a * b
#define RECTANGLE_AREA(a, b) (a * b)
#define RECTANGLE_AREA(a, b) (a) * (b)
正确的定义应为：

#define RECTANGLE_AREA(a, b) ((a) * (b))
7. 使用有参宏定义，禁止参数带自增自减运算符
如下用法可能导致错误：

#define SQUARE(a) ((a) * (a))
int var1 = 5;
int var2 = 0;
var2 = SQUARE(var1++); // 结果：var1 = 7，即执行了两次增1。
正确的用法是：

var2 = SQUARE(var1);
var1++; // 结果：var1 = 6，即只执行了一次增1。
好了，目前就总结这么多，编码规范是一个团队合作的基石，它确保了代码的可读性、可维护性和一致性。遵循本规范不仅能够提高代码质量，减少错误，还能够加速开发过程，提高团队协作效率。我们每个人都是团队的一员，遵守编码规范是对团队的承诺和贡献，让我们共同努力，为项目的成功贡献力量。