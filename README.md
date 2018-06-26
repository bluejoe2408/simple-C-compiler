# C语言编译器

lex和yacc编写的c语言编译器

实现了C语言除了struct和指针几乎所有的语法。

## 运行

环境要求：flex bison g++11 python3

#### 中间代码生成

macOS命令行输入：
```
flex compiler.l
bison -vdty compiler.y
g++ -std=c++11 -o compiler tree.cpp Praser.cpp innerCode.cpp tools.cpp codeOptimize.cpp lex.yy.c y.tab.c
compiler test/test.c
```

#### 目标代码生成

进入objectcode文件夹，命令行输入
```
python objectcode.py
```
objectcode.py读取的源文件为inter.txt，inter.txt文件需要从中间代码innerCode.txt中拷贝，生成的mips汇编码在result.asm文件中

