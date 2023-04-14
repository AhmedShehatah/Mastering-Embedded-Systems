/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-04-14 16:18:33
 * @modify date 2023-04-14 16:18:33
 * @desc store info of students
 */

#include <stdio.h>
struct SInfo
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct SInfo students[10];
    printf("Enter Info of students:\n");
    for (int i = 0; i < 10; i++)
    {
        students[i].roll = i + 1;
        printf("for roll number %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", &students[i].name);
        fflush(stdin);
        fflush(stdout);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        fflush(stdin);
        fflush(stdout);
    }
    printf("Display Info of students:\n");
    for (int i = 0; i < 10; i++)
    {

        printf("info for roll number %d\n", students[i].roll);
        printf("Name: %s", students[i].name);
        printf("Marks: %f", students[i].marks);
    }
}
