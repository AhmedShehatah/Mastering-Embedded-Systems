/**
 * Write Source Code to Swap Two Numbers
 */
#include <stdio.h>
int main()
{
    fflush(stdin);
    fflush(stdout);
    float a, b, temp;
    printf("Enter Value Of a: ");
    scanf("%f", &a);
    printf("Enter Value Of b: ");
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f", b);
}
