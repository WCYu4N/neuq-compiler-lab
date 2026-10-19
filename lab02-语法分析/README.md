# 实验二：语法分析

本实验使用 **Flex + Bison** 完成 SysY 子集的语法分析。Flex 负责把源程序转换为 token，Bison 负责按照语法规则进行归约；解析成功后，程序将 token 和实验要求的非终结符标签按顺序写入 `output.txt`。

## 当前环境

本实验在 macOS 上验证通过：

- Flex 2.6.4
- GNU Bison 3.8.2（Homebrew）
- Apple Clang 16.0.0

macOS 自带的 `/usr/bin/bison` 可能是 2.3，不支持本实验使用的 `%empty` 等语法。请使用 Homebrew 版本：

```bash
bison --version
flex --version
cc --version
```

## 文件说明

| 文件                   | 作用                                                 |
| ---------------------- | ---------------------------------------------------- |
| `lexer.l`            | Flex 词法规则；返回 token，并把 token 原文传给 Bison |
| `parser-fixed.y`     | 当前使用的 Bison 文法、语义动作、语法树和程序入口    |
| `syntax.txt`         | 原始语法表                                           |
| `parser-fixed.tab.c` | Bison 生成的语法分析器源码                           |
| `parser-fixed.tab.h` | Bison 生成的 token 和语义值声明，Flex 编译时需要     |
| `lex.yy.c`           | Flex 生成的词法分析器源码                            |

`parser-fixed.y` 为每个 token 保存种别和原文，并构建一棵具体语法树。

当前实现按照实验样例支持整数类型的声明、数组、函数、语句、表达式、输入输出和嵌套控制流。原始语法表中的 `float` 规则尚未接入当前词法器和 Bison 文法。

## 编译

在本目录执行：

```bash
bison -Wall -d -v \
  -o parser-fixed.tab.c parser-fixed.y
flex -o lex.yy.c lexer.l
cc -std=c11 -O2 parser-fixed.tab.c lex.yy.c -o parser
```

命令说明：

- `bison -d` 同时生成 `parser-fixed.tab.c` 和 `parser-fixed.tab.h`。
- `-v` 生成 `parser-fixed.output`，用于查看 Bison 的状态报告。
- `flex` 生成 `lex.yy.c`。
- 最后一步把 Bison 和 Flex 生成的两个 C 文件编译成一个 `parser` 可执行文件。

如果评测系统直接编译生成的 C 文件而不会自动运行 Bison，必须同时提交 `parser-fixed.tab.h`；`lex.yy.c` 和 `parser-fixed.tab.c` 都会引用它。

## 运行

程序支持命令行指定输入和输出路径：

```bash
./parser [输入文件] [输出文件]
```

省略参数时使用：

- 输入：`testfile.txt`
- 输出：`output.txt`

例如：

```bash
./parser testfile.txt output.txt
```

也可以直接使用仓库中的示例文件：

```bash
./parser textfile.txt output.txt
```

语法分析成功后，`output.txt` 会被覆盖并写入结果；语法错误和词法错误写入标准错误，不生成成功结果文件。

样例输出的开头和结尾如下：

```text
INTTK int
MAINTK main
LPARENT (
...
<MainFuncDef>
<CompUnit>
```

## 语法概要

完整的原始规则见 [syntax.txt](syntax.txt)。主要结构如下：

```text
CompUnit    → { Decl } { FuncDef } MainFuncDef
Decl        → ConstDecl | VarDecl
FuncDef     → FuncType Ident '(' [ FuncFParams ] ')' Block
MainFuncDef → 'int' 'main' '(' ')' Block
Block       → '{' { BlockItem } '}'
BlockItem   → Decl | Stmt
```

表达式按优先级分为 `UnaryExp`、`MulExp`、`AddExp`、`RelExp`、`EqExp`、`LAndExp` 和 `LOrExp`。Bison 保留表达式规则中的左递归，以表达左结合运算。
