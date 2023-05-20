/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-05-20 20:14:35
 * @modify date 2023-05-20 20:14:35
 * @desc EX 1
 */
#include "stdio.h"

#define name(s) #s
void debug_pointer(char *ptr, char *var_name, int *val)
{
    printf("Address of pointer %s: %X\n", ptr, &ptr);
    printf("Content of %s: %d\n", ptr, *val);
}
int main()
{
    int *ab;
    int m = 29;
    ab = &m;
    printf("now ab assigned with address of m\n");
    debug_pointer(name(ab), name(m), &m);

    *ab = 34;
    printf("The value of m assigned to %d now.\n", m);
    debug_pointer(name(ab), name(m), &m);
    return 0;
}