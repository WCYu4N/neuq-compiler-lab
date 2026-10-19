# 编译原理实验

本项目记录东北大学编译原理课程的实验代码，依据 [SysY 语言说明](docs/1647173235328002145.pdf)，逐步实现小型编译器。SysY 是 C 语言的一个子集，支持整数、数组、函数以及基本的控制流语句。

## 实验一：词法分析

使用 Lex/Flex 生成词法分析器，识别关键字、标识符、整数常量、格式字符串、运算符和分隔符，并跳过空白与注释。

运行环境：Flex 2.6.4，Clang 或 GCC（macOS / Linux）。

在项目根目录执行：

```bash
cd lab01-词法分析
flex -o lex.yy.c lexer.l
cc lex.yy.c -o lexer
./lexer
```

运行前，将待分析的源程序写入该目录下的 `testfile.txt`。程序会生成或覆盖 `output.txt`，每行输出一个单词，格式为 `种别码 单词原文`，例如：

```text
INTTK int
MAINTK main
LPARENT (
RPARENT )
```

## 实验二：语法分析

实验二使用 Flex 和 Bison 将源程序直接连接到语法分析器：Flex 返回 token，Bison 按 SysY 语法进行分析并构建具体语法树。解析成功后，程序把 token 和规定的语法成分标签写入 `output.txt`。

实现位于 [`lab02-语法分析`](lab02-语法分析)，详细说明见该目录下的 [README.md](lab02-语法分析/README.md)。当前实现使用 `parser-fixed.y` 和 `lexer.l`，`parser.y` 是早期文法草稿。

在 macOS 上进入实验二目录并执行：

```bash
cd lab02-语法分析
bison -Wall -d -v \
  -o parser-fixed.tab.c parser-fixed.y
flex -o lex.yy.c lexer.l
cc -std=c11 -O2 parser-fixed.tab.c lex.yy.c -o parser
./parser testfile.txt output.txt
```

其中，`bison -d` 会生成 Flex 编译所需的 `parser-fixed.tab.h`。如果提交平台只直接编译 `lex.yy.c` 和 `parser-fixed.tab.c`，还需要一并提交这个头文件。输入文件和输出文件也可以通过命令行参数指定；省略参数时默认使用 `testfile.txt` 和 `output.txt`。
