# Pointers (A very Important Concept in embedded world)

***Pointer***: A pointer is a variable that *<u>holds a memory address.</u>*

***Pointer Size***: Pointers have a *<u>**fixed size**</u>* that depends on CPU architecture and OS.

- For 32Bit machine: pointer size =  4byte

- For 64Bit machine: pointer size = 8byte
  
  

## ***Pointer syntax***

```c
int* px;
// or 
int *px;

// there is no difference between them


// notice this
int *px,py; /// px is a pointer while py is not

```





## **Unary increment operation for the pointer**

```c
int* px = 0x0;
px++; // px = 0x4
```

Important Notes

- Each time pointer is increamented or decreamented it points to the memory location of the next element of its base type e.g. if pointer from type `char` if pointer `char px = 0x0` and me made `px++` now `px = 0x1` and if it's from type `long long` then `px = 0x8` 

- There are only two arithmetic operations that you can use on pointers: <u>addition </u>and <u>subtraction</u>.  
  
  

- Notice this
  
  ```c
  int arr[10];
  arr++ // invalid array address is fixed
  ```
  
  ## **Pointer to Strucutre**
  
  there is no difference between normal pointer and pointer to struct the only difference is when you access pointer struct you use `pointer-> member` 
  
  ```c
  #include <stdio.h>
  struct STest
  {
      int age;
      int salary;
  } test;
  int main()
  {
      struct STest *ptest = &test;
  
      ptest->age; // notice this line
  
      return 0;
  }
  ```
  
  

## **Generic Pointers or Unknown Pointers**

  Generic pointer can point to different data types as shown blew

```c
#include <stdio.h>
int main()
{
    int x = 10;
    double y = 2.5;
    void *p;
    p = &x;
    *(int *)p = 3;
    printf("%d ", *(int *)p);
    p = &y;
    *(double *)p = 5.2;
    printf("%llf", *(double *)p);
    return 0;
}


```

## **Pointer to Pointer**

From its title it's a pointer that points on another pointer 

```c
#include <stdio.h>
int main()
{
    int x = 5;
    int *px = &x;    // pointer
    int **ppx = &px; // pointer to pointer
    return 0;
}

```



## **NULL Pointers or Unsigned Pointers**

If the pointer is unassigned it will contain an invalid address, it is unsafe to use an unassigned pointer, normally the program will crash. To avoid using unassigned pointers, all pointers must hold a valid address, if not it must hold a zero value. Sometimes zero value called (NULL).

```c
#include <stdio.h>
int main()
{
    int *px = NULL;
    if (px != NULL)
        printf("pointer initialized");
    else
        printf("Pointer not initialized");
    return 0;
}

```



## Pointer To Function

```c
#include <stdio.h>

/**
 * syntax of pointer to function
 * first type of function return (void, int, double, etc)
 * then (* pointer name)
 * finally (arguments of the function)
 */
void (*GP_test)();

void test()
{
    printf("Test");
}

int main()
{
    GP_test = test;
    GP_test();
    return 0;
}

```



# **Pointer Tricks**

## How To Read Complex Pointers

the easiest way to read complex pointers is clockwise rule. Start from pointer name and turn in clockwise e.g.

```c
char (* ptr) [5];
// ptr is a pointer to an array has 5 elements of type char

void ( * ( *f [] ) () ) ()
// f is an array of pointer to a function that returns a pointer to a function returns void
```



## **Const With Pointers**

Look at `*` there is two conditions if `const` after of before the the `*`

- After: the pointers is the constant one

- before: the value is the constant one

| Example              | Const Value | Const Pointer |
| -------------------- | ----------- | ------------- |
| char* int ptr        | No          | No            |
| const int* ptr       | Yes         | No            |
| int const* ptr       | Yes         | No            |
| int* const ptr       | No          | Yes           |
| const int* const ptr | Yes         | Yes           |



## Major Difference Between Arrays & Pointers

- Sizeof operator
  
  - Array: `sizeof(arr)` returns the amount of memory used by all elements in array
  
  - Pointers: `sizeof(ptr)` returns 8byte if x64 cpu or 4byte if x32 cpu

- & operator
  
  - Array: `&arr` equals `&arr[0];` 
  
  - Pointers: `&ptr` returns where the pointer is stored in memory.

- a string literal initialization of a character array
  
  - `char array[] = “abc”` sets the first four elements in array to ‘a’, ‘b’, ‘c’, and ‘\0’
  
  - `char *pointer = “abc”` sets pointer to the address of the “abc” string (which may be stored in read-only memory and thus unchangeable)

- Pointer variable can be assigned a value whereas array variable cannot be.

- Arithmetic on pointer variable is allowed.
  
  - `ptr++; /*Legal*/`
  
  - `arr++; /*Illegal*/`

## Popular Names of Pointers

- Null Pointer
  
  - Pointer which is pointing to nothing or Pointers which is initialized to NULL like `double* ptr = NULL;`

- Dangling Pointer
  
  - Dandling Pointer arise when an object is deleted or de-allocated Without modifying the value of the pointer.

- Generic Pointer
  
  - The pointer which is define by `void* ptr;`

- Wild Pointer
  
  - pointer in C that has not been initialized till its first use is knows as the wild pointer.

- Complex Pointer 
  
  - like `void ( * ( *f [] ) () ) ()`

- Near, Far, Huge Pointers
  
  - This is not standard C syntax. This was an added feature for < 32-bit compilers.
  
  
