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
    int n, fact = 1;
    scanf("%d", &n);
    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
            fact *= i;
        printf("Factorial = %d", fact);
    }
    else
        printf("Error!!!! Factorial of a negative number doesn't exist");
}