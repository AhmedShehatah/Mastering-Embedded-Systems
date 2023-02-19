/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-19 13:40:57
 * @modify date 2023-02-19 13:40:57
 * @desc [EX 5 search]
 */
#include <stdio.h>

static const int N = 20;
int main()
{
    int n, arr[N], item;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number to be searched: ");
    scanf("%d", &item);
    int pos = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == item)
            pos = i + 1;
    (pos) ? printf("Number found at: %d", pos) : printf("number not found");
}
