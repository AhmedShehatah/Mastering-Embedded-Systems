/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-18 22:58:58
 * @modify date 2023-02-18 22:58:58
 * @desc [power using recursion]
 */
#include <stdio.h>

int power(int a, int b);
int main()
{
    int a, b;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number: ");
    scanf("%d", &b);
    printf("%d^%d = %d", a, b, power(a, b));
}
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int p = power(a, b >> 1);
    return (b & 1) ? p * p * a : p * p;
}