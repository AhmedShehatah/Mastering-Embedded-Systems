/**
 * @author Ahmed Shehatah
 * @email ahmed2002.eg@gmail.com
 * @create date 2023-04-14 14:49:02
 * @modify date 2023-04-14 14:49:02
 * @desc EX 1 store info (name, roll, and marks)
 */
#include <stdio.h>
struct SInfo
{
    char name[20];
    int roll;
    float marks;
} student;
int main()
{
    printf("Enter student info:\n");
    printf("Enter name: ");
    scanf("%s", &student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("Displaing info\n");
    printf("name: %s\nRoll: %d\nmarks: %f", student.name, student.roll, student.marks);
}