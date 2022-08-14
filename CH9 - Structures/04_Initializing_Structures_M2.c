#include <stdio.h>

struct Employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct Employee e1 = {100, 200.75, "Akshit"};

    printf("Code is %d\n", e1.code);
    printf("Salary is %0.2f\n", e1.salary);
    printf("Name is %s\n", e1.name);
    return 0;
}