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
    struct Employee e1, *ptr;
    ptr = &e1;

    printf("%u\n", ptr);
    // (*ptr).code = 100;
    ptr->code = 100; // You can also write this convenient hai yeh  // -> isko arrow operator bolte hai
    printf("%d\n", e1.code);
    return 0;
}