/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 15:14:50
 * @modify date 2023-02-07 15:14:50
 * @desc EX 4 is number pos, neg, or zeero
 */
#include <stdio.h>
int main()
{

    printf("Enter a number: ");
    float x;
    scanf("%f", &x);
    if (x > 0)
        printf("%f is positive", x);
    else if (x < 0)
        printf("%f is negative", x);
    else
        printf("you entered zero");
}
