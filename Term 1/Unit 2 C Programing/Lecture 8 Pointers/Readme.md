# Pointers (A very Important Concept in embedded world)

***Pointer***: A pointer is a variable that *<u>holds a memory address.</u>*

***Pointer Size***: Pointers have a *<u>**fixed size**</u>* that depends on CPU architecture and OS.

- For 32Bit machine: pointer size =  4byte

- For 64Bit machine: pointer size = 8byte
  
  

***Pointer syntax***

```c
int* px;
// or 
int *px;

// there is no difference between them


// notice this
int *px,py; /// px is a pointer while py is not

```

 

**Unary increment operation for the pointer**

```c
int* px = 0x0;
px++; // px = 0x4
```

Important Notes

- Each time pointer is increamented or decreamented it points to the memory location of the next element of its base type e.g. if pointer from type `char` if pointer `char px = 0x0` and me made `px++` now `px = 0x1` and if it's from type `long long` then `px = 0x8` 

- There are only two arithmetic operations that you can use on pointers: <u>addition </u>and <u>subtraction</u>.  



- Notice this

- ```c
  int arr[10];
  arr++ // invalid array address is fixed
  ```







































