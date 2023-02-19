/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-19 15:09:00
 * @modify date 2023-02-19 15:09:00
 * @desc [EX 3 Reverse word]
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], r[100];
    printf("Enter String: ");
    gets(s);
    char n = strlen(s);
    for (char i = 0; i < n; i++)
        r[n - i - 1] = s[i];
    printf("Reversed String: %s", r);
}