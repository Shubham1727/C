#include <stdio.h>

void TenTimes(int *a)
{
    (*a) *= 10;
}
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("The value of i before function call is %d\n", i);
    TenTimes(&i);
    printf("The value of i after function call is %d\n", i);
    return 0;
}