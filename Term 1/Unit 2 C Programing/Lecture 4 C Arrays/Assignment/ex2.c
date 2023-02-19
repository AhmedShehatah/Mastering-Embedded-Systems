/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-18 00:22:02
 * @modify date 2023-02-18 00:22:02
 * @desc [EX 2 Average using matrix]
 */
#include <stdio.h>
static const int N = 20;
int main()
{
    int n;
    float arr[N];
    printf("Enter the numbers of data: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("%d. Enter Number: ", i), scanf("%f", &arr[i]);
    float avg = 0;
    for (int i = 0; i < n; i++)
        avg += arr[i] / n;
    printf("Average = %.2f", avg);
}