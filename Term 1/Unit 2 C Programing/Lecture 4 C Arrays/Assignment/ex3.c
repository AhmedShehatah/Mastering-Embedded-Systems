/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-19 13:40:57
 * @modify date 2023-02-19 13:40:57
 * @desc [EX 3 Transpose of a matrix]
 */
#include <stdio.h>
static const int N = 20, M = 20;
int main()
{
    int n, m, arr[N][M], trans[M][N];
    printf("Enter rows and coloumns of matrix: ");
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            printf("Enter element a%d%d: ", i + 1, j + 1), scanf("%d", &arr[i][j]), trans[j][i] = arr[i][j];
    printf("Entered Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\r\n");
    }
    printf("\r\nTransposed Matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", trans[i][j]);
        printf("\r\n");
    }
}