C++ 资源包含 （从 C++26 开始）

#embed 是包含资源的预处理器指令。

语法
#embed <h-char-sequence>pp-tokens 换行符	(1)	
#embed “q-char-sequence”pp-tokens 换行符	(2)	
#embedpp-tokens 换行符	(3)	
__has_embed（ 平衡 pp 代币 ）	(4)	
1） 搜索由 h-char-sequence 唯一标识的资源，并用资源的全部内容替换指令。
2） 搜索由 q-char-sequence 标识的资源，并将指令替换为源文件的全部内容。它可以回退到 （1） 并将 q-char-sequence 视为资源标识符。
3） 如果 （1） 和 （2） 都不匹配，则 pp-token 将进行宏替换。替换后的指令将再次尝试与 （1） 或 （2） 匹配。
4） 检查资源是否可用于包含给定的嵌入参数 。
换行符	-	换行符
h-char 序列	-	一个或多个 h-char s 的序列（参见 #include）
q-char 序列	-	一个或多个 q-char 的序列（参见 #include）
pp 代币	-	一个或多个预处理令牌的序列
平衡 pp 代币	-	一个或多个预处理标记的序列，其中所有 （， [ 和 { 都正确闭合
解释
1） 搜索由 h-char-sequence 唯一标识的资源的位置序列，并导致该指令被标头的全部内容替换。如何指定地点或标识标头是实现定义的。
2） 导致该指令被 q-char-sequence 标识的资源的全部内容替换。以实现定义的方式搜索命名资源。
如果不支持此搜索，或者搜索失败，则会重新处理指令，就像它从原始指令中读取具有相同包含序列（包括 > 字符，如果有）的语法 （1） 一样。
3） 嵌入指令后的预处理标记与在普通文本中一样处理（即，当前定义为宏名称的每个标识符都被其预处理标记的替换列表替换）。
如果在所有替换后产生的指令与前两种形式之一不匹配，则行为未定义。
将 < 和 > 预处理令牌对或一对 “ 字符之间的预处理令牌序列组合成单个资源名称预处理令牌的方法是实现定义的。
4） 搜索由语法 （3） 的发明 #embed 指令标识的资源，使用 balanced-pp-tokens 作为其 pp-tokens。
如果这样的指令不能满足 #embed 指令的语法要求，则程序格式不正确。
否则，如果资源搜索成功，并且支持发明指令中的所有给定嵌入参数 ，则 __has_embed 表达式的计算结果为 __STDC_EMBED_FOUND__ 资源不为空，__STDC_EMBED_EMPTY__ 资源为空。
否则，__has_embed 表达式的计算结果为 __STDC_EMBED_NOT_FOUND__。
资源
资源是可从翻译环境访问的数据源。资源具有 implementation-resource-width ，它是实现定义的资源大小（以位为单位）。如果实现资源宽度不是 CHAR_BIT 的整数倍，则程序格式错误。

设 implementation-resource-count 为 implementation-resource-width 除以 CHAR_BIT。每个资源还有一个 resource-count ，即 implementation-resource-count，除非提供了 limit embed 参数。

如果资源计数为零，则资源为空 。

// ill-formed if the implementation-resource-width is 6 bits
#embed "6_bits.bin"
嵌入资源
除非另有修改，否则 #embed 指令将替换为逗号分隔的 int 类型的整数文字列表。

逗号分隔列表中的整数文字对应于资源对 std：：fgetc 的资源计数连续调用，作为二进制文件。如果对 std：：fgetc 的任何调用返回 EOF，则程序格式错误。

int i =
{
#embed "i.dat"
}; // well-formed if i.dat produces a single value
 
int i2 =
#embed "i.dat"
; // also well-formed if i.dat produces a single value
 
struct T
{
    double a, b, c;
    struct { double e, f, g; } x;
    double h, i, j;
};
T x =
{
// well-formed if the directive produces nine or fewer values
#embed "s.dat"
};
嵌入参数
如果语法 （1） 或语法 （2） 中存在 pp-tokens，则处理它的方式与普通文本相同。处理后的 pp-token 应形成一系列嵌入参数 ，否则程序格式错误。嵌入参数具有以下语法：

限制 （ 平衡 pp 代币 ）	(1)	
prefix（balanced-pp-tokens（可选））	(2)	
suffix（balanced-pp-tokens（可选））	(3)	
if_empty（balanced-pp-tokens（可选））	(4)	
标识符 ：： 标识符	(5)	
identifier：：identifier（balanced-pp-tokens（可选））	(6)	
1-4） 标准嵌入参数。
1） 限制要嵌入的资源的资源计数。
2） 为嵌入的非空资源添加前缀。
3） 为嵌入的非空资源添加后缀。
4） 替换嵌入的资源（如果它是空的）。
5,6） 非标准埋入参数。任何此类参数都是有条件支持的，并具有实现定义的语义。

limit 参数
形式 limit（balanced-pp-tokens） 的 embed 参数在每个 #embed 指令中最多只能出现一次。

balanced-pp-tokens 的处理方式与普通文本一样形成常量表达式 ，但不计算定义、__has_include、__has_cpp_attribute 和 __has_embed 表达式。

常量表达式必须是值大于或等于零的整数常量表达式 ：

如果常量表达式的值大于 implementation-resource-count，则 resource-count 仍然是 implementation-resource-count。
否则，resource-count 将成为常量表达式的值。
constexpr unsigned char sound_signature[] =
{
// a hypothetical resource capable of expanding to four or more elements
#embed <sdk/jump.wav> limit(2 + 2)
};
 
static_assert(sizeof(sound_signature) == 4);
 
// equivalent to #embed <data.dat> limit(10)
#define DATA_LIMIT 10
#embed <data.dat> limit(DATA_LIMIT)
 
// ill-formed
#embed <data.dat> limit(__has_include("a.h"))

前缀参数
形式 prefix（balanced-pp-tokens（可选）） 的 embed 参数在每个 #embed 指令中最多只能出现一次。

如果资源为空，则忽略此嵌入参数。否则，balanced-pp-tokens 将紧接在逗号分隔的整数文字列表之前。


suffix 参数
形式为 suffix（balanced-pp-tokens（optional）） 的 embed 参数在每个 #embed 指令中最多只能出现一次。

如果资源为空，则忽略此嵌入参数。否则，balanced-pp-tokens 将紧接在逗号分隔的整数文字列表之后。

constexpr unsigned char whl[] =
{
#embed "chess.glsl" \
    prefix(0xEF, 0xBB, 0xBF, ) /∗ a sequence of bytes ∗/ \
    suffix(,)
    0
};
 
// always null-terminated, contains the sequence if not empty
 
constexpr bool is_empty = sizeof(whl) == 1 && whl[0] == '\0';
 
constexpr bool is_not_empty = sizeof(whl) >= 4
    && whl[sizeof(whl) - 1] == '\0'
    && whl[0] == '\xEF' && whl[1] == '\xBB' && whl[2] == '\xBF';
 
static_assert(is_empty || is_not_empty);

if_empty 参数
if_empty（balanced-pp-tokens（可选）） 形式的 embed 参数在每个 #embed 指令中最多只能出现一次。

如果资源不为空，则忽略此嵌入参数。否则，#embed 指令将替换为 balanced-pp-tokens。

// always expands to 42203 regardless of the content of /owo/uwurandom
#embed </owo/uwurandom> if_empty(42203) limit(0)
笔记
功能测试宏	价值	性病	特征
__cpp_pp_embed	202502L	（C++26）	#embed 指令
例
展示 #embed 的效果。如果 data.dat 可以作为资源嵌入到翻译环境中，则此程序中的任何断言都不应失败。

运行此代码
#include <cassert>
#include <cstddef>
#include <cstring>
#include <fstream>
#include <vector>
 
int main()
{
    constexpr unsigned char d[]
    {
#embed <data.dat>
    };
 
    const std::vector<unsigned char> vec_d
    {
#embed <data.dat>
    };
 
    constexpr std::size_t expected_size = sizeof(d);
    // same file in execution environment as was embedded
    std::ifstream f_source("data.dat", std::ios_base::binary | std::ios_base::in);
    unsigned char runtime_d[expected_size];
 
    char* ifstream_ptr = reinterpret_cast<char*>(runtime_d);
    assert(!f_source.read(ifstream_ptr, expected_size));
 
    std::size_t ifstream_size = f_source.gcount();
    assert(ifstream_size == expected_size);
 
    int is_same = std::memcmp(&d[0], ifstream_ptr, ifstream_size);
    assert(is_same == 0);
 
    int is_same_vec = std::memcmp(vec_d.data(), ifstream_ptr, ifstream_size);
    assert(is_same_vec == 0);
}
引用
C++26 标准 （ISO/IEC 14882：2026）：
15.4 资源包含 [cpp.embed]
另请参阅
源文件包含
二进制资源包含的 C 文档 （自 C23 起）
