#include <stdio.h>
#include <string.h>

struct Employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct Employee e1, e2, e3;

    printf("Enter the code for employee e1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary for employee e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name for employee e1: ");
    scanf("%s", e1.name);

    printf("Enter the code for employee e2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary for employee e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name for employee e2: ");
    scanf("%s", e2.name);

    printf("Enter the code for employee e3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary for employee e3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name for employee e3: ");
    scanf("%s", e3.name);

    printf("%d\n", e1.code);
    printf("%d\n", e2.code);
    printf("%d\n", e3.code);

    printf("%f\n", e1.salary);
    printf("%f\n", e2.salary);
    printf("%f\n", e3.salary);

    printf("%s\n", e1.name);
    printf("%s\n", e2.name);
    printf("%s\n", e3.name);
    return 0;
}