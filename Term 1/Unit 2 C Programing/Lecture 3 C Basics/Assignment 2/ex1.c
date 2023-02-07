/**
 * @author Ahmed Shehatah
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 14:32:08
 * @modify date 2023-02-07 14:32:08
 * @desc EX 1 show if number is odd or even
 */
#include <stdio.h>
int main()
{
    int x;
    printf("Enter an integer you want to check: ");
    scanf("%d", &x);
    (x & 1) ? printf("%d is odd", x) : printf("%d is even", x);
}
