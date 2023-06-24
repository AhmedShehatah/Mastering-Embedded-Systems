# Lecture



### Typedef command

We use typedef command to create user defined data types. Common while using typedef to end the name with `_t`

```c
typedef unsigned int uint8_t;
```

### Header Protection

Let's study this case. If we have 2 files `a.h`,`b.h` and both include file `t.h` here is the content of three files

- `t.h`

```c
// t.h
typedef strucut {
    int x;
} test_t;
```

- `a.h`

```c
// a.h
#include "t.h"
void fun_a(test_t x);
```

- `b.h`

```c
// b.h
#include "b.h"
void fun_b(test_t y);
```

now in `main.c` we include `a.h` , `b.h`

```c
#include "stdio.h"
#include "a.h"
#include "b.h"
int main(){
    return 0;
}
```

if we run this code we will get an error because in pre-compile process we will get this code:-

```c
typedef struct
{
    int x;
} test_t;
void fun_a(test_t x);
typedef struct
{
    int x;
} test_t;

void fun_b(test_t x);
int main()
{
    return 0;
}


```

so the problem is the content of `t.h` are duplicated in `main.c` file we get `test_t` defined twice. To solve this issue we make use of `#ifndef` so we change the content of each file to the next:- 

- `a.h`

```c
#ifndef A_H_
#define A_H_
#include "t.h"
void fun_a(test_t x);
#endif
```



- `b.h`

```c
#ifndef B_H_
#define B_H_

#include "t.h"
void fun_b(test_t x);
#endif
```



- `t.h`

```c
    
#ifndef T_H_
#define T_H_
typedef struct
{
    int x;
} test_t;
#endif
```

so in this case we avoid duplicating files while including it.



### Optimization

The Optimization is a series of actions taken by the compiler on your program’s code generation process to reduce: 

- Number of instructions (code space optimization

- Memory access time (time space optimization)

- Power consumption

Optimization level

- Optimization level O0
  
  - No optimization
  
  - Not recommmeneded for productions if you have limited code and ram space
  
  - Has fastest compilation time
  
  - This is debugging friendly and used during evelopment
  
  - A code which work with O0 may not work
    with O0+ optimization levels. 
    
    - Code needs to be verified again applying higher optimization levels.

- Optimization level O1
  
  - Moderate optimization to decrease memory access and code space

- Optimization level O2
  
  -  Full optimization
  
  - Slow compilation time
  
  - Not debugging friendly

- Optimization level O3

- Full optimization of O2 + some more aggressive steps will be taken by the compiler.

- Slowest compilation time

- May cause bugs in the program

- Not debugging friendly
  
  

### Volatile keyword

Syntax

```c
volatile int x;
int volatile x; // there is no difference between two of them
```

 the `volatile` keyword is used to indicate to the compiler that a variable's value may change at any time, without the compiler being able to predict when the change will occur. For example, consider a program that reads data from a hardware device and stores it in a variable. If the variable is not declared as `volatile`, the compiler may optimize the code by caching the value of the variable in a register, assuming that the variable's value will not change until the next time it is accessed. However, if the hardware device updates the variable's value in the meantime, the program may read an incorrect value from the cache.

- No optimization will happen on   `volatile` variables
  
  

Notice the difference between these syntax

```c
int volatile *ptr; // here the value of ptr is volatile
volatile int *ptr;// the same as the first one
int* volatile ptr; // here the address of ptr is volatile
```



### Accessing Registers

there are three ways to access Registers

- Solution 1

```c
volatile int *P_Reg;
P_Reg = (vloatile int *) 0x332;
*P_Reg = 0x32123E3;
```

the main issue with this solution is the big code size. Imagine if we have 100 registers so we need at least 300 lines.



- Solution 2

```c
*((volatile int *)(0x332)) = 0x32123E3;
// or
#define MY_REGISTER *((volatile int *)(0x332))
// then we use MY_REGISTER = 0X32432EA;
```

This solution is common between embedded systems engineers



- Solution 3

```c
typedef union {
    vuint32_t ALL_ports;
    struct {
        vuint32_t PORTA:8 ;
        vuint32_t PORTB:8 ;
        vuint32_t PORTC:8 ;
        vuint32_t PORTD:8 ;
    } SIU_fields;

} SIU_R;


/////-----------------

volatile SIU_R* PORTS = (volatile SIU_R* ) 0x306100 ; /*Address*/
PORTS ->ALL_ports =0xFFFFFFFF; // access all BITS
PORTS ->SIU_fields.PORTA = 0xFF ;
```

Also this solution is common between embedded systems engineers





### Const with Volatile

```c
uint32_t volatile * const Preg1 = (uint32_t) 0xFFFF0000;
/**
* constant pointer with volatile data (can't change address of pointer but change can data of pointer)
*/
```

```c
uint32_t const volatile * const Preg2 = (uint32_t) 0xFFFF0004;
/**
* volatile + constant means that you can't change data from code but the hardware can
*/
```





### tool-chain

The tool-chain consists of a compiler, assembler, linker, debugger, libraries and a number of helper programs.

there are two types of tool-chain

- native tool-chain
  
  - This toolchain runs on your workstation and generates code for your workstation, usually x86

- cross tool-chain
  
  - This toolchain runs run on your workstation but generate code for your target.
    
    

## Compliation Process

- Preprocessing stage
  
  - `main.c` & `startup.s` converted to `main.i` & `startup.i`

- code Generation Stage
  
  - `.i` files converted into assmbely files `.s` and this stage based on processor arch because each arch has its own assembly

- Assmbler Stage
  
  - `.s` files converted to binary files `.o` these files called relocatable object files because it has virtual addresses no the real one
  
  - the real addresses are got from the linker script

- Linker Stage
  
  - links `.lib` files with `.o` files with help of linker script





## How to make static lib

first create  a `.o ` file for your library

```bash
$ gcc -c can.c -o can.o
```

then create the lib file 

```bash
$ ar rcs lib_name.a can.o
```

finally to execute the files

```bash
$ gcc main.c lib_name.a -o main.exe
```
