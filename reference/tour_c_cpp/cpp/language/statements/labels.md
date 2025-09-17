C++ 标记语句

标记语句用于控制流目的标记语句。

label 语句		
标签	-	应用于语句的标签（定义见下文）
陈述	-	标签所应用的语句，它可以是标记语句本身，允许多个标签
标签
标签定义为

attr（可选） 标识符：	(1)	
attr（可选）caseconstexpr：	(2)	
attr（可选） 默认值：	(3)	
1）GOTO 的目标;
2）switch 语句中的 case 标签;
3）default 标签。
属性序列 attr 可能仅出现在标签的开头（在这种情况下，它适用于标签），或者直接出现在任何语句本身之前，在这种情况下，它适用于整个语句。

（从 C++11 开始）
在函数内声明标识符的标签与该函数中所有嵌套块中在其声明之前和之后具有相同标识符的所有 goto 语句匹配。

函数中的两个标签不得具有相同的标识符。

除了添加到语句中外，标签还可以在复合语句中的任何位置使用。

（自 C++23 起）
非限定查找不会找到标签：标签可以与程序中的任何其他实体具有相同的名称。

void f()
{
    {
        goto label; // label in scope even though declared later
        label:      // label can appear at the end of a block standalone since C++23
    }
    goto label; // label ignores block scope
}
 
void g()
{
    goto label; // error: label not in scope in g()
}