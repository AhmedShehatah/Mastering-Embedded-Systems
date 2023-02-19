/**
 * @author [Ahmed Shehatah]
 * @email [ahmed2002.eg@mail.com]
 * @create date 2023-02-19 15:09:00
 * @modify date 2023-02-19 15:09:00
 * @desc [EX 1 Frequency of char]
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[300], freq[300] = {};
    printf("Enter String: ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
        freq[str[i]]++;
    printf("Enter char to get frequency of it: ");
    char ch;
    scanf("%c", &ch);
    printf("Frequency of %c = %d", ch, freq[ch]);
}