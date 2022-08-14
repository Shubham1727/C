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
    struct Employee facebook[100]; // --> multiple variables declare kre struct me array use krke

    facebook[0].code = 100;
    facebook[0].salary = 100.50;
    strcpy(facebook[0].name, "Jiraiya");

    facebook[1].code = 101;
    facebook[1].salary = 90.50;
    strcpy(facebook[1].name, "Orochimaru");

    facebook[2].code = 103;
    facebook[2].salary = 110.50;
    strcpy(facebook[2].name, "Tsunade");

    return 0;
}