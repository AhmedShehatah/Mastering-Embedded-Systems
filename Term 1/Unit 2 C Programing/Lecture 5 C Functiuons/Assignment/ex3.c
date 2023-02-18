/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-18 22:58:58
 * @modify date 2023-02-18 22:58:58
 * @desc [Reverse using recursion]
 */
#include <stdio.h>
#include <string.h>
char str[20];
void printReversed(char ch, int i);
int main()
{
    printf("Enter A word: ");
    gets(str);
    printReversed(str[strlen(str) - 1], strlen(str) - 1);
    return 0;
}

void printReversed(char ch, int i)
{
    if (i == 0)
    {
        printf("%c", ch);
        return;
    }
    else
    {
        printf("%c", ch);
        printReversed(str[i - 1], i - 1);
    }
}
