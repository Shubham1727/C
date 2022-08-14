#include <stdio.h>
#include <string.h>

struct Employee
{
    int code;
    float salary;
    char name[50];
};

void show(struct Employee e)
{
    printf("The code of employee is: %d\n", e.code);
    printf("The salary of employee is: %f\n", e.salary);
    printf("The name of employee is: %s\n", e.name);
}

int main()
{
    struct Employee e, *ptr;

    ptr = &e;
    ptr->code = 100;
    ptr->salary = 250.75;
    strcpy(ptr->name, "Akshit");

    show(e);
    return 0;
}