## 编译器框架说明
本编译器框架中需要填充的部分用“TODO”标注，以下是文件结构说明：
```
COMPILER-LAB/
│
├── include/  头文件目录
│   ├── AsmBuilder.h            用于将中间表示（IR）转换为汇编代码
│   ├── Ast.h                   定义抽象语法树（AST）的节点类  /** 语法分析 (无TODO)**/
│   ├── BasicBlock.h            定义基本块类  /** 语法分析 (无TODO)**/
│   ├── common.h                包含宏定义、类型定义和全局变量
│   ├── Function.h              定义函数类
│   ├── Instruction.h           定义指令类，用于表示中间表示（IR）中的指令
│   ├── IRBuilder.h             定义中间表示构建器类
│   ├── LinearScan.h            定义线性扫描寄存器分配算法的类
│   ├── LiveVariableAnalysis.h  定义活跃变量分析的类
│   ├── MachineCode.h           定义机器代码类
│   ├── Operand.h               定义操作数类
│   ├── SymbolTable.h           定义符号表类  /** 语法分析 无TODO**/
│   ├── Type.h                  定义类型类  /** 语法分析 无TODO**/
│   └── Unit.h                  定义编译单元类
│
├── src/  源文件目录
│   ├── Ast.cpp                   实现抽象语法树节点类的方法  /** 语法分析 TODO**/
│   ├── BasicBlock.cpp            实现基本块类的方法  /** 语法分析 TODO**/
│   ├── Function.cpp              实现函数类的方法
│   ├── Instruction.cpp           实现指令类的方法
│   ├── lexer.l                   定义词法规则的lex文件，用于生成词法分析器
│   ├── LiveVariableAnalysis.cpp  实现活跃变量分析类的方法
│   ├── MachineCode.cpp           实现机器代码类的方法
│   ├── main.cpp                  项目主入口
│   ├── Operand.cpp               实现操作数类的方法
│   ├── parser.y                  定义语法规则的yacc文件  /** 语法分析 TODO**/
│   ├── SymbolTable.cpp           实现符号表类的方法  /** 语法分析 TODO**/
│   ├── Type.cpp                  实现类型类的方法  /** 语法分析 无TODO**/
│   └── Unit.cpp                  实现编译单元类的方法
│
└── sysyruntimelibrary/  运行时库目录
│   ├── libsysy.a  静态链接库文件，包含运行时支持函数
│   ├── sylib.c    运行时库的源文件，实现运行时支持函数
│   └── sylib.h    运行时库的头文件，声明运行时支持函数的原型
│
├── Makefile  用于编译整个项目
│
└──README.md
```

## 编译器命令
```
Usage：build/compiler [options] infile
Options:
    -o <file>   Place the output into <file>.
    -t          Print tokens.
    -a          Print abstract syntax tree.
    -i          Print intermediate code
    -S          Print assembly code
```

## VSCode调试

提供了VSCode调试所需的`json`文件，使用前需正确设置`launch.json`中`miDebuggerPath`中`gdb`的路径。`launch.json`中`args`值即为编译器的参数，可自行调整。

## Makefile使用

* 修改测试路径：

默认测试路径为test，你可以修改为任意要测试的路径。我们会在检查作业之前将测试代码发给大家。

如：要测试a下所有sy文件，可以将makefile中的

```
TEST_PATH ?= test
```

修改为

```
TEST_PATH ?= test/a
```

* 编译：

```
    make
```
编译出我们的编译器。

* 运行：
```
    make run
```
以example.sy文件为输入，输出相应的汇编代码到example.s文件中。

* 测试：
```
    make testL
```
option: testL, testP, testICG, testTCG
该命令会搜索TEST_PATH目录下所有的.sy文件，逐个输入到编译器中，生成相应的汇编代码.s文件。你还可以指定测试目录：
```
    make testL TEST_PATH=dirpath
```
* 批量测试：
```
    make test
```
对TEST_PATH目录下的每个.sy文件，编译器将其编译成汇编代码.s文件， 再使用gcc将.s文件汇编成二进制文件后执行， 将得到的输出与标准输出对比， 验证编译器实现的正确性。错误信息描述如下：
|  错误信息   | 描述  |
|  ----  | ----  |
| Compile Timeout  | 编译超时， 可能是编译器实现错误导致， 也可能是源程序过于庞大导致(可调整超时时间) |
| Compile Error  | 编译错误， 源程序有错误或编译器实现错误 |
|Assemble Error| 汇编错误， 编译器生成的目标代码不能由gcc正确汇编|
| Execute Timeout  |执行超时， 可能是编译器生成了错误的目标代码|
|Execute Error|程序运行时崩溃， 可能原因同Execute Timeout|
|Wrong Answer|答案错误， 执行程序得到的输出与标准输出不同|

具体的错误信息可在对应的.log文件中查看。

* GCC Assembly Code
```
    make gccasm
```
使用gcc编译器生成汇编代码。

* 清理:
```
    make clean
```
清除所有可执行文件和测试输出。
```
    make clean-test
```
清除所有测试输出。
```
    make clean-app
```
清除编译器可执行文件。