# Arrays && Strings

## Arrays

### Syntax

```C
	datatype arrayName[cont int] = {};
```

### Imprtant Notes

- Size of array must be const integer not a variable.
- Arrays Zero based index.
- Array elements are stored in sequential places in memory.
- Array name is equvalent to the address of the first element of the array.

### Array initialization

```C
	datatype arrayname[size] = {element1, element 2, element 3,..., element size-1};
	// or
	datatype arrayname[] = {element1, element 2, element 3,..., element n};
```

## 2D Arrays

```C
	dataype arrayName[n][m];
```

where $n$ number of rows and $m$ number of coloumns.

### Important Notes

- Elements are stored in memory row by row that means (x[0][0] then x[0][1] ... x[0][m-1] then x[1][0] and so on).
- &x[1] equvalent to adress of x[1][0],

### 2D Array initialization

```C
	datatype arrayname[n][m] = {
		{x11, x12, x13},
		{x21, x22, x23},};
```

## Strings

there is no "String" keyword in C instead we use array of char

```C
char hello[] = {'h', 'e', 'l', 'l', 'o',0};
char hello1[] = {"hello"};
char hello2[] = "hello";
// second or third method adds null terminator automatically.
```

### Important Notes

- printing string using %s stops when it finds \0 (null) so if we put \0 in the middle it will stop in the middle.
- %s doesn't take spaces in input.

to take input with whitespaces we use gets

```C
char text[];
gets(text);
```

```C
#include <stdio.h>
#include <string.h>
int main(){
	char a[20] = "Ahmed Shehatah";
	char b[20];
	strcpy(b,a);// copies a content and pastes it into b
	strlen(a); // returns number of chars untill first null
	strcut(a, "abdulghany); // equals ==> a+ "abdulghany"
	strlwr(a); // make all chars lowercase
	strup(a); // makes all chars uppercase

	strcmp(a,b); /// stricmp(a,b) ignores capital and small
	/**
	* if a==b returns 0
	* if a>b (alphaptically) returns 1
	* if a<b returns -1
	*/


	char num[] = "1025";
	atoi(num); // converts array to int atof -> to float

	return 0;
}
```

# Section & Quiz Tricks

- can't compare strings using its name

```C
	char str1[] = "Hello";
    char str2[] = "Hello";
    if (str1 == str2) // this means is location of str1 equals to location of str2 ?
        printf("Equals");
    else
        printf("Not equal");
    // output: Not equal
```

- standard in c in arrays if we initilized one elements the others should be zero

```C
int x[5] = {3};
for (int i = 0; i < 5; i++)
    printf("%d ", x[i]);
// output: 3 0 0 0 0 0
```

- (&str + 1) it doesn't go to next element it goes to next value after the string or array finishes

```C
    char s[] = "hello";
    printf("%s", &s + 2);
    // this code prints garbage value
```

- notice this

```C
 	int arr[5] = {1, 2, 3, 4, 5};
    printf("%d", 1 [arr]);
    // arr[i] == i[arr]
```

- notice this

```C
    printf(6 + "Hello Ahmed");
    // output: Ahmed
    // it's the same as printf("%s", str +6)
```

- comma operator in printf

```C
    printf(("ahmed", "Shehatah")); // with ()
    // output: Shehatah
    printf("ahmed", "Shehatah"); // without ()
    // output: ahmed
```
