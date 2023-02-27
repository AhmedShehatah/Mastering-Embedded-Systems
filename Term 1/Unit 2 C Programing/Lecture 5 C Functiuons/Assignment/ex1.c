/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-18 22:26:03
 * @modify date 2023-02-18 22:26:03
 * @desc [Prime Numbers]
 */

#include <stdio.h>
#include <math.h>
int x, y;
void printPrimes();
char isPrime(int x);
int main()
{
    printf("Enter Range: ");

    scanf("%d%d", &x, &y);
    printPrimes(x, y);
    return 0;
}
char isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;

    return (x != 1) ? 1 : 0;
}
void printPrimes()
{
    printf("Primes between %d and %d is: ", x, y);
    for (; x <= y; x++)
        if (isPrime(x))
            printf("%d ", x);
}
