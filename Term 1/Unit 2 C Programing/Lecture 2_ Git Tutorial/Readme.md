# C Basics
Summary for Lecture 3
## Compilation Process
Let's suppose we have main.c file. This file passes on four stages (Preproccessing, Compilation, Assemble, Linking).

1. Preproccessing Stage
	* In this step each include line replaced by its header file
	* C files are converted to .i files.
2. Compilation Stage
	* .i files are converted to .s (assembly) files by the compiler.
3. Assemble Stage
	* .s files are converted to .o (binary or machine) code by the assembler.
4. Linking Stage
	* (.lib, .a) files are linked with our main.c file to give functions prototypes its definitions
	*  then Generating the executable program (.exe) file.

## Native & Cross Toolchain
* Native toolchain: Installed on a processor architecture and run on the same architecture
 e.g. installed on ARM and run on also ARM.
* Cross toolchain: Installed on a processor architecture and run on another architecture 
e.g. installed on Intel and run on ARM.

## Naming Variables
variable names can be any set of letters and numbers of length up to *256* characters.

Some Constrains:

1. Don't Start with numbers (5age, 3name, etc).
2. Don't use spaces or special char except "_" (nam e, na-me, etc).
3. Don't use reserved keywords in C like (void, int, char).

Examples of valid naming (name, hello5, snake\_case\_naming).


## Data Types
* Primitive/Basic Data types
	* Integer Values
		* Signed
		* Unsigned
	* Real Values : Contains decimal (double) like 10.5
* Derived Data Types
	* Arrays
	* Structure
	* Union
	* Pointer
* User Defined Data Types
	* typedef
	* enum

<img src="https://techbeamers.com/wp-content/uploads/2019/01/C-Datatypes-Range-and-Sizes.png"/>


### Most Used Technieques between developers
Files cut into 3 halves first contains global variables, headers, macros, prototypes
second half contains main function, third half contain other functions

some developers prefere to replace second by third half

## Implicit & Explicit Type Conversion
* Implicit is done automatically by the compiler small type converge to big type int -> float, int -> long
* Explicit is done by user like assigning float value to int value or vice versa.

## Hierarchy of Operations
1. *, /, %
2. +, -
3. =

## Input Output (I/O) in C
```ruby
require 'redcarpet'
markdown = Redcarpet.new("Hello World!")
puts markdown.to_html
```
