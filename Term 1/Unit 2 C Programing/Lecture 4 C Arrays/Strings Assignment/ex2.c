/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-19 15:09:00
 * @modify date 2023-02-19 15:09:00
 * @desc [EX 2 Length of string]
 */
#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter String: ");
    gets(s);
    int i = 0;
    while (s[i++] != '\0')
        ;
    printf("Length of String: %d\r\n", i - 1);
}
