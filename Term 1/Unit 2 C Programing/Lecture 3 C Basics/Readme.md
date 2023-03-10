# C Basics

Summary for Lecture 3

## Compilation Process

Let's suppose we have main.c file. This file passes on four stages (Preproccessing, Compilation, Assemble, Linking).

1. Preproccessing Stage
   - In this step each include line replaced by its header file
   - C files are converted to .i files.
2. Compilation Stage
   - .i files are converted to .s (assembly) files by the compiler.
3. Assemble Stage
   - .s files are converted to .o (binary or machine) code by the assembler.
4. Linking Stage
   - (.lib, .a) files are linked with our main.c file to give functions prototypes its definitions
   - then Generating the executable program (.exe) file.

## Native & Cross Toolchain

- Native toolchain: Installed on a processor architecture and run on the same architecture
  e.g. installed on ARM and run on also ARM.
- Cross toolchain: Installed on a processor architecture and run on another architecture
  e.g. installed on Intel and run on ARM.

## Naming Variables

variable names can be any set of letters and numbers of length up to _256_ characters.

Some Constrains:

1. Don't Start with numbers (5age, 3name, etc).
2. Don't use spaces or special char except "\_" (nam e, na-me, etc).
3. Don't use reserved keywords in C like (void, int, char).

Examples of valid naming (name, hello5, snake_case_naming).

## Data Types

- Primitive/Basic Data types
  - Integer Values
    - Signed
    - Unsigned
  - Real Values : Contains decimal (double) like 10.5
- Derived Data Types
  - Arrays
  - Structure
  - Union
  - Pointer
- User Defined Data Types
  - typedef
  - enum

<img src="https://techbeamers.com/wp-content/uploads/2019/01/C-Datatypes-Range-and-Sizes.png"/>

### Most Used Technieques between developers

Files cut into 3 halves first contains global variables, headers, macros, prototypes
second half contains main function, third half contain other functions

some developers prefere to replace second by third half

## Implicit & Explicit Type Conversion

- Implicit is done automatically by the compiler small type converge to big type int -> float, int -> long
- Explicit is done by user like assigning float value to int value or vice versa.

## Hierarchy of Operations

1. \*, /, %
2. +, -
3. =

## Input Output (I/O) in c

```C
// To show data in the console
printf("Your message here");
// To get data from console
int x;
scanf("%d",&x);
```

Note That to read or write a value of a variable we use % and we use & to assign a value to a variable from console.

### cleaning buffer

```C
fflush(stdout);
```

## C Specifiers

<img src="https://www.crackyourinterview.com/images/Img264217-0.png"/>

## C Operators

<img src="https://www.desy.de/gna/html/cc/Tutorial/img22.gif"/>

### Set, Clear, or toggle bit

```C
// to set 1
x |= 1<<n;
// to clear bit (set 0)
x &= ~(1<<n);
// to toggle bit
x ^= 1<<n);
```

### inline condition

```
(condition)? command if true : command if false;
```

### goto Statement

```C
labelname:
	// c code 1
	// c code 2
	goto labelname;
```

# Basics Section & Quiz Tricks

// ToDo Basics Quiz Tricks

## Conditions & loops Section Tricks

Notice this code

```C
	int x = 5;
    switch (x)
    {
    case 1:
        printf("Case 1\n");
    default:
        printf("Default\n");
    }
    // in this case the output should be: Defalut
    switch (x)
    {
    default:
        printf("Default\n");
    case 1:
        printf("Case 1\n");
    }
	// in this case the output should be Default \n Case 1
```

That means the position of default in code affects who code works

- printf returns the number of printed values

```C
printf("%d", printf("ahmed\n"));
// the output should be: 6
```

- switch ignores any statements outside its cases

```C
  int x = 10;
    switch (x)
    {
        printf("out\n");// this line will be ignored and will not be printed
    default:
        printf("Default\n");
    case 1:
        printf("Case 1\n");
    }
```

- note that one equal in conditions evaluates no problem

```C
  int x;
    if (x = 0)
        printf("hello");
    else
        printf("world");

// should print world because now x =0 so like we say if(0)
```

- Compiler always consider fractions as double not float

```C
    float x = 0.7;
    if (0.7 > x)
        printf("Hello");
    else
        printf("Hi");

    // output should be hello because 0.7 is double which is greater than float
```

- ++ has higher priority than (>,<,==,>=,<=)

```C
int x = 1;
    if (x < ++x)
        printf("< has higher priority");
    else
        printf("++ has higher priority");

    // output: ++ has higher priority
```

- Notice this type of decleration

```C
	int x, y;
    x = y = 3, 4;
    printf("%d %d", x, y);
	// output: 3 3 => assign it to the first value and ignores the others but still evaluates them
	 int x, y;
    x = y = (3, 4);
    printf("%d %d", x, y);
	// output: 4 4 assign it to the last value
```

- notice this syntax

```C
while (2, 0)
	printf("hello");
// it takes the last value so it will not enter the loop
```
