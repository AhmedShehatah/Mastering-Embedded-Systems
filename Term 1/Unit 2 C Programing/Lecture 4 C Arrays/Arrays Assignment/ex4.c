/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-19 13:40:57
 * @modify date 2023-02-19 13:40:57
 * @desc [EX 4 insert to array]
 */
#include <stdio.h>

static const int N = 20;
int main()
{
    int n, arr[N], pos, item;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number to be inserted: ");
    scanf("%d", &item);
    printf("Enter the location: ");
    scanf("%d", &pos);
    pos--;
    int i = 0;
    while (i <= n)
    {
        if (i < pos)
            printf("%d ", arr[i]);
        else if (i == pos)
            printf("%d ", item);
        else
            printf("%d ", arr[i - 1]);
        i++;
    }
}