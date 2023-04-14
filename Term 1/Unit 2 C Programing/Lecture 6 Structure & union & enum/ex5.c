/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-04-14 16:33:22
 * @modify date 2023-04-14 16:33:22
 * @desc area of circle
 */
#include <stdio.h>
#define pi 3.141592653589793238
#define area(r) (pi * (r) * (r))

int main()
{
    int r;
    printf("Enter Radius of circle: ");
    scanf("%d", &r);
    printf("Area= %.2llf", area(r));
}