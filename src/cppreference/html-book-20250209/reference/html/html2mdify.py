import os
import argparse
from pathlib import Path
import html2text
from bs4 import BeautifulSoup
from markdownify import markdownify as md

# 轻量级需求：html2text 或 markdownify
# 复杂需求：结合 pypandoc 和 BeautifulSoup 预处理

def html_to_markdown_ify(html_content):
    """
    使用 lxml 作为解析器的高效 HTML 转 Markdown 函数
    保留内容结构并彻底清理 HTML 元素
    """
    # 1. 使用 lxml 解析器（更快且容错性更好）
    soup = BeautifulSoup(html_content, 'lxml')
    
    # 2. 移除完全不需要的标签（包括嵌套内容）
    blacklist = [
        'script', 'style', 'meta', 'link', 
        'nav', 'footer', 'head', 'noscript',
        'iframe', 'svg', 'figure'
    ]
    for tag in soup(blacklist):
        tag.decompose()
    
    # 3. 处理特殊内容（优化转换结果）
    # - 确保图片有 alt 文本
    for img in soup.find_all('img', alt=False):
        img['alt'] = img.get('title', '').strip() or 'image'
    
    # - 处理表格保留（如果需要）
    for table in soup.find_all('table'):
        table.wrap(soup.new_tag('div', **{'class': 'markdown-table'}))
    
    # 4. 转换为 Markdown（关键参数配置）
    markdown = md(
        str(soup),
        code_language='text',          # 代码块默认语言
        strip=['div', 'span'],         # 移除 div/span 标签但保留内容
        autolinks=True,                # 自动识别纯文本URL
        heading_style='ATX',           # 使用 # 标题
        bullets='-',                   # 列表符号统一为 -
        strong_em_symbol='**',         # 加粗用 **
        keep_inline_images_in=['img'], # 保留图片转换
        escape_underscores=False,      # 不转义下划线
        keep_tables=True               # 保留表格结构（需 markdownify>=0.11.0）
    )
    
    # 5. 后处理优化
    # - 移除多余空行（保留最多两个连续空行）
    import re
    markdown = re.sub(r'\n{3,}', '\n\n', markdown.strip())
    
    # - 修复代码块中的特殊字符
    markdown = re.sub(r'```text\n(.*?)```', 
                     lambda m: f"```\n{m.group(1)}\n```", 
                     markdown, flags=re.DOTALL)
    
    # 移除 [text](url) 形式的Markdown链接，保留text
    markdown = re.sub(r'\[([^\]]+)\]\([^)]+\)', r'\1', markdown)
    
    return markdown

def html_to_markdown(html_content):
    """
    将 HTML 转换为 Markdown，保留标题、列表、链接等格式
    :param html_content: HTML 字符串
    :return: Markdown 字符串
    """
    h = html2text.HTML2Text()
    h.ignore_links = True       # 不保留链接
    h.ignore_images = False     # 保留图片（转换为 ![]() 格式）
    h.ignore_emphasis = False   # 保留加粗/斜体
    h.ignore_tables = False     # 保留表格
    h.body_width = 0            # 不自动换行
    h.mark_code = True          # 用 ``` 标记代码块
    return h.handle(html_content)

def convert_html_to_markdown(src_dir, dst_dir, recursive=True):
    """
    递归遍历目录，将所有 HTML 转换为 Markdown
    :param src_dir: 源目录（HTML 文件所在）
    :param dst_dir: 目标目录（存放 .md 文件）
    :param recursive: 是否递归处理子目录
    """
    for root, dirs, files in os.walk(src_dir):
        # 计算相对路径并在目标目录创建对应子目录
        rel_path = os.path.relpath(root, src_dir)
        target_dir = os.path.join(dst_dir, rel_path) if rel_path != '.' else dst_dir
        os.makedirs(target_dir, exist_ok=True)

        for file in files:
            if file.lower().endswith(('.html', '.htm')):
                src_file = os.path.join(root, file)
                md_file = os.path.join(target_dir, 
                                     os.path.splitext(file)[0] + '.md')
                
                try:
                    with open(src_file, 'r', encoding='utf-8') as f:
                        html = f.read()
                    markdown = html_to_markdown_ify(html)
                    with open(md_file, 'w', encoding='utf-8') as f:
                        f.write(markdown)
                    print(f"转换成功: {src_file} -> {md_file}")
                except Exception as e:
                    print(f"转换失败 {src_file}: {str(e)}")

        if not recursive:
            dirs.clear()  # 阻止递归子目录

def main():
    parser = argparse.ArgumentParser(
        description="将 HTML 文件转换为 Markdown 并保持目录结构"
    )
    parser.add_argument("src_dir", help="包含 HTML 文件的源目录")
    parser.add_argument("dst_dir", help="存放 Markdown 文件的目标目录")
    parser.add_argument("--no-recursive", action="store_true",
                       help="不处理子目录（仅顶层）")
    args = parser.parse_args()

    if not os.path.exists(args.src_dir):
        print(f"错误: 源目录不存在 {args.src_dir}")
        return

    convert_html_to_markdown(
        args.src_dir,
        args.dst_dir,
        recursive=not args.no_recursive
    )
    print("转换完成！")

if __name__ == "__main__":
    main()

# 递归转换（默认）
# python html2md.py /input/html /output/md

# 仅转换顶层目录
# python html2md.py /input/html /output/md --no-recursive