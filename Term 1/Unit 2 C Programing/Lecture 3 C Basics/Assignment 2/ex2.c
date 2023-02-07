/**
 * @author Ahmed Shehatah
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-07 14:38:55
 * @modify date 2023-02-07 14:38:55
 * @desc EX 2 check vowel or not
 */
#include <stdio.h>
int main()
{
    char x;
    printf("Enter a letter: ");
    scanf("%c", &x);
    char vowels[] = "aeiouAEIOU";
    char isVowel = 0;
    for (short i = 0; i < sizeof(vowels) / sizeof(vowels[0]); i++)
        if (vowels[i] == x)
            isVowel = 1;

    (isVowel) ? printf("%c is vowel", x) : printf("%c is consonant", x);
}