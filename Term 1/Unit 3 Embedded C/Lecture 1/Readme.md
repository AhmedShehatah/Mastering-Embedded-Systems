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
  
  -  Slow compilation time
  
  - Not debugging friendly

- Optimization level O3

- Full optimization of O2 + some more aggressive steps will be taken by the compiler.

- Slowest compilation time

- May cause bugs in the program

- Not debugging friendly
