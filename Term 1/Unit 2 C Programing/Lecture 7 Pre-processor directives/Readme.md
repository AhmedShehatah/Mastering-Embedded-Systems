# C Preprocessor directives

- Before a C program is compiled in a compiler, source code is processed by a program called preprocessor. This process is called preprocessing.

- Commands used in preprocessor are called preprocessor directives and they begin with “#” symbol.
  
  

## Compilers vs Interpreters

| Compilers                                 | Interpreters                  |
| ----------------------------------------- | ----------------------------- |
| Compiler reads the entire source          |                               |
| <br/>code of the program and converts     |                               |
| <br/>it into binary code. This process is |                               |
| <br/>called compilation.                  |                               |
| <br/>Binary code is also referred as      |                               |
| <br/>machine code, executable, and        |                               |
| <br/>object code.                         | Interpreter reads the program |
| <br/>source code one line at a time       |                               |
| <br/>and executing that line. This        |                               |
| <br/>process is called interpretation.    |                               |
| Program speed is fast.                    | Program speed is slow.        |
| One time execution.                       |                               |
| <br/>Example: C, C++                      | Interpretation occurs at      |
| <br/>every line of the                    |                               |
| <br/>program.                             |                               |
| <br/>Example: BASIC                       |                               |



## Preprocessors that C offers

- Macros like `#define`
- header file include like `#include <file name>` 
- conditional compilation like `#ifdef` `#endif` `#if` `#else` 
- other directives `#undef` `#pragma`
