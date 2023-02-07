/**
 * Write C Program to Find ASCII Value of a Character
 */

#include <stdio.h>
int main()
{
    fflush(stdin);
    fflush(stdout);
    printf("Enter a character: ");
    char ch;
    scanf("%c", &ch);
    printf("ASCII value of %c = %u", ch, ch);
}