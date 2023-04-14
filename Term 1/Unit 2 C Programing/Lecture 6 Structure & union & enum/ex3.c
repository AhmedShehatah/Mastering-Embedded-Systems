/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-04-14 15:27:07
 * @modify date 2023-04-14 15:27:07
 * @desc add two complex numbers
 */
#include <stdio.h>
struct SComplex
{
    int real;
    int img;
} num1, num2;
struct SComplex addComp()
{
    struct SComplex res;
    res.real = num1.real + num2.real;
    res.img = num1.img + num2.img;
    return res;
}
int main()
{
    printf("For 1st number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%d%d", &num1.real, &num1.img);
    printf("For 2nd number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%d%d", &num2.real, &num2.img);
    struct SComplex res = addComp();
    printf("Sum = %d+%di\n", res.real, res.img);
}
