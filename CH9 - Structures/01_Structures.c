#include <stdio.h>
#include <string.h>

struct Employee
{
    int code; // -----> This declares a new user defined data type
    float salary;
    char name[50];
};

int main()
{
    struct Employee e1;
    e1.code = 100;
    e1.salary = 50.698;
    strcpy(e1.name, "Akshit");
    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    printf("%f\n", e1.salary);
    return 0;
}