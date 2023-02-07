/**
 * EX2:
 * Write C Program to Print a Integer Entered by a User
 */

#include <stdio.h>
int main()
{
    printf("Enter an Integer: ");
    fflush(stdin);
    fflush(stdout);
    int x;
    scanf("%d", &x);
    printf("You entered: %d", x);
}