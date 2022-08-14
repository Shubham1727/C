#include <stdio.h>

typedef struct Employee
{
    int salary;
    char name[10];
} Emp;

int main()
{
    Emp e1, e2;

    printf("Enter the name of employee 1: ");
    scanf("%s", e1.name);
    printf("Enter the name of employee 2: ");
    scanf("%s", e2.name);

    printf("Enter the salary of employee 1: ");
    scanf("%s", &e1.salary);
    printf("Enter the salary of employee 2: ");
    scanf("%s", &e2.salary);

    FILE *ptr;
    ptr = fopen("P4.txt", "w");
    fprintf("Name: %s, Salary: %d", e1.name, e1.salary);
    fprintf("Name: %s, Salary: %d", e2.name, e2.salary);

    fclose(ptr);
    return 0;
}