# C Preprocessor directives

- Before a C program is compiled in a compiler, source code is processed by a program called preprocessor. This process is called preprocessing.

- Commands used in preprocessor are called preprocessor directives and they begin with “#” symbol.
  
  

## Compilers vs Interpreters

| Compilers                                                             | Interpreters                                                 |
|:--------------------------------------------------------------------- |:------------------------------------------------------------ |
| Compiler reads the entire source                                      |                                                              |
| code of the program and converts it into binary code. This process is |                                                              |
| called compilation.                                                   |                                                              |
| Binary code is also referred as machine code, executable, and         |                                                              |
| object code.                                                          | Interpreter reads the program source code one line at a time |
| and executing that line. This                                         |                                                              |
| process is called interpretation.                                     |                                                              |
| Program speed is fast.                                                | Program speed is slow.                                       |
| One time execution Example: C, C++                                    | Interpretation occurs at every line of the                   |
| program.                                                              |                                                              |
| Example: BASIC                                                        |                                                              |



## Preprocessors that C offers

- Macros like `#define`
- header file include like `#include <file name>` 
- conditional compilation like `#ifdef` `#endif` `#if` `#else` 
- other directives `#undef` `#pragma`
  
  

## Macros

Macros are text replacement. The compiler replaces each `#define` with its value in preprocessing stage i.e when generating `.i` file

```c
#include<stdio.h>
#define pi 3.14
int main(){
    printf("%lf",pi); // in .i file it will be like printf("%lf",3.14);
}
```

- Another way to define macros

```c
#define sum(a, b) (a + b)
int main(){
    int x = sum(4,5); // in .i file it will be like int x = 4 + 5
}
```

- _____VA_ARGS______

```c
#define addNumbers(...) /// ... means anything else and it enbales passing any number of variables.
#define add(...) __VA_ARGS__  // __VA_ARGS__ all arguments can be accessed by this identifier.
```

- Important Notes

```c
#hello // compiler converts this to "hello"
a ## b // compiler concatnate this ab
```

```c
#define height 100
#undef height // this line undefine height
#define height 600 // after undef you can define height again
```

## Conditional Directives



`#ifdef` execute code if the defined macro is existed 

```c
#ifdef SOME_DEFINED_MACRO
    printf("SOME_DEFINED_MACRO is existed");
#else
    printf("SOME_DEFINED_MACRO is not existed");
#endif
```

`#ifndef` execute code if the defined macro is not existed

```c
#ifndef SOME_DEFINED_MACRO
    printf("SOME_DEFINED_MACRO is not existed");
#else
    printf("SOME_DEFINED_MACRO is existed");
#endif
```

`#if` execute code if what comes after `#if` is true

```c
#if (true)
    // do something
#else 
    // do something
#endif
```

## Pragma

- Pragma is implementation specific directive i.e each pragma directive has different implementation rule and use.

- There are many type of pragma directive and varies from one compiler to another compiler.

- If compiler does not recognize particular pragma the it simply *ignore* that pragma statement without showing any error message and execute the whole program assuming this pragma statement is not present.

### #pragma startup & #pragma exit

#pragma startup [priority]
#pragma exit [priority]

- Where priority is optional integral number.

- For user priority varies from 64 to 255 

- For c libraries priority varies from 0 to 63

- Default priority is 100.

Pragma startup always execute the function before the main function pragma exit always execute the function after the main function. Function declaration of must be before startup and exit pragma directives and function must not take any argument and return void. If more than one startup directive then priority decides which will execute first.

- startup:
   Lower value: higher priority i.e. functions will execute first. If more than one exit directive then priority decides which will execute first.

- exit:
   Higher value: higher priority i.e. functions will execute first.
  
  

## Macros Vs Functions

| Macros                                                   | Functions                                              |
| -------------------------------------------------------- | ------------------------------------------------------ |
| Macro is Preprocessed                                    | Function is Compiled                                   |
| No Type Checking                                         | Type Checking is Done                                  |
| Code Length Increases                                    | Code Length remains Same                               |
| Speed of Execution is Faster                             | Speed of Execution is Slower                           |
| Before Compilation macro name
is replaced by macro value | During function call , Transfer of Control takes place |
| Useful where small code appears many time                | Useful where large code appears many time              |
| Generally Macros do not extend
beyond one line           | Function can be of any number of lines                 |





# Type Qualifiers in C

- Const 

- Voltaile

Applying these qualifiers to variable declaration is called qualifying the declaration. The qualifier allows the programmer to add some features to a variable.



The `const` type qualifier in C is used to enforce  *read only* features on variables.

- Const Syntax

```c
int main(){
    const int x = 10; 
    int const y = 10;
    // there is no difference between int const and const int
}
```



- Tricky question if we want to change the value of const variable what should we do?

```c
int main(){
    const int x = 10;
    int* px = &x;
    *px = 5;
    // like this we can change the value of const variable
}
```

But Notice this

```c
const int x = 10;
int main(){
    int* px = &x;
    *px = 5;
    // this code gives an segmenation error becasue global variables are stored in rom or flash memory
}
```



### Important Notes

- const doesn’t mean that the value never changes, its only programming safety feature to ensure that the programmer shouldn’t try to modify the value.

- All const variables are stored in memory in the same way as standard variables. 

- They are placed in RAM. The only difference, in this sense, is the read-only feature.

- All global const variables are stored in ROM or FLASH memory, This also further depends on linker script rules and the hardware on which code runs.

- The flash memory of the micro-controller is indeed write-protected, that means the operation won’t have any effect

- In the PC, the program crashes because we’re trying to write in the write protected section
