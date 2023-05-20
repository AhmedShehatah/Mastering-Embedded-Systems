/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-05-20 20:41:30
 * @modify date 2023-05-20 20:41:30
 * @desc EX 2
 */
#include "stdio.h"
int main()
{
    char alpha[26];
    for (int i = 0; i < 26; i++)
        *(alpha + i) = i + 'A';
    for (int i = 0; i < 26; i++)
        printf("%c ", *(alpha + i));
    printf("\n");
}