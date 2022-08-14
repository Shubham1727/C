#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    int code;
    float salary; // typedef ka kaam hai struct ke variable ko short krna ab ham main ke andar struct employee ki jagah sirf emp bhi likhe to kaam chljega
    char name[50];
} emp;

int main()
{
    emp e, *ptr;
    ptr = &e;
    ptr->code = 100;
    ptr->salary = 250.69;
    strcpy(ptr->name, "Akshit");

    printf("The code of employee is: %d\n", e.code);
    printf("The salary of employee is: %f\n", e.salary);
    printf("The name of employee is: %s\n", e.name);
    return 0;
}