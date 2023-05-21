#include "stdio.h"
struct SEmpolyee
{
    int id;
    char name[20];
};
int main()
{
    struct SEmpolyee arr[15];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee Name: ");
        scanf("%s", &arr[i].name);
        printf("Enter Employee Id: ");
        scanf("%d", &arr[i].id);
    }
    struct SEmpolyee *ptr = arr;
    for (int i = 0; i < n; i++, ptr++)
    {
        printf("Employee Name: %s\n", ptr->name);
        printf("Employee Id: %d\n", ptr->id);
    }
}