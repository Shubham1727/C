#include <stdio.h>

typedef struct Students
{
    int marks;
    char name[50];
} Students;

int main()
{
    Students s1, s2, *ptr1, *ptr2;

    ptr1 = &s1;
    ptr2 = &s2;

    printf("Enter the name of student 1: ");
    scanf("%s", ptr1->name);
    printf("Enter the marks of student 1: ");
    scanf("%d", &ptr1->marks);

    printf("Enter the name of student 2: ");
    scanf("%s", ptr2->name);
    printf("Enter the marks of student 2: ");
    scanf("%d", &ptr2->marks);

    printf("The name and marks of student are: %s, %d\n", s1.name, s1.marks);
    printf("The name and marks of student are: %s, %d\n", s2.name, s2.marks);
    return 0;
}