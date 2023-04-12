## Aligned and un-aligned data access on structs

# Structures & Unions & Enums

## Structures

**Structure** is a user defined data type which hold or store heterogeneous data item or
element in a singe variable. It is a Combination of primitive and derived data type.

### Important Notes

* Defining a struct doesn't allocate memomry in ram.

* It's a must to prefix struct name with capital S. 

* Prefered to prefix structs with capital S in other versions of c.

* if any value of struct is initalized all other values are initalized by zero.

* init struct methods

```C
struct SCar x = {"toyota", 12, 41};
struct Scar x = {0};
```

### Bit field

It's a c feature allows to access a single bit.

#### Important notes

* A bit-field must be a member of a _structure or union_. It defines how
  long, in bits, the field is to be.
* you cannot take the address of a bit-field.
* Bit-fields cannot be arrayed.
* You cannot know, from machine to machine, whether the fields will run from right to left or from left to right. have some machine dependencies

Bit Field syntax

```c
struct Flags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
    unsigned int unused : 29;
};
```

## Aligned and un-aligned data access on structs

* Notice This Line of code and compare it with previous knowledge
  
  ```c
  struct SPerson {
      unsigned char weghit;
      unsigned int age;
  }
  // Size of this struct = 8 bytes not 5 bytes
  ```

The reason of this result that because complier aims to fastest execution time so it follows aligned method 

### Aligned access

compiler generates instructions to store variables in natural size boundaries. Let's take the previous code as an example and show why it's 8 bytes not 5 suppose we made an object from this struct and weghit = 0xAA, age = 0xFFFFFFFF

these two variables are stored in memory like this:

| Memory | Value |
|:------:|:-----:|
| 0x000  | AA    |
| 0x001  | 0     |
| 0x002  | 0     |
| 0x003  | 0     |
| 0x004  | FF    |
| 0x005  | FF    |
| 0x006  | FF    |
| 0x007  | FF    |

weghit is stored in the first byte of the memory no problem with that, but when we come to age compiler has two instructions either store byte by byte or store 4 byte at once of course it will choose 4 bytes at once becase it will execute one instruction not four. but it deals with memory in a special way.



process of putting zeros is called padding

### un-aligned access

the oppesite of aligned access it stores them byte after byte regardless natural size boundary so it will store them like this

| Memory | Value |
| ------ | ----- |
| 0x000  | AA    |
| 0x001  | FF    |
| 0x002  | FF    |
| 0x003  | FF    |
| 0x004  | FF    |



to compare between aligned and un-aligned access -> aligend access is more effecient in execution time un-aligned access is more effecient from memory size. but it has bigger code size than aligned access



un-aligned access called packing

to enable packing in structs we use keywords that are dependent on compiler

- #pragma pack(1)

- #pragma pack(push, 1)

- after struct block "\_\_attrbuite\_\_ ((packed))"

## Enum

An enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keyword enum is used.



```c
enum days {sat, sun, mon, thu, wen, tue, fri}; 
// if we want to specify int values to some attrs 
enum prices {milk = 30, bread = 10};

```

Important Notes

- values of enums are unique

- size of enum is 4 bytes

notice this

```c
enum things {thing1 = 0, thing2 = 1, thing3 = -1, thing4}
// value of thing4 can't be 0 it will be the first available positive value which is 2
```





## Unions

Union is a pecial data type that supports different overlapped data types.

- Union size equals to the size of the biggest type
  
  ```c
  union UNUMValue {
      int int_value;
      float float_value;
      double double_value;
  }
  ```

union holds only one data type at the same time if we used value of int we can't you value of double, and if we used value of double value of int are overwriten.
