/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-05-21 13:44:24
 * @modify date 2023-05-21 13:44:24
 * @desc EX 3
 */
#include "stdio.h"
#include "string.h"
int main()
{
    char text[50];
    gets(text);
    char *ptr = &text[strlen(text) - 1];
    while (ptr != text)
        printf("%c", *ptr), ptr--;
    printf("%c", *ptr);
}