/**
 * Write C Program to Multiply two Floating Point Numbers
 */

#include <stdio.h>
int main()
{
    fflush(stdin);
    fflush(stdout);
    printf("Enter Two Numbers: ");
    float x, y;
    scanf("%f%f", &x, &y);
    printf("Product: %f", x * y);
}