# Functions

## Difference Between Variable Definition and declaration

- definition \* a variable is defined when the compiler generates instructions to allocate the storage
  of the variable.
- declaration
  _ a variable is declared when the compiler is informed that a variable exists along with its
  type. The compiler does not generate instructions to allocate the storage for the
  variable a that point.
  _ Variable can be declared many times in a program. But, definition can happen only one
  time for a variable in a program.
- A variable definition is also a declaration, but not all variable declarations
  are definitions
  _ Extern int x ; //declaration without definition, The variable was already defined
  somewhere else and it’s just recalled here
  _ int x ; //definition and declaration

## Function

```C
returnDataType functionName(Function Params) {
	returnValue
}
```

### Function Prototype

```C
int sum(int x, int y); // function prototype

int main(){
	return 0;
}

int sum(int x, int y){
	return x + y;
}
```

### Passing Values to function

- By value \* This method copies the actual value of
  an argument into the formal parameter
  of the function. In this case, changes
  made to the parameter inside the
  function have no effect on the
  argument.
- By Reference \* This method copies the address of an
  argument into the formal parameter. Inside
  the function, the address is used to access
  the actual argument used in the call. This
  means that changes made to the parameter
  affect the argument. (note: passing address takes 4 bytes from ram)

#### Importatnt Notes

- Arrays always passed by reference.

## Inline functions

compiler takes function and put it where you call it.

```C
intlne int fun(){
	return 1;
}
int main(){
	fun();
	return 0;
}

```

- Memory Layout Orgnizied in
  - Text segment
  - Data segment
  - Heap segment
  * Stack segment
  * Unmapped or reserved

### Text Segment

Text segment contain executable instructions
of your C program, its also called code segment.
This is the machine language representation of
the program steps to be carried out, including
all functions making up the program, both user
defined and system

### Data Segment

There are two sub section of this segment called initialized & uninitialized
data segment

- initialized

  - It contains both static and global data that are initialized with non-zero values.

- Uninitialized data (bss segment)
  - Uninitialized data segment is also called BSS segment.
    BSS stands for ‘Block Started by Symbol’ named after an ancient assembler operator.
    Uninitialized data segment contains all global and static variables that are initialized to zero
    or do not have explicit initialization in source code.

### Heap Segment

The heap segment is area where **dynamically** allocated memory resides.

### Stack Segment

The stack segment is area where local variables are stored. By saying local
variable means that all those variables which are declared in every function
including main( ) in your C program.

## Storage Classes In C

- The storage classes in C determine the

  - Scope of a variable
  - Life time of a variable
  - Visibility of a variable or function

- C Storage classes

  - Automatic
  - External
  - Static
  - Register

  # Section & Quiz Tricks

* Function Can't be defined in another function But **Function Prototype can be put inside another function in c99**

* if functions doen't have a return type compiler set to default whtich is int

```C
test()
{
    return 0;
}
```

- $sizeof$ function executied at **run time**

* default return value for int function is zero

```C
int test()
{
}
int main()
{
    printf("%d", test());// output: zero
}
```

- $exit()$ funciton terminates the program

```C
#include <stdio.h>
#include <stdlib.h>
int test()
{
    exit(1);
}
int main()
{
    test();
    printf("hello"); // will not execute this line
}
```

- array can be passed by value in one case if i put it inside a structure

* see this error (can't use return with ternary operator)

```C
int test()
{
    int a = 3, b = 5;
    (a > b) ? return a : return b; // error
}
```

- elipse operator $...$ enables you to pass any number of params to the function

```C
#include <stdio.h>
void test(int s, ...)
{
    printf("%d ", s);
}
int main()
{
    test(2, 3, 4, 5, 6, 6, 7);
    test(5, 6, 6, 76);
    // output: 2 5
}
```
