/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 15:14:50
 * @modify date 2023-02-07 15:14:50
 * @desc EX 5 is Alpha
 */
#include <stdio.h>
int main()
{
    printf("Enter Charchter: ");
    char x;
    scanf("%c", &x);
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        printf("%c is alphabet", x);
    else
        printf("%c is not alphabet", x);
}
