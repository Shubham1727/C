#include <stdio.h>

void Address(int a)
{
    int *p;
    p = &a;
    printf("The address of variable i after function call is %u\n", p);
}
int main()
{
    int i;
    printf("The address of variable i before function call is %u\n", &i);
    Address(i);
    return 0;
}