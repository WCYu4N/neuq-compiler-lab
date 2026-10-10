运行环境：
- Flex 2.6.4
- C 编译器：Clang 或 GCC
- 操作系统：macOS

生成 C 源文件：
```bash
flex -o lex.yy.c lexer.l
```

编译：
```bash
cc lex.yy.c -o lexer
```

运行：
```bash
./lexer
```

运行前，在当前工作目录放置 testfile.txt。
程序从 testfile.txt 读取源程序，将词法分析结果写入 output.txt。