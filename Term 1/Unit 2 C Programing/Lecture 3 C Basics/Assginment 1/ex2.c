/**
 * EX2:
 * Write C Program to Print a Integer Entered by a User
 *i should see the Console as following:
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