/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-18 00:22:02
 * @modify date 2023-02-18 00:22:02
 * @desc [EX 1 Sum of two matreces]
 */
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2];
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("Enter a%d%d: ", i + 1, j + 1), scanf("%d", &a[i][j]);
    printf("\nEnter the elements of 2nd matrix\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("Enter b%d%d: ", i + 1, j + 1), scanf("%d", &b[i][j]);
    printf("\nsum of matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d   ", a[i][j] + b[i][j]);
        printf("\n");
    }
}