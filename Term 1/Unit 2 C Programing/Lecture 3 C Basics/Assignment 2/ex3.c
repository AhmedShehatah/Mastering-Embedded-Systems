/**
 * @author  Ahmed Shehatah
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 15:04:55
 * @modify date 2023-02-07 15:04:55
 * @desc EX 3 Largest Number
 */
#include <stdio.h>
int main()
{
    printf("Enter Three Numbers: ");
    float x, y, z, mx;
    scanf("%f%f%f", &x, &y, &z);
    mx = x;
    if (mx < y)
        mx = y;
    if (mx < z)
        mx = z;
    printf("Largest Number = %f\n", mx);
}