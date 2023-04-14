/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-04-14 15:02:38
 * @modify date 2023-04-14 15:02:38
 * @desc ex2 add two distance inch-feet
 */
#include <stdio.h>

struct SDistance
{
    float foot;
    float inch;
} sum;
int main()
{
    for (int i = 1; i < 3; i++)
    {
        printf("enter distance %d\n", i);
        float feet, inch;
        printf("Enter Feet: ");
        scanf("%f", &feet);
        sum.foot += feet;
        printf("Enter inch: ");
        scanf("%f", &inch);
        sum.inch += inch;
    }
    if (sum.inch > 12)
        sum.inch -= 12, sum.foot++;
    printf("sum of distance: %.0f - %.1f", sum.foot, sum.inch);
}