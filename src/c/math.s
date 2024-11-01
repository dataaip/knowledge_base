.section .text
.global add

add:
    movl %edi, %eax  # 第一个参数存储在 %edi 中
    addl %esi, %eax  # 第二个参数存储在 %esi 中，并相加
    ret              # 返回结果