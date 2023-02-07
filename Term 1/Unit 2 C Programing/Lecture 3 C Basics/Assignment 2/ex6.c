/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 15:14:50
 * @modify date 2023-02-07 15:14:50
 * @desc EX 6 sum from 1 to n
 */
#include <stdio.h>
int main()
{
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);
    printf("sum = %d", n * (n + 1) / 2);
}