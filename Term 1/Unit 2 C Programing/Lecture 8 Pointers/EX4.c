/**
 * @author Ahmed Shehatah
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-05-21 13:50:50
 * @modify date 2023-05-21 13:50:50
 * @desc [EX 4]
 */
#include <stdio.h>
int main()
{
    int arr[15], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int *ptr = &arr[n - 1];
    while (ptr != arr)
        printf("%d ", *ptr), ptr--;
    printf("%d\n", *ptr);
}