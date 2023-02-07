/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 15:14:50
 * @modify date 2023-02-07 15:14:50
 */

#include <stdio.h>
int main()
{
    printf("Enter operator (+,-,*,/): ");
    char op;
    scanf("%c", &op);
    printf("Enter Two Operands: ");
    float x, y, res;
    scanf("%f%f", &x, &y);

    switch (op)
    {
    case '*':
        res = x * y;
        break;
    case '/':
        res = x / y;
        break;
    case '+':
        res = x + y;
        break;
    case '-':
        res = x - y;
        break;
    default:
        printf("Invalid operator");
        return 0;
    }
    printf("result = %.2f\n", res);
    return 0;
}