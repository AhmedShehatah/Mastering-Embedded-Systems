/**
 * Write C Program to Add Two Integers
 */
#include <stdio.h>
int main()
{
    fflush(stdin);
    fflush(stdout);
    printf("Enter Two Numbers: ");
    int x, y;
    scanf("%d%d", &x, &y);
    printf("sum: %d", x + y);
}