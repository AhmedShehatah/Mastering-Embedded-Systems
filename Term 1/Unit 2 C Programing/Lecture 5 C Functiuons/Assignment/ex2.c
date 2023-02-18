/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-18 22:26:03
 * @modify date 2023-02-18 22:26:03
 * @desc [Factorial using recursion]
 */
#include <stdio.h>

int factorial(int n);
int main()
{
    printf("Enter A positive Int: ");
    int n;
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}